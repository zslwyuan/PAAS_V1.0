/* verilator lint_off WIDTH */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off STMTDLY */
/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off UNDRIVEN */
module kernel (
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
  
	parameter ADDR_WID = 14;
	parameter DATA_WID = 32;	
    reg[DATA_WID-1:0] r_data[16384-1:0];
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

	parameter READY_READ_a = 64'd1;
	parameter WAIT_READ_a = 64'd2;
	parameter DEAL_READ_a = 64'd3;

	parameter READY_WRITE_a = 64'd5;
	parameter WAIT_WRITE_a = 64'd6;
    parameter DEAL_WRITE_a = 64'd7;

	parameter READY_READ_b = 64'd101;
	parameter WAIT_READ_b = 64'd102;
	parameter DEAL_READ_b = 64'd103;

	parameter READY_WRITE_b = 64'd105;
	parameter WAIT_WRITE_b = 64'd106;
    parameter DEAL_WRITE_b = 64'd107;


	parameter SUSPEND = 64'd8;
    parameter LOOP = 64'd9;
	parameter INIT = 64'd11;

	parameter RUN_MOD = 64'd200;
	parameter CHECK_MOD = 64'd201;
	parameter HIGH = 64'd202;

	wire[ADDR_WID-1:0] addr0,addr1;
	reg[ADDR_WID-1:0] saddr0,saddr1;
	wire ce0,we0,ce1,we1;

	reg r_next;
	/* verilator lint_off UNOPTFLAT */reg r_mod_clk;
	wire mod_clk;
	assign mod_clk=reset?clk:r_mod_clk;
	wire next=r_next;
	wire next_out;
	wire[DATA_WID-1:0] q0,q1,d0,d1,ret;
	reg[DATA_WID-1:0] r_q0,r_q1;
	reg[DATA_WID-1:0] r_d0,r_d1;
	reg[DATA_WID-1:0] rr_q0,rr_q1;
	assign q0=r_q0;
	assign q1=r_q1;
	reg [63:0] timer;
	reg [63:0] access_timer;
	reg r_ce0,r_we0,r_ce1,r_we1;

kernel_floyd_warshall kernel(
        .ap_clk(mod_clk),
        .ap_rst(reset),
        .ap_start(next),
        .ap_done(next_out),
        .ap_idle(),
        .ap_ready(),
        .path_address0(addr0),
        .path_ce0(ce0),
		.path_we0(we0),
		.path_d0(d0),
        .path_q0(q0),
        .path_address1(addr1),
        .path_ce1(ce1),
		.path_we1(we1),
		.path_d1(d1),
        .path_q1(q1)
);

integer i;

	always @(posedge mod_clk)
	begin
					r_ce0<=ce0;
					r_we0<=we0;
					r_ce1<=ce1;
					r_we1<=we1;
					r_d1<=d1;
					r_d0<=d0;
					rr_q0<=r_q0;
					rr_q1<=r_q1;
					saddr0<=addr0;
					saddr1<=addr1;
	end

	initial r_mod_clk=0;
    always @(posedge reset)
    begin
		//$display("reset");
	end
    always @(posedge clk)
    begin
			
		    if (reset)
		    begin
				r_mod_clk<=0;
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
				r_next<=1;
				timer<=0;
				access_timer<=0;
		    end
		    else
		    begin
				r_next<=1;
				if (state == INIT || state == RUN_MOD)
				begin					
					timer<=timer+1;
					//$display("RUN_MOD %d",next);
					r_mod_clk<=0;

				/*	if (r_ce0)
					begin
						if (r_we0)
						begin
							$display("we0 %d %d %d",saddr0,read_base+(saddr0<<2),r_d0);
						end
						else
						begin
							$display("re0 %d %d",saddr0,read_base+(saddr0<<2));
						end
					end
					if (r_ce1)
					begin
						if (r_we1)
						begin
							$display("we1 %d %d %d",saddr1,read_base+(saddr1<<2),r_d1);
						end
						else
						begin
							$display("re1 %d %d",saddr1,read_base+(saddr1<<2));
						end
					end*/
					if (r_ce0)
					begin
						if (r_we0)
						begin
							state <= WAIT_WRITE_a;
		            		r_write_addr<=write_base+(saddr0<<2);
		           			r_write_size<=read_size_input;
							r_write_data<=r_d0;	
					//		$display("d0: %d",d0);
		           			r_write_enable<=1;
						end
						else
						begin
		          			state<=WAIT_READ_a;
		        			r_read_addr<=read_base+(saddr0<<2);
						//	$display("read_addr0<=%d",read_base+(addr0<<2));
		            		r_read_size_output<=read_size_input;
		           			r_read_enable<=1;
						end
					end
					else
					if (r_ce1)
					begin
						if (r_we1)
						begin
							state <= WAIT_WRITE_b;
		            		r_write_addr<=write_base+(saddr1<<2);
		           			r_write_size<=read_size_input;
							r_write_data<=r_d1;				
				//			$display("d1: %d",d1);	
		           			r_write_enable<=1;
						end
						else
						begin
		          			state<=WAIT_READ_b;
		        			r_read_addr<=read_base+(saddr1<<2);
							//$display("read_addr1<=%d",read_base+(addr1<<2));
		            		r_read_size_output<=read_size_input;
		           			r_read_enable<=1;
						end
					end
					else
					if (next_out)
					begin
						$display("access amount:%d",timer-access_timer);
						state<=SUSPEND;
						r_done<=1;
						r_returnvalue<=ret;
					end
					else
					begin
						state<=CHECK_MOD;
					end

				end
				else
				if (state == CHECK_MOD || state == HIGH)
				begin
					//$display("HIGH %d",next);
					r_mod_clk<=~r_mod_clk;
					if ((~r_mod_clk)<r_mod_clk)
					begin
						if (next_out)
						begin
							$display("access amount:%d",timer-access_timer);
							state<=SUSPEND;
							r_done<=1;
							r_returnvalue<=ret;
						end
						else
							state <= RUN_MOD;
						access_timer<=access_timer+1;
					end
					
				end
		        else 
				begin
				//	$display("WAIT %d",next);
					r_mod_clk<=0;
					if (state == WAIT_READ_a)
				    begin
						r_finish_read<=0;			
						r_read_enable<=0;		
						//$display("waiting1");
						if (read_ready == 1)
						begin
							//$display("Rcnt:%d addr:%d data:%d",saddr0,r_read_addr,read_data);
							r_q0<=read_data;
							if (r_ce1)
							begin
								if (r_we1)
								begin
									state <= WAIT_WRITE_b;
						    		r_write_addr<=write_base+(saddr1<<2);
						   			r_write_size<=read_size_input;
									r_write_data<=r_d1;					
						   			r_write_enable<=1;
									r_read_enable<=0;
								end
								else
								begin
						  			state<=WAIT_READ_b;
									r_read_addr<=read_base+(saddr1<<2);
									//$display("read_addr1<=%d",read_base+(saddr1<<2));
						    		r_read_size_output<=read_size_input;
									if (r_read_enable) r_finish_read<=1;
						   			r_read_enable<=1;
								end
							end
							else
							begin
								r_read_enable<=0;
								//state<=RUN_MOD;
								
								if (next_out && state != SUSPEND)
								begin
									$display("access amount:%d",timer-access_timer);
									state<=SUSPEND;
									r_done<=1;
									r_returnvalue<=ret;
								end
								else
									state<=HIGH;
							end
						end
				    end
				    else if (state == WAIT_READ_b)
				    begin
						r_finish_read<=0;
						r_read_enable<=0;
						if (read_ready == 1)
						begin
							   // $display("Rcnt:%d addr:%d data:%d",saddr1,r_read_addr,read_data);
								r_q1<=read_data;
								if (next_out && state != SUSPEND)
								begin
									$display("access amount:%d",timer-access_timer);
									state<=SUSPEND;
									r_done<=1;
									r_returnvalue<=ret;
								end
								else
									state<=HIGH;
						end
				    end
				    else if (state == WAIT_WRITE_a)
				    begin
						r_finish_write<=0;
						r_write_enable<=0;
						if (write_ready == 1)
						begin
						//	$display("Wcnt:%d addr:%d data:%d",saddr0,r_write_addr,write_data);
						//	$display("WAIT_WRITE_a %d",r_write_addr);
						//	$display("write_data1: %d",r_write_data);
							if (r_ce1)
							begin
								if (r_we1)
								begin
									state <= WAIT_WRITE_b;
						    		r_write_addr<=write_base+(saddr1<<2);
						   			r_write_size<=read_size_input;
									r_write_data<=r_d1;	
									if (r_write_enable) r_finish_write<=1;
									r_write_enable<=1;
								end
								else
								begin
						  			state<=WAIT_READ_b;
									r_read_addr<=read_base+(saddr1<<2);
								//	$display("read_addr1<=%d",read_base+(saddr1<<2));
						    		r_read_size_output<=read_size_input;
						   			r_read_enable<=1;
								end
							end
							else
							begin
								if (next_out && state != SUSPEND)
								begin
									$display("access amount:%d",timer-access_timer);
									state<=SUSPEND;
									r_done<=1;
									r_returnvalue<=ret;
								end
								else
									state<=HIGH;
							end
						end
				    end
				    else if (state == WAIT_WRITE_b)
				    begin
						r_finish_write<=0;
						r_write_enable<=0;
						if (write_ready == 1)
						begin
								//$display("Wcnt:%d addr:%d data:%d",saddr1,r_write_addr,write_data);
								if (next_out && state != SUSPEND)
								begin
									$display("access amount:%d",timer-access_timer);
									state<=SUSPEND;
									r_done<=1;
									r_returnvalue<=ret;
								end
								else
									state<=HIGH;
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
    end
endmodule
