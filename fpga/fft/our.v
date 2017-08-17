//verilator lint_off UNUSED

module our (
  input wire clk, 

  input wire reset,
  input wire[63:0] read_base,
  input wire[63:0] write_base,
  input wire[63:0] num_read,
  input wire[63:0] read_size_input,
  input wire[63:0] read_ready,
  input wire[63:0] write_ready,
  input wire[63:0] read_data,
  output wire read_enable,
  output wire write_enable,
  output wire finish_read,
  output wire finish_write,
  output wire done,
  output wire[63:0] read_addr,
  output wire[63:0] write_addr,
  output wire[63:0] write_size,
  output wire[63:0] read_size_output,
  output wire[63:0] write_data);
  
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
    reg[63:0] r_read_data[511:0];
    reg[63:0] r_write_data;
	reg[63:0] r_write_data_arr[511:0];
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
	reg r_fft_clk;
	reg r_fft_reset;
	reg r_next;
//	reg true_fft_clk;
	wire fft_clk = r_fft_clk;
	wire fft_reset = r_fft_reset;
	wire next=r_next;
	wire next_out;
	
   reg [31:0] in [1:0];
   wire [31:0] X0;
   wire [31:0] Y0;
   wire [31:0] X1;
   wire [31:0] Y1;
   assign X0 = in[0];
   assign X1 = in[1];
   //fft128 mmoodd( .CLK(clk) ,.RST(reset) ,.ED(fft_clk) ,.START(next) ,.SHIFT(0) ,.DR(X0) ,.DI(X1) ,.RDY(next_out) ,.OVF1() ,.OVF2() ,.ADDR() ,.DOR(Y0) ,.DOI(Y1) );
	//cf_fft_1024_8 fftmod(clk, fft_clk, reset, next, X0, X1, next_out, Y0, Y1);
	dft_top fftmod(clk, reset, next, next_out,
   X0[31:16], Y0[31:16],
   X0[15:0], Y0[15:0],
   X1[31:16], Y1[31:16],
   X1[15:0], Y1[15:0]);
	reg[15:0] handle_cnt;
    always @(posedge clk)
    begin
		    if (reset)
		    begin
				handle_cnt<=0;
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
				r_fft_clk<=1;
				r_fft_reset<=1;
				r_next<=0;
		    end
		    else
		    begin
				if (state == INIT)
				begin
				//	$display("INIT\n");
					r_fft_reset<=0;
					r_fft_clk<=1;
					state<=IDLE;
				end				
				else if (state == IDLE)//START
		        begin				
			//		$display("IDLE\n");		
		          	state<=WAIT_READ;
		        	r_read_addr<=read_base;
		            r_read_size_output<=read_size_input;
		           	r_read_enable<=1;
					r_fft_clk<=1;
					//r_next<=1;
		        end
		        else if (state == WAIT_READ)
		        begin
				
					r_next<=0;
		            r_finish_read<=0;
		            if (read_ready == 1)
		            begin
						//$display("GET %d: %d %d %d %d",read_cnt[8:0],read_data[15:8],read_data[7:0],read_data[31:24],read_data[23:16]);
						r_fft_clk<=1;		                
						r_read_data[read_cnt[8:0]][31:0]<=read_data[31:0];
						r_read_data[read_cnt[8:0]][63:32]<=read_data[63:32];
		                state<= DEAL_READ;
		            end
					else
					begin
						r_fft_clk<=1;
					end
		        end
		        else if (state == DEAL_READ)
		        begin
					//$display("DEAL_READ\n");
					r_fft_clk<=1;
		            if (read_cnt + 1 < num_read)
		            begin
		                read_cnt<=read_cnt+1;
		                r_read_addr<=r_read_addr+read_size_input;
		                state<=WAIT_READ;
		                r_finish_read<=1;
		            end
		            else
		            begin
						r_fft_clk<=1;
		                state<=ALL_READY;
		                r_read_enable<=0;
		                r_finish_read<=0;
		            end
		        end
				else if (state == ALL_READY)
						begin
							r_next<=1;
							read_cnt<=0;
							state<=SEND;
						end
				else if (state == SEND)
						begin
							r_next<=0;
							in[0]<=r_read_data[read_cnt[8:0]][31:0];
							in[1]<=r_read_data[read_cnt[8:0]][63:32];
							if (read_cnt + 1 < num_read)
							begin
								read_cnt<=read_cnt+1;		
							end
							else
							begin
								state <= HANDLING;
							end
						end
		        else if (state == HANDLING)
						begin
								handle_cnt<=handle_cnt+1;
							//	$display("HANDLING %d",handle_cnt);
								if (next_out)
								begin
									r_fft_clk<=1;
									write_cnt<=0;
		           					state<=ALL_PROC;
								end
								else
								begin	
									r_fft_clk<=1;
								end
						end
				else if (state == ALL_PROC)
				begin
					r_write_data_arr[write_cnt[8:0]][31:0]<=Y0;
					r_write_data_arr[write_cnt[8:0]][63:32]<=Y1;
					if (write_cnt + 1 < num_read)
					begin
						write_cnt<=write_cnt+1;
					end
					else 
					begin
						write_cnt<=0;
						state<=READY_WRITE;
					end
				end
		        else if (state == READY_WRITE)
		        begin
				//	$display("READY_WRITE");
		            r_write_addr<=write_base;
		           	r_write_size<=read_size_input;
		            //r_write_data <= ans[write_cnt[1:0]];
					r_write_data[31:0]<=r_write_data_arr[write_cnt[8:0]][31:0];
					r_write_data[63:32]<=r_write_data_arr[write_cnt[8:0]][63:32];
					
		            r_write_enable<=1;
					r_fft_clk<=1;
		            state<=WAIT_WRITE;
		        end
		        else if (state == WAIT_WRITE)
		        begin
				//	$display("WAIT_WRITE\n");
		            r_finish_write<=0;

		            if (write_ready == 1)
		            begin
		                state<=DEAL_WRITE;
						r_fft_clk<=1;
		            end
		        end
		        else if (state == DEAL_WRITE)
		        begin
			//		$display("DEAL_WRITE : %d",write_cnt);
		            if (write_cnt + 1 < num_read)
		            begin
						r_fft_clk<=0;
		                r_finish_write<=1;
		                write_cnt<=write_cnt+1;
				    	r_write_data[31:0]<=r_write_data_arr[write_cnt[8:0]+1][31:0];
						r_write_data[63:32]<=r_write_data_arr[write_cnt[8:0]+1][63:32];
		                r_write_addr<=r_write_addr+write_size;
		                state<=WAIT_WRITE;
		            end
		            else
		            begin
		                r_finish_write<=0;
		                r_write_enable<=0;
						r_fft_reset<=1;
		                state<=SUSPEND;
		                r_done<=1;
						r_fft_clk<=1;
		            end
		        end
			
		    end
    end
endmodule
