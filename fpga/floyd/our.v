/* verilator lint_off WIDTH */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off STMTDLY */
/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off UNDRIVEN */
module our (
  input wire clk, 

  input wire reset,
  input wire[63:0] read_base,
  input wire[63:0] write_base,
  input wire[63:0] num_read,
  input wire[63:0] read_size_input,
  input wire[63:0] read_ready,
  input wire[63:0] write_ready,
  input wire[31:0] read_data,
  output wire read_enable,
  output wire write_enable,
  output wire finish_read,
  output wire finish_write,
  output wire done,
  output wire[63:0] read_addr,
  output wire[63:0] write_addr,
  output wire[63:0] write_size,
  output wire[63:0] read_size_output,
  output wire[31:0] write_data,
  output wire[31:0] returnvalue
);
  
	parameter ADDR_WID = 12;
	parameter DATA_WID = 32;	
    reg[DATA_WID-1:0] r_data[4096-1:0];
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
    reg[31:0] r_write_data;
	reg[31:0] r_returnvalue;
	assign returnvalue=r_returnvalue;
	//reg[63:0] tmp[0:8];
	//reg[63:0] ans[0:2];
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
	parameter INIT = 64'd11;
	parameter ALL_READY = 64'd12;
	parameter SEND = 64'd13;
	parameter ALL_PROC = 64'd14;
	parameter BACK = 64'd15;
	

	wire[ADDR_WID-1:0] addr00,addr01,addr10,addr11,addr20,addr21,addr30,addr31;
	wire ce00,we00,ce01,we01,ce10,we10,ce11,we11,ce20,we20,ce21,we21,ce30,we30,ce31,we31;

	reg r_next;
	wire next=r_next;
	wire next_out;
	wire[DATA_WID-1:0] q00,q01,d00,d01,q10,q11,d10,d11,q20,q21,d20,d21,q30,q31,d30,d31,ret;
	reg[DATA_WID-1:0] r_q00,r_q01,r_q10,r_q11,r_q20,r_q21,r_q30,r_q31;
	assign q00=r_q00;
	assign q01=r_q01;
	assign q10=r_q10;
	assign q11=r_q11;
	assign q20=r_q20;
	assign q21=r_q21;
	assign q30=r_q30;
	assign q31=r_q31;
	assign addr00[11:10]=0;
	assign addr01[11:10]=0;
	assign addr10[11:10]=1;
	assign addr11[11:10]=1;
	assign addr20[11:10]=2;
	assign addr21[11:10]=2;
	assign addr30[11:10]=3;
	assign addr31[11:10]=3;
	reg [63:0] timer;

kernel_floyd_warshall fl(
        .ap_clk(clk),
        .ap_rst(reset),
        .ap_start(next),
        .ap_done(next_out),
        .ap_idle(),
        .ap_ready(),
        .path_0_address0(addr00[9:0]),
        .path_0_ce0(ce00),
        .path_0_we0(we00),
        .path_0_d0(d00),
        .path_0_q0(q00),
        .path_0_address1(addr01[9:0]),
        .path_0_ce1(ce01),
        .path_0_we1(we01),
        .path_0_d1(d01),
        .path_0_q1(q01),
        .path_1_address0(addr10[9:0]),
        .path_1_ce0(ce10),
        .path_1_we0(we10),
        .path_1_d0(d10),
        .path_1_q0(q10),
        .path_1_address1(addr11[9:0]),
        .path_1_ce1(ce11),
        .path_1_we1(we11),
        .path_1_d1(d11),
        .path_1_q1(q11),
        .path_2_address0(addr20[9:0]),
        .path_2_ce0(ce20),
        .path_2_we0(we20),
        .path_2_d0(d20),
        .path_2_q0(q20),
        .path_2_address1(addr21[9:0]),
        .path_2_ce1(ce21),
        .path_2_we1(we21),
        .path_2_d1(d21),
        .path_2_q1(q21),
        .path_3_address0(addr30[9:0]),
        .path_3_ce0(ce30),
        .path_3_we0(we30),
        .path_3_d0(d30),
        .path_3_q0(q30),
        .path_3_address1(addr31[9:0]),
        .path_3_ce1(ce31),
        .path_3_we1(we31),
        .path_3_d1(d31),
        .path_3_q1(q31)
);

integer i;
    always @(posedge reset)
    begin
		//$display("reset");
	end
    always @(posedge clk)
    begin
			//$display("LOOP");
		    if (reset)
		    begin
		        state<=INIT;
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
				r_next<=0;
				timer<=0;
		    end
		    else
		    begin
				timer<=timer+1;
				if (state == INIT)
				begin						
			//			$display("INIT\n");				
					state<=IDLE;
				end				
				else if (state == IDLE)//START
		        begin				
					//$display("IDLE %d\n",read_base);		
		          	state<=WAIT_READ;
		        	r_read_addr<=read_base;
		            r_read_size_output<=read_size_input;
		           	r_read_enable<=1;
		        end
		        else if (state == WAIT_READ)
		        begin
				//	$write("WAIT_READ");
					r_finish_read<=0;
		            if (read_ready == 1)
		            begin
						
    					r_data[read_cnt[ADDR_WID-1:0]]<=read_data;
		                if (read_cnt + 1 < num_read)
		            	begin
				            read_cnt<=read_cnt+1;
				            r_read_addr<=r_read_addr+read_size_input;
				            state<=WAIT_READ;
				            r_finish_read<=1;
		            	end
		            	else
		            	begin
						//	$display("DEAL_READ\n");
				            
				            r_read_enable<=0;
				            r_finish_read<=0;
							r_next<=1;
							read_cnt<=0;
							state<=LOOP;
							$display("time1: %d",timer);
		            	end
					end
		        end
/////////////////////////////////////////////////////////

				else if (state == LOOP)
				begin
				//	$display("LOOP");
					r_next<=0;
					if (ce00)
					begin
						if (we00)
							r_data[addr00]<=d00;
						else
							r_q00<=r_data[addr00];
					end
					if (ce01)
					begin
						if (we01)
							r_data[addr01]<=d01;
						else
							r_q01<=r_data[addr01];
					end
					if (ce10)
					begin
						if (we10)
							r_data[addr10]<=d10;
						else
							r_q10<=r_data[addr10];
					end
					if (ce11)
					begin
						if (we11)
							r_data[addr11]<=d11;
						else
							r_q11<=r_data[addr11];
					end
					if (ce20)
					begin
						if (we20)
							r_data[addr20]<=d20;
						else
							r_q20<=r_data[addr20];
					end
					if (ce21)
					begin
						if (we21)
							r_data[addr21]<=d21;
						else
							r_q21<=r_data[addr21];
					end
					if (ce30)
					begin
						if (we30)
							r_data[addr30]<=d30;
						else
							r_q30<=r_data[addr30];
					end
					if (ce31)
					begin
						if (we31)
							r_data[addr31]<=d31;
						else
							r_q31<=r_data[addr31];
					end


					if (next_out)
					begin
						state<=READY_WRITE;
						r_returnvalue<=ret;
						$display("time2: %d",timer);
					//	$display("ret = %d",ret);
					end
				end
/////////////////////////////////////////////////////////
		        else if (state == READY_WRITE)
		        begin
					//$display("READY_WRITE");
					write_cnt<=0;
		            r_write_addr<=write_base;
		           	r_write_size<=read_size_input;
		            //r_write_data <= ans[write_cnt[1:0]];
					r_write_data<=r_data[write_cnt[ADDR_WID-1:0]];					
		            r_write_enable<=1;
		            state<=WAIT_WRITE;
		        end
		        else if (state == WAIT_WRITE)
		        begin
				//	$display("WAIT_WRITE\n");
		            r_finish_write<=0;
					
		            if (write_ready == 1)
		            begin
				        if (write_cnt + 1 < num_read)
				        begin
				            r_finish_write<=1;
				            write_cnt<=write_cnt+1;
							r_write_data<=r_data[write_cnt[ADDR_WID-1:0]+1];
				            r_write_addr<=r_write_addr+write_size;
				            state<=WAIT_WRITE;
				        end
				        else
				        begin
				            r_finish_write<=0;
				            r_write_enable<=0;
				            state<=SUSPEND;
				            r_done<=1;
							$display("time3: %d",timer);
				        end
		            end
		        end
				else if (state == SUSPEND)
				begin
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
						r_next<=0;
				end
			
		    end
    end
endmodule
