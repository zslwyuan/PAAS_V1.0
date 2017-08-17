/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off STMTDLY */
/* verilator lint_off UNDRIVEN */

`timescale 1 ns / 1 ps

  module Gsm_LPC_Analysis_lbW_DSP48_6(a, b, p);
input [15 - 1 : 0] a; 
input signed [16 - 1 : 0] b; 
output signed [31 - 1 : 0] p; 

assign p = $signed ({1'b0, a}) * $signed (b);

endmodule

`timescale 1 ns / 1 ps
module Gsm_LPC_Analysis_lbW(
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



Gsm_LPC_Analysis_lbW_DSP48_6 Gsm_LPC_Analysis_lbW_DSP48_6_U(
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

