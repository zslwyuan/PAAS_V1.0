module our(clk,reset,read_base,write_base,num_read,read_size_input,read_ready,write_ready,read_data,
			read_enable,write_enable,finish_read,finish_write,read_addr,write_addr,write_size,read_size_output,write_data,done);
    input wire clk;
    input wire reset;
    input wire[63:0] read_base;
	input wire[63:0] write_base;
	input wire[63:0] num_read;
	input wire[63:0] read_size_input;
	input wire[63:0] read_ready;
	input wire[63:0] write_ready;
	input wire[63:0] read_data;
    output wire read_enable;
	output wire write_enable;
	output wire finish_read;
	output wire finish_write;
    output wire done;
	output wire[63:0] read_addr;
	output wire[63:0] write_addr;
	output wire[63:0] write_size;
	output wire[63:0] read_size_output;
    output wire[63:0] write_data;

	wire[63:0]	id00;	  
	wire[63:0]	id01; 
	wire[63:0]	id02; 
	wire[63:0]	id03; 
	wire[63:0]	id04; 
	wire[63:0]	id05; 
	wire[63:0]	id06; 
	wire[63:0]	id07; 
	wire[63:0]	id08; 
	wire[63:0]	id09; 
	wire[63:0]	id10; 
	wire[63:0]	id11; 
	wire[63:0]	id12; 
	wire[63:0]	id13; 
	wire[63:0]	id14; 
	wire[63:0]	id15; 
	wire[63:0]	id16; 
	wire[63:0]	id17; 
	wire[63:0]	id18; 
	wire[63:0]	id19; 
	wire[63:0]	id20; 
	wire[63:0]	id21; 
	wire[63:0]	id22; 
	wire[63:0]	id23; 
	wire[63:0]	id24; 
	wire[63:0] od[24:0];

	reg[63:0] read_cnt;
	reg[63:0] write_cnt;
	reg[63:0] state;
    reg r_read_enable;
	reg r_write_enable;
	reg r_finish_read;
	reg r_finish_write;
    reg r_done;
	reg[63:0] r_read_addr;
	reg[63:0] r_write_addr;
	reg[63:0] r_write_size;
	reg[63:0] r_read_size_output;
    reg[63:0] r_read_data[24:0];

	assign id00=r_read_data[0];
	assign id01=r_read_data[1];
	assign id02=r_read_data[2];
	assign id03=r_read_data[3];
	assign id04=r_read_data[4];
	assign id05=r_read_data[5];
	assign id06=r_read_data[6];
	assign id07=r_read_data[7];
	assign id08=r_read_data[8];
	assign id09=r_read_data[9];
	assign id10=r_read_data[10];
	assign id11=r_read_data[11];
	assign id12=r_read_data[12];
	assign id13=r_read_data[13];
	assign id14=r_read_data[14];
	assign id15=r_read_data[15];
	assign id16=r_read_data[16];
	assign id17=r_read_data[17];
	assign id18=r_read_data[18];
	assign id19=r_read_data[19];
	assign id20=r_read_data[20];
	assign id21=r_read_data[21];
	assign id22=r_read_data[22];
	assign id23=r_read_data[23];
	assign id24=r_read_data[24];

    reg[63:0] r_write_data;
	//reg[63:0] tmp[0:201];
	//reg[63:0] ans[0:201];
	reg[63:0] clk_cnt;

    assign read_enable=r_read_enable;
	assign write_enable=r_write_enable;
	assign finish_read=r_finish_read;
	assign finish_write=r_finish_write;
	assign read_addr=r_read_addr;
	assign write_addr=r_write_addr;
	assign write_size=r_write_size;
	assign read_size_output=r_read_size_output;
    assign write_data=r_write_data;
    assign done=r_done;


	parameter IDLE = 64'd0;
	parameter READY_READ = 64'd1;
	parameter WAIT_READ = 64'd2;
	parameter DEAL_READ = 64'd3;
	parameter FINISH = 64'd4;
	parameter READY_WRITE = 64'd5;
	parameter WAIT_WRITE = 64'd6;
    parameter DEAL_WRITE = 64'd7;
	parameter SUSPEND = 64'd8;
    parameter LOOP = 64'd9;
    parameter HANDLING = 64'd10;
	
	order_25D_switch #(         
		.TIMES				(12	),                                   
		.DSIZE				(64	)                                             
	)order_25D_switch(                                        
		.clock		(clk		),			                        
		.id00       (id00        ),	.od00		(od[0]		),   
		.id01       (id01        ),	.od01       (od[1]        ),   
		.id02       (id02        ),	.od02       (od[2]        ),   
		.id03       (id03        ),	.od03       (od[3]        ),   
		.id04       (id04        ),	.od04       (od[4]        ),   
		.id05       (id05        ),	.od05       (od[5]        ),   
		.id06       (id06        ),	.od06       (od[6]        ),   
		.id07       (id07        ),	.od07       (od[7]        ),   
		.id08       (id08        ),	.od08       (od[8]        ),   
		.id09       (id09        ),	.od09       (od[9]        ),   
		.id10       (id10       ),	.od10       (od[10]       ),   
		.id11       (id11       ),	.od11       (od[11]       ),   
		.id12       (id12       ),	.od12       (od[12]       ),   
		.id13       (id13       ),	.od13       (od[13]       ),   
		.id14       (id14       ),	.od14       (od[14]       ),   
		.id15       (id15       ),	.od15       (od[15]       ),   
		.id16       (id16       ),	.od16       (od[16]       ),   
		.id17       (id17       ),	.od17       (od[17]       ),   
		.id18       (id18       ),	.od18       (od[18]       ),   
		.id19       (id19       ),	.od19       (od[19]       ),   
		.id20       (id20       ),	.od20       (od[20]       ),   
		.id21       (id21       ),	.od21       (od[21]       ),   
		.id22       (id22       ),	.od22       (od[22]       ),   
		.id23       (id23       ),	.od23       (od[23]       ),   
		.id24       (id24       ),	.od24       (od[24]       ) 	                                                        
	);     
    always @(posedge reset or posedge clk)
    begin
        if (reset)
        begin
            state<=IDLE;
            read_cnt<=0;
            write_cnt<=0;
            r_read_enable<=0;
            r_write_enable<=0;
            r_finish_read<=0;
            r_finish_write<=0;
            r_read_addr<=0;
            r_write_addr<=0;
            r_write_size<=0;
            r_read_size_output<=0;
            r_done<=0;
        end
        else
        begin
            if (state == IDLE)
            begin 
                state<=WAIT_READ;
                r_read_addr<=read_base;
                r_read_size_output<=read_size_input;
                r_read_enable<=1;
            end
            else if (state == WAIT_READ)
            begin
                r_finish_read<=0;
                if (read_ready == 1)
                begin
            //        tmp[read_cnt[7:0]]<=read_data;
					r_read_data[read_cnt[4:0]]<=read_data;
                    state<= DEAL_READ;
                end
            end
            else if (state == DEAL_READ)
            begin
                if (read_cnt + 1 < num_read)
                begin
                    read_cnt<=read_cnt+1;
                    r_read_addr<=r_read_addr+read_size_input;
                    state<=WAIT_READ;
                    r_finish_read<=1;
                end
                else
                begin
                    state<=HANDLING;
                    r_read_enable<=0;
                    r_finish_read<=0;
					clk_cnt<=0;
                end
            end
            else if (state == HANDLING)
            begin
				clk_cnt<=clk_cnt+1;
				if (clk_cnt<8)
				begin
                	state<=READY_WRITE;
				end
            end
            else if (state == READY_WRITE)
            begin
                r_write_addr<=write_base;
                r_write_size<=read_size_input;
                r_write_data <= od[0];
                r_write_enable<=1;
                state<=WAIT_WRITE;
            end
            else if (state == WAIT_WRITE)
            begin
                r_finish_write<=0;
                if (write_ready == 1)
                begin
                    state<=DEAL_WRITE;
                end
            end
            else if (state == DEAL_WRITE)
            begin
                if (write_cnt + 1 < num_read)
                begin
                    r_finish_write<=1;
                    write_cnt<=write_cnt+1;
                    r_write_data <= od[write_cnt[4:0]+1];
                    r_write_addr<=r_write_addr+write_size;
                    state<=WAIT_WRITE;
                end
                else
                begin
                    r_finish_write<=0;
                    r_write_enable<=0;
                    state<=SUSPEND;
                    r_done<=1;
                end
            end
			
        end
    end
endmodule
