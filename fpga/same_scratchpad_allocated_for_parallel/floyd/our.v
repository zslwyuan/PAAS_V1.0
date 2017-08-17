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
  
	parameter ADDR_WID = 13;
	parameter DATA_WID = 32;	
    reg[DATA_WID-1:0] r_data[8192-1:0];
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
	wire [63:0] read_end=read_base+(num_read<<2);
	wire [63:0] write_end=write_base+(num_read<<2);
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
	parameter LOOP1 = 64'd91;
	parameter scratchpad_size = 64'd8192;
	parameter LADDR = 0;
	parameter HADDR = LADDR+(scratchpad_size<<2);

	parameter READY_READ_a = 64'd331;
	parameter WAIT_READ_a = 64'd332;
	parameter DEAL_READ_a = 64'd333;

	parameter READY_WRITE_a = 64'd335;
	parameter WAIT_WRITE_a = 64'd336;
    parameter DEAL_WRITE_a = 64'd337;
    parameter SPM_Lat = 64'd5;

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
	reg [63:0] tmp_addr_head;
	reg [63:0] new_addr_head;
	reg reload;


  	reg[63:0] r_k_read_ready;
  	reg[63:0] r_k_write_ready;
  	reg[31:0] r_k_read_data;

  	wire[63:0] k_read_ready=r_k_read_ready;
  	wire[63:0] k_write_ready=r_k_write_ready;
  	wire[31:0] k_read_data=r_k_read_data;
  	wire k_read_enable;
  	wire k_write_enable;
  	wire k_done;
  	wire[63:0] k_read_addr;
  	wire[63:0] k_write_addr;
  	wire[31:0] k_write_data;
	reg read_waiting;
	reg write_waiting;
	/* verilator lint_off UNOPTFLAT */reg r_k_reset;
	wire k_reset=r_k_reset;
	wire f_read;
	wire f_write;
    reg [63:0] latency;
	reg [63:0] tj;
kernel kk(
  	.clk(clk), 
	.reset(k_reset),
  	.read_base(read_base),
  	.write_base(write_base),
  	.num_read(num_read),
  	.read_size_input(read_size_input),
  	.read_ready(k_read_ready),
  	.write_ready(k_write_ready),
  	.read_data(k_read_data),
  	.read_enable(k_read_enable),
  	.write_enable(k_write_enable),
  	.finish_read(f_read),
  	.finish_write(f_write),
  	.done(k_done),
  	.read_addr(k_read_addr),
  	.write_addr(k_write_addr),
  	.write_size(),
  	.read_size_output(),
  	.write_data(k_write_data),
  	.returnvalue()
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
				timer<=0;
				tmp_addr_head<=read_base+LADDR;
				reload<=0;
				read_waiting<=0;
				write_waiting<=0;
				r_k_reset<=1;
				latency <= 0;
				tj <= 0;
		    end
		    else
		    begin
				tj<=tj+1;
				//if (k_read_enable) read_waiting<=1;
				//if (k_write_enable) write_waiting<=1;
				timer<=timer+1;
				if (state == INIT)
				begin						
						$display("INIT\n");				
					state<=READY_READ;
					tmp_addr_head<=read_base+LADDR;
				end				
				else if (state == READY_READ)//START
		        begin				
					r_k_read_ready<=0;r_k_write_ready<=0;
					//$display("IDLE %d\n",read_base);		
		          	state<=WAIT_READ;
		        	r_read_addr<=tmp_addr_head;
		            r_read_size_output<=read_size_input;
		           	r_read_enable<=1;
					read_cnt<=0;
		        end
		        else if (state == WAIT_READ)
		        begin
				//	$write("WAIT_READ");
					r_finish_read<=0;
		            if (read_ready == 1)
		            begin
						r_data[read_cnt[ADDR_WID-1:0]]<=read_data;
					//	$write("%d ",read_data);
		                //if (read_cnt + 1 < num_read)
						if ((read_cnt + 1 < scratchpad_size) && (r_read_addr+read_size_input < read_end))
		            	begin
				            read_cnt<=read_cnt+1;
				            r_read_addr<=r_read_addr+read_size_input;
				            state<=WAIT_READ;
				            r_finish_read<=1;
		            	end
		            	else
		            	begin
						//	$display("DEAL_READ\n");
						//	$display("FPGA read:------------");
						//	for (i=0;i<num_read;i++)
							//	 $write("%d ",r_data[i]);
				           // $write("%d %d %d %d\n",r_data[1],r_data[10],r_data[5000],r_data[4211]);
				            r_read_enable<=0;
				            r_finish_read<=0;
							read_cnt<=0;
							state<=LOOP;
							r_k_reset<=0;
//$display("----- read_ready %d ---read: head:%d offset:%d block:%d data%d",r_k_read_ready,tmp_addr_head-tmp_addr_head,k_read_addr-tmp_addr_head,((k_read_addr-read_base)&((scratchpad_size<<2)-1))>>2,r_data[((k_read_addr-read_base)&((scratchpad_size<<2)-1))>>2]);
							tj<=0;
							$display("time1: %d",timer);
		            	end
					end
		        end
/////////////////////////////////////////////////////////

				else if (state == LOOP)
				begin
					r_k_read_ready<=0;r_k_write_ready<=0;
					//$display("LOOP");
					if ((k_read_enable||read_waiting)&&!f_read&&((k_read_addr>=(tmp_addr_head+HADDR-LADDR))||(k_read_addr<(tmp_addr_head))))
					begin
					//	$display("L1read");
						r_k_read_ready<=0;
		          		state<=WAIT_READ_a;
		        		r_read_addr<=k_read_addr;
					//	$display("read_addr--<=%d",k_read_addr);
		            	r_read_size_output<=read_size_input;
		           		r_read_enable<=1;
					end
					else if ((k_write_enable||write_waiting)&&!f_write&&((k_write_addr>=(tmp_addr_head+HADDR-LADDR))||(k_write_addr<(tmp_addr_head))))
					begin
					//	$display("L1write");
						r_k_write_ready<=0;
						state <= WAIT_WRITE_a;
		            	r_write_addr<=k_write_addr;
		           		r_write_size<=read_size_input;
						r_write_data<=k_write_data;	
						//$display("write_addr--<=%d",k_write_addr);
		           		r_write_enable<=1;
					end
					else
					if ((k_read_enable||read_waiting)&&!f_read)
					begin
					//	$display("SPMread");
						//$display("read_addr--<=%d",k_read_addr);
						
						//	$display("Rcnt:%d addr:%d data:%d",((k_read_addr-tmp_addr_head)>>2),k_read_addr,r_data[((k_read_addr-tmp_addr_head)&((scratchpad_size<<2)-1))>>2]);
						if (latency <= SPM_Lat) 
						begin
							latency<=latency+1;
							read_waiting<=1;
						end
						else
						begin
							r_k_read_ready<=1;
							read_waiting<=0;	
							latency <=0;
						end
						r_k_read_data<=r_data[((k_read_addr-tmp_addr_head)&((scratchpad_size<<2)-1))>>2];
						state <= LOOP;
					end
					else	
					if ((k_write_enable||write_waiting)&&!f_write)
					begin
					//	$display("SPMwrite");
						//	$display("Wcnt:%d addr:%d data:%d",((k_write_addr-tmp_addr_head)>>2),k_write_addr,k_write_data);

						if (latency <= SPM_Lat) 
						begin
							latency<=latency+1;
							write_waiting<=1;
						end
						else
						begin
							r_k_write_ready<=1;
							write_waiting<=0;	
							latency <=0;
						end
						r_data[((k_write_addr-tmp_addr_head)&((scratchpad_size<<2)-1))>>2]<=k_write_data;
						state <= LOOP;
					end	

					if (k_done)
					begin
						r_next<=0;
						r_k_reset<=1;
						reload<=0;
						state<=READY_WRITE;
						r_returnvalue<=ret;
				//		$write("%d %d %d %d\n",r_data[1],r_data[1001],r_data[2222],r_data[3211]);
					//	$display("ret = %d",ret);
						$display("time2: %d",timer);
					end
				end
/////////////////////////////////////////////////////////
		        else if (state == READY_WRITE)
		        begin
					r_k_read_ready<=0;r_k_write_ready<=0;
					//$display("READY_WRITE");
					write_cnt<=0;
		            r_write_addr<=tmp_addr_head;
		           	r_write_size<=read_size_input;
		            //r_write_data <= ans[write_cnt[1:0]];
				//	$write("%d ",r_data[write_cnt[ADDR_WID-1:0]]);
					r_write_data<=r_data[0];					
		            r_write_enable<=1;
		            state<=WAIT_WRITE;
					
		        end
		        else if (state == WAIT_WRITE)
		        begin
				//	$display("WAIT_WRITE\n");
		            r_finish_write<=0;
					if (write_ready == 1)
		            begin
						
				        if ((write_cnt + 1 < scratchpad_size) && (r_write_addr+write_size < write_end))
				        begin
				            r_finish_write<=1;
				            write_cnt<=write_cnt+1;
							r_write_data<=r_data[write_cnt[ADDR_WID-1:0]+1];
					//		$write("%d ",r_data[write_cnt[ADDR_WID-1:0]]);
				            r_write_addr<=r_write_addr+write_size;
				            state<=WAIT_WRITE;
				        end
				        else
				        begin
				            r_finish_write<=0;
				            r_write_enable<=0;
							if (reload)
							begin
							//	$display("changed: %d",timer);
								state<=READY_READ;
								tmp_addr_head<=new_addr_head;
							end
							else
							begin
				            	state<=SUSPEND;
				            	r_done<=1;
							end
							//$write("%d %d %d %d\n",r_data[1],r_data[10],r_data[5000],r_data[4211]);
				        //    $display("FPGA write:------------");
							//for (i=0;i<num_read;i++)
							//	 $write("%d ",r_data[i]);
					//		$display("time3: %d",timer);
				        end
		            end
		        end
				else if (state == WAIT_READ_a)
			    begin
					r_finish_read<=0;			
					r_read_enable<=0;		
					//$display("waiting1");
					if (read_ready == 1)
					begin
						r_k_read_ready<=1;
						r_k_read_data<=read_data;
						state <= LOOP;	
					end
			    end
			    else if (state == WAIT_WRITE_a)
			    begin
					r_finish_write<=0;
					r_write_enable<=0;
					if (write_ready == 1)
					begin
						r_k_write_ready<=1;
						state <= LOOP;
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
						r_k_reset<=1;
				end
			
		    end
    end
endmodule
