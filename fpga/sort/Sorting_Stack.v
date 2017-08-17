module Sorting_Stack( clk, hold, is_input, data_in, data_out);

	parameter HBIT= 63;				//	size of number in bits
	parameter R_SZ= 256;				//	capacity, max sequence size
	parameter _R_SZ= (R_SZ+1)/2;	//	not to modify
	input clk;
	input hold;							// 1 - to freeze state
	input is_input;					//	1 - while loading
	input [HBIT:0] data_in;			//	load one number at a clock
	output [HBIT:0] data_out;		//	while is_input==0, max value popping out here
	wire [HBIT:0] in_prev[_R_SZ-1:0];
	wire [HBIT:0] in_next[_R_SZ-1:0];
	wire [HBIT:0] out[_R_SZ-1:0];

	// storage
	

	// wiring
	generate
	  genvar i,j;
	  for (i=0;i<_R_SZ;i=i+1)
	  begin : cell_dclr
	  		Cell_Compare #(HBIT) CC(clk, hold, is_input,in_prev[i], in_next[i], out[i]);
	  end

	  for (i=0; i<_R_SZ-1; i=i+1) 
	  begin : block_name01
			assign in_prev[i+1]= out[i];
			assign in_next[i]= out[i+1];
	  end
	  assign in_prev[0]= data_in;
	  assign data_out= out[0];
	  assign in_next[_R_SZ-1]= 0;
	endgenerate

endmodule
