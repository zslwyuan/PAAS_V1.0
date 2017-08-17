/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINNOCONNECT */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off STMTDLY */
/* verilator lint_off WIDTH */
module our (
  input wire clk, 

  input wire reset,
  input wire[63:0] read_base,
  input wire[63:0] write_base,
  input wire[63:0] num_read,
  input wire[63:0] read_size_input,
  input wire[63:0] read_ready,
  input wire[63:0] write_ready,
  input wire[7:0] read_data,
  output wire read_enable,
  output wire write_enable,
  output wire finish_read,
  output wire finish_write,
  output wire done,
  output wire[63:0] read_addr,
  output wire[63:0] write_addr,
  output wire[63:0] write_size,
  output wire[63:0] read_size_output,
  output wire[7:0] write_data,
  output wire[31:0] returnvalue
);
  
	parameter ADDR_WID = 7;
	parameter DATA_WID = 8;	
    reg[DATA_WID-1:0] r_data[128-1:0];
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
    reg[DATA_WID-1:0] r_write_data;
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
	

	wire[ADDR_WID-1:0] addr0,addr1;
	wire ce0,we0,ce1,we1;

	reg r_next;
	wire next=r_next;
	wire next_out;
	wire[DATA_WID-1:0] q0,q1,d0,d1,ret;
	reg[DATA_WID-1:0] r_q0,r_q1;
	assign q0=r_q0;
	assign q1=r_q1;
	reg [63:0] timer;


BF_cfb64_encrypt enc(
        .ap_clk(clk),
        .ap_rst(reset),
        .ap_start(next),
        .ap_done(next_out),
        .ap_idle(),
        .ap_ready(),
        .in_r_address0(addr0),
        .in_r_ce0(ce0),
		.in_r_we0(we0),
		.in_r_d0(d0),
        .in_r_q0(q0),
        .in_r_address1(addr1),
        .in_r_ce1(ce1),
		.in_r_we1(we1),
		.in_r_d1(d1),
        .in_r_q1(q1)
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
					//	$display("%d - ADDR - %d - %d",read_cnt[ADDR_WID-1:0],r_read_addr,read_data);
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
						//	

							$display("DEAL_READ\n");
				            r_read_enable<=0;
				            r_finish_read<=0;
							r_next<=1;
							read_cnt<=0;
							state<=LOOP;
		            	end
					end
		        end
/////////////////////////////////////////////////////////

				else if (state == LOOP)
				begin
				//	$display("LOOP");
					r_next<=0;
					if (ce0)
					begin
						if (we0)
							r_data[addr0]<=d0;
						else
							r_q0<=r_data[addr0];
					end
					if (ce1)
					begin
						if (we1)
							r_data[addr1]<=d1;
						else
							r_q1<=r_data[addr1];
					end
					if (next_out)
					begin
						state<=READY_WRITE;
						r_returnvalue<=ret;
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
							$display("FINISH_WRITE\n");
							for (i=0;i<100;i=i+1)
								$write("%d ",r_data[i]);
				            r_finish_write<=0;
				            r_write_enable<=0;
				            state<=SUSPEND;
				            r_done<=1;
						//	$display("time: %d",timer);
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
