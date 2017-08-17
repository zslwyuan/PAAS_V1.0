module Cell_Compare( clk, hold, is_input, in_prev, in_next, out );

	parameter HBIT= 63;
	input clk;
	input hold;
	input is_input;
	input [HBIT:0] in_prev;
	input [HBIT:0] in_next;
	output [HBIT:0] out= is_input ? lower : higher;
	bit [HBIT:0] higher;
	bit [HBIT:0] lower;
	wire [HBIT:0] cand_h= is_input ? higher : lower;
	wire [HBIT:0] cand_l= is_input ? in_prev : in_next;

	always@(posedge clk )
	if (~hold)
	begin
		higher <= ( cand_h >= cand_l ) ? cand_h : cand_l;
		lower  <= ( cand_h >= cand_l ) ? cand_l : cand_h;
	end

endmodule

