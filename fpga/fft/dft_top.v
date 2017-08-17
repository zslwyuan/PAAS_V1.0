
//verilator lint_off UNUSED
//verilator lint_off DECLFILENAME
//verilator lint_off PINCONNECTEMPTY
//verilator lint_off IMPLICIT
//verilator lint_off WIDTH
//verilator lint_off CASEINCOMPLETE
//verilator lint_off INITIALDLY
//verilator lint_off BLKSEQ
module dft_top(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [15:0] t0_0;
   wire [15:0] t0_1;
   wire [15:0] t0_2;
   wire [15:0] t0_3;
   wire next_0;
   wire [15:0] t1_0;
   wire [15:0] t1_1;
   wire [15:0] t1_2;
   wire [15:0] t1_3;
   wire next_1;
   wire [15:0] t2_0;
   wire [15:0] t2_1;
   wire [15:0] t2_2;
   wire [15:0] t2_3;
   wire next_2;
   wire [15:0] t3_0;
   wire [15:0] t3_1;
   wire [15:0] t3_2;
   wire [15:0] t3_3;
   wire next_3;
   wire [15:0] t4_0;
   wire [15:0] t4_1;
   wire [15:0] t4_2;
   wire [15:0] t4_3;
   wire next_4;
   wire [15:0] t5_0;
   wire [15:0] t5_1;
   wire [15:0] t5_2;
   wire [15:0] t5_3;
   wire next_5;
   wire [15:0] t6_0;
   wire [15:0] t6_1;
   wire [15:0] t6_2;
   wire [15:0] t6_3;
   wire next_6;
   wire [15:0] t7_0;
   wire [15:0] t7_1;
   wire [15:0] t7_2;
   wire [15:0] t7_3;
   wire next_7;
   wire [15:0] t8_0;
   wire [15:0] t8_1;
   wire [15:0] t8_2;
   wire [15:0] t8_3;
   wire next_8;
   wire [15:0] t9_0;
   wire [15:0] t9_1;
   wire [15:0] t9_2;
   wire [15:0] t9_3;
   wire next_9;
   wire [15:0] t10_0;
   wire [15:0] t10_1;
   wire [15:0] t10_2;
   wire [15:0] t10_3;
   wire next_10;
   wire [15:0] t11_0;
   wire [15:0] t11_1;
   wire [15:0] t11_2;
   wire [15:0] t11_3;
   wire next_11;
   wire [15:0] t12_0;
   wire [15:0] t12_1;
   wire [15:0] t12_2;
   wire [15:0] t12_3;
   wire next_12;
   wire [15:0] t13_0;
   wire [15:0] t13_1;
   wire [15:0] t13_2;
   wire [15:0] t13_3;
   wire next_13;
   wire [15:0] t14_0;
   wire [15:0] t14_1;
   wire [15:0] t14_2;
   wire [15:0] t14_3;
   wire next_14;
   wire [15:0] t15_0;
   wire [15:0] t15_1;
   wire [15:0] t15_2;
   wire [15:0] t15_3;
   wire next_15;
   wire [15:0] t16_0;
   wire [15:0] t16_1;
   wire [15:0] t16_2;
   wire [15:0] t16_3;
   wire next_16;
   wire [15:0] t17_0;
   wire [15:0] t17_1;
   wire [15:0] t17_2;
   wire [15:0] t17_3;
   wire next_17;
   wire [15:0] t18_0;
   wire [15:0] t18_1;
   wire [15:0] t18_2;
   wire [15:0] t18_3;
   wire next_18;
   wire [15:0] t19_0;
   wire [15:0] t19_1;
   wire [15:0] t19_2;
   wire [15:0] t19_3;
   wire next_19;
   wire [15:0] t20_0;
   wire [15:0] t20_1;
   wire [15:0] t20_2;
   wire [15:0] t20_3;
   wire next_20;
   wire [15:0] t21_0;
   wire [15:0] t21_1;
   wire [15:0] t21_2;
   wire [15:0] t21_3;
   wire next_21;
   wire [15:0] t22_0;
   wire [15:0] t22_1;
   wire [15:0] t22_2;
   wire [15:0] t22_3;
   wire next_22;
   wire [15:0] t23_0;
   wire [15:0] t23_1;
   wire [15:0] t23_2;
   wire [15:0] t23_3;
   wire next_23;
   wire [15:0] t24_0;
   wire [15:0] t24_1;
   wire [15:0] t24_2;
   wire [15:0] t24_3;
   wire next_24;
   wire [15:0] t25_0;
   wire [15:0] t25_1;
   wire [15:0] t25_2;
   wire [15:0] t25_3;
   wire next_25;
   wire [15:0] t26_0;
   wire [15:0] t26_1;
   wire [15:0] t26_2;
   wire [15:0] t26_3;
   wire next_26;
   wire [15:0] t27_0;
   wire [15:0] t27_1;
   wire [15:0] t27_2;
   wire [15:0] t27_3;
   wire next_27;
   wire [15:0] t28_0;
   wire [15:0] t28_1;
   wire [15:0] t28_2;
   wire [15:0] t28_3;
   wire next_28;
   wire [15:0] t29_0;
   wire [15:0] t29_1;
   wire [15:0] t29_2;
   wire [15:0] t29_3;
   wire next_29;
   wire [15:0] t30_0;
   wire [15:0] t30_1;
   wire [15:0] t30_2;
   wire [15:0] t30_3;
   wire next_30;
   assign t0_0 = X0;
   assign Y0 = t30_0;
   assign t0_1 = X1;
   assign Y1 = t30_1;
   assign t0_2 = X2;
   assign Y2 = t30_2;
   assign t0_3 = X3;
   assign Y3 = t30_3;
   assign next_0 = next;
   assign next_out = next_30;

// latency=1028, gap=512
   rc65368 stage0(.clk(clk), .reset(reset), .next(next_0), .next_out(next_1),
    .X0(t0_0), .Y0(t1_0),
    .X1(t0_1), .Y1(t1_1),
    .X2(t0_2), .Y2(t1_2),
    .X3(t0_3), .Y3(t1_3));


// latency=2, gap=512
   codeBlock65370 stage1(.clk(clk), .reset(reset), .next_in(next_1), .next_out(next_2),
       .X0_in(t1_0), .Y0(t2_0),
       .X1_in(t1_1), .Y1(t2_1),
       .X2_in(t1_2), .Y2(t2_2),
       .X3_in(t1_3), .Y3(t2_3));


// latency=8, gap=512
   rc65452 stage2(.clk(clk), .reset(reset), .next(next_2), .next_out(next_3),
    .X0(t2_0), .Y0(t3_0),
    .X1(t2_1), .Y1(t3_1),
    .X2(t2_2), .Y2(t3_2),
    .X3(t2_3), .Y3(t3_3));


// latency=8, gap=512
   DirSum_65633 stage3(.next(next_3), .clk(clk), .reset(reset), .next_out(next_4),
       .X0(t3_0), .Y0(t4_0),
       .X1(t3_1), .Y1(t4_1),
       .X2(t3_2), .Y2(t4_2),
       .X3(t3_3), .Y3(t4_3));


// latency=2, gap=512
   codeBlock65636 stage4(.clk(clk), .reset(reset), .next_in(next_4), .next_out(next_5),
       .X0_in(t4_0), .Y0(t5_0),
       .X1_in(t4_1), .Y1(t5_1),
       .X2_in(t4_2), .Y2(t5_2),
       .X3_in(t4_3), .Y3(t5_3));


// latency=12, gap=512
   rc65718 stage5(.clk(clk), .reset(reset), .next(next_5), .next_out(next_6),
    .X0(t5_0), .Y0(t6_0),
    .X1(t5_1), .Y1(t6_1),
    .X2(t5_2), .Y2(t6_2),
    .X3(t5_3), .Y3(t6_3));


// latency=8, gap=512
   DirSum_65907 stage6(.next(next_6), .clk(clk), .reset(reset), .next_out(next_7),
       .X0(t6_0), .Y0(t7_0),
       .X1(t6_1), .Y1(t7_1),
       .X2(t6_2), .Y2(t7_2),
       .X3(t6_3), .Y3(t7_3));


// latency=2, gap=512
   codeBlock65910 stage7(.clk(clk), .reset(reset), .next_in(next_7), .next_out(next_8),
       .X0_in(t7_0), .Y0(t8_0),
       .X1_in(t7_1), .Y1(t8_1),
       .X2_in(t7_2), .Y2(t8_2),
       .X3_in(t7_3), .Y3(t8_3));


// latency=20, gap=512
   rc65992 stage8(.clk(clk), .reset(reset), .next(next_8), .next_out(next_9),
    .X0(t8_0), .Y0(t9_0),
    .X1(t8_1), .Y1(t9_1),
    .X2(t8_2), .Y2(t9_2),
    .X3(t8_3), .Y3(t9_3));


// latency=8, gap=512
   DirSum_66197 stage9(.next(next_9), .clk(clk), .reset(reset), .next_out(next_10),
       .X0(t9_0), .Y0(t10_0),
       .X1(t9_1), .Y1(t10_1),
       .X2(t9_2), .Y2(t10_2),
       .X3(t9_3), .Y3(t10_3));


// latency=2, gap=512
   codeBlock66200 stage10(.clk(clk), .reset(reset), .next_in(next_10), .next_out(next_11),
       .X0_in(t10_0), .Y0(t11_0),
       .X1_in(t10_1), .Y1(t11_1),
       .X2_in(t10_2), .Y2(t11_2),
       .X3_in(t10_3), .Y3(t11_3));


// latency=36, gap=512
   rc66282 stage11(.clk(clk), .reset(reset), .next(next_11), .next_out(next_12),
    .X0(t11_0), .Y0(t12_0),
    .X1(t11_1), .Y1(t12_1),
    .X2(t11_2), .Y2(t12_2),
    .X3(t11_3), .Y3(t12_3));


// latency=8, gap=512
   DirSum_66519 stage12(.next(next_12), .clk(clk), .reset(reset), .next_out(next_13),
       .X0(t12_0), .Y0(t13_0),
       .X1(t12_1), .Y1(t13_1),
       .X2(t12_2), .Y2(t13_2),
       .X3(t12_3), .Y3(t13_3));


// latency=2, gap=512
   codeBlock66522 stage13(.clk(clk), .reset(reset), .next_in(next_13), .next_out(next_14),
       .X0_in(t13_0), .Y0(t14_0),
       .X1_in(t13_1), .Y1(t14_1),
       .X2_in(t13_2), .Y2(t14_2),
       .X3_in(t13_3), .Y3(t14_3));


// latency=68, gap=512
   rc66604 stage14(.clk(clk), .reset(reset), .next(next_14), .next_out(next_15),
    .X0(t14_0), .Y0(t15_0),
    .X1(t14_1), .Y1(t15_1),
    .X2(t14_2), .Y2(t15_2),
    .X3(t14_3), .Y3(t15_3));


// latency=8, gap=512
   DirSum_66905 stage15(.next(next_15), .clk(clk), .reset(reset), .next_out(next_16),
       .X0(t15_0), .Y0(t16_0),
       .X1(t15_1), .Y1(t16_1),
       .X2(t15_2), .Y2(t16_2),
       .X3(t15_3), .Y3(t16_3));


// latency=2, gap=512
   codeBlock66908 stage16(.clk(clk), .reset(reset), .next_in(next_16), .next_out(next_17),
       .X0_in(t16_0), .Y0(t17_0),
       .X1_in(t16_1), .Y1(t17_1),
       .X2_in(t16_2), .Y2(t17_2),
       .X3_in(t16_3), .Y3(t17_3));


// latency=132, gap=512
   rc66990 stage17(.clk(clk), .reset(reset), .next(next_17), .next_out(next_18),
    .X0(t17_0), .Y0(t18_0),
    .X1(t17_1), .Y1(t18_1),
    .X2(t17_2), .Y2(t18_2),
    .X3(t17_3), .Y3(t18_3));


// latency=8, gap=512
   DirSum_67419 stage18(.next(next_18), .clk(clk), .reset(reset), .next_out(next_19),
       .X0(t18_0), .Y0(t19_0),
       .X1(t18_1), .Y1(t19_1),
       .X2(t18_2), .Y2(t19_2),
       .X3(t18_3), .Y3(t19_3));


// latency=2, gap=512
   codeBlock67422 stage19(.clk(clk), .reset(reset), .next_in(next_19), .next_out(next_20),
       .X0_in(t19_0), .Y0(t20_0),
       .X1_in(t19_1), .Y1(t20_1),
       .X2_in(t19_2), .Y2(t20_2),
       .X3_in(t19_3), .Y3(t20_3));


// latency=260, gap=512
   rc67504 stage20(.clk(clk), .reset(reset), .next(next_20), .next_out(next_21),
    .X0(t20_0), .Y0(t21_0),
    .X1(t20_1), .Y1(t21_1),
    .X2(t20_2), .Y2(t21_2),
    .X3(t20_3), .Y3(t21_3));


// latency=8, gap=512
   DirSum_68189 stage21(.next(next_21), .clk(clk), .reset(reset), .next_out(next_22),
       .X0(t21_0), .Y0(t22_0),
       .X1(t21_1), .Y1(t22_1),
       .X2(t21_2), .Y2(t22_2),
       .X3(t21_3), .Y3(t22_3));


// latency=2, gap=512
   codeBlock68192 stage22(.clk(clk), .reset(reset), .next_in(next_22), .next_out(next_23),
       .X0_in(t22_0), .Y0(t23_0),
       .X1_in(t22_1), .Y1(t23_1),
       .X2_in(t22_2), .Y2(t23_2),
       .X3_in(t22_3), .Y3(t23_3));


// latency=516, gap=512
   rc68274 stage23(.clk(clk), .reset(reset), .next(next_23), .next_out(next_24),
    .X0(t23_0), .Y0(t24_0),
    .X1(t23_1), .Y1(t24_1),
    .X2(t23_2), .Y2(t24_2),
    .X3(t23_3), .Y3(t24_3));


// latency=8, gap=512
   DirSum_69471 stage24(.next(next_24), .clk(clk), .reset(reset), .next_out(next_25),
       .X0(t24_0), .Y0(t25_0),
       .X1(t24_1), .Y1(t25_1),
       .X2(t24_2), .Y2(t25_2),
       .X3(t24_3), .Y3(t25_3));


// latency=2, gap=512
   codeBlock69474 stage25(.clk(clk), .reset(reset), .next_in(next_25), .next_out(next_26),
       .X0_in(t25_0), .Y0(t26_0),
       .X1_in(t25_1), .Y1(t26_1),
       .X2_in(t25_2), .Y2(t26_2),
       .X3_in(t25_3), .Y3(t26_3));


// latency=1028, gap=512
   rc69556 stage26(.clk(clk), .reset(reset), .next(next_26), .next_out(next_27),
    .X0(t26_0), .Y0(t27_0),
    .X1(t26_1), .Y1(t27_1),
    .X2(t26_2), .Y2(t27_2),
    .X3(t26_3), .Y3(t27_3));


// latency=8, gap=512
   DirSum_71776 stage27(.next(next_27), .clk(clk), .reset(reset), .next_out(next_28),
       .X0(t27_0), .Y0(t28_0),
       .X1(t27_1), .Y1(t28_1),
       .X2(t27_2), .Y2(t28_2),
       .X3(t27_3), .Y3(t28_3));


// latency=2, gap=512
   codeBlock71779 stage28(.clk(clk), .reset(reset), .next_in(next_28), .next_out(next_29),
       .X0_in(t28_0), .Y0(t29_0),
       .X1_in(t28_1), .Y1(t29_1),
       .X2_in(t28_2), .Y2(t29_2),
       .X3_in(t28_3), .Y3(t29_3));


// latency=1028, gap=512
   rc71861 stage29(.clk(clk), .reset(reset), .next(next_29), .next_out(next_30),
    .X0(t29_0), .Y0(t30_0),
    .X1(t29_1), .Y1(t30_1),
    .X2(t29_2), .Y2(t30_2),
    .X3(t29_3), .Y3(t30_3));


endmodule

// Latency: 1028
// Gap: 512
module rc65368(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm65366 instPerm73694(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet65366(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [8:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        9'd0: control <= 1'b1;
        9'd1: control <= 1'b1;
        9'd2: control <= 1'b1;
        9'd3: control <= 1'b1;
        9'd4: control <= 1'b1;
        9'd5: control <= 1'b1;
        9'd6: control <= 1'b1;
        9'd7: control <= 1'b1;
        9'd8: control <= 1'b1;
        9'd9: control <= 1'b1;
        9'd10: control <= 1'b1;
        9'd11: control <= 1'b1;
        9'd12: control <= 1'b1;
        9'd13: control <= 1'b1;
        9'd14: control <= 1'b1;
        9'd15: control <= 1'b1;
        9'd16: control <= 1'b1;
        9'd17: control <= 1'b1;
        9'd18: control <= 1'b1;
        9'd19: control <= 1'b1;
        9'd20: control <= 1'b1;
        9'd21: control <= 1'b1;
        9'd22: control <= 1'b1;
        9'd23: control <= 1'b1;
        9'd24: control <= 1'b1;
        9'd25: control <= 1'b1;
        9'd26: control <= 1'b1;
        9'd27: control <= 1'b1;
        9'd28: control <= 1'b1;
        9'd29: control <= 1'b1;
        9'd30: control <= 1'b1;
        9'd31: control <= 1'b1;
        9'd32: control <= 1'b1;
        9'd33: control <= 1'b1;
        9'd34: control <= 1'b1;
        9'd35: control <= 1'b1;
        9'd36: control <= 1'b1;
        9'd37: control <= 1'b1;
        9'd38: control <= 1'b1;
        9'd39: control <= 1'b1;
        9'd40: control <= 1'b1;
        9'd41: control <= 1'b1;
        9'd42: control <= 1'b1;
        9'd43: control <= 1'b1;
        9'd44: control <= 1'b1;
        9'd45: control <= 1'b1;
        9'd46: control <= 1'b1;
        9'd47: control <= 1'b1;
        9'd48: control <= 1'b1;
        9'd49: control <= 1'b1;
        9'd50: control <= 1'b1;
        9'd51: control <= 1'b1;
        9'd52: control <= 1'b1;
        9'd53: control <= 1'b1;
        9'd54: control <= 1'b1;
        9'd55: control <= 1'b1;
        9'd56: control <= 1'b1;
        9'd57: control <= 1'b1;
        9'd58: control <= 1'b1;
        9'd59: control <= 1'b1;
        9'd60: control <= 1'b1;
        9'd61: control <= 1'b1;
        9'd62: control <= 1'b1;
        9'd63: control <= 1'b1;
        9'd64: control <= 1'b1;
        9'd65: control <= 1'b1;
        9'd66: control <= 1'b1;
        9'd67: control <= 1'b1;
        9'd68: control <= 1'b1;
        9'd69: control <= 1'b1;
        9'd70: control <= 1'b1;
        9'd71: control <= 1'b1;
        9'd72: control <= 1'b1;
        9'd73: control <= 1'b1;
        9'd74: control <= 1'b1;
        9'd75: control <= 1'b1;
        9'd76: control <= 1'b1;
        9'd77: control <= 1'b1;
        9'd78: control <= 1'b1;
        9'd79: control <= 1'b1;
        9'd80: control <= 1'b1;
        9'd81: control <= 1'b1;
        9'd82: control <= 1'b1;
        9'd83: control <= 1'b1;
        9'd84: control <= 1'b1;
        9'd85: control <= 1'b1;
        9'd86: control <= 1'b1;
        9'd87: control <= 1'b1;
        9'd88: control <= 1'b1;
        9'd89: control <= 1'b1;
        9'd90: control <= 1'b1;
        9'd91: control <= 1'b1;
        9'd92: control <= 1'b1;
        9'd93: control <= 1'b1;
        9'd94: control <= 1'b1;
        9'd95: control <= 1'b1;
        9'd96: control <= 1'b1;
        9'd97: control <= 1'b1;
        9'd98: control <= 1'b1;
        9'd99: control <= 1'b1;
        9'd100: control <= 1'b1;
        9'd101: control <= 1'b1;
        9'd102: control <= 1'b1;
        9'd103: control <= 1'b1;
        9'd104: control <= 1'b1;
        9'd105: control <= 1'b1;
        9'd106: control <= 1'b1;
        9'd107: control <= 1'b1;
        9'd108: control <= 1'b1;
        9'd109: control <= 1'b1;
        9'd110: control <= 1'b1;
        9'd111: control <= 1'b1;
        9'd112: control <= 1'b1;
        9'd113: control <= 1'b1;
        9'd114: control <= 1'b1;
        9'd115: control <= 1'b1;
        9'd116: control <= 1'b1;
        9'd117: control <= 1'b1;
        9'd118: control <= 1'b1;
        9'd119: control <= 1'b1;
        9'd120: control <= 1'b1;
        9'd121: control <= 1'b1;
        9'd122: control <= 1'b1;
        9'd123: control <= 1'b1;
        9'd124: control <= 1'b1;
        9'd125: control <= 1'b1;
        9'd126: control <= 1'b1;
        9'd127: control <= 1'b1;
        9'd128: control <= 1'b1;
        9'd129: control <= 1'b1;
        9'd130: control <= 1'b1;
        9'd131: control <= 1'b1;
        9'd132: control <= 1'b1;
        9'd133: control <= 1'b1;
        9'd134: control <= 1'b1;
        9'd135: control <= 1'b1;
        9'd136: control <= 1'b1;
        9'd137: control <= 1'b1;
        9'd138: control <= 1'b1;
        9'd139: control <= 1'b1;
        9'd140: control <= 1'b1;
        9'd141: control <= 1'b1;
        9'd142: control <= 1'b1;
        9'd143: control <= 1'b1;
        9'd144: control <= 1'b1;
        9'd145: control <= 1'b1;
        9'd146: control <= 1'b1;
        9'd147: control <= 1'b1;
        9'd148: control <= 1'b1;
        9'd149: control <= 1'b1;
        9'd150: control <= 1'b1;
        9'd151: control <= 1'b1;
        9'd152: control <= 1'b1;
        9'd153: control <= 1'b1;
        9'd154: control <= 1'b1;
        9'd155: control <= 1'b1;
        9'd156: control <= 1'b1;
        9'd157: control <= 1'b1;
        9'd158: control <= 1'b1;
        9'd159: control <= 1'b1;
        9'd160: control <= 1'b1;
        9'd161: control <= 1'b1;
        9'd162: control <= 1'b1;
        9'd163: control <= 1'b1;
        9'd164: control <= 1'b1;
        9'd165: control <= 1'b1;
        9'd166: control <= 1'b1;
        9'd167: control <= 1'b1;
        9'd168: control <= 1'b1;
        9'd169: control <= 1'b1;
        9'd170: control <= 1'b1;
        9'd171: control <= 1'b1;
        9'd172: control <= 1'b1;
        9'd173: control <= 1'b1;
        9'd174: control <= 1'b1;
        9'd175: control <= 1'b1;
        9'd176: control <= 1'b1;
        9'd177: control <= 1'b1;
        9'd178: control <= 1'b1;
        9'd179: control <= 1'b1;
        9'd180: control <= 1'b1;
        9'd181: control <= 1'b1;
        9'd182: control <= 1'b1;
        9'd183: control <= 1'b1;
        9'd184: control <= 1'b1;
        9'd185: control <= 1'b1;
        9'd186: control <= 1'b1;
        9'd187: control <= 1'b1;
        9'd188: control <= 1'b1;
        9'd189: control <= 1'b1;
        9'd190: control <= 1'b1;
        9'd191: control <= 1'b1;
        9'd192: control <= 1'b1;
        9'd193: control <= 1'b1;
        9'd194: control <= 1'b1;
        9'd195: control <= 1'b1;
        9'd196: control <= 1'b1;
        9'd197: control <= 1'b1;
        9'd198: control <= 1'b1;
        9'd199: control <= 1'b1;
        9'd200: control <= 1'b1;
        9'd201: control <= 1'b1;
        9'd202: control <= 1'b1;
        9'd203: control <= 1'b1;
        9'd204: control <= 1'b1;
        9'd205: control <= 1'b1;
        9'd206: control <= 1'b1;
        9'd207: control <= 1'b1;
        9'd208: control <= 1'b1;
        9'd209: control <= 1'b1;
        9'd210: control <= 1'b1;
        9'd211: control <= 1'b1;
        9'd212: control <= 1'b1;
        9'd213: control <= 1'b1;
        9'd214: control <= 1'b1;
        9'd215: control <= 1'b1;
        9'd216: control <= 1'b1;
        9'd217: control <= 1'b1;
        9'd218: control <= 1'b1;
        9'd219: control <= 1'b1;
        9'd220: control <= 1'b1;
        9'd221: control <= 1'b1;
        9'd222: control <= 1'b1;
        9'd223: control <= 1'b1;
        9'd224: control <= 1'b1;
        9'd225: control <= 1'b1;
        9'd226: control <= 1'b1;
        9'd227: control <= 1'b1;
        9'd228: control <= 1'b1;
        9'd229: control <= 1'b1;
        9'd230: control <= 1'b1;
        9'd231: control <= 1'b1;
        9'd232: control <= 1'b1;
        9'd233: control <= 1'b1;
        9'd234: control <= 1'b1;
        9'd235: control <= 1'b1;
        9'd236: control <= 1'b1;
        9'd237: control <= 1'b1;
        9'd238: control <= 1'b1;
        9'd239: control <= 1'b1;
        9'd240: control <= 1'b1;
        9'd241: control <= 1'b1;
        9'd242: control <= 1'b1;
        9'd243: control <= 1'b1;
        9'd244: control <= 1'b1;
        9'd245: control <= 1'b1;
        9'd246: control <= 1'b1;
        9'd247: control <= 1'b1;
        9'd248: control <= 1'b1;
        9'd249: control <= 1'b1;
        9'd250: control <= 1'b1;
        9'd251: control <= 1'b1;
        9'd252: control <= 1'b1;
        9'd253: control <= 1'b1;
        9'd254: control <= 1'b1;
        9'd255: control <= 1'b1;
        9'd256: control <= 1'b0;
        9'd257: control <= 1'b0;
        9'd258: control <= 1'b0;
        9'd259: control <= 1'b0;
        9'd260: control <= 1'b0;
        9'd261: control <= 1'b0;
        9'd262: control <= 1'b0;
        9'd263: control <= 1'b0;
        9'd264: control <= 1'b0;
        9'd265: control <= 1'b0;
        9'd266: control <= 1'b0;
        9'd267: control <= 1'b0;
        9'd268: control <= 1'b0;
        9'd269: control <= 1'b0;
        9'd270: control <= 1'b0;
        9'd271: control <= 1'b0;
        9'd272: control <= 1'b0;
        9'd273: control <= 1'b0;
        9'd274: control <= 1'b0;
        9'd275: control <= 1'b0;
        9'd276: control <= 1'b0;
        9'd277: control <= 1'b0;
        9'd278: control <= 1'b0;
        9'd279: control <= 1'b0;
        9'd280: control <= 1'b0;
        9'd281: control <= 1'b0;
        9'd282: control <= 1'b0;
        9'd283: control <= 1'b0;
        9'd284: control <= 1'b0;
        9'd285: control <= 1'b0;
        9'd286: control <= 1'b0;
        9'd287: control <= 1'b0;
        9'd288: control <= 1'b0;
        9'd289: control <= 1'b0;
        9'd290: control <= 1'b0;
        9'd291: control <= 1'b0;
        9'd292: control <= 1'b0;
        9'd293: control <= 1'b0;
        9'd294: control <= 1'b0;
        9'd295: control <= 1'b0;
        9'd296: control <= 1'b0;
        9'd297: control <= 1'b0;
        9'd298: control <= 1'b0;
        9'd299: control <= 1'b0;
        9'd300: control <= 1'b0;
        9'd301: control <= 1'b0;
        9'd302: control <= 1'b0;
        9'd303: control <= 1'b0;
        9'd304: control <= 1'b0;
        9'd305: control <= 1'b0;
        9'd306: control <= 1'b0;
        9'd307: control <= 1'b0;
        9'd308: control <= 1'b0;
        9'd309: control <= 1'b0;
        9'd310: control <= 1'b0;
        9'd311: control <= 1'b0;
        9'd312: control <= 1'b0;
        9'd313: control <= 1'b0;
        9'd314: control <= 1'b0;
        9'd315: control <= 1'b0;
        9'd316: control <= 1'b0;
        9'd317: control <= 1'b0;
        9'd318: control <= 1'b0;
        9'd319: control <= 1'b0;
        9'd320: control <= 1'b0;
        9'd321: control <= 1'b0;
        9'd322: control <= 1'b0;
        9'd323: control <= 1'b0;
        9'd324: control <= 1'b0;
        9'd325: control <= 1'b0;
        9'd326: control <= 1'b0;
        9'd327: control <= 1'b0;
        9'd328: control <= 1'b0;
        9'd329: control <= 1'b0;
        9'd330: control <= 1'b0;
        9'd331: control <= 1'b0;
        9'd332: control <= 1'b0;
        9'd333: control <= 1'b0;
        9'd334: control <= 1'b0;
        9'd335: control <= 1'b0;
        9'd336: control <= 1'b0;
        9'd337: control <= 1'b0;
        9'd338: control <= 1'b0;
        9'd339: control <= 1'b0;
        9'd340: control <= 1'b0;
        9'd341: control <= 1'b0;
        9'd342: control <= 1'b0;
        9'd343: control <= 1'b0;
        9'd344: control <= 1'b0;
        9'd345: control <= 1'b0;
        9'd346: control <= 1'b0;
        9'd347: control <= 1'b0;
        9'd348: control <= 1'b0;
        9'd349: control <= 1'b0;
        9'd350: control <= 1'b0;
        9'd351: control <= 1'b0;
        9'd352: control <= 1'b0;
        9'd353: control <= 1'b0;
        9'd354: control <= 1'b0;
        9'd355: control <= 1'b0;
        9'd356: control <= 1'b0;
        9'd357: control <= 1'b0;
        9'd358: control <= 1'b0;
        9'd359: control <= 1'b0;
        9'd360: control <= 1'b0;
        9'd361: control <= 1'b0;
        9'd362: control <= 1'b0;
        9'd363: control <= 1'b0;
        9'd364: control <= 1'b0;
        9'd365: control <= 1'b0;
        9'd366: control <= 1'b0;
        9'd367: control <= 1'b0;
        9'd368: control <= 1'b0;
        9'd369: control <= 1'b0;
        9'd370: control <= 1'b0;
        9'd371: control <= 1'b0;
        9'd372: control <= 1'b0;
        9'd373: control <= 1'b0;
        9'd374: control <= 1'b0;
        9'd375: control <= 1'b0;
        9'd376: control <= 1'b0;
        9'd377: control <= 1'b0;
        9'd378: control <= 1'b0;
        9'd379: control <= 1'b0;
        9'd380: control <= 1'b0;
        9'd381: control <= 1'b0;
        9'd382: control <= 1'b0;
        9'd383: control <= 1'b0;
        9'd384: control <= 1'b0;
        9'd385: control <= 1'b0;
        9'd386: control <= 1'b0;
        9'd387: control <= 1'b0;
        9'd388: control <= 1'b0;
        9'd389: control <= 1'b0;
        9'd390: control <= 1'b0;
        9'd391: control <= 1'b0;
        9'd392: control <= 1'b0;
        9'd393: control <= 1'b0;
        9'd394: control <= 1'b0;
        9'd395: control <= 1'b0;
        9'd396: control <= 1'b0;
        9'd397: control <= 1'b0;
        9'd398: control <= 1'b0;
        9'd399: control <= 1'b0;
        9'd400: control <= 1'b0;
        9'd401: control <= 1'b0;
        9'd402: control <= 1'b0;
        9'd403: control <= 1'b0;
        9'd404: control <= 1'b0;
        9'd405: control <= 1'b0;
        9'd406: control <= 1'b0;
        9'd407: control <= 1'b0;
        9'd408: control <= 1'b0;
        9'd409: control <= 1'b0;
        9'd410: control <= 1'b0;
        9'd411: control <= 1'b0;
        9'd412: control <= 1'b0;
        9'd413: control <= 1'b0;
        9'd414: control <= 1'b0;
        9'd415: control <= 1'b0;
        9'd416: control <= 1'b0;
        9'd417: control <= 1'b0;
        9'd418: control <= 1'b0;
        9'd419: control <= 1'b0;
        9'd420: control <= 1'b0;
        9'd421: control <= 1'b0;
        9'd422: control <= 1'b0;
        9'd423: control <= 1'b0;
        9'd424: control <= 1'b0;
        9'd425: control <= 1'b0;
        9'd426: control <= 1'b0;
        9'd427: control <= 1'b0;
        9'd428: control <= 1'b0;
        9'd429: control <= 1'b0;
        9'd430: control <= 1'b0;
        9'd431: control <= 1'b0;
        9'd432: control <= 1'b0;
        9'd433: control <= 1'b0;
        9'd434: control <= 1'b0;
        9'd435: control <= 1'b0;
        9'd436: control <= 1'b0;
        9'd437: control <= 1'b0;
        9'd438: control <= 1'b0;
        9'd439: control <= 1'b0;
        9'd440: control <= 1'b0;
        9'd441: control <= 1'b0;
        9'd442: control <= 1'b0;
        9'd443: control <= 1'b0;
        9'd444: control <= 1'b0;
        9'd445: control <= 1'b0;
        9'd446: control <= 1'b0;
        9'd447: control <= 1'b0;
        9'd448: control <= 1'b0;
        9'd449: control <= 1'b0;
        9'd450: control <= 1'b0;
        9'd451: control <= 1'b0;
        9'd452: control <= 1'b0;
        9'd453: control <= 1'b0;
        9'd454: control <= 1'b0;
        9'd455: control <= 1'b0;
        9'd456: control <= 1'b0;
        9'd457: control <= 1'b0;
        9'd458: control <= 1'b0;
        9'd459: control <= 1'b0;
        9'd460: control <= 1'b0;
        9'd461: control <= 1'b0;
        9'd462: control <= 1'b0;
        9'd463: control <= 1'b0;
        9'd464: control <= 1'b0;
        9'd465: control <= 1'b0;
        9'd466: control <= 1'b0;
        9'd467: control <= 1'b0;
        9'd468: control <= 1'b0;
        9'd469: control <= 1'b0;
        9'd470: control <= 1'b0;
        9'd471: control <= 1'b0;
        9'd472: control <= 1'b0;
        9'd473: control <= 1'b0;
        9'd474: control <= 1'b0;
        9'd475: control <= 1'b0;
        9'd476: control <= 1'b0;
        9'd477: control <= 1'b0;
        9'd478: control <= 1'b0;
        9'd479: control <= 1'b0;
        9'd480: control <= 1'b0;
        9'd481: control <= 1'b0;
        9'd482: control <= 1'b0;
        9'd483: control <= 1'b0;
        9'd484: control <= 1'b0;
        9'd485: control <= 1'b0;
        9'd486: control <= 1'b0;
        9'd487: control <= 1'b0;
        9'd488: control <= 1'b0;
        9'd489: control <= 1'b0;
        9'd490: control <= 1'b0;
        9'd491: control <= 1'b0;
        9'd492: control <= 1'b0;
        9'd493: control <= 1'b0;
        9'd494: control <= 1'b0;
        9'd495: control <= 1'b0;
        9'd496: control <= 1'b0;
        9'd497: control <= 1'b0;
        9'd498: control <= 1'b0;
        9'd499: control <= 1'b0;
        9'd500: control <= 1'b0;
        9'd501: control <= 1'b0;
        9'd502: control <= 1'b0;
        9'd503: control <= 1'b0;
        9'd504: control <= 1'b0;
        9'd505: control <= 1'b0;
        9'd506: control <= 1'b0;
        9'd507: control <= 1'b0;
        9'd508: control <= 1'b0;
        9'd509: control <= 1'b0;
        9'd510: control <= 1'b0;
        9'd511: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 1028
// Gap: 512
module perm65366(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 512;

   parameter addrbits = 9;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm0;
   assign tm0 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_73699(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73700(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(511, 9) nextReg_73711(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73712(.X(next2), .Y(next3), .clk(clk));
nextReg #(512, 9) nextReg_73715(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73716(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(511, 1) shiftFIFO_73719(.X(tm0), .Y(tm0_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_73722(.X(tm0_d), .Y(tm0_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 9) shiftFIFO_73727(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm0_d, s1rdloc})
	     {1'd0,  9'd0}: s1rd0 <= 256;
	     {1'd0,  9'd1}: s1rd0 <= 384;
	     {1'd0,  9'd2}: s1rd0 <= 320;
	     {1'd0,  9'd3}: s1rd0 <= 448;
	     {1'd0,  9'd4}: s1rd0 <= 288;
	     {1'd0,  9'd5}: s1rd0 <= 416;
	     {1'd0,  9'd6}: s1rd0 <= 352;
	     {1'd0,  9'd7}: s1rd0 <= 480;
	     {1'd0,  9'd8}: s1rd0 <= 272;
	     {1'd0,  9'd9}: s1rd0 <= 400;
	     {1'd0,  9'd10}: s1rd0 <= 336;
	     {1'd0,  9'd11}: s1rd0 <= 464;
	     {1'd0,  9'd12}: s1rd0 <= 304;
	     {1'd0,  9'd13}: s1rd0 <= 432;
	     {1'd0,  9'd14}: s1rd0 <= 368;
	     {1'd0,  9'd15}: s1rd0 <= 496;
	     {1'd0,  9'd16}: s1rd0 <= 264;
	     {1'd0,  9'd17}: s1rd0 <= 392;
	     {1'd0,  9'd18}: s1rd0 <= 328;
	     {1'd0,  9'd19}: s1rd0 <= 456;
	     {1'd0,  9'd20}: s1rd0 <= 296;
	     {1'd0,  9'd21}: s1rd0 <= 424;
	     {1'd0,  9'd22}: s1rd0 <= 360;
	     {1'd0,  9'd23}: s1rd0 <= 488;
	     {1'd0,  9'd24}: s1rd0 <= 280;
	     {1'd0,  9'd25}: s1rd0 <= 408;
	     {1'd0,  9'd26}: s1rd0 <= 344;
	     {1'd0,  9'd27}: s1rd0 <= 472;
	     {1'd0,  9'd28}: s1rd0 <= 312;
	     {1'd0,  9'd29}: s1rd0 <= 440;
	     {1'd0,  9'd30}: s1rd0 <= 376;
	     {1'd0,  9'd31}: s1rd0 <= 504;
	     {1'd0,  9'd32}: s1rd0 <= 260;
	     {1'd0,  9'd33}: s1rd0 <= 388;
	     {1'd0,  9'd34}: s1rd0 <= 324;
	     {1'd0,  9'd35}: s1rd0 <= 452;
	     {1'd0,  9'd36}: s1rd0 <= 292;
	     {1'd0,  9'd37}: s1rd0 <= 420;
	     {1'd0,  9'd38}: s1rd0 <= 356;
	     {1'd0,  9'd39}: s1rd0 <= 484;
	     {1'd0,  9'd40}: s1rd0 <= 276;
	     {1'd0,  9'd41}: s1rd0 <= 404;
	     {1'd0,  9'd42}: s1rd0 <= 340;
	     {1'd0,  9'd43}: s1rd0 <= 468;
	     {1'd0,  9'd44}: s1rd0 <= 308;
	     {1'd0,  9'd45}: s1rd0 <= 436;
	     {1'd0,  9'd46}: s1rd0 <= 372;
	     {1'd0,  9'd47}: s1rd0 <= 500;
	     {1'd0,  9'd48}: s1rd0 <= 268;
	     {1'd0,  9'd49}: s1rd0 <= 396;
	     {1'd0,  9'd50}: s1rd0 <= 332;
	     {1'd0,  9'd51}: s1rd0 <= 460;
	     {1'd0,  9'd52}: s1rd0 <= 300;
	     {1'd0,  9'd53}: s1rd0 <= 428;
	     {1'd0,  9'd54}: s1rd0 <= 364;
	     {1'd0,  9'd55}: s1rd0 <= 492;
	     {1'd0,  9'd56}: s1rd0 <= 284;
	     {1'd0,  9'd57}: s1rd0 <= 412;
	     {1'd0,  9'd58}: s1rd0 <= 348;
	     {1'd0,  9'd59}: s1rd0 <= 476;
	     {1'd0,  9'd60}: s1rd0 <= 316;
	     {1'd0,  9'd61}: s1rd0 <= 444;
	     {1'd0,  9'd62}: s1rd0 <= 380;
	     {1'd0,  9'd63}: s1rd0 <= 508;
	     {1'd0,  9'd64}: s1rd0 <= 258;
	     {1'd0,  9'd65}: s1rd0 <= 386;
	     {1'd0,  9'd66}: s1rd0 <= 322;
	     {1'd0,  9'd67}: s1rd0 <= 450;
	     {1'd0,  9'd68}: s1rd0 <= 290;
	     {1'd0,  9'd69}: s1rd0 <= 418;
	     {1'd0,  9'd70}: s1rd0 <= 354;
	     {1'd0,  9'd71}: s1rd0 <= 482;
	     {1'd0,  9'd72}: s1rd0 <= 274;
	     {1'd0,  9'd73}: s1rd0 <= 402;
	     {1'd0,  9'd74}: s1rd0 <= 338;
	     {1'd0,  9'd75}: s1rd0 <= 466;
	     {1'd0,  9'd76}: s1rd0 <= 306;
	     {1'd0,  9'd77}: s1rd0 <= 434;
	     {1'd0,  9'd78}: s1rd0 <= 370;
	     {1'd0,  9'd79}: s1rd0 <= 498;
	     {1'd0,  9'd80}: s1rd0 <= 266;
	     {1'd0,  9'd81}: s1rd0 <= 394;
	     {1'd0,  9'd82}: s1rd0 <= 330;
	     {1'd0,  9'd83}: s1rd0 <= 458;
	     {1'd0,  9'd84}: s1rd0 <= 298;
	     {1'd0,  9'd85}: s1rd0 <= 426;
	     {1'd0,  9'd86}: s1rd0 <= 362;
	     {1'd0,  9'd87}: s1rd0 <= 490;
	     {1'd0,  9'd88}: s1rd0 <= 282;
	     {1'd0,  9'd89}: s1rd0 <= 410;
	     {1'd0,  9'd90}: s1rd0 <= 346;
	     {1'd0,  9'd91}: s1rd0 <= 474;
	     {1'd0,  9'd92}: s1rd0 <= 314;
	     {1'd0,  9'd93}: s1rd0 <= 442;
	     {1'd0,  9'd94}: s1rd0 <= 378;
	     {1'd0,  9'd95}: s1rd0 <= 506;
	     {1'd0,  9'd96}: s1rd0 <= 262;
	     {1'd0,  9'd97}: s1rd0 <= 390;
	     {1'd0,  9'd98}: s1rd0 <= 326;
	     {1'd0,  9'd99}: s1rd0 <= 454;
	     {1'd0,  9'd100}: s1rd0 <= 294;
	     {1'd0,  9'd101}: s1rd0 <= 422;
	     {1'd0,  9'd102}: s1rd0 <= 358;
	     {1'd0,  9'd103}: s1rd0 <= 486;
	     {1'd0,  9'd104}: s1rd0 <= 278;
	     {1'd0,  9'd105}: s1rd0 <= 406;
	     {1'd0,  9'd106}: s1rd0 <= 342;
	     {1'd0,  9'd107}: s1rd0 <= 470;
	     {1'd0,  9'd108}: s1rd0 <= 310;
	     {1'd0,  9'd109}: s1rd0 <= 438;
	     {1'd0,  9'd110}: s1rd0 <= 374;
	     {1'd0,  9'd111}: s1rd0 <= 502;
	     {1'd0,  9'd112}: s1rd0 <= 270;
	     {1'd0,  9'd113}: s1rd0 <= 398;
	     {1'd0,  9'd114}: s1rd0 <= 334;
	     {1'd0,  9'd115}: s1rd0 <= 462;
	     {1'd0,  9'd116}: s1rd0 <= 302;
	     {1'd0,  9'd117}: s1rd0 <= 430;
	     {1'd0,  9'd118}: s1rd0 <= 366;
	     {1'd0,  9'd119}: s1rd0 <= 494;
	     {1'd0,  9'd120}: s1rd0 <= 286;
	     {1'd0,  9'd121}: s1rd0 <= 414;
	     {1'd0,  9'd122}: s1rd0 <= 350;
	     {1'd0,  9'd123}: s1rd0 <= 478;
	     {1'd0,  9'd124}: s1rd0 <= 318;
	     {1'd0,  9'd125}: s1rd0 <= 446;
	     {1'd0,  9'd126}: s1rd0 <= 382;
	     {1'd0,  9'd127}: s1rd0 <= 510;
	     {1'd0,  9'd128}: s1rd0 <= 257;
	     {1'd0,  9'd129}: s1rd0 <= 385;
	     {1'd0,  9'd130}: s1rd0 <= 321;
	     {1'd0,  9'd131}: s1rd0 <= 449;
	     {1'd0,  9'd132}: s1rd0 <= 289;
	     {1'd0,  9'd133}: s1rd0 <= 417;
	     {1'd0,  9'd134}: s1rd0 <= 353;
	     {1'd0,  9'd135}: s1rd0 <= 481;
	     {1'd0,  9'd136}: s1rd0 <= 273;
	     {1'd0,  9'd137}: s1rd0 <= 401;
	     {1'd0,  9'd138}: s1rd0 <= 337;
	     {1'd0,  9'd139}: s1rd0 <= 465;
	     {1'd0,  9'd140}: s1rd0 <= 305;
	     {1'd0,  9'd141}: s1rd0 <= 433;
	     {1'd0,  9'd142}: s1rd0 <= 369;
	     {1'd0,  9'd143}: s1rd0 <= 497;
	     {1'd0,  9'd144}: s1rd0 <= 265;
	     {1'd0,  9'd145}: s1rd0 <= 393;
	     {1'd0,  9'd146}: s1rd0 <= 329;
	     {1'd0,  9'd147}: s1rd0 <= 457;
	     {1'd0,  9'd148}: s1rd0 <= 297;
	     {1'd0,  9'd149}: s1rd0 <= 425;
	     {1'd0,  9'd150}: s1rd0 <= 361;
	     {1'd0,  9'd151}: s1rd0 <= 489;
	     {1'd0,  9'd152}: s1rd0 <= 281;
	     {1'd0,  9'd153}: s1rd0 <= 409;
	     {1'd0,  9'd154}: s1rd0 <= 345;
	     {1'd0,  9'd155}: s1rd0 <= 473;
	     {1'd0,  9'd156}: s1rd0 <= 313;
	     {1'd0,  9'd157}: s1rd0 <= 441;
	     {1'd0,  9'd158}: s1rd0 <= 377;
	     {1'd0,  9'd159}: s1rd0 <= 505;
	     {1'd0,  9'd160}: s1rd0 <= 261;
	     {1'd0,  9'd161}: s1rd0 <= 389;
	     {1'd0,  9'd162}: s1rd0 <= 325;
	     {1'd0,  9'd163}: s1rd0 <= 453;
	     {1'd0,  9'd164}: s1rd0 <= 293;
	     {1'd0,  9'd165}: s1rd0 <= 421;
	     {1'd0,  9'd166}: s1rd0 <= 357;
	     {1'd0,  9'd167}: s1rd0 <= 485;
	     {1'd0,  9'd168}: s1rd0 <= 277;
	     {1'd0,  9'd169}: s1rd0 <= 405;
	     {1'd0,  9'd170}: s1rd0 <= 341;
	     {1'd0,  9'd171}: s1rd0 <= 469;
	     {1'd0,  9'd172}: s1rd0 <= 309;
	     {1'd0,  9'd173}: s1rd0 <= 437;
	     {1'd0,  9'd174}: s1rd0 <= 373;
	     {1'd0,  9'd175}: s1rd0 <= 501;
	     {1'd0,  9'd176}: s1rd0 <= 269;
	     {1'd0,  9'd177}: s1rd0 <= 397;
	     {1'd0,  9'd178}: s1rd0 <= 333;
	     {1'd0,  9'd179}: s1rd0 <= 461;
	     {1'd0,  9'd180}: s1rd0 <= 301;
	     {1'd0,  9'd181}: s1rd0 <= 429;
	     {1'd0,  9'd182}: s1rd0 <= 365;
	     {1'd0,  9'd183}: s1rd0 <= 493;
	     {1'd0,  9'd184}: s1rd0 <= 285;
	     {1'd0,  9'd185}: s1rd0 <= 413;
	     {1'd0,  9'd186}: s1rd0 <= 349;
	     {1'd0,  9'd187}: s1rd0 <= 477;
	     {1'd0,  9'd188}: s1rd0 <= 317;
	     {1'd0,  9'd189}: s1rd0 <= 445;
	     {1'd0,  9'd190}: s1rd0 <= 381;
	     {1'd0,  9'd191}: s1rd0 <= 509;
	     {1'd0,  9'd192}: s1rd0 <= 259;
	     {1'd0,  9'd193}: s1rd0 <= 387;
	     {1'd0,  9'd194}: s1rd0 <= 323;
	     {1'd0,  9'd195}: s1rd0 <= 451;
	     {1'd0,  9'd196}: s1rd0 <= 291;
	     {1'd0,  9'd197}: s1rd0 <= 419;
	     {1'd0,  9'd198}: s1rd0 <= 355;
	     {1'd0,  9'd199}: s1rd0 <= 483;
	     {1'd0,  9'd200}: s1rd0 <= 275;
	     {1'd0,  9'd201}: s1rd0 <= 403;
	     {1'd0,  9'd202}: s1rd0 <= 339;
	     {1'd0,  9'd203}: s1rd0 <= 467;
	     {1'd0,  9'd204}: s1rd0 <= 307;
	     {1'd0,  9'd205}: s1rd0 <= 435;
	     {1'd0,  9'd206}: s1rd0 <= 371;
	     {1'd0,  9'd207}: s1rd0 <= 499;
	     {1'd0,  9'd208}: s1rd0 <= 267;
	     {1'd0,  9'd209}: s1rd0 <= 395;
	     {1'd0,  9'd210}: s1rd0 <= 331;
	     {1'd0,  9'd211}: s1rd0 <= 459;
	     {1'd0,  9'd212}: s1rd0 <= 299;
	     {1'd0,  9'd213}: s1rd0 <= 427;
	     {1'd0,  9'd214}: s1rd0 <= 363;
	     {1'd0,  9'd215}: s1rd0 <= 491;
	     {1'd0,  9'd216}: s1rd0 <= 283;
	     {1'd0,  9'd217}: s1rd0 <= 411;
	     {1'd0,  9'd218}: s1rd0 <= 347;
	     {1'd0,  9'd219}: s1rd0 <= 475;
	     {1'd0,  9'd220}: s1rd0 <= 315;
	     {1'd0,  9'd221}: s1rd0 <= 443;
	     {1'd0,  9'd222}: s1rd0 <= 379;
	     {1'd0,  9'd223}: s1rd0 <= 507;
	     {1'd0,  9'd224}: s1rd0 <= 263;
	     {1'd0,  9'd225}: s1rd0 <= 391;
	     {1'd0,  9'd226}: s1rd0 <= 327;
	     {1'd0,  9'd227}: s1rd0 <= 455;
	     {1'd0,  9'd228}: s1rd0 <= 295;
	     {1'd0,  9'd229}: s1rd0 <= 423;
	     {1'd0,  9'd230}: s1rd0 <= 359;
	     {1'd0,  9'd231}: s1rd0 <= 487;
	     {1'd0,  9'd232}: s1rd0 <= 279;
	     {1'd0,  9'd233}: s1rd0 <= 407;
	     {1'd0,  9'd234}: s1rd0 <= 343;
	     {1'd0,  9'd235}: s1rd0 <= 471;
	     {1'd0,  9'd236}: s1rd0 <= 311;
	     {1'd0,  9'd237}: s1rd0 <= 439;
	     {1'd0,  9'd238}: s1rd0 <= 375;
	     {1'd0,  9'd239}: s1rd0 <= 503;
	     {1'd0,  9'd240}: s1rd0 <= 271;
	     {1'd0,  9'd241}: s1rd0 <= 399;
	     {1'd0,  9'd242}: s1rd0 <= 335;
	     {1'd0,  9'd243}: s1rd0 <= 463;
	     {1'd0,  9'd244}: s1rd0 <= 303;
	     {1'd0,  9'd245}: s1rd0 <= 431;
	     {1'd0,  9'd246}: s1rd0 <= 367;
	     {1'd0,  9'd247}: s1rd0 <= 495;
	     {1'd0,  9'd248}: s1rd0 <= 287;
	     {1'd0,  9'd249}: s1rd0 <= 415;
	     {1'd0,  9'd250}: s1rd0 <= 351;
	     {1'd0,  9'd251}: s1rd0 <= 479;
	     {1'd0,  9'd252}: s1rd0 <= 319;
	     {1'd0,  9'd253}: s1rd0 <= 447;
	     {1'd0,  9'd254}: s1rd0 <= 383;
	     {1'd0,  9'd255}: s1rd0 <= 511;
	     {1'd0,  9'd256}: s1rd0 <= 0;
	     {1'd0,  9'd257}: s1rd0 <= 128;
	     {1'd0,  9'd258}: s1rd0 <= 64;
	     {1'd0,  9'd259}: s1rd0 <= 192;
	     {1'd0,  9'd260}: s1rd0 <= 32;
	     {1'd0,  9'd261}: s1rd0 <= 160;
	     {1'd0,  9'd262}: s1rd0 <= 96;
	     {1'd0,  9'd263}: s1rd0 <= 224;
	     {1'd0,  9'd264}: s1rd0 <= 16;
	     {1'd0,  9'd265}: s1rd0 <= 144;
	     {1'd0,  9'd266}: s1rd0 <= 80;
	     {1'd0,  9'd267}: s1rd0 <= 208;
	     {1'd0,  9'd268}: s1rd0 <= 48;
	     {1'd0,  9'd269}: s1rd0 <= 176;
	     {1'd0,  9'd270}: s1rd0 <= 112;
	     {1'd0,  9'd271}: s1rd0 <= 240;
	     {1'd0,  9'd272}: s1rd0 <= 8;
	     {1'd0,  9'd273}: s1rd0 <= 136;
	     {1'd0,  9'd274}: s1rd0 <= 72;
	     {1'd0,  9'd275}: s1rd0 <= 200;
	     {1'd0,  9'd276}: s1rd0 <= 40;
	     {1'd0,  9'd277}: s1rd0 <= 168;
	     {1'd0,  9'd278}: s1rd0 <= 104;
	     {1'd0,  9'd279}: s1rd0 <= 232;
	     {1'd0,  9'd280}: s1rd0 <= 24;
	     {1'd0,  9'd281}: s1rd0 <= 152;
	     {1'd0,  9'd282}: s1rd0 <= 88;
	     {1'd0,  9'd283}: s1rd0 <= 216;
	     {1'd0,  9'd284}: s1rd0 <= 56;
	     {1'd0,  9'd285}: s1rd0 <= 184;
	     {1'd0,  9'd286}: s1rd0 <= 120;
	     {1'd0,  9'd287}: s1rd0 <= 248;
	     {1'd0,  9'd288}: s1rd0 <= 4;
	     {1'd0,  9'd289}: s1rd0 <= 132;
	     {1'd0,  9'd290}: s1rd0 <= 68;
	     {1'd0,  9'd291}: s1rd0 <= 196;
	     {1'd0,  9'd292}: s1rd0 <= 36;
	     {1'd0,  9'd293}: s1rd0 <= 164;
	     {1'd0,  9'd294}: s1rd0 <= 100;
	     {1'd0,  9'd295}: s1rd0 <= 228;
	     {1'd0,  9'd296}: s1rd0 <= 20;
	     {1'd0,  9'd297}: s1rd0 <= 148;
	     {1'd0,  9'd298}: s1rd0 <= 84;
	     {1'd0,  9'd299}: s1rd0 <= 212;
	     {1'd0,  9'd300}: s1rd0 <= 52;
	     {1'd0,  9'd301}: s1rd0 <= 180;
	     {1'd0,  9'd302}: s1rd0 <= 116;
	     {1'd0,  9'd303}: s1rd0 <= 244;
	     {1'd0,  9'd304}: s1rd0 <= 12;
	     {1'd0,  9'd305}: s1rd0 <= 140;
	     {1'd0,  9'd306}: s1rd0 <= 76;
	     {1'd0,  9'd307}: s1rd0 <= 204;
	     {1'd0,  9'd308}: s1rd0 <= 44;
	     {1'd0,  9'd309}: s1rd0 <= 172;
	     {1'd0,  9'd310}: s1rd0 <= 108;
	     {1'd0,  9'd311}: s1rd0 <= 236;
	     {1'd0,  9'd312}: s1rd0 <= 28;
	     {1'd0,  9'd313}: s1rd0 <= 156;
	     {1'd0,  9'd314}: s1rd0 <= 92;
	     {1'd0,  9'd315}: s1rd0 <= 220;
	     {1'd0,  9'd316}: s1rd0 <= 60;
	     {1'd0,  9'd317}: s1rd0 <= 188;
	     {1'd0,  9'd318}: s1rd0 <= 124;
	     {1'd0,  9'd319}: s1rd0 <= 252;
	     {1'd0,  9'd320}: s1rd0 <= 2;
	     {1'd0,  9'd321}: s1rd0 <= 130;
	     {1'd0,  9'd322}: s1rd0 <= 66;
	     {1'd0,  9'd323}: s1rd0 <= 194;
	     {1'd0,  9'd324}: s1rd0 <= 34;
	     {1'd0,  9'd325}: s1rd0 <= 162;
	     {1'd0,  9'd326}: s1rd0 <= 98;
	     {1'd0,  9'd327}: s1rd0 <= 226;
	     {1'd0,  9'd328}: s1rd0 <= 18;
	     {1'd0,  9'd329}: s1rd0 <= 146;
	     {1'd0,  9'd330}: s1rd0 <= 82;
	     {1'd0,  9'd331}: s1rd0 <= 210;
	     {1'd0,  9'd332}: s1rd0 <= 50;
	     {1'd0,  9'd333}: s1rd0 <= 178;
	     {1'd0,  9'd334}: s1rd0 <= 114;
	     {1'd0,  9'd335}: s1rd0 <= 242;
	     {1'd0,  9'd336}: s1rd0 <= 10;
	     {1'd0,  9'd337}: s1rd0 <= 138;
	     {1'd0,  9'd338}: s1rd0 <= 74;
	     {1'd0,  9'd339}: s1rd0 <= 202;
	     {1'd0,  9'd340}: s1rd0 <= 42;
	     {1'd0,  9'd341}: s1rd0 <= 170;
	     {1'd0,  9'd342}: s1rd0 <= 106;
	     {1'd0,  9'd343}: s1rd0 <= 234;
	     {1'd0,  9'd344}: s1rd0 <= 26;
	     {1'd0,  9'd345}: s1rd0 <= 154;
	     {1'd0,  9'd346}: s1rd0 <= 90;
	     {1'd0,  9'd347}: s1rd0 <= 218;
	     {1'd0,  9'd348}: s1rd0 <= 58;
	     {1'd0,  9'd349}: s1rd0 <= 186;
	     {1'd0,  9'd350}: s1rd0 <= 122;
	     {1'd0,  9'd351}: s1rd0 <= 250;
	     {1'd0,  9'd352}: s1rd0 <= 6;
	     {1'd0,  9'd353}: s1rd0 <= 134;
	     {1'd0,  9'd354}: s1rd0 <= 70;
	     {1'd0,  9'd355}: s1rd0 <= 198;
	     {1'd0,  9'd356}: s1rd0 <= 38;
	     {1'd0,  9'd357}: s1rd0 <= 166;
	     {1'd0,  9'd358}: s1rd0 <= 102;
	     {1'd0,  9'd359}: s1rd0 <= 230;
	     {1'd0,  9'd360}: s1rd0 <= 22;
	     {1'd0,  9'd361}: s1rd0 <= 150;
	     {1'd0,  9'd362}: s1rd0 <= 86;
	     {1'd0,  9'd363}: s1rd0 <= 214;
	     {1'd0,  9'd364}: s1rd0 <= 54;
	     {1'd0,  9'd365}: s1rd0 <= 182;
	     {1'd0,  9'd366}: s1rd0 <= 118;
	     {1'd0,  9'd367}: s1rd0 <= 246;
	     {1'd0,  9'd368}: s1rd0 <= 14;
	     {1'd0,  9'd369}: s1rd0 <= 142;
	     {1'd0,  9'd370}: s1rd0 <= 78;
	     {1'd0,  9'd371}: s1rd0 <= 206;
	     {1'd0,  9'd372}: s1rd0 <= 46;
	     {1'd0,  9'd373}: s1rd0 <= 174;
	     {1'd0,  9'd374}: s1rd0 <= 110;
	     {1'd0,  9'd375}: s1rd0 <= 238;
	     {1'd0,  9'd376}: s1rd0 <= 30;
	     {1'd0,  9'd377}: s1rd0 <= 158;
	     {1'd0,  9'd378}: s1rd0 <= 94;
	     {1'd0,  9'd379}: s1rd0 <= 222;
	     {1'd0,  9'd380}: s1rd0 <= 62;
	     {1'd0,  9'd381}: s1rd0 <= 190;
	     {1'd0,  9'd382}: s1rd0 <= 126;
	     {1'd0,  9'd383}: s1rd0 <= 254;
	     {1'd0,  9'd384}: s1rd0 <= 1;
	     {1'd0,  9'd385}: s1rd0 <= 129;
	     {1'd0,  9'd386}: s1rd0 <= 65;
	     {1'd0,  9'd387}: s1rd0 <= 193;
	     {1'd0,  9'd388}: s1rd0 <= 33;
	     {1'd0,  9'd389}: s1rd0 <= 161;
	     {1'd0,  9'd390}: s1rd0 <= 97;
	     {1'd0,  9'd391}: s1rd0 <= 225;
	     {1'd0,  9'd392}: s1rd0 <= 17;
	     {1'd0,  9'd393}: s1rd0 <= 145;
	     {1'd0,  9'd394}: s1rd0 <= 81;
	     {1'd0,  9'd395}: s1rd0 <= 209;
	     {1'd0,  9'd396}: s1rd0 <= 49;
	     {1'd0,  9'd397}: s1rd0 <= 177;
	     {1'd0,  9'd398}: s1rd0 <= 113;
	     {1'd0,  9'd399}: s1rd0 <= 241;
	     {1'd0,  9'd400}: s1rd0 <= 9;
	     {1'd0,  9'd401}: s1rd0 <= 137;
	     {1'd0,  9'd402}: s1rd0 <= 73;
	     {1'd0,  9'd403}: s1rd0 <= 201;
	     {1'd0,  9'd404}: s1rd0 <= 41;
	     {1'd0,  9'd405}: s1rd0 <= 169;
	     {1'd0,  9'd406}: s1rd0 <= 105;
	     {1'd0,  9'd407}: s1rd0 <= 233;
	     {1'd0,  9'd408}: s1rd0 <= 25;
	     {1'd0,  9'd409}: s1rd0 <= 153;
	     {1'd0,  9'd410}: s1rd0 <= 89;
	     {1'd0,  9'd411}: s1rd0 <= 217;
	     {1'd0,  9'd412}: s1rd0 <= 57;
	     {1'd0,  9'd413}: s1rd0 <= 185;
	     {1'd0,  9'd414}: s1rd0 <= 121;
	     {1'd0,  9'd415}: s1rd0 <= 249;
	     {1'd0,  9'd416}: s1rd0 <= 5;
	     {1'd0,  9'd417}: s1rd0 <= 133;
	     {1'd0,  9'd418}: s1rd0 <= 69;
	     {1'd0,  9'd419}: s1rd0 <= 197;
	     {1'd0,  9'd420}: s1rd0 <= 37;
	     {1'd0,  9'd421}: s1rd0 <= 165;
	     {1'd0,  9'd422}: s1rd0 <= 101;
	     {1'd0,  9'd423}: s1rd0 <= 229;
	     {1'd0,  9'd424}: s1rd0 <= 21;
	     {1'd0,  9'd425}: s1rd0 <= 149;
	     {1'd0,  9'd426}: s1rd0 <= 85;
	     {1'd0,  9'd427}: s1rd0 <= 213;
	     {1'd0,  9'd428}: s1rd0 <= 53;
	     {1'd0,  9'd429}: s1rd0 <= 181;
	     {1'd0,  9'd430}: s1rd0 <= 117;
	     {1'd0,  9'd431}: s1rd0 <= 245;
	     {1'd0,  9'd432}: s1rd0 <= 13;
	     {1'd0,  9'd433}: s1rd0 <= 141;
	     {1'd0,  9'd434}: s1rd0 <= 77;
	     {1'd0,  9'd435}: s1rd0 <= 205;
	     {1'd0,  9'd436}: s1rd0 <= 45;
	     {1'd0,  9'd437}: s1rd0 <= 173;
	     {1'd0,  9'd438}: s1rd0 <= 109;
	     {1'd0,  9'd439}: s1rd0 <= 237;
	     {1'd0,  9'd440}: s1rd0 <= 29;
	     {1'd0,  9'd441}: s1rd0 <= 157;
	     {1'd0,  9'd442}: s1rd0 <= 93;
	     {1'd0,  9'd443}: s1rd0 <= 221;
	     {1'd0,  9'd444}: s1rd0 <= 61;
	     {1'd0,  9'd445}: s1rd0 <= 189;
	     {1'd0,  9'd446}: s1rd0 <= 125;
	     {1'd0,  9'd447}: s1rd0 <= 253;
	     {1'd0,  9'd448}: s1rd0 <= 3;
	     {1'd0,  9'd449}: s1rd0 <= 131;
	     {1'd0,  9'd450}: s1rd0 <= 67;
	     {1'd0,  9'd451}: s1rd0 <= 195;
	     {1'd0,  9'd452}: s1rd0 <= 35;
	     {1'd0,  9'd453}: s1rd0 <= 163;
	     {1'd0,  9'd454}: s1rd0 <= 99;
	     {1'd0,  9'd455}: s1rd0 <= 227;
	     {1'd0,  9'd456}: s1rd0 <= 19;
	     {1'd0,  9'd457}: s1rd0 <= 147;
	     {1'd0,  9'd458}: s1rd0 <= 83;
	     {1'd0,  9'd459}: s1rd0 <= 211;
	     {1'd0,  9'd460}: s1rd0 <= 51;
	     {1'd0,  9'd461}: s1rd0 <= 179;
	     {1'd0,  9'd462}: s1rd0 <= 115;
	     {1'd0,  9'd463}: s1rd0 <= 243;
	     {1'd0,  9'd464}: s1rd0 <= 11;
	     {1'd0,  9'd465}: s1rd0 <= 139;
	     {1'd0,  9'd466}: s1rd0 <= 75;
	     {1'd0,  9'd467}: s1rd0 <= 203;
	     {1'd0,  9'd468}: s1rd0 <= 43;
	     {1'd0,  9'd469}: s1rd0 <= 171;
	     {1'd0,  9'd470}: s1rd0 <= 107;
	     {1'd0,  9'd471}: s1rd0 <= 235;
	     {1'd0,  9'd472}: s1rd0 <= 27;
	     {1'd0,  9'd473}: s1rd0 <= 155;
	     {1'd0,  9'd474}: s1rd0 <= 91;
	     {1'd0,  9'd475}: s1rd0 <= 219;
	     {1'd0,  9'd476}: s1rd0 <= 59;
	     {1'd0,  9'd477}: s1rd0 <= 187;
	     {1'd0,  9'd478}: s1rd0 <= 123;
	     {1'd0,  9'd479}: s1rd0 <= 251;
	     {1'd0,  9'd480}: s1rd0 <= 7;
	     {1'd0,  9'd481}: s1rd0 <= 135;
	     {1'd0,  9'd482}: s1rd0 <= 71;
	     {1'd0,  9'd483}: s1rd0 <= 199;
	     {1'd0,  9'd484}: s1rd0 <= 39;
	     {1'd0,  9'd485}: s1rd0 <= 167;
	     {1'd0,  9'd486}: s1rd0 <= 103;
	     {1'd0,  9'd487}: s1rd0 <= 231;
	     {1'd0,  9'd488}: s1rd0 <= 23;
	     {1'd0,  9'd489}: s1rd0 <= 151;
	     {1'd0,  9'd490}: s1rd0 <= 87;
	     {1'd0,  9'd491}: s1rd0 <= 215;
	     {1'd0,  9'd492}: s1rd0 <= 55;
	     {1'd0,  9'd493}: s1rd0 <= 183;
	     {1'd0,  9'd494}: s1rd0 <= 119;
	     {1'd0,  9'd495}: s1rd0 <= 247;
	     {1'd0,  9'd496}: s1rd0 <= 15;
	     {1'd0,  9'd497}: s1rd0 <= 143;
	     {1'd0,  9'd498}: s1rd0 <= 79;
	     {1'd0,  9'd499}: s1rd0 <= 207;
	     {1'd0,  9'd500}: s1rd0 <= 47;
	     {1'd0,  9'd501}: s1rd0 <= 175;
	     {1'd0,  9'd502}: s1rd0 <= 111;
	     {1'd0,  9'd503}: s1rd0 <= 239;
	     {1'd0,  9'd504}: s1rd0 <= 31;
	     {1'd0,  9'd505}: s1rd0 <= 159;
	     {1'd0,  9'd506}: s1rd0 <= 95;
	     {1'd0,  9'd507}: s1rd0 <= 223;
	     {1'd0,  9'd508}: s1rd0 <= 63;
	     {1'd0,  9'd509}: s1rd0 <= 191;
	     {1'd0,  9'd510}: s1rd0 <= 127;
	     {1'd0,  9'd511}: s1rd0 <= 255;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm0_d, s1rdloc})
	     {1'd0,  9'd0}: s1rd1 <= 0;
	     {1'd0,  9'd1}: s1rd1 <= 128;
	     {1'd0,  9'd2}: s1rd1 <= 64;
	     {1'd0,  9'd3}: s1rd1 <= 192;
	     {1'd0,  9'd4}: s1rd1 <= 32;
	     {1'd0,  9'd5}: s1rd1 <= 160;
	     {1'd0,  9'd6}: s1rd1 <= 96;
	     {1'd0,  9'd7}: s1rd1 <= 224;
	     {1'd0,  9'd8}: s1rd1 <= 16;
	     {1'd0,  9'd9}: s1rd1 <= 144;
	     {1'd0,  9'd10}: s1rd1 <= 80;
	     {1'd0,  9'd11}: s1rd1 <= 208;
	     {1'd0,  9'd12}: s1rd1 <= 48;
	     {1'd0,  9'd13}: s1rd1 <= 176;
	     {1'd0,  9'd14}: s1rd1 <= 112;
	     {1'd0,  9'd15}: s1rd1 <= 240;
	     {1'd0,  9'd16}: s1rd1 <= 8;
	     {1'd0,  9'd17}: s1rd1 <= 136;
	     {1'd0,  9'd18}: s1rd1 <= 72;
	     {1'd0,  9'd19}: s1rd1 <= 200;
	     {1'd0,  9'd20}: s1rd1 <= 40;
	     {1'd0,  9'd21}: s1rd1 <= 168;
	     {1'd0,  9'd22}: s1rd1 <= 104;
	     {1'd0,  9'd23}: s1rd1 <= 232;
	     {1'd0,  9'd24}: s1rd1 <= 24;
	     {1'd0,  9'd25}: s1rd1 <= 152;
	     {1'd0,  9'd26}: s1rd1 <= 88;
	     {1'd0,  9'd27}: s1rd1 <= 216;
	     {1'd0,  9'd28}: s1rd1 <= 56;
	     {1'd0,  9'd29}: s1rd1 <= 184;
	     {1'd0,  9'd30}: s1rd1 <= 120;
	     {1'd0,  9'd31}: s1rd1 <= 248;
	     {1'd0,  9'd32}: s1rd1 <= 4;
	     {1'd0,  9'd33}: s1rd1 <= 132;
	     {1'd0,  9'd34}: s1rd1 <= 68;
	     {1'd0,  9'd35}: s1rd1 <= 196;
	     {1'd0,  9'd36}: s1rd1 <= 36;
	     {1'd0,  9'd37}: s1rd1 <= 164;
	     {1'd0,  9'd38}: s1rd1 <= 100;
	     {1'd0,  9'd39}: s1rd1 <= 228;
	     {1'd0,  9'd40}: s1rd1 <= 20;
	     {1'd0,  9'd41}: s1rd1 <= 148;
	     {1'd0,  9'd42}: s1rd1 <= 84;
	     {1'd0,  9'd43}: s1rd1 <= 212;
	     {1'd0,  9'd44}: s1rd1 <= 52;
	     {1'd0,  9'd45}: s1rd1 <= 180;
	     {1'd0,  9'd46}: s1rd1 <= 116;
	     {1'd0,  9'd47}: s1rd1 <= 244;
	     {1'd0,  9'd48}: s1rd1 <= 12;
	     {1'd0,  9'd49}: s1rd1 <= 140;
	     {1'd0,  9'd50}: s1rd1 <= 76;
	     {1'd0,  9'd51}: s1rd1 <= 204;
	     {1'd0,  9'd52}: s1rd1 <= 44;
	     {1'd0,  9'd53}: s1rd1 <= 172;
	     {1'd0,  9'd54}: s1rd1 <= 108;
	     {1'd0,  9'd55}: s1rd1 <= 236;
	     {1'd0,  9'd56}: s1rd1 <= 28;
	     {1'd0,  9'd57}: s1rd1 <= 156;
	     {1'd0,  9'd58}: s1rd1 <= 92;
	     {1'd0,  9'd59}: s1rd1 <= 220;
	     {1'd0,  9'd60}: s1rd1 <= 60;
	     {1'd0,  9'd61}: s1rd1 <= 188;
	     {1'd0,  9'd62}: s1rd1 <= 124;
	     {1'd0,  9'd63}: s1rd1 <= 252;
	     {1'd0,  9'd64}: s1rd1 <= 2;
	     {1'd0,  9'd65}: s1rd1 <= 130;
	     {1'd0,  9'd66}: s1rd1 <= 66;
	     {1'd0,  9'd67}: s1rd1 <= 194;
	     {1'd0,  9'd68}: s1rd1 <= 34;
	     {1'd0,  9'd69}: s1rd1 <= 162;
	     {1'd0,  9'd70}: s1rd1 <= 98;
	     {1'd0,  9'd71}: s1rd1 <= 226;
	     {1'd0,  9'd72}: s1rd1 <= 18;
	     {1'd0,  9'd73}: s1rd1 <= 146;
	     {1'd0,  9'd74}: s1rd1 <= 82;
	     {1'd0,  9'd75}: s1rd1 <= 210;
	     {1'd0,  9'd76}: s1rd1 <= 50;
	     {1'd0,  9'd77}: s1rd1 <= 178;
	     {1'd0,  9'd78}: s1rd1 <= 114;
	     {1'd0,  9'd79}: s1rd1 <= 242;
	     {1'd0,  9'd80}: s1rd1 <= 10;
	     {1'd0,  9'd81}: s1rd1 <= 138;
	     {1'd0,  9'd82}: s1rd1 <= 74;
	     {1'd0,  9'd83}: s1rd1 <= 202;
	     {1'd0,  9'd84}: s1rd1 <= 42;
	     {1'd0,  9'd85}: s1rd1 <= 170;
	     {1'd0,  9'd86}: s1rd1 <= 106;
	     {1'd0,  9'd87}: s1rd1 <= 234;
	     {1'd0,  9'd88}: s1rd1 <= 26;
	     {1'd0,  9'd89}: s1rd1 <= 154;
	     {1'd0,  9'd90}: s1rd1 <= 90;
	     {1'd0,  9'd91}: s1rd1 <= 218;
	     {1'd0,  9'd92}: s1rd1 <= 58;
	     {1'd0,  9'd93}: s1rd1 <= 186;
	     {1'd0,  9'd94}: s1rd1 <= 122;
	     {1'd0,  9'd95}: s1rd1 <= 250;
	     {1'd0,  9'd96}: s1rd1 <= 6;
	     {1'd0,  9'd97}: s1rd1 <= 134;
	     {1'd0,  9'd98}: s1rd1 <= 70;
	     {1'd0,  9'd99}: s1rd1 <= 198;
	     {1'd0,  9'd100}: s1rd1 <= 38;
	     {1'd0,  9'd101}: s1rd1 <= 166;
	     {1'd0,  9'd102}: s1rd1 <= 102;
	     {1'd0,  9'd103}: s1rd1 <= 230;
	     {1'd0,  9'd104}: s1rd1 <= 22;
	     {1'd0,  9'd105}: s1rd1 <= 150;
	     {1'd0,  9'd106}: s1rd1 <= 86;
	     {1'd0,  9'd107}: s1rd1 <= 214;
	     {1'd0,  9'd108}: s1rd1 <= 54;
	     {1'd0,  9'd109}: s1rd1 <= 182;
	     {1'd0,  9'd110}: s1rd1 <= 118;
	     {1'd0,  9'd111}: s1rd1 <= 246;
	     {1'd0,  9'd112}: s1rd1 <= 14;
	     {1'd0,  9'd113}: s1rd1 <= 142;
	     {1'd0,  9'd114}: s1rd1 <= 78;
	     {1'd0,  9'd115}: s1rd1 <= 206;
	     {1'd0,  9'd116}: s1rd1 <= 46;
	     {1'd0,  9'd117}: s1rd1 <= 174;
	     {1'd0,  9'd118}: s1rd1 <= 110;
	     {1'd0,  9'd119}: s1rd1 <= 238;
	     {1'd0,  9'd120}: s1rd1 <= 30;
	     {1'd0,  9'd121}: s1rd1 <= 158;
	     {1'd0,  9'd122}: s1rd1 <= 94;
	     {1'd0,  9'd123}: s1rd1 <= 222;
	     {1'd0,  9'd124}: s1rd1 <= 62;
	     {1'd0,  9'd125}: s1rd1 <= 190;
	     {1'd0,  9'd126}: s1rd1 <= 126;
	     {1'd0,  9'd127}: s1rd1 <= 254;
	     {1'd0,  9'd128}: s1rd1 <= 1;
	     {1'd0,  9'd129}: s1rd1 <= 129;
	     {1'd0,  9'd130}: s1rd1 <= 65;
	     {1'd0,  9'd131}: s1rd1 <= 193;
	     {1'd0,  9'd132}: s1rd1 <= 33;
	     {1'd0,  9'd133}: s1rd1 <= 161;
	     {1'd0,  9'd134}: s1rd1 <= 97;
	     {1'd0,  9'd135}: s1rd1 <= 225;
	     {1'd0,  9'd136}: s1rd1 <= 17;
	     {1'd0,  9'd137}: s1rd1 <= 145;
	     {1'd0,  9'd138}: s1rd1 <= 81;
	     {1'd0,  9'd139}: s1rd1 <= 209;
	     {1'd0,  9'd140}: s1rd1 <= 49;
	     {1'd0,  9'd141}: s1rd1 <= 177;
	     {1'd0,  9'd142}: s1rd1 <= 113;
	     {1'd0,  9'd143}: s1rd1 <= 241;
	     {1'd0,  9'd144}: s1rd1 <= 9;
	     {1'd0,  9'd145}: s1rd1 <= 137;
	     {1'd0,  9'd146}: s1rd1 <= 73;
	     {1'd0,  9'd147}: s1rd1 <= 201;
	     {1'd0,  9'd148}: s1rd1 <= 41;
	     {1'd0,  9'd149}: s1rd1 <= 169;
	     {1'd0,  9'd150}: s1rd1 <= 105;
	     {1'd0,  9'd151}: s1rd1 <= 233;
	     {1'd0,  9'd152}: s1rd1 <= 25;
	     {1'd0,  9'd153}: s1rd1 <= 153;
	     {1'd0,  9'd154}: s1rd1 <= 89;
	     {1'd0,  9'd155}: s1rd1 <= 217;
	     {1'd0,  9'd156}: s1rd1 <= 57;
	     {1'd0,  9'd157}: s1rd1 <= 185;
	     {1'd0,  9'd158}: s1rd1 <= 121;
	     {1'd0,  9'd159}: s1rd1 <= 249;
	     {1'd0,  9'd160}: s1rd1 <= 5;
	     {1'd0,  9'd161}: s1rd1 <= 133;
	     {1'd0,  9'd162}: s1rd1 <= 69;
	     {1'd0,  9'd163}: s1rd1 <= 197;
	     {1'd0,  9'd164}: s1rd1 <= 37;
	     {1'd0,  9'd165}: s1rd1 <= 165;
	     {1'd0,  9'd166}: s1rd1 <= 101;
	     {1'd0,  9'd167}: s1rd1 <= 229;
	     {1'd0,  9'd168}: s1rd1 <= 21;
	     {1'd0,  9'd169}: s1rd1 <= 149;
	     {1'd0,  9'd170}: s1rd1 <= 85;
	     {1'd0,  9'd171}: s1rd1 <= 213;
	     {1'd0,  9'd172}: s1rd1 <= 53;
	     {1'd0,  9'd173}: s1rd1 <= 181;
	     {1'd0,  9'd174}: s1rd1 <= 117;
	     {1'd0,  9'd175}: s1rd1 <= 245;
	     {1'd0,  9'd176}: s1rd1 <= 13;
	     {1'd0,  9'd177}: s1rd1 <= 141;
	     {1'd0,  9'd178}: s1rd1 <= 77;
	     {1'd0,  9'd179}: s1rd1 <= 205;
	     {1'd0,  9'd180}: s1rd1 <= 45;
	     {1'd0,  9'd181}: s1rd1 <= 173;
	     {1'd0,  9'd182}: s1rd1 <= 109;
	     {1'd0,  9'd183}: s1rd1 <= 237;
	     {1'd0,  9'd184}: s1rd1 <= 29;
	     {1'd0,  9'd185}: s1rd1 <= 157;
	     {1'd0,  9'd186}: s1rd1 <= 93;
	     {1'd0,  9'd187}: s1rd1 <= 221;
	     {1'd0,  9'd188}: s1rd1 <= 61;
	     {1'd0,  9'd189}: s1rd1 <= 189;
	     {1'd0,  9'd190}: s1rd1 <= 125;
	     {1'd0,  9'd191}: s1rd1 <= 253;
	     {1'd0,  9'd192}: s1rd1 <= 3;
	     {1'd0,  9'd193}: s1rd1 <= 131;
	     {1'd0,  9'd194}: s1rd1 <= 67;
	     {1'd0,  9'd195}: s1rd1 <= 195;
	     {1'd0,  9'd196}: s1rd1 <= 35;
	     {1'd0,  9'd197}: s1rd1 <= 163;
	     {1'd0,  9'd198}: s1rd1 <= 99;
	     {1'd0,  9'd199}: s1rd1 <= 227;
	     {1'd0,  9'd200}: s1rd1 <= 19;
	     {1'd0,  9'd201}: s1rd1 <= 147;
	     {1'd0,  9'd202}: s1rd1 <= 83;
	     {1'd0,  9'd203}: s1rd1 <= 211;
	     {1'd0,  9'd204}: s1rd1 <= 51;
	     {1'd0,  9'd205}: s1rd1 <= 179;
	     {1'd0,  9'd206}: s1rd1 <= 115;
	     {1'd0,  9'd207}: s1rd1 <= 243;
	     {1'd0,  9'd208}: s1rd1 <= 11;
	     {1'd0,  9'd209}: s1rd1 <= 139;
	     {1'd0,  9'd210}: s1rd1 <= 75;
	     {1'd0,  9'd211}: s1rd1 <= 203;
	     {1'd0,  9'd212}: s1rd1 <= 43;
	     {1'd0,  9'd213}: s1rd1 <= 171;
	     {1'd0,  9'd214}: s1rd1 <= 107;
	     {1'd0,  9'd215}: s1rd1 <= 235;
	     {1'd0,  9'd216}: s1rd1 <= 27;
	     {1'd0,  9'd217}: s1rd1 <= 155;
	     {1'd0,  9'd218}: s1rd1 <= 91;
	     {1'd0,  9'd219}: s1rd1 <= 219;
	     {1'd0,  9'd220}: s1rd1 <= 59;
	     {1'd0,  9'd221}: s1rd1 <= 187;
	     {1'd0,  9'd222}: s1rd1 <= 123;
	     {1'd0,  9'd223}: s1rd1 <= 251;
	     {1'd0,  9'd224}: s1rd1 <= 7;
	     {1'd0,  9'd225}: s1rd1 <= 135;
	     {1'd0,  9'd226}: s1rd1 <= 71;
	     {1'd0,  9'd227}: s1rd1 <= 199;
	     {1'd0,  9'd228}: s1rd1 <= 39;
	     {1'd0,  9'd229}: s1rd1 <= 167;
	     {1'd0,  9'd230}: s1rd1 <= 103;
	     {1'd0,  9'd231}: s1rd1 <= 231;
	     {1'd0,  9'd232}: s1rd1 <= 23;
	     {1'd0,  9'd233}: s1rd1 <= 151;
	     {1'd0,  9'd234}: s1rd1 <= 87;
	     {1'd0,  9'd235}: s1rd1 <= 215;
	     {1'd0,  9'd236}: s1rd1 <= 55;
	     {1'd0,  9'd237}: s1rd1 <= 183;
	     {1'd0,  9'd238}: s1rd1 <= 119;
	     {1'd0,  9'd239}: s1rd1 <= 247;
	     {1'd0,  9'd240}: s1rd1 <= 15;
	     {1'd0,  9'd241}: s1rd1 <= 143;
	     {1'd0,  9'd242}: s1rd1 <= 79;
	     {1'd0,  9'd243}: s1rd1 <= 207;
	     {1'd0,  9'd244}: s1rd1 <= 47;
	     {1'd0,  9'd245}: s1rd1 <= 175;
	     {1'd0,  9'd246}: s1rd1 <= 111;
	     {1'd0,  9'd247}: s1rd1 <= 239;
	     {1'd0,  9'd248}: s1rd1 <= 31;
	     {1'd0,  9'd249}: s1rd1 <= 159;
	     {1'd0,  9'd250}: s1rd1 <= 95;
	     {1'd0,  9'd251}: s1rd1 <= 223;
	     {1'd0,  9'd252}: s1rd1 <= 63;
	     {1'd0,  9'd253}: s1rd1 <= 191;
	     {1'd0,  9'd254}: s1rd1 <= 127;
	     {1'd0,  9'd255}: s1rd1 <= 255;
	     {1'd0,  9'd256}: s1rd1 <= 256;
	     {1'd0,  9'd257}: s1rd1 <= 384;
	     {1'd0,  9'd258}: s1rd1 <= 320;
	     {1'd0,  9'd259}: s1rd1 <= 448;
	     {1'd0,  9'd260}: s1rd1 <= 288;
	     {1'd0,  9'd261}: s1rd1 <= 416;
	     {1'd0,  9'd262}: s1rd1 <= 352;
	     {1'd0,  9'd263}: s1rd1 <= 480;
	     {1'd0,  9'd264}: s1rd1 <= 272;
	     {1'd0,  9'd265}: s1rd1 <= 400;
	     {1'd0,  9'd266}: s1rd1 <= 336;
	     {1'd0,  9'd267}: s1rd1 <= 464;
	     {1'd0,  9'd268}: s1rd1 <= 304;
	     {1'd0,  9'd269}: s1rd1 <= 432;
	     {1'd0,  9'd270}: s1rd1 <= 368;
	     {1'd0,  9'd271}: s1rd1 <= 496;
	     {1'd0,  9'd272}: s1rd1 <= 264;
	     {1'd0,  9'd273}: s1rd1 <= 392;
	     {1'd0,  9'd274}: s1rd1 <= 328;
	     {1'd0,  9'd275}: s1rd1 <= 456;
	     {1'd0,  9'd276}: s1rd1 <= 296;
	     {1'd0,  9'd277}: s1rd1 <= 424;
	     {1'd0,  9'd278}: s1rd1 <= 360;
	     {1'd0,  9'd279}: s1rd1 <= 488;
	     {1'd0,  9'd280}: s1rd1 <= 280;
	     {1'd0,  9'd281}: s1rd1 <= 408;
	     {1'd0,  9'd282}: s1rd1 <= 344;
	     {1'd0,  9'd283}: s1rd1 <= 472;
	     {1'd0,  9'd284}: s1rd1 <= 312;
	     {1'd0,  9'd285}: s1rd1 <= 440;
	     {1'd0,  9'd286}: s1rd1 <= 376;
	     {1'd0,  9'd287}: s1rd1 <= 504;
	     {1'd0,  9'd288}: s1rd1 <= 260;
	     {1'd0,  9'd289}: s1rd1 <= 388;
	     {1'd0,  9'd290}: s1rd1 <= 324;
	     {1'd0,  9'd291}: s1rd1 <= 452;
	     {1'd0,  9'd292}: s1rd1 <= 292;
	     {1'd0,  9'd293}: s1rd1 <= 420;
	     {1'd0,  9'd294}: s1rd1 <= 356;
	     {1'd0,  9'd295}: s1rd1 <= 484;
	     {1'd0,  9'd296}: s1rd1 <= 276;
	     {1'd0,  9'd297}: s1rd1 <= 404;
	     {1'd0,  9'd298}: s1rd1 <= 340;
	     {1'd0,  9'd299}: s1rd1 <= 468;
	     {1'd0,  9'd300}: s1rd1 <= 308;
	     {1'd0,  9'd301}: s1rd1 <= 436;
	     {1'd0,  9'd302}: s1rd1 <= 372;
	     {1'd0,  9'd303}: s1rd1 <= 500;
	     {1'd0,  9'd304}: s1rd1 <= 268;
	     {1'd0,  9'd305}: s1rd1 <= 396;
	     {1'd0,  9'd306}: s1rd1 <= 332;
	     {1'd0,  9'd307}: s1rd1 <= 460;
	     {1'd0,  9'd308}: s1rd1 <= 300;
	     {1'd0,  9'd309}: s1rd1 <= 428;
	     {1'd0,  9'd310}: s1rd1 <= 364;
	     {1'd0,  9'd311}: s1rd1 <= 492;
	     {1'd0,  9'd312}: s1rd1 <= 284;
	     {1'd0,  9'd313}: s1rd1 <= 412;
	     {1'd0,  9'd314}: s1rd1 <= 348;
	     {1'd0,  9'd315}: s1rd1 <= 476;
	     {1'd0,  9'd316}: s1rd1 <= 316;
	     {1'd0,  9'd317}: s1rd1 <= 444;
	     {1'd0,  9'd318}: s1rd1 <= 380;
	     {1'd0,  9'd319}: s1rd1 <= 508;
	     {1'd0,  9'd320}: s1rd1 <= 258;
	     {1'd0,  9'd321}: s1rd1 <= 386;
	     {1'd0,  9'd322}: s1rd1 <= 322;
	     {1'd0,  9'd323}: s1rd1 <= 450;
	     {1'd0,  9'd324}: s1rd1 <= 290;
	     {1'd0,  9'd325}: s1rd1 <= 418;
	     {1'd0,  9'd326}: s1rd1 <= 354;
	     {1'd0,  9'd327}: s1rd1 <= 482;
	     {1'd0,  9'd328}: s1rd1 <= 274;
	     {1'd0,  9'd329}: s1rd1 <= 402;
	     {1'd0,  9'd330}: s1rd1 <= 338;
	     {1'd0,  9'd331}: s1rd1 <= 466;
	     {1'd0,  9'd332}: s1rd1 <= 306;
	     {1'd0,  9'd333}: s1rd1 <= 434;
	     {1'd0,  9'd334}: s1rd1 <= 370;
	     {1'd0,  9'd335}: s1rd1 <= 498;
	     {1'd0,  9'd336}: s1rd1 <= 266;
	     {1'd0,  9'd337}: s1rd1 <= 394;
	     {1'd0,  9'd338}: s1rd1 <= 330;
	     {1'd0,  9'd339}: s1rd1 <= 458;
	     {1'd0,  9'd340}: s1rd1 <= 298;
	     {1'd0,  9'd341}: s1rd1 <= 426;
	     {1'd0,  9'd342}: s1rd1 <= 362;
	     {1'd0,  9'd343}: s1rd1 <= 490;
	     {1'd0,  9'd344}: s1rd1 <= 282;
	     {1'd0,  9'd345}: s1rd1 <= 410;
	     {1'd0,  9'd346}: s1rd1 <= 346;
	     {1'd0,  9'd347}: s1rd1 <= 474;
	     {1'd0,  9'd348}: s1rd1 <= 314;
	     {1'd0,  9'd349}: s1rd1 <= 442;
	     {1'd0,  9'd350}: s1rd1 <= 378;
	     {1'd0,  9'd351}: s1rd1 <= 506;
	     {1'd0,  9'd352}: s1rd1 <= 262;
	     {1'd0,  9'd353}: s1rd1 <= 390;
	     {1'd0,  9'd354}: s1rd1 <= 326;
	     {1'd0,  9'd355}: s1rd1 <= 454;
	     {1'd0,  9'd356}: s1rd1 <= 294;
	     {1'd0,  9'd357}: s1rd1 <= 422;
	     {1'd0,  9'd358}: s1rd1 <= 358;
	     {1'd0,  9'd359}: s1rd1 <= 486;
	     {1'd0,  9'd360}: s1rd1 <= 278;
	     {1'd0,  9'd361}: s1rd1 <= 406;
	     {1'd0,  9'd362}: s1rd1 <= 342;
	     {1'd0,  9'd363}: s1rd1 <= 470;
	     {1'd0,  9'd364}: s1rd1 <= 310;
	     {1'd0,  9'd365}: s1rd1 <= 438;
	     {1'd0,  9'd366}: s1rd1 <= 374;
	     {1'd0,  9'd367}: s1rd1 <= 502;
	     {1'd0,  9'd368}: s1rd1 <= 270;
	     {1'd0,  9'd369}: s1rd1 <= 398;
	     {1'd0,  9'd370}: s1rd1 <= 334;
	     {1'd0,  9'd371}: s1rd1 <= 462;
	     {1'd0,  9'd372}: s1rd1 <= 302;
	     {1'd0,  9'd373}: s1rd1 <= 430;
	     {1'd0,  9'd374}: s1rd1 <= 366;
	     {1'd0,  9'd375}: s1rd1 <= 494;
	     {1'd0,  9'd376}: s1rd1 <= 286;
	     {1'd0,  9'd377}: s1rd1 <= 414;
	     {1'd0,  9'd378}: s1rd1 <= 350;
	     {1'd0,  9'd379}: s1rd1 <= 478;
	     {1'd0,  9'd380}: s1rd1 <= 318;
	     {1'd0,  9'd381}: s1rd1 <= 446;
	     {1'd0,  9'd382}: s1rd1 <= 382;
	     {1'd0,  9'd383}: s1rd1 <= 510;
	     {1'd0,  9'd384}: s1rd1 <= 257;
	     {1'd0,  9'd385}: s1rd1 <= 385;
	     {1'd0,  9'd386}: s1rd1 <= 321;
	     {1'd0,  9'd387}: s1rd1 <= 449;
	     {1'd0,  9'd388}: s1rd1 <= 289;
	     {1'd0,  9'd389}: s1rd1 <= 417;
	     {1'd0,  9'd390}: s1rd1 <= 353;
	     {1'd0,  9'd391}: s1rd1 <= 481;
	     {1'd0,  9'd392}: s1rd1 <= 273;
	     {1'd0,  9'd393}: s1rd1 <= 401;
	     {1'd0,  9'd394}: s1rd1 <= 337;
	     {1'd0,  9'd395}: s1rd1 <= 465;
	     {1'd0,  9'd396}: s1rd1 <= 305;
	     {1'd0,  9'd397}: s1rd1 <= 433;
	     {1'd0,  9'd398}: s1rd1 <= 369;
	     {1'd0,  9'd399}: s1rd1 <= 497;
	     {1'd0,  9'd400}: s1rd1 <= 265;
	     {1'd0,  9'd401}: s1rd1 <= 393;
	     {1'd0,  9'd402}: s1rd1 <= 329;
	     {1'd0,  9'd403}: s1rd1 <= 457;
	     {1'd0,  9'd404}: s1rd1 <= 297;
	     {1'd0,  9'd405}: s1rd1 <= 425;
	     {1'd0,  9'd406}: s1rd1 <= 361;
	     {1'd0,  9'd407}: s1rd1 <= 489;
	     {1'd0,  9'd408}: s1rd1 <= 281;
	     {1'd0,  9'd409}: s1rd1 <= 409;
	     {1'd0,  9'd410}: s1rd1 <= 345;
	     {1'd0,  9'd411}: s1rd1 <= 473;
	     {1'd0,  9'd412}: s1rd1 <= 313;
	     {1'd0,  9'd413}: s1rd1 <= 441;
	     {1'd0,  9'd414}: s1rd1 <= 377;
	     {1'd0,  9'd415}: s1rd1 <= 505;
	     {1'd0,  9'd416}: s1rd1 <= 261;
	     {1'd0,  9'd417}: s1rd1 <= 389;
	     {1'd0,  9'd418}: s1rd1 <= 325;
	     {1'd0,  9'd419}: s1rd1 <= 453;
	     {1'd0,  9'd420}: s1rd1 <= 293;
	     {1'd0,  9'd421}: s1rd1 <= 421;
	     {1'd0,  9'd422}: s1rd1 <= 357;
	     {1'd0,  9'd423}: s1rd1 <= 485;
	     {1'd0,  9'd424}: s1rd1 <= 277;
	     {1'd0,  9'd425}: s1rd1 <= 405;
	     {1'd0,  9'd426}: s1rd1 <= 341;
	     {1'd0,  9'd427}: s1rd1 <= 469;
	     {1'd0,  9'd428}: s1rd1 <= 309;
	     {1'd0,  9'd429}: s1rd1 <= 437;
	     {1'd0,  9'd430}: s1rd1 <= 373;
	     {1'd0,  9'd431}: s1rd1 <= 501;
	     {1'd0,  9'd432}: s1rd1 <= 269;
	     {1'd0,  9'd433}: s1rd1 <= 397;
	     {1'd0,  9'd434}: s1rd1 <= 333;
	     {1'd0,  9'd435}: s1rd1 <= 461;
	     {1'd0,  9'd436}: s1rd1 <= 301;
	     {1'd0,  9'd437}: s1rd1 <= 429;
	     {1'd0,  9'd438}: s1rd1 <= 365;
	     {1'd0,  9'd439}: s1rd1 <= 493;
	     {1'd0,  9'd440}: s1rd1 <= 285;
	     {1'd0,  9'd441}: s1rd1 <= 413;
	     {1'd0,  9'd442}: s1rd1 <= 349;
	     {1'd0,  9'd443}: s1rd1 <= 477;
	     {1'd0,  9'd444}: s1rd1 <= 317;
	     {1'd0,  9'd445}: s1rd1 <= 445;
	     {1'd0,  9'd446}: s1rd1 <= 381;
	     {1'd0,  9'd447}: s1rd1 <= 509;
	     {1'd0,  9'd448}: s1rd1 <= 259;
	     {1'd0,  9'd449}: s1rd1 <= 387;
	     {1'd0,  9'd450}: s1rd1 <= 323;
	     {1'd0,  9'd451}: s1rd1 <= 451;
	     {1'd0,  9'd452}: s1rd1 <= 291;
	     {1'd0,  9'd453}: s1rd1 <= 419;
	     {1'd0,  9'd454}: s1rd1 <= 355;
	     {1'd0,  9'd455}: s1rd1 <= 483;
	     {1'd0,  9'd456}: s1rd1 <= 275;
	     {1'd0,  9'd457}: s1rd1 <= 403;
	     {1'd0,  9'd458}: s1rd1 <= 339;
	     {1'd0,  9'd459}: s1rd1 <= 467;
	     {1'd0,  9'd460}: s1rd1 <= 307;
	     {1'd0,  9'd461}: s1rd1 <= 435;
	     {1'd0,  9'd462}: s1rd1 <= 371;
	     {1'd0,  9'd463}: s1rd1 <= 499;
	     {1'd0,  9'd464}: s1rd1 <= 267;
	     {1'd0,  9'd465}: s1rd1 <= 395;
	     {1'd0,  9'd466}: s1rd1 <= 331;
	     {1'd0,  9'd467}: s1rd1 <= 459;
	     {1'd0,  9'd468}: s1rd1 <= 299;
	     {1'd0,  9'd469}: s1rd1 <= 427;
	     {1'd0,  9'd470}: s1rd1 <= 363;
	     {1'd0,  9'd471}: s1rd1 <= 491;
	     {1'd0,  9'd472}: s1rd1 <= 283;
	     {1'd0,  9'd473}: s1rd1 <= 411;
	     {1'd0,  9'd474}: s1rd1 <= 347;
	     {1'd0,  9'd475}: s1rd1 <= 475;
	     {1'd0,  9'd476}: s1rd1 <= 315;
	     {1'd0,  9'd477}: s1rd1 <= 443;
	     {1'd0,  9'd478}: s1rd1 <= 379;
	     {1'd0,  9'd479}: s1rd1 <= 507;
	     {1'd0,  9'd480}: s1rd1 <= 263;
	     {1'd0,  9'd481}: s1rd1 <= 391;
	     {1'd0,  9'd482}: s1rd1 <= 327;
	     {1'd0,  9'd483}: s1rd1 <= 455;
	     {1'd0,  9'd484}: s1rd1 <= 295;
	     {1'd0,  9'd485}: s1rd1 <= 423;
	     {1'd0,  9'd486}: s1rd1 <= 359;
	     {1'd0,  9'd487}: s1rd1 <= 487;
	     {1'd0,  9'd488}: s1rd1 <= 279;
	     {1'd0,  9'd489}: s1rd1 <= 407;
	     {1'd0,  9'd490}: s1rd1 <= 343;
	     {1'd0,  9'd491}: s1rd1 <= 471;
	     {1'd0,  9'd492}: s1rd1 <= 311;
	     {1'd0,  9'd493}: s1rd1 <= 439;
	     {1'd0,  9'd494}: s1rd1 <= 375;
	     {1'd0,  9'd495}: s1rd1 <= 503;
	     {1'd0,  9'd496}: s1rd1 <= 271;
	     {1'd0,  9'd497}: s1rd1 <= 399;
	     {1'd0,  9'd498}: s1rd1 <= 335;
	     {1'd0,  9'd499}: s1rd1 <= 463;
	     {1'd0,  9'd500}: s1rd1 <= 303;
	     {1'd0,  9'd501}: s1rd1 <= 431;
	     {1'd0,  9'd502}: s1rd1 <= 367;
	     {1'd0,  9'd503}: s1rd1 <= 495;
	     {1'd0,  9'd504}: s1rd1 <= 287;
	     {1'd0,  9'd505}: s1rd1 <= 415;
	     {1'd0,  9'd506}: s1rd1 <= 351;
	     {1'd0,  9'd507}: s1rd1 <= 479;
	     {1'd0,  9'd508}: s1rd1 <= 319;
	     {1'd0,  9'd509}: s1rd1 <= 447;
	     {1'd0,  9'd510}: s1rd1 <= 383;
	     {1'd0,  9'd511}: s1rd1 <= 511;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet65366 sw(tm0_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm0_dd, writeCycle})
	      {1'd0, 9'd0}: s2wr0 <= 256;
	      {1'd0, 9'd1}: s2wr0 <= 257;
	      {1'd0, 9'd2}: s2wr0 <= 258;
	      {1'd0, 9'd3}: s2wr0 <= 259;
	      {1'd0, 9'd4}: s2wr0 <= 260;
	      {1'd0, 9'd5}: s2wr0 <= 261;
	      {1'd0, 9'd6}: s2wr0 <= 262;
	      {1'd0, 9'd7}: s2wr0 <= 263;
	      {1'd0, 9'd8}: s2wr0 <= 264;
	      {1'd0, 9'd9}: s2wr0 <= 265;
	      {1'd0, 9'd10}: s2wr0 <= 266;
	      {1'd0, 9'd11}: s2wr0 <= 267;
	      {1'd0, 9'd12}: s2wr0 <= 268;
	      {1'd0, 9'd13}: s2wr0 <= 269;
	      {1'd0, 9'd14}: s2wr0 <= 270;
	      {1'd0, 9'd15}: s2wr0 <= 271;
	      {1'd0, 9'd16}: s2wr0 <= 272;
	      {1'd0, 9'd17}: s2wr0 <= 273;
	      {1'd0, 9'd18}: s2wr0 <= 274;
	      {1'd0, 9'd19}: s2wr0 <= 275;
	      {1'd0, 9'd20}: s2wr0 <= 276;
	      {1'd0, 9'd21}: s2wr0 <= 277;
	      {1'd0, 9'd22}: s2wr0 <= 278;
	      {1'd0, 9'd23}: s2wr0 <= 279;
	      {1'd0, 9'd24}: s2wr0 <= 280;
	      {1'd0, 9'd25}: s2wr0 <= 281;
	      {1'd0, 9'd26}: s2wr0 <= 282;
	      {1'd0, 9'd27}: s2wr0 <= 283;
	      {1'd0, 9'd28}: s2wr0 <= 284;
	      {1'd0, 9'd29}: s2wr0 <= 285;
	      {1'd0, 9'd30}: s2wr0 <= 286;
	      {1'd0, 9'd31}: s2wr0 <= 287;
	      {1'd0, 9'd32}: s2wr0 <= 288;
	      {1'd0, 9'd33}: s2wr0 <= 289;
	      {1'd0, 9'd34}: s2wr0 <= 290;
	      {1'd0, 9'd35}: s2wr0 <= 291;
	      {1'd0, 9'd36}: s2wr0 <= 292;
	      {1'd0, 9'd37}: s2wr0 <= 293;
	      {1'd0, 9'd38}: s2wr0 <= 294;
	      {1'd0, 9'd39}: s2wr0 <= 295;
	      {1'd0, 9'd40}: s2wr0 <= 296;
	      {1'd0, 9'd41}: s2wr0 <= 297;
	      {1'd0, 9'd42}: s2wr0 <= 298;
	      {1'd0, 9'd43}: s2wr0 <= 299;
	      {1'd0, 9'd44}: s2wr0 <= 300;
	      {1'd0, 9'd45}: s2wr0 <= 301;
	      {1'd0, 9'd46}: s2wr0 <= 302;
	      {1'd0, 9'd47}: s2wr0 <= 303;
	      {1'd0, 9'd48}: s2wr0 <= 304;
	      {1'd0, 9'd49}: s2wr0 <= 305;
	      {1'd0, 9'd50}: s2wr0 <= 306;
	      {1'd0, 9'd51}: s2wr0 <= 307;
	      {1'd0, 9'd52}: s2wr0 <= 308;
	      {1'd0, 9'd53}: s2wr0 <= 309;
	      {1'd0, 9'd54}: s2wr0 <= 310;
	      {1'd0, 9'd55}: s2wr0 <= 311;
	      {1'd0, 9'd56}: s2wr0 <= 312;
	      {1'd0, 9'd57}: s2wr0 <= 313;
	      {1'd0, 9'd58}: s2wr0 <= 314;
	      {1'd0, 9'd59}: s2wr0 <= 315;
	      {1'd0, 9'd60}: s2wr0 <= 316;
	      {1'd0, 9'd61}: s2wr0 <= 317;
	      {1'd0, 9'd62}: s2wr0 <= 318;
	      {1'd0, 9'd63}: s2wr0 <= 319;
	      {1'd0, 9'd64}: s2wr0 <= 320;
	      {1'd0, 9'd65}: s2wr0 <= 321;
	      {1'd0, 9'd66}: s2wr0 <= 322;
	      {1'd0, 9'd67}: s2wr0 <= 323;
	      {1'd0, 9'd68}: s2wr0 <= 324;
	      {1'd0, 9'd69}: s2wr0 <= 325;
	      {1'd0, 9'd70}: s2wr0 <= 326;
	      {1'd0, 9'd71}: s2wr0 <= 327;
	      {1'd0, 9'd72}: s2wr0 <= 328;
	      {1'd0, 9'd73}: s2wr0 <= 329;
	      {1'd0, 9'd74}: s2wr0 <= 330;
	      {1'd0, 9'd75}: s2wr0 <= 331;
	      {1'd0, 9'd76}: s2wr0 <= 332;
	      {1'd0, 9'd77}: s2wr0 <= 333;
	      {1'd0, 9'd78}: s2wr0 <= 334;
	      {1'd0, 9'd79}: s2wr0 <= 335;
	      {1'd0, 9'd80}: s2wr0 <= 336;
	      {1'd0, 9'd81}: s2wr0 <= 337;
	      {1'd0, 9'd82}: s2wr0 <= 338;
	      {1'd0, 9'd83}: s2wr0 <= 339;
	      {1'd0, 9'd84}: s2wr0 <= 340;
	      {1'd0, 9'd85}: s2wr0 <= 341;
	      {1'd0, 9'd86}: s2wr0 <= 342;
	      {1'd0, 9'd87}: s2wr0 <= 343;
	      {1'd0, 9'd88}: s2wr0 <= 344;
	      {1'd0, 9'd89}: s2wr0 <= 345;
	      {1'd0, 9'd90}: s2wr0 <= 346;
	      {1'd0, 9'd91}: s2wr0 <= 347;
	      {1'd0, 9'd92}: s2wr0 <= 348;
	      {1'd0, 9'd93}: s2wr0 <= 349;
	      {1'd0, 9'd94}: s2wr0 <= 350;
	      {1'd0, 9'd95}: s2wr0 <= 351;
	      {1'd0, 9'd96}: s2wr0 <= 352;
	      {1'd0, 9'd97}: s2wr0 <= 353;
	      {1'd0, 9'd98}: s2wr0 <= 354;
	      {1'd0, 9'd99}: s2wr0 <= 355;
	      {1'd0, 9'd100}: s2wr0 <= 356;
	      {1'd0, 9'd101}: s2wr0 <= 357;
	      {1'd0, 9'd102}: s2wr0 <= 358;
	      {1'd0, 9'd103}: s2wr0 <= 359;
	      {1'd0, 9'd104}: s2wr0 <= 360;
	      {1'd0, 9'd105}: s2wr0 <= 361;
	      {1'd0, 9'd106}: s2wr0 <= 362;
	      {1'd0, 9'd107}: s2wr0 <= 363;
	      {1'd0, 9'd108}: s2wr0 <= 364;
	      {1'd0, 9'd109}: s2wr0 <= 365;
	      {1'd0, 9'd110}: s2wr0 <= 366;
	      {1'd0, 9'd111}: s2wr0 <= 367;
	      {1'd0, 9'd112}: s2wr0 <= 368;
	      {1'd0, 9'd113}: s2wr0 <= 369;
	      {1'd0, 9'd114}: s2wr0 <= 370;
	      {1'd0, 9'd115}: s2wr0 <= 371;
	      {1'd0, 9'd116}: s2wr0 <= 372;
	      {1'd0, 9'd117}: s2wr0 <= 373;
	      {1'd0, 9'd118}: s2wr0 <= 374;
	      {1'd0, 9'd119}: s2wr0 <= 375;
	      {1'd0, 9'd120}: s2wr0 <= 376;
	      {1'd0, 9'd121}: s2wr0 <= 377;
	      {1'd0, 9'd122}: s2wr0 <= 378;
	      {1'd0, 9'd123}: s2wr0 <= 379;
	      {1'd0, 9'd124}: s2wr0 <= 380;
	      {1'd0, 9'd125}: s2wr0 <= 381;
	      {1'd0, 9'd126}: s2wr0 <= 382;
	      {1'd0, 9'd127}: s2wr0 <= 383;
	      {1'd0, 9'd128}: s2wr0 <= 384;
	      {1'd0, 9'd129}: s2wr0 <= 385;
	      {1'd0, 9'd130}: s2wr0 <= 386;
	      {1'd0, 9'd131}: s2wr0 <= 387;
	      {1'd0, 9'd132}: s2wr0 <= 388;
	      {1'd0, 9'd133}: s2wr0 <= 389;
	      {1'd0, 9'd134}: s2wr0 <= 390;
	      {1'd0, 9'd135}: s2wr0 <= 391;
	      {1'd0, 9'd136}: s2wr0 <= 392;
	      {1'd0, 9'd137}: s2wr0 <= 393;
	      {1'd0, 9'd138}: s2wr0 <= 394;
	      {1'd0, 9'd139}: s2wr0 <= 395;
	      {1'd0, 9'd140}: s2wr0 <= 396;
	      {1'd0, 9'd141}: s2wr0 <= 397;
	      {1'd0, 9'd142}: s2wr0 <= 398;
	      {1'd0, 9'd143}: s2wr0 <= 399;
	      {1'd0, 9'd144}: s2wr0 <= 400;
	      {1'd0, 9'd145}: s2wr0 <= 401;
	      {1'd0, 9'd146}: s2wr0 <= 402;
	      {1'd0, 9'd147}: s2wr0 <= 403;
	      {1'd0, 9'd148}: s2wr0 <= 404;
	      {1'd0, 9'd149}: s2wr0 <= 405;
	      {1'd0, 9'd150}: s2wr0 <= 406;
	      {1'd0, 9'd151}: s2wr0 <= 407;
	      {1'd0, 9'd152}: s2wr0 <= 408;
	      {1'd0, 9'd153}: s2wr0 <= 409;
	      {1'd0, 9'd154}: s2wr0 <= 410;
	      {1'd0, 9'd155}: s2wr0 <= 411;
	      {1'd0, 9'd156}: s2wr0 <= 412;
	      {1'd0, 9'd157}: s2wr0 <= 413;
	      {1'd0, 9'd158}: s2wr0 <= 414;
	      {1'd0, 9'd159}: s2wr0 <= 415;
	      {1'd0, 9'd160}: s2wr0 <= 416;
	      {1'd0, 9'd161}: s2wr0 <= 417;
	      {1'd0, 9'd162}: s2wr0 <= 418;
	      {1'd0, 9'd163}: s2wr0 <= 419;
	      {1'd0, 9'd164}: s2wr0 <= 420;
	      {1'd0, 9'd165}: s2wr0 <= 421;
	      {1'd0, 9'd166}: s2wr0 <= 422;
	      {1'd0, 9'd167}: s2wr0 <= 423;
	      {1'd0, 9'd168}: s2wr0 <= 424;
	      {1'd0, 9'd169}: s2wr0 <= 425;
	      {1'd0, 9'd170}: s2wr0 <= 426;
	      {1'd0, 9'd171}: s2wr0 <= 427;
	      {1'd0, 9'd172}: s2wr0 <= 428;
	      {1'd0, 9'd173}: s2wr0 <= 429;
	      {1'd0, 9'd174}: s2wr0 <= 430;
	      {1'd0, 9'd175}: s2wr0 <= 431;
	      {1'd0, 9'd176}: s2wr0 <= 432;
	      {1'd0, 9'd177}: s2wr0 <= 433;
	      {1'd0, 9'd178}: s2wr0 <= 434;
	      {1'd0, 9'd179}: s2wr0 <= 435;
	      {1'd0, 9'd180}: s2wr0 <= 436;
	      {1'd0, 9'd181}: s2wr0 <= 437;
	      {1'd0, 9'd182}: s2wr0 <= 438;
	      {1'd0, 9'd183}: s2wr0 <= 439;
	      {1'd0, 9'd184}: s2wr0 <= 440;
	      {1'd0, 9'd185}: s2wr0 <= 441;
	      {1'd0, 9'd186}: s2wr0 <= 442;
	      {1'd0, 9'd187}: s2wr0 <= 443;
	      {1'd0, 9'd188}: s2wr0 <= 444;
	      {1'd0, 9'd189}: s2wr0 <= 445;
	      {1'd0, 9'd190}: s2wr0 <= 446;
	      {1'd0, 9'd191}: s2wr0 <= 447;
	      {1'd0, 9'd192}: s2wr0 <= 448;
	      {1'd0, 9'd193}: s2wr0 <= 449;
	      {1'd0, 9'd194}: s2wr0 <= 450;
	      {1'd0, 9'd195}: s2wr0 <= 451;
	      {1'd0, 9'd196}: s2wr0 <= 452;
	      {1'd0, 9'd197}: s2wr0 <= 453;
	      {1'd0, 9'd198}: s2wr0 <= 454;
	      {1'd0, 9'd199}: s2wr0 <= 455;
	      {1'd0, 9'd200}: s2wr0 <= 456;
	      {1'd0, 9'd201}: s2wr0 <= 457;
	      {1'd0, 9'd202}: s2wr0 <= 458;
	      {1'd0, 9'd203}: s2wr0 <= 459;
	      {1'd0, 9'd204}: s2wr0 <= 460;
	      {1'd0, 9'd205}: s2wr0 <= 461;
	      {1'd0, 9'd206}: s2wr0 <= 462;
	      {1'd0, 9'd207}: s2wr0 <= 463;
	      {1'd0, 9'd208}: s2wr0 <= 464;
	      {1'd0, 9'd209}: s2wr0 <= 465;
	      {1'd0, 9'd210}: s2wr0 <= 466;
	      {1'd0, 9'd211}: s2wr0 <= 467;
	      {1'd0, 9'd212}: s2wr0 <= 468;
	      {1'd0, 9'd213}: s2wr0 <= 469;
	      {1'd0, 9'd214}: s2wr0 <= 470;
	      {1'd0, 9'd215}: s2wr0 <= 471;
	      {1'd0, 9'd216}: s2wr0 <= 472;
	      {1'd0, 9'd217}: s2wr0 <= 473;
	      {1'd0, 9'd218}: s2wr0 <= 474;
	      {1'd0, 9'd219}: s2wr0 <= 475;
	      {1'd0, 9'd220}: s2wr0 <= 476;
	      {1'd0, 9'd221}: s2wr0 <= 477;
	      {1'd0, 9'd222}: s2wr0 <= 478;
	      {1'd0, 9'd223}: s2wr0 <= 479;
	      {1'd0, 9'd224}: s2wr0 <= 480;
	      {1'd0, 9'd225}: s2wr0 <= 481;
	      {1'd0, 9'd226}: s2wr0 <= 482;
	      {1'd0, 9'd227}: s2wr0 <= 483;
	      {1'd0, 9'd228}: s2wr0 <= 484;
	      {1'd0, 9'd229}: s2wr0 <= 485;
	      {1'd0, 9'd230}: s2wr0 <= 486;
	      {1'd0, 9'd231}: s2wr0 <= 487;
	      {1'd0, 9'd232}: s2wr0 <= 488;
	      {1'd0, 9'd233}: s2wr0 <= 489;
	      {1'd0, 9'd234}: s2wr0 <= 490;
	      {1'd0, 9'd235}: s2wr0 <= 491;
	      {1'd0, 9'd236}: s2wr0 <= 492;
	      {1'd0, 9'd237}: s2wr0 <= 493;
	      {1'd0, 9'd238}: s2wr0 <= 494;
	      {1'd0, 9'd239}: s2wr0 <= 495;
	      {1'd0, 9'd240}: s2wr0 <= 496;
	      {1'd0, 9'd241}: s2wr0 <= 497;
	      {1'd0, 9'd242}: s2wr0 <= 498;
	      {1'd0, 9'd243}: s2wr0 <= 499;
	      {1'd0, 9'd244}: s2wr0 <= 500;
	      {1'd0, 9'd245}: s2wr0 <= 501;
	      {1'd0, 9'd246}: s2wr0 <= 502;
	      {1'd0, 9'd247}: s2wr0 <= 503;
	      {1'd0, 9'd248}: s2wr0 <= 504;
	      {1'd0, 9'd249}: s2wr0 <= 505;
	      {1'd0, 9'd250}: s2wr0 <= 506;
	      {1'd0, 9'd251}: s2wr0 <= 507;
	      {1'd0, 9'd252}: s2wr0 <= 508;
	      {1'd0, 9'd253}: s2wr0 <= 509;
	      {1'd0, 9'd254}: s2wr0 <= 510;
	      {1'd0, 9'd255}: s2wr0 <= 511;
	      {1'd0, 9'd256}: s2wr0 <= 0;
	      {1'd0, 9'd257}: s2wr0 <= 1;
	      {1'd0, 9'd258}: s2wr0 <= 2;
	      {1'd0, 9'd259}: s2wr0 <= 3;
	      {1'd0, 9'd260}: s2wr0 <= 4;
	      {1'd0, 9'd261}: s2wr0 <= 5;
	      {1'd0, 9'd262}: s2wr0 <= 6;
	      {1'd0, 9'd263}: s2wr0 <= 7;
	      {1'd0, 9'd264}: s2wr0 <= 8;
	      {1'd0, 9'd265}: s2wr0 <= 9;
	      {1'd0, 9'd266}: s2wr0 <= 10;
	      {1'd0, 9'd267}: s2wr0 <= 11;
	      {1'd0, 9'd268}: s2wr0 <= 12;
	      {1'd0, 9'd269}: s2wr0 <= 13;
	      {1'd0, 9'd270}: s2wr0 <= 14;
	      {1'd0, 9'd271}: s2wr0 <= 15;
	      {1'd0, 9'd272}: s2wr0 <= 16;
	      {1'd0, 9'd273}: s2wr0 <= 17;
	      {1'd0, 9'd274}: s2wr0 <= 18;
	      {1'd0, 9'd275}: s2wr0 <= 19;
	      {1'd0, 9'd276}: s2wr0 <= 20;
	      {1'd0, 9'd277}: s2wr0 <= 21;
	      {1'd0, 9'd278}: s2wr0 <= 22;
	      {1'd0, 9'd279}: s2wr0 <= 23;
	      {1'd0, 9'd280}: s2wr0 <= 24;
	      {1'd0, 9'd281}: s2wr0 <= 25;
	      {1'd0, 9'd282}: s2wr0 <= 26;
	      {1'd0, 9'd283}: s2wr0 <= 27;
	      {1'd0, 9'd284}: s2wr0 <= 28;
	      {1'd0, 9'd285}: s2wr0 <= 29;
	      {1'd0, 9'd286}: s2wr0 <= 30;
	      {1'd0, 9'd287}: s2wr0 <= 31;
	      {1'd0, 9'd288}: s2wr0 <= 32;
	      {1'd0, 9'd289}: s2wr0 <= 33;
	      {1'd0, 9'd290}: s2wr0 <= 34;
	      {1'd0, 9'd291}: s2wr0 <= 35;
	      {1'd0, 9'd292}: s2wr0 <= 36;
	      {1'd0, 9'd293}: s2wr0 <= 37;
	      {1'd0, 9'd294}: s2wr0 <= 38;
	      {1'd0, 9'd295}: s2wr0 <= 39;
	      {1'd0, 9'd296}: s2wr0 <= 40;
	      {1'd0, 9'd297}: s2wr0 <= 41;
	      {1'd0, 9'd298}: s2wr0 <= 42;
	      {1'd0, 9'd299}: s2wr0 <= 43;
	      {1'd0, 9'd300}: s2wr0 <= 44;
	      {1'd0, 9'd301}: s2wr0 <= 45;
	      {1'd0, 9'd302}: s2wr0 <= 46;
	      {1'd0, 9'd303}: s2wr0 <= 47;
	      {1'd0, 9'd304}: s2wr0 <= 48;
	      {1'd0, 9'd305}: s2wr0 <= 49;
	      {1'd0, 9'd306}: s2wr0 <= 50;
	      {1'd0, 9'd307}: s2wr0 <= 51;
	      {1'd0, 9'd308}: s2wr0 <= 52;
	      {1'd0, 9'd309}: s2wr0 <= 53;
	      {1'd0, 9'd310}: s2wr0 <= 54;
	      {1'd0, 9'd311}: s2wr0 <= 55;
	      {1'd0, 9'd312}: s2wr0 <= 56;
	      {1'd0, 9'd313}: s2wr0 <= 57;
	      {1'd0, 9'd314}: s2wr0 <= 58;
	      {1'd0, 9'd315}: s2wr0 <= 59;
	      {1'd0, 9'd316}: s2wr0 <= 60;
	      {1'd0, 9'd317}: s2wr0 <= 61;
	      {1'd0, 9'd318}: s2wr0 <= 62;
	      {1'd0, 9'd319}: s2wr0 <= 63;
	      {1'd0, 9'd320}: s2wr0 <= 64;
	      {1'd0, 9'd321}: s2wr0 <= 65;
	      {1'd0, 9'd322}: s2wr0 <= 66;
	      {1'd0, 9'd323}: s2wr0 <= 67;
	      {1'd0, 9'd324}: s2wr0 <= 68;
	      {1'd0, 9'd325}: s2wr0 <= 69;
	      {1'd0, 9'd326}: s2wr0 <= 70;
	      {1'd0, 9'd327}: s2wr0 <= 71;
	      {1'd0, 9'd328}: s2wr0 <= 72;
	      {1'd0, 9'd329}: s2wr0 <= 73;
	      {1'd0, 9'd330}: s2wr0 <= 74;
	      {1'd0, 9'd331}: s2wr0 <= 75;
	      {1'd0, 9'd332}: s2wr0 <= 76;
	      {1'd0, 9'd333}: s2wr0 <= 77;
	      {1'd0, 9'd334}: s2wr0 <= 78;
	      {1'd0, 9'd335}: s2wr0 <= 79;
	      {1'd0, 9'd336}: s2wr0 <= 80;
	      {1'd0, 9'd337}: s2wr0 <= 81;
	      {1'd0, 9'd338}: s2wr0 <= 82;
	      {1'd0, 9'd339}: s2wr0 <= 83;
	      {1'd0, 9'd340}: s2wr0 <= 84;
	      {1'd0, 9'd341}: s2wr0 <= 85;
	      {1'd0, 9'd342}: s2wr0 <= 86;
	      {1'd0, 9'd343}: s2wr0 <= 87;
	      {1'd0, 9'd344}: s2wr0 <= 88;
	      {1'd0, 9'd345}: s2wr0 <= 89;
	      {1'd0, 9'd346}: s2wr0 <= 90;
	      {1'd0, 9'd347}: s2wr0 <= 91;
	      {1'd0, 9'd348}: s2wr0 <= 92;
	      {1'd0, 9'd349}: s2wr0 <= 93;
	      {1'd0, 9'd350}: s2wr0 <= 94;
	      {1'd0, 9'd351}: s2wr0 <= 95;
	      {1'd0, 9'd352}: s2wr0 <= 96;
	      {1'd0, 9'd353}: s2wr0 <= 97;
	      {1'd0, 9'd354}: s2wr0 <= 98;
	      {1'd0, 9'd355}: s2wr0 <= 99;
	      {1'd0, 9'd356}: s2wr0 <= 100;
	      {1'd0, 9'd357}: s2wr0 <= 101;
	      {1'd0, 9'd358}: s2wr0 <= 102;
	      {1'd0, 9'd359}: s2wr0 <= 103;
	      {1'd0, 9'd360}: s2wr0 <= 104;
	      {1'd0, 9'd361}: s2wr0 <= 105;
	      {1'd0, 9'd362}: s2wr0 <= 106;
	      {1'd0, 9'd363}: s2wr0 <= 107;
	      {1'd0, 9'd364}: s2wr0 <= 108;
	      {1'd0, 9'd365}: s2wr0 <= 109;
	      {1'd0, 9'd366}: s2wr0 <= 110;
	      {1'd0, 9'd367}: s2wr0 <= 111;
	      {1'd0, 9'd368}: s2wr0 <= 112;
	      {1'd0, 9'd369}: s2wr0 <= 113;
	      {1'd0, 9'd370}: s2wr0 <= 114;
	      {1'd0, 9'd371}: s2wr0 <= 115;
	      {1'd0, 9'd372}: s2wr0 <= 116;
	      {1'd0, 9'd373}: s2wr0 <= 117;
	      {1'd0, 9'd374}: s2wr0 <= 118;
	      {1'd0, 9'd375}: s2wr0 <= 119;
	      {1'd0, 9'd376}: s2wr0 <= 120;
	      {1'd0, 9'd377}: s2wr0 <= 121;
	      {1'd0, 9'd378}: s2wr0 <= 122;
	      {1'd0, 9'd379}: s2wr0 <= 123;
	      {1'd0, 9'd380}: s2wr0 <= 124;
	      {1'd0, 9'd381}: s2wr0 <= 125;
	      {1'd0, 9'd382}: s2wr0 <= 126;
	      {1'd0, 9'd383}: s2wr0 <= 127;
	      {1'd0, 9'd384}: s2wr0 <= 128;
	      {1'd0, 9'd385}: s2wr0 <= 129;
	      {1'd0, 9'd386}: s2wr0 <= 130;
	      {1'd0, 9'd387}: s2wr0 <= 131;
	      {1'd0, 9'd388}: s2wr0 <= 132;
	      {1'd0, 9'd389}: s2wr0 <= 133;
	      {1'd0, 9'd390}: s2wr0 <= 134;
	      {1'd0, 9'd391}: s2wr0 <= 135;
	      {1'd0, 9'd392}: s2wr0 <= 136;
	      {1'd0, 9'd393}: s2wr0 <= 137;
	      {1'd0, 9'd394}: s2wr0 <= 138;
	      {1'd0, 9'd395}: s2wr0 <= 139;
	      {1'd0, 9'd396}: s2wr0 <= 140;
	      {1'd0, 9'd397}: s2wr0 <= 141;
	      {1'd0, 9'd398}: s2wr0 <= 142;
	      {1'd0, 9'd399}: s2wr0 <= 143;
	      {1'd0, 9'd400}: s2wr0 <= 144;
	      {1'd0, 9'd401}: s2wr0 <= 145;
	      {1'd0, 9'd402}: s2wr0 <= 146;
	      {1'd0, 9'd403}: s2wr0 <= 147;
	      {1'd0, 9'd404}: s2wr0 <= 148;
	      {1'd0, 9'd405}: s2wr0 <= 149;
	      {1'd0, 9'd406}: s2wr0 <= 150;
	      {1'd0, 9'd407}: s2wr0 <= 151;
	      {1'd0, 9'd408}: s2wr0 <= 152;
	      {1'd0, 9'd409}: s2wr0 <= 153;
	      {1'd0, 9'd410}: s2wr0 <= 154;
	      {1'd0, 9'd411}: s2wr0 <= 155;
	      {1'd0, 9'd412}: s2wr0 <= 156;
	      {1'd0, 9'd413}: s2wr0 <= 157;
	      {1'd0, 9'd414}: s2wr0 <= 158;
	      {1'd0, 9'd415}: s2wr0 <= 159;
	      {1'd0, 9'd416}: s2wr0 <= 160;
	      {1'd0, 9'd417}: s2wr0 <= 161;
	      {1'd0, 9'd418}: s2wr0 <= 162;
	      {1'd0, 9'd419}: s2wr0 <= 163;
	      {1'd0, 9'd420}: s2wr0 <= 164;
	      {1'd0, 9'd421}: s2wr0 <= 165;
	      {1'd0, 9'd422}: s2wr0 <= 166;
	      {1'd0, 9'd423}: s2wr0 <= 167;
	      {1'd0, 9'd424}: s2wr0 <= 168;
	      {1'd0, 9'd425}: s2wr0 <= 169;
	      {1'd0, 9'd426}: s2wr0 <= 170;
	      {1'd0, 9'd427}: s2wr0 <= 171;
	      {1'd0, 9'd428}: s2wr0 <= 172;
	      {1'd0, 9'd429}: s2wr0 <= 173;
	      {1'd0, 9'd430}: s2wr0 <= 174;
	      {1'd0, 9'd431}: s2wr0 <= 175;
	      {1'd0, 9'd432}: s2wr0 <= 176;
	      {1'd0, 9'd433}: s2wr0 <= 177;
	      {1'd0, 9'd434}: s2wr0 <= 178;
	      {1'd0, 9'd435}: s2wr0 <= 179;
	      {1'd0, 9'd436}: s2wr0 <= 180;
	      {1'd0, 9'd437}: s2wr0 <= 181;
	      {1'd0, 9'd438}: s2wr0 <= 182;
	      {1'd0, 9'd439}: s2wr0 <= 183;
	      {1'd0, 9'd440}: s2wr0 <= 184;
	      {1'd0, 9'd441}: s2wr0 <= 185;
	      {1'd0, 9'd442}: s2wr0 <= 186;
	      {1'd0, 9'd443}: s2wr0 <= 187;
	      {1'd0, 9'd444}: s2wr0 <= 188;
	      {1'd0, 9'd445}: s2wr0 <= 189;
	      {1'd0, 9'd446}: s2wr0 <= 190;
	      {1'd0, 9'd447}: s2wr0 <= 191;
	      {1'd0, 9'd448}: s2wr0 <= 192;
	      {1'd0, 9'd449}: s2wr0 <= 193;
	      {1'd0, 9'd450}: s2wr0 <= 194;
	      {1'd0, 9'd451}: s2wr0 <= 195;
	      {1'd0, 9'd452}: s2wr0 <= 196;
	      {1'd0, 9'd453}: s2wr0 <= 197;
	      {1'd0, 9'd454}: s2wr0 <= 198;
	      {1'd0, 9'd455}: s2wr0 <= 199;
	      {1'd0, 9'd456}: s2wr0 <= 200;
	      {1'd0, 9'd457}: s2wr0 <= 201;
	      {1'd0, 9'd458}: s2wr0 <= 202;
	      {1'd0, 9'd459}: s2wr0 <= 203;
	      {1'd0, 9'd460}: s2wr0 <= 204;
	      {1'd0, 9'd461}: s2wr0 <= 205;
	      {1'd0, 9'd462}: s2wr0 <= 206;
	      {1'd0, 9'd463}: s2wr0 <= 207;
	      {1'd0, 9'd464}: s2wr0 <= 208;
	      {1'd0, 9'd465}: s2wr0 <= 209;
	      {1'd0, 9'd466}: s2wr0 <= 210;
	      {1'd0, 9'd467}: s2wr0 <= 211;
	      {1'd0, 9'd468}: s2wr0 <= 212;
	      {1'd0, 9'd469}: s2wr0 <= 213;
	      {1'd0, 9'd470}: s2wr0 <= 214;
	      {1'd0, 9'd471}: s2wr0 <= 215;
	      {1'd0, 9'd472}: s2wr0 <= 216;
	      {1'd0, 9'd473}: s2wr0 <= 217;
	      {1'd0, 9'd474}: s2wr0 <= 218;
	      {1'd0, 9'd475}: s2wr0 <= 219;
	      {1'd0, 9'd476}: s2wr0 <= 220;
	      {1'd0, 9'd477}: s2wr0 <= 221;
	      {1'd0, 9'd478}: s2wr0 <= 222;
	      {1'd0, 9'd479}: s2wr0 <= 223;
	      {1'd0, 9'd480}: s2wr0 <= 224;
	      {1'd0, 9'd481}: s2wr0 <= 225;
	      {1'd0, 9'd482}: s2wr0 <= 226;
	      {1'd0, 9'd483}: s2wr0 <= 227;
	      {1'd0, 9'd484}: s2wr0 <= 228;
	      {1'd0, 9'd485}: s2wr0 <= 229;
	      {1'd0, 9'd486}: s2wr0 <= 230;
	      {1'd0, 9'd487}: s2wr0 <= 231;
	      {1'd0, 9'd488}: s2wr0 <= 232;
	      {1'd0, 9'd489}: s2wr0 <= 233;
	      {1'd0, 9'd490}: s2wr0 <= 234;
	      {1'd0, 9'd491}: s2wr0 <= 235;
	      {1'd0, 9'd492}: s2wr0 <= 236;
	      {1'd0, 9'd493}: s2wr0 <= 237;
	      {1'd0, 9'd494}: s2wr0 <= 238;
	      {1'd0, 9'd495}: s2wr0 <= 239;
	      {1'd0, 9'd496}: s2wr0 <= 240;
	      {1'd0, 9'd497}: s2wr0 <= 241;
	      {1'd0, 9'd498}: s2wr0 <= 242;
	      {1'd0, 9'd499}: s2wr0 <= 243;
	      {1'd0, 9'd500}: s2wr0 <= 244;
	      {1'd0, 9'd501}: s2wr0 <= 245;
	      {1'd0, 9'd502}: s2wr0 <= 246;
	      {1'd0, 9'd503}: s2wr0 <= 247;
	      {1'd0, 9'd504}: s2wr0 <= 248;
	      {1'd0, 9'd505}: s2wr0 <= 249;
	      {1'd0, 9'd506}: s2wr0 <= 250;
	      {1'd0, 9'd507}: s2wr0 <= 251;
	      {1'd0, 9'd508}: s2wr0 <= 252;
	      {1'd0, 9'd509}: s2wr0 <= 253;
	      {1'd0, 9'd510}: s2wr0 <= 254;
	      {1'd0, 9'd511}: s2wr0 <= 255;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm0_dd, writeCycle})
	      {1'd0, 9'd0}: s2wr1 <= 0;
	      {1'd0, 9'd1}: s2wr1 <= 1;
	      {1'd0, 9'd2}: s2wr1 <= 2;
	      {1'd0, 9'd3}: s2wr1 <= 3;
	      {1'd0, 9'd4}: s2wr1 <= 4;
	      {1'd0, 9'd5}: s2wr1 <= 5;
	      {1'd0, 9'd6}: s2wr1 <= 6;
	      {1'd0, 9'd7}: s2wr1 <= 7;
	      {1'd0, 9'd8}: s2wr1 <= 8;
	      {1'd0, 9'd9}: s2wr1 <= 9;
	      {1'd0, 9'd10}: s2wr1 <= 10;
	      {1'd0, 9'd11}: s2wr1 <= 11;
	      {1'd0, 9'd12}: s2wr1 <= 12;
	      {1'd0, 9'd13}: s2wr1 <= 13;
	      {1'd0, 9'd14}: s2wr1 <= 14;
	      {1'd0, 9'd15}: s2wr1 <= 15;
	      {1'd0, 9'd16}: s2wr1 <= 16;
	      {1'd0, 9'd17}: s2wr1 <= 17;
	      {1'd0, 9'd18}: s2wr1 <= 18;
	      {1'd0, 9'd19}: s2wr1 <= 19;
	      {1'd0, 9'd20}: s2wr1 <= 20;
	      {1'd0, 9'd21}: s2wr1 <= 21;
	      {1'd0, 9'd22}: s2wr1 <= 22;
	      {1'd0, 9'd23}: s2wr1 <= 23;
	      {1'd0, 9'd24}: s2wr1 <= 24;
	      {1'd0, 9'd25}: s2wr1 <= 25;
	      {1'd0, 9'd26}: s2wr1 <= 26;
	      {1'd0, 9'd27}: s2wr1 <= 27;
	      {1'd0, 9'd28}: s2wr1 <= 28;
	      {1'd0, 9'd29}: s2wr1 <= 29;
	      {1'd0, 9'd30}: s2wr1 <= 30;
	      {1'd0, 9'd31}: s2wr1 <= 31;
	      {1'd0, 9'd32}: s2wr1 <= 32;
	      {1'd0, 9'd33}: s2wr1 <= 33;
	      {1'd0, 9'd34}: s2wr1 <= 34;
	      {1'd0, 9'd35}: s2wr1 <= 35;
	      {1'd0, 9'd36}: s2wr1 <= 36;
	      {1'd0, 9'd37}: s2wr1 <= 37;
	      {1'd0, 9'd38}: s2wr1 <= 38;
	      {1'd0, 9'd39}: s2wr1 <= 39;
	      {1'd0, 9'd40}: s2wr1 <= 40;
	      {1'd0, 9'd41}: s2wr1 <= 41;
	      {1'd0, 9'd42}: s2wr1 <= 42;
	      {1'd0, 9'd43}: s2wr1 <= 43;
	      {1'd0, 9'd44}: s2wr1 <= 44;
	      {1'd0, 9'd45}: s2wr1 <= 45;
	      {1'd0, 9'd46}: s2wr1 <= 46;
	      {1'd0, 9'd47}: s2wr1 <= 47;
	      {1'd0, 9'd48}: s2wr1 <= 48;
	      {1'd0, 9'd49}: s2wr1 <= 49;
	      {1'd0, 9'd50}: s2wr1 <= 50;
	      {1'd0, 9'd51}: s2wr1 <= 51;
	      {1'd0, 9'd52}: s2wr1 <= 52;
	      {1'd0, 9'd53}: s2wr1 <= 53;
	      {1'd0, 9'd54}: s2wr1 <= 54;
	      {1'd0, 9'd55}: s2wr1 <= 55;
	      {1'd0, 9'd56}: s2wr1 <= 56;
	      {1'd0, 9'd57}: s2wr1 <= 57;
	      {1'd0, 9'd58}: s2wr1 <= 58;
	      {1'd0, 9'd59}: s2wr1 <= 59;
	      {1'd0, 9'd60}: s2wr1 <= 60;
	      {1'd0, 9'd61}: s2wr1 <= 61;
	      {1'd0, 9'd62}: s2wr1 <= 62;
	      {1'd0, 9'd63}: s2wr1 <= 63;
	      {1'd0, 9'd64}: s2wr1 <= 64;
	      {1'd0, 9'd65}: s2wr1 <= 65;
	      {1'd0, 9'd66}: s2wr1 <= 66;
	      {1'd0, 9'd67}: s2wr1 <= 67;
	      {1'd0, 9'd68}: s2wr1 <= 68;
	      {1'd0, 9'd69}: s2wr1 <= 69;
	      {1'd0, 9'd70}: s2wr1 <= 70;
	      {1'd0, 9'd71}: s2wr1 <= 71;
	      {1'd0, 9'd72}: s2wr1 <= 72;
	      {1'd0, 9'd73}: s2wr1 <= 73;
	      {1'd0, 9'd74}: s2wr1 <= 74;
	      {1'd0, 9'd75}: s2wr1 <= 75;
	      {1'd0, 9'd76}: s2wr1 <= 76;
	      {1'd0, 9'd77}: s2wr1 <= 77;
	      {1'd0, 9'd78}: s2wr1 <= 78;
	      {1'd0, 9'd79}: s2wr1 <= 79;
	      {1'd0, 9'd80}: s2wr1 <= 80;
	      {1'd0, 9'd81}: s2wr1 <= 81;
	      {1'd0, 9'd82}: s2wr1 <= 82;
	      {1'd0, 9'd83}: s2wr1 <= 83;
	      {1'd0, 9'd84}: s2wr1 <= 84;
	      {1'd0, 9'd85}: s2wr1 <= 85;
	      {1'd0, 9'd86}: s2wr1 <= 86;
	      {1'd0, 9'd87}: s2wr1 <= 87;
	      {1'd0, 9'd88}: s2wr1 <= 88;
	      {1'd0, 9'd89}: s2wr1 <= 89;
	      {1'd0, 9'd90}: s2wr1 <= 90;
	      {1'd0, 9'd91}: s2wr1 <= 91;
	      {1'd0, 9'd92}: s2wr1 <= 92;
	      {1'd0, 9'd93}: s2wr1 <= 93;
	      {1'd0, 9'd94}: s2wr1 <= 94;
	      {1'd0, 9'd95}: s2wr1 <= 95;
	      {1'd0, 9'd96}: s2wr1 <= 96;
	      {1'd0, 9'd97}: s2wr1 <= 97;
	      {1'd0, 9'd98}: s2wr1 <= 98;
	      {1'd0, 9'd99}: s2wr1 <= 99;
	      {1'd0, 9'd100}: s2wr1 <= 100;
	      {1'd0, 9'd101}: s2wr1 <= 101;
	      {1'd0, 9'd102}: s2wr1 <= 102;
	      {1'd0, 9'd103}: s2wr1 <= 103;
	      {1'd0, 9'd104}: s2wr1 <= 104;
	      {1'd0, 9'd105}: s2wr1 <= 105;
	      {1'd0, 9'd106}: s2wr1 <= 106;
	      {1'd0, 9'd107}: s2wr1 <= 107;
	      {1'd0, 9'd108}: s2wr1 <= 108;
	      {1'd0, 9'd109}: s2wr1 <= 109;
	      {1'd0, 9'd110}: s2wr1 <= 110;
	      {1'd0, 9'd111}: s2wr1 <= 111;
	      {1'd0, 9'd112}: s2wr1 <= 112;
	      {1'd0, 9'd113}: s2wr1 <= 113;
	      {1'd0, 9'd114}: s2wr1 <= 114;
	      {1'd0, 9'd115}: s2wr1 <= 115;
	      {1'd0, 9'd116}: s2wr1 <= 116;
	      {1'd0, 9'd117}: s2wr1 <= 117;
	      {1'd0, 9'd118}: s2wr1 <= 118;
	      {1'd0, 9'd119}: s2wr1 <= 119;
	      {1'd0, 9'd120}: s2wr1 <= 120;
	      {1'd0, 9'd121}: s2wr1 <= 121;
	      {1'd0, 9'd122}: s2wr1 <= 122;
	      {1'd0, 9'd123}: s2wr1 <= 123;
	      {1'd0, 9'd124}: s2wr1 <= 124;
	      {1'd0, 9'd125}: s2wr1 <= 125;
	      {1'd0, 9'd126}: s2wr1 <= 126;
	      {1'd0, 9'd127}: s2wr1 <= 127;
	      {1'd0, 9'd128}: s2wr1 <= 128;
	      {1'd0, 9'd129}: s2wr1 <= 129;
	      {1'd0, 9'd130}: s2wr1 <= 130;
	      {1'd0, 9'd131}: s2wr1 <= 131;
	      {1'd0, 9'd132}: s2wr1 <= 132;
	      {1'd0, 9'd133}: s2wr1 <= 133;
	      {1'd0, 9'd134}: s2wr1 <= 134;
	      {1'd0, 9'd135}: s2wr1 <= 135;
	      {1'd0, 9'd136}: s2wr1 <= 136;
	      {1'd0, 9'd137}: s2wr1 <= 137;
	      {1'd0, 9'd138}: s2wr1 <= 138;
	      {1'd0, 9'd139}: s2wr1 <= 139;
	      {1'd0, 9'd140}: s2wr1 <= 140;
	      {1'd0, 9'd141}: s2wr1 <= 141;
	      {1'd0, 9'd142}: s2wr1 <= 142;
	      {1'd0, 9'd143}: s2wr1 <= 143;
	      {1'd0, 9'd144}: s2wr1 <= 144;
	      {1'd0, 9'd145}: s2wr1 <= 145;
	      {1'd0, 9'd146}: s2wr1 <= 146;
	      {1'd0, 9'd147}: s2wr1 <= 147;
	      {1'd0, 9'd148}: s2wr1 <= 148;
	      {1'd0, 9'd149}: s2wr1 <= 149;
	      {1'd0, 9'd150}: s2wr1 <= 150;
	      {1'd0, 9'd151}: s2wr1 <= 151;
	      {1'd0, 9'd152}: s2wr1 <= 152;
	      {1'd0, 9'd153}: s2wr1 <= 153;
	      {1'd0, 9'd154}: s2wr1 <= 154;
	      {1'd0, 9'd155}: s2wr1 <= 155;
	      {1'd0, 9'd156}: s2wr1 <= 156;
	      {1'd0, 9'd157}: s2wr1 <= 157;
	      {1'd0, 9'd158}: s2wr1 <= 158;
	      {1'd0, 9'd159}: s2wr1 <= 159;
	      {1'd0, 9'd160}: s2wr1 <= 160;
	      {1'd0, 9'd161}: s2wr1 <= 161;
	      {1'd0, 9'd162}: s2wr1 <= 162;
	      {1'd0, 9'd163}: s2wr1 <= 163;
	      {1'd0, 9'd164}: s2wr1 <= 164;
	      {1'd0, 9'd165}: s2wr1 <= 165;
	      {1'd0, 9'd166}: s2wr1 <= 166;
	      {1'd0, 9'd167}: s2wr1 <= 167;
	      {1'd0, 9'd168}: s2wr1 <= 168;
	      {1'd0, 9'd169}: s2wr1 <= 169;
	      {1'd0, 9'd170}: s2wr1 <= 170;
	      {1'd0, 9'd171}: s2wr1 <= 171;
	      {1'd0, 9'd172}: s2wr1 <= 172;
	      {1'd0, 9'd173}: s2wr1 <= 173;
	      {1'd0, 9'd174}: s2wr1 <= 174;
	      {1'd0, 9'd175}: s2wr1 <= 175;
	      {1'd0, 9'd176}: s2wr1 <= 176;
	      {1'd0, 9'd177}: s2wr1 <= 177;
	      {1'd0, 9'd178}: s2wr1 <= 178;
	      {1'd0, 9'd179}: s2wr1 <= 179;
	      {1'd0, 9'd180}: s2wr1 <= 180;
	      {1'd0, 9'd181}: s2wr1 <= 181;
	      {1'd0, 9'd182}: s2wr1 <= 182;
	      {1'd0, 9'd183}: s2wr1 <= 183;
	      {1'd0, 9'd184}: s2wr1 <= 184;
	      {1'd0, 9'd185}: s2wr1 <= 185;
	      {1'd0, 9'd186}: s2wr1 <= 186;
	      {1'd0, 9'd187}: s2wr1 <= 187;
	      {1'd0, 9'd188}: s2wr1 <= 188;
	      {1'd0, 9'd189}: s2wr1 <= 189;
	      {1'd0, 9'd190}: s2wr1 <= 190;
	      {1'd0, 9'd191}: s2wr1 <= 191;
	      {1'd0, 9'd192}: s2wr1 <= 192;
	      {1'd0, 9'd193}: s2wr1 <= 193;
	      {1'd0, 9'd194}: s2wr1 <= 194;
	      {1'd0, 9'd195}: s2wr1 <= 195;
	      {1'd0, 9'd196}: s2wr1 <= 196;
	      {1'd0, 9'd197}: s2wr1 <= 197;
	      {1'd0, 9'd198}: s2wr1 <= 198;
	      {1'd0, 9'd199}: s2wr1 <= 199;
	      {1'd0, 9'd200}: s2wr1 <= 200;
	      {1'd0, 9'd201}: s2wr1 <= 201;
	      {1'd0, 9'd202}: s2wr1 <= 202;
	      {1'd0, 9'd203}: s2wr1 <= 203;
	      {1'd0, 9'd204}: s2wr1 <= 204;
	      {1'd0, 9'd205}: s2wr1 <= 205;
	      {1'd0, 9'd206}: s2wr1 <= 206;
	      {1'd0, 9'd207}: s2wr1 <= 207;
	      {1'd0, 9'd208}: s2wr1 <= 208;
	      {1'd0, 9'd209}: s2wr1 <= 209;
	      {1'd0, 9'd210}: s2wr1 <= 210;
	      {1'd0, 9'd211}: s2wr1 <= 211;
	      {1'd0, 9'd212}: s2wr1 <= 212;
	      {1'd0, 9'd213}: s2wr1 <= 213;
	      {1'd0, 9'd214}: s2wr1 <= 214;
	      {1'd0, 9'd215}: s2wr1 <= 215;
	      {1'd0, 9'd216}: s2wr1 <= 216;
	      {1'd0, 9'd217}: s2wr1 <= 217;
	      {1'd0, 9'd218}: s2wr1 <= 218;
	      {1'd0, 9'd219}: s2wr1 <= 219;
	      {1'd0, 9'd220}: s2wr1 <= 220;
	      {1'd0, 9'd221}: s2wr1 <= 221;
	      {1'd0, 9'd222}: s2wr1 <= 222;
	      {1'd0, 9'd223}: s2wr1 <= 223;
	      {1'd0, 9'd224}: s2wr1 <= 224;
	      {1'd0, 9'd225}: s2wr1 <= 225;
	      {1'd0, 9'd226}: s2wr1 <= 226;
	      {1'd0, 9'd227}: s2wr1 <= 227;
	      {1'd0, 9'd228}: s2wr1 <= 228;
	      {1'd0, 9'd229}: s2wr1 <= 229;
	      {1'd0, 9'd230}: s2wr1 <= 230;
	      {1'd0, 9'd231}: s2wr1 <= 231;
	      {1'd0, 9'd232}: s2wr1 <= 232;
	      {1'd0, 9'd233}: s2wr1 <= 233;
	      {1'd0, 9'd234}: s2wr1 <= 234;
	      {1'd0, 9'd235}: s2wr1 <= 235;
	      {1'd0, 9'd236}: s2wr1 <= 236;
	      {1'd0, 9'd237}: s2wr1 <= 237;
	      {1'd0, 9'd238}: s2wr1 <= 238;
	      {1'd0, 9'd239}: s2wr1 <= 239;
	      {1'd0, 9'd240}: s2wr1 <= 240;
	      {1'd0, 9'd241}: s2wr1 <= 241;
	      {1'd0, 9'd242}: s2wr1 <= 242;
	      {1'd0, 9'd243}: s2wr1 <= 243;
	      {1'd0, 9'd244}: s2wr1 <= 244;
	      {1'd0, 9'd245}: s2wr1 <= 245;
	      {1'd0, 9'd246}: s2wr1 <= 246;
	      {1'd0, 9'd247}: s2wr1 <= 247;
	      {1'd0, 9'd248}: s2wr1 <= 248;
	      {1'd0, 9'd249}: s2wr1 <= 249;
	      {1'd0, 9'd250}: s2wr1 <= 250;
	      {1'd0, 9'd251}: s2wr1 <= 251;
	      {1'd0, 9'd252}: s2wr1 <= 252;
	      {1'd0, 9'd253}: s2wr1 <= 253;
	      {1'd0, 9'd254}: s2wr1 <= 254;
	      {1'd0, 9'd255}: s2wr1 <= 255;
	      {1'd0, 9'd256}: s2wr1 <= 256;
	      {1'd0, 9'd257}: s2wr1 <= 257;
	      {1'd0, 9'd258}: s2wr1 <= 258;
	      {1'd0, 9'd259}: s2wr1 <= 259;
	      {1'd0, 9'd260}: s2wr1 <= 260;
	      {1'd0, 9'd261}: s2wr1 <= 261;
	      {1'd0, 9'd262}: s2wr1 <= 262;
	      {1'd0, 9'd263}: s2wr1 <= 263;
	      {1'd0, 9'd264}: s2wr1 <= 264;
	      {1'd0, 9'd265}: s2wr1 <= 265;
	      {1'd0, 9'd266}: s2wr1 <= 266;
	      {1'd0, 9'd267}: s2wr1 <= 267;
	      {1'd0, 9'd268}: s2wr1 <= 268;
	      {1'd0, 9'd269}: s2wr1 <= 269;
	      {1'd0, 9'd270}: s2wr1 <= 270;
	      {1'd0, 9'd271}: s2wr1 <= 271;
	      {1'd0, 9'd272}: s2wr1 <= 272;
	      {1'd0, 9'd273}: s2wr1 <= 273;
	      {1'd0, 9'd274}: s2wr1 <= 274;
	      {1'd0, 9'd275}: s2wr1 <= 275;
	      {1'd0, 9'd276}: s2wr1 <= 276;
	      {1'd0, 9'd277}: s2wr1 <= 277;
	      {1'd0, 9'd278}: s2wr1 <= 278;
	      {1'd0, 9'd279}: s2wr1 <= 279;
	      {1'd0, 9'd280}: s2wr1 <= 280;
	      {1'd0, 9'd281}: s2wr1 <= 281;
	      {1'd0, 9'd282}: s2wr1 <= 282;
	      {1'd0, 9'd283}: s2wr1 <= 283;
	      {1'd0, 9'd284}: s2wr1 <= 284;
	      {1'd0, 9'd285}: s2wr1 <= 285;
	      {1'd0, 9'd286}: s2wr1 <= 286;
	      {1'd0, 9'd287}: s2wr1 <= 287;
	      {1'd0, 9'd288}: s2wr1 <= 288;
	      {1'd0, 9'd289}: s2wr1 <= 289;
	      {1'd0, 9'd290}: s2wr1 <= 290;
	      {1'd0, 9'd291}: s2wr1 <= 291;
	      {1'd0, 9'd292}: s2wr1 <= 292;
	      {1'd0, 9'd293}: s2wr1 <= 293;
	      {1'd0, 9'd294}: s2wr1 <= 294;
	      {1'd0, 9'd295}: s2wr1 <= 295;
	      {1'd0, 9'd296}: s2wr1 <= 296;
	      {1'd0, 9'd297}: s2wr1 <= 297;
	      {1'd0, 9'd298}: s2wr1 <= 298;
	      {1'd0, 9'd299}: s2wr1 <= 299;
	      {1'd0, 9'd300}: s2wr1 <= 300;
	      {1'd0, 9'd301}: s2wr1 <= 301;
	      {1'd0, 9'd302}: s2wr1 <= 302;
	      {1'd0, 9'd303}: s2wr1 <= 303;
	      {1'd0, 9'd304}: s2wr1 <= 304;
	      {1'd0, 9'd305}: s2wr1 <= 305;
	      {1'd0, 9'd306}: s2wr1 <= 306;
	      {1'd0, 9'd307}: s2wr1 <= 307;
	      {1'd0, 9'd308}: s2wr1 <= 308;
	      {1'd0, 9'd309}: s2wr1 <= 309;
	      {1'd0, 9'd310}: s2wr1 <= 310;
	      {1'd0, 9'd311}: s2wr1 <= 311;
	      {1'd0, 9'd312}: s2wr1 <= 312;
	      {1'd0, 9'd313}: s2wr1 <= 313;
	      {1'd0, 9'd314}: s2wr1 <= 314;
	      {1'd0, 9'd315}: s2wr1 <= 315;
	      {1'd0, 9'd316}: s2wr1 <= 316;
	      {1'd0, 9'd317}: s2wr1 <= 317;
	      {1'd0, 9'd318}: s2wr1 <= 318;
	      {1'd0, 9'd319}: s2wr1 <= 319;
	      {1'd0, 9'd320}: s2wr1 <= 320;
	      {1'd0, 9'd321}: s2wr1 <= 321;
	      {1'd0, 9'd322}: s2wr1 <= 322;
	      {1'd0, 9'd323}: s2wr1 <= 323;
	      {1'd0, 9'd324}: s2wr1 <= 324;
	      {1'd0, 9'd325}: s2wr1 <= 325;
	      {1'd0, 9'd326}: s2wr1 <= 326;
	      {1'd0, 9'd327}: s2wr1 <= 327;
	      {1'd0, 9'd328}: s2wr1 <= 328;
	      {1'd0, 9'd329}: s2wr1 <= 329;
	      {1'd0, 9'd330}: s2wr1 <= 330;
	      {1'd0, 9'd331}: s2wr1 <= 331;
	      {1'd0, 9'd332}: s2wr1 <= 332;
	      {1'd0, 9'd333}: s2wr1 <= 333;
	      {1'd0, 9'd334}: s2wr1 <= 334;
	      {1'd0, 9'd335}: s2wr1 <= 335;
	      {1'd0, 9'd336}: s2wr1 <= 336;
	      {1'd0, 9'd337}: s2wr1 <= 337;
	      {1'd0, 9'd338}: s2wr1 <= 338;
	      {1'd0, 9'd339}: s2wr1 <= 339;
	      {1'd0, 9'd340}: s2wr1 <= 340;
	      {1'd0, 9'd341}: s2wr1 <= 341;
	      {1'd0, 9'd342}: s2wr1 <= 342;
	      {1'd0, 9'd343}: s2wr1 <= 343;
	      {1'd0, 9'd344}: s2wr1 <= 344;
	      {1'd0, 9'd345}: s2wr1 <= 345;
	      {1'd0, 9'd346}: s2wr1 <= 346;
	      {1'd0, 9'd347}: s2wr1 <= 347;
	      {1'd0, 9'd348}: s2wr1 <= 348;
	      {1'd0, 9'd349}: s2wr1 <= 349;
	      {1'd0, 9'd350}: s2wr1 <= 350;
	      {1'd0, 9'd351}: s2wr1 <= 351;
	      {1'd0, 9'd352}: s2wr1 <= 352;
	      {1'd0, 9'd353}: s2wr1 <= 353;
	      {1'd0, 9'd354}: s2wr1 <= 354;
	      {1'd0, 9'd355}: s2wr1 <= 355;
	      {1'd0, 9'd356}: s2wr1 <= 356;
	      {1'd0, 9'd357}: s2wr1 <= 357;
	      {1'd0, 9'd358}: s2wr1 <= 358;
	      {1'd0, 9'd359}: s2wr1 <= 359;
	      {1'd0, 9'd360}: s2wr1 <= 360;
	      {1'd0, 9'd361}: s2wr1 <= 361;
	      {1'd0, 9'd362}: s2wr1 <= 362;
	      {1'd0, 9'd363}: s2wr1 <= 363;
	      {1'd0, 9'd364}: s2wr1 <= 364;
	      {1'd0, 9'd365}: s2wr1 <= 365;
	      {1'd0, 9'd366}: s2wr1 <= 366;
	      {1'd0, 9'd367}: s2wr1 <= 367;
	      {1'd0, 9'd368}: s2wr1 <= 368;
	      {1'd0, 9'd369}: s2wr1 <= 369;
	      {1'd0, 9'd370}: s2wr1 <= 370;
	      {1'd0, 9'd371}: s2wr1 <= 371;
	      {1'd0, 9'd372}: s2wr1 <= 372;
	      {1'd0, 9'd373}: s2wr1 <= 373;
	      {1'd0, 9'd374}: s2wr1 <= 374;
	      {1'd0, 9'd375}: s2wr1 <= 375;
	      {1'd0, 9'd376}: s2wr1 <= 376;
	      {1'd0, 9'd377}: s2wr1 <= 377;
	      {1'd0, 9'd378}: s2wr1 <= 378;
	      {1'd0, 9'd379}: s2wr1 <= 379;
	      {1'd0, 9'd380}: s2wr1 <= 380;
	      {1'd0, 9'd381}: s2wr1 <= 381;
	      {1'd0, 9'd382}: s2wr1 <= 382;
	      {1'd0, 9'd383}: s2wr1 <= 383;
	      {1'd0, 9'd384}: s2wr1 <= 384;
	      {1'd0, 9'd385}: s2wr1 <= 385;
	      {1'd0, 9'd386}: s2wr1 <= 386;
	      {1'd0, 9'd387}: s2wr1 <= 387;
	      {1'd0, 9'd388}: s2wr1 <= 388;
	      {1'd0, 9'd389}: s2wr1 <= 389;
	      {1'd0, 9'd390}: s2wr1 <= 390;
	      {1'd0, 9'd391}: s2wr1 <= 391;
	      {1'd0, 9'd392}: s2wr1 <= 392;
	      {1'd0, 9'd393}: s2wr1 <= 393;
	      {1'd0, 9'd394}: s2wr1 <= 394;
	      {1'd0, 9'd395}: s2wr1 <= 395;
	      {1'd0, 9'd396}: s2wr1 <= 396;
	      {1'd0, 9'd397}: s2wr1 <= 397;
	      {1'd0, 9'd398}: s2wr1 <= 398;
	      {1'd0, 9'd399}: s2wr1 <= 399;
	      {1'd0, 9'd400}: s2wr1 <= 400;
	      {1'd0, 9'd401}: s2wr1 <= 401;
	      {1'd0, 9'd402}: s2wr1 <= 402;
	      {1'd0, 9'd403}: s2wr1 <= 403;
	      {1'd0, 9'd404}: s2wr1 <= 404;
	      {1'd0, 9'd405}: s2wr1 <= 405;
	      {1'd0, 9'd406}: s2wr1 <= 406;
	      {1'd0, 9'd407}: s2wr1 <= 407;
	      {1'd0, 9'd408}: s2wr1 <= 408;
	      {1'd0, 9'd409}: s2wr1 <= 409;
	      {1'd0, 9'd410}: s2wr1 <= 410;
	      {1'd0, 9'd411}: s2wr1 <= 411;
	      {1'd0, 9'd412}: s2wr1 <= 412;
	      {1'd0, 9'd413}: s2wr1 <= 413;
	      {1'd0, 9'd414}: s2wr1 <= 414;
	      {1'd0, 9'd415}: s2wr1 <= 415;
	      {1'd0, 9'd416}: s2wr1 <= 416;
	      {1'd0, 9'd417}: s2wr1 <= 417;
	      {1'd0, 9'd418}: s2wr1 <= 418;
	      {1'd0, 9'd419}: s2wr1 <= 419;
	      {1'd0, 9'd420}: s2wr1 <= 420;
	      {1'd0, 9'd421}: s2wr1 <= 421;
	      {1'd0, 9'd422}: s2wr1 <= 422;
	      {1'd0, 9'd423}: s2wr1 <= 423;
	      {1'd0, 9'd424}: s2wr1 <= 424;
	      {1'd0, 9'd425}: s2wr1 <= 425;
	      {1'd0, 9'd426}: s2wr1 <= 426;
	      {1'd0, 9'd427}: s2wr1 <= 427;
	      {1'd0, 9'd428}: s2wr1 <= 428;
	      {1'd0, 9'd429}: s2wr1 <= 429;
	      {1'd0, 9'd430}: s2wr1 <= 430;
	      {1'd0, 9'd431}: s2wr1 <= 431;
	      {1'd0, 9'd432}: s2wr1 <= 432;
	      {1'd0, 9'd433}: s2wr1 <= 433;
	      {1'd0, 9'd434}: s2wr1 <= 434;
	      {1'd0, 9'd435}: s2wr1 <= 435;
	      {1'd0, 9'd436}: s2wr1 <= 436;
	      {1'd0, 9'd437}: s2wr1 <= 437;
	      {1'd0, 9'd438}: s2wr1 <= 438;
	      {1'd0, 9'd439}: s2wr1 <= 439;
	      {1'd0, 9'd440}: s2wr1 <= 440;
	      {1'd0, 9'd441}: s2wr1 <= 441;
	      {1'd0, 9'd442}: s2wr1 <= 442;
	      {1'd0, 9'd443}: s2wr1 <= 443;
	      {1'd0, 9'd444}: s2wr1 <= 444;
	      {1'd0, 9'd445}: s2wr1 <= 445;
	      {1'd0, 9'd446}: s2wr1 <= 446;
	      {1'd0, 9'd447}: s2wr1 <= 447;
	      {1'd0, 9'd448}: s2wr1 <= 448;
	      {1'd0, 9'd449}: s2wr1 <= 449;
	      {1'd0, 9'd450}: s2wr1 <= 450;
	      {1'd0, 9'd451}: s2wr1 <= 451;
	      {1'd0, 9'd452}: s2wr1 <= 452;
	      {1'd0, 9'd453}: s2wr1 <= 453;
	      {1'd0, 9'd454}: s2wr1 <= 454;
	      {1'd0, 9'd455}: s2wr1 <= 455;
	      {1'd0, 9'd456}: s2wr1 <= 456;
	      {1'd0, 9'd457}: s2wr1 <= 457;
	      {1'd0, 9'd458}: s2wr1 <= 458;
	      {1'd0, 9'd459}: s2wr1 <= 459;
	      {1'd0, 9'd460}: s2wr1 <= 460;
	      {1'd0, 9'd461}: s2wr1 <= 461;
	      {1'd0, 9'd462}: s2wr1 <= 462;
	      {1'd0, 9'd463}: s2wr1 <= 463;
	      {1'd0, 9'd464}: s2wr1 <= 464;
	      {1'd0, 9'd465}: s2wr1 <= 465;
	      {1'd0, 9'd466}: s2wr1 <= 466;
	      {1'd0, 9'd467}: s2wr1 <= 467;
	      {1'd0, 9'd468}: s2wr1 <= 468;
	      {1'd0, 9'd469}: s2wr1 <= 469;
	      {1'd0, 9'd470}: s2wr1 <= 470;
	      {1'd0, 9'd471}: s2wr1 <= 471;
	      {1'd0, 9'd472}: s2wr1 <= 472;
	      {1'd0, 9'd473}: s2wr1 <= 473;
	      {1'd0, 9'd474}: s2wr1 <= 474;
	      {1'd0, 9'd475}: s2wr1 <= 475;
	      {1'd0, 9'd476}: s2wr1 <= 476;
	      {1'd0, 9'd477}: s2wr1 <= 477;
	      {1'd0, 9'd478}: s2wr1 <= 478;
	      {1'd0, 9'd479}: s2wr1 <= 479;
	      {1'd0, 9'd480}: s2wr1 <= 480;
	      {1'd0, 9'd481}: s2wr1 <= 481;
	      {1'd0, 9'd482}: s2wr1 <= 482;
	      {1'd0, 9'd483}: s2wr1 <= 483;
	      {1'd0, 9'd484}: s2wr1 <= 484;
	      {1'd0, 9'd485}: s2wr1 <= 485;
	      {1'd0, 9'd486}: s2wr1 <= 486;
	      {1'd0, 9'd487}: s2wr1 <= 487;
	      {1'd0, 9'd488}: s2wr1 <= 488;
	      {1'd0, 9'd489}: s2wr1 <= 489;
	      {1'd0, 9'd490}: s2wr1 <= 490;
	      {1'd0, 9'd491}: s2wr1 <= 491;
	      {1'd0, 9'd492}: s2wr1 <= 492;
	      {1'd0, 9'd493}: s2wr1 <= 493;
	      {1'd0, 9'd494}: s2wr1 <= 494;
	      {1'd0, 9'd495}: s2wr1 <= 495;
	      {1'd0, 9'd496}: s2wr1 <= 496;
	      {1'd0, 9'd497}: s2wr1 <= 497;
	      {1'd0, 9'd498}: s2wr1 <= 498;
	      {1'd0, 9'd499}: s2wr1 <= 499;
	      {1'd0, 9'd500}: s2wr1 <= 500;
	      {1'd0, 9'd501}: s2wr1 <= 501;
	      {1'd0, 9'd502}: s2wr1 <= 502;
	      {1'd0, 9'd503}: s2wr1 <= 503;
	      {1'd0, 9'd504}: s2wr1 <= 504;
	      {1'd0, 9'd505}: s2wr1 <= 505;
	      {1'd0, 9'd506}: s2wr1 <= 506;
	      {1'd0, 9'd507}: s2wr1 <= 507;
	      {1'd0, 9'd508}: s2wr1 <= 508;
	      {1'd0, 9'd509}: s2wr1 <= 509;
	      {1'd0, 9'd510}: s2wr1 <= 510;
	      {1'd0, 9'd511}: s2wr1 <= 511;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule




/*module memMod(in, out, inAddr, outAddr, writeSel, clk);
   
   parameter depth=1024, width=16, logDepth=10;
   
   input [width-1:0]    in;
   input [logDepth-1:0] inAddr, outAddr;
   input 	        writeSel, clk;
   output [width-1:0] 	out;
   reg [width-1:0] 	out;
   
   // synthesis attribute ram_style of mem is block

   reg [width-1:0] 	mem[depth-1:0]; 
   
   always @(posedge clk) begin
      out <= mem[outAddr];
      
      if (writeSel)
        mem[inAddr] <= in;
   end
endmodule */



module memMod_dist(in, out, inAddr, outAddr, writeSel, clk);
   
   parameter depth=1024, width=16, logDepth=10;
   
   input [width-1:0]    in;
   input [logDepth-1:0] inAddr, outAddr;
   input 	        writeSel, clk;
   output [width-1:0] 	out;
   reg [width-1:0] 	out;
   
   // synthesis attribute ram_style of mem is distributed

   reg [width-1:0] 	mem[depth-1:0]; 
   
   always @(posedge clk) begin
      out <= mem[outAddr];
      
      if (writeSel)
        mem[inAddr] <= in;
   end
endmodule 


module nextReg(X, Y, reset, clk);
   parameter depth=2, logDepth=1;

   output Y;
   input X;
   input              clk, reset;
   reg [logDepth:0] count;
   reg                active;

   assign Y = (count == depth) ? 1 : 0;

   always @ (posedge clk) begin
      if (reset == 1) begin
         count <= 0;
         active <= 0;
      end
      else if (X == 1) begin
         active <= 1;
         count <= 1;
      end
      else if (count == depth) begin
         count <= 0;
         active <= 0;
      end
      else if (active)
         count <= count+1;
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock65370(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_73734(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a550;
   wire signed [15:0] a551;
   wire signed [15:0] a552;
   wire signed [15:0] a553;
   wire signed [16:0] tm245;
   wire signed [16:0] tm246;
   wire signed [16:0] tm247;
   wire signed [16:0] tm248;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t237;
   wire signed [15:0] t238;
   wire signed [15:0] t239;
   wire signed [15:0] t240;


   assign a550 = X0;
   assign a551 = X2;
   assign a552 = X1;
   assign a553 = X3;
   assign Y0 = t237;
   assign Y1 = t238;
   assign Y2 = t239;
   assign Y3 = t240;
   assign t237 = tm245[16:1];
   assign t238 = tm246[16:1];
   assign t239 = tm247[16:1];
   assign t240 = tm248[16:1];

    addfxp #(17, 1) add65382(.a({{1{a550[15]}}, a550}), .b({{1{a551[15]}}, a551}), .clk(clk), .q(tm245));    // 0
    addfxp #(17, 1) add65397(.a({{1{a552[15]}}, a552}), .b({{1{a553[15]}}, a553}), .clk(clk), .q(tm246));    // 0
    subfxp #(17, 1) sub65412(.a({{1{a550[15]}}, a550}), .b({{1{a551[15]}}, a551}), .clk(clk), .q(tm247));    // 0
    subfxp #(17, 1) sub65427(.a({{1{a552[15]}}, a552}), .b({{1{a553[15]}}, a553}), .clk(clk), .q(tm248));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 8
// Gap: 2
module rc65452(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm65450 instPerm73735(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet65450(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [0:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        1'd0: control <= 1'b1;
        1'd1: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 8
// Gap: 2
module perm65450(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 2;

   parameter addrbits = 1;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm1;
   assign tm1 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_73740(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73741(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

shiftRegFIFO #(1, 1) shiftFIFO_73750(.X(next), .Y(next2), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73751(.X(next2), .Y(next3), .clk(clk));
shiftRegFIFO #(2, 1) shiftFIFO_73752(.X(next3), .Y(next4), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73753(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73756(.X(tm1), .Y(tm1_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_73759(.X(tm1_d), .Y(tm1_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 1) shiftFIFO_73764(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm1_d, s1rdloc})
	     {1'd0,  1'd0}: s1rd0 <= 1;
	     {1'd0,  1'd1}: s1rd0 <= 0;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm1_d, s1rdloc})
	     {1'd0,  1'd0}: s1rd1 <= 0;
	     {1'd0,  1'd1}: s1rd1 <= 1;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet65450 sw(tm1_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm1_dd, writeCycle})
	      {1'd0, 1'd0}: s2wr0 <= 1;
	      {1'd0, 1'd1}: s2wr0 <= 0;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm1_dd, writeCycle})
	      {1'd0, 1'd0}: s2wr1 <= 0;
	      {1'd0, 1'd1}: s2wr1 <= 1;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 2
module DirSum_65633(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [0:0] i9;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i9 <= 0;
      end
      else begin
         if (next == 1)
            i9 <= 0;
         else if (i9 == 1)
            i9 <= 0;
         else
            i9 <= i9 + 1;
      end
   end

   codeBlock65455 codeBlockIsnt73765(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i9_in(i9),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D36_65619(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [0:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'hc000;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D34_65627(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [0:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h0;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock65455(clk, reset, next_in, next_out,
   i9_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [0:0] i9_in;
   reg [0:0] i9;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_73768(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a534;
   wire signed [15:0] a523;
   wire signed [15:0] a537;
   wire signed [15:0] a527;
   wire signed [15:0] a538;
   wire signed [15:0] a539;
   reg signed [15:0] tm285;
   reg signed [15:0] tm289;
   reg signed [15:0] tm301;
   reg signed [15:0] tm308;
   reg signed [15:0] tm286;
   reg signed [15:0] tm290;
   reg signed [15:0] tm302;
   reg signed [15:0] tm309;
   wire signed [15:0] tm4;
   wire signed [15:0] a528;
   wire signed [15:0] tm5;
   wire signed [15:0] a530;
   reg signed [15:0] tm287;
   reg signed [15:0] tm291;
   reg signed [15:0] tm303;
   reg signed [15:0] tm310;
   reg signed [15:0] tm51;
   reg signed [15:0] tm52;
   reg signed [15:0] tm288;
   reg signed [15:0] tm292;
   reg signed [15:0] tm304;
   reg signed [15:0] tm311;
   reg signed [15:0] tm305;
   reg signed [15:0] tm312;
   wire signed [15:0] a529;
   wire signed [15:0] a531;
   wire signed [15:0] a532;
   wire signed [15:0] a533;
   reg signed [15:0] tm306;
   reg signed [15:0] tm313;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm307;
   reg signed [15:0] tm314;


   assign a534 = X0;
   assign a523 = a534;
   assign a537 = X1;
   assign a527 = a537;
   assign a538 = X2;
   assign a539 = X3;
   assign a528 = tm4;
   assign a530 = tm5;
   assign Y0 = tm307;
   assign Y1 = tm314;

   D36_65619 instD36inst0_65619(.addr(i9[0:0]), .out(tm5), .clk(clk));

   D34_65627 instD34inst0_65627(.addr(i9[0:0]), .out(tm4), .clk(clk));

    multfix #(16, 2) m65554(.a(tm51), .b(tm288), .clk(clk), .q_sc(a529), .q_unsc(), .rst(reset));
    multfix #(16, 2) m65576(.a(tm52), .b(tm292), .clk(clk), .q_sc(a531), .q_unsc(), .rst(reset));
    multfix #(16, 2) m65594(.a(tm52), .b(tm288), .clk(clk), .q_sc(a532), .q_unsc(), .rst(reset));
    multfix #(16, 2) m65605(.a(tm51), .b(tm292), .clk(clk), .q_sc(a533), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub65583(.a(a529), .b(a531), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add65612(.a(a532), .b(a533), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm51 <= 0;
         tm288 <= 0;
         tm52 <= 0;
         tm292 <= 0;
         tm52 <= 0;
         tm288 <= 0;
         tm51 <= 0;
         tm292 <= 0;
      end
      else begin
         i9 <= i9_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm285 <= a538;
         tm289 <= a539;
         tm301 <= a523;
         tm308 <= a527;
         tm286 <= tm285;
         tm290 <= tm289;
         tm302 <= tm301;
         tm309 <= tm308;
         tm287 <= tm286;
         tm291 <= tm290;
         tm303 <= tm302;
         tm310 <= tm309;
         tm51 <= a528;
         tm52 <= a530;
         tm288 <= tm287;
         tm292 <= tm291;
         tm304 <= tm303;
         tm311 <= tm310;
         tm305 <= tm304;
         tm312 <= tm311;
         tm306 <= tm305;
         tm313 <= tm312;
         tm307 <= tm306;
         tm314 <= tm313;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock65636(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_73771(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a490;
   wire signed [15:0] a491;
   wire signed [15:0] a492;
   wire signed [15:0] a493;
   wire signed [16:0] tm249;
   wire signed [16:0] tm250;
   wire signed [16:0] tm251;
   wire signed [16:0] tm252;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t213;
   wire signed [15:0] t214;
   wire signed [15:0] t215;
   wire signed [15:0] t216;


   assign a490 = X0;
   assign a491 = X2;
   assign a492 = X1;
   assign a493 = X3;
   assign Y0 = t213;
   assign Y1 = t214;
   assign Y2 = t215;
   assign Y3 = t216;
   assign t213 = tm249[16:1];
   assign t214 = tm250[16:1];
   assign t215 = tm251[16:1];
   assign t216 = tm252[16:1];

    addfxp #(17, 1) add65648(.a({{1{a490[15]}}, a490}), .b({{1{a491[15]}}, a491}), .clk(clk), .q(tm249));    // 0
    addfxp #(17, 1) add65663(.a({{1{a492[15]}}, a492}), .b({{1{a493[15]}}, a493}), .clk(clk), .q(tm250));    // 0
    subfxp #(17, 1) sub65678(.a({{1{a490[15]}}, a490}), .b({{1{a491[15]}}, a491}), .clk(clk), .q(tm251));    // 0
    subfxp #(17, 1) sub65693(.a({{1{a492[15]}}, a492}), .b({{1{a493[15]}}, a493}), .clk(clk), .q(tm252));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 12
// Gap: 4
module rc65718(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm65716 instPerm73772(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet65716(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [1:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        2'd0: control <= 1'b1;
        2'd1: control <= 1'b1;
        2'd2: control <= 1'b0;
        2'd3: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 12
// Gap: 4
module perm65716(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 4;

   parameter addrbits = 2;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm6;
   assign tm6 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_73777(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73778(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

shiftRegFIFO #(3, 1) shiftFIFO_73787(.X(next), .Y(next2), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73788(.X(next2), .Y(next3), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73789(.X(next3), .Y(next4), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73790(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_73793(.X(tm6), .Y(tm6_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_73796(.X(tm6_d), .Y(tm6_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 2) shiftFIFO_73801(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm6_d, s1rdloc})
	     {1'd0,  2'd0}: s1rd0 <= 2;
	     {1'd0,  2'd1}: s1rd0 <= 3;
	     {1'd0,  2'd2}: s1rd0 <= 0;
	     {1'd0,  2'd3}: s1rd0 <= 1;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm6_d, s1rdloc})
	     {1'd0,  2'd0}: s1rd1 <= 0;
	     {1'd0,  2'd1}: s1rd1 <= 1;
	     {1'd0,  2'd2}: s1rd1 <= 2;
	     {1'd0,  2'd3}: s1rd1 <= 3;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet65716 sw(tm6_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm6_dd, writeCycle})
	      {1'd0, 2'd0}: s2wr0 <= 2;
	      {1'd0, 2'd1}: s2wr0 <= 3;
	      {1'd0, 2'd2}: s2wr0 <= 0;
	      {1'd0, 2'd3}: s2wr0 <= 1;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm6_dd, writeCycle})
	      {1'd0, 2'd0}: s2wr1 <= 0;
	      {1'd0, 2'd1}: s2wr1 <= 1;
	      {1'd0, 2'd2}: s2wr1 <= 2;
	      {1'd0, 2'd3}: s2wr1 <= 3;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 4
module DirSum_65907(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [1:0] i8;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i8 <= 0;
      end
      else begin
         if (next == 1)
            i8 <= 0;
         else if (i8 == 3)
            i8 <= 0;
         else
            i8 <= i8 + 1;
      end
   end

   codeBlock65721 codeBlockIsnt73802(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i8_in(i8),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D32_65887(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [1:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'hd2bf;
      2: out3 <= 16'hc000;
      3: out3 <= 16'hd2bf;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D30_65899(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [1:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h2d41;
      2: out3 <= 16'h0;
      3: out3 <= 16'hd2bf;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock65721(clk, reset, next_in, next_out,
   i8_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [1:0] i8_in;
   reg [1:0] i8;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_73805(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a474;
   wire signed [15:0] a463;
   wire signed [15:0] a477;
   wire signed [15:0] a467;
   wire signed [15:0] a478;
   wire signed [15:0] a479;
   reg signed [15:0] tm315;
   reg signed [15:0] tm319;
   reg signed [15:0] tm331;
   reg signed [15:0] tm338;
   reg signed [15:0] tm316;
   reg signed [15:0] tm320;
   reg signed [15:0] tm332;
   reg signed [15:0] tm339;
   wire signed [15:0] tm9;
   wire signed [15:0] a468;
   wire signed [15:0] tm10;
   wire signed [15:0] a470;
   reg signed [15:0] tm317;
   reg signed [15:0] tm321;
   reg signed [15:0] tm333;
   reg signed [15:0] tm340;
   reg signed [15:0] tm59;
   reg signed [15:0] tm60;
   reg signed [15:0] tm318;
   reg signed [15:0] tm322;
   reg signed [15:0] tm334;
   reg signed [15:0] tm341;
   reg signed [15:0] tm335;
   reg signed [15:0] tm342;
   wire signed [15:0] a469;
   wire signed [15:0] a471;
   wire signed [15:0] a472;
   wire signed [15:0] a473;
   reg signed [15:0] tm336;
   reg signed [15:0] tm343;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm337;
   reg signed [15:0] tm344;


   assign a474 = X0;
   assign a463 = a474;
   assign a477 = X1;
   assign a467 = a477;
   assign a478 = X2;
   assign a479 = X3;
   assign a468 = tm9;
   assign a470 = tm10;
   assign Y0 = tm337;
   assign Y1 = tm344;

   D32_65887 instD32inst0_65887(.addr(i8[1:0]), .out(tm10), .clk(clk));

   D30_65899 instD30inst0_65899(.addr(i8[1:0]), .out(tm9), .clk(clk));

    multfix #(16, 2) m65820(.a(tm59), .b(tm318), .clk(clk), .q_sc(a469), .q_unsc(), .rst(reset));
    multfix #(16, 2) m65842(.a(tm60), .b(tm322), .clk(clk), .q_sc(a471), .q_unsc(), .rst(reset));
    multfix #(16, 2) m65860(.a(tm60), .b(tm318), .clk(clk), .q_sc(a472), .q_unsc(), .rst(reset));
    multfix #(16, 2) m65871(.a(tm59), .b(tm322), .clk(clk), .q_sc(a473), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub65849(.a(a469), .b(a471), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add65878(.a(a472), .b(a473), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm59 <= 0;
         tm318 <= 0;
         tm60 <= 0;
         tm322 <= 0;
         tm60 <= 0;
         tm318 <= 0;
         tm59 <= 0;
         tm322 <= 0;
      end
      else begin
         i8 <= i8_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm315 <= a478;
         tm319 <= a479;
         tm331 <= a463;
         tm338 <= a467;
         tm316 <= tm315;
         tm320 <= tm319;
         tm332 <= tm331;
         tm339 <= tm338;
         tm317 <= tm316;
         tm321 <= tm320;
         tm333 <= tm332;
         tm340 <= tm339;
         tm59 <= a468;
         tm60 <= a470;
         tm318 <= tm317;
         tm322 <= tm321;
         tm334 <= tm333;
         tm341 <= tm340;
         tm335 <= tm334;
         tm342 <= tm341;
         tm336 <= tm335;
         tm343 <= tm342;
         tm337 <= tm336;
         tm344 <= tm343;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock65910(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_73808(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a430;
   wire signed [15:0] a431;
   wire signed [15:0] a432;
   wire signed [15:0] a433;
   wire signed [16:0] tm253;
   wire signed [16:0] tm254;
   wire signed [16:0] tm255;
   wire signed [16:0] tm256;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t189;
   wire signed [15:0] t190;
   wire signed [15:0] t191;
   wire signed [15:0] t192;


   assign a430 = X0;
   assign a431 = X2;
   assign a432 = X1;
   assign a433 = X3;
   assign Y0 = t189;
   assign Y1 = t190;
   assign Y2 = t191;
   assign Y3 = t192;
   assign t189 = tm253[16:1];
   assign t190 = tm254[16:1];
   assign t191 = tm255[16:1];
   assign t192 = tm256[16:1];

    addfxp #(17, 1) add65922(.a({{1{a430[15]}}, a430}), .b({{1{a431[15]}}, a431}), .clk(clk), .q(tm253));    // 0
    addfxp #(17, 1) add65937(.a({{1{a432[15]}}, a432}), .b({{1{a433[15]}}, a433}), .clk(clk), .q(tm254));    // 0
    subfxp #(17, 1) sub65952(.a({{1{a430[15]}}, a430}), .b({{1{a431[15]}}, a431}), .clk(clk), .q(tm255));    // 0
    subfxp #(17, 1) sub65967(.a({{1{a432[15]}}, a432}), .b({{1{a433[15]}}, a433}), .clk(clk), .q(tm256));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 20
// Gap: 8
module rc65992(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm65990 instPerm73809(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet65990(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [2:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        3'd0: control <= 1'b1;
        3'd1: control <= 1'b1;
        3'd2: control <= 1'b1;
        3'd3: control <= 1'b1;
        3'd4: control <= 1'b0;
        3'd5: control <= 1'b0;
        3'd6: control <= 1'b0;
        3'd7: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 20
// Gap: 8
module perm65990(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 8;

   parameter addrbits = 3;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm11;
   assign tm11 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_73814(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73815(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

shiftRegFIFO #(7, 1) shiftFIFO_73824(.X(next), .Y(next2), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73825(.X(next2), .Y(next3), .clk(clk));
shiftRegFIFO #(8, 1) shiftFIFO_73826(.X(next3), .Y(next4), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73827(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(7, 1) shiftFIFO_73830(.X(tm11), .Y(tm11_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_73833(.X(tm11_d), .Y(tm11_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 3) shiftFIFO_73838(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm11_d, s1rdloc})
	     {1'd0,  3'd0}: s1rd0 <= 4;
	     {1'd0,  3'd1}: s1rd0 <= 5;
	     {1'd0,  3'd2}: s1rd0 <= 6;
	     {1'd0,  3'd3}: s1rd0 <= 7;
	     {1'd0,  3'd4}: s1rd0 <= 0;
	     {1'd0,  3'd5}: s1rd0 <= 1;
	     {1'd0,  3'd6}: s1rd0 <= 2;
	     {1'd0,  3'd7}: s1rd0 <= 3;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm11_d, s1rdloc})
	     {1'd0,  3'd0}: s1rd1 <= 0;
	     {1'd0,  3'd1}: s1rd1 <= 1;
	     {1'd0,  3'd2}: s1rd1 <= 2;
	     {1'd0,  3'd3}: s1rd1 <= 3;
	     {1'd0,  3'd4}: s1rd1 <= 4;
	     {1'd0,  3'd5}: s1rd1 <= 5;
	     {1'd0,  3'd6}: s1rd1 <= 6;
	     {1'd0,  3'd7}: s1rd1 <= 7;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet65990 sw(tm11_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm11_dd, writeCycle})
	      {1'd0, 3'd0}: s2wr0 <= 4;
	      {1'd0, 3'd1}: s2wr0 <= 5;
	      {1'd0, 3'd2}: s2wr0 <= 6;
	      {1'd0, 3'd3}: s2wr0 <= 7;
	      {1'd0, 3'd4}: s2wr0 <= 0;
	      {1'd0, 3'd5}: s2wr0 <= 1;
	      {1'd0, 3'd6}: s2wr0 <= 2;
	      {1'd0, 3'd7}: s2wr0 <= 3;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm11_dd, writeCycle})
	      {1'd0, 3'd0}: s2wr1 <= 0;
	      {1'd0, 3'd1}: s2wr1 <= 1;
	      {1'd0, 3'd2}: s2wr1 <= 2;
	      {1'd0, 3'd3}: s2wr1 <= 3;
	      {1'd0, 3'd4}: s2wr1 <= 4;
	      {1'd0, 3'd5}: s2wr1 <= 5;
	      {1'd0, 3'd6}: s2wr1 <= 6;
	      {1'd0, 3'd7}: s2wr1 <= 7;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 8
module DirSum_66197(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [2:0] i7;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i7 <= 0;
      end
      else begin
         if (next == 1)
            i7 <= 0;
         else if (i7 == 7)
            i7 <= 0;
         else
            i7 <= i7 + 1;
      end
   end

   codeBlock65995 codeBlockIsnt73839(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i7_in(i7),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D28_66165(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [2:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'he782;
      2: out3 <= 16'hd2bf;
      3: out3 <= 16'hc4df;
      4: out3 <= 16'hc000;
      5: out3 <= 16'hc4df;
      6: out3 <= 16'hd2bf;
      7: out3 <= 16'he782;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D26_66185(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [2:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h3b21;
      2: out3 <= 16'h2d41;
      3: out3 <= 16'h187e;
      4: out3 <= 16'h0;
      5: out3 <= 16'he782;
      6: out3 <= 16'hd2bf;
      7: out3 <= 16'hc4df;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock65995(clk, reset, next_in, next_out,
   i7_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [2:0] i7_in;
   reg [2:0] i7;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_73842(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a414;
   wire signed [15:0] a403;
   wire signed [15:0] a417;
   wire signed [15:0] a407;
   wire signed [15:0] a418;
   wire signed [15:0] a419;
   reg signed [15:0] tm345;
   reg signed [15:0] tm349;
   reg signed [15:0] tm361;
   reg signed [15:0] tm368;
   reg signed [15:0] tm346;
   reg signed [15:0] tm350;
   reg signed [15:0] tm362;
   reg signed [15:0] tm369;
   wire signed [15:0] tm14;
   wire signed [15:0] a408;
   wire signed [15:0] tm15;
   wire signed [15:0] a410;
   reg signed [15:0] tm347;
   reg signed [15:0] tm351;
   reg signed [15:0] tm363;
   reg signed [15:0] tm370;
   reg signed [15:0] tm67;
   reg signed [15:0] tm68;
   reg signed [15:0] tm348;
   reg signed [15:0] tm352;
   reg signed [15:0] tm364;
   reg signed [15:0] tm371;
   reg signed [15:0] tm365;
   reg signed [15:0] tm372;
   wire signed [15:0] a409;
   wire signed [15:0] a411;
   wire signed [15:0] a412;
   wire signed [15:0] a413;
   reg signed [15:0] tm366;
   reg signed [15:0] tm373;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm367;
   reg signed [15:0] tm374;


   assign a414 = X0;
   assign a403 = a414;
   assign a417 = X1;
   assign a407 = a417;
   assign a418 = X2;
   assign a419 = X3;
   assign a408 = tm14;
   assign a410 = tm15;
   assign Y0 = tm367;
   assign Y1 = tm374;

   D28_66165 instD28inst0_66165(.addr(i7[2:0]), .out(tm15), .clk(clk));

   D26_66185 instD26inst0_66185(.addr(i7[2:0]), .out(tm14), .clk(clk));

    multfix #(16, 2) m66094(.a(tm67), .b(tm348), .clk(clk), .q_sc(a409), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66116(.a(tm68), .b(tm352), .clk(clk), .q_sc(a411), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66134(.a(tm68), .b(tm348), .clk(clk), .q_sc(a412), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66145(.a(tm67), .b(tm352), .clk(clk), .q_sc(a413), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub66123(.a(a409), .b(a411), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add66152(.a(a412), .b(a413), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm67 <= 0;
         tm348 <= 0;
         tm68 <= 0;
         tm352 <= 0;
         tm68 <= 0;
         tm348 <= 0;
         tm67 <= 0;
         tm352 <= 0;
      end
      else begin
         i7 <= i7_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm345 <= a418;
         tm349 <= a419;
         tm361 <= a403;
         tm368 <= a407;
         tm346 <= tm345;
         tm350 <= tm349;
         tm362 <= tm361;
         tm369 <= tm368;
         tm347 <= tm346;
         tm351 <= tm350;
         tm363 <= tm362;
         tm370 <= tm369;
         tm67 <= a408;
         tm68 <= a410;
         tm348 <= tm347;
         tm352 <= tm351;
         tm364 <= tm363;
         tm371 <= tm370;
         tm365 <= tm364;
         tm372 <= tm371;
         tm366 <= tm365;
         tm373 <= tm372;
         tm367 <= tm366;
         tm374 <= tm373;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock66200(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_73845(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a369;
   wire signed [15:0] a370;
   wire signed [15:0] a371;
   wire signed [15:0] a372;
   wire signed [16:0] tm257;
   wire signed [16:0] tm258;
   wire signed [16:0] tm259;
   wire signed [16:0] tm260;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t165;
   wire signed [15:0] t166;
   wire signed [15:0] t167;
   wire signed [15:0] t168;


   assign a369 = X0;
   assign a370 = X2;
   assign a371 = X1;
   assign a372 = X3;
   assign Y0 = t165;
   assign Y1 = t166;
   assign Y2 = t167;
   assign Y3 = t168;
   assign t165 = tm257[16:1];
   assign t166 = tm258[16:1];
   assign t167 = tm259[16:1];
   assign t168 = tm260[16:1];

    addfxp #(17, 1) add66212(.a({{1{a369[15]}}, a369}), .b({{1{a370[15]}}, a370}), .clk(clk), .q(tm257));    // 0
    addfxp #(17, 1) add66227(.a({{1{a371[15]}}, a371}), .b({{1{a372[15]}}, a372}), .clk(clk), .q(tm258));    // 0
    subfxp #(17, 1) sub66242(.a({{1{a369[15]}}, a369}), .b({{1{a370[15]}}, a370}), .clk(clk), .q(tm259));    // 0
    subfxp #(17, 1) sub66257(.a({{1{a371[15]}}, a371}), .b({{1{a372[15]}}, a372}), .clk(clk), .q(tm260));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 36
// Gap: 16
module rc66282(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm66280 instPerm73846(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet66280(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [3:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        4'd0: control <= 1'b1;
        4'd1: control <= 1'b1;
        4'd2: control <= 1'b1;
        4'd3: control <= 1'b1;
        4'd4: control <= 1'b1;
        4'd5: control <= 1'b1;
        4'd6: control <= 1'b1;
        4'd7: control <= 1'b1;
        4'd8: control <= 1'b0;
        4'd9: control <= 1'b0;
        4'd10: control <= 1'b0;
        4'd11: control <= 1'b0;
        4'd12: control <= 1'b0;
        4'd13: control <= 1'b0;
        4'd14: control <= 1'b0;
        4'd15: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 36
// Gap: 16
module perm66280(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 16;

   parameter addrbits = 4;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm16;
   assign tm16 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_73851(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73852(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(15, 4) nextReg_73863(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73864(.X(next2), .Y(next3), .clk(clk));
nextReg #(16, 4) nextReg_73867(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73868(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(15, 1) shiftFIFO_73871(.X(tm16), .Y(tm16_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_73874(.X(tm16_d), .Y(tm16_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 4) shiftFIFO_73879(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm16_d, s1rdloc})
	     {1'd0,  4'd0}: s1rd0 <= 8;
	     {1'd0,  4'd1}: s1rd0 <= 9;
	     {1'd0,  4'd2}: s1rd0 <= 10;
	     {1'd0,  4'd3}: s1rd0 <= 11;
	     {1'd0,  4'd4}: s1rd0 <= 12;
	     {1'd0,  4'd5}: s1rd0 <= 13;
	     {1'd0,  4'd6}: s1rd0 <= 14;
	     {1'd0,  4'd7}: s1rd0 <= 15;
	     {1'd0,  4'd8}: s1rd0 <= 0;
	     {1'd0,  4'd9}: s1rd0 <= 1;
	     {1'd0,  4'd10}: s1rd0 <= 2;
	     {1'd0,  4'd11}: s1rd0 <= 3;
	     {1'd0,  4'd12}: s1rd0 <= 4;
	     {1'd0,  4'd13}: s1rd0 <= 5;
	     {1'd0,  4'd14}: s1rd0 <= 6;
	     {1'd0,  4'd15}: s1rd0 <= 7;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm16_d, s1rdloc})
	     {1'd0,  4'd0}: s1rd1 <= 0;
	     {1'd0,  4'd1}: s1rd1 <= 1;
	     {1'd0,  4'd2}: s1rd1 <= 2;
	     {1'd0,  4'd3}: s1rd1 <= 3;
	     {1'd0,  4'd4}: s1rd1 <= 4;
	     {1'd0,  4'd5}: s1rd1 <= 5;
	     {1'd0,  4'd6}: s1rd1 <= 6;
	     {1'd0,  4'd7}: s1rd1 <= 7;
	     {1'd0,  4'd8}: s1rd1 <= 8;
	     {1'd0,  4'd9}: s1rd1 <= 9;
	     {1'd0,  4'd10}: s1rd1 <= 10;
	     {1'd0,  4'd11}: s1rd1 <= 11;
	     {1'd0,  4'd12}: s1rd1 <= 12;
	     {1'd0,  4'd13}: s1rd1 <= 13;
	     {1'd0,  4'd14}: s1rd1 <= 14;
	     {1'd0,  4'd15}: s1rd1 <= 15;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet66280 sw(tm16_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm16_dd, writeCycle})
	      {1'd0, 4'd0}: s2wr0 <= 8;
	      {1'd0, 4'd1}: s2wr0 <= 9;
	      {1'd0, 4'd2}: s2wr0 <= 10;
	      {1'd0, 4'd3}: s2wr0 <= 11;
	      {1'd0, 4'd4}: s2wr0 <= 12;
	      {1'd0, 4'd5}: s2wr0 <= 13;
	      {1'd0, 4'd6}: s2wr0 <= 14;
	      {1'd0, 4'd7}: s2wr0 <= 15;
	      {1'd0, 4'd8}: s2wr0 <= 0;
	      {1'd0, 4'd9}: s2wr0 <= 1;
	      {1'd0, 4'd10}: s2wr0 <= 2;
	      {1'd0, 4'd11}: s2wr0 <= 3;
	      {1'd0, 4'd12}: s2wr0 <= 4;
	      {1'd0, 4'd13}: s2wr0 <= 5;
	      {1'd0, 4'd14}: s2wr0 <= 6;
	      {1'd0, 4'd15}: s2wr0 <= 7;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm16_dd, writeCycle})
	      {1'd0, 4'd0}: s2wr1 <= 0;
	      {1'd0, 4'd1}: s2wr1 <= 1;
	      {1'd0, 4'd2}: s2wr1 <= 2;
	      {1'd0, 4'd3}: s2wr1 <= 3;
	      {1'd0, 4'd4}: s2wr1 <= 4;
	      {1'd0, 4'd5}: s2wr1 <= 5;
	      {1'd0, 4'd6}: s2wr1 <= 6;
	      {1'd0, 4'd7}: s2wr1 <= 7;
	      {1'd0, 4'd8}: s2wr1 <= 8;
	      {1'd0, 4'd9}: s2wr1 <= 9;
	      {1'd0, 4'd10}: s2wr1 <= 10;
	      {1'd0, 4'd11}: s2wr1 <= 11;
	      {1'd0, 4'd12}: s2wr1 <= 12;
	      {1'd0, 4'd13}: s2wr1 <= 13;
	      {1'd0, 4'd14}: s2wr1 <= 14;
	      {1'd0, 4'd15}: s2wr1 <= 15;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 16
module DirSum_66519(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [3:0] i6;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i6 <= 0;
      end
      else begin
         if (next == 1)
            i6 <= 0;
         else if (i6 == 15)
            i6 <= 0;
         else
            i6 <= i6 + 1;
      end
   end

   codeBlock66285 codeBlockIsnt73884(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i6_in(i6),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D24_66463(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [3:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'hf384;
      2: out3 <= 16'he782;
      3: out3 <= 16'hdc72;
      4: out3 <= 16'hd2bf;
      5: out3 <= 16'hcac9;
      6: out3 <= 16'hc4df;
      7: out3 <= 16'hc13b;
      8: out3 <= 16'hc000;
      9: out3 <= 16'hc13b;
      10: out3 <= 16'hc4df;
      11: out3 <= 16'hcac9;
      12: out3 <= 16'hd2bf;
      13: out3 <= 16'hdc72;
      14: out3 <= 16'he782;
      15: out3 <= 16'hf384;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D22_66499(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [3:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h3ec5;
      2: out3 <= 16'h3b21;
      3: out3 <= 16'h3537;
      4: out3 <= 16'h2d41;
      5: out3 <= 16'h238e;
      6: out3 <= 16'h187e;
      7: out3 <= 16'hc7c;
      8: out3 <= 16'h0;
      9: out3 <= 16'hf384;
      10: out3 <= 16'he782;
      11: out3 <= 16'hdc72;
      12: out3 <= 16'hd2bf;
      13: out3 <= 16'hcac9;
      14: out3 <= 16'hc4df;
      15: out3 <= 16'hc13b;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock66285(clk, reset, next_in, next_out,
   i6_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [3:0] i6_in;
   reg [3:0] i6;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_73887(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a353;
   wire signed [15:0] a342;
   wire signed [15:0] a356;
   wire signed [15:0] a346;
   wire signed [15:0] a357;
   wire signed [15:0] a358;
   reg signed [15:0] tm375;
   reg signed [15:0] tm379;
   reg signed [15:0] tm391;
   reg signed [15:0] tm398;
   reg signed [15:0] tm376;
   reg signed [15:0] tm380;
   reg signed [15:0] tm392;
   reg signed [15:0] tm399;
   wire signed [15:0] tm19;
   wire signed [15:0] a347;
   wire signed [15:0] tm20;
   wire signed [15:0] a349;
   reg signed [15:0] tm377;
   reg signed [15:0] tm381;
   reg signed [15:0] tm393;
   reg signed [15:0] tm400;
   reg signed [15:0] tm75;
   reg signed [15:0] tm76;
   reg signed [15:0] tm378;
   reg signed [15:0] tm382;
   reg signed [15:0] tm394;
   reg signed [15:0] tm401;
   reg signed [15:0] tm395;
   reg signed [15:0] tm402;
   wire signed [15:0] a348;
   wire signed [15:0] a350;
   wire signed [15:0] a351;
   wire signed [15:0] a352;
   reg signed [15:0] tm396;
   reg signed [15:0] tm403;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm397;
   reg signed [15:0] tm404;


   assign a353 = X0;
   assign a342 = a353;
   assign a356 = X1;
   assign a346 = a356;
   assign a357 = X2;
   assign a358 = X3;
   assign a347 = tm19;
   assign a349 = tm20;
   assign Y0 = tm397;
   assign Y1 = tm404;

   D24_66463 instD24inst0_66463(.addr(i6[3:0]), .out(tm20), .clk(clk));

   D22_66499 instD22inst0_66499(.addr(i6[3:0]), .out(tm19), .clk(clk));

    multfix #(16, 2) m66384(.a(tm75), .b(tm378), .clk(clk), .q_sc(a348), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66406(.a(tm76), .b(tm382), .clk(clk), .q_sc(a350), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66424(.a(tm76), .b(tm378), .clk(clk), .q_sc(a351), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66435(.a(tm75), .b(tm382), .clk(clk), .q_sc(a352), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub66413(.a(a348), .b(a350), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add66442(.a(a351), .b(a352), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm75 <= 0;
         tm378 <= 0;
         tm76 <= 0;
         tm382 <= 0;
         tm76 <= 0;
         tm378 <= 0;
         tm75 <= 0;
         tm382 <= 0;
      end
      else begin
         i6 <= i6_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm375 <= a357;
         tm379 <= a358;
         tm391 <= a342;
         tm398 <= a346;
         tm376 <= tm375;
         tm380 <= tm379;
         tm392 <= tm391;
         tm399 <= tm398;
         tm377 <= tm376;
         tm381 <= tm380;
         tm393 <= tm392;
         tm400 <= tm399;
         tm75 <= a347;
         tm76 <= a349;
         tm378 <= tm377;
         tm382 <= tm381;
         tm394 <= tm393;
         tm401 <= tm400;
         tm395 <= tm394;
         tm402 <= tm401;
         tm396 <= tm395;
         tm403 <= tm402;
         tm397 <= tm396;
         tm404 <= tm403;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock66522(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_73890(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a309;
   wire signed [15:0] a310;
   wire signed [15:0] a311;
   wire signed [15:0] a312;
   wire signed [16:0] tm261;
   wire signed [16:0] tm262;
   wire signed [16:0] tm263;
   wire signed [16:0] tm264;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t141;
   wire signed [15:0] t142;
   wire signed [15:0] t143;
   wire signed [15:0] t144;


   assign a309 = X0;
   assign a310 = X2;
   assign a311 = X1;
   assign a312 = X3;
   assign Y0 = t141;
   assign Y1 = t142;
   assign Y2 = t143;
   assign Y3 = t144;
   assign t141 = tm261[16:1];
   assign t142 = tm262[16:1];
   assign t143 = tm263[16:1];
   assign t144 = tm264[16:1];

    addfxp #(17, 1) add66534(.a({{1{a309[15]}}, a309}), .b({{1{a310[15]}}, a310}), .clk(clk), .q(tm261));    // 0
    addfxp #(17, 1) add66549(.a({{1{a311[15]}}, a311}), .b({{1{a312[15]}}, a312}), .clk(clk), .q(tm262));    // 0
    subfxp #(17, 1) sub66564(.a({{1{a309[15]}}, a309}), .b({{1{a310[15]}}, a310}), .clk(clk), .q(tm263));    // 0
    subfxp #(17, 1) sub66579(.a({{1{a311[15]}}, a311}), .b({{1{a312[15]}}, a312}), .clk(clk), .q(tm264));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 68
// Gap: 32
module rc66604(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm66602 instPerm73891(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet66602(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [4:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        5'd0: control <= 1'b1;
        5'd1: control <= 1'b1;
        5'd2: control <= 1'b1;
        5'd3: control <= 1'b1;
        5'd4: control <= 1'b1;
        5'd5: control <= 1'b1;
        5'd6: control <= 1'b1;
        5'd7: control <= 1'b1;
        5'd8: control <= 1'b1;
        5'd9: control <= 1'b1;
        5'd10: control <= 1'b1;
        5'd11: control <= 1'b1;
        5'd12: control <= 1'b1;
        5'd13: control <= 1'b1;
        5'd14: control <= 1'b1;
        5'd15: control <= 1'b1;
        5'd16: control <= 1'b0;
        5'd17: control <= 1'b0;
        5'd18: control <= 1'b0;
        5'd19: control <= 1'b0;
        5'd20: control <= 1'b0;
        5'd21: control <= 1'b0;
        5'd22: control <= 1'b0;
        5'd23: control <= 1'b0;
        5'd24: control <= 1'b0;
        5'd25: control <= 1'b0;
        5'd26: control <= 1'b0;
        5'd27: control <= 1'b0;
        5'd28: control <= 1'b0;
        5'd29: control <= 1'b0;
        5'd30: control <= 1'b0;
        5'd31: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 68
// Gap: 32
module perm66602(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 32;

   parameter addrbits = 5;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm21;
   assign tm21 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_73896(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73897(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(31, 5) nextReg_73908(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73909(.X(next2), .Y(next3), .clk(clk));
nextReg #(32, 5) nextReg_73912(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73913(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(31, 1) shiftFIFO_73916(.X(tm21), .Y(tm21_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_73919(.X(tm21_d), .Y(tm21_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 5) shiftFIFO_73924(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm21_d, s1rdloc})
	     {1'd0,  5'd0}: s1rd0 <= 16;
	     {1'd0,  5'd1}: s1rd0 <= 17;
	     {1'd0,  5'd2}: s1rd0 <= 18;
	     {1'd0,  5'd3}: s1rd0 <= 19;
	     {1'd0,  5'd4}: s1rd0 <= 20;
	     {1'd0,  5'd5}: s1rd0 <= 21;
	     {1'd0,  5'd6}: s1rd0 <= 22;
	     {1'd0,  5'd7}: s1rd0 <= 23;
	     {1'd0,  5'd8}: s1rd0 <= 24;
	     {1'd0,  5'd9}: s1rd0 <= 25;
	     {1'd0,  5'd10}: s1rd0 <= 26;
	     {1'd0,  5'd11}: s1rd0 <= 27;
	     {1'd0,  5'd12}: s1rd0 <= 28;
	     {1'd0,  5'd13}: s1rd0 <= 29;
	     {1'd0,  5'd14}: s1rd0 <= 30;
	     {1'd0,  5'd15}: s1rd0 <= 31;
	     {1'd0,  5'd16}: s1rd0 <= 0;
	     {1'd0,  5'd17}: s1rd0 <= 1;
	     {1'd0,  5'd18}: s1rd0 <= 2;
	     {1'd0,  5'd19}: s1rd0 <= 3;
	     {1'd0,  5'd20}: s1rd0 <= 4;
	     {1'd0,  5'd21}: s1rd0 <= 5;
	     {1'd0,  5'd22}: s1rd0 <= 6;
	     {1'd0,  5'd23}: s1rd0 <= 7;
	     {1'd0,  5'd24}: s1rd0 <= 8;
	     {1'd0,  5'd25}: s1rd0 <= 9;
	     {1'd0,  5'd26}: s1rd0 <= 10;
	     {1'd0,  5'd27}: s1rd0 <= 11;
	     {1'd0,  5'd28}: s1rd0 <= 12;
	     {1'd0,  5'd29}: s1rd0 <= 13;
	     {1'd0,  5'd30}: s1rd0 <= 14;
	     {1'd0,  5'd31}: s1rd0 <= 15;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm21_d, s1rdloc})
	     {1'd0,  5'd0}: s1rd1 <= 0;
	     {1'd0,  5'd1}: s1rd1 <= 1;
	     {1'd0,  5'd2}: s1rd1 <= 2;
	     {1'd0,  5'd3}: s1rd1 <= 3;
	     {1'd0,  5'd4}: s1rd1 <= 4;
	     {1'd0,  5'd5}: s1rd1 <= 5;
	     {1'd0,  5'd6}: s1rd1 <= 6;
	     {1'd0,  5'd7}: s1rd1 <= 7;
	     {1'd0,  5'd8}: s1rd1 <= 8;
	     {1'd0,  5'd9}: s1rd1 <= 9;
	     {1'd0,  5'd10}: s1rd1 <= 10;
	     {1'd0,  5'd11}: s1rd1 <= 11;
	     {1'd0,  5'd12}: s1rd1 <= 12;
	     {1'd0,  5'd13}: s1rd1 <= 13;
	     {1'd0,  5'd14}: s1rd1 <= 14;
	     {1'd0,  5'd15}: s1rd1 <= 15;
	     {1'd0,  5'd16}: s1rd1 <= 16;
	     {1'd0,  5'd17}: s1rd1 <= 17;
	     {1'd0,  5'd18}: s1rd1 <= 18;
	     {1'd0,  5'd19}: s1rd1 <= 19;
	     {1'd0,  5'd20}: s1rd1 <= 20;
	     {1'd0,  5'd21}: s1rd1 <= 21;
	     {1'd0,  5'd22}: s1rd1 <= 22;
	     {1'd0,  5'd23}: s1rd1 <= 23;
	     {1'd0,  5'd24}: s1rd1 <= 24;
	     {1'd0,  5'd25}: s1rd1 <= 25;
	     {1'd0,  5'd26}: s1rd1 <= 26;
	     {1'd0,  5'd27}: s1rd1 <= 27;
	     {1'd0,  5'd28}: s1rd1 <= 28;
	     {1'd0,  5'd29}: s1rd1 <= 29;
	     {1'd0,  5'd30}: s1rd1 <= 30;
	     {1'd0,  5'd31}: s1rd1 <= 31;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet66602 sw(tm21_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm21_dd, writeCycle})
	      {1'd0, 5'd0}: s2wr0 <= 16;
	      {1'd0, 5'd1}: s2wr0 <= 17;
	      {1'd0, 5'd2}: s2wr0 <= 18;
	      {1'd0, 5'd3}: s2wr0 <= 19;
	      {1'd0, 5'd4}: s2wr0 <= 20;
	      {1'd0, 5'd5}: s2wr0 <= 21;
	      {1'd0, 5'd6}: s2wr0 <= 22;
	      {1'd0, 5'd7}: s2wr0 <= 23;
	      {1'd0, 5'd8}: s2wr0 <= 24;
	      {1'd0, 5'd9}: s2wr0 <= 25;
	      {1'd0, 5'd10}: s2wr0 <= 26;
	      {1'd0, 5'd11}: s2wr0 <= 27;
	      {1'd0, 5'd12}: s2wr0 <= 28;
	      {1'd0, 5'd13}: s2wr0 <= 29;
	      {1'd0, 5'd14}: s2wr0 <= 30;
	      {1'd0, 5'd15}: s2wr0 <= 31;
	      {1'd0, 5'd16}: s2wr0 <= 0;
	      {1'd0, 5'd17}: s2wr0 <= 1;
	      {1'd0, 5'd18}: s2wr0 <= 2;
	      {1'd0, 5'd19}: s2wr0 <= 3;
	      {1'd0, 5'd20}: s2wr0 <= 4;
	      {1'd0, 5'd21}: s2wr0 <= 5;
	      {1'd0, 5'd22}: s2wr0 <= 6;
	      {1'd0, 5'd23}: s2wr0 <= 7;
	      {1'd0, 5'd24}: s2wr0 <= 8;
	      {1'd0, 5'd25}: s2wr0 <= 9;
	      {1'd0, 5'd26}: s2wr0 <= 10;
	      {1'd0, 5'd27}: s2wr0 <= 11;
	      {1'd0, 5'd28}: s2wr0 <= 12;
	      {1'd0, 5'd29}: s2wr0 <= 13;
	      {1'd0, 5'd30}: s2wr0 <= 14;
	      {1'd0, 5'd31}: s2wr0 <= 15;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm21_dd, writeCycle})
	      {1'd0, 5'd0}: s2wr1 <= 0;
	      {1'd0, 5'd1}: s2wr1 <= 1;
	      {1'd0, 5'd2}: s2wr1 <= 2;
	      {1'd0, 5'd3}: s2wr1 <= 3;
	      {1'd0, 5'd4}: s2wr1 <= 4;
	      {1'd0, 5'd5}: s2wr1 <= 5;
	      {1'd0, 5'd6}: s2wr1 <= 6;
	      {1'd0, 5'd7}: s2wr1 <= 7;
	      {1'd0, 5'd8}: s2wr1 <= 8;
	      {1'd0, 5'd9}: s2wr1 <= 9;
	      {1'd0, 5'd10}: s2wr1 <= 10;
	      {1'd0, 5'd11}: s2wr1 <= 11;
	      {1'd0, 5'd12}: s2wr1 <= 12;
	      {1'd0, 5'd13}: s2wr1 <= 13;
	      {1'd0, 5'd14}: s2wr1 <= 14;
	      {1'd0, 5'd15}: s2wr1 <= 15;
	      {1'd0, 5'd16}: s2wr1 <= 16;
	      {1'd0, 5'd17}: s2wr1 <= 17;
	      {1'd0, 5'd18}: s2wr1 <= 18;
	      {1'd0, 5'd19}: s2wr1 <= 19;
	      {1'd0, 5'd20}: s2wr1 <= 20;
	      {1'd0, 5'd21}: s2wr1 <= 21;
	      {1'd0, 5'd22}: s2wr1 <= 22;
	      {1'd0, 5'd23}: s2wr1 <= 23;
	      {1'd0, 5'd24}: s2wr1 <= 24;
	      {1'd0, 5'd25}: s2wr1 <= 25;
	      {1'd0, 5'd26}: s2wr1 <= 26;
	      {1'd0, 5'd27}: s2wr1 <= 27;
	      {1'd0, 5'd28}: s2wr1 <= 28;
	      {1'd0, 5'd29}: s2wr1 <= 29;
	      {1'd0, 5'd30}: s2wr1 <= 30;
	      {1'd0, 5'd31}: s2wr1 <= 31;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 32
module DirSum_66905(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [4:0] i5;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i5 <= 0;
      end
      else begin
         if (next == 1)
            i5 <= 0;
         else if (i5 == 31)
            i5 <= 0;
         else
            i5 <= i5 + 1;
      end
   end

   codeBlock66607 codeBlockIsnt73929(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i5_in(i5),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D20_66801(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [4:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'hf9ba;
      2: out3 <= 16'hf384;
      3: out3 <= 16'hed6c;
      4: out3 <= 16'he782;
      5: out3 <= 16'he1d5;
      6: out3 <= 16'hdc72;
      7: out3 <= 16'hd766;
      8: out3 <= 16'hd2bf;
      9: out3 <= 16'hce87;
      10: out3 <= 16'hcac9;
      11: out3 <= 16'hc78f;
      12: out3 <= 16'hc4df;
      13: out3 <= 16'hc2c1;
      14: out3 <= 16'hc13b;
      15: out3 <= 16'hc04f;
      16: out3 <= 16'hc000;
      17: out3 <= 16'hc04f;
      18: out3 <= 16'hc13b;
      19: out3 <= 16'hc2c1;
      20: out3 <= 16'hc4df;
      21: out3 <= 16'hc78f;
      22: out3 <= 16'hcac9;
      23: out3 <= 16'hce87;
      24: out3 <= 16'hd2bf;
      25: out3 <= 16'hd766;
      26: out3 <= 16'hdc72;
      27: out3 <= 16'he1d5;
      28: out3 <= 16'he782;
      29: out3 <= 16'hed6c;
      30: out3 <= 16'hf384;
      31: out3 <= 16'hf9ba;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D18_66869(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [4:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h3fb1;
      2: out3 <= 16'h3ec5;
      3: out3 <= 16'h3d3f;
      4: out3 <= 16'h3b21;
      5: out3 <= 16'h3871;
      6: out3 <= 16'h3537;
      7: out3 <= 16'h3179;
      8: out3 <= 16'h2d41;
      9: out3 <= 16'h289a;
      10: out3 <= 16'h238e;
      11: out3 <= 16'h1e2b;
      12: out3 <= 16'h187e;
      13: out3 <= 16'h1294;
      14: out3 <= 16'hc7c;
      15: out3 <= 16'h646;
      16: out3 <= 16'h0;
      17: out3 <= 16'hf9ba;
      18: out3 <= 16'hf384;
      19: out3 <= 16'hed6c;
      20: out3 <= 16'he782;
      21: out3 <= 16'he1d5;
      22: out3 <= 16'hdc72;
      23: out3 <= 16'hd766;
      24: out3 <= 16'hd2bf;
      25: out3 <= 16'hce87;
      26: out3 <= 16'hcac9;
      27: out3 <= 16'hc78f;
      28: out3 <= 16'hc4df;
      29: out3 <= 16'hc2c1;
      30: out3 <= 16'hc13b;
      31: out3 <= 16'hc04f;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock66607(clk, reset, next_in, next_out,
   i5_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [4:0] i5_in;
   reg [4:0] i5;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_73932(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a293;
   wire signed [15:0] a282;
   wire signed [15:0] a296;
   wire signed [15:0] a286;
   wire signed [15:0] a297;
   wire signed [15:0] a298;
   reg signed [15:0] tm405;
   reg signed [15:0] tm409;
   reg signed [15:0] tm421;
   reg signed [15:0] tm428;
   reg signed [15:0] tm406;
   reg signed [15:0] tm410;
   reg signed [15:0] tm422;
   reg signed [15:0] tm429;
   wire signed [15:0] tm24;
   wire signed [15:0] a287;
   wire signed [15:0] tm25;
   wire signed [15:0] a289;
   reg signed [15:0] tm407;
   reg signed [15:0] tm411;
   reg signed [15:0] tm423;
   reg signed [15:0] tm430;
   reg signed [15:0] tm83;
   reg signed [15:0] tm84;
   reg signed [15:0] tm408;
   reg signed [15:0] tm412;
   reg signed [15:0] tm424;
   reg signed [15:0] tm431;
   reg signed [15:0] tm425;
   reg signed [15:0] tm432;
   wire signed [15:0] a288;
   wire signed [15:0] a290;
   wire signed [15:0] a291;
   wire signed [15:0] a292;
   reg signed [15:0] tm426;
   reg signed [15:0] tm433;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm427;
   reg signed [15:0] tm434;


   assign a293 = X0;
   assign a282 = a293;
   assign a296 = X1;
   assign a286 = a296;
   assign a297 = X2;
   assign a298 = X3;
   assign a287 = tm24;
   assign a289 = tm25;
   assign Y0 = tm427;
   assign Y1 = tm434;

   D20_66801 instD20inst0_66801(.addr(i5[4:0]), .out(tm25), .clk(clk));

   D18_66869 instD18inst0_66869(.addr(i5[4:0]), .out(tm24), .clk(clk));

    multfix #(16, 2) m66706(.a(tm83), .b(tm408), .clk(clk), .q_sc(a288), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66728(.a(tm84), .b(tm412), .clk(clk), .q_sc(a290), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66746(.a(tm84), .b(tm408), .clk(clk), .q_sc(a291), .q_unsc(), .rst(reset));
    multfix #(16, 2) m66757(.a(tm83), .b(tm412), .clk(clk), .q_sc(a292), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub66735(.a(a288), .b(a290), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add66764(.a(a291), .b(a292), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm83 <= 0;
         tm408 <= 0;
         tm84 <= 0;
         tm412 <= 0;
         tm84 <= 0;
         tm408 <= 0;
         tm83 <= 0;
         tm412 <= 0;
      end
      else begin
         i5 <= i5_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm405 <= a297;
         tm409 <= a298;
         tm421 <= a282;
         tm428 <= a286;
         tm406 <= tm405;
         tm410 <= tm409;
         tm422 <= tm421;
         tm429 <= tm428;
         tm407 <= tm406;
         tm411 <= tm410;
         tm423 <= tm422;
         tm430 <= tm429;
         tm83 <= a287;
         tm84 <= a289;
         tm408 <= tm407;
         tm412 <= tm411;
         tm424 <= tm423;
         tm431 <= tm430;
         tm425 <= tm424;
         tm432 <= tm431;
         tm426 <= tm425;
         tm433 <= tm432;
         tm427 <= tm426;
         tm434 <= tm433;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock66908(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_73935(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a249;
   wire signed [15:0] a250;
   wire signed [15:0] a251;
   wire signed [15:0] a252;
   wire signed [16:0] tm265;
   wire signed [16:0] tm266;
   wire signed [16:0] tm267;
   wire signed [16:0] tm268;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t117;
   wire signed [15:0] t118;
   wire signed [15:0] t119;
   wire signed [15:0] t120;


   assign a249 = X0;
   assign a250 = X2;
   assign a251 = X1;
   assign a252 = X3;
   assign Y0 = t117;
   assign Y1 = t118;
   assign Y2 = t119;
   assign Y3 = t120;
   assign t117 = tm265[16:1];
   assign t118 = tm266[16:1];
   assign t119 = tm267[16:1];
   assign t120 = tm268[16:1];

    addfxp #(17, 1) add66920(.a({{1{a249[15]}}, a249}), .b({{1{a250[15]}}, a250}), .clk(clk), .q(tm265));    // 0
    addfxp #(17, 1) add66935(.a({{1{a251[15]}}, a251}), .b({{1{a252[15]}}, a252}), .clk(clk), .q(tm266));    // 0
    subfxp #(17, 1) sub66950(.a({{1{a249[15]}}, a249}), .b({{1{a250[15]}}, a250}), .clk(clk), .q(tm267));    // 0
    subfxp #(17, 1) sub66965(.a({{1{a251[15]}}, a251}), .b({{1{a252[15]}}, a252}), .clk(clk), .q(tm268));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 132
// Gap: 64
module rc66990(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm66988 instPerm73936(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet66988(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [5:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        6'd0: control <= 1'b1;
        6'd1: control <= 1'b1;
        6'd2: control <= 1'b1;
        6'd3: control <= 1'b1;
        6'd4: control <= 1'b1;
        6'd5: control <= 1'b1;
        6'd6: control <= 1'b1;
        6'd7: control <= 1'b1;
        6'd8: control <= 1'b1;
        6'd9: control <= 1'b1;
        6'd10: control <= 1'b1;
        6'd11: control <= 1'b1;
        6'd12: control <= 1'b1;
        6'd13: control <= 1'b1;
        6'd14: control <= 1'b1;
        6'd15: control <= 1'b1;
        6'd16: control <= 1'b1;
        6'd17: control <= 1'b1;
        6'd18: control <= 1'b1;
        6'd19: control <= 1'b1;
        6'd20: control <= 1'b1;
        6'd21: control <= 1'b1;
        6'd22: control <= 1'b1;
        6'd23: control <= 1'b1;
        6'd24: control <= 1'b1;
        6'd25: control <= 1'b1;
        6'd26: control <= 1'b1;
        6'd27: control <= 1'b1;
        6'd28: control <= 1'b1;
        6'd29: control <= 1'b1;
        6'd30: control <= 1'b1;
        6'd31: control <= 1'b1;
        6'd32: control <= 1'b0;
        6'd33: control <= 1'b0;
        6'd34: control <= 1'b0;
        6'd35: control <= 1'b0;
        6'd36: control <= 1'b0;
        6'd37: control <= 1'b0;
        6'd38: control <= 1'b0;
        6'd39: control <= 1'b0;
        6'd40: control <= 1'b0;
        6'd41: control <= 1'b0;
        6'd42: control <= 1'b0;
        6'd43: control <= 1'b0;
        6'd44: control <= 1'b0;
        6'd45: control <= 1'b0;
        6'd46: control <= 1'b0;
        6'd47: control <= 1'b0;
        6'd48: control <= 1'b0;
        6'd49: control <= 1'b0;
        6'd50: control <= 1'b0;
        6'd51: control <= 1'b0;
        6'd52: control <= 1'b0;
        6'd53: control <= 1'b0;
        6'd54: control <= 1'b0;
        6'd55: control <= 1'b0;
        6'd56: control <= 1'b0;
        6'd57: control <= 1'b0;
        6'd58: control <= 1'b0;
        6'd59: control <= 1'b0;
        6'd60: control <= 1'b0;
        6'd61: control <= 1'b0;
        6'd62: control <= 1'b0;
        6'd63: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 132
// Gap: 64
module perm66988(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 64;

   parameter addrbits = 6;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm26;
   assign tm26 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_73941(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73942(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(63, 6) nextReg_73953(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73954(.X(next2), .Y(next3), .clk(clk));
nextReg #(64, 6) nextReg_73957(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73958(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(63, 1) shiftFIFO_73961(.X(tm26), .Y(tm26_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_73964(.X(tm26_d), .Y(tm26_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 6) shiftFIFO_73969(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm26_d, s1rdloc})
	     {1'd0,  6'd0}: s1rd0 <= 32;
	     {1'd0,  6'd1}: s1rd0 <= 33;
	     {1'd0,  6'd2}: s1rd0 <= 34;
	     {1'd0,  6'd3}: s1rd0 <= 35;
	     {1'd0,  6'd4}: s1rd0 <= 36;
	     {1'd0,  6'd5}: s1rd0 <= 37;
	     {1'd0,  6'd6}: s1rd0 <= 38;
	     {1'd0,  6'd7}: s1rd0 <= 39;
	     {1'd0,  6'd8}: s1rd0 <= 40;
	     {1'd0,  6'd9}: s1rd0 <= 41;
	     {1'd0,  6'd10}: s1rd0 <= 42;
	     {1'd0,  6'd11}: s1rd0 <= 43;
	     {1'd0,  6'd12}: s1rd0 <= 44;
	     {1'd0,  6'd13}: s1rd0 <= 45;
	     {1'd0,  6'd14}: s1rd0 <= 46;
	     {1'd0,  6'd15}: s1rd0 <= 47;
	     {1'd0,  6'd16}: s1rd0 <= 48;
	     {1'd0,  6'd17}: s1rd0 <= 49;
	     {1'd0,  6'd18}: s1rd0 <= 50;
	     {1'd0,  6'd19}: s1rd0 <= 51;
	     {1'd0,  6'd20}: s1rd0 <= 52;
	     {1'd0,  6'd21}: s1rd0 <= 53;
	     {1'd0,  6'd22}: s1rd0 <= 54;
	     {1'd0,  6'd23}: s1rd0 <= 55;
	     {1'd0,  6'd24}: s1rd0 <= 56;
	     {1'd0,  6'd25}: s1rd0 <= 57;
	     {1'd0,  6'd26}: s1rd0 <= 58;
	     {1'd0,  6'd27}: s1rd0 <= 59;
	     {1'd0,  6'd28}: s1rd0 <= 60;
	     {1'd0,  6'd29}: s1rd0 <= 61;
	     {1'd0,  6'd30}: s1rd0 <= 62;
	     {1'd0,  6'd31}: s1rd0 <= 63;
	     {1'd0,  6'd32}: s1rd0 <= 0;
	     {1'd0,  6'd33}: s1rd0 <= 1;
	     {1'd0,  6'd34}: s1rd0 <= 2;
	     {1'd0,  6'd35}: s1rd0 <= 3;
	     {1'd0,  6'd36}: s1rd0 <= 4;
	     {1'd0,  6'd37}: s1rd0 <= 5;
	     {1'd0,  6'd38}: s1rd0 <= 6;
	     {1'd0,  6'd39}: s1rd0 <= 7;
	     {1'd0,  6'd40}: s1rd0 <= 8;
	     {1'd0,  6'd41}: s1rd0 <= 9;
	     {1'd0,  6'd42}: s1rd0 <= 10;
	     {1'd0,  6'd43}: s1rd0 <= 11;
	     {1'd0,  6'd44}: s1rd0 <= 12;
	     {1'd0,  6'd45}: s1rd0 <= 13;
	     {1'd0,  6'd46}: s1rd0 <= 14;
	     {1'd0,  6'd47}: s1rd0 <= 15;
	     {1'd0,  6'd48}: s1rd0 <= 16;
	     {1'd0,  6'd49}: s1rd0 <= 17;
	     {1'd0,  6'd50}: s1rd0 <= 18;
	     {1'd0,  6'd51}: s1rd0 <= 19;
	     {1'd0,  6'd52}: s1rd0 <= 20;
	     {1'd0,  6'd53}: s1rd0 <= 21;
	     {1'd0,  6'd54}: s1rd0 <= 22;
	     {1'd0,  6'd55}: s1rd0 <= 23;
	     {1'd0,  6'd56}: s1rd0 <= 24;
	     {1'd0,  6'd57}: s1rd0 <= 25;
	     {1'd0,  6'd58}: s1rd0 <= 26;
	     {1'd0,  6'd59}: s1rd0 <= 27;
	     {1'd0,  6'd60}: s1rd0 <= 28;
	     {1'd0,  6'd61}: s1rd0 <= 29;
	     {1'd0,  6'd62}: s1rd0 <= 30;
	     {1'd0,  6'd63}: s1rd0 <= 31;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm26_d, s1rdloc})
	     {1'd0,  6'd0}: s1rd1 <= 0;
	     {1'd0,  6'd1}: s1rd1 <= 1;
	     {1'd0,  6'd2}: s1rd1 <= 2;
	     {1'd0,  6'd3}: s1rd1 <= 3;
	     {1'd0,  6'd4}: s1rd1 <= 4;
	     {1'd0,  6'd5}: s1rd1 <= 5;
	     {1'd0,  6'd6}: s1rd1 <= 6;
	     {1'd0,  6'd7}: s1rd1 <= 7;
	     {1'd0,  6'd8}: s1rd1 <= 8;
	     {1'd0,  6'd9}: s1rd1 <= 9;
	     {1'd0,  6'd10}: s1rd1 <= 10;
	     {1'd0,  6'd11}: s1rd1 <= 11;
	     {1'd0,  6'd12}: s1rd1 <= 12;
	     {1'd0,  6'd13}: s1rd1 <= 13;
	     {1'd0,  6'd14}: s1rd1 <= 14;
	     {1'd0,  6'd15}: s1rd1 <= 15;
	     {1'd0,  6'd16}: s1rd1 <= 16;
	     {1'd0,  6'd17}: s1rd1 <= 17;
	     {1'd0,  6'd18}: s1rd1 <= 18;
	     {1'd0,  6'd19}: s1rd1 <= 19;
	     {1'd0,  6'd20}: s1rd1 <= 20;
	     {1'd0,  6'd21}: s1rd1 <= 21;
	     {1'd0,  6'd22}: s1rd1 <= 22;
	     {1'd0,  6'd23}: s1rd1 <= 23;
	     {1'd0,  6'd24}: s1rd1 <= 24;
	     {1'd0,  6'd25}: s1rd1 <= 25;
	     {1'd0,  6'd26}: s1rd1 <= 26;
	     {1'd0,  6'd27}: s1rd1 <= 27;
	     {1'd0,  6'd28}: s1rd1 <= 28;
	     {1'd0,  6'd29}: s1rd1 <= 29;
	     {1'd0,  6'd30}: s1rd1 <= 30;
	     {1'd0,  6'd31}: s1rd1 <= 31;
	     {1'd0,  6'd32}: s1rd1 <= 32;
	     {1'd0,  6'd33}: s1rd1 <= 33;
	     {1'd0,  6'd34}: s1rd1 <= 34;
	     {1'd0,  6'd35}: s1rd1 <= 35;
	     {1'd0,  6'd36}: s1rd1 <= 36;
	     {1'd0,  6'd37}: s1rd1 <= 37;
	     {1'd0,  6'd38}: s1rd1 <= 38;
	     {1'd0,  6'd39}: s1rd1 <= 39;
	     {1'd0,  6'd40}: s1rd1 <= 40;
	     {1'd0,  6'd41}: s1rd1 <= 41;
	     {1'd0,  6'd42}: s1rd1 <= 42;
	     {1'd0,  6'd43}: s1rd1 <= 43;
	     {1'd0,  6'd44}: s1rd1 <= 44;
	     {1'd0,  6'd45}: s1rd1 <= 45;
	     {1'd0,  6'd46}: s1rd1 <= 46;
	     {1'd0,  6'd47}: s1rd1 <= 47;
	     {1'd0,  6'd48}: s1rd1 <= 48;
	     {1'd0,  6'd49}: s1rd1 <= 49;
	     {1'd0,  6'd50}: s1rd1 <= 50;
	     {1'd0,  6'd51}: s1rd1 <= 51;
	     {1'd0,  6'd52}: s1rd1 <= 52;
	     {1'd0,  6'd53}: s1rd1 <= 53;
	     {1'd0,  6'd54}: s1rd1 <= 54;
	     {1'd0,  6'd55}: s1rd1 <= 55;
	     {1'd0,  6'd56}: s1rd1 <= 56;
	     {1'd0,  6'd57}: s1rd1 <= 57;
	     {1'd0,  6'd58}: s1rd1 <= 58;
	     {1'd0,  6'd59}: s1rd1 <= 59;
	     {1'd0,  6'd60}: s1rd1 <= 60;
	     {1'd0,  6'd61}: s1rd1 <= 61;
	     {1'd0,  6'd62}: s1rd1 <= 62;
	     {1'd0,  6'd63}: s1rd1 <= 63;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet66988 sw(tm26_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm26_dd, writeCycle})
	      {1'd0, 6'd0}: s2wr0 <= 32;
	      {1'd0, 6'd1}: s2wr0 <= 33;
	      {1'd0, 6'd2}: s2wr0 <= 34;
	      {1'd0, 6'd3}: s2wr0 <= 35;
	      {1'd0, 6'd4}: s2wr0 <= 36;
	      {1'd0, 6'd5}: s2wr0 <= 37;
	      {1'd0, 6'd6}: s2wr0 <= 38;
	      {1'd0, 6'd7}: s2wr0 <= 39;
	      {1'd0, 6'd8}: s2wr0 <= 40;
	      {1'd0, 6'd9}: s2wr0 <= 41;
	      {1'd0, 6'd10}: s2wr0 <= 42;
	      {1'd0, 6'd11}: s2wr0 <= 43;
	      {1'd0, 6'd12}: s2wr0 <= 44;
	      {1'd0, 6'd13}: s2wr0 <= 45;
	      {1'd0, 6'd14}: s2wr0 <= 46;
	      {1'd0, 6'd15}: s2wr0 <= 47;
	      {1'd0, 6'd16}: s2wr0 <= 48;
	      {1'd0, 6'd17}: s2wr0 <= 49;
	      {1'd0, 6'd18}: s2wr0 <= 50;
	      {1'd0, 6'd19}: s2wr0 <= 51;
	      {1'd0, 6'd20}: s2wr0 <= 52;
	      {1'd0, 6'd21}: s2wr0 <= 53;
	      {1'd0, 6'd22}: s2wr0 <= 54;
	      {1'd0, 6'd23}: s2wr0 <= 55;
	      {1'd0, 6'd24}: s2wr0 <= 56;
	      {1'd0, 6'd25}: s2wr0 <= 57;
	      {1'd0, 6'd26}: s2wr0 <= 58;
	      {1'd0, 6'd27}: s2wr0 <= 59;
	      {1'd0, 6'd28}: s2wr0 <= 60;
	      {1'd0, 6'd29}: s2wr0 <= 61;
	      {1'd0, 6'd30}: s2wr0 <= 62;
	      {1'd0, 6'd31}: s2wr0 <= 63;
	      {1'd0, 6'd32}: s2wr0 <= 0;
	      {1'd0, 6'd33}: s2wr0 <= 1;
	      {1'd0, 6'd34}: s2wr0 <= 2;
	      {1'd0, 6'd35}: s2wr0 <= 3;
	      {1'd0, 6'd36}: s2wr0 <= 4;
	      {1'd0, 6'd37}: s2wr0 <= 5;
	      {1'd0, 6'd38}: s2wr0 <= 6;
	      {1'd0, 6'd39}: s2wr0 <= 7;
	      {1'd0, 6'd40}: s2wr0 <= 8;
	      {1'd0, 6'd41}: s2wr0 <= 9;
	      {1'd0, 6'd42}: s2wr0 <= 10;
	      {1'd0, 6'd43}: s2wr0 <= 11;
	      {1'd0, 6'd44}: s2wr0 <= 12;
	      {1'd0, 6'd45}: s2wr0 <= 13;
	      {1'd0, 6'd46}: s2wr0 <= 14;
	      {1'd0, 6'd47}: s2wr0 <= 15;
	      {1'd0, 6'd48}: s2wr0 <= 16;
	      {1'd0, 6'd49}: s2wr0 <= 17;
	      {1'd0, 6'd50}: s2wr0 <= 18;
	      {1'd0, 6'd51}: s2wr0 <= 19;
	      {1'd0, 6'd52}: s2wr0 <= 20;
	      {1'd0, 6'd53}: s2wr0 <= 21;
	      {1'd0, 6'd54}: s2wr0 <= 22;
	      {1'd0, 6'd55}: s2wr0 <= 23;
	      {1'd0, 6'd56}: s2wr0 <= 24;
	      {1'd0, 6'd57}: s2wr0 <= 25;
	      {1'd0, 6'd58}: s2wr0 <= 26;
	      {1'd0, 6'd59}: s2wr0 <= 27;
	      {1'd0, 6'd60}: s2wr0 <= 28;
	      {1'd0, 6'd61}: s2wr0 <= 29;
	      {1'd0, 6'd62}: s2wr0 <= 30;
	      {1'd0, 6'd63}: s2wr0 <= 31;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm26_dd, writeCycle})
	      {1'd0, 6'd0}: s2wr1 <= 0;
	      {1'd0, 6'd1}: s2wr1 <= 1;
	      {1'd0, 6'd2}: s2wr1 <= 2;
	      {1'd0, 6'd3}: s2wr1 <= 3;
	      {1'd0, 6'd4}: s2wr1 <= 4;
	      {1'd0, 6'd5}: s2wr1 <= 5;
	      {1'd0, 6'd6}: s2wr1 <= 6;
	      {1'd0, 6'd7}: s2wr1 <= 7;
	      {1'd0, 6'd8}: s2wr1 <= 8;
	      {1'd0, 6'd9}: s2wr1 <= 9;
	      {1'd0, 6'd10}: s2wr1 <= 10;
	      {1'd0, 6'd11}: s2wr1 <= 11;
	      {1'd0, 6'd12}: s2wr1 <= 12;
	      {1'd0, 6'd13}: s2wr1 <= 13;
	      {1'd0, 6'd14}: s2wr1 <= 14;
	      {1'd0, 6'd15}: s2wr1 <= 15;
	      {1'd0, 6'd16}: s2wr1 <= 16;
	      {1'd0, 6'd17}: s2wr1 <= 17;
	      {1'd0, 6'd18}: s2wr1 <= 18;
	      {1'd0, 6'd19}: s2wr1 <= 19;
	      {1'd0, 6'd20}: s2wr1 <= 20;
	      {1'd0, 6'd21}: s2wr1 <= 21;
	      {1'd0, 6'd22}: s2wr1 <= 22;
	      {1'd0, 6'd23}: s2wr1 <= 23;
	      {1'd0, 6'd24}: s2wr1 <= 24;
	      {1'd0, 6'd25}: s2wr1 <= 25;
	      {1'd0, 6'd26}: s2wr1 <= 26;
	      {1'd0, 6'd27}: s2wr1 <= 27;
	      {1'd0, 6'd28}: s2wr1 <= 28;
	      {1'd0, 6'd29}: s2wr1 <= 29;
	      {1'd0, 6'd30}: s2wr1 <= 30;
	      {1'd0, 6'd31}: s2wr1 <= 31;
	      {1'd0, 6'd32}: s2wr1 <= 32;
	      {1'd0, 6'd33}: s2wr1 <= 33;
	      {1'd0, 6'd34}: s2wr1 <= 34;
	      {1'd0, 6'd35}: s2wr1 <= 35;
	      {1'd0, 6'd36}: s2wr1 <= 36;
	      {1'd0, 6'd37}: s2wr1 <= 37;
	      {1'd0, 6'd38}: s2wr1 <= 38;
	      {1'd0, 6'd39}: s2wr1 <= 39;
	      {1'd0, 6'd40}: s2wr1 <= 40;
	      {1'd0, 6'd41}: s2wr1 <= 41;
	      {1'd0, 6'd42}: s2wr1 <= 42;
	      {1'd0, 6'd43}: s2wr1 <= 43;
	      {1'd0, 6'd44}: s2wr1 <= 44;
	      {1'd0, 6'd45}: s2wr1 <= 45;
	      {1'd0, 6'd46}: s2wr1 <= 46;
	      {1'd0, 6'd47}: s2wr1 <= 47;
	      {1'd0, 6'd48}: s2wr1 <= 48;
	      {1'd0, 6'd49}: s2wr1 <= 49;
	      {1'd0, 6'd50}: s2wr1 <= 50;
	      {1'd0, 6'd51}: s2wr1 <= 51;
	      {1'd0, 6'd52}: s2wr1 <= 52;
	      {1'd0, 6'd53}: s2wr1 <= 53;
	      {1'd0, 6'd54}: s2wr1 <= 54;
	      {1'd0, 6'd55}: s2wr1 <= 55;
	      {1'd0, 6'd56}: s2wr1 <= 56;
	      {1'd0, 6'd57}: s2wr1 <= 57;
	      {1'd0, 6'd58}: s2wr1 <= 58;
	      {1'd0, 6'd59}: s2wr1 <= 59;
	      {1'd0, 6'd60}: s2wr1 <= 60;
	      {1'd0, 6'd61}: s2wr1 <= 61;
	      {1'd0, 6'd62}: s2wr1 <= 62;
	      {1'd0, 6'd63}: s2wr1 <= 63;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 64
module DirSum_67419(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [5:0] i4;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i4 <= 0;
      end
      else begin
         if (next == 1)
            i4 <= 0;
         else if (i4 == 63)
            i4 <= 0;
         else
            i4 <= i4 + 1;
      end
   end

   codeBlock66993 codeBlockIsnt73974(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i4_in(i4),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D16_67219(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [5:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'hfcdc;
      2: out3 <= 16'hf9ba;
      3: out3 <= 16'hf69c;
      4: out3 <= 16'hf384;
      5: out3 <= 16'hf073;
      6: out3 <= 16'hed6c;
      7: out3 <= 16'hea70;
      8: out3 <= 16'he782;
      9: out3 <= 16'he4a3;
      10: out3 <= 16'he1d5;
      11: out3 <= 16'hdf19;
      12: out3 <= 16'hdc72;
      13: out3 <= 16'hd9e0;
      14: out3 <= 16'hd766;
      15: out3 <= 16'hd505;
      16: out3 <= 16'hd2bf;
      17: out3 <= 16'hd094;
      18: out3 <= 16'hce87;
      19: out3 <= 16'hcc98;
      20: out3 <= 16'hcac9;
      21: out3 <= 16'hc91b;
      22: out3 <= 16'hc78f;
      23: out3 <= 16'hc625;
      24: out3 <= 16'hc4df;
      25: out3 <= 16'hc3be;
      26: out3 <= 16'hc2c1;
      27: out3 <= 16'hc1eb;
      28: out3 <= 16'hc13b;
      29: out3 <= 16'hc0b1;
      30: out3 <= 16'hc04f;
      31: out3 <= 16'hc014;
      32: out3 <= 16'hc000;
      33: out3 <= 16'hc014;
      34: out3 <= 16'hc04f;
      35: out3 <= 16'hc0b1;
      36: out3 <= 16'hc13b;
      37: out3 <= 16'hc1eb;
      38: out3 <= 16'hc2c1;
      39: out3 <= 16'hc3be;
      40: out3 <= 16'hc4df;
      41: out3 <= 16'hc625;
      42: out3 <= 16'hc78f;
      43: out3 <= 16'hc91b;
      44: out3 <= 16'hcac9;
      45: out3 <= 16'hcc98;
      46: out3 <= 16'hce87;
      47: out3 <= 16'hd094;
      48: out3 <= 16'hd2bf;
      49: out3 <= 16'hd505;
      50: out3 <= 16'hd766;
      51: out3 <= 16'hd9e0;
      52: out3 <= 16'hdc72;
      53: out3 <= 16'hdf19;
      54: out3 <= 16'he1d5;
      55: out3 <= 16'he4a3;
      56: out3 <= 16'he782;
      57: out3 <= 16'hea70;
      58: out3 <= 16'hed6c;
      59: out3 <= 16'hf073;
      60: out3 <= 16'hf384;
      61: out3 <= 16'hf69c;
      62: out3 <= 16'hf9ba;
      63: out3 <= 16'hfcdc;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D14_67417(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [5:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h3fec;
      2: out3 <= 16'h3fb1;
      3: out3 <= 16'h3f4f;
      4: out3 <= 16'h3ec5;
      5: out3 <= 16'h3e15;
      6: out3 <= 16'h3d3f;
      7: out3 <= 16'h3c42;
      8: out3 <= 16'h3b21;
      9: out3 <= 16'h39db;
      10: out3 <= 16'h3871;
      11: out3 <= 16'h36e5;
      12: out3 <= 16'h3537;
      13: out3 <= 16'h3368;
      14: out3 <= 16'h3179;
      15: out3 <= 16'h2f6c;
      16: out3 <= 16'h2d41;
      17: out3 <= 16'h2afb;
      18: out3 <= 16'h289a;
      19: out3 <= 16'h2620;
      20: out3 <= 16'h238e;
      21: out3 <= 16'h20e7;
      22: out3 <= 16'h1e2b;
      23: out3 <= 16'h1b5d;
      24: out3 <= 16'h187e;
      25: out3 <= 16'h1590;
      26: out3 <= 16'h1294;
      27: out3 <= 16'hf8d;
      28: out3 <= 16'hc7c;
      29: out3 <= 16'h964;
      30: out3 <= 16'h646;
      31: out3 <= 16'h324;
      32: out3 <= 16'h0;
      33: out3 <= 16'hfcdc;
      34: out3 <= 16'hf9ba;
      35: out3 <= 16'hf69c;
      36: out3 <= 16'hf384;
      37: out3 <= 16'hf073;
      38: out3 <= 16'hed6c;
      39: out3 <= 16'hea70;
      40: out3 <= 16'he782;
      41: out3 <= 16'he4a3;
      42: out3 <= 16'he1d5;
      43: out3 <= 16'hdf19;
      44: out3 <= 16'hdc72;
      45: out3 <= 16'hd9e0;
      46: out3 <= 16'hd766;
      47: out3 <= 16'hd505;
      48: out3 <= 16'hd2bf;
      49: out3 <= 16'hd094;
      50: out3 <= 16'hce87;
      51: out3 <= 16'hcc98;
      52: out3 <= 16'hcac9;
      53: out3 <= 16'hc91b;
      54: out3 <= 16'hc78f;
      55: out3 <= 16'hc625;
      56: out3 <= 16'hc4df;
      57: out3 <= 16'hc3be;
      58: out3 <= 16'hc2c1;
      59: out3 <= 16'hc1eb;
      60: out3 <= 16'hc13b;
      61: out3 <= 16'hc0b1;
      62: out3 <= 16'hc04f;
      63: out3 <= 16'hc014;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock66993(clk, reset, next_in, next_out,
   i4_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [5:0] i4_in;
   reg [5:0] i4;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_73977(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a233;
   wire signed [15:0] a222;
   wire signed [15:0] a236;
   wire signed [15:0] a226;
   wire signed [15:0] a237;
   wire signed [15:0] a238;
   reg signed [15:0] tm435;
   reg signed [15:0] tm439;
   reg signed [15:0] tm451;
   reg signed [15:0] tm458;
   reg signed [15:0] tm436;
   reg signed [15:0] tm440;
   reg signed [15:0] tm452;
   reg signed [15:0] tm459;
   wire signed [15:0] tm29;
   wire signed [15:0] a227;
   wire signed [15:0] tm30;
   wire signed [15:0] a229;
   reg signed [15:0] tm437;
   reg signed [15:0] tm441;
   reg signed [15:0] tm453;
   reg signed [15:0] tm460;
   reg signed [15:0] tm91;
   reg signed [15:0] tm92;
   reg signed [15:0] tm438;
   reg signed [15:0] tm442;
   reg signed [15:0] tm454;
   reg signed [15:0] tm461;
   reg signed [15:0] tm455;
   reg signed [15:0] tm462;
   wire signed [15:0] a228;
   wire signed [15:0] a230;
   wire signed [15:0] a231;
   wire signed [15:0] a232;
   reg signed [15:0] tm456;
   reg signed [15:0] tm463;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm457;
   reg signed [15:0] tm464;


   assign a233 = X0;
   assign a222 = a233;
   assign a236 = X1;
   assign a226 = a236;
   assign a237 = X2;
   assign a238 = X3;
   assign a227 = tm29;
   assign a229 = tm30;
   assign Y0 = tm457;
   assign Y1 = tm464;

   D16_67219 instD16inst0_67219(.addr(i4[5:0]), .out(tm30), .clk(clk));

   D14_67417 instD14inst0_67417(.addr(i4[5:0]), .out(tm29), .clk(clk));

    multfix #(16, 2) m67092(.a(tm91), .b(tm438), .clk(clk), .q_sc(a228), .q_unsc(), .rst(reset));
    multfix #(16, 2) m67114(.a(tm92), .b(tm442), .clk(clk), .q_sc(a230), .q_unsc(), .rst(reset));
    multfix #(16, 2) m67132(.a(tm92), .b(tm438), .clk(clk), .q_sc(a231), .q_unsc(), .rst(reset));
    multfix #(16, 2) m67143(.a(tm91), .b(tm442), .clk(clk), .q_sc(a232), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub67121(.a(a228), .b(a230), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add67150(.a(a231), .b(a232), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm91 <= 0;
         tm438 <= 0;
         tm92 <= 0;
         tm442 <= 0;
         tm92 <= 0;
         tm438 <= 0;
         tm91 <= 0;
         tm442 <= 0;
      end
      else begin
         i4 <= i4_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm435 <= a237;
         tm439 <= a238;
         tm451 <= a222;
         tm458 <= a226;
         tm436 <= tm435;
         tm440 <= tm439;
         tm452 <= tm451;
         tm459 <= tm458;
         tm437 <= tm436;
         tm441 <= tm440;
         tm453 <= tm452;
         tm460 <= tm459;
         tm91 <= a227;
         tm92 <= a229;
         tm438 <= tm437;
         tm442 <= tm441;
         tm454 <= tm453;
         tm461 <= tm460;
         tm455 <= tm454;
         tm462 <= tm461;
         tm456 <= tm455;
         tm463 <= tm462;
         tm457 <= tm456;
         tm464 <= tm463;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock67422(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_73980(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a189;
   wire signed [15:0] a190;
   wire signed [15:0] a191;
   wire signed [15:0] a192;
   wire signed [16:0] tm269;
   wire signed [16:0] tm270;
   wire signed [16:0] tm271;
   wire signed [16:0] tm272;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t93;
   wire signed [15:0] t94;
   wire signed [15:0] t95;
   wire signed [15:0] t96;


   assign a189 = X0;
   assign a190 = X2;
   assign a191 = X1;
   assign a192 = X3;
   assign Y0 = t93;
   assign Y1 = t94;
   assign Y2 = t95;
   assign Y3 = t96;
   assign t93 = tm269[16:1];
   assign t94 = tm270[16:1];
   assign t95 = tm271[16:1];
   assign t96 = tm272[16:1];

    addfxp #(17, 1) add67434(.a({{1{a189[15]}}, a189}), .b({{1{a190[15]}}, a190}), .clk(clk), .q(tm269));    // 0
    addfxp #(17, 1) add67449(.a({{1{a191[15]}}, a191}), .b({{1{a192[15]}}, a192}), .clk(clk), .q(tm270));    // 0
    subfxp #(17, 1) sub67464(.a({{1{a189[15]}}, a189}), .b({{1{a190[15]}}, a190}), .clk(clk), .q(tm271));    // 0
    subfxp #(17, 1) sub67479(.a({{1{a191[15]}}, a191}), .b({{1{a192[15]}}, a192}), .clk(clk), .q(tm272));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 260
// Gap: 128
module rc67504(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm67502 instPerm73981(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet67502(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [6:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        7'd0: control <= 1'b1;
        7'd1: control <= 1'b1;
        7'd2: control <= 1'b1;
        7'd3: control <= 1'b1;
        7'd4: control <= 1'b1;
        7'd5: control <= 1'b1;
        7'd6: control <= 1'b1;
        7'd7: control <= 1'b1;
        7'd8: control <= 1'b1;
        7'd9: control <= 1'b1;
        7'd10: control <= 1'b1;
        7'd11: control <= 1'b1;
        7'd12: control <= 1'b1;
        7'd13: control <= 1'b1;
        7'd14: control <= 1'b1;
        7'd15: control <= 1'b1;
        7'd16: control <= 1'b1;
        7'd17: control <= 1'b1;
        7'd18: control <= 1'b1;
        7'd19: control <= 1'b1;
        7'd20: control <= 1'b1;
        7'd21: control <= 1'b1;
        7'd22: control <= 1'b1;
        7'd23: control <= 1'b1;
        7'd24: control <= 1'b1;
        7'd25: control <= 1'b1;
        7'd26: control <= 1'b1;
        7'd27: control <= 1'b1;
        7'd28: control <= 1'b1;
        7'd29: control <= 1'b1;
        7'd30: control <= 1'b1;
        7'd31: control <= 1'b1;
        7'd32: control <= 1'b1;
        7'd33: control <= 1'b1;
        7'd34: control <= 1'b1;
        7'd35: control <= 1'b1;
        7'd36: control <= 1'b1;
        7'd37: control <= 1'b1;
        7'd38: control <= 1'b1;
        7'd39: control <= 1'b1;
        7'd40: control <= 1'b1;
        7'd41: control <= 1'b1;
        7'd42: control <= 1'b1;
        7'd43: control <= 1'b1;
        7'd44: control <= 1'b1;
        7'd45: control <= 1'b1;
        7'd46: control <= 1'b1;
        7'd47: control <= 1'b1;
        7'd48: control <= 1'b1;
        7'd49: control <= 1'b1;
        7'd50: control <= 1'b1;
        7'd51: control <= 1'b1;
        7'd52: control <= 1'b1;
        7'd53: control <= 1'b1;
        7'd54: control <= 1'b1;
        7'd55: control <= 1'b1;
        7'd56: control <= 1'b1;
        7'd57: control <= 1'b1;
        7'd58: control <= 1'b1;
        7'd59: control <= 1'b1;
        7'd60: control <= 1'b1;
        7'd61: control <= 1'b1;
        7'd62: control <= 1'b1;
        7'd63: control <= 1'b1;
        7'd64: control <= 1'b0;
        7'd65: control <= 1'b0;
        7'd66: control <= 1'b0;
        7'd67: control <= 1'b0;
        7'd68: control <= 1'b0;
        7'd69: control <= 1'b0;
        7'd70: control <= 1'b0;
        7'd71: control <= 1'b0;
        7'd72: control <= 1'b0;
        7'd73: control <= 1'b0;
        7'd74: control <= 1'b0;
        7'd75: control <= 1'b0;
        7'd76: control <= 1'b0;
        7'd77: control <= 1'b0;
        7'd78: control <= 1'b0;
        7'd79: control <= 1'b0;
        7'd80: control <= 1'b0;
        7'd81: control <= 1'b0;
        7'd82: control <= 1'b0;
        7'd83: control <= 1'b0;
        7'd84: control <= 1'b0;
        7'd85: control <= 1'b0;
        7'd86: control <= 1'b0;
        7'd87: control <= 1'b0;
        7'd88: control <= 1'b0;
        7'd89: control <= 1'b0;
        7'd90: control <= 1'b0;
        7'd91: control <= 1'b0;
        7'd92: control <= 1'b0;
        7'd93: control <= 1'b0;
        7'd94: control <= 1'b0;
        7'd95: control <= 1'b0;
        7'd96: control <= 1'b0;
        7'd97: control <= 1'b0;
        7'd98: control <= 1'b0;
        7'd99: control <= 1'b0;
        7'd100: control <= 1'b0;
        7'd101: control <= 1'b0;
        7'd102: control <= 1'b0;
        7'd103: control <= 1'b0;
        7'd104: control <= 1'b0;
        7'd105: control <= 1'b0;
        7'd106: control <= 1'b0;
        7'd107: control <= 1'b0;
        7'd108: control <= 1'b0;
        7'd109: control <= 1'b0;
        7'd110: control <= 1'b0;
        7'd111: control <= 1'b0;
        7'd112: control <= 1'b0;
        7'd113: control <= 1'b0;
        7'd114: control <= 1'b0;
        7'd115: control <= 1'b0;
        7'd116: control <= 1'b0;
        7'd117: control <= 1'b0;
        7'd118: control <= 1'b0;
        7'd119: control <= 1'b0;
        7'd120: control <= 1'b0;
        7'd121: control <= 1'b0;
        7'd122: control <= 1'b0;
        7'd123: control <= 1'b0;
        7'd124: control <= 1'b0;
        7'd125: control <= 1'b0;
        7'd126: control <= 1'b0;
        7'd127: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 260
// Gap: 128
module perm67502(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 128;

   parameter addrbits = 7;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm31;
   assign tm31 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_73986(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_73987(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(127, 7) nextReg_73998(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_73999(.X(next2), .Y(next3), .clk(clk));
nextReg #(128, 7) nextReg_74002(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_74003(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(127, 1) shiftFIFO_74006(.X(tm31), .Y(tm31_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_74009(.X(tm31_d), .Y(tm31_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 7) shiftFIFO_74014(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm31_d, s1rdloc})
	     {1'd0,  7'd0}: s1rd0 <= 64;
	     {1'd0,  7'd1}: s1rd0 <= 65;
	     {1'd0,  7'd2}: s1rd0 <= 66;
	     {1'd0,  7'd3}: s1rd0 <= 67;
	     {1'd0,  7'd4}: s1rd0 <= 68;
	     {1'd0,  7'd5}: s1rd0 <= 69;
	     {1'd0,  7'd6}: s1rd0 <= 70;
	     {1'd0,  7'd7}: s1rd0 <= 71;
	     {1'd0,  7'd8}: s1rd0 <= 72;
	     {1'd0,  7'd9}: s1rd0 <= 73;
	     {1'd0,  7'd10}: s1rd0 <= 74;
	     {1'd0,  7'd11}: s1rd0 <= 75;
	     {1'd0,  7'd12}: s1rd0 <= 76;
	     {1'd0,  7'd13}: s1rd0 <= 77;
	     {1'd0,  7'd14}: s1rd0 <= 78;
	     {1'd0,  7'd15}: s1rd0 <= 79;
	     {1'd0,  7'd16}: s1rd0 <= 80;
	     {1'd0,  7'd17}: s1rd0 <= 81;
	     {1'd0,  7'd18}: s1rd0 <= 82;
	     {1'd0,  7'd19}: s1rd0 <= 83;
	     {1'd0,  7'd20}: s1rd0 <= 84;
	     {1'd0,  7'd21}: s1rd0 <= 85;
	     {1'd0,  7'd22}: s1rd0 <= 86;
	     {1'd0,  7'd23}: s1rd0 <= 87;
	     {1'd0,  7'd24}: s1rd0 <= 88;
	     {1'd0,  7'd25}: s1rd0 <= 89;
	     {1'd0,  7'd26}: s1rd0 <= 90;
	     {1'd0,  7'd27}: s1rd0 <= 91;
	     {1'd0,  7'd28}: s1rd0 <= 92;
	     {1'd0,  7'd29}: s1rd0 <= 93;
	     {1'd0,  7'd30}: s1rd0 <= 94;
	     {1'd0,  7'd31}: s1rd0 <= 95;
	     {1'd0,  7'd32}: s1rd0 <= 96;
	     {1'd0,  7'd33}: s1rd0 <= 97;
	     {1'd0,  7'd34}: s1rd0 <= 98;
	     {1'd0,  7'd35}: s1rd0 <= 99;
	     {1'd0,  7'd36}: s1rd0 <= 100;
	     {1'd0,  7'd37}: s1rd0 <= 101;
	     {1'd0,  7'd38}: s1rd0 <= 102;
	     {1'd0,  7'd39}: s1rd0 <= 103;
	     {1'd0,  7'd40}: s1rd0 <= 104;
	     {1'd0,  7'd41}: s1rd0 <= 105;
	     {1'd0,  7'd42}: s1rd0 <= 106;
	     {1'd0,  7'd43}: s1rd0 <= 107;
	     {1'd0,  7'd44}: s1rd0 <= 108;
	     {1'd0,  7'd45}: s1rd0 <= 109;
	     {1'd0,  7'd46}: s1rd0 <= 110;
	     {1'd0,  7'd47}: s1rd0 <= 111;
	     {1'd0,  7'd48}: s1rd0 <= 112;
	     {1'd0,  7'd49}: s1rd0 <= 113;
	     {1'd0,  7'd50}: s1rd0 <= 114;
	     {1'd0,  7'd51}: s1rd0 <= 115;
	     {1'd0,  7'd52}: s1rd0 <= 116;
	     {1'd0,  7'd53}: s1rd0 <= 117;
	     {1'd0,  7'd54}: s1rd0 <= 118;
	     {1'd0,  7'd55}: s1rd0 <= 119;
	     {1'd0,  7'd56}: s1rd0 <= 120;
	     {1'd0,  7'd57}: s1rd0 <= 121;
	     {1'd0,  7'd58}: s1rd0 <= 122;
	     {1'd0,  7'd59}: s1rd0 <= 123;
	     {1'd0,  7'd60}: s1rd0 <= 124;
	     {1'd0,  7'd61}: s1rd0 <= 125;
	     {1'd0,  7'd62}: s1rd0 <= 126;
	     {1'd0,  7'd63}: s1rd0 <= 127;
	     {1'd0,  7'd64}: s1rd0 <= 0;
	     {1'd0,  7'd65}: s1rd0 <= 1;
	     {1'd0,  7'd66}: s1rd0 <= 2;
	     {1'd0,  7'd67}: s1rd0 <= 3;
	     {1'd0,  7'd68}: s1rd0 <= 4;
	     {1'd0,  7'd69}: s1rd0 <= 5;
	     {1'd0,  7'd70}: s1rd0 <= 6;
	     {1'd0,  7'd71}: s1rd0 <= 7;
	     {1'd0,  7'd72}: s1rd0 <= 8;
	     {1'd0,  7'd73}: s1rd0 <= 9;
	     {1'd0,  7'd74}: s1rd0 <= 10;
	     {1'd0,  7'd75}: s1rd0 <= 11;
	     {1'd0,  7'd76}: s1rd0 <= 12;
	     {1'd0,  7'd77}: s1rd0 <= 13;
	     {1'd0,  7'd78}: s1rd0 <= 14;
	     {1'd0,  7'd79}: s1rd0 <= 15;
	     {1'd0,  7'd80}: s1rd0 <= 16;
	     {1'd0,  7'd81}: s1rd0 <= 17;
	     {1'd0,  7'd82}: s1rd0 <= 18;
	     {1'd0,  7'd83}: s1rd0 <= 19;
	     {1'd0,  7'd84}: s1rd0 <= 20;
	     {1'd0,  7'd85}: s1rd0 <= 21;
	     {1'd0,  7'd86}: s1rd0 <= 22;
	     {1'd0,  7'd87}: s1rd0 <= 23;
	     {1'd0,  7'd88}: s1rd0 <= 24;
	     {1'd0,  7'd89}: s1rd0 <= 25;
	     {1'd0,  7'd90}: s1rd0 <= 26;
	     {1'd0,  7'd91}: s1rd0 <= 27;
	     {1'd0,  7'd92}: s1rd0 <= 28;
	     {1'd0,  7'd93}: s1rd0 <= 29;
	     {1'd0,  7'd94}: s1rd0 <= 30;
	     {1'd0,  7'd95}: s1rd0 <= 31;
	     {1'd0,  7'd96}: s1rd0 <= 32;
	     {1'd0,  7'd97}: s1rd0 <= 33;
	     {1'd0,  7'd98}: s1rd0 <= 34;
	     {1'd0,  7'd99}: s1rd0 <= 35;
	     {1'd0,  7'd100}: s1rd0 <= 36;
	     {1'd0,  7'd101}: s1rd0 <= 37;
	     {1'd0,  7'd102}: s1rd0 <= 38;
	     {1'd0,  7'd103}: s1rd0 <= 39;
	     {1'd0,  7'd104}: s1rd0 <= 40;
	     {1'd0,  7'd105}: s1rd0 <= 41;
	     {1'd0,  7'd106}: s1rd0 <= 42;
	     {1'd0,  7'd107}: s1rd0 <= 43;
	     {1'd0,  7'd108}: s1rd0 <= 44;
	     {1'd0,  7'd109}: s1rd0 <= 45;
	     {1'd0,  7'd110}: s1rd0 <= 46;
	     {1'd0,  7'd111}: s1rd0 <= 47;
	     {1'd0,  7'd112}: s1rd0 <= 48;
	     {1'd0,  7'd113}: s1rd0 <= 49;
	     {1'd0,  7'd114}: s1rd0 <= 50;
	     {1'd0,  7'd115}: s1rd0 <= 51;
	     {1'd0,  7'd116}: s1rd0 <= 52;
	     {1'd0,  7'd117}: s1rd0 <= 53;
	     {1'd0,  7'd118}: s1rd0 <= 54;
	     {1'd0,  7'd119}: s1rd0 <= 55;
	     {1'd0,  7'd120}: s1rd0 <= 56;
	     {1'd0,  7'd121}: s1rd0 <= 57;
	     {1'd0,  7'd122}: s1rd0 <= 58;
	     {1'd0,  7'd123}: s1rd0 <= 59;
	     {1'd0,  7'd124}: s1rd0 <= 60;
	     {1'd0,  7'd125}: s1rd0 <= 61;
	     {1'd0,  7'd126}: s1rd0 <= 62;
	     {1'd0,  7'd127}: s1rd0 <= 63;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm31_d, s1rdloc})
	     {1'd0,  7'd0}: s1rd1 <= 0;
	     {1'd0,  7'd1}: s1rd1 <= 1;
	     {1'd0,  7'd2}: s1rd1 <= 2;
	     {1'd0,  7'd3}: s1rd1 <= 3;
	     {1'd0,  7'd4}: s1rd1 <= 4;
	     {1'd0,  7'd5}: s1rd1 <= 5;
	     {1'd0,  7'd6}: s1rd1 <= 6;
	     {1'd0,  7'd7}: s1rd1 <= 7;
	     {1'd0,  7'd8}: s1rd1 <= 8;
	     {1'd0,  7'd9}: s1rd1 <= 9;
	     {1'd0,  7'd10}: s1rd1 <= 10;
	     {1'd0,  7'd11}: s1rd1 <= 11;
	     {1'd0,  7'd12}: s1rd1 <= 12;
	     {1'd0,  7'd13}: s1rd1 <= 13;
	     {1'd0,  7'd14}: s1rd1 <= 14;
	     {1'd0,  7'd15}: s1rd1 <= 15;
	     {1'd0,  7'd16}: s1rd1 <= 16;
	     {1'd0,  7'd17}: s1rd1 <= 17;
	     {1'd0,  7'd18}: s1rd1 <= 18;
	     {1'd0,  7'd19}: s1rd1 <= 19;
	     {1'd0,  7'd20}: s1rd1 <= 20;
	     {1'd0,  7'd21}: s1rd1 <= 21;
	     {1'd0,  7'd22}: s1rd1 <= 22;
	     {1'd0,  7'd23}: s1rd1 <= 23;
	     {1'd0,  7'd24}: s1rd1 <= 24;
	     {1'd0,  7'd25}: s1rd1 <= 25;
	     {1'd0,  7'd26}: s1rd1 <= 26;
	     {1'd0,  7'd27}: s1rd1 <= 27;
	     {1'd0,  7'd28}: s1rd1 <= 28;
	     {1'd0,  7'd29}: s1rd1 <= 29;
	     {1'd0,  7'd30}: s1rd1 <= 30;
	     {1'd0,  7'd31}: s1rd1 <= 31;
	     {1'd0,  7'd32}: s1rd1 <= 32;
	     {1'd0,  7'd33}: s1rd1 <= 33;
	     {1'd0,  7'd34}: s1rd1 <= 34;
	     {1'd0,  7'd35}: s1rd1 <= 35;
	     {1'd0,  7'd36}: s1rd1 <= 36;
	     {1'd0,  7'd37}: s1rd1 <= 37;
	     {1'd0,  7'd38}: s1rd1 <= 38;
	     {1'd0,  7'd39}: s1rd1 <= 39;
	     {1'd0,  7'd40}: s1rd1 <= 40;
	     {1'd0,  7'd41}: s1rd1 <= 41;
	     {1'd0,  7'd42}: s1rd1 <= 42;
	     {1'd0,  7'd43}: s1rd1 <= 43;
	     {1'd0,  7'd44}: s1rd1 <= 44;
	     {1'd0,  7'd45}: s1rd1 <= 45;
	     {1'd0,  7'd46}: s1rd1 <= 46;
	     {1'd0,  7'd47}: s1rd1 <= 47;
	     {1'd0,  7'd48}: s1rd1 <= 48;
	     {1'd0,  7'd49}: s1rd1 <= 49;
	     {1'd0,  7'd50}: s1rd1 <= 50;
	     {1'd0,  7'd51}: s1rd1 <= 51;
	     {1'd0,  7'd52}: s1rd1 <= 52;
	     {1'd0,  7'd53}: s1rd1 <= 53;
	     {1'd0,  7'd54}: s1rd1 <= 54;
	     {1'd0,  7'd55}: s1rd1 <= 55;
	     {1'd0,  7'd56}: s1rd1 <= 56;
	     {1'd0,  7'd57}: s1rd1 <= 57;
	     {1'd0,  7'd58}: s1rd1 <= 58;
	     {1'd0,  7'd59}: s1rd1 <= 59;
	     {1'd0,  7'd60}: s1rd1 <= 60;
	     {1'd0,  7'd61}: s1rd1 <= 61;
	     {1'd0,  7'd62}: s1rd1 <= 62;
	     {1'd0,  7'd63}: s1rd1 <= 63;
	     {1'd0,  7'd64}: s1rd1 <= 64;
	     {1'd0,  7'd65}: s1rd1 <= 65;
	     {1'd0,  7'd66}: s1rd1 <= 66;
	     {1'd0,  7'd67}: s1rd1 <= 67;
	     {1'd0,  7'd68}: s1rd1 <= 68;
	     {1'd0,  7'd69}: s1rd1 <= 69;
	     {1'd0,  7'd70}: s1rd1 <= 70;
	     {1'd0,  7'd71}: s1rd1 <= 71;
	     {1'd0,  7'd72}: s1rd1 <= 72;
	     {1'd0,  7'd73}: s1rd1 <= 73;
	     {1'd0,  7'd74}: s1rd1 <= 74;
	     {1'd0,  7'd75}: s1rd1 <= 75;
	     {1'd0,  7'd76}: s1rd1 <= 76;
	     {1'd0,  7'd77}: s1rd1 <= 77;
	     {1'd0,  7'd78}: s1rd1 <= 78;
	     {1'd0,  7'd79}: s1rd1 <= 79;
	     {1'd0,  7'd80}: s1rd1 <= 80;
	     {1'd0,  7'd81}: s1rd1 <= 81;
	     {1'd0,  7'd82}: s1rd1 <= 82;
	     {1'd0,  7'd83}: s1rd1 <= 83;
	     {1'd0,  7'd84}: s1rd1 <= 84;
	     {1'd0,  7'd85}: s1rd1 <= 85;
	     {1'd0,  7'd86}: s1rd1 <= 86;
	     {1'd0,  7'd87}: s1rd1 <= 87;
	     {1'd0,  7'd88}: s1rd1 <= 88;
	     {1'd0,  7'd89}: s1rd1 <= 89;
	     {1'd0,  7'd90}: s1rd1 <= 90;
	     {1'd0,  7'd91}: s1rd1 <= 91;
	     {1'd0,  7'd92}: s1rd1 <= 92;
	     {1'd0,  7'd93}: s1rd1 <= 93;
	     {1'd0,  7'd94}: s1rd1 <= 94;
	     {1'd0,  7'd95}: s1rd1 <= 95;
	     {1'd0,  7'd96}: s1rd1 <= 96;
	     {1'd0,  7'd97}: s1rd1 <= 97;
	     {1'd0,  7'd98}: s1rd1 <= 98;
	     {1'd0,  7'd99}: s1rd1 <= 99;
	     {1'd0,  7'd100}: s1rd1 <= 100;
	     {1'd0,  7'd101}: s1rd1 <= 101;
	     {1'd0,  7'd102}: s1rd1 <= 102;
	     {1'd0,  7'd103}: s1rd1 <= 103;
	     {1'd0,  7'd104}: s1rd1 <= 104;
	     {1'd0,  7'd105}: s1rd1 <= 105;
	     {1'd0,  7'd106}: s1rd1 <= 106;
	     {1'd0,  7'd107}: s1rd1 <= 107;
	     {1'd0,  7'd108}: s1rd1 <= 108;
	     {1'd0,  7'd109}: s1rd1 <= 109;
	     {1'd0,  7'd110}: s1rd1 <= 110;
	     {1'd0,  7'd111}: s1rd1 <= 111;
	     {1'd0,  7'd112}: s1rd1 <= 112;
	     {1'd0,  7'd113}: s1rd1 <= 113;
	     {1'd0,  7'd114}: s1rd1 <= 114;
	     {1'd0,  7'd115}: s1rd1 <= 115;
	     {1'd0,  7'd116}: s1rd1 <= 116;
	     {1'd0,  7'd117}: s1rd1 <= 117;
	     {1'd0,  7'd118}: s1rd1 <= 118;
	     {1'd0,  7'd119}: s1rd1 <= 119;
	     {1'd0,  7'd120}: s1rd1 <= 120;
	     {1'd0,  7'd121}: s1rd1 <= 121;
	     {1'd0,  7'd122}: s1rd1 <= 122;
	     {1'd0,  7'd123}: s1rd1 <= 123;
	     {1'd0,  7'd124}: s1rd1 <= 124;
	     {1'd0,  7'd125}: s1rd1 <= 125;
	     {1'd0,  7'd126}: s1rd1 <= 126;
	     {1'd0,  7'd127}: s1rd1 <= 127;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet67502 sw(tm31_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm31_dd, writeCycle})
	      {1'd0, 7'd0}: s2wr0 <= 64;
	      {1'd0, 7'd1}: s2wr0 <= 65;
	      {1'd0, 7'd2}: s2wr0 <= 66;
	      {1'd0, 7'd3}: s2wr0 <= 67;
	      {1'd0, 7'd4}: s2wr0 <= 68;
	      {1'd0, 7'd5}: s2wr0 <= 69;
	      {1'd0, 7'd6}: s2wr0 <= 70;
	      {1'd0, 7'd7}: s2wr0 <= 71;
	      {1'd0, 7'd8}: s2wr0 <= 72;
	      {1'd0, 7'd9}: s2wr0 <= 73;
	      {1'd0, 7'd10}: s2wr0 <= 74;
	      {1'd0, 7'd11}: s2wr0 <= 75;
	      {1'd0, 7'd12}: s2wr0 <= 76;
	      {1'd0, 7'd13}: s2wr0 <= 77;
	      {1'd0, 7'd14}: s2wr0 <= 78;
	      {1'd0, 7'd15}: s2wr0 <= 79;
	      {1'd0, 7'd16}: s2wr0 <= 80;
	      {1'd0, 7'd17}: s2wr0 <= 81;
	      {1'd0, 7'd18}: s2wr0 <= 82;
	      {1'd0, 7'd19}: s2wr0 <= 83;
	      {1'd0, 7'd20}: s2wr0 <= 84;
	      {1'd0, 7'd21}: s2wr0 <= 85;
	      {1'd0, 7'd22}: s2wr0 <= 86;
	      {1'd0, 7'd23}: s2wr0 <= 87;
	      {1'd0, 7'd24}: s2wr0 <= 88;
	      {1'd0, 7'd25}: s2wr0 <= 89;
	      {1'd0, 7'd26}: s2wr0 <= 90;
	      {1'd0, 7'd27}: s2wr0 <= 91;
	      {1'd0, 7'd28}: s2wr0 <= 92;
	      {1'd0, 7'd29}: s2wr0 <= 93;
	      {1'd0, 7'd30}: s2wr0 <= 94;
	      {1'd0, 7'd31}: s2wr0 <= 95;
	      {1'd0, 7'd32}: s2wr0 <= 96;
	      {1'd0, 7'd33}: s2wr0 <= 97;
	      {1'd0, 7'd34}: s2wr0 <= 98;
	      {1'd0, 7'd35}: s2wr0 <= 99;
	      {1'd0, 7'd36}: s2wr0 <= 100;
	      {1'd0, 7'd37}: s2wr0 <= 101;
	      {1'd0, 7'd38}: s2wr0 <= 102;
	      {1'd0, 7'd39}: s2wr0 <= 103;
	      {1'd0, 7'd40}: s2wr0 <= 104;
	      {1'd0, 7'd41}: s2wr0 <= 105;
	      {1'd0, 7'd42}: s2wr0 <= 106;
	      {1'd0, 7'd43}: s2wr0 <= 107;
	      {1'd0, 7'd44}: s2wr0 <= 108;
	      {1'd0, 7'd45}: s2wr0 <= 109;
	      {1'd0, 7'd46}: s2wr0 <= 110;
	      {1'd0, 7'd47}: s2wr0 <= 111;
	      {1'd0, 7'd48}: s2wr0 <= 112;
	      {1'd0, 7'd49}: s2wr0 <= 113;
	      {1'd0, 7'd50}: s2wr0 <= 114;
	      {1'd0, 7'd51}: s2wr0 <= 115;
	      {1'd0, 7'd52}: s2wr0 <= 116;
	      {1'd0, 7'd53}: s2wr0 <= 117;
	      {1'd0, 7'd54}: s2wr0 <= 118;
	      {1'd0, 7'd55}: s2wr0 <= 119;
	      {1'd0, 7'd56}: s2wr0 <= 120;
	      {1'd0, 7'd57}: s2wr0 <= 121;
	      {1'd0, 7'd58}: s2wr0 <= 122;
	      {1'd0, 7'd59}: s2wr0 <= 123;
	      {1'd0, 7'd60}: s2wr0 <= 124;
	      {1'd0, 7'd61}: s2wr0 <= 125;
	      {1'd0, 7'd62}: s2wr0 <= 126;
	      {1'd0, 7'd63}: s2wr0 <= 127;
	      {1'd0, 7'd64}: s2wr0 <= 0;
	      {1'd0, 7'd65}: s2wr0 <= 1;
	      {1'd0, 7'd66}: s2wr0 <= 2;
	      {1'd0, 7'd67}: s2wr0 <= 3;
	      {1'd0, 7'd68}: s2wr0 <= 4;
	      {1'd0, 7'd69}: s2wr0 <= 5;
	      {1'd0, 7'd70}: s2wr0 <= 6;
	      {1'd0, 7'd71}: s2wr0 <= 7;
	      {1'd0, 7'd72}: s2wr0 <= 8;
	      {1'd0, 7'd73}: s2wr0 <= 9;
	      {1'd0, 7'd74}: s2wr0 <= 10;
	      {1'd0, 7'd75}: s2wr0 <= 11;
	      {1'd0, 7'd76}: s2wr0 <= 12;
	      {1'd0, 7'd77}: s2wr0 <= 13;
	      {1'd0, 7'd78}: s2wr0 <= 14;
	      {1'd0, 7'd79}: s2wr0 <= 15;
	      {1'd0, 7'd80}: s2wr0 <= 16;
	      {1'd0, 7'd81}: s2wr0 <= 17;
	      {1'd0, 7'd82}: s2wr0 <= 18;
	      {1'd0, 7'd83}: s2wr0 <= 19;
	      {1'd0, 7'd84}: s2wr0 <= 20;
	      {1'd0, 7'd85}: s2wr0 <= 21;
	      {1'd0, 7'd86}: s2wr0 <= 22;
	      {1'd0, 7'd87}: s2wr0 <= 23;
	      {1'd0, 7'd88}: s2wr0 <= 24;
	      {1'd0, 7'd89}: s2wr0 <= 25;
	      {1'd0, 7'd90}: s2wr0 <= 26;
	      {1'd0, 7'd91}: s2wr0 <= 27;
	      {1'd0, 7'd92}: s2wr0 <= 28;
	      {1'd0, 7'd93}: s2wr0 <= 29;
	      {1'd0, 7'd94}: s2wr0 <= 30;
	      {1'd0, 7'd95}: s2wr0 <= 31;
	      {1'd0, 7'd96}: s2wr0 <= 32;
	      {1'd0, 7'd97}: s2wr0 <= 33;
	      {1'd0, 7'd98}: s2wr0 <= 34;
	      {1'd0, 7'd99}: s2wr0 <= 35;
	      {1'd0, 7'd100}: s2wr0 <= 36;
	      {1'd0, 7'd101}: s2wr0 <= 37;
	      {1'd0, 7'd102}: s2wr0 <= 38;
	      {1'd0, 7'd103}: s2wr0 <= 39;
	      {1'd0, 7'd104}: s2wr0 <= 40;
	      {1'd0, 7'd105}: s2wr0 <= 41;
	      {1'd0, 7'd106}: s2wr0 <= 42;
	      {1'd0, 7'd107}: s2wr0 <= 43;
	      {1'd0, 7'd108}: s2wr0 <= 44;
	      {1'd0, 7'd109}: s2wr0 <= 45;
	      {1'd0, 7'd110}: s2wr0 <= 46;
	      {1'd0, 7'd111}: s2wr0 <= 47;
	      {1'd0, 7'd112}: s2wr0 <= 48;
	      {1'd0, 7'd113}: s2wr0 <= 49;
	      {1'd0, 7'd114}: s2wr0 <= 50;
	      {1'd0, 7'd115}: s2wr0 <= 51;
	      {1'd0, 7'd116}: s2wr0 <= 52;
	      {1'd0, 7'd117}: s2wr0 <= 53;
	      {1'd0, 7'd118}: s2wr0 <= 54;
	      {1'd0, 7'd119}: s2wr0 <= 55;
	      {1'd0, 7'd120}: s2wr0 <= 56;
	      {1'd0, 7'd121}: s2wr0 <= 57;
	      {1'd0, 7'd122}: s2wr0 <= 58;
	      {1'd0, 7'd123}: s2wr0 <= 59;
	      {1'd0, 7'd124}: s2wr0 <= 60;
	      {1'd0, 7'd125}: s2wr0 <= 61;
	      {1'd0, 7'd126}: s2wr0 <= 62;
	      {1'd0, 7'd127}: s2wr0 <= 63;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm31_dd, writeCycle})
	      {1'd0, 7'd0}: s2wr1 <= 0;
	      {1'd0, 7'd1}: s2wr1 <= 1;
	      {1'd0, 7'd2}: s2wr1 <= 2;
	      {1'd0, 7'd3}: s2wr1 <= 3;
	      {1'd0, 7'd4}: s2wr1 <= 4;
	      {1'd0, 7'd5}: s2wr1 <= 5;
	      {1'd0, 7'd6}: s2wr1 <= 6;
	      {1'd0, 7'd7}: s2wr1 <= 7;
	      {1'd0, 7'd8}: s2wr1 <= 8;
	      {1'd0, 7'd9}: s2wr1 <= 9;
	      {1'd0, 7'd10}: s2wr1 <= 10;
	      {1'd0, 7'd11}: s2wr1 <= 11;
	      {1'd0, 7'd12}: s2wr1 <= 12;
	      {1'd0, 7'd13}: s2wr1 <= 13;
	      {1'd0, 7'd14}: s2wr1 <= 14;
	      {1'd0, 7'd15}: s2wr1 <= 15;
	      {1'd0, 7'd16}: s2wr1 <= 16;
	      {1'd0, 7'd17}: s2wr1 <= 17;
	      {1'd0, 7'd18}: s2wr1 <= 18;
	      {1'd0, 7'd19}: s2wr1 <= 19;
	      {1'd0, 7'd20}: s2wr1 <= 20;
	      {1'd0, 7'd21}: s2wr1 <= 21;
	      {1'd0, 7'd22}: s2wr1 <= 22;
	      {1'd0, 7'd23}: s2wr1 <= 23;
	      {1'd0, 7'd24}: s2wr1 <= 24;
	      {1'd0, 7'd25}: s2wr1 <= 25;
	      {1'd0, 7'd26}: s2wr1 <= 26;
	      {1'd0, 7'd27}: s2wr1 <= 27;
	      {1'd0, 7'd28}: s2wr1 <= 28;
	      {1'd0, 7'd29}: s2wr1 <= 29;
	      {1'd0, 7'd30}: s2wr1 <= 30;
	      {1'd0, 7'd31}: s2wr1 <= 31;
	      {1'd0, 7'd32}: s2wr1 <= 32;
	      {1'd0, 7'd33}: s2wr1 <= 33;
	      {1'd0, 7'd34}: s2wr1 <= 34;
	      {1'd0, 7'd35}: s2wr1 <= 35;
	      {1'd0, 7'd36}: s2wr1 <= 36;
	      {1'd0, 7'd37}: s2wr1 <= 37;
	      {1'd0, 7'd38}: s2wr1 <= 38;
	      {1'd0, 7'd39}: s2wr1 <= 39;
	      {1'd0, 7'd40}: s2wr1 <= 40;
	      {1'd0, 7'd41}: s2wr1 <= 41;
	      {1'd0, 7'd42}: s2wr1 <= 42;
	      {1'd0, 7'd43}: s2wr1 <= 43;
	      {1'd0, 7'd44}: s2wr1 <= 44;
	      {1'd0, 7'd45}: s2wr1 <= 45;
	      {1'd0, 7'd46}: s2wr1 <= 46;
	      {1'd0, 7'd47}: s2wr1 <= 47;
	      {1'd0, 7'd48}: s2wr1 <= 48;
	      {1'd0, 7'd49}: s2wr1 <= 49;
	      {1'd0, 7'd50}: s2wr1 <= 50;
	      {1'd0, 7'd51}: s2wr1 <= 51;
	      {1'd0, 7'd52}: s2wr1 <= 52;
	      {1'd0, 7'd53}: s2wr1 <= 53;
	      {1'd0, 7'd54}: s2wr1 <= 54;
	      {1'd0, 7'd55}: s2wr1 <= 55;
	      {1'd0, 7'd56}: s2wr1 <= 56;
	      {1'd0, 7'd57}: s2wr1 <= 57;
	      {1'd0, 7'd58}: s2wr1 <= 58;
	      {1'd0, 7'd59}: s2wr1 <= 59;
	      {1'd0, 7'd60}: s2wr1 <= 60;
	      {1'd0, 7'd61}: s2wr1 <= 61;
	      {1'd0, 7'd62}: s2wr1 <= 62;
	      {1'd0, 7'd63}: s2wr1 <= 63;
	      {1'd0, 7'd64}: s2wr1 <= 64;
	      {1'd0, 7'd65}: s2wr1 <= 65;
	      {1'd0, 7'd66}: s2wr1 <= 66;
	      {1'd0, 7'd67}: s2wr1 <= 67;
	      {1'd0, 7'd68}: s2wr1 <= 68;
	      {1'd0, 7'd69}: s2wr1 <= 69;
	      {1'd0, 7'd70}: s2wr1 <= 70;
	      {1'd0, 7'd71}: s2wr1 <= 71;
	      {1'd0, 7'd72}: s2wr1 <= 72;
	      {1'd0, 7'd73}: s2wr1 <= 73;
	      {1'd0, 7'd74}: s2wr1 <= 74;
	      {1'd0, 7'd75}: s2wr1 <= 75;
	      {1'd0, 7'd76}: s2wr1 <= 76;
	      {1'd0, 7'd77}: s2wr1 <= 77;
	      {1'd0, 7'd78}: s2wr1 <= 78;
	      {1'd0, 7'd79}: s2wr1 <= 79;
	      {1'd0, 7'd80}: s2wr1 <= 80;
	      {1'd0, 7'd81}: s2wr1 <= 81;
	      {1'd0, 7'd82}: s2wr1 <= 82;
	      {1'd0, 7'd83}: s2wr1 <= 83;
	      {1'd0, 7'd84}: s2wr1 <= 84;
	      {1'd0, 7'd85}: s2wr1 <= 85;
	      {1'd0, 7'd86}: s2wr1 <= 86;
	      {1'd0, 7'd87}: s2wr1 <= 87;
	      {1'd0, 7'd88}: s2wr1 <= 88;
	      {1'd0, 7'd89}: s2wr1 <= 89;
	      {1'd0, 7'd90}: s2wr1 <= 90;
	      {1'd0, 7'd91}: s2wr1 <= 91;
	      {1'd0, 7'd92}: s2wr1 <= 92;
	      {1'd0, 7'd93}: s2wr1 <= 93;
	      {1'd0, 7'd94}: s2wr1 <= 94;
	      {1'd0, 7'd95}: s2wr1 <= 95;
	      {1'd0, 7'd96}: s2wr1 <= 96;
	      {1'd0, 7'd97}: s2wr1 <= 97;
	      {1'd0, 7'd98}: s2wr1 <= 98;
	      {1'd0, 7'd99}: s2wr1 <= 99;
	      {1'd0, 7'd100}: s2wr1 <= 100;
	      {1'd0, 7'd101}: s2wr1 <= 101;
	      {1'd0, 7'd102}: s2wr1 <= 102;
	      {1'd0, 7'd103}: s2wr1 <= 103;
	      {1'd0, 7'd104}: s2wr1 <= 104;
	      {1'd0, 7'd105}: s2wr1 <= 105;
	      {1'd0, 7'd106}: s2wr1 <= 106;
	      {1'd0, 7'd107}: s2wr1 <= 107;
	      {1'd0, 7'd108}: s2wr1 <= 108;
	      {1'd0, 7'd109}: s2wr1 <= 109;
	      {1'd0, 7'd110}: s2wr1 <= 110;
	      {1'd0, 7'd111}: s2wr1 <= 111;
	      {1'd0, 7'd112}: s2wr1 <= 112;
	      {1'd0, 7'd113}: s2wr1 <= 113;
	      {1'd0, 7'd114}: s2wr1 <= 114;
	      {1'd0, 7'd115}: s2wr1 <= 115;
	      {1'd0, 7'd116}: s2wr1 <= 116;
	      {1'd0, 7'd117}: s2wr1 <= 117;
	      {1'd0, 7'd118}: s2wr1 <= 118;
	      {1'd0, 7'd119}: s2wr1 <= 119;
	      {1'd0, 7'd120}: s2wr1 <= 120;
	      {1'd0, 7'd121}: s2wr1 <= 121;
	      {1'd0, 7'd122}: s2wr1 <= 122;
	      {1'd0, 7'd123}: s2wr1 <= 123;
	      {1'd0, 7'd124}: s2wr1 <= 124;
	      {1'd0, 7'd125}: s2wr1 <= 125;
	      {1'd0, 7'd126}: s2wr1 <= 126;
	      {1'd0, 7'd127}: s2wr1 <= 127;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 128
module DirSum_68189(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [6:0] i3;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i3 <= 0;
      end
      else begin
         if (next == 1)
            i3 <= 0;
         else if (i3 == 127)
            i3 <= 0;
         else
            i3 <= i3 + 1;
      end
   end

   codeBlock67507 codeBlockIsnt74019(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i3_in(i3),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D10_67927(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [6:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h3ffb;
      2: out3 <= 16'h3fec;
      3: out3 <= 16'h3fd4;
      4: out3 <= 16'h3fb1;
      5: out3 <= 16'h3f85;
      6: out3 <= 16'h3f4f;
      7: out3 <= 16'h3f0f;
      8: out3 <= 16'h3ec5;
      9: out3 <= 16'h3e72;
      10: out3 <= 16'h3e15;
      11: out3 <= 16'h3daf;
      12: out3 <= 16'h3d3f;
      13: out3 <= 16'h3cc5;
      14: out3 <= 16'h3c42;
      15: out3 <= 16'h3bb6;
      16: out3 <= 16'h3b21;
      17: out3 <= 16'h3a82;
      18: out3 <= 16'h39db;
      19: out3 <= 16'h392b;
      20: out3 <= 16'h3871;
      21: out3 <= 16'h37b0;
      22: out3 <= 16'h36e5;
      23: out3 <= 16'h3612;
      24: out3 <= 16'h3537;
      25: out3 <= 16'h3453;
      26: out3 <= 16'h3368;
      27: out3 <= 16'h3274;
      28: out3 <= 16'h3179;
      29: out3 <= 16'h3076;
      30: out3 <= 16'h2f6c;
      31: out3 <= 16'h2e5a;
      32: out3 <= 16'h2d41;
      33: out3 <= 16'h2c21;
      34: out3 <= 16'h2afb;
      35: out3 <= 16'h29ce;
      36: out3 <= 16'h289a;
      37: out3 <= 16'h2760;
      38: out3 <= 16'h2620;
      39: out3 <= 16'h24da;
      40: out3 <= 16'h238e;
      41: out3 <= 16'h223d;
      42: out3 <= 16'h20e7;
      43: out3 <= 16'h1f8c;
      44: out3 <= 16'h1e2b;
      45: out3 <= 16'h1cc6;
      46: out3 <= 16'h1b5d;
      47: out3 <= 16'h19ef;
      48: out3 <= 16'h187e;
      49: out3 <= 16'h1709;
      50: out3 <= 16'h1590;
      51: out3 <= 16'h1413;
      52: out3 <= 16'h1294;
      53: out3 <= 16'h1112;
      54: out3 <= 16'hf8d;
      55: out3 <= 16'he06;
      56: out3 <= 16'hc7c;
      57: out3 <= 16'haf1;
      58: out3 <= 16'h964;
      59: out3 <= 16'h7d6;
      60: out3 <= 16'h646;
      61: out3 <= 16'h4b5;
      62: out3 <= 16'h324;
      63: out3 <= 16'h192;
      64: out3 <= 16'h0;
      65: out3 <= 16'hfe6e;
      66: out3 <= 16'hfcdc;
      67: out3 <= 16'hfb4b;
      68: out3 <= 16'hf9ba;
      69: out3 <= 16'hf82a;
      70: out3 <= 16'hf69c;
      71: out3 <= 16'hf50f;
      72: out3 <= 16'hf384;
      73: out3 <= 16'hf1fa;
      74: out3 <= 16'hf073;
      75: out3 <= 16'heeee;
      76: out3 <= 16'hed6c;
      77: out3 <= 16'hebed;
      78: out3 <= 16'hea70;
      79: out3 <= 16'he8f7;
      80: out3 <= 16'he782;
      81: out3 <= 16'he611;
      82: out3 <= 16'he4a3;
      83: out3 <= 16'he33a;
      84: out3 <= 16'he1d5;
      85: out3 <= 16'he074;
      86: out3 <= 16'hdf19;
      87: out3 <= 16'hddc3;
      88: out3 <= 16'hdc72;
      89: out3 <= 16'hdb26;
      90: out3 <= 16'hd9e0;
      91: out3 <= 16'hd8a0;
      92: out3 <= 16'hd766;
      93: out3 <= 16'hd632;
      94: out3 <= 16'hd505;
      95: out3 <= 16'hd3df;
      96: out3 <= 16'hd2bf;
      97: out3 <= 16'hd1a6;
      98: out3 <= 16'hd094;
      99: out3 <= 16'hcf8a;
      100: out3 <= 16'hce87;
      101: out3 <= 16'hcd8c;
      102: out3 <= 16'hcc98;
      103: out3 <= 16'hcbad;
      104: out3 <= 16'hcac9;
      105: out3 <= 16'hc9ee;
      106: out3 <= 16'hc91b;
      107: out3 <= 16'hc850;
      108: out3 <= 16'hc78f;
      109: out3 <= 16'hc6d5;
      110: out3 <= 16'hc625;
      111: out3 <= 16'hc57e;
      112: out3 <= 16'hc4df;
      113: out3 <= 16'hc44a;
      114: out3 <= 16'hc3be;
      115: out3 <= 16'hc33b;
      116: out3 <= 16'hc2c1;
      117: out3 <= 16'hc251;
      118: out3 <= 16'hc1eb;
      119: out3 <= 16'hc18e;
      120: out3 <= 16'hc13b;
      121: out3 <= 16'hc0f1;
      122: out3 <= 16'hc0b1;
      123: out3 <= 16'hc07b;
      124: out3 <= 16'hc04f;
      125: out3 <= 16'hc02c;
      126: out3 <= 16'hc014;
      127: out3 <= 16'hc005;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D12_68187(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [6:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'hfe6e;
      2: out3 <= 16'hfcdc;
      3: out3 <= 16'hfb4b;
      4: out3 <= 16'hf9ba;
      5: out3 <= 16'hf82a;
      6: out3 <= 16'hf69c;
      7: out3 <= 16'hf50f;
      8: out3 <= 16'hf384;
      9: out3 <= 16'hf1fa;
      10: out3 <= 16'hf073;
      11: out3 <= 16'heeee;
      12: out3 <= 16'hed6c;
      13: out3 <= 16'hebed;
      14: out3 <= 16'hea70;
      15: out3 <= 16'he8f7;
      16: out3 <= 16'he782;
      17: out3 <= 16'he611;
      18: out3 <= 16'he4a3;
      19: out3 <= 16'he33a;
      20: out3 <= 16'he1d5;
      21: out3 <= 16'he074;
      22: out3 <= 16'hdf19;
      23: out3 <= 16'hddc3;
      24: out3 <= 16'hdc72;
      25: out3 <= 16'hdb26;
      26: out3 <= 16'hd9e0;
      27: out3 <= 16'hd8a0;
      28: out3 <= 16'hd766;
      29: out3 <= 16'hd632;
      30: out3 <= 16'hd505;
      31: out3 <= 16'hd3df;
      32: out3 <= 16'hd2bf;
      33: out3 <= 16'hd1a6;
      34: out3 <= 16'hd094;
      35: out3 <= 16'hcf8a;
      36: out3 <= 16'hce87;
      37: out3 <= 16'hcd8c;
      38: out3 <= 16'hcc98;
      39: out3 <= 16'hcbad;
      40: out3 <= 16'hcac9;
      41: out3 <= 16'hc9ee;
      42: out3 <= 16'hc91b;
      43: out3 <= 16'hc850;
      44: out3 <= 16'hc78f;
      45: out3 <= 16'hc6d5;
      46: out3 <= 16'hc625;
      47: out3 <= 16'hc57e;
      48: out3 <= 16'hc4df;
      49: out3 <= 16'hc44a;
      50: out3 <= 16'hc3be;
      51: out3 <= 16'hc33b;
      52: out3 <= 16'hc2c1;
      53: out3 <= 16'hc251;
      54: out3 <= 16'hc1eb;
      55: out3 <= 16'hc18e;
      56: out3 <= 16'hc13b;
      57: out3 <= 16'hc0f1;
      58: out3 <= 16'hc0b1;
      59: out3 <= 16'hc07b;
      60: out3 <= 16'hc04f;
      61: out3 <= 16'hc02c;
      62: out3 <= 16'hc014;
      63: out3 <= 16'hc005;
      64: out3 <= 16'hc000;
      65: out3 <= 16'hc005;
      66: out3 <= 16'hc014;
      67: out3 <= 16'hc02c;
      68: out3 <= 16'hc04f;
      69: out3 <= 16'hc07b;
      70: out3 <= 16'hc0b1;
      71: out3 <= 16'hc0f1;
      72: out3 <= 16'hc13b;
      73: out3 <= 16'hc18e;
      74: out3 <= 16'hc1eb;
      75: out3 <= 16'hc251;
      76: out3 <= 16'hc2c1;
      77: out3 <= 16'hc33b;
      78: out3 <= 16'hc3be;
      79: out3 <= 16'hc44a;
      80: out3 <= 16'hc4df;
      81: out3 <= 16'hc57e;
      82: out3 <= 16'hc625;
      83: out3 <= 16'hc6d5;
      84: out3 <= 16'hc78f;
      85: out3 <= 16'hc850;
      86: out3 <= 16'hc91b;
      87: out3 <= 16'hc9ee;
      88: out3 <= 16'hcac9;
      89: out3 <= 16'hcbad;
      90: out3 <= 16'hcc98;
      91: out3 <= 16'hcd8c;
      92: out3 <= 16'hce87;
      93: out3 <= 16'hcf8a;
      94: out3 <= 16'hd094;
      95: out3 <= 16'hd1a6;
      96: out3 <= 16'hd2bf;
      97: out3 <= 16'hd3df;
      98: out3 <= 16'hd505;
      99: out3 <= 16'hd632;
      100: out3 <= 16'hd766;
      101: out3 <= 16'hd8a0;
      102: out3 <= 16'hd9e0;
      103: out3 <= 16'hdb26;
      104: out3 <= 16'hdc72;
      105: out3 <= 16'hddc3;
      106: out3 <= 16'hdf19;
      107: out3 <= 16'he074;
      108: out3 <= 16'he1d5;
      109: out3 <= 16'he33a;
      110: out3 <= 16'he4a3;
      111: out3 <= 16'he611;
      112: out3 <= 16'he782;
      113: out3 <= 16'he8f7;
      114: out3 <= 16'hea70;
      115: out3 <= 16'hebed;
      116: out3 <= 16'hed6c;
      117: out3 <= 16'heeee;
      118: out3 <= 16'hf073;
      119: out3 <= 16'hf1fa;
      120: out3 <= 16'hf384;
      121: out3 <= 16'hf50f;
      122: out3 <= 16'hf69c;
      123: out3 <= 16'hf82a;
      124: out3 <= 16'hf9ba;
      125: out3 <= 16'hfb4b;
      126: out3 <= 16'hfcdc;
      127: out3 <= 16'hfe6e;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock67507(clk, reset, next_in, next_out,
   i3_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [6:0] i3_in;
   reg [6:0] i3;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_74022(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a173;
   wire signed [15:0] a162;
   wire signed [15:0] a176;
   wire signed [15:0] a166;
   wire signed [15:0] a177;
   wire signed [15:0] a178;
   reg signed [15:0] tm465;
   reg signed [15:0] tm469;
   reg signed [15:0] tm481;
   reg signed [15:0] tm488;
   reg signed [15:0] tm466;
   reg signed [15:0] tm470;
   reg signed [15:0] tm482;
   reg signed [15:0] tm489;
   wire signed [15:0] tm34;
   wire signed [15:0] a167;
   wire signed [15:0] tm35;
   wire signed [15:0] a169;
   reg signed [15:0] tm467;
   reg signed [15:0] tm471;
   reg signed [15:0] tm483;
   reg signed [15:0] tm490;
   reg signed [15:0] tm99;
   reg signed [15:0] tm100;
   reg signed [15:0] tm468;
   reg signed [15:0] tm472;
   reg signed [15:0] tm484;
   reg signed [15:0] tm491;
   reg signed [15:0] tm485;
   reg signed [15:0] tm492;
   wire signed [15:0] a168;
   wire signed [15:0] a170;
   wire signed [15:0] a171;
   wire signed [15:0] a172;
   reg signed [15:0] tm486;
   reg signed [15:0] tm493;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm487;
   reg signed [15:0] tm494;


   assign a173 = X0;
   assign a162 = a173;
   assign a176 = X1;
   assign a166 = a176;
   assign a177 = X2;
   assign a178 = X3;
   assign a167 = tm34;
   assign a169 = tm35;
   assign Y0 = tm487;
   assign Y1 = tm494;

   D10_67927 instD10inst0_67927(.addr(i3[6:0]), .out(tm34), .clk(clk));

   D12_68187 instD12inst0_68187(.addr(i3[6:0]), .out(tm35), .clk(clk));

    multfix #(16, 2) m67606(.a(tm99), .b(tm468), .clk(clk), .q_sc(a168), .q_unsc(), .rst(reset));
    multfix #(16, 2) m67628(.a(tm100), .b(tm472), .clk(clk), .q_sc(a170), .q_unsc(), .rst(reset));
    multfix #(16, 2) m67646(.a(tm100), .b(tm468), .clk(clk), .q_sc(a171), .q_unsc(), .rst(reset));
    multfix #(16, 2) m67657(.a(tm99), .b(tm472), .clk(clk), .q_sc(a172), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub67635(.a(a168), .b(a170), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add67664(.a(a171), .b(a172), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm99 <= 0;
         tm468 <= 0;
         tm100 <= 0;
         tm472 <= 0;
         tm100 <= 0;
         tm468 <= 0;
         tm99 <= 0;
         tm472 <= 0;
      end
      else begin
         i3 <= i3_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm465 <= a177;
         tm469 <= a178;
         tm481 <= a162;
         tm488 <= a166;
         tm466 <= tm465;
         tm470 <= tm469;
         tm482 <= tm481;
         tm489 <= tm488;
         tm467 <= tm466;
         tm471 <= tm470;
         tm483 <= tm482;
         tm490 <= tm489;
         tm99 <= a167;
         tm100 <= a169;
         tm468 <= tm467;
         tm472 <= tm471;
         tm484 <= tm483;
         tm491 <= tm490;
         tm485 <= tm484;
         tm492 <= tm491;
         tm486 <= tm485;
         tm493 <= tm492;
         tm487 <= tm486;
         tm494 <= tm493;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock68192(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_74025(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a129;
   wire signed [15:0] a130;
   wire signed [15:0] a131;
   wire signed [15:0] a132;
   wire signed [16:0] tm273;
   wire signed [16:0] tm274;
   wire signed [16:0] tm275;
   wire signed [16:0] tm276;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t69;
   wire signed [15:0] t70;
   wire signed [15:0] t71;
   wire signed [15:0] t72;


   assign a129 = X0;
   assign a130 = X2;
   assign a131 = X1;
   assign a132 = X3;
   assign Y0 = t69;
   assign Y1 = t70;
   assign Y2 = t71;
   assign Y3 = t72;
   assign t69 = tm273[16:1];
   assign t70 = tm274[16:1];
   assign t71 = tm275[16:1];
   assign t72 = tm276[16:1];

    addfxp #(17, 1) add68204(.a({{1{a129[15]}}, a129}), .b({{1{a130[15]}}, a130}), .clk(clk), .q(tm273));    // 0
    addfxp #(17, 1) add68219(.a({{1{a131[15]}}, a131}), .b({{1{a132[15]}}, a132}), .clk(clk), .q(tm274));    // 0
    subfxp #(17, 1) sub68234(.a({{1{a129[15]}}, a129}), .b({{1{a130[15]}}, a130}), .clk(clk), .q(tm275));    // 0
    subfxp #(17, 1) sub68249(.a({{1{a131[15]}}, a131}), .b({{1{a132[15]}}, a132}), .clk(clk), .q(tm276));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 516
// Gap: 256
module rc68274(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm68272 instPerm74026(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet68272(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [7:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        8'd0: control <= 1'b1;
        8'd1: control <= 1'b1;
        8'd2: control <= 1'b1;
        8'd3: control <= 1'b1;
        8'd4: control <= 1'b1;
        8'd5: control <= 1'b1;
        8'd6: control <= 1'b1;
        8'd7: control <= 1'b1;
        8'd8: control <= 1'b1;
        8'd9: control <= 1'b1;
        8'd10: control <= 1'b1;
        8'd11: control <= 1'b1;
        8'd12: control <= 1'b1;
        8'd13: control <= 1'b1;
        8'd14: control <= 1'b1;
        8'd15: control <= 1'b1;
        8'd16: control <= 1'b1;
        8'd17: control <= 1'b1;
        8'd18: control <= 1'b1;
        8'd19: control <= 1'b1;
        8'd20: control <= 1'b1;
        8'd21: control <= 1'b1;
        8'd22: control <= 1'b1;
        8'd23: control <= 1'b1;
        8'd24: control <= 1'b1;
        8'd25: control <= 1'b1;
        8'd26: control <= 1'b1;
        8'd27: control <= 1'b1;
        8'd28: control <= 1'b1;
        8'd29: control <= 1'b1;
        8'd30: control <= 1'b1;
        8'd31: control <= 1'b1;
        8'd32: control <= 1'b1;
        8'd33: control <= 1'b1;
        8'd34: control <= 1'b1;
        8'd35: control <= 1'b1;
        8'd36: control <= 1'b1;
        8'd37: control <= 1'b1;
        8'd38: control <= 1'b1;
        8'd39: control <= 1'b1;
        8'd40: control <= 1'b1;
        8'd41: control <= 1'b1;
        8'd42: control <= 1'b1;
        8'd43: control <= 1'b1;
        8'd44: control <= 1'b1;
        8'd45: control <= 1'b1;
        8'd46: control <= 1'b1;
        8'd47: control <= 1'b1;
        8'd48: control <= 1'b1;
        8'd49: control <= 1'b1;
        8'd50: control <= 1'b1;
        8'd51: control <= 1'b1;
        8'd52: control <= 1'b1;
        8'd53: control <= 1'b1;
        8'd54: control <= 1'b1;
        8'd55: control <= 1'b1;
        8'd56: control <= 1'b1;
        8'd57: control <= 1'b1;
        8'd58: control <= 1'b1;
        8'd59: control <= 1'b1;
        8'd60: control <= 1'b1;
        8'd61: control <= 1'b1;
        8'd62: control <= 1'b1;
        8'd63: control <= 1'b1;
        8'd64: control <= 1'b1;
        8'd65: control <= 1'b1;
        8'd66: control <= 1'b1;
        8'd67: control <= 1'b1;
        8'd68: control <= 1'b1;
        8'd69: control <= 1'b1;
        8'd70: control <= 1'b1;
        8'd71: control <= 1'b1;
        8'd72: control <= 1'b1;
        8'd73: control <= 1'b1;
        8'd74: control <= 1'b1;
        8'd75: control <= 1'b1;
        8'd76: control <= 1'b1;
        8'd77: control <= 1'b1;
        8'd78: control <= 1'b1;
        8'd79: control <= 1'b1;
        8'd80: control <= 1'b1;
        8'd81: control <= 1'b1;
        8'd82: control <= 1'b1;
        8'd83: control <= 1'b1;
        8'd84: control <= 1'b1;
        8'd85: control <= 1'b1;
        8'd86: control <= 1'b1;
        8'd87: control <= 1'b1;
        8'd88: control <= 1'b1;
        8'd89: control <= 1'b1;
        8'd90: control <= 1'b1;
        8'd91: control <= 1'b1;
        8'd92: control <= 1'b1;
        8'd93: control <= 1'b1;
        8'd94: control <= 1'b1;
        8'd95: control <= 1'b1;
        8'd96: control <= 1'b1;
        8'd97: control <= 1'b1;
        8'd98: control <= 1'b1;
        8'd99: control <= 1'b1;
        8'd100: control <= 1'b1;
        8'd101: control <= 1'b1;
        8'd102: control <= 1'b1;
        8'd103: control <= 1'b1;
        8'd104: control <= 1'b1;
        8'd105: control <= 1'b1;
        8'd106: control <= 1'b1;
        8'd107: control <= 1'b1;
        8'd108: control <= 1'b1;
        8'd109: control <= 1'b1;
        8'd110: control <= 1'b1;
        8'd111: control <= 1'b1;
        8'd112: control <= 1'b1;
        8'd113: control <= 1'b1;
        8'd114: control <= 1'b1;
        8'd115: control <= 1'b1;
        8'd116: control <= 1'b1;
        8'd117: control <= 1'b1;
        8'd118: control <= 1'b1;
        8'd119: control <= 1'b1;
        8'd120: control <= 1'b1;
        8'd121: control <= 1'b1;
        8'd122: control <= 1'b1;
        8'd123: control <= 1'b1;
        8'd124: control <= 1'b1;
        8'd125: control <= 1'b1;
        8'd126: control <= 1'b1;
        8'd127: control <= 1'b1;
        8'd128: control <= 1'b0;
        8'd129: control <= 1'b0;
        8'd130: control <= 1'b0;
        8'd131: control <= 1'b0;
        8'd132: control <= 1'b0;
        8'd133: control <= 1'b0;
        8'd134: control <= 1'b0;
        8'd135: control <= 1'b0;
        8'd136: control <= 1'b0;
        8'd137: control <= 1'b0;
        8'd138: control <= 1'b0;
        8'd139: control <= 1'b0;
        8'd140: control <= 1'b0;
        8'd141: control <= 1'b0;
        8'd142: control <= 1'b0;
        8'd143: control <= 1'b0;
        8'd144: control <= 1'b0;
        8'd145: control <= 1'b0;
        8'd146: control <= 1'b0;
        8'd147: control <= 1'b0;
        8'd148: control <= 1'b0;
        8'd149: control <= 1'b0;
        8'd150: control <= 1'b0;
        8'd151: control <= 1'b0;
        8'd152: control <= 1'b0;
        8'd153: control <= 1'b0;
        8'd154: control <= 1'b0;
        8'd155: control <= 1'b0;
        8'd156: control <= 1'b0;
        8'd157: control <= 1'b0;
        8'd158: control <= 1'b0;
        8'd159: control <= 1'b0;
        8'd160: control <= 1'b0;
        8'd161: control <= 1'b0;
        8'd162: control <= 1'b0;
        8'd163: control <= 1'b0;
        8'd164: control <= 1'b0;
        8'd165: control <= 1'b0;
        8'd166: control <= 1'b0;
        8'd167: control <= 1'b0;
        8'd168: control <= 1'b0;
        8'd169: control <= 1'b0;
        8'd170: control <= 1'b0;
        8'd171: control <= 1'b0;
        8'd172: control <= 1'b0;
        8'd173: control <= 1'b0;
        8'd174: control <= 1'b0;
        8'd175: control <= 1'b0;
        8'd176: control <= 1'b0;
        8'd177: control <= 1'b0;
        8'd178: control <= 1'b0;
        8'd179: control <= 1'b0;
        8'd180: control <= 1'b0;
        8'd181: control <= 1'b0;
        8'd182: control <= 1'b0;
        8'd183: control <= 1'b0;
        8'd184: control <= 1'b0;
        8'd185: control <= 1'b0;
        8'd186: control <= 1'b0;
        8'd187: control <= 1'b0;
        8'd188: control <= 1'b0;
        8'd189: control <= 1'b0;
        8'd190: control <= 1'b0;
        8'd191: control <= 1'b0;
        8'd192: control <= 1'b0;
        8'd193: control <= 1'b0;
        8'd194: control <= 1'b0;
        8'd195: control <= 1'b0;
        8'd196: control <= 1'b0;
        8'd197: control <= 1'b0;
        8'd198: control <= 1'b0;
        8'd199: control <= 1'b0;
        8'd200: control <= 1'b0;
        8'd201: control <= 1'b0;
        8'd202: control <= 1'b0;
        8'd203: control <= 1'b0;
        8'd204: control <= 1'b0;
        8'd205: control <= 1'b0;
        8'd206: control <= 1'b0;
        8'd207: control <= 1'b0;
        8'd208: control <= 1'b0;
        8'd209: control <= 1'b0;
        8'd210: control <= 1'b0;
        8'd211: control <= 1'b0;
        8'd212: control <= 1'b0;
        8'd213: control <= 1'b0;
        8'd214: control <= 1'b0;
        8'd215: control <= 1'b0;
        8'd216: control <= 1'b0;
        8'd217: control <= 1'b0;
        8'd218: control <= 1'b0;
        8'd219: control <= 1'b0;
        8'd220: control <= 1'b0;
        8'd221: control <= 1'b0;
        8'd222: control <= 1'b0;
        8'd223: control <= 1'b0;
        8'd224: control <= 1'b0;
        8'd225: control <= 1'b0;
        8'd226: control <= 1'b0;
        8'd227: control <= 1'b0;
        8'd228: control <= 1'b0;
        8'd229: control <= 1'b0;
        8'd230: control <= 1'b0;
        8'd231: control <= 1'b0;
        8'd232: control <= 1'b0;
        8'd233: control <= 1'b0;
        8'd234: control <= 1'b0;
        8'd235: control <= 1'b0;
        8'd236: control <= 1'b0;
        8'd237: control <= 1'b0;
        8'd238: control <= 1'b0;
        8'd239: control <= 1'b0;
        8'd240: control <= 1'b0;
        8'd241: control <= 1'b0;
        8'd242: control <= 1'b0;
        8'd243: control <= 1'b0;
        8'd244: control <= 1'b0;
        8'd245: control <= 1'b0;
        8'd246: control <= 1'b0;
        8'd247: control <= 1'b0;
        8'd248: control <= 1'b0;
        8'd249: control <= 1'b0;
        8'd250: control <= 1'b0;
        8'd251: control <= 1'b0;
        8'd252: control <= 1'b0;
        8'd253: control <= 1'b0;
        8'd254: control <= 1'b0;
        8'd255: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 516
// Gap: 256
module perm68272(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 256;

   parameter addrbits = 8;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm36;
   assign tm36 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_74031(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_74032(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(255, 8) nextReg_74043(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_74044(.X(next2), .Y(next3), .clk(clk));
nextReg #(256, 8) nextReg_74047(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_74048(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(255, 1) shiftFIFO_74051(.X(tm36), .Y(tm36_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_74054(.X(tm36_d), .Y(tm36_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 8) shiftFIFO_74059(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm36_d, s1rdloc})
	     {1'd0,  8'd0}: s1rd0 <= 128;
	     {1'd0,  8'd1}: s1rd0 <= 129;
	     {1'd0,  8'd2}: s1rd0 <= 130;
	     {1'd0,  8'd3}: s1rd0 <= 131;
	     {1'd0,  8'd4}: s1rd0 <= 132;
	     {1'd0,  8'd5}: s1rd0 <= 133;
	     {1'd0,  8'd6}: s1rd0 <= 134;
	     {1'd0,  8'd7}: s1rd0 <= 135;
	     {1'd0,  8'd8}: s1rd0 <= 136;
	     {1'd0,  8'd9}: s1rd0 <= 137;
	     {1'd0,  8'd10}: s1rd0 <= 138;
	     {1'd0,  8'd11}: s1rd0 <= 139;
	     {1'd0,  8'd12}: s1rd0 <= 140;
	     {1'd0,  8'd13}: s1rd0 <= 141;
	     {1'd0,  8'd14}: s1rd0 <= 142;
	     {1'd0,  8'd15}: s1rd0 <= 143;
	     {1'd0,  8'd16}: s1rd0 <= 144;
	     {1'd0,  8'd17}: s1rd0 <= 145;
	     {1'd0,  8'd18}: s1rd0 <= 146;
	     {1'd0,  8'd19}: s1rd0 <= 147;
	     {1'd0,  8'd20}: s1rd0 <= 148;
	     {1'd0,  8'd21}: s1rd0 <= 149;
	     {1'd0,  8'd22}: s1rd0 <= 150;
	     {1'd0,  8'd23}: s1rd0 <= 151;
	     {1'd0,  8'd24}: s1rd0 <= 152;
	     {1'd0,  8'd25}: s1rd0 <= 153;
	     {1'd0,  8'd26}: s1rd0 <= 154;
	     {1'd0,  8'd27}: s1rd0 <= 155;
	     {1'd0,  8'd28}: s1rd0 <= 156;
	     {1'd0,  8'd29}: s1rd0 <= 157;
	     {1'd0,  8'd30}: s1rd0 <= 158;
	     {1'd0,  8'd31}: s1rd0 <= 159;
	     {1'd0,  8'd32}: s1rd0 <= 160;
	     {1'd0,  8'd33}: s1rd0 <= 161;
	     {1'd0,  8'd34}: s1rd0 <= 162;
	     {1'd0,  8'd35}: s1rd0 <= 163;
	     {1'd0,  8'd36}: s1rd0 <= 164;
	     {1'd0,  8'd37}: s1rd0 <= 165;
	     {1'd0,  8'd38}: s1rd0 <= 166;
	     {1'd0,  8'd39}: s1rd0 <= 167;
	     {1'd0,  8'd40}: s1rd0 <= 168;
	     {1'd0,  8'd41}: s1rd0 <= 169;
	     {1'd0,  8'd42}: s1rd0 <= 170;
	     {1'd0,  8'd43}: s1rd0 <= 171;
	     {1'd0,  8'd44}: s1rd0 <= 172;
	     {1'd0,  8'd45}: s1rd0 <= 173;
	     {1'd0,  8'd46}: s1rd0 <= 174;
	     {1'd0,  8'd47}: s1rd0 <= 175;
	     {1'd0,  8'd48}: s1rd0 <= 176;
	     {1'd0,  8'd49}: s1rd0 <= 177;
	     {1'd0,  8'd50}: s1rd0 <= 178;
	     {1'd0,  8'd51}: s1rd0 <= 179;
	     {1'd0,  8'd52}: s1rd0 <= 180;
	     {1'd0,  8'd53}: s1rd0 <= 181;
	     {1'd0,  8'd54}: s1rd0 <= 182;
	     {1'd0,  8'd55}: s1rd0 <= 183;
	     {1'd0,  8'd56}: s1rd0 <= 184;
	     {1'd0,  8'd57}: s1rd0 <= 185;
	     {1'd0,  8'd58}: s1rd0 <= 186;
	     {1'd0,  8'd59}: s1rd0 <= 187;
	     {1'd0,  8'd60}: s1rd0 <= 188;
	     {1'd0,  8'd61}: s1rd0 <= 189;
	     {1'd0,  8'd62}: s1rd0 <= 190;
	     {1'd0,  8'd63}: s1rd0 <= 191;
	     {1'd0,  8'd64}: s1rd0 <= 192;
	     {1'd0,  8'd65}: s1rd0 <= 193;
	     {1'd0,  8'd66}: s1rd0 <= 194;
	     {1'd0,  8'd67}: s1rd0 <= 195;
	     {1'd0,  8'd68}: s1rd0 <= 196;
	     {1'd0,  8'd69}: s1rd0 <= 197;
	     {1'd0,  8'd70}: s1rd0 <= 198;
	     {1'd0,  8'd71}: s1rd0 <= 199;
	     {1'd0,  8'd72}: s1rd0 <= 200;
	     {1'd0,  8'd73}: s1rd0 <= 201;
	     {1'd0,  8'd74}: s1rd0 <= 202;
	     {1'd0,  8'd75}: s1rd0 <= 203;
	     {1'd0,  8'd76}: s1rd0 <= 204;
	     {1'd0,  8'd77}: s1rd0 <= 205;
	     {1'd0,  8'd78}: s1rd0 <= 206;
	     {1'd0,  8'd79}: s1rd0 <= 207;
	     {1'd0,  8'd80}: s1rd0 <= 208;
	     {1'd0,  8'd81}: s1rd0 <= 209;
	     {1'd0,  8'd82}: s1rd0 <= 210;
	     {1'd0,  8'd83}: s1rd0 <= 211;
	     {1'd0,  8'd84}: s1rd0 <= 212;
	     {1'd0,  8'd85}: s1rd0 <= 213;
	     {1'd0,  8'd86}: s1rd0 <= 214;
	     {1'd0,  8'd87}: s1rd0 <= 215;
	     {1'd0,  8'd88}: s1rd0 <= 216;
	     {1'd0,  8'd89}: s1rd0 <= 217;
	     {1'd0,  8'd90}: s1rd0 <= 218;
	     {1'd0,  8'd91}: s1rd0 <= 219;
	     {1'd0,  8'd92}: s1rd0 <= 220;
	     {1'd0,  8'd93}: s1rd0 <= 221;
	     {1'd0,  8'd94}: s1rd0 <= 222;
	     {1'd0,  8'd95}: s1rd0 <= 223;
	     {1'd0,  8'd96}: s1rd0 <= 224;
	     {1'd0,  8'd97}: s1rd0 <= 225;
	     {1'd0,  8'd98}: s1rd0 <= 226;
	     {1'd0,  8'd99}: s1rd0 <= 227;
	     {1'd0,  8'd100}: s1rd0 <= 228;
	     {1'd0,  8'd101}: s1rd0 <= 229;
	     {1'd0,  8'd102}: s1rd0 <= 230;
	     {1'd0,  8'd103}: s1rd0 <= 231;
	     {1'd0,  8'd104}: s1rd0 <= 232;
	     {1'd0,  8'd105}: s1rd0 <= 233;
	     {1'd0,  8'd106}: s1rd0 <= 234;
	     {1'd0,  8'd107}: s1rd0 <= 235;
	     {1'd0,  8'd108}: s1rd0 <= 236;
	     {1'd0,  8'd109}: s1rd0 <= 237;
	     {1'd0,  8'd110}: s1rd0 <= 238;
	     {1'd0,  8'd111}: s1rd0 <= 239;
	     {1'd0,  8'd112}: s1rd0 <= 240;
	     {1'd0,  8'd113}: s1rd0 <= 241;
	     {1'd0,  8'd114}: s1rd0 <= 242;
	     {1'd0,  8'd115}: s1rd0 <= 243;
	     {1'd0,  8'd116}: s1rd0 <= 244;
	     {1'd0,  8'd117}: s1rd0 <= 245;
	     {1'd0,  8'd118}: s1rd0 <= 246;
	     {1'd0,  8'd119}: s1rd0 <= 247;
	     {1'd0,  8'd120}: s1rd0 <= 248;
	     {1'd0,  8'd121}: s1rd0 <= 249;
	     {1'd0,  8'd122}: s1rd0 <= 250;
	     {1'd0,  8'd123}: s1rd0 <= 251;
	     {1'd0,  8'd124}: s1rd0 <= 252;
	     {1'd0,  8'd125}: s1rd0 <= 253;
	     {1'd0,  8'd126}: s1rd0 <= 254;
	     {1'd0,  8'd127}: s1rd0 <= 255;
	     {1'd0,  8'd128}: s1rd0 <= 0;
	     {1'd0,  8'd129}: s1rd0 <= 1;
	     {1'd0,  8'd130}: s1rd0 <= 2;
	     {1'd0,  8'd131}: s1rd0 <= 3;
	     {1'd0,  8'd132}: s1rd0 <= 4;
	     {1'd0,  8'd133}: s1rd0 <= 5;
	     {1'd0,  8'd134}: s1rd0 <= 6;
	     {1'd0,  8'd135}: s1rd0 <= 7;
	     {1'd0,  8'd136}: s1rd0 <= 8;
	     {1'd0,  8'd137}: s1rd0 <= 9;
	     {1'd0,  8'd138}: s1rd0 <= 10;
	     {1'd0,  8'd139}: s1rd0 <= 11;
	     {1'd0,  8'd140}: s1rd0 <= 12;
	     {1'd0,  8'd141}: s1rd0 <= 13;
	     {1'd0,  8'd142}: s1rd0 <= 14;
	     {1'd0,  8'd143}: s1rd0 <= 15;
	     {1'd0,  8'd144}: s1rd0 <= 16;
	     {1'd0,  8'd145}: s1rd0 <= 17;
	     {1'd0,  8'd146}: s1rd0 <= 18;
	     {1'd0,  8'd147}: s1rd0 <= 19;
	     {1'd0,  8'd148}: s1rd0 <= 20;
	     {1'd0,  8'd149}: s1rd0 <= 21;
	     {1'd0,  8'd150}: s1rd0 <= 22;
	     {1'd0,  8'd151}: s1rd0 <= 23;
	     {1'd0,  8'd152}: s1rd0 <= 24;
	     {1'd0,  8'd153}: s1rd0 <= 25;
	     {1'd0,  8'd154}: s1rd0 <= 26;
	     {1'd0,  8'd155}: s1rd0 <= 27;
	     {1'd0,  8'd156}: s1rd0 <= 28;
	     {1'd0,  8'd157}: s1rd0 <= 29;
	     {1'd0,  8'd158}: s1rd0 <= 30;
	     {1'd0,  8'd159}: s1rd0 <= 31;
	     {1'd0,  8'd160}: s1rd0 <= 32;
	     {1'd0,  8'd161}: s1rd0 <= 33;
	     {1'd0,  8'd162}: s1rd0 <= 34;
	     {1'd0,  8'd163}: s1rd0 <= 35;
	     {1'd0,  8'd164}: s1rd0 <= 36;
	     {1'd0,  8'd165}: s1rd0 <= 37;
	     {1'd0,  8'd166}: s1rd0 <= 38;
	     {1'd0,  8'd167}: s1rd0 <= 39;
	     {1'd0,  8'd168}: s1rd0 <= 40;
	     {1'd0,  8'd169}: s1rd0 <= 41;
	     {1'd0,  8'd170}: s1rd0 <= 42;
	     {1'd0,  8'd171}: s1rd0 <= 43;
	     {1'd0,  8'd172}: s1rd0 <= 44;
	     {1'd0,  8'd173}: s1rd0 <= 45;
	     {1'd0,  8'd174}: s1rd0 <= 46;
	     {1'd0,  8'd175}: s1rd0 <= 47;
	     {1'd0,  8'd176}: s1rd0 <= 48;
	     {1'd0,  8'd177}: s1rd0 <= 49;
	     {1'd0,  8'd178}: s1rd0 <= 50;
	     {1'd0,  8'd179}: s1rd0 <= 51;
	     {1'd0,  8'd180}: s1rd0 <= 52;
	     {1'd0,  8'd181}: s1rd0 <= 53;
	     {1'd0,  8'd182}: s1rd0 <= 54;
	     {1'd0,  8'd183}: s1rd0 <= 55;
	     {1'd0,  8'd184}: s1rd0 <= 56;
	     {1'd0,  8'd185}: s1rd0 <= 57;
	     {1'd0,  8'd186}: s1rd0 <= 58;
	     {1'd0,  8'd187}: s1rd0 <= 59;
	     {1'd0,  8'd188}: s1rd0 <= 60;
	     {1'd0,  8'd189}: s1rd0 <= 61;
	     {1'd0,  8'd190}: s1rd0 <= 62;
	     {1'd0,  8'd191}: s1rd0 <= 63;
	     {1'd0,  8'd192}: s1rd0 <= 64;
	     {1'd0,  8'd193}: s1rd0 <= 65;
	     {1'd0,  8'd194}: s1rd0 <= 66;
	     {1'd0,  8'd195}: s1rd0 <= 67;
	     {1'd0,  8'd196}: s1rd0 <= 68;
	     {1'd0,  8'd197}: s1rd0 <= 69;
	     {1'd0,  8'd198}: s1rd0 <= 70;
	     {1'd0,  8'd199}: s1rd0 <= 71;
	     {1'd0,  8'd200}: s1rd0 <= 72;
	     {1'd0,  8'd201}: s1rd0 <= 73;
	     {1'd0,  8'd202}: s1rd0 <= 74;
	     {1'd0,  8'd203}: s1rd0 <= 75;
	     {1'd0,  8'd204}: s1rd0 <= 76;
	     {1'd0,  8'd205}: s1rd0 <= 77;
	     {1'd0,  8'd206}: s1rd0 <= 78;
	     {1'd0,  8'd207}: s1rd0 <= 79;
	     {1'd0,  8'd208}: s1rd0 <= 80;
	     {1'd0,  8'd209}: s1rd0 <= 81;
	     {1'd0,  8'd210}: s1rd0 <= 82;
	     {1'd0,  8'd211}: s1rd0 <= 83;
	     {1'd0,  8'd212}: s1rd0 <= 84;
	     {1'd0,  8'd213}: s1rd0 <= 85;
	     {1'd0,  8'd214}: s1rd0 <= 86;
	     {1'd0,  8'd215}: s1rd0 <= 87;
	     {1'd0,  8'd216}: s1rd0 <= 88;
	     {1'd0,  8'd217}: s1rd0 <= 89;
	     {1'd0,  8'd218}: s1rd0 <= 90;
	     {1'd0,  8'd219}: s1rd0 <= 91;
	     {1'd0,  8'd220}: s1rd0 <= 92;
	     {1'd0,  8'd221}: s1rd0 <= 93;
	     {1'd0,  8'd222}: s1rd0 <= 94;
	     {1'd0,  8'd223}: s1rd0 <= 95;
	     {1'd0,  8'd224}: s1rd0 <= 96;
	     {1'd0,  8'd225}: s1rd0 <= 97;
	     {1'd0,  8'd226}: s1rd0 <= 98;
	     {1'd0,  8'd227}: s1rd0 <= 99;
	     {1'd0,  8'd228}: s1rd0 <= 100;
	     {1'd0,  8'd229}: s1rd0 <= 101;
	     {1'd0,  8'd230}: s1rd0 <= 102;
	     {1'd0,  8'd231}: s1rd0 <= 103;
	     {1'd0,  8'd232}: s1rd0 <= 104;
	     {1'd0,  8'd233}: s1rd0 <= 105;
	     {1'd0,  8'd234}: s1rd0 <= 106;
	     {1'd0,  8'd235}: s1rd0 <= 107;
	     {1'd0,  8'd236}: s1rd0 <= 108;
	     {1'd0,  8'd237}: s1rd0 <= 109;
	     {1'd0,  8'd238}: s1rd0 <= 110;
	     {1'd0,  8'd239}: s1rd0 <= 111;
	     {1'd0,  8'd240}: s1rd0 <= 112;
	     {1'd0,  8'd241}: s1rd0 <= 113;
	     {1'd0,  8'd242}: s1rd0 <= 114;
	     {1'd0,  8'd243}: s1rd0 <= 115;
	     {1'd0,  8'd244}: s1rd0 <= 116;
	     {1'd0,  8'd245}: s1rd0 <= 117;
	     {1'd0,  8'd246}: s1rd0 <= 118;
	     {1'd0,  8'd247}: s1rd0 <= 119;
	     {1'd0,  8'd248}: s1rd0 <= 120;
	     {1'd0,  8'd249}: s1rd0 <= 121;
	     {1'd0,  8'd250}: s1rd0 <= 122;
	     {1'd0,  8'd251}: s1rd0 <= 123;
	     {1'd0,  8'd252}: s1rd0 <= 124;
	     {1'd0,  8'd253}: s1rd0 <= 125;
	     {1'd0,  8'd254}: s1rd0 <= 126;
	     {1'd0,  8'd255}: s1rd0 <= 127;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm36_d, s1rdloc})
	     {1'd0,  8'd0}: s1rd1 <= 0;
	     {1'd0,  8'd1}: s1rd1 <= 1;
	     {1'd0,  8'd2}: s1rd1 <= 2;
	     {1'd0,  8'd3}: s1rd1 <= 3;
	     {1'd0,  8'd4}: s1rd1 <= 4;
	     {1'd0,  8'd5}: s1rd1 <= 5;
	     {1'd0,  8'd6}: s1rd1 <= 6;
	     {1'd0,  8'd7}: s1rd1 <= 7;
	     {1'd0,  8'd8}: s1rd1 <= 8;
	     {1'd0,  8'd9}: s1rd1 <= 9;
	     {1'd0,  8'd10}: s1rd1 <= 10;
	     {1'd0,  8'd11}: s1rd1 <= 11;
	     {1'd0,  8'd12}: s1rd1 <= 12;
	     {1'd0,  8'd13}: s1rd1 <= 13;
	     {1'd0,  8'd14}: s1rd1 <= 14;
	     {1'd0,  8'd15}: s1rd1 <= 15;
	     {1'd0,  8'd16}: s1rd1 <= 16;
	     {1'd0,  8'd17}: s1rd1 <= 17;
	     {1'd0,  8'd18}: s1rd1 <= 18;
	     {1'd0,  8'd19}: s1rd1 <= 19;
	     {1'd0,  8'd20}: s1rd1 <= 20;
	     {1'd0,  8'd21}: s1rd1 <= 21;
	     {1'd0,  8'd22}: s1rd1 <= 22;
	     {1'd0,  8'd23}: s1rd1 <= 23;
	     {1'd0,  8'd24}: s1rd1 <= 24;
	     {1'd0,  8'd25}: s1rd1 <= 25;
	     {1'd0,  8'd26}: s1rd1 <= 26;
	     {1'd0,  8'd27}: s1rd1 <= 27;
	     {1'd0,  8'd28}: s1rd1 <= 28;
	     {1'd0,  8'd29}: s1rd1 <= 29;
	     {1'd0,  8'd30}: s1rd1 <= 30;
	     {1'd0,  8'd31}: s1rd1 <= 31;
	     {1'd0,  8'd32}: s1rd1 <= 32;
	     {1'd0,  8'd33}: s1rd1 <= 33;
	     {1'd0,  8'd34}: s1rd1 <= 34;
	     {1'd0,  8'd35}: s1rd1 <= 35;
	     {1'd0,  8'd36}: s1rd1 <= 36;
	     {1'd0,  8'd37}: s1rd1 <= 37;
	     {1'd0,  8'd38}: s1rd1 <= 38;
	     {1'd0,  8'd39}: s1rd1 <= 39;
	     {1'd0,  8'd40}: s1rd1 <= 40;
	     {1'd0,  8'd41}: s1rd1 <= 41;
	     {1'd0,  8'd42}: s1rd1 <= 42;
	     {1'd0,  8'd43}: s1rd1 <= 43;
	     {1'd0,  8'd44}: s1rd1 <= 44;
	     {1'd0,  8'd45}: s1rd1 <= 45;
	     {1'd0,  8'd46}: s1rd1 <= 46;
	     {1'd0,  8'd47}: s1rd1 <= 47;
	     {1'd0,  8'd48}: s1rd1 <= 48;
	     {1'd0,  8'd49}: s1rd1 <= 49;
	     {1'd0,  8'd50}: s1rd1 <= 50;
	     {1'd0,  8'd51}: s1rd1 <= 51;
	     {1'd0,  8'd52}: s1rd1 <= 52;
	     {1'd0,  8'd53}: s1rd1 <= 53;
	     {1'd0,  8'd54}: s1rd1 <= 54;
	     {1'd0,  8'd55}: s1rd1 <= 55;
	     {1'd0,  8'd56}: s1rd1 <= 56;
	     {1'd0,  8'd57}: s1rd1 <= 57;
	     {1'd0,  8'd58}: s1rd1 <= 58;
	     {1'd0,  8'd59}: s1rd1 <= 59;
	     {1'd0,  8'd60}: s1rd1 <= 60;
	     {1'd0,  8'd61}: s1rd1 <= 61;
	     {1'd0,  8'd62}: s1rd1 <= 62;
	     {1'd0,  8'd63}: s1rd1 <= 63;
	     {1'd0,  8'd64}: s1rd1 <= 64;
	     {1'd0,  8'd65}: s1rd1 <= 65;
	     {1'd0,  8'd66}: s1rd1 <= 66;
	     {1'd0,  8'd67}: s1rd1 <= 67;
	     {1'd0,  8'd68}: s1rd1 <= 68;
	     {1'd0,  8'd69}: s1rd1 <= 69;
	     {1'd0,  8'd70}: s1rd1 <= 70;
	     {1'd0,  8'd71}: s1rd1 <= 71;
	     {1'd0,  8'd72}: s1rd1 <= 72;
	     {1'd0,  8'd73}: s1rd1 <= 73;
	     {1'd0,  8'd74}: s1rd1 <= 74;
	     {1'd0,  8'd75}: s1rd1 <= 75;
	     {1'd0,  8'd76}: s1rd1 <= 76;
	     {1'd0,  8'd77}: s1rd1 <= 77;
	     {1'd0,  8'd78}: s1rd1 <= 78;
	     {1'd0,  8'd79}: s1rd1 <= 79;
	     {1'd0,  8'd80}: s1rd1 <= 80;
	     {1'd0,  8'd81}: s1rd1 <= 81;
	     {1'd0,  8'd82}: s1rd1 <= 82;
	     {1'd0,  8'd83}: s1rd1 <= 83;
	     {1'd0,  8'd84}: s1rd1 <= 84;
	     {1'd0,  8'd85}: s1rd1 <= 85;
	     {1'd0,  8'd86}: s1rd1 <= 86;
	     {1'd0,  8'd87}: s1rd1 <= 87;
	     {1'd0,  8'd88}: s1rd1 <= 88;
	     {1'd0,  8'd89}: s1rd1 <= 89;
	     {1'd0,  8'd90}: s1rd1 <= 90;
	     {1'd0,  8'd91}: s1rd1 <= 91;
	     {1'd0,  8'd92}: s1rd1 <= 92;
	     {1'd0,  8'd93}: s1rd1 <= 93;
	     {1'd0,  8'd94}: s1rd1 <= 94;
	     {1'd0,  8'd95}: s1rd1 <= 95;
	     {1'd0,  8'd96}: s1rd1 <= 96;
	     {1'd0,  8'd97}: s1rd1 <= 97;
	     {1'd0,  8'd98}: s1rd1 <= 98;
	     {1'd0,  8'd99}: s1rd1 <= 99;
	     {1'd0,  8'd100}: s1rd1 <= 100;
	     {1'd0,  8'd101}: s1rd1 <= 101;
	     {1'd0,  8'd102}: s1rd1 <= 102;
	     {1'd0,  8'd103}: s1rd1 <= 103;
	     {1'd0,  8'd104}: s1rd1 <= 104;
	     {1'd0,  8'd105}: s1rd1 <= 105;
	     {1'd0,  8'd106}: s1rd1 <= 106;
	     {1'd0,  8'd107}: s1rd1 <= 107;
	     {1'd0,  8'd108}: s1rd1 <= 108;
	     {1'd0,  8'd109}: s1rd1 <= 109;
	     {1'd0,  8'd110}: s1rd1 <= 110;
	     {1'd0,  8'd111}: s1rd1 <= 111;
	     {1'd0,  8'd112}: s1rd1 <= 112;
	     {1'd0,  8'd113}: s1rd1 <= 113;
	     {1'd0,  8'd114}: s1rd1 <= 114;
	     {1'd0,  8'd115}: s1rd1 <= 115;
	     {1'd0,  8'd116}: s1rd1 <= 116;
	     {1'd0,  8'd117}: s1rd1 <= 117;
	     {1'd0,  8'd118}: s1rd1 <= 118;
	     {1'd0,  8'd119}: s1rd1 <= 119;
	     {1'd0,  8'd120}: s1rd1 <= 120;
	     {1'd0,  8'd121}: s1rd1 <= 121;
	     {1'd0,  8'd122}: s1rd1 <= 122;
	     {1'd0,  8'd123}: s1rd1 <= 123;
	     {1'd0,  8'd124}: s1rd1 <= 124;
	     {1'd0,  8'd125}: s1rd1 <= 125;
	     {1'd0,  8'd126}: s1rd1 <= 126;
	     {1'd0,  8'd127}: s1rd1 <= 127;
	     {1'd0,  8'd128}: s1rd1 <= 128;
	     {1'd0,  8'd129}: s1rd1 <= 129;
	     {1'd0,  8'd130}: s1rd1 <= 130;
	     {1'd0,  8'd131}: s1rd1 <= 131;
	     {1'd0,  8'd132}: s1rd1 <= 132;
	     {1'd0,  8'd133}: s1rd1 <= 133;
	     {1'd0,  8'd134}: s1rd1 <= 134;
	     {1'd0,  8'd135}: s1rd1 <= 135;
	     {1'd0,  8'd136}: s1rd1 <= 136;
	     {1'd0,  8'd137}: s1rd1 <= 137;
	     {1'd0,  8'd138}: s1rd1 <= 138;
	     {1'd0,  8'd139}: s1rd1 <= 139;
	     {1'd0,  8'd140}: s1rd1 <= 140;
	     {1'd0,  8'd141}: s1rd1 <= 141;
	     {1'd0,  8'd142}: s1rd1 <= 142;
	     {1'd0,  8'd143}: s1rd1 <= 143;
	     {1'd0,  8'd144}: s1rd1 <= 144;
	     {1'd0,  8'd145}: s1rd1 <= 145;
	     {1'd0,  8'd146}: s1rd1 <= 146;
	     {1'd0,  8'd147}: s1rd1 <= 147;
	     {1'd0,  8'd148}: s1rd1 <= 148;
	     {1'd0,  8'd149}: s1rd1 <= 149;
	     {1'd0,  8'd150}: s1rd1 <= 150;
	     {1'd0,  8'd151}: s1rd1 <= 151;
	     {1'd0,  8'd152}: s1rd1 <= 152;
	     {1'd0,  8'd153}: s1rd1 <= 153;
	     {1'd0,  8'd154}: s1rd1 <= 154;
	     {1'd0,  8'd155}: s1rd1 <= 155;
	     {1'd0,  8'd156}: s1rd1 <= 156;
	     {1'd0,  8'd157}: s1rd1 <= 157;
	     {1'd0,  8'd158}: s1rd1 <= 158;
	     {1'd0,  8'd159}: s1rd1 <= 159;
	     {1'd0,  8'd160}: s1rd1 <= 160;
	     {1'd0,  8'd161}: s1rd1 <= 161;
	     {1'd0,  8'd162}: s1rd1 <= 162;
	     {1'd0,  8'd163}: s1rd1 <= 163;
	     {1'd0,  8'd164}: s1rd1 <= 164;
	     {1'd0,  8'd165}: s1rd1 <= 165;
	     {1'd0,  8'd166}: s1rd1 <= 166;
	     {1'd0,  8'd167}: s1rd1 <= 167;
	     {1'd0,  8'd168}: s1rd1 <= 168;
	     {1'd0,  8'd169}: s1rd1 <= 169;
	     {1'd0,  8'd170}: s1rd1 <= 170;
	     {1'd0,  8'd171}: s1rd1 <= 171;
	     {1'd0,  8'd172}: s1rd1 <= 172;
	     {1'd0,  8'd173}: s1rd1 <= 173;
	     {1'd0,  8'd174}: s1rd1 <= 174;
	     {1'd0,  8'd175}: s1rd1 <= 175;
	     {1'd0,  8'd176}: s1rd1 <= 176;
	     {1'd0,  8'd177}: s1rd1 <= 177;
	     {1'd0,  8'd178}: s1rd1 <= 178;
	     {1'd0,  8'd179}: s1rd1 <= 179;
	     {1'd0,  8'd180}: s1rd1 <= 180;
	     {1'd0,  8'd181}: s1rd1 <= 181;
	     {1'd0,  8'd182}: s1rd1 <= 182;
	     {1'd0,  8'd183}: s1rd1 <= 183;
	     {1'd0,  8'd184}: s1rd1 <= 184;
	     {1'd0,  8'd185}: s1rd1 <= 185;
	     {1'd0,  8'd186}: s1rd1 <= 186;
	     {1'd0,  8'd187}: s1rd1 <= 187;
	     {1'd0,  8'd188}: s1rd1 <= 188;
	     {1'd0,  8'd189}: s1rd1 <= 189;
	     {1'd0,  8'd190}: s1rd1 <= 190;
	     {1'd0,  8'd191}: s1rd1 <= 191;
	     {1'd0,  8'd192}: s1rd1 <= 192;
	     {1'd0,  8'd193}: s1rd1 <= 193;
	     {1'd0,  8'd194}: s1rd1 <= 194;
	     {1'd0,  8'd195}: s1rd1 <= 195;
	     {1'd0,  8'd196}: s1rd1 <= 196;
	     {1'd0,  8'd197}: s1rd1 <= 197;
	     {1'd0,  8'd198}: s1rd1 <= 198;
	     {1'd0,  8'd199}: s1rd1 <= 199;
	     {1'd0,  8'd200}: s1rd1 <= 200;
	     {1'd0,  8'd201}: s1rd1 <= 201;
	     {1'd0,  8'd202}: s1rd1 <= 202;
	     {1'd0,  8'd203}: s1rd1 <= 203;
	     {1'd0,  8'd204}: s1rd1 <= 204;
	     {1'd0,  8'd205}: s1rd1 <= 205;
	     {1'd0,  8'd206}: s1rd1 <= 206;
	     {1'd0,  8'd207}: s1rd1 <= 207;
	     {1'd0,  8'd208}: s1rd1 <= 208;
	     {1'd0,  8'd209}: s1rd1 <= 209;
	     {1'd0,  8'd210}: s1rd1 <= 210;
	     {1'd0,  8'd211}: s1rd1 <= 211;
	     {1'd0,  8'd212}: s1rd1 <= 212;
	     {1'd0,  8'd213}: s1rd1 <= 213;
	     {1'd0,  8'd214}: s1rd1 <= 214;
	     {1'd0,  8'd215}: s1rd1 <= 215;
	     {1'd0,  8'd216}: s1rd1 <= 216;
	     {1'd0,  8'd217}: s1rd1 <= 217;
	     {1'd0,  8'd218}: s1rd1 <= 218;
	     {1'd0,  8'd219}: s1rd1 <= 219;
	     {1'd0,  8'd220}: s1rd1 <= 220;
	     {1'd0,  8'd221}: s1rd1 <= 221;
	     {1'd0,  8'd222}: s1rd1 <= 222;
	     {1'd0,  8'd223}: s1rd1 <= 223;
	     {1'd0,  8'd224}: s1rd1 <= 224;
	     {1'd0,  8'd225}: s1rd1 <= 225;
	     {1'd0,  8'd226}: s1rd1 <= 226;
	     {1'd0,  8'd227}: s1rd1 <= 227;
	     {1'd0,  8'd228}: s1rd1 <= 228;
	     {1'd0,  8'd229}: s1rd1 <= 229;
	     {1'd0,  8'd230}: s1rd1 <= 230;
	     {1'd0,  8'd231}: s1rd1 <= 231;
	     {1'd0,  8'd232}: s1rd1 <= 232;
	     {1'd0,  8'd233}: s1rd1 <= 233;
	     {1'd0,  8'd234}: s1rd1 <= 234;
	     {1'd0,  8'd235}: s1rd1 <= 235;
	     {1'd0,  8'd236}: s1rd1 <= 236;
	     {1'd0,  8'd237}: s1rd1 <= 237;
	     {1'd0,  8'd238}: s1rd1 <= 238;
	     {1'd0,  8'd239}: s1rd1 <= 239;
	     {1'd0,  8'd240}: s1rd1 <= 240;
	     {1'd0,  8'd241}: s1rd1 <= 241;
	     {1'd0,  8'd242}: s1rd1 <= 242;
	     {1'd0,  8'd243}: s1rd1 <= 243;
	     {1'd0,  8'd244}: s1rd1 <= 244;
	     {1'd0,  8'd245}: s1rd1 <= 245;
	     {1'd0,  8'd246}: s1rd1 <= 246;
	     {1'd0,  8'd247}: s1rd1 <= 247;
	     {1'd0,  8'd248}: s1rd1 <= 248;
	     {1'd0,  8'd249}: s1rd1 <= 249;
	     {1'd0,  8'd250}: s1rd1 <= 250;
	     {1'd0,  8'd251}: s1rd1 <= 251;
	     {1'd0,  8'd252}: s1rd1 <= 252;
	     {1'd0,  8'd253}: s1rd1 <= 253;
	     {1'd0,  8'd254}: s1rd1 <= 254;
	     {1'd0,  8'd255}: s1rd1 <= 255;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet68272 sw(tm36_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm36_dd, writeCycle})
	      {1'd0, 8'd0}: s2wr0 <= 128;
	      {1'd0, 8'd1}: s2wr0 <= 129;
	      {1'd0, 8'd2}: s2wr0 <= 130;
	      {1'd0, 8'd3}: s2wr0 <= 131;
	      {1'd0, 8'd4}: s2wr0 <= 132;
	      {1'd0, 8'd5}: s2wr0 <= 133;
	      {1'd0, 8'd6}: s2wr0 <= 134;
	      {1'd0, 8'd7}: s2wr0 <= 135;
	      {1'd0, 8'd8}: s2wr0 <= 136;
	      {1'd0, 8'd9}: s2wr0 <= 137;
	      {1'd0, 8'd10}: s2wr0 <= 138;
	      {1'd0, 8'd11}: s2wr0 <= 139;
	      {1'd0, 8'd12}: s2wr0 <= 140;
	      {1'd0, 8'd13}: s2wr0 <= 141;
	      {1'd0, 8'd14}: s2wr0 <= 142;
	      {1'd0, 8'd15}: s2wr0 <= 143;
	      {1'd0, 8'd16}: s2wr0 <= 144;
	      {1'd0, 8'd17}: s2wr0 <= 145;
	      {1'd0, 8'd18}: s2wr0 <= 146;
	      {1'd0, 8'd19}: s2wr0 <= 147;
	      {1'd0, 8'd20}: s2wr0 <= 148;
	      {1'd0, 8'd21}: s2wr0 <= 149;
	      {1'd0, 8'd22}: s2wr0 <= 150;
	      {1'd0, 8'd23}: s2wr0 <= 151;
	      {1'd0, 8'd24}: s2wr0 <= 152;
	      {1'd0, 8'd25}: s2wr0 <= 153;
	      {1'd0, 8'd26}: s2wr0 <= 154;
	      {1'd0, 8'd27}: s2wr0 <= 155;
	      {1'd0, 8'd28}: s2wr0 <= 156;
	      {1'd0, 8'd29}: s2wr0 <= 157;
	      {1'd0, 8'd30}: s2wr0 <= 158;
	      {1'd0, 8'd31}: s2wr0 <= 159;
	      {1'd0, 8'd32}: s2wr0 <= 160;
	      {1'd0, 8'd33}: s2wr0 <= 161;
	      {1'd0, 8'd34}: s2wr0 <= 162;
	      {1'd0, 8'd35}: s2wr0 <= 163;
	      {1'd0, 8'd36}: s2wr0 <= 164;
	      {1'd0, 8'd37}: s2wr0 <= 165;
	      {1'd0, 8'd38}: s2wr0 <= 166;
	      {1'd0, 8'd39}: s2wr0 <= 167;
	      {1'd0, 8'd40}: s2wr0 <= 168;
	      {1'd0, 8'd41}: s2wr0 <= 169;
	      {1'd0, 8'd42}: s2wr0 <= 170;
	      {1'd0, 8'd43}: s2wr0 <= 171;
	      {1'd0, 8'd44}: s2wr0 <= 172;
	      {1'd0, 8'd45}: s2wr0 <= 173;
	      {1'd0, 8'd46}: s2wr0 <= 174;
	      {1'd0, 8'd47}: s2wr0 <= 175;
	      {1'd0, 8'd48}: s2wr0 <= 176;
	      {1'd0, 8'd49}: s2wr0 <= 177;
	      {1'd0, 8'd50}: s2wr0 <= 178;
	      {1'd0, 8'd51}: s2wr0 <= 179;
	      {1'd0, 8'd52}: s2wr0 <= 180;
	      {1'd0, 8'd53}: s2wr0 <= 181;
	      {1'd0, 8'd54}: s2wr0 <= 182;
	      {1'd0, 8'd55}: s2wr0 <= 183;
	      {1'd0, 8'd56}: s2wr0 <= 184;
	      {1'd0, 8'd57}: s2wr0 <= 185;
	      {1'd0, 8'd58}: s2wr0 <= 186;
	      {1'd0, 8'd59}: s2wr0 <= 187;
	      {1'd0, 8'd60}: s2wr0 <= 188;
	      {1'd0, 8'd61}: s2wr0 <= 189;
	      {1'd0, 8'd62}: s2wr0 <= 190;
	      {1'd0, 8'd63}: s2wr0 <= 191;
	      {1'd0, 8'd64}: s2wr0 <= 192;
	      {1'd0, 8'd65}: s2wr0 <= 193;
	      {1'd0, 8'd66}: s2wr0 <= 194;
	      {1'd0, 8'd67}: s2wr0 <= 195;
	      {1'd0, 8'd68}: s2wr0 <= 196;
	      {1'd0, 8'd69}: s2wr0 <= 197;
	      {1'd0, 8'd70}: s2wr0 <= 198;
	      {1'd0, 8'd71}: s2wr0 <= 199;
	      {1'd0, 8'd72}: s2wr0 <= 200;
	      {1'd0, 8'd73}: s2wr0 <= 201;
	      {1'd0, 8'd74}: s2wr0 <= 202;
	      {1'd0, 8'd75}: s2wr0 <= 203;
	      {1'd0, 8'd76}: s2wr0 <= 204;
	      {1'd0, 8'd77}: s2wr0 <= 205;
	      {1'd0, 8'd78}: s2wr0 <= 206;
	      {1'd0, 8'd79}: s2wr0 <= 207;
	      {1'd0, 8'd80}: s2wr0 <= 208;
	      {1'd0, 8'd81}: s2wr0 <= 209;
	      {1'd0, 8'd82}: s2wr0 <= 210;
	      {1'd0, 8'd83}: s2wr0 <= 211;
	      {1'd0, 8'd84}: s2wr0 <= 212;
	      {1'd0, 8'd85}: s2wr0 <= 213;
	      {1'd0, 8'd86}: s2wr0 <= 214;
	      {1'd0, 8'd87}: s2wr0 <= 215;
	      {1'd0, 8'd88}: s2wr0 <= 216;
	      {1'd0, 8'd89}: s2wr0 <= 217;
	      {1'd0, 8'd90}: s2wr0 <= 218;
	      {1'd0, 8'd91}: s2wr0 <= 219;
	      {1'd0, 8'd92}: s2wr0 <= 220;
	      {1'd0, 8'd93}: s2wr0 <= 221;
	      {1'd0, 8'd94}: s2wr0 <= 222;
	      {1'd0, 8'd95}: s2wr0 <= 223;
	      {1'd0, 8'd96}: s2wr0 <= 224;
	      {1'd0, 8'd97}: s2wr0 <= 225;
	      {1'd0, 8'd98}: s2wr0 <= 226;
	      {1'd0, 8'd99}: s2wr0 <= 227;
	      {1'd0, 8'd100}: s2wr0 <= 228;
	      {1'd0, 8'd101}: s2wr0 <= 229;
	      {1'd0, 8'd102}: s2wr0 <= 230;
	      {1'd0, 8'd103}: s2wr0 <= 231;
	      {1'd0, 8'd104}: s2wr0 <= 232;
	      {1'd0, 8'd105}: s2wr0 <= 233;
	      {1'd0, 8'd106}: s2wr0 <= 234;
	      {1'd0, 8'd107}: s2wr0 <= 235;
	      {1'd0, 8'd108}: s2wr0 <= 236;
	      {1'd0, 8'd109}: s2wr0 <= 237;
	      {1'd0, 8'd110}: s2wr0 <= 238;
	      {1'd0, 8'd111}: s2wr0 <= 239;
	      {1'd0, 8'd112}: s2wr0 <= 240;
	      {1'd0, 8'd113}: s2wr0 <= 241;
	      {1'd0, 8'd114}: s2wr0 <= 242;
	      {1'd0, 8'd115}: s2wr0 <= 243;
	      {1'd0, 8'd116}: s2wr0 <= 244;
	      {1'd0, 8'd117}: s2wr0 <= 245;
	      {1'd0, 8'd118}: s2wr0 <= 246;
	      {1'd0, 8'd119}: s2wr0 <= 247;
	      {1'd0, 8'd120}: s2wr0 <= 248;
	      {1'd0, 8'd121}: s2wr0 <= 249;
	      {1'd0, 8'd122}: s2wr0 <= 250;
	      {1'd0, 8'd123}: s2wr0 <= 251;
	      {1'd0, 8'd124}: s2wr0 <= 252;
	      {1'd0, 8'd125}: s2wr0 <= 253;
	      {1'd0, 8'd126}: s2wr0 <= 254;
	      {1'd0, 8'd127}: s2wr0 <= 255;
	      {1'd0, 8'd128}: s2wr0 <= 0;
	      {1'd0, 8'd129}: s2wr0 <= 1;
	      {1'd0, 8'd130}: s2wr0 <= 2;
	      {1'd0, 8'd131}: s2wr0 <= 3;
	      {1'd0, 8'd132}: s2wr0 <= 4;
	      {1'd0, 8'd133}: s2wr0 <= 5;
	      {1'd0, 8'd134}: s2wr0 <= 6;
	      {1'd0, 8'd135}: s2wr0 <= 7;
	      {1'd0, 8'd136}: s2wr0 <= 8;
	      {1'd0, 8'd137}: s2wr0 <= 9;
	      {1'd0, 8'd138}: s2wr0 <= 10;
	      {1'd0, 8'd139}: s2wr0 <= 11;
	      {1'd0, 8'd140}: s2wr0 <= 12;
	      {1'd0, 8'd141}: s2wr0 <= 13;
	      {1'd0, 8'd142}: s2wr0 <= 14;
	      {1'd0, 8'd143}: s2wr0 <= 15;
	      {1'd0, 8'd144}: s2wr0 <= 16;
	      {1'd0, 8'd145}: s2wr0 <= 17;
	      {1'd0, 8'd146}: s2wr0 <= 18;
	      {1'd0, 8'd147}: s2wr0 <= 19;
	      {1'd0, 8'd148}: s2wr0 <= 20;
	      {1'd0, 8'd149}: s2wr0 <= 21;
	      {1'd0, 8'd150}: s2wr0 <= 22;
	      {1'd0, 8'd151}: s2wr0 <= 23;
	      {1'd0, 8'd152}: s2wr0 <= 24;
	      {1'd0, 8'd153}: s2wr0 <= 25;
	      {1'd0, 8'd154}: s2wr0 <= 26;
	      {1'd0, 8'd155}: s2wr0 <= 27;
	      {1'd0, 8'd156}: s2wr0 <= 28;
	      {1'd0, 8'd157}: s2wr0 <= 29;
	      {1'd0, 8'd158}: s2wr0 <= 30;
	      {1'd0, 8'd159}: s2wr0 <= 31;
	      {1'd0, 8'd160}: s2wr0 <= 32;
	      {1'd0, 8'd161}: s2wr0 <= 33;
	      {1'd0, 8'd162}: s2wr0 <= 34;
	      {1'd0, 8'd163}: s2wr0 <= 35;
	      {1'd0, 8'd164}: s2wr0 <= 36;
	      {1'd0, 8'd165}: s2wr0 <= 37;
	      {1'd0, 8'd166}: s2wr0 <= 38;
	      {1'd0, 8'd167}: s2wr0 <= 39;
	      {1'd0, 8'd168}: s2wr0 <= 40;
	      {1'd0, 8'd169}: s2wr0 <= 41;
	      {1'd0, 8'd170}: s2wr0 <= 42;
	      {1'd0, 8'd171}: s2wr0 <= 43;
	      {1'd0, 8'd172}: s2wr0 <= 44;
	      {1'd0, 8'd173}: s2wr0 <= 45;
	      {1'd0, 8'd174}: s2wr0 <= 46;
	      {1'd0, 8'd175}: s2wr0 <= 47;
	      {1'd0, 8'd176}: s2wr0 <= 48;
	      {1'd0, 8'd177}: s2wr0 <= 49;
	      {1'd0, 8'd178}: s2wr0 <= 50;
	      {1'd0, 8'd179}: s2wr0 <= 51;
	      {1'd0, 8'd180}: s2wr0 <= 52;
	      {1'd0, 8'd181}: s2wr0 <= 53;
	      {1'd0, 8'd182}: s2wr0 <= 54;
	      {1'd0, 8'd183}: s2wr0 <= 55;
	      {1'd0, 8'd184}: s2wr0 <= 56;
	      {1'd0, 8'd185}: s2wr0 <= 57;
	      {1'd0, 8'd186}: s2wr0 <= 58;
	      {1'd0, 8'd187}: s2wr0 <= 59;
	      {1'd0, 8'd188}: s2wr0 <= 60;
	      {1'd0, 8'd189}: s2wr0 <= 61;
	      {1'd0, 8'd190}: s2wr0 <= 62;
	      {1'd0, 8'd191}: s2wr0 <= 63;
	      {1'd0, 8'd192}: s2wr0 <= 64;
	      {1'd0, 8'd193}: s2wr0 <= 65;
	      {1'd0, 8'd194}: s2wr0 <= 66;
	      {1'd0, 8'd195}: s2wr0 <= 67;
	      {1'd0, 8'd196}: s2wr0 <= 68;
	      {1'd0, 8'd197}: s2wr0 <= 69;
	      {1'd0, 8'd198}: s2wr0 <= 70;
	      {1'd0, 8'd199}: s2wr0 <= 71;
	      {1'd0, 8'd200}: s2wr0 <= 72;
	      {1'd0, 8'd201}: s2wr0 <= 73;
	      {1'd0, 8'd202}: s2wr0 <= 74;
	      {1'd0, 8'd203}: s2wr0 <= 75;
	      {1'd0, 8'd204}: s2wr0 <= 76;
	      {1'd0, 8'd205}: s2wr0 <= 77;
	      {1'd0, 8'd206}: s2wr0 <= 78;
	      {1'd0, 8'd207}: s2wr0 <= 79;
	      {1'd0, 8'd208}: s2wr0 <= 80;
	      {1'd0, 8'd209}: s2wr0 <= 81;
	      {1'd0, 8'd210}: s2wr0 <= 82;
	      {1'd0, 8'd211}: s2wr0 <= 83;
	      {1'd0, 8'd212}: s2wr0 <= 84;
	      {1'd0, 8'd213}: s2wr0 <= 85;
	      {1'd0, 8'd214}: s2wr0 <= 86;
	      {1'd0, 8'd215}: s2wr0 <= 87;
	      {1'd0, 8'd216}: s2wr0 <= 88;
	      {1'd0, 8'd217}: s2wr0 <= 89;
	      {1'd0, 8'd218}: s2wr0 <= 90;
	      {1'd0, 8'd219}: s2wr0 <= 91;
	      {1'd0, 8'd220}: s2wr0 <= 92;
	      {1'd0, 8'd221}: s2wr0 <= 93;
	      {1'd0, 8'd222}: s2wr0 <= 94;
	      {1'd0, 8'd223}: s2wr0 <= 95;
	      {1'd0, 8'd224}: s2wr0 <= 96;
	      {1'd0, 8'd225}: s2wr0 <= 97;
	      {1'd0, 8'd226}: s2wr0 <= 98;
	      {1'd0, 8'd227}: s2wr0 <= 99;
	      {1'd0, 8'd228}: s2wr0 <= 100;
	      {1'd0, 8'd229}: s2wr0 <= 101;
	      {1'd0, 8'd230}: s2wr0 <= 102;
	      {1'd0, 8'd231}: s2wr0 <= 103;
	      {1'd0, 8'd232}: s2wr0 <= 104;
	      {1'd0, 8'd233}: s2wr0 <= 105;
	      {1'd0, 8'd234}: s2wr0 <= 106;
	      {1'd0, 8'd235}: s2wr0 <= 107;
	      {1'd0, 8'd236}: s2wr0 <= 108;
	      {1'd0, 8'd237}: s2wr0 <= 109;
	      {1'd0, 8'd238}: s2wr0 <= 110;
	      {1'd0, 8'd239}: s2wr0 <= 111;
	      {1'd0, 8'd240}: s2wr0 <= 112;
	      {1'd0, 8'd241}: s2wr0 <= 113;
	      {1'd0, 8'd242}: s2wr0 <= 114;
	      {1'd0, 8'd243}: s2wr0 <= 115;
	      {1'd0, 8'd244}: s2wr0 <= 116;
	      {1'd0, 8'd245}: s2wr0 <= 117;
	      {1'd0, 8'd246}: s2wr0 <= 118;
	      {1'd0, 8'd247}: s2wr0 <= 119;
	      {1'd0, 8'd248}: s2wr0 <= 120;
	      {1'd0, 8'd249}: s2wr0 <= 121;
	      {1'd0, 8'd250}: s2wr0 <= 122;
	      {1'd0, 8'd251}: s2wr0 <= 123;
	      {1'd0, 8'd252}: s2wr0 <= 124;
	      {1'd0, 8'd253}: s2wr0 <= 125;
	      {1'd0, 8'd254}: s2wr0 <= 126;
	      {1'd0, 8'd255}: s2wr0 <= 127;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm36_dd, writeCycle})
	      {1'd0, 8'd0}: s2wr1 <= 0;
	      {1'd0, 8'd1}: s2wr1 <= 1;
	      {1'd0, 8'd2}: s2wr1 <= 2;
	      {1'd0, 8'd3}: s2wr1 <= 3;
	      {1'd0, 8'd4}: s2wr1 <= 4;
	      {1'd0, 8'd5}: s2wr1 <= 5;
	      {1'd0, 8'd6}: s2wr1 <= 6;
	      {1'd0, 8'd7}: s2wr1 <= 7;
	      {1'd0, 8'd8}: s2wr1 <= 8;
	      {1'd0, 8'd9}: s2wr1 <= 9;
	      {1'd0, 8'd10}: s2wr1 <= 10;
	      {1'd0, 8'd11}: s2wr1 <= 11;
	      {1'd0, 8'd12}: s2wr1 <= 12;
	      {1'd0, 8'd13}: s2wr1 <= 13;
	      {1'd0, 8'd14}: s2wr1 <= 14;
	      {1'd0, 8'd15}: s2wr1 <= 15;
	      {1'd0, 8'd16}: s2wr1 <= 16;
	      {1'd0, 8'd17}: s2wr1 <= 17;
	      {1'd0, 8'd18}: s2wr1 <= 18;
	      {1'd0, 8'd19}: s2wr1 <= 19;
	      {1'd0, 8'd20}: s2wr1 <= 20;
	      {1'd0, 8'd21}: s2wr1 <= 21;
	      {1'd0, 8'd22}: s2wr1 <= 22;
	      {1'd0, 8'd23}: s2wr1 <= 23;
	      {1'd0, 8'd24}: s2wr1 <= 24;
	      {1'd0, 8'd25}: s2wr1 <= 25;
	      {1'd0, 8'd26}: s2wr1 <= 26;
	      {1'd0, 8'd27}: s2wr1 <= 27;
	      {1'd0, 8'd28}: s2wr1 <= 28;
	      {1'd0, 8'd29}: s2wr1 <= 29;
	      {1'd0, 8'd30}: s2wr1 <= 30;
	      {1'd0, 8'd31}: s2wr1 <= 31;
	      {1'd0, 8'd32}: s2wr1 <= 32;
	      {1'd0, 8'd33}: s2wr1 <= 33;
	      {1'd0, 8'd34}: s2wr1 <= 34;
	      {1'd0, 8'd35}: s2wr1 <= 35;
	      {1'd0, 8'd36}: s2wr1 <= 36;
	      {1'd0, 8'd37}: s2wr1 <= 37;
	      {1'd0, 8'd38}: s2wr1 <= 38;
	      {1'd0, 8'd39}: s2wr1 <= 39;
	      {1'd0, 8'd40}: s2wr1 <= 40;
	      {1'd0, 8'd41}: s2wr1 <= 41;
	      {1'd0, 8'd42}: s2wr1 <= 42;
	      {1'd0, 8'd43}: s2wr1 <= 43;
	      {1'd0, 8'd44}: s2wr1 <= 44;
	      {1'd0, 8'd45}: s2wr1 <= 45;
	      {1'd0, 8'd46}: s2wr1 <= 46;
	      {1'd0, 8'd47}: s2wr1 <= 47;
	      {1'd0, 8'd48}: s2wr1 <= 48;
	      {1'd0, 8'd49}: s2wr1 <= 49;
	      {1'd0, 8'd50}: s2wr1 <= 50;
	      {1'd0, 8'd51}: s2wr1 <= 51;
	      {1'd0, 8'd52}: s2wr1 <= 52;
	      {1'd0, 8'd53}: s2wr1 <= 53;
	      {1'd0, 8'd54}: s2wr1 <= 54;
	      {1'd0, 8'd55}: s2wr1 <= 55;
	      {1'd0, 8'd56}: s2wr1 <= 56;
	      {1'd0, 8'd57}: s2wr1 <= 57;
	      {1'd0, 8'd58}: s2wr1 <= 58;
	      {1'd0, 8'd59}: s2wr1 <= 59;
	      {1'd0, 8'd60}: s2wr1 <= 60;
	      {1'd0, 8'd61}: s2wr1 <= 61;
	      {1'd0, 8'd62}: s2wr1 <= 62;
	      {1'd0, 8'd63}: s2wr1 <= 63;
	      {1'd0, 8'd64}: s2wr1 <= 64;
	      {1'd0, 8'd65}: s2wr1 <= 65;
	      {1'd0, 8'd66}: s2wr1 <= 66;
	      {1'd0, 8'd67}: s2wr1 <= 67;
	      {1'd0, 8'd68}: s2wr1 <= 68;
	      {1'd0, 8'd69}: s2wr1 <= 69;
	      {1'd0, 8'd70}: s2wr1 <= 70;
	      {1'd0, 8'd71}: s2wr1 <= 71;
	      {1'd0, 8'd72}: s2wr1 <= 72;
	      {1'd0, 8'd73}: s2wr1 <= 73;
	      {1'd0, 8'd74}: s2wr1 <= 74;
	      {1'd0, 8'd75}: s2wr1 <= 75;
	      {1'd0, 8'd76}: s2wr1 <= 76;
	      {1'd0, 8'd77}: s2wr1 <= 77;
	      {1'd0, 8'd78}: s2wr1 <= 78;
	      {1'd0, 8'd79}: s2wr1 <= 79;
	      {1'd0, 8'd80}: s2wr1 <= 80;
	      {1'd0, 8'd81}: s2wr1 <= 81;
	      {1'd0, 8'd82}: s2wr1 <= 82;
	      {1'd0, 8'd83}: s2wr1 <= 83;
	      {1'd0, 8'd84}: s2wr1 <= 84;
	      {1'd0, 8'd85}: s2wr1 <= 85;
	      {1'd0, 8'd86}: s2wr1 <= 86;
	      {1'd0, 8'd87}: s2wr1 <= 87;
	      {1'd0, 8'd88}: s2wr1 <= 88;
	      {1'd0, 8'd89}: s2wr1 <= 89;
	      {1'd0, 8'd90}: s2wr1 <= 90;
	      {1'd0, 8'd91}: s2wr1 <= 91;
	      {1'd0, 8'd92}: s2wr1 <= 92;
	      {1'd0, 8'd93}: s2wr1 <= 93;
	      {1'd0, 8'd94}: s2wr1 <= 94;
	      {1'd0, 8'd95}: s2wr1 <= 95;
	      {1'd0, 8'd96}: s2wr1 <= 96;
	      {1'd0, 8'd97}: s2wr1 <= 97;
	      {1'd0, 8'd98}: s2wr1 <= 98;
	      {1'd0, 8'd99}: s2wr1 <= 99;
	      {1'd0, 8'd100}: s2wr1 <= 100;
	      {1'd0, 8'd101}: s2wr1 <= 101;
	      {1'd0, 8'd102}: s2wr1 <= 102;
	      {1'd0, 8'd103}: s2wr1 <= 103;
	      {1'd0, 8'd104}: s2wr1 <= 104;
	      {1'd0, 8'd105}: s2wr1 <= 105;
	      {1'd0, 8'd106}: s2wr1 <= 106;
	      {1'd0, 8'd107}: s2wr1 <= 107;
	      {1'd0, 8'd108}: s2wr1 <= 108;
	      {1'd0, 8'd109}: s2wr1 <= 109;
	      {1'd0, 8'd110}: s2wr1 <= 110;
	      {1'd0, 8'd111}: s2wr1 <= 111;
	      {1'd0, 8'd112}: s2wr1 <= 112;
	      {1'd0, 8'd113}: s2wr1 <= 113;
	      {1'd0, 8'd114}: s2wr1 <= 114;
	      {1'd0, 8'd115}: s2wr1 <= 115;
	      {1'd0, 8'd116}: s2wr1 <= 116;
	      {1'd0, 8'd117}: s2wr1 <= 117;
	      {1'd0, 8'd118}: s2wr1 <= 118;
	      {1'd0, 8'd119}: s2wr1 <= 119;
	      {1'd0, 8'd120}: s2wr1 <= 120;
	      {1'd0, 8'd121}: s2wr1 <= 121;
	      {1'd0, 8'd122}: s2wr1 <= 122;
	      {1'd0, 8'd123}: s2wr1 <= 123;
	      {1'd0, 8'd124}: s2wr1 <= 124;
	      {1'd0, 8'd125}: s2wr1 <= 125;
	      {1'd0, 8'd126}: s2wr1 <= 126;
	      {1'd0, 8'd127}: s2wr1 <= 127;
	      {1'd0, 8'd128}: s2wr1 <= 128;
	      {1'd0, 8'd129}: s2wr1 <= 129;
	      {1'd0, 8'd130}: s2wr1 <= 130;
	      {1'd0, 8'd131}: s2wr1 <= 131;
	      {1'd0, 8'd132}: s2wr1 <= 132;
	      {1'd0, 8'd133}: s2wr1 <= 133;
	      {1'd0, 8'd134}: s2wr1 <= 134;
	      {1'd0, 8'd135}: s2wr1 <= 135;
	      {1'd0, 8'd136}: s2wr1 <= 136;
	      {1'd0, 8'd137}: s2wr1 <= 137;
	      {1'd0, 8'd138}: s2wr1 <= 138;
	      {1'd0, 8'd139}: s2wr1 <= 139;
	      {1'd0, 8'd140}: s2wr1 <= 140;
	      {1'd0, 8'd141}: s2wr1 <= 141;
	      {1'd0, 8'd142}: s2wr1 <= 142;
	      {1'd0, 8'd143}: s2wr1 <= 143;
	      {1'd0, 8'd144}: s2wr1 <= 144;
	      {1'd0, 8'd145}: s2wr1 <= 145;
	      {1'd0, 8'd146}: s2wr1 <= 146;
	      {1'd0, 8'd147}: s2wr1 <= 147;
	      {1'd0, 8'd148}: s2wr1 <= 148;
	      {1'd0, 8'd149}: s2wr1 <= 149;
	      {1'd0, 8'd150}: s2wr1 <= 150;
	      {1'd0, 8'd151}: s2wr1 <= 151;
	      {1'd0, 8'd152}: s2wr1 <= 152;
	      {1'd0, 8'd153}: s2wr1 <= 153;
	      {1'd0, 8'd154}: s2wr1 <= 154;
	      {1'd0, 8'd155}: s2wr1 <= 155;
	      {1'd0, 8'd156}: s2wr1 <= 156;
	      {1'd0, 8'd157}: s2wr1 <= 157;
	      {1'd0, 8'd158}: s2wr1 <= 158;
	      {1'd0, 8'd159}: s2wr1 <= 159;
	      {1'd0, 8'd160}: s2wr1 <= 160;
	      {1'd0, 8'd161}: s2wr1 <= 161;
	      {1'd0, 8'd162}: s2wr1 <= 162;
	      {1'd0, 8'd163}: s2wr1 <= 163;
	      {1'd0, 8'd164}: s2wr1 <= 164;
	      {1'd0, 8'd165}: s2wr1 <= 165;
	      {1'd0, 8'd166}: s2wr1 <= 166;
	      {1'd0, 8'd167}: s2wr1 <= 167;
	      {1'd0, 8'd168}: s2wr1 <= 168;
	      {1'd0, 8'd169}: s2wr1 <= 169;
	      {1'd0, 8'd170}: s2wr1 <= 170;
	      {1'd0, 8'd171}: s2wr1 <= 171;
	      {1'd0, 8'd172}: s2wr1 <= 172;
	      {1'd0, 8'd173}: s2wr1 <= 173;
	      {1'd0, 8'd174}: s2wr1 <= 174;
	      {1'd0, 8'd175}: s2wr1 <= 175;
	      {1'd0, 8'd176}: s2wr1 <= 176;
	      {1'd0, 8'd177}: s2wr1 <= 177;
	      {1'd0, 8'd178}: s2wr1 <= 178;
	      {1'd0, 8'd179}: s2wr1 <= 179;
	      {1'd0, 8'd180}: s2wr1 <= 180;
	      {1'd0, 8'd181}: s2wr1 <= 181;
	      {1'd0, 8'd182}: s2wr1 <= 182;
	      {1'd0, 8'd183}: s2wr1 <= 183;
	      {1'd0, 8'd184}: s2wr1 <= 184;
	      {1'd0, 8'd185}: s2wr1 <= 185;
	      {1'd0, 8'd186}: s2wr1 <= 186;
	      {1'd0, 8'd187}: s2wr1 <= 187;
	      {1'd0, 8'd188}: s2wr1 <= 188;
	      {1'd0, 8'd189}: s2wr1 <= 189;
	      {1'd0, 8'd190}: s2wr1 <= 190;
	      {1'd0, 8'd191}: s2wr1 <= 191;
	      {1'd0, 8'd192}: s2wr1 <= 192;
	      {1'd0, 8'd193}: s2wr1 <= 193;
	      {1'd0, 8'd194}: s2wr1 <= 194;
	      {1'd0, 8'd195}: s2wr1 <= 195;
	      {1'd0, 8'd196}: s2wr1 <= 196;
	      {1'd0, 8'd197}: s2wr1 <= 197;
	      {1'd0, 8'd198}: s2wr1 <= 198;
	      {1'd0, 8'd199}: s2wr1 <= 199;
	      {1'd0, 8'd200}: s2wr1 <= 200;
	      {1'd0, 8'd201}: s2wr1 <= 201;
	      {1'd0, 8'd202}: s2wr1 <= 202;
	      {1'd0, 8'd203}: s2wr1 <= 203;
	      {1'd0, 8'd204}: s2wr1 <= 204;
	      {1'd0, 8'd205}: s2wr1 <= 205;
	      {1'd0, 8'd206}: s2wr1 <= 206;
	      {1'd0, 8'd207}: s2wr1 <= 207;
	      {1'd0, 8'd208}: s2wr1 <= 208;
	      {1'd0, 8'd209}: s2wr1 <= 209;
	      {1'd0, 8'd210}: s2wr1 <= 210;
	      {1'd0, 8'd211}: s2wr1 <= 211;
	      {1'd0, 8'd212}: s2wr1 <= 212;
	      {1'd0, 8'd213}: s2wr1 <= 213;
	      {1'd0, 8'd214}: s2wr1 <= 214;
	      {1'd0, 8'd215}: s2wr1 <= 215;
	      {1'd0, 8'd216}: s2wr1 <= 216;
	      {1'd0, 8'd217}: s2wr1 <= 217;
	      {1'd0, 8'd218}: s2wr1 <= 218;
	      {1'd0, 8'd219}: s2wr1 <= 219;
	      {1'd0, 8'd220}: s2wr1 <= 220;
	      {1'd0, 8'd221}: s2wr1 <= 221;
	      {1'd0, 8'd222}: s2wr1 <= 222;
	      {1'd0, 8'd223}: s2wr1 <= 223;
	      {1'd0, 8'd224}: s2wr1 <= 224;
	      {1'd0, 8'd225}: s2wr1 <= 225;
	      {1'd0, 8'd226}: s2wr1 <= 226;
	      {1'd0, 8'd227}: s2wr1 <= 227;
	      {1'd0, 8'd228}: s2wr1 <= 228;
	      {1'd0, 8'd229}: s2wr1 <= 229;
	      {1'd0, 8'd230}: s2wr1 <= 230;
	      {1'd0, 8'd231}: s2wr1 <= 231;
	      {1'd0, 8'd232}: s2wr1 <= 232;
	      {1'd0, 8'd233}: s2wr1 <= 233;
	      {1'd0, 8'd234}: s2wr1 <= 234;
	      {1'd0, 8'd235}: s2wr1 <= 235;
	      {1'd0, 8'd236}: s2wr1 <= 236;
	      {1'd0, 8'd237}: s2wr1 <= 237;
	      {1'd0, 8'd238}: s2wr1 <= 238;
	      {1'd0, 8'd239}: s2wr1 <= 239;
	      {1'd0, 8'd240}: s2wr1 <= 240;
	      {1'd0, 8'd241}: s2wr1 <= 241;
	      {1'd0, 8'd242}: s2wr1 <= 242;
	      {1'd0, 8'd243}: s2wr1 <= 243;
	      {1'd0, 8'd244}: s2wr1 <= 244;
	      {1'd0, 8'd245}: s2wr1 <= 245;
	      {1'd0, 8'd246}: s2wr1 <= 246;
	      {1'd0, 8'd247}: s2wr1 <= 247;
	      {1'd0, 8'd248}: s2wr1 <= 248;
	      {1'd0, 8'd249}: s2wr1 <= 249;
	      {1'd0, 8'd250}: s2wr1 <= 250;
	      {1'd0, 8'd251}: s2wr1 <= 251;
	      {1'd0, 8'd252}: s2wr1 <= 252;
	      {1'd0, 8'd253}: s2wr1 <= 253;
	      {1'd0, 8'd254}: s2wr1 <= 254;
	      {1'd0, 8'd255}: s2wr1 <= 255;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 256
module DirSum_69471(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [7:0] i2;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i2 <= 0;
      end
      else begin
         if (next == 1)
            i2 <= 0;
         else if (i2 == 255)
            i2 <= 0;
         else
            i2 <= i2 + 1;
      end
   end

   codeBlock68277 codeBlockIsnt74064(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i2_in(i2),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D8_68695(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [7:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'hff37;
      2: out3 <= 16'hfe6e;
      3: out3 <= 16'hfda5;
      4: out3 <= 16'hfcdc;
      5: out3 <= 16'hfc13;
      6: out3 <= 16'hfb4b;
      7: out3 <= 16'hfa82;
      8: out3 <= 16'hf9ba;
      9: out3 <= 16'hf8f2;
      10: out3 <= 16'hf82a;
      11: out3 <= 16'hf763;
      12: out3 <= 16'hf69c;
      13: out3 <= 16'hf5d5;
      14: out3 <= 16'hf50f;
      15: out3 <= 16'hf449;
      16: out3 <= 16'hf384;
      17: out3 <= 16'hf2bf;
      18: out3 <= 16'hf1fa;
      19: out3 <= 16'hf136;
      20: out3 <= 16'hf073;
      21: out3 <= 16'hefb0;
      22: out3 <= 16'heeee;
      23: out3 <= 16'hee2d;
      24: out3 <= 16'hed6c;
      25: out3 <= 16'hecac;
      26: out3 <= 16'hebed;
      27: out3 <= 16'heb2e;
      28: out3 <= 16'hea70;
      29: out3 <= 16'he9b4;
      30: out3 <= 16'he8f7;
      31: out3 <= 16'he83c;
      32: out3 <= 16'he782;
      33: out3 <= 16'he6c9;
      34: out3 <= 16'he611;
      35: out3 <= 16'he559;
      36: out3 <= 16'he4a3;
      37: out3 <= 16'he3ee;
      38: out3 <= 16'he33a;
      39: out3 <= 16'he287;
      40: out3 <= 16'he1d5;
      41: out3 <= 16'he124;
      42: out3 <= 16'he074;
      43: out3 <= 16'hdfc6;
      44: out3 <= 16'hdf19;
      45: out3 <= 16'hde6d;
      46: out3 <= 16'hddc3;
      47: out3 <= 16'hdd19;
      48: out3 <= 16'hdc72;
      49: out3 <= 16'hdbcb;
      50: out3 <= 16'hdb26;
      51: out3 <= 16'hda82;
      52: out3 <= 16'hd9e0;
      53: out3 <= 16'hd93f;
      54: out3 <= 16'hd8a0;
      55: out3 <= 16'hd802;
      56: out3 <= 16'hd766;
      57: out3 <= 16'hd6cb;
      58: out3 <= 16'hd632;
      59: out3 <= 16'hd59b;
      60: out3 <= 16'hd505;
      61: out3 <= 16'hd471;
      62: out3 <= 16'hd3df;
      63: out3 <= 16'hd34e;
      64: out3 <= 16'hd2bf;
      65: out3 <= 16'hd231;
      66: out3 <= 16'hd1a6;
      67: out3 <= 16'hd11c;
      68: out3 <= 16'hd094;
      69: out3 <= 16'hd00e;
      70: out3 <= 16'hcf8a;
      71: out3 <= 16'hcf07;
      72: out3 <= 16'hce87;
      73: out3 <= 16'hce08;
      74: out3 <= 16'hcd8c;
      75: out3 <= 16'hcd11;
      76: out3 <= 16'hcc98;
      77: out3 <= 16'hcc21;
      78: out3 <= 16'hcbad;
      79: out3 <= 16'hcb3a;
      80: out3 <= 16'hcac9;
      81: out3 <= 16'hca5b;
      82: out3 <= 16'hc9ee;
      83: out3 <= 16'hc983;
      84: out3 <= 16'hc91b;
      85: out3 <= 16'hc8b5;
      86: out3 <= 16'hc850;
      87: out3 <= 16'hc7ee;
      88: out3 <= 16'hc78f;
      89: out3 <= 16'hc731;
      90: out3 <= 16'hc6d5;
      91: out3 <= 16'hc67c;
      92: out3 <= 16'hc625;
      93: out3 <= 16'hc5d0;
      94: out3 <= 16'hc57e;
      95: out3 <= 16'hc52d;
      96: out3 <= 16'hc4df;
      97: out3 <= 16'hc493;
      98: out3 <= 16'hc44a;
      99: out3 <= 16'hc403;
      100: out3 <= 16'hc3be;
      101: out3 <= 16'hc37b;
      102: out3 <= 16'hc33b;
      103: out3 <= 16'hc2fd;
      104: out3 <= 16'hc2c1;
      105: out3 <= 16'hc288;
      106: out3 <= 16'hc251;
      107: out3 <= 16'hc21d;
      108: out3 <= 16'hc1eb;
      109: out3 <= 16'hc1bb;
      110: out3 <= 16'hc18e;
      111: out3 <= 16'hc163;
      112: out3 <= 16'hc13b;
      113: out3 <= 16'hc115;
      114: out3 <= 16'hc0f1;
      115: out3 <= 16'hc0d0;
      116: out3 <= 16'hc0b1;
      117: out3 <= 16'hc095;
      118: out3 <= 16'hc07b;
      119: out3 <= 16'hc064;
      120: out3 <= 16'hc04f;
      121: out3 <= 16'hc03c;
      122: out3 <= 16'hc02c;
      123: out3 <= 16'hc01f;
      124: out3 <= 16'hc014;
      125: out3 <= 16'hc00b;
      126: out3 <= 16'hc005;
      127: out3 <= 16'hc001;
      128: out3 <= 16'hc000;
      129: out3 <= 16'hc001;
      130: out3 <= 16'hc005;
      131: out3 <= 16'hc00b;
      132: out3 <= 16'hc014;
      133: out3 <= 16'hc01f;
      134: out3 <= 16'hc02c;
      135: out3 <= 16'hc03c;
      136: out3 <= 16'hc04f;
      137: out3 <= 16'hc064;
      138: out3 <= 16'hc07b;
      139: out3 <= 16'hc095;
      140: out3 <= 16'hc0b1;
      141: out3 <= 16'hc0d0;
      142: out3 <= 16'hc0f1;
      143: out3 <= 16'hc115;
      144: out3 <= 16'hc13b;
      145: out3 <= 16'hc163;
      146: out3 <= 16'hc18e;
      147: out3 <= 16'hc1bb;
      148: out3 <= 16'hc1eb;
      149: out3 <= 16'hc21d;
      150: out3 <= 16'hc251;
      151: out3 <= 16'hc288;
      152: out3 <= 16'hc2c1;
      153: out3 <= 16'hc2fd;
      154: out3 <= 16'hc33b;
      155: out3 <= 16'hc37b;
      156: out3 <= 16'hc3be;
      157: out3 <= 16'hc403;
      158: out3 <= 16'hc44a;
      159: out3 <= 16'hc493;
      160: out3 <= 16'hc4df;
      161: out3 <= 16'hc52d;
      162: out3 <= 16'hc57e;
      163: out3 <= 16'hc5d0;
      164: out3 <= 16'hc625;
      165: out3 <= 16'hc67c;
      166: out3 <= 16'hc6d5;
      167: out3 <= 16'hc731;
      168: out3 <= 16'hc78f;
      169: out3 <= 16'hc7ee;
      170: out3 <= 16'hc850;
      171: out3 <= 16'hc8b5;
      172: out3 <= 16'hc91b;
      173: out3 <= 16'hc983;
      174: out3 <= 16'hc9ee;
      175: out3 <= 16'hca5b;
      176: out3 <= 16'hcac9;
      177: out3 <= 16'hcb3a;
      178: out3 <= 16'hcbad;
      179: out3 <= 16'hcc21;
      180: out3 <= 16'hcc98;
      181: out3 <= 16'hcd11;
      182: out3 <= 16'hcd8c;
      183: out3 <= 16'hce08;
      184: out3 <= 16'hce87;
      185: out3 <= 16'hcf07;
      186: out3 <= 16'hcf8a;
      187: out3 <= 16'hd00e;
      188: out3 <= 16'hd094;
      189: out3 <= 16'hd11c;
      190: out3 <= 16'hd1a6;
      191: out3 <= 16'hd231;
      192: out3 <= 16'hd2bf;
      193: out3 <= 16'hd34e;
      194: out3 <= 16'hd3df;
      195: out3 <= 16'hd471;
      196: out3 <= 16'hd505;
      197: out3 <= 16'hd59b;
      198: out3 <= 16'hd632;
      199: out3 <= 16'hd6cb;
      200: out3 <= 16'hd766;
      201: out3 <= 16'hd802;
      202: out3 <= 16'hd8a0;
      203: out3 <= 16'hd93f;
      204: out3 <= 16'hd9e0;
      205: out3 <= 16'hda82;
      206: out3 <= 16'hdb26;
      207: out3 <= 16'hdbcb;
      208: out3 <= 16'hdc72;
      209: out3 <= 16'hdd19;
      210: out3 <= 16'hddc3;
      211: out3 <= 16'hde6d;
      212: out3 <= 16'hdf19;
      213: out3 <= 16'hdfc6;
      214: out3 <= 16'he074;
      215: out3 <= 16'he124;
      216: out3 <= 16'he1d5;
      217: out3 <= 16'he287;
      218: out3 <= 16'he33a;
      219: out3 <= 16'he3ee;
      220: out3 <= 16'he4a3;
      221: out3 <= 16'he559;
      222: out3 <= 16'he611;
      223: out3 <= 16'he6c9;
      224: out3 <= 16'he782;
      225: out3 <= 16'he83c;
      226: out3 <= 16'he8f7;
      227: out3 <= 16'he9b4;
      228: out3 <= 16'hea70;
      229: out3 <= 16'heb2e;
      230: out3 <= 16'hebed;
      231: out3 <= 16'hecac;
      232: out3 <= 16'hed6c;
      233: out3 <= 16'hee2d;
      234: out3 <= 16'heeee;
      235: out3 <= 16'hefb0;
      236: out3 <= 16'hf073;
      237: out3 <= 16'hf136;
      238: out3 <= 16'hf1fa;
      239: out3 <= 16'hf2bf;
      240: out3 <= 16'hf384;
      241: out3 <= 16'hf449;
      242: out3 <= 16'hf50f;
      243: out3 <= 16'hf5d5;
      244: out3 <= 16'hf69c;
      245: out3 <= 16'hf763;
      246: out3 <= 16'hf82a;
      247: out3 <= 16'hf8f2;
      248: out3 <= 16'hf9ba;
      249: out3 <= 16'hfa82;
      250: out3 <= 16'hfb4b;
      251: out3 <= 16'hfc13;
      252: out3 <= 16'hfcdc;
      253: out3 <= 16'hfda5;
      254: out3 <= 16'hfe6e;
      255: out3 <= 16'hff37;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D6_69469(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [7:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h3fff;
      2: out3 <= 16'h3ffb;
      3: out3 <= 16'h3ff5;
      4: out3 <= 16'h3fec;
      5: out3 <= 16'h3fe1;
      6: out3 <= 16'h3fd4;
      7: out3 <= 16'h3fc4;
      8: out3 <= 16'h3fb1;
      9: out3 <= 16'h3f9c;
      10: out3 <= 16'h3f85;
      11: out3 <= 16'h3f6b;
      12: out3 <= 16'h3f4f;
      13: out3 <= 16'h3f30;
      14: out3 <= 16'h3f0f;
      15: out3 <= 16'h3eeb;
      16: out3 <= 16'h3ec5;
      17: out3 <= 16'h3e9d;
      18: out3 <= 16'h3e72;
      19: out3 <= 16'h3e45;
      20: out3 <= 16'h3e15;
      21: out3 <= 16'h3de3;
      22: out3 <= 16'h3daf;
      23: out3 <= 16'h3d78;
      24: out3 <= 16'h3d3f;
      25: out3 <= 16'h3d03;
      26: out3 <= 16'h3cc5;
      27: out3 <= 16'h3c85;
      28: out3 <= 16'h3c42;
      29: out3 <= 16'h3bfd;
      30: out3 <= 16'h3bb6;
      31: out3 <= 16'h3b6d;
      32: out3 <= 16'h3b21;
      33: out3 <= 16'h3ad3;
      34: out3 <= 16'h3a82;
      35: out3 <= 16'h3a30;
      36: out3 <= 16'h39db;
      37: out3 <= 16'h3984;
      38: out3 <= 16'h392b;
      39: out3 <= 16'h38cf;
      40: out3 <= 16'h3871;
      41: out3 <= 16'h3812;
      42: out3 <= 16'h37b0;
      43: out3 <= 16'h374b;
      44: out3 <= 16'h36e5;
      45: out3 <= 16'h367d;
      46: out3 <= 16'h3612;
      47: out3 <= 16'h35a5;
      48: out3 <= 16'h3537;
      49: out3 <= 16'h34c6;
      50: out3 <= 16'h3453;
      51: out3 <= 16'h33df;
      52: out3 <= 16'h3368;
      53: out3 <= 16'h32ef;
      54: out3 <= 16'h3274;
      55: out3 <= 16'h31f8;
      56: out3 <= 16'h3179;
      57: out3 <= 16'h30f9;
      58: out3 <= 16'h3076;
      59: out3 <= 16'h2ff2;
      60: out3 <= 16'h2f6c;
      61: out3 <= 16'h2ee4;
      62: out3 <= 16'h2e5a;
      63: out3 <= 16'h2dcf;
      64: out3 <= 16'h2d41;
      65: out3 <= 16'h2cb2;
      66: out3 <= 16'h2c21;
      67: out3 <= 16'h2b8f;
      68: out3 <= 16'h2afb;
      69: out3 <= 16'h2a65;
      70: out3 <= 16'h29ce;
      71: out3 <= 16'h2935;
      72: out3 <= 16'h289a;
      73: out3 <= 16'h27fe;
      74: out3 <= 16'h2760;
      75: out3 <= 16'h26c1;
      76: out3 <= 16'h2620;
      77: out3 <= 16'h257e;
      78: out3 <= 16'h24da;
      79: out3 <= 16'h2435;
      80: out3 <= 16'h238e;
      81: out3 <= 16'h22e7;
      82: out3 <= 16'h223d;
      83: out3 <= 16'h2193;
      84: out3 <= 16'h20e7;
      85: out3 <= 16'h203a;
      86: out3 <= 16'h1f8c;
      87: out3 <= 16'h1edc;
      88: out3 <= 16'h1e2b;
      89: out3 <= 16'h1d79;
      90: out3 <= 16'h1cc6;
      91: out3 <= 16'h1c12;
      92: out3 <= 16'h1b5d;
      93: out3 <= 16'h1aa7;
      94: out3 <= 16'h19ef;
      95: out3 <= 16'h1937;
      96: out3 <= 16'h187e;
      97: out3 <= 16'h17c4;
      98: out3 <= 16'h1709;
      99: out3 <= 16'h164c;
      100: out3 <= 16'h1590;
      101: out3 <= 16'h14d2;
      102: out3 <= 16'h1413;
      103: out3 <= 16'h1354;
      104: out3 <= 16'h1294;
      105: out3 <= 16'h11d3;
      106: out3 <= 16'h1112;
      107: out3 <= 16'h1050;
      108: out3 <= 16'hf8d;
      109: out3 <= 16'heca;
      110: out3 <= 16'he06;
      111: out3 <= 16'hd41;
      112: out3 <= 16'hc7c;
      113: out3 <= 16'hbb7;
      114: out3 <= 16'haf1;
      115: out3 <= 16'ha2b;
      116: out3 <= 16'h964;
      117: out3 <= 16'h89d;
      118: out3 <= 16'h7d6;
      119: out3 <= 16'h70e;
      120: out3 <= 16'h646;
      121: out3 <= 16'h57e;
      122: out3 <= 16'h4b5;
      123: out3 <= 16'h3ed;
      124: out3 <= 16'h324;
      125: out3 <= 16'h25b;
      126: out3 <= 16'h192;
      127: out3 <= 16'hc9;
      128: out3 <= 16'h0;
      129: out3 <= 16'hff37;
      130: out3 <= 16'hfe6e;
      131: out3 <= 16'hfda5;
      132: out3 <= 16'hfcdc;
      133: out3 <= 16'hfc13;
      134: out3 <= 16'hfb4b;
      135: out3 <= 16'hfa82;
      136: out3 <= 16'hf9ba;
      137: out3 <= 16'hf8f2;
      138: out3 <= 16'hf82a;
      139: out3 <= 16'hf763;
      140: out3 <= 16'hf69c;
      141: out3 <= 16'hf5d5;
      142: out3 <= 16'hf50f;
      143: out3 <= 16'hf449;
      144: out3 <= 16'hf384;
      145: out3 <= 16'hf2bf;
      146: out3 <= 16'hf1fa;
      147: out3 <= 16'hf136;
      148: out3 <= 16'hf073;
      149: out3 <= 16'hefb0;
      150: out3 <= 16'heeee;
      151: out3 <= 16'hee2d;
      152: out3 <= 16'hed6c;
      153: out3 <= 16'hecac;
      154: out3 <= 16'hebed;
      155: out3 <= 16'heb2e;
      156: out3 <= 16'hea70;
      157: out3 <= 16'he9b4;
      158: out3 <= 16'he8f7;
      159: out3 <= 16'he83c;
      160: out3 <= 16'he782;
      161: out3 <= 16'he6c9;
      162: out3 <= 16'he611;
      163: out3 <= 16'he559;
      164: out3 <= 16'he4a3;
      165: out3 <= 16'he3ee;
      166: out3 <= 16'he33a;
      167: out3 <= 16'he287;
      168: out3 <= 16'he1d5;
      169: out3 <= 16'he124;
      170: out3 <= 16'he074;
      171: out3 <= 16'hdfc6;
      172: out3 <= 16'hdf19;
      173: out3 <= 16'hde6d;
      174: out3 <= 16'hddc3;
      175: out3 <= 16'hdd19;
      176: out3 <= 16'hdc72;
      177: out3 <= 16'hdbcb;
      178: out3 <= 16'hdb26;
      179: out3 <= 16'hda82;
      180: out3 <= 16'hd9e0;
      181: out3 <= 16'hd93f;
      182: out3 <= 16'hd8a0;
      183: out3 <= 16'hd802;
      184: out3 <= 16'hd766;
      185: out3 <= 16'hd6cb;
      186: out3 <= 16'hd632;
      187: out3 <= 16'hd59b;
      188: out3 <= 16'hd505;
      189: out3 <= 16'hd471;
      190: out3 <= 16'hd3df;
      191: out3 <= 16'hd34e;
      192: out3 <= 16'hd2bf;
      193: out3 <= 16'hd231;
      194: out3 <= 16'hd1a6;
      195: out3 <= 16'hd11c;
      196: out3 <= 16'hd094;
      197: out3 <= 16'hd00e;
      198: out3 <= 16'hcf8a;
      199: out3 <= 16'hcf07;
      200: out3 <= 16'hce87;
      201: out3 <= 16'hce08;
      202: out3 <= 16'hcd8c;
      203: out3 <= 16'hcd11;
      204: out3 <= 16'hcc98;
      205: out3 <= 16'hcc21;
      206: out3 <= 16'hcbad;
      207: out3 <= 16'hcb3a;
      208: out3 <= 16'hcac9;
      209: out3 <= 16'hca5b;
      210: out3 <= 16'hc9ee;
      211: out3 <= 16'hc983;
      212: out3 <= 16'hc91b;
      213: out3 <= 16'hc8b5;
      214: out3 <= 16'hc850;
      215: out3 <= 16'hc7ee;
      216: out3 <= 16'hc78f;
      217: out3 <= 16'hc731;
      218: out3 <= 16'hc6d5;
      219: out3 <= 16'hc67c;
      220: out3 <= 16'hc625;
      221: out3 <= 16'hc5d0;
      222: out3 <= 16'hc57e;
      223: out3 <= 16'hc52d;
      224: out3 <= 16'hc4df;
      225: out3 <= 16'hc493;
      226: out3 <= 16'hc44a;
      227: out3 <= 16'hc403;
      228: out3 <= 16'hc3be;
      229: out3 <= 16'hc37b;
      230: out3 <= 16'hc33b;
      231: out3 <= 16'hc2fd;
      232: out3 <= 16'hc2c1;
      233: out3 <= 16'hc288;
      234: out3 <= 16'hc251;
      235: out3 <= 16'hc21d;
      236: out3 <= 16'hc1eb;
      237: out3 <= 16'hc1bb;
      238: out3 <= 16'hc18e;
      239: out3 <= 16'hc163;
      240: out3 <= 16'hc13b;
      241: out3 <= 16'hc115;
      242: out3 <= 16'hc0f1;
      243: out3 <= 16'hc0d0;
      244: out3 <= 16'hc0b1;
      245: out3 <= 16'hc095;
      246: out3 <= 16'hc07b;
      247: out3 <= 16'hc064;
      248: out3 <= 16'hc04f;
      249: out3 <= 16'hc03c;
      250: out3 <= 16'hc02c;
      251: out3 <= 16'hc01f;
      252: out3 <= 16'hc014;
      253: out3 <= 16'hc00b;
      254: out3 <= 16'hc005;
      255: out3 <= 16'hc001;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock68277(clk, reset, next_in, next_out,
   i2_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [7:0] i2_in;
   reg [7:0] i2;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_74067(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a113;
   wire signed [15:0] a102;
   wire signed [15:0] a116;
   wire signed [15:0] a106;
   wire signed [15:0] a117;
   wire signed [15:0] a118;
   reg signed [15:0] tm495;
   reg signed [15:0] tm499;
   reg signed [15:0] tm511;
   reg signed [15:0] tm518;
   reg signed [15:0] tm496;
   reg signed [15:0] tm500;
   reg signed [15:0] tm512;
   reg signed [15:0] tm519;
   wire signed [15:0] tm39;
   wire signed [15:0] a107;
   wire signed [15:0] tm40;
   wire signed [15:0] a109;
   reg signed [15:0] tm497;
   reg signed [15:0] tm501;
   reg signed [15:0] tm513;
   reg signed [15:0] tm520;
   reg signed [15:0] tm107;
   reg signed [15:0] tm108;
   reg signed [15:0] tm498;
   reg signed [15:0] tm502;
   reg signed [15:0] tm514;
   reg signed [15:0] tm521;
   reg signed [15:0] tm515;
   reg signed [15:0] tm522;
   wire signed [15:0] a108;
   wire signed [15:0] a110;
   wire signed [15:0] a111;
   wire signed [15:0] a112;
   reg signed [15:0] tm516;
   reg signed [15:0] tm523;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm517;
   reg signed [15:0] tm524;


   assign a113 = X0;
   assign a102 = a113;
   assign a116 = X1;
   assign a106 = a116;
   assign a117 = X2;
   assign a118 = X3;
   assign a107 = tm39;
   assign a109 = tm40;
   assign Y0 = tm517;
   assign Y1 = tm524;

   D8_68695 instD8inst0_68695(.addr(i2[7:0]), .out(tm40), .clk(clk));

   D6_69469 instD6inst0_69469(.addr(i2[7:0]), .out(tm39), .clk(clk));

    multfix #(16, 2) m68376(.a(tm107), .b(tm498), .clk(clk), .q_sc(a108), .q_unsc(), .rst(reset));
    multfix #(16, 2) m68398(.a(tm108), .b(tm502), .clk(clk), .q_sc(a110), .q_unsc(), .rst(reset));
    multfix #(16, 2) m68416(.a(tm108), .b(tm498), .clk(clk), .q_sc(a111), .q_unsc(), .rst(reset));
    multfix #(16, 2) m68427(.a(tm107), .b(tm502), .clk(clk), .q_sc(a112), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub68405(.a(a108), .b(a110), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add68434(.a(a111), .b(a112), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm107 <= 0;
         tm498 <= 0;
         tm108 <= 0;
         tm502 <= 0;
         tm108 <= 0;
         tm498 <= 0;
         tm107 <= 0;
         tm502 <= 0;
      end
      else begin
         i2 <= i2_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm495 <= a117;
         tm499 <= a118;
         tm511 <= a102;
         tm518 <= a106;
         tm496 <= tm495;
         tm500 <= tm499;
         tm512 <= tm511;
         tm519 <= tm518;
         tm497 <= tm496;
         tm501 <= tm500;
         tm513 <= tm512;
         tm520 <= tm519;
         tm107 <= a107;
         tm108 <= a109;
         tm498 <= tm497;
         tm502 <= tm501;
         tm514 <= tm513;
         tm521 <= tm520;
         tm515 <= tm514;
         tm522 <= tm521;
         tm516 <= tm515;
         tm523 <= tm522;
         tm517 <= tm516;
         tm524 <= tm523;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock69474(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_74070(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a69;
   wire signed [15:0] a70;
   wire signed [15:0] a71;
   wire signed [15:0] a72;
   wire signed [16:0] tm277;
   wire signed [16:0] tm278;
   wire signed [16:0] tm279;
   wire signed [16:0] tm280;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t45;
   wire signed [15:0] t46;
   wire signed [15:0] t47;
   wire signed [15:0] t48;


   assign a69 = X0;
   assign a70 = X2;
   assign a71 = X1;
   assign a72 = X3;
   assign Y0 = t45;
   assign Y1 = t46;
   assign Y2 = t47;
   assign Y3 = t48;
   assign t45 = tm277[16:1];
   assign t46 = tm278[16:1];
   assign t47 = tm279[16:1];
   assign t48 = tm280[16:1];

    addfxp #(17, 1) add69486(.a({{1{a69[15]}}, a69}), .b({{1{a70[15]}}, a70}), .clk(clk), .q(tm277));    // 0
    addfxp #(17, 1) add69501(.a({{1{a71[15]}}, a71}), .b({{1{a72[15]}}, a72}), .clk(clk), .q(tm278));    // 0
    subfxp #(17, 1) sub69516(.a({{1{a69[15]}}, a69}), .b({{1{a70[15]}}, a70}), .clk(clk), .q(tm279));    // 0
    subfxp #(17, 1) sub69531(.a({{1{a71[15]}}, a71}), .b({{1{a72[15]}}, a72}), .clk(clk), .q(tm280));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 1028
// Gap: 512
module rc69556(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm69554 instPerm74071(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet69554(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [8:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        9'd0: control <= 1'b1;
        9'd1: control <= 1'b1;
        9'd2: control <= 1'b1;
        9'd3: control <= 1'b1;
        9'd4: control <= 1'b1;
        9'd5: control <= 1'b1;
        9'd6: control <= 1'b1;
        9'd7: control <= 1'b1;
        9'd8: control <= 1'b1;
        9'd9: control <= 1'b1;
        9'd10: control <= 1'b1;
        9'd11: control <= 1'b1;
        9'd12: control <= 1'b1;
        9'd13: control <= 1'b1;
        9'd14: control <= 1'b1;
        9'd15: control <= 1'b1;
        9'd16: control <= 1'b1;
        9'd17: control <= 1'b1;
        9'd18: control <= 1'b1;
        9'd19: control <= 1'b1;
        9'd20: control <= 1'b1;
        9'd21: control <= 1'b1;
        9'd22: control <= 1'b1;
        9'd23: control <= 1'b1;
        9'd24: control <= 1'b1;
        9'd25: control <= 1'b1;
        9'd26: control <= 1'b1;
        9'd27: control <= 1'b1;
        9'd28: control <= 1'b1;
        9'd29: control <= 1'b1;
        9'd30: control <= 1'b1;
        9'd31: control <= 1'b1;
        9'd32: control <= 1'b1;
        9'd33: control <= 1'b1;
        9'd34: control <= 1'b1;
        9'd35: control <= 1'b1;
        9'd36: control <= 1'b1;
        9'd37: control <= 1'b1;
        9'd38: control <= 1'b1;
        9'd39: control <= 1'b1;
        9'd40: control <= 1'b1;
        9'd41: control <= 1'b1;
        9'd42: control <= 1'b1;
        9'd43: control <= 1'b1;
        9'd44: control <= 1'b1;
        9'd45: control <= 1'b1;
        9'd46: control <= 1'b1;
        9'd47: control <= 1'b1;
        9'd48: control <= 1'b1;
        9'd49: control <= 1'b1;
        9'd50: control <= 1'b1;
        9'd51: control <= 1'b1;
        9'd52: control <= 1'b1;
        9'd53: control <= 1'b1;
        9'd54: control <= 1'b1;
        9'd55: control <= 1'b1;
        9'd56: control <= 1'b1;
        9'd57: control <= 1'b1;
        9'd58: control <= 1'b1;
        9'd59: control <= 1'b1;
        9'd60: control <= 1'b1;
        9'd61: control <= 1'b1;
        9'd62: control <= 1'b1;
        9'd63: control <= 1'b1;
        9'd64: control <= 1'b1;
        9'd65: control <= 1'b1;
        9'd66: control <= 1'b1;
        9'd67: control <= 1'b1;
        9'd68: control <= 1'b1;
        9'd69: control <= 1'b1;
        9'd70: control <= 1'b1;
        9'd71: control <= 1'b1;
        9'd72: control <= 1'b1;
        9'd73: control <= 1'b1;
        9'd74: control <= 1'b1;
        9'd75: control <= 1'b1;
        9'd76: control <= 1'b1;
        9'd77: control <= 1'b1;
        9'd78: control <= 1'b1;
        9'd79: control <= 1'b1;
        9'd80: control <= 1'b1;
        9'd81: control <= 1'b1;
        9'd82: control <= 1'b1;
        9'd83: control <= 1'b1;
        9'd84: control <= 1'b1;
        9'd85: control <= 1'b1;
        9'd86: control <= 1'b1;
        9'd87: control <= 1'b1;
        9'd88: control <= 1'b1;
        9'd89: control <= 1'b1;
        9'd90: control <= 1'b1;
        9'd91: control <= 1'b1;
        9'd92: control <= 1'b1;
        9'd93: control <= 1'b1;
        9'd94: control <= 1'b1;
        9'd95: control <= 1'b1;
        9'd96: control <= 1'b1;
        9'd97: control <= 1'b1;
        9'd98: control <= 1'b1;
        9'd99: control <= 1'b1;
        9'd100: control <= 1'b1;
        9'd101: control <= 1'b1;
        9'd102: control <= 1'b1;
        9'd103: control <= 1'b1;
        9'd104: control <= 1'b1;
        9'd105: control <= 1'b1;
        9'd106: control <= 1'b1;
        9'd107: control <= 1'b1;
        9'd108: control <= 1'b1;
        9'd109: control <= 1'b1;
        9'd110: control <= 1'b1;
        9'd111: control <= 1'b1;
        9'd112: control <= 1'b1;
        9'd113: control <= 1'b1;
        9'd114: control <= 1'b1;
        9'd115: control <= 1'b1;
        9'd116: control <= 1'b1;
        9'd117: control <= 1'b1;
        9'd118: control <= 1'b1;
        9'd119: control <= 1'b1;
        9'd120: control <= 1'b1;
        9'd121: control <= 1'b1;
        9'd122: control <= 1'b1;
        9'd123: control <= 1'b1;
        9'd124: control <= 1'b1;
        9'd125: control <= 1'b1;
        9'd126: control <= 1'b1;
        9'd127: control <= 1'b1;
        9'd128: control <= 1'b1;
        9'd129: control <= 1'b1;
        9'd130: control <= 1'b1;
        9'd131: control <= 1'b1;
        9'd132: control <= 1'b1;
        9'd133: control <= 1'b1;
        9'd134: control <= 1'b1;
        9'd135: control <= 1'b1;
        9'd136: control <= 1'b1;
        9'd137: control <= 1'b1;
        9'd138: control <= 1'b1;
        9'd139: control <= 1'b1;
        9'd140: control <= 1'b1;
        9'd141: control <= 1'b1;
        9'd142: control <= 1'b1;
        9'd143: control <= 1'b1;
        9'd144: control <= 1'b1;
        9'd145: control <= 1'b1;
        9'd146: control <= 1'b1;
        9'd147: control <= 1'b1;
        9'd148: control <= 1'b1;
        9'd149: control <= 1'b1;
        9'd150: control <= 1'b1;
        9'd151: control <= 1'b1;
        9'd152: control <= 1'b1;
        9'd153: control <= 1'b1;
        9'd154: control <= 1'b1;
        9'd155: control <= 1'b1;
        9'd156: control <= 1'b1;
        9'd157: control <= 1'b1;
        9'd158: control <= 1'b1;
        9'd159: control <= 1'b1;
        9'd160: control <= 1'b1;
        9'd161: control <= 1'b1;
        9'd162: control <= 1'b1;
        9'd163: control <= 1'b1;
        9'd164: control <= 1'b1;
        9'd165: control <= 1'b1;
        9'd166: control <= 1'b1;
        9'd167: control <= 1'b1;
        9'd168: control <= 1'b1;
        9'd169: control <= 1'b1;
        9'd170: control <= 1'b1;
        9'd171: control <= 1'b1;
        9'd172: control <= 1'b1;
        9'd173: control <= 1'b1;
        9'd174: control <= 1'b1;
        9'd175: control <= 1'b1;
        9'd176: control <= 1'b1;
        9'd177: control <= 1'b1;
        9'd178: control <= 1'b1;
        9'd179: control <= 1'b1;
        9'd180: control <= 1'b1;
        9'd181: control <= 1'b1;
        9'd182: control <= 1'b1;
        9'd183: control <= 1'b1;
        9'd184: control <= 1'b1;
        9'd185: control <= 1'b1;
        9'd186: control <= 1'b1;
        9'd187: control <= 1'b1;
        9'd188: control <= 1'b1;
        9'd189: control <= 1'b1;
        9'd190: control <= 1'b1;
        9'd191: control <= 1'b1;
        9'd192: control <= 1'b1;
        9'd193: control <= 1'b1;
        9'd194: control <= 1'b1;
        9'd195: control <= 1'b1;
        9'd196: control <= 1'b1;
        9'd197: control <= 1'b1;
        9'd198: control <= 1'b1;
        9'd199: control <= 1'b1;
        9'd200: control <= 1'b1;
        9'd201: control <= 1'b1;
        9'd202: control <= 1'b1;
        9'd203: control <= 1'b1;
        9'd204: control <= 1'b1;
        9'd205: control <= 1'b1;
        9'd206: control <= 1'b1;
        9'd207: control <= 1'b1;
        9'd208: control <= 1'b1;
        9'd209: control <= 1'b1;
        9'd210: control <= 1'b1;
        9'd211: control <= 1'b1;
        9'd212: control <= 1'b1;
        9'd213: control <= 1'b1;
        9'd214: control <= 1'b1;
        9'd215: control <= 1'b1;
        9'd216: control <= 1'b1;
        9'd217: control <= 1'b1;
        9'd218: control <= 1'b1;
        9'd219: control <= 1'b1;
        9'd220: control <= 1'b1;
        9'd221: control <= 1'b1;
        9'd222: control <= 1'b1;
        9'd223: control <= 1'b1;
        9'd224: control <= 1'b1;
        9'd225: control <= 1'b1;
        9'd226: control <= 1'b1;
        9'd227: control <= 1'b1;
        9'd228: control <= 1'b1;
        9'd229: control <= 1'b1;
        9'd230: control <= 1'b1;
        9'd231: control <= 1'b1;
        9'd232: control <= 1'b1;
        9'd233: control <= 1'b1;
        9'd234: control <= 1'b1;
        9'd235: control <= 1'b1;
        9'd236: control <= 1'b1;
        9'd237: control <= 1'b1;
        9'd238: control <= 1'b1;
        9'd239: control <= 1'b1;
        9'd240: control <= 1'b1;
        9'd241: control <= 1'b1;
        9'd242: control <= 1'b1;
        9'd243: control <= 1'b1;
        9'd244: control <= 1'b1;
        9'd245: control <= 1'b1;
        9'd246: control <= 1'b1;
        9'd247: control <= 1'b1;
        9'd248: control <= 1'b1;
        9'd249: control <= 1'b1;
        9'd250: control <= 1'b1;
        9'd251: control <= 1'b1;
        9'd252: control <= 1'b1;
        9'd253: control <= 1'b1;
        9'd254: control <= 1'b1;
        9'd255: control <= 1'b1;
        9'd256: control <= 1'b0;
        9'd257: control <= 1'b0;
        9'd258: control <= 1'b0;
        9'd259: control <= 1'b0;
        9'd260: control <= 1'b0;
        9'd261: control <= 1'b0;
        9'd262: control <= 1'b0;
        9'd263: control <= 1'b0;
        9'd264: control <= 1'b0;
        9'd265: control <= 1'b0;
        9'd266: control <= 1'b0;
        9'd267: control <= 1'b0;
        9'd268: control <= 1'b0;
        9'd269: control <= 1'b0;
        9'd270: control <= 1'b0;
        9'd271: control <= 1'b0;
        9'd272: control <= 1'b0;
        9'd273: control <= 1'b0;
        9'd274: control <= 1'b0;
        9'd275: control <= 1'b0;
        9'd276: control <= 1'b0;
        9'd277: control <= 1'b0;
        9'd278: control <= 1'b0;
        9'd279: control <= 1'b0;
        9'd280: control <= 1'b0;
        9'd281: control <= 1'b0;
        9'd282: control <= 1'b0;
        9'd283: control <= 1'b0;
        9'd284: control <= 1'b0;
        9'd285: control <= 1'b0;
        9'd286: control <= 1'b0;
        9'd287: control <= 1'b0;
        9'd288: control <= 1'b0;
        9'd289: control <= 1'b0;
        9'd290: control <= 1'b0;
        9'd291: control <= 1'b0;
        9'd292: control <= 1'b0;
        9'd293: control <= 1'b0;
        9'd294: control <= 1'b0;
        9'd295: control <= 1'b0;
        9'd296: control <= 1'b0;
        9'd297: control <= 1'b0;
        9'd298: control <= 1'b0;
        9'd299: control <= 1'b0;
        9'd300: control <= 1'b0;
        9'd301: control <= 1'b0;
        9'd302: control <= 1'b0;
        9'd303: control <= 1'b0;
        9'd304: control <= 1'b0;
        9'd305: control <= 1'b0;
        9'd306: control <= 1'b0;
        9'd307: control <= 1'b0;
        9'd308: control <= 1'b0;
        9'd309: control <= 1'b0;
        9'd310: control <= 1'b0;
        9'd311: control <= 1'b0;
        9'd312: control <= 1'b0;
        9'd313: control <= 1'b0;
        9'd314: control <= 1'b0;
        9'd315: control <= 1'b0;
        9'd316: control <= 1'b0;
        9'd317: control <= 1'b0;
        9'd318: control <= 1'b0;
        9'd319: control <= 1'b0;
        9'd320: control <= 1'b0;
        9'd321: control <= 1'b0;
        9'd322: control <= 1'b0;
        9'd323: control <= 1'b0;
        9'd324: control <= 1'b0;
        9'd325: control <= 1'b0;
        9'd326: control <= 1'b0;
        9'd327: control <= 1'b0;
        9'd328: control <= 1'b0;
        9'd329: control <= 1'b0;
        9'd330: control <= 1'b0;
        9'd331: control <= 1'b0;
        9'd332: control <= 1'b0;
        9'd333: control <= 1'b0;
        9'd334: control <= 1'b0;
        9'd335: control <= 1'b0;
        9'd336: control <= 1'b0;
        9'd337: control <= 1'b0;
        9'd338: control <= 1'b0;
        9'd339: control <= 1'b0;
        9'd340: control <= 1'b0;
        9'd341: control <= 1'b0;
        9'd342: control <= 1'b0;
        9'd343: control <= 1'b0;
        9'd344: control <= 1'b0;
        9'd345: control <= 1'b0;
        9'd346: control <= 1'b0;
        9'd347: control <= 1'b0;
        9'd348: control <= 1'b0;
        9'd349: control <= 1'b0;
        9'd350: control <= 1'b0;
        9'd351: control <= 1'b0;
        9'd352: control <= 1'b0;
        9'd353: control <= 1'b0;
        9'd354: control <= 1'b0;
        9'd355: control <= 1'b0;
        9'd356: control <= 1'b0;
        9'd357: control <= 1'b0;
        9'd358: control <= 1'b0;
        9'd359: control <= 1'b0;
        9'd360: control <= 1'b0;
        9'd361: control <= 1'b0;
        9'd362: control <= 1'b0;
        9'd363: control <= 1'b0;
        9'd364: control <= 1'b0;
        9'd365: control <= 1'b0;
        9'd366: control <= 1'b0;
        9'd367: control <= 1'b0;
        9'd368: control <= 1'b0;
        9'd369: control <= 1'b0;
        9'd370: control <= 1'b0;
        9'd371: control <= 1'b0;
        9'd372: control <= 1'b0;
        9'd373: control <= 1'b0;
        9'd374: control <= 1'b0;
        9'd375: control <= 1'b0;
        9'd376: control <= 1'b0;
        9'd377: control <= 1'b0;
        9'd378: control <= 1'b0;
        9'd379: control <= 1'b0;
        9'd380: control <= 1'b0;
        9'd381: control <= 1'b0;
        9'd382: control <= 1'b0;
        9'd383: control <= 1'b0;
        9'd384: control <= 1'b0;
        9'd385: control <= 1'b0;
        9'd386: control <= 1'b0;
        9'd387: control <= 1'b0;
        9'd388: control <= 1'b0;
        9'd389: control <= 1'b0;
        9'd390: control <= 1'b0;
        9'd391: control <= 1'b0;
        9'd392: control <= 1'b0;
        9'd393: control <= 1'b0;
        9'd394: control <= 1'b0;
        9'd395: control <= 1'b0;
        9'd396: control <= 1'b0;
        9'd397: control <= 1'b0;
        9'd398: control <= 1'b0;
        9'd399: control <= 1'b0;
        9'd400: control <= 1'b0;
        9'd401: control <= 1'b0;
        9'd402: control <= 1'b0;
        9'd403: control <= 1'b0;
        9'd404: control <= 1'b0;
        9'd405: control <= 1'b0;
        9'd406: control <= 1'b0;
        9'd407: control <= 1'b0;
        9'd408: control <= 1'b0;
        9'd409: control <= 1'b0;
        9'd410: control <= 1'b0;
        9'd411: control <= 1'b0;
        9'd412: control <= 1'b0;
        9'd413: control <= 1'b0;
        9'd414: control <= 1'b0;
        9'd415: control <= 1'b0;
        9'd416: control <= 1'b0;
        9'd417: control <= 1'b0;
        9'd418: control <= 1'b0;
        9'd419: control <= 1'b0;
        9'd420: control <= 1'b0;
        9'd421: control <= 1'b0;
        9'd422: control <= 1'b0;
        9'd423: control <= 1'b0;
        9'd424: control <= 1'b0;
        9'd425: control <= 1'b0;
        9'd426: control <= 1'b0;
        9'd427: control <= 1'b0;
        9'd428: control <= 1'b0;
        9'd429: control <= 1'b0;
        9'd430: control <= 1'b0;
        9'd431: control <= 1'b0;
        9'd432: control <= 1'b0;
        9'd433: control <= 1'b0;
        9'd434: control <= 1'b0;
        9'd435: control <= 1'b0;
        9'd436: control <= 1'b0;
        9'd437: control <= 1'b0;
        9'd438: control <= 1'b0;
        9'd439: control <= 1'b0;
        9'd440: control <= 1'b0;
        9'd441: control <= 1'b0;
        9'd442: control <= 1'b0;
        9'd443: control <= 1'b0;
        9'd444: control <= 1'b0;
        9'd445: control <= 1'b0;
        9'd446: control <= 1'b0;
        9'd447: control <= 1'b0;
        9'd448: control <= 1'b0;
        9'd449: control <= 1'b0;
        9'd450: control <= 1'b0;
        9'd451: control <= 1'b0;
        9'd452: control <= 1'b0;
        9'd453: control <= 1'b0;
        9'd454: control <= 1'b0;
        9'd455: control <= 1'b0;
        9'd456: control <= 1'b0;
        9'd457: control <= 1'b0;
        9'd458: control <= 1'b0;
        9'd459: control <= 1'b0;
        9'd460: control <= 1'b0;
        9'd461: control <= 1'b0;
        9'd462: control <= 1'b0;
        9'd463: control <= 1'b0;
        9'd464: control <= 1'b0;
        9'd465: control <= 1'b0;
        9'd466: control <= 1'b0;
        9'd467: control <= 1'b0;
        9'd468: control <= 1'b0;
        9'd469: control <= 1'b0;
        9'd470: control <= 1'b0;
        9'd471: control <= 1'b0;
        9'd472: control <= 1'b0;
        9'd473: control <= 1'b0;
        9'd474: control <= 1'b0;
        9'd475: control <= 1'b0;
        9'd476: control <= 1'b0;
        9'd477: control <= 1'b0;
        9'd478: control <= 1'b0;
        9'd479: control <= 1'b0;
        9'd480: control <= 1'b0;
        9'd481: control <= 1'b0;
        9'd482: control <= 1'b0;
        9'd483: control <= 1'b0;
        9'd484: control <= 1'b0;
        9'd485: control <= 1'b0;
        9'd486: control <= 1'b0;
        9'd487: control <= 1'b0;
        9'd488: control <= 1'b0;
        9'd489: control <= 1'b0;
        9'd490: control <= 1'b0;
        9'd491: control <= 1'b0;
        9'd492: control <= 1'b0;
        9'd493: control <= 1'b0;
        9'd494: control <= 1'b0;
        9'd495: control <= 1'b0;
        9'd496: control <= 1'b0;
        9'd497: control <= 1'b0;
        9'd498: control <= 1'b0;
        9'd499: control <= 1'b0;
        9'd500: control <= 1'b0;
        9'd501: control <= 1'b0;
        9'd502: control <= 1'b0;
        9'd503: control <= 1'b0;
        9'd504: control <= 1'b0;
        9'd505: control <= 1'b0;
        9'd506: control <= 1'b0;
        9'd507: control <= 1'b0;
        9'd508: control <= 1'b0;
        9'd509: control <= 1'b0;
        9'd510: control <= 1'b0;
        9'd511: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 1028
// Gap: 512
module perm69554(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 512;

   parameter addrbits = 9;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm41;
   assign tm41 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_74076(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_74077(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(511, 9) nextReg_74088(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_74089(.X(next2), .Y(next3), .clk(clk));
nextReg #(512, 9) nextReg_74092(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_74093(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(511, 1) shiftFIFO_74096(.X(tm41), .Y(tm41_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_74099(.X(tm41_d), .Y(tm41_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 9) shiftFIFO_74104(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm41_d, s1rdloc})
	     {1'd0,  9'd0}: s1rd0 <= 256;
	     {1'd0,  9'd1}: s1rd0 <= 257;
	     {1'd0,  9'd2}: s1rd0 <= 258;
	     {1'd0,  9'd3}: s1rd0 <= 259;
	     {1'd0,  9'd4}: s1rd0 <= 260;
	     {1'd0,  9'd5}: s1rd0 <= 261;
	     {1'd0,  9'd6}: s1rd0 <= 262;
	     {1'd0,  9'd7}: s1rd0 <= 263;
	     {1'd0,  9'd8}: s1rd0 <= 264;
	     {1'd0,  9'd9}: s1rd0 <= 265;
	     {1'd0,  9'd10}: s1rd0 <= 266;
	     {1'd0,  9'd11}: s1rd0 <= 267;
	     {1'd0,  9'd12}: s1rd0 <= 268;
	     {1'd0,  9'd13}: s1rd0 <= 269;
	     {1'd0,  9'd14}: s1rd0 <= 270;
	     {1'd0,  9'd15}: s1rd0 <= 271;
	     {1'd0,  9'd16}: s1rd0 <= 272;
	     {1'd0,  9'd17}: s1rd0 <= 273;
	     {1'd0,  9'd18}: s1rd0 <= 274;
	     {1'd0,  9'd19}: s1rd0 <= 275;
	     {1'd0,  9'd20}: s1rd0 <= 276;
	     {1'd0,  9'd21}: s1rd0 <= 277;
	     {1'd0,  9'd22}: s1rd0 <= 278;
	     {1'd0,  9'd23}: s1rd0 <= 279;
	     {1'd0,  9'd24}: s1rd0 <= 280;
	     {1'd0,  9'd25}: s1rd0 <= 281;
	     {1'd0,  9'd26}: s1rd0 <= 282;
	     {1'd0,  9'd27}: s1rd0 <= 283;
	     {1'd0,  9'd28}: s1rd0 <= 284;
	     {1'd0,  9'd29}: s1rd0 <= 285;
	     {1'd0,  9'd30}: s1rd0 <= 286;
	     {1'd0,  9'd31}: s1rd0 <= 287;
	     {1'd0,  9'd32}: s1rd0 <= 288;
	     {1'd0,  9'd33}: s1rd0 <= 289;
	     {1'd0,  9'd34}: s1rd0 <= 290;
	     {1'd0,  9'd35}: s1rd0 <= 291;
	     {1'd0,  9'd36}: s1rd0 <= 292;
	     {1'd0,  9'd37}: s1rd0 <= 293;
	     {1'd0,  9'd38}: s1rd0 <= 294;
	     {1'd0,  9'd39}: s1rd0 <= 295;
	     {1'd0,  9'd40}: s1rd0 <= 296;
	     {1'd0,  9'd41}: s1rd0 <= 297;
	     {1'd0,  9'd42}: s1rd0 <= 298;
	     {1'd0,  9'd43}: s1rd0 <= 299;
	     {1'd0,  9'd44}: s1rd0 <= 300;
	     {1'd0,  9'd45}: s1rd0 <= 301;
	     {1'd0,  9'd46}: s1rd0 <= 302;
	     {1'd0,  9'd47}: s1rd0 <= 303;
	     {1'd0,  9'd48}: s1rd0 <= 304;
	     {1'd0,  9'd49}: s1rd0 <= 305;
	     {1'd0,  9'd50}: s1rd0 <= 306;
	     {1'd0,  9'd51}: s1rd0 <= 307;
	     {1'd0,  9'd52}: s1rd0 <= 308;
	     {1'd0,  9'd53}: s1rd0 <= 309;
	     {1'd0,  9'd54}: s1rd0 <= 310;
	     {1'd0,  9'd55}: s1rd0 <= 311;
	     {1'd0,  9'd56}: s1rd0 <= 312;
	     {1'd0,  9'd57}: s1rd0 <= 313;
	     {1'd0,  9'd58}: s1rd0 <= 314;
	     {1'd0,  9'd59}: s1rd0 <= 315;
	     {1'd0,  9'd60}: s1rd0 <= 316;
	     {1'd0,  9'd61}: s1rd0 <= 317;
	     {1'd0,  9'd62}: s1rd0 <= 318;
	     {1'd0,  9'd63}: s1rd0 <= 319;
	     {1'd0,  9'd64}: s1rd0 <= 320;
	     {1'd0,  9'd65}: s1rd0 <= 321;
	     {1'd0,  9'd66}: s1rd0 <= 322;
	     {1'd0,  9'd67}: s1rd0 <= 323;
	     {1'd0,  9'd68}: s1rd0 <= 324;
	     {1'd0,  9'd69}: s1rd0 <= 325;
	     {1'd0,  9'd70}: s1rd0 <= 326;
	     {1'd0,  9'd71}: s1rd0 <= 327;
	     {1'd0,  9'd72}: s1rd0 <= 328;
	     {1'd0,  9'd73}: s1rd0 <= 329;
	     {1'd0,  9'd74}: s1rd0 <= 330;
	     {1'd0,  9'd75}: s1rd0 <= 331;
	     {1'd0,  9'd76}: s1rd0 <= 332;
	     {1'd0,  9'd77}: s1rd0 <= 333;
	     {1'd0,  9'd78}: s1rd0 <= 334;
	     {1'd0,  9'd79}: s1rd0 <= 335;
	     {1'd0,  9'd80}: s1rd0 <= 336;
	     {1'd0,  9'd81}: s1rd0 <= 337;
	     {1'd0,  9'd82}: s1rd0 <= 338;
	     {1'd0,  9'd83}: s1rd0 <= 339;
	     {1'd0,  9'd84}: s1rd0 <= 340;
	     {1'd0,  9'd85}: s1rd0 <= 341;
	     {1'd0,  9'd86}: s1rd0 <= 342;
	     {1'd0,  9'd87}: s1rd0 <= 343;
	     {1'd0,  9'd88}: s1rd0 <= 344;
	     {1'd0,  9'd89}: s1rd0 <= 345;
	     {1'd0,  9'd90}: s1rd0 <= 346;
	     {1'd0,  9'd91}: s1rd0 <= 347;
	     {1'd0,  9'd92}: s1rd0 <= 348;
	     {1'd0,  9'd93}: s1rd0 <= 349;
	     {1'd0,  9'd94}: s1rd0 <= 350;
	     {1'd0,  9'd95}: s1rd0 <= 351;
	     {1'd0,  9'd96}: s1rd0 <= 352;
	     {1'd0,  9'd97}: s1rd0 <= 353;
	     {1'd0,  9'd98}: s1rd0 <= 354;
	     {1'd0,  9'd99}: s1rd0 <= 355;
	     {1'd0,  9'd100}: s1rd0 <= 356;
	     {1'd0,  9'd101}: s1rd0 <= 357;
	     {1'd0,  9'd102}: s1rd0 <= 358;
	     {1'd0,  9'd103}: s1rd0 <= 359;
	     {1'd0,  9'd104}: s1rd0 <= 360;
	     {1'd0,  9'd105}: s1rd0 <= 361;
	     {1'd0,  9'd106}: s1rd0 <= 362;
	     {1'd0,  9'd107}: s1rd0 <= 363;
	     {1'd0,  9'd108}: s1rd0 <= 364;
	     {1'd0,  9'd109}: s1rd0 <= 365;
	     {1'd0,  9'd110}: s1rd0 <= 366;
	     {1'd0,  9'd111}: s1rd0 <= 367;
	     {1'd0,  9'd112}: s1rd0 <= 368;
	     {1'd0,  9'd113}: s1rd0 <= 369;
	     {1'd0,  9'd114}: s1rd0 <= 370;
	     {1'd0,  9'd115}: s1rd0 <= 371;
	     {1'd0,  9'd116}: s1rd0 <= 372;
	     {1'd0,  9'd117}: s1rd0 <= 373;
	     {1'd0,  9'd118}: s1rd0 <= 374;
	     {1'd0,  9'd119}: s1rd0 <= 375;
	     {1'd0,  9'd120}: s1rd0 <= 376;
	     {1'd0,  9'd121}: s1rd0 <= 377;
	     {1'd0,  9'd122}: s1rd0 <= 378;
	     {1'd0,  9'd123}: s1rd0 <= 379;
	     {1'd0,  9'd124}: s1rd0 <= 380;
	     {1'd0,  9'd125}: s1rd0 <= 381;
	     {1'd0,  9'd126}: s1rd0 <= 382;
	     {1'd0,  9'd127}: s1rd0 <= 383;
	     {1'd0,  9'd128}: s1rd0 <= 384;
	     {1'd0,  9'd129}: s1rd0 <= 385;
	     {1'd0,  9'd130}: s1rd0 <= 386;
	     {1'd0,  9'd131}: s1rd0 <= 387;
	     {1'd0,  9'd132}: s1rd0 <= 388;
	     {1'd0,  9'd133}: s1rd0 <= 389;
	     {1'd0,  9'd134}: s1rd0 <= 390;
	     {1'd0,  9'd135}: s1rd0 <= 391;
	     {1'd0,  9'd136}: s1rd0 <= 392;
	     {1'd0,  9'd137}: s1rd0 <= 393;
	     {1'd0,  9'd138}: s1rd0 <= 394;
	     {1'd0,  9'd139}: s1rd0 <= 395;
	     {1'd0,  9'd140}: s1rd0 <= 396;
	     {1'd0,  9'd141}: s1rd0 <= 397;
	     {1'd0,  9'd142}: s1rd0 <= 398;
	     {1'd0,  9'd143}: s1rd0 <= 399;
	     {1'd0,  9'd144}: s1rd0 <= 400;
	     {1'd0,  9'd145}: s1rd0 <= 401;
	     {1'd0,  9'd146}: s1rd0 <= 402;
	     {1'd0,  9'd147}: s1rd0 <= 403;
	     {1'd0,  9'd148}: s1rd0 <= 404;
	     {1'd0,  9'd149}: s1rd0 <= 405;
	     {1'd0,  9'd150}: s1rd0 <= 406;
	     {1'd0,  9'd151}: s1rd0 <= 407;
	     {1'd0,  9'd152}: s1rd0 <= 408;
	     {1'd0,  9'd153}: s1rd0 <= 409;
	     {1'd0,  9'd154}: s1rd0 <= 410;
	     {1'd0,  9'd155}: s1rd0 <= 411;
	     {1'd0,  9'd156}: s1rd0 <= 412;
	     {1'd0,  9'd157}: s1rd0 <= 413;
	     {1'd0,  9'd158}: s1rd0 <= 414;
	     {1'd0,  9'd159}: s1rd0 <= 415;
	     {1'd0,  9'd160}: s1rd0 <= 416;
	     {1'd0,  9'd161}: s1rd0 <= 417;
	     {1'd0,  9'd162}: s1rd0 <= 418;
	     {1'd0,  9'd163}: s1rd0 <= 419;
	     {1'd0,  9'd164}: s1rd0 <= 420;
	     {1'd0,  9'd165}: s1rd0 <= 421;
	     {1'd0,  9'd166}: s1rd0 <= 422;
	     {1'd0,  9'd167}: s1rd0 <= 423;
	     {1'd0,  9'd168}: s1rd0 <= 424;
	     {1'd0,  9'd169}: s1rd0 <= 425;
	     {1'd0,  9'd170}: s1rd0 <= 426;
	     {1'd0,  9'd171}: s1rd0 <= 427;
	     {1'd0,  9'd172}: s1rd0 <= 428;
	     {1'd0,  9'd173}: s1rd0 <= 429;
	     {1'd0,  9'd174}: s1rd0 <= 430;
	     {1'd0,  9'd175}: s1rd0 <= 431;
	     {1'd0,  9'd176}: s1rd0 <= 432;
	     {1'd0,  9'd177}: s1rd0 <= 433;
	     {1'd0,  9'd178}: s1rd0 <= 434;
	     {1'd0,  9'd179}: s1rd0 <= 435;
	     {1'd0,  9'd180}: s1rd0 <= 436;
	     {1'd0,  9'd181}: s1rd0 <= 437;
	     {1'd0,  9'd182}: s1rd0 <= 438;
	     {1'd0,  9'd183}: s1rd0 <= 439;
	     {1'd0,  9'd184}: s1rd0 <= 440;
	     {1'd0,  9'd185}: s1rd0 <= 441;
	     {1'd0,  9'd186}: s1rd0 <= 442;
	     {1'd0,  9'd187}: s1rd0 <= 443;
	     {1'd0,  9'd188}: s1rd0 <= 444;
	     {1'd0,  9'd189}: s1rd0 <= 445;
	     {1'd0,  9'd190}: s1rd0 <= 446;
	     {1'd0,  9'd191}: s1rd0 <= 447;
	     {1'd0,  9'd192}: s1rd0 <= 448;
	     {1'd0,  9'd193}: s1rd0 <= 449;
	     {1'd0,  9'd194}: s1rd0 <= 450;
	     {1'd0,  9'd195}: s1rd0 <= 451;
	     {1'd0,  9'd196}: s1rd0 <= 452;
	     {1'd0,  9'd197}: s1rd0 <= 453;
	     {1'd0,  9'd198}: s1rd0 <= 454;
	     {1'd0,  9'd199}: s1rd0 <= 455;
	     {1'd0,  9'd200}: s1rd0 <= 456;
	     {1'd0,  9'd201}: s1rd0 <= 457;
	     {1'd0,  9'd202}: s1rd0 <= 458;
	     {1'd0,  9'd203}: s1rd0 <= 459;
	     {1'd0,  9'd204}: s1rd0 <= 460;
	     {1'd0,  9'd205}: s1rd0 <= 461;
	     {1'd0,  9'd206}: s1rd0 <= 462;
	     {1'd0,  9'd207}: s1rd0 <= 463;
	     {1'd0,  9'd208}: s1rd0 <= 464;
	     {1'd0,  9'd209}: s1rd0 <= 465;
	     {1'd0,  9'd210}: s1rd0 <= 466;
	     {1'd0,  9'd211}: s1rd0 <= 467;
	     {1'd0,  9'd212}: s1rd0 <= 468;
	     {1'd0,  9'd213}: s1rd0 <= 469;
	     {1'd0,  9'd214}: s1rd0 <= 470;
	     {1'd0,  9'd215}: s1rd0 <= 471;
	     {1'd0,  9'd216}: s1rd0 <= 472;
	     {1'd0,  9'd217}: s1rd0 <= 473;
	     {1'd0,  9'd218}: s1rd0 <= 474;
	     {1'd0,  9'd219}: s1rd0 <= 475;
	     {1'd0,  9'd220}: s1rd0 <= 476;
	     {1'd0,  9'd221}: s1rd0 <= 477;
	     {1'd0,  9'd222}: s1rd0 <= 478;
	     {1'd0,  9'd223}: s1rd0 <= 479;
	     {1'd0,  9'd224}: s1rd0 <= 480;
	     {1'd0,  9'd225}: s1rd0 <= 481;
	     {1'd0,  9'd226}: s1rd0 <= 482;
	     {1'd0,  9'd227}: s1rd0 <= 483;
	     {1'd0,  9'd228}: s1rd0 <= 484;
	     {1'd0,  9'd229}: s1rd0 <= 485;
	     {1'd0,  9'd230}: s1rd0 <= 486;
	     {1'd0,  9'd231}: s1rd0 <= 487;
	     {1'd0,  9'd232}: s1rd0 <= 488;
	     {1'd0,  9'd233}: s1rd0 <= 489;
	     {1'd0,  9'd234}: s1rd0 <= 490;
	     {1'd0,  9'd235}: s1rd0 <= 491;
	     {1'd0,  9'd236}: s1rd0 <= 492;
	     {1'd0,  9'd237}: s1rd0 <= 493;
	     {1'd0,  9'd238}: s1rd0 <= 494;
	     {1'd0,  9'd239}: s1rd0 <= 495;
	     {1'd0,  9'd240}: s1rd0 <= 496;
	     {1'd0,  9'd241}: s1rd0 <= 497;
	     {1'd0,  9'd242}: s1rd0 <= 498;
	     {1'd0,  9'd243}: s1rd0 <= 499;
	     {1'd0,  9'd244}: s1rd0 <= 500;
	     {1'd0,  9'd245}: s1rd0 <= 501;
	     {1'd0,  9'd246}: s1rd0 <= 502;
	     {1'd0,  9'd247}: s1rd0 <= 503;
	     {1'd0,  9'd248}: s1rd0 <= 504;
	     {1'd0,  9'd249}: s1rd0 <= 505;
	     {1'd0,  9'd250}: s1rd0 <= 506;
	     {1'd0,  9'd251}: s1rd0 <= 507;
	     {1'd0,  9'd252}: s1rd0 <= 508;
	     {1'd0,  9'd253}: s1rd0 <= 509;
	     {1'd0,  9'd254}: s1rd0 <= 510;
	     {1'd0,  9'd255}: s1rd0 <= 511;
	     {1'd0,  9'd256}: s1rd0 <= 0;
	     {1'd0,  9'd257}: s1rd0 <= 1;
	     {1'd0,  9'd258}: s1rd0 <= 2;
	     {1'd0,  9'd259}: s1rd0 <= 3;
	     {1'd0,  9'd260}: s1rd0 <= 4;
	     {1'd0,  9'd261}: s1rd0 <= 5;
	     {1'd0,  9'd262}: s1rd0 <= 6;
	     {1'd0,  9'd263}: s1rd0 <= 7;
	     {1'd0,  9'd264}: s1rd0 <= 8;
	     {1'd0,  9'd265}: s1rd0 <= 9;
	     {1'd0,  9'd266}: s1rd0 <= 10;
	     {1'd0,  9'd267}: s1rd0 <= 11;
	     {1'd0,  9'd268}: s1rd0 <= 12;
	     {1'd0,  9'd269}: s1rd0 <= 13;
	     {1'd0,  9'd270}: s1rd0 <= 14;
	     {1'd0,  9'd271}: s1rd0 <= 15;
	     {1'd0,  9'd272}: s1rd0 <= 16;
	     {1'd0,  9'd273}: s1rd0 <= 17;
	     {1'd0,  9'd274}: s1rd0 <= 18;
	     {1'd0,  9'd275}: s1rd0 <= 19;
	     {1'd0,  9'd276}: s1rd0 <= 20;
	     {1'd0,  9'd277}: s1rd0 <= 21;
	     {1'd0,  9'd278}: s1rd0 <= 22;
	     {1'd0,  9'd279}: s1rd0 <= 23;
	     {1'd0,  9'd280}: s1rd0 <= 24;
	     {1'd0,  9'd281}: s1rd0 <= 25;
	     {1'd0,  9'd282}: s1rd0 <= 26;
	     {1'd0,  9'd283}: s1rd0 <= 27;
	     {1'd0,  9'd284}: s1rd0 <= 28;
	     {1'd0,  9'd285}: s1rd0 <= 29;
	     {1'd0,  9'd286}: s1rd0 <= 30;
	     {1'd0,  9'd287}: s1rd0 <= 31;
	     {1'd0,  9'd288}: s1rd0 <= 32;
	     {1'd0,  9'd289}: s1rd0 <= 33;
	     {1'd0,  9'd290}: s1rd0 <= 34;
	     {1'd0,  9'd291}: s1rd0 <= 35;
	     {1'd0,  9'd292}: s1rd0 <= 36;
	     {1'd0,  9'd293}: s1rd0 <= 37;
	     {1'd0,  9'd294}: s1rd0 <= 38;
	     {1'd0,  9'd295}: s1rd0 <= 39;
	     {1'd0,  9'd296}: s1rd0 <= 40;
	     {1'd0,  9'd297}: s1rd0 <= 41;
	     {1'd0,  9'd298}: s1rd0 <= 42;
	     {1'd0,  9'd299}: s1rd0 <= 43;
	     {1'd0,  9'd300}: s1rd0 <= 44;
	     {1'd0,  9'd301}: s1rd0 <= 45;
	     {1'd0,  9'd302}: s1rd0 <= 46;
	     {1'd0,  9'd303}: s1rd0 <= 47;
	     {1'd0,  9'd304}: s1rd0 <= 48;
	     {1'd0,  9'd305}: s1rd0 <= 49;
	     {1'd0,  9'd306}: s1rd0 <= 50;
	     {1'd0,  9'd307}: s1rd0 <= 51;
	     {1'd0,  9'd308}: s1rd0 <= 52;
	     {1'd0,  9'd309}: s1rd0 <= 53;
	     {1'd0,  9'd310}: s1rd0 <= 54;
	     {1'd0,  9'd311}: s1rd0 <= 55;
	     {1'd0,  9'd312}: s1rd0 <= 56;
	     {1'd0,  9'd313}: s1rd0 <= 57;
	     {1'd0,  9'd314}: s1rd0 <= 58;
	     {1'd0,  9'd315}: s1rd0 <= 59;
	     {1'd0,  9'd316}: s1rd0 <= 60;
	     {1'd0,  9'd317}: s1rd0 <= 61;
	     {1'd0,  9'd318}: s1rd0 <= 62;
	     {1'd0,  9'd319}: s1rd0 <= 63;
	     {1'd0,  9'd320}: s1rd0 <= 64;
	     {1'd0,  9'd321}: s1rd0 <= 65;
	     {1'd0,  9'd322}: s1rd0 <= 66;
	     {1'd0,  9'd323}: s1rd0 <= 67;
	     {1'd0,  9'd324}: s1rd0 <= 68;
	     {1'd0,  9'd325}: s1rd0 <= 69;
	     {1'd0,  9'd326}: s1rd0 <= 70;
	     {1'd0,  9'd327}: s1rd0 <= 71;
	     {1'd0,  9'd328}: s1rd0 <= 72;
	     {1'd0,  9'd329}: s1rd0 <= 73;
	     {1'd0,  9'd330}: s1rd0 <= 74;
	     {1'd0,  9'd331}: s1rd0 <= 75;
	     {1'd0,  9'd332}: s1rd0 <= 76;
	     {1'd0,  9'd333}: s1rd0 <= 77;
	     {1'd0,  9'd334}: s1rd0 <= 78;
	     {1'd0,  9'd335}: s1rd0 <= 79;
	     {1'd0,  9'd336}: s1rd0 <= 80;
	     {1'd0,  9'd337}: s1rd0 <= 81;
	     {1'd0,  9'd338}: s1rd0 <= 82;
	     {1'd0,  9'd339}: s1rd0 <= 83;
	     {1'd0,  9'd340}: s1rd0 <= 84;
	     {1'd0,  9'd341}: s1rd0 <= 85;
	     {1'd0,  9'd342}: s1rd0 <= 86;
	     {1'd0,  9'd343}: s1rd0 <= 87;
	     {1'd0,  9'd344}: s1rd0 <= 88;
	     {1'd0,  9'd345}: s1rd0 <= 89;
	     {1'd0,  9'd346}: s1rd0 <= 90;
	     {1'd0,  9'd347}: s1rd0 <= 91;
	     {1'd0,  9'd348}: s1rd0 <= 92;
	     {1'd0,  9'd349}: s1rd0 <= 93;
	     {1'd0,  9'd350}: s1rd0 <= 94;
	     {1'd0,  9'd351}: s1rd0 <= 95;
	     {1'd0,  9'd352}: s1rd0 <= 96;
	     {1'd0,  9'd353}: s1rd0 <= 97;
	     {1'd0,  9'd354}: s1rd0 <= 98;
	     {1'd0,  9'd355}: s1rd0 <= 99;
	     {1'd0,  9'd356}: s1rd0 <= 100;
	     {1'd0,  9'd357}: s1rd0 <= 101;
	     {1'd0,  9'd358}: s1rd0 <= 102;
	     {1'd0,  9'd359}: s1rd0 <= 103;
	     {1'd0,  9'd360}: s1rd0 <= 104;
	     {1'd0,  9'd361}: s1rd0 <= 105;
	     {1'd0,  9'd362}: s1rd0 <= 106;
	     {1'd0,  9'd363}: s1rd0 <= 107;
	     {1'd0,  9'd364}: s1rd0 <= 108;
	     {1'd0,  9'd365}: s1rd0 <= 109;
	     {1'd0,  9'd366}: s1rd0 <= 110;
	     {1'd0,  9'd367}: s1rd0 <= 111;
	     {1'd0,  9'd368}: s1rd0 <= 112;
	     {1'd0,  9'd369}: s1rd0 <= 113;
	     {1'd0,  9'd370}: s1rd0 <= 114;
	     {1'd0,  9'd371}: s1rd0 <= 115;
	     {1'd0,  9'd372}: s1rd0 <= 116;
	     {1'd0,  9'd373}: s1rd0 <= 117;
	     {1'd0,  9'd374}: s1rd0 <= 118;
	     {1'd0,  9'd375}: s1rd0 <= 119;
	     {1'd0,  9'd376}: s1rd0 <= 120;
	     {1'd0,  9'd377}: s1rd0 <= 121;
	     {1'd0,  9'd378}: s1rd0 <= 122;
	     {1'd0,  9'd379}: s1rd0 <= 123;
	     {1'd0,  9'd380}: s1rd0 <= 124;
	     {1'd0,  9'd381}: s1rd0 <= 125;
	     {1'd0,  9'd382}: s1rd0 <= 126;
	     {1'd0,  9'd383}: s1rd0 <= 127;
	     {1'd0,  9'd384}: s1rd0 <= 128;
	     {1'd0,  9'd385}: s1rd0 <= 129;
	     {1'd0,  9'd386}: s1rd0 <= 130;
	     {1'd0,  9'd387}: s1rd0 <= 131;
	     {1'd0,  9'd388}: s1rd0 <= 132;
	     {1'd0,  9'd389}: s1rd0 <= 133;
	     {1'd0,  9'd390}: s1rd0 <= 134;
	     {1'd0,  9'd391}: s1rd0 <= 135;
	     {1'd0,  9'd392}: s1rd0 <= 136;
	     {1'd0,  9'd393}: s1rd0 <= 137;
	     {1'd0,  9'd394}: s1rd0 <= 138;
	     {1'd0,  9'd395}: s1rd0 <= 139;
	     {1'd0,  9'd396}: s1rd0 <= 140;
	     {1'd0,  9'd397}: s1rd0 <= 141;
	     {1'd0,  9'd398}: s1rd0 <= 142;
	     {1'd0,  9'd399}: s1rd0 <= 143;
	     {1'd0,  9'd400}: s1rd0 <= 144;
	     {1'd0,  9'd401}: s1rd0 <= 145;
	     {1'd0,  9'd402}: s1rd0 <= 146;
	     {1'd0,  9'd403}: s1rd0 <= 147;
	     {1'd0,  9'd404}: s1rd0 <= 148;
	     {1'd0,  9'd405}: s1rd0 <= 149;
	     {1'd0,  9'd406}: s1rd0 <= 150;
	     {1'd0,  9'd407}: s1rd0 <= 151;
	     {1'd0,  9'd408}: s1rd0 <= 152;
	     {1'd0,  9'd409}: s1rd0 <= 153;
	     {1'd0,  9'd410}: s1rd0 <= 154;
	     {1'd0,  9'd411}: s1rd0 <= 155;
	     {1'd0,  9'd412}: s1rd0 <= 156;
	     {1'd0,  9'd413}: s1rd0 <= 157;
	     {1'd0,  9'd414}: s1rd0 <= 158;
	     {1'd0,  9'd415}: s1rd0 <= 159;
	     {1'd0,  9'd416}: s1rd0 <= 160;
	     {1'd0,  9'd417}: s1rd0 <= 161;
	     {1'd0,  9'd418}: s1rd0 <= 162;
	     {1'd0,  9'd419}: s1rd0 <= 163;
	     {1'd0,  9'd420}: s1rd0 <= 164;
	     {1'd0,  9'd421}: s1rd0 <= 165;
	     {1'd0,  9'd422}: s1rd0 <= 166;
	     {1'd0,  9'd423}: s1rd0 <= 167;
	     {1'd0,  9'd424}: s1rd0 <= 168;
	     {1'd0,  9'd425}: s1rd0 <= 169;
	     {1'd0,  9'd426}: s1rd0 <= 170;
	     {1'd0,  9'd427}: s1rd0 <= 171;
	     {1'd0,  9'd428}: s1rd0 <= 172;
	     {1'd0,  9'd429}: s1rd0 <= 173;
	     {1'd0,  9'd430}: s1rd0 <= 174;
	     {1'd0,  9'd431}: s1rd0 <= 175;
	     {1'd0,  9'd432}: s1rd0 <= 176;
	     {1'd0,  9'd433}: s1rd0 <= 177;
	     {1'd0,  9'd434}: s1rd0 <= 178;
	     {1'd0,  9'd435}: s1rd0 <= 179;
	     {1'd0,  9'd436}: s1rd0 <= 180;
	     {1'd0,  9'd437}: s1rd0 <= 181;
	     {1'd0,  9'd438}: s1rd0 <= 182;
	     {1'd0,  9'd439}: s1rd0 <= 183;
	     {1'd0,  9'd440}: s1rd0 <= 184;
	     {1'd0,  9'd441}: s1rd0 <= 185;
	     {1'd0,  9'd442}: s1rd0 <= 186;
	     {1'd0,  9'd443}: s1rd0 <= 187;
	     {1'd0,  9'd444}: s1rd0 <= 188;
	     {1'd0,  9'd445}: s1rd0 <= 189;
	     {1'd0,  9'd446}: s1rd0 <= 190;
	     {1'd0,  9'd447}: s1rd0 <= 191;
	     {1'd0,  9'd448}: s1rd0 <= 192;
	     {1'd0,  9'd449}: s1rd0 <= 193;
	     {1'd0,  9'd450}: s1rd0 <= 194;
	     {1'd0,  9'd451}: s1rd0 <= 195;
	     {1'd0,  9'd452}: s1rd0 <= 196;
	     {1'd0,  9'd453}: s1rd0 <= 197;
	     {1'd0,  9'd454}: s1rd0 <= 198;
	     {1'd0,  9'd455}: s1rd0 <= 199;
	     {1'd0,  9'd456}: s1rd0 <= 200;
	     {1'd0,  9'd457}: s1rd0 <= 201;
	     {1'd0,  9'd458}: s1rd0 <= 202;
	     {1'd0,  9'd459}: s1rd0 <= 203;
	     {1'd0,  9'd460}: s1rd0 <= 204;
	     {1'd0,  9'd461}: s1rd0 <= 205;
	     {1'd0,  9'd462}: s1rd0 <= 206;
	     {1'd0,  9'd463}: s1rd0 <= 207;
	     {1'd0,  9'd464}: s1rd0 <= 208;
	     {1'd0,  9'd465}: s1rd0 <= 209;
	     {1'd0,  9'd466}: s1rd0 <= 210;
	     {1'd0,  9'd467}: s1rd0 <= 211;
	     {1'd0,  9'd468}: s1rd0 <= 212;
	     {1'd0,  9'd469}: s1rd0 <= 213;
	     {1'd0,  9'd470}: s1rd0 <= 214;
	     {1'd0,  9'd471}: s1rd0 <= 215;
	     {1'd0,  9'd472}: s1rd0 <= 216;
	     {1'd0,  9'd473}: s1rd0 <= 217;
	     {1'd0,  9'd474}: s1rd0 <= 218;
	     {1'd0,  9'd475}: s1rd0 <= 219;
	     {1'd0,  9'd476}: s1rd0 <= 220;
	     {1'd0,  9'd477}: s1rd0 <= 221;
	     {1'd0,  9'd478}: s1rd0 <= 222;
	     {1'd0,  9'd479}: s1rd0 <= 223;
	     {1'd0,  9'd480}: s1rd0 <= 224;
	     {1'd0,  9'd481}: s1rd0 <= 225;
	     {1'd0,  9'd482}: s1rd0 <= 226;
	     {1'd0,  9'd483}: s1rd0 <= 227;
	     {1'd0,  9'd484}: s1rd0 <= 228;
	     {1'd0,  9'd485}: s1rd0 <= 229;
	     {1'd0,  9'd486}: s1rd0 <= 230;
	     {1'd0,  9'd487}: s1rd0 <= 231;
	     {1'd0,  9'd488}: s1rd0 <= 232;
	     {1'd0,  9'd489}: s1rd0 <= 233;
	     {1'd0,  9'd490}: s1rd0 <= 234;
	     {1'd0,  9'd491}: s1rd0 <= 235;
	     {1'd0,  9'd492}: s1rd0 <= 236;
	     {1'd0,  9'd493}: s1rd0 <= 237;
	     {1'd0,  9'd494}: s1rd0 <= 238;
	     {1'd0,  9'd495}: s1rd0 <= 239;
	     {1'd0,  9'd496}: s1rd0 <= 240;
	     {1'd0,  9'd497}: s1rd0 <= 241;
	     {1'd0,  9'd498}: s1rd0 <= 242;
	     {1'd0,  9'd499}: s1rd0 <= 243;
	     {1'd0,  9'd500}: s1rd0 <= 244;
	     {1'd0,  9'd501}: s1rd0 <= 245;
	     {1'd0,  9'd502}: s1rd0 <= 246;
	     {1'd0,  9'd503}: s1rd0 <= 247;
	     {1'd0,  9'd504}: s1rd0 <= 248;
	     {1'd0,  9'd505}: s1rd0 <= 249;
	     {1'd0,  9'd506}: s1rd0 <= 250;
	     {1'd0,  9'd507}: s1rd0 <= 251;
	     {1'd0,  9'd508}: s1rd0 <= 252;
	     {1'd0,  9'd509}: s1rd0 <= 253;
	     {1'd0,  9'd510}: s1rd0 <= 254;
	     {1'd0,  9'd511}: s1rd0 <= 255;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm41_d, s1rdloc})
	     {1'd0,  9'd0}: s1rd1 <= 0;
	     {1'd0,  9'd1}: s1rd1 <= 1;
	     {1'd0,  9'd2}: s1rd1 <= 2;
	     {1'd0,  9'd3}: s1rd1 <= 3;
	     {1'd0,  9'd4}: s1rd1 <= 4;
	     {1'd0,  9'd5}: s1rd1 <= 5;
	     {1'd0,  9'd6}: s1rd1 <= 6;
	     {1'd0,  9'd7}: s1rd1 <= 7;
	     {1'd0,  9'd8}: s1rd1 <= 8;
	     {1'd0,  9'd9}: s1rd1 <= 9;
	     {1'd0,  9'd10}: s1rd1 <= 10;
	     {1'd0,  9'd11}: s1rd1 <= 11;
	     {1'd0,  9'd12}: s1rd1 <= 12;
	     {1'd0,  9'd13}: s1rd1 <= 13;
	     {1'd0,  9'd14}: s1rd1 <= 14;
	     {1'd0,  9'd15}: s1rd1 <= 15;
	     {1'd0,  9'd16}: s1rd1 <= 16;
	     {1'd0,  9'd17}: s1rd1 <= 17;
	     {1'd0,  9'd18}: s1rd1 <= 18;
	     {1'd0,  9'd19}: s1rd1 <= 19;
	     {1'd0,  9'd20}: s1rd1 <= 20;
	     {1'd0,  9'd21}: s1rd1 <= 21;
	     {1'd0,  9'd22}: s1rd1 <= 22;
	     {1'd0,  9'd23}: s1rd1 <= 23;
	     {1'd0,  9'd24}: s1rd1 <= 24;
	     {1'd0,  9'd25}: s1rd1 <= 25;
	     {1'd0,  9'd26}: s1rd1 <= 26;
	     {1'd0,  9'd27}: s1rd1 <= 27;
	     {1'd0,  9'd28}: s1rd1 <= 28;
	     {1'd0,  9'd29}: s1rd1 <= 29;
	     {1'd0,  9'd30}: s1rd1 <= 30;
	     {1'd0,  9'd31}: s1rd1 <= 31;
	     {1'd0,  9'd32}: s1rd1 <= 32;
	     {1'd0,  9'd33}: s1rd1 <= 33;
	     {1'd0,  9'd34}: s1rd1 <= 34;
	     {1'd0,  9'd35}: s1rd1 <= 35;
	     {1'd0,  9'd36}: s1rd1 <= 36;
	     {1'd0,  9'd37}: s1rd1 <= 37;
	     {1'd0,  9'd38}: s1rd1 <= 38;
	     {1'd0,  9'd39}: s1rd1 <= 39;
	     {1'd0,  9'd40}: s1rd1 <= 40;
	     {1'd0,  9'd41}: s1rd1 <= 41;
	     {1'd0,  9'd42}: s1rd1 <= 42;
	     {1'd0,  9'd43}: s1rd1 <= 43;
	     {1'd0,  9'd44}: s1rd1 <= 44;
	     {1'd0,  9'd45}: s1rd1 <= 45;
	     {1'd0,  9'd46}: s1rd1 <= 46;
	     {1'd0,  9'd47}: s1rd1 <= 47;
	     {1'd0,  9'd48}: s1rd1 <= 48;
	     {1'd0,  9'd49}: s1rd1 <= 49;
	     {1'd0,  9'd50}: s1rd1 <= 50;
	     {1'd0,  9'd51}: s1rd1 <= 51;
	     {1'd0,  9'd52}: s1rd1 <= 52;
	     {1'd0,  9'd53}: s1rd1 <= 53;
	     {1'd0,  9'd54}: s1rd1 <= 54;
	     {1'd0,  9'd55}: s1rd1 <= 55;
	     {1'd0,  9'd56}: s1rd1 <= 56;
	     {1'd0,  9'd57}: s1rd1 <= 57;
	     {1'd0,  9'd58}: s1rd1 <= 58;
	     {1'd0,  9'd59}: s1rd1 <= 59;
	     {1'd0,  9'd60}: s1rd1 <= 60;
	     {1'd0,  9'd61}: s1rd1 <= 61;
	     {1'd0,  9'd62}: s1rd1 <= 62;
	     {1'd0,  9'd63}: s1rd1 <= 63;
	     {1'd0,  9'd64}: s1rd1 <= 64;
	     {1'd0,  9'd65}: s1rd1 <= 65;
	     {1'd0,  9'd66}: s1rd1 <= 66;
	     {1'd0,  9'd67}: s1rd1 <= 67;
	     {1'd0,  9'd68}: s1rd1 <= 68;
	     {1'd0,  9'd69}: s1rd1 <= 69;
	     {1'd0,  9'd70}: s1rd1 <= 70;
	     {1'd0,  9'd71}: s1rd1 <= 71;
	     {1'd0,  9'd72}: s1rd1 <= 72;
	     {1'd0,  9'd73}: s1rd1 <= 73;
	     {1'd0,  9'd74}: s1rd1 <= 74;
	     {1'd0,  9'd75}: s1rd1 <= 75;
	     {1'd0,  9'd76}: s1rd1 <= 76;
	     {1'd0,  9'd77}: s1rd1 <= 77;
	     {1'd0,  9'd78}: s1rd1 <= 78;
	     {1'd0,  9'd79}: s1rd1 <= 79;
	     {1'd0,  9'd80}: s1rd1 <= 80;
	     {1'd0,  9'd81}: s1rd1 <= 81;
	     {1'd0,  9'd82}: s1rd1 <= 82;
	     {1'd0,  9'd83}: s1rd1 <= 83;
	     {1'd0,  9'd84}: s1rd1 <= 84;
	     {1'd0,  9'd85}: s1rd1 <= 85;
	     {1'd0,  9'd86}: s1rd1 <= 86;
	     {1'd0,  9'd87}: s1rd1 <= 87;
	     {1'd0,  9'd88}: s1rd1 <= 88;
	     {1'd0,  9'd89}: s1rd1 <= 89;
	     {1'd0,  9'd90}: s1rd1 <= 90;
	     {1'd0,  9'd91}: s1rd1 <= 91;
	     {1'd0,  9'd92}: s1rd1 <= 92;
	     {1'd0,  9'd93}: s1rd1 <= 93;
	     {1'd0,  9'd94}: s1rd1 <= 94;
	     {1'd0,  9'd95}: s1rd1 <= 95;
	     {1'd0,  9'd96}: s1rd1 <= 96;
	     {1'd0,  9'd97}: s1rd1 <= 97;
	     {1'd0,  9'd98}: s1rd1 <= 98;
	     {1'd0,  9'd99}: s1rd1 <= 99;
	     {1'd0,  9'd100}: s1rd1 <= 100;
	     {1'd0,  9'd101}: s1rd1 <= 101;
	     {1'd0,  9'd102}: s1rd1 <= 102;
	     {1'd0,  9'd103}: s1rd1 <= 103;
	     {1'd0,  9'd104}: s1rd1 <= 104;
	     {1'd0,  9'd105}: s1rd1 <= 105;
	     {1'd0,  9'd106}: s1rd1 <= 106;
	     {1'd0,  9'd107}: s1rd1 <= 107;
	     {1'd0,  9'd108}: s1rd1 <= 108;
	     {1'd0,  9'd109}: s1rd1 <= 109;
	     {1'd0,  9'd110}: s1rd1 <= 110;
	     {1'd0,  9'd111}: s1rd1 <= 111;
	     {1'd0,  9'd112}: s1rd1 <= 112;
	     {1'd0,  9'd113}: s1rd1 <= 113;
	     {1'd0,  9'd114}: s1rd1 <= 114;
	     {1'd0,  9'd115}: s1rd1 <= 115;
	     {1'd0,  9'd116}: s1rd1 <= 116;
	     {1'd0,  9'd117}: s1rd1 <= 117;
	     {1'd0,  9'd118}: s1rd1 <= 118;
	     {1'd0,  9'd119}: s1rd1 <= 119;
	     {1'd0,  9'd120}: s1rd1 <= 120;
	     {1'd0,  9'd121}: s1rd1 <= 121;
	     {1'd0,  9'd122}: s1rd1 <= 122;
	     {1'd0,  9'd123}: s1rd1 <= 123;
	     {1'd0,  9'd124}: s1rd1 <= 124;
	     {1'd0,  9'd125}: s1rd1 <= 125;
	     {1'd0,  9'd126}: s1rd1 <= 126;
	     {1'd0,  9'd127}: s1rd1 <= 127;
	     {1'd0,  9'd128}: s1rd1 <= 128;
	     {1'd0,  9'd129}: s1rd1 <= 129;
	     {1'd0,  9'd130}: s1rd1 <= 130;
	     {1'd0,  9'd131}: s1rd1 <= 131;
	     {1'd0,  9'd132}: s1rd1 <= 132;
	     {1'd0,  9'd133}: s1rd1 <= 133;
	     {1'd0,  9'd134}: s1rd1 <= 134;
	     {1'd0,  9'd135}: s1rd1 <= 135;
	     {1'd0,  9'd136}: s1rd1 <= 136;
	     {1'd0,  9'd137}: s1rd1 <= 137;
	     {1'd0,  9'd138}: s1rd1 <= 138;
	     {1'd0,  9'd139}: s1rd1 <= 139;
	     {1'd0,  9'd140}: s1rd1 <= 140;
	     {1'd0,  9'd141}: s1rd1 <= 141;
	     {1'd0,  9'd142}: s1rd1 <= 142;
	     {1'd0,  9'd143}: s1rd1 <= 143;
	     {1'd0,  9'd144}: s1rd1 <= 144;
	     {1'd0,  9'd145}: s1rd1 <= 145;
	     {1'd0,  9'd146}: s1rd1 <= 146;
	     {1'd0,  9'd147}: s1rd1 <= 147;
	     {1'd0,  9'd148}: s1rd1 <= 148;
	     {1'd0,  9'd149}: s1rd1 <= 149;
	     {1'd0,  9'd150}: s1rd1 <= 150;
	     {1'd0,  9'd151}: s1rd1 <= 151;
	     {1'd0,  9'd152}: s1rd1 <= 152;
	     {1'd0,  9'd153}: s1rd1 <= 153;
	     {1'd0,  9'd154}: s1rd1 <= 154;
	     {1'd0,  9'd155}: s1rd1 <= 155;
	     {1'd0,  9'd156}: s1rd1 <= 156;
	     {1'd0,  9'd157}: s1rd1 <= 157;
	     {1'd0,  9'd158}: s1rd1 <= 158;
	     {1'd0,  9'd159}: s1rd1 <= 159;
	     {1'd0,  9'd160}: s1rd1 <= 160;
	     {1'd0,  9'd161}: s1rd1 <= 161;
	     {1'd0,  9'd162}: s1rd1 <= 162;
	     {1'd0,  9'd163}: s1rd1 <= 163;
	     {1'd0,  9'd164}: s1rd1 <= 164;
	     {1'd0,  9'd165}: s1rd1 <= 165;
	     {1'd0,  9'd166}: s1rd1 <= 166;
	     {1'd0,  9'd167}: s1rd1 <= 167;
	     {1'd0,  9'd168}: s1rd1 <= 168;
	     {1'd0,  9'd169}: s1rd1 <= 169;
	     {1'd0,  9'd170}: s1rd1 <= 170;
	     {1'd0,  9'd171}: s1rd1 <= 171;
	     {1'd0,  9'd172}: s1rd1 <= 172;
	     {1'd0,  9'd173}: s1rd1 <= 173;
	     {1'd0,  9'd174}: s1rd1 <= 174;
	     {1'd0,  9'd175}: s1rd1 <= 175;
	     {1'd0,  9'd176}: s1rd1 <= 176;
	     {1'd0,  9'd177}: s1rd1 <= 177;
	     {1'd0,  9'd178}: s1rd1 <= 178;
	     {1'd0,  9'd179}: s1rd1 <= 179;
	     {1'd0,  9'd180}: s1rd1 <= 180;
	     {1'd0,  9'd181}: s1rd1 <= 181;
	     {1'd0,  9'd182}: s1rd1 <= 182;
	     {1'd0,  9'd183}: s1rd1 <= 183;
	     {1'd0,  9'd184}: s1rd1 <= 184;
	     {1'd0,  9'd185}: s1rd1 <= 185;
	     {1'd0,  9'd186}: s1rd1 <= 186;
	     {1'd0,  9'd187}: s1rd1 <= 187;
	     {1'd0,  9'd188}: s1rd1 <= 188;
	     {1'd0,  9'd189}: s1rd1 <= 189;
	     {1'd0,  9'd190}: s1rd1 <= 190;
	     {1'd0,  9'd191}: s1rd1 <= 191;
	     {1'd0,  9'd192}: s1rd1 <= 192;
	     {1'd0,  9'd193}: s1rd1 <= 193;
	     {1'd0,  9'd194}: s1rd1 <= 194;
	     {1'd0,  9'd195}: s1rd1 <= 195;
	     {1'd0,  9'd196}: s1rd1 <= 196;
	     {1'd0,  9'd197}: s1rd1 <= 197;
	     {1'd0,  9'd198}: s1rd1 <= 198;
	     {1'd0,  9'd199}: s1rd1 <= 199;
	     {1'd0,  9'd200}: s1rd1 <= 200;
	     {1'd0,  9'd201}: s1rd1 <= 201;
	     {1'd0,  9'd202}: s1rd1 <= 202;
	     {1'd0,  9'd203}: s1rd1 <= 203;
	     {1'd0,  9'd204}: s1rd1 <= 204;
	     {1'd0,  9'd205}: s1rd1 <= 205;
	     {1'd0,  9'd206}: s1rd1 <= 206;
	     {1'd0,  9'd207}: s1rd1 <= 207;
	     {1'd0,  9'd208}: s1rd1 <= 208;
	     {1'd0,  9'd209}: s1rd1 <= 209;
	     {1'd0,  9'd210}: s1rd1 <= 210;
	     {1'd0,  9'd211}: s1rd1 <= 211;
	     {1'd0,  9'd212}: s1rd1 <= 212;
	     {1'd0,  9'd213}: s1rd1 <= 213;
	     {1'd0,  9'd214}: s1rd1 <= 214;
	     {1'd0,  9'd215}: s1rd1 <= 215;
	     {1'd0,  9'd216}: s1rd1 <= 216;
	     {1'd0,  9'd217}: s1rd1 <= 217;
	     {1'd0,  9'd218}: s1rd1 <= 218;
	     {1'd0,  9'd219}: s1rd1 <= 219;
	     {1'd0,  9'd220}: s1rd1 <= 220;
	     {1'd0,  9'd221}: s1rd1 <= 221;
	     {1'd0,  9'd222}: s1rd1 <= 222;
	     {1'd0,  9'd223}: s1rd1 <= 223;
	     {1'd0,  9'd224}: s1rd1 <= 224;
	     {1'd0,  9'd225}: s1rd1 <= 225;
	     {1'd0,  9'd226}: s1rd1 <= 226;
	     {1'd0,  9'd227}: s1rd1 <= 227;
	     {1'd0,  9'd228}: s1rd1 <= 228;
	     {1'd0,  9'd229}: s1rd1 <= 229;
	     {1'd0,  9'd230}: s1rd1 <= 230;
	     {1'd0,  9'd231}: s1rd1 <= 231;
	     {1'd0,  9'd232}: s1rd1 <= 232;
	     {1'd0,  9'd233}: s1rd1 <= 233;
	     {1'd0,  9'd234}: s1rd1 <= 234;
	     {1'd0,  9'd235}: s1rd1 <= 235;
	     {1'd0,  9'd236}: s1rd1 <= 236;
	     {1'd0,  9'd237}: s1rd1 <= 237;
	     {1'd0,  9'd238}: s1rd1 <= 238;
	     {1'd0,  9'd239}: s1rd1 <= 239;
	     {1'd0,  9'd240}: s1rd1 <= 240;
	     {1'd0,  9'd241}: s1rd1 <= 241;
	     {1'd0,  9'd242}: s1rd1 <= 242;
	     {1'd0,  9'd243}: s1rd1 <= 243;
	     {1'd0,  9'd244}: s1rd1 <= 244;
	     {1'd0,  9'd245}: s1rd1 <= 245;
	     {1'd0,  9'd246}: s1rd1 <= 246;
	     {1'd0,  9'd247}: s1rd1 <= 247;
	     {1'd0,  9'd248}: s1rd1 <= 248;
	     {1'd0,  9'd249}: s1rd1 <= 249;
	     {1'd0,  9'd250}: s1rd1 <= 250;
	     {1'd0,  9'd251}: s1rd1 <= 251;
	     {1'd0,  9'd252}: s1rd1 <= 252;
	     {1'd0,  9'd253}: s1rd1 <= 253;
	     {1'd0,  9'd254}: s1rd1 <= 254;
	     {1'd0,  9'd255}: s1rd1 <= 255;
	     {1'd0,  9'd256}: s1rd1 <= 256;
	     {1'd0,  9'd257}: s1rd1 <= 257;
	     {1'd0,  9'd258}: s1rd1 <= 258;
	     {1'd0,  9'd259}: s1rd1 <= 259;
	     {1'd0,  9'd260}: s1rd1 <= 260;
	     {1'd0,  9'd261}: s1rd1 <= 261;
	     {1'd0,  9'd262}: s1rd1 <= 262;
	     {1'd0,  9'd263}: s1rd1 <= 263;
	     {1'd0,  9'd264}: s1rd1 <= 264;
	     {1'd0,  9'd265}: s1rd1 <= 265;
	     {1'd0,  9'd266}: s1rd1 <= 266;
	     {1'd0,  9'd267}: s1rd1 <= 267;
	     {1'd0,  9'd268}: s1rd1 <= 268;
	     {1'd0,  9'd269}: s1rd1 <= 269;
	     {1'd0,  9'd270}: s1rd1 <= 270;
	     {1'd0,  9'd271}: s1rd1 <= 271;
	     {1'd0,  9'd272}: s1rd1 <= 272;
	     {1'd0,  9'd273}: s1rd1 <= 273;
	     {1'd0,  9'd274}: s1rd1 <= 274;
	     {1'd0,  9'd275}: s1rd1 <= 275;
	     {1'd0,  9'd276}: s1rd1 <= 276;
	     {1'd0,  9'd277}: s1rd1 <= 277;
	     {1'd0,  9'd278}: s1rd1 <= 278;
	     {1'd0,  9'd279}: s1rd1 <= 279;
	     {1'd0,  9'd280}: s1rd1 <= 280;
	     {1'd0,  9'd281}: s1rd1 <= 281;
	     {1'd0,  9'd282}: s1rd1 <= 282;
	     {1'd0,  9'd283}: s1rd1 <= 283;
	     {1'd0,  9'd284}: s1rd1 <= 284;
	     {1'd0,  9'd285}: s1rd1 <= 285;
	     {1'd0,  9'd286}: s1rd1 <= 286;
	     {1'd0,  9'd287}: s1rd1 <= 287;
	     {1'd0,  9'd288}: s1rd1 <= 288;
	     {1'd0,  9'd289}: s1rd1 <= 289;
	     {1'd0,  9'd290}: s1rd1 <= 290;
	     {1'd0,  9'd291}: s1rd1 <= 291;
	     {1'd0,  9'd292}: s1rd1 <= 292;
	     {1'd0,  9'd293}: s1rd1 <= 293;
	     {1'd0,  9'd294}: s1rd1 <= 294;
	     {1'd0,  9'd295}: s1rd1 <= 295;
	     {1'd0,  9'd296}: s1rd1 <= 296;
	     {1'd0,  9'd297}: s1rd1 <= 297;
	     {1'd0,  9'd298}: s1rd1 <= 298;
	     {1'd0,  9'd299}: s1rd1 <= 299;
	     {1'd0,  9'd300}: s1rd1 <= 300;
	     {1'd0,  9'd301}: s1rd1 <= 301;
	     {1'd0,  9'd302}: s1rd1 <= 302;
	     {1'd0,  9'd303}: s1rd1 <= 303;
	     {1'd0,  9'd304}: s1rd1 <= 304;
	     {1'd0,  9'd305}: s1rd1 <= 305;
	     {1'd0,  9'd306}: s1rd1 <= 306;
	     {1'd0,  9'd307}: s1rd1 <= 307;
	     {1'd0,  9'd308}: s1rd1 <= 308;
	     {1'd0,  9'd309}: s1rd1 <= 309;
	     {1'd0,  9'd310}: s1rd1 <= 310;
	     {1'd0,  9'd311}: s1rd1 <= 311;
	     {1'd0,  9'd312}: s1rd1 <= 312;
	     {1'd0,  9'd313}: s1rd1 <= 313;
	     {1'd0,  9'd314}: s1rd1 <= 314;
	     {1'd0,  9'd315}: s1rd1 <= 315;
	     {1'd0,  9'd316}: s1rd1 <= 316;
	     {1'd0,  9'd317}: s1rd1 <= 317;
	     {1'd0,  9'd318}: s1rd1 <= 318;
	     {1'd0,  9'd319}: s1rd1 <= 319;
	     {1'd0,  9'd320}: s1rd1 <= 320;
	     {1'd0,  9'd321}: s1rd1 <= 321;
	     {1'd0,  9'd322}: s1rd1 <= 322;
	     {1'd0,  9'd323}: s1rd1 <= 323;
	     {1'd0,  9'd324}: s1rd1 <= 324;
	     {1'd0,  9'd325}: s1rd1 <= 325;
	     {1'd0,  9'd326}: s1rd1 <= 326;
	     {1'd0,  9'd327}: s1rd1 <= 327;
	     {1'd0,  9'd328}: s1rd1 <= 328;
	     {1'd0,  9'd329}: s1rd1 <= 329;
	     {1'd0,  9'd330}: s1rd1 <= 330;
	     {1'd0,  9'd331}: s1rd1 <= 331;
	     {1'd0,  9'd332}: s1rd1 <= 332;
	     {1'd0,  9'd333}: s1rd1 <= 333;
	     {1'd0,  9'd334}: s1rd1 <= 334;
	     {1'd0,  9'd335}: s1rd1 <= 335;
	     {1'd0,  9'd336}: s1rd1 <= 336;
	     {1'd0,  9'd337}: s1rd1 <= 337;
	     {1'd0,  9'd338}: s1rd1 <= 338;
	     {1'd0,  9'd339}: s1rd1 <= 339;
	     {1'd0,  9'd340}: s1rd1 <= 340;
	     {1'd0,  9'd341}: s1rd1 <= 341;
	     {1'd0,  9'd342}: s1rd1 <= 342;
	     {1'd0,  9'd343}: s1rd1 <= 343;
	     {1'd0,  9'd344}: s1rd1 <= 344;
	     {1'd0,  9'd345}: s1rd1 <= 345;
	     {1'd0,  9'd346}: s1rd1 <= 346;
	     {1'd0,  9'd347}: s1rd1 <= 347;
	     {1'd0,  9'd348}: s1rd1 <= 348;
	     {1'd0,  9'd349}: s1rd1 <= 349;
	     {1'd0,  9'd350}: s1rd1 <= 350;
	     {1'd0,  9'd351}: s1rd1 <= 351;
	     {1'd0,  9'd352}: s1rd1 <= 352;
	     {1'd0,  9'd353}: s1rd1 <= 353;
	     {1'd0,  9'd354}: s1rd1 <= 354;
	     {1'd0,  9'd355}: s1rd1 <= 355;
	     {1'd0,  9'd356}: s1rd1 <= 356;
	     {1'd0,  9'd357}: s1rd1 <= 357;
	     {1'd0,  9'd358}: s1rd1 <= 358;
	     {1'd0,  9'd359}: s1rd1 <= 359;
	     {1'd0,  9'd360}: s1rd1 <= 360;
	     {1'd0,  9'd361}: s1rd1 <= 361;
	     {1'd0,  9'd362}: s1rd1 <= 362;
	     {1'd0,  9'd363}: s1rd1 <= 363;
	     {1'd0,  9'd364}: s1rd1 <= 364;
	     {1'd0,  9'd365}: s1rd1 <= 365;
	     {1'd0,  9'd366}: s1rd1 <= 366;
	     {1'd0,  9'd367}: s1rd1 <= 367;
	     {1'd0,  9'd368}: s1rd1 <= 368;
	     {1'd0,  9'd369}: s1rd1 <= 369;
	     {1'd0,  9'd370}: s1rd1 <= 370;
	     {1'd0,  9'd371}: s1rd1 <= 371;
	     {1'd0,  9'd372}: s1rd1 <= 372;
	     {1'd0,  9'd373}: s1rd1 <= 373;
	     {1'd0,  9'd374}: s1rd1 <= 374;
	     {1'd0,  9'd375}: s1rd1 <= 375;
	     {1'd0,  9'd376}: s1rd1 <= 376;
	     {1'd0,  9'd377}: s1rd1 <= 377;
	     {1'd0,  9'd378}: s1rd1 <= 378;
	     {1'd0,  9'd379}: s1rd1 <= 379;
	     {1'd0,  9'd380}: s1rd1 <= 380;
	     {1'd0,  9'd381}: s1rd1 <= 381;
	     {1'd0,  9'd382}: s1rd1 <= 382;
	     {1'd0,  9'd383}: s1rd1 <= 383;
	     {1'd0,  9'd384}: s1rd1 <= 384;
	     {1'd0,  9'd385}: s1rd1 <= 385;
	     {1'd0,  9'd386}: s1rd1 <= 386;
	     {1'd0,  9'd387}: s1rd1 <= 387;
	     {1'd0,  9'd388}: s1rd1 <= 388;
	     {1'd0,  9'd389}: s1rd1 <= 389;
	     {1'd0,  9'd390}: s1rd1 <= 390;
	     {1'd0,  9'd391}: s1rd1 <= 391;
	     {1'd0,  9'd392}: s1rd1 <= 392;
	     {1'd0,  9'd393}: s1rd1 <= 393;
	     {1'd0,  9'd394}: s1rd1 <= 394;
	     {1'd0,  9'd395}: s1rd1 <= 395;
	     {1'd0,  9'd396}: s1rd1 <= 396;
	     {1'd0,  9'd397}: s1rd1 <= 397;
	     {1'd0,  9'd398}: s1rd1 <= 398;
	     {1'd0,  9'd399}: s1rd1 <= 399;
	     {1'd0,  9'd400}: s1rd1 <= 400;
	     {1'd0,  9'd401}: s1rd1 <= 401;
	     {1'd0,  9'd402}: s1rd1 <= 402;
	     {1'd0,  9'd403}: s1rd1 <= 403;
	     {1'd0,  9'd404}: s1rd1 <= 404;
	     {1'd0,  9'd405}: s1rd1 <= 405;
	     {1'd0,  9'd406}: s1rd1 <= 406;
	     {1'd0,  9'd407}: s1rd1 <= 407;
	     {1'd0,  9'd408}: s1rd1 <= 408;
	     {1'd0,  9'd409}: s1rd1 <= 409;
	     {1'd0,  9'd410}: s1rd1 <= 410;
	     {1'd0,  9'd411}: s1rd1 <= 411;
	     {1'd0,  9'd412}: s1rd1 <= 412;
	     {1'd0,  9'd413}: s1rd1 <= 413;
	     {1'd0,  9'd414}: s1rd1 <= 414;
	     {1'd0,  9'd415}: s1rd1 <= 415;
	     {1'd0,  9'd416}: s1rd1 <= 416;
	     {1'd0,  9'd417}: s1rd1 <= 417;
	     {1'd0,  9'd418}: s1rd1 <= 418;
	     {1'd0,  9'd419}: s1rd1 <= 419;
	     {1'd0,  9'd420}: s1rd1 <= 420;
	     {1'd0,  9'd421}: s1rd1 <= 421;
	     {1'd0,  9'd422}: s1rd1 <= 422;
	     {1'd0,  9'd423}: s1rd1 <= 423;
	     {1'd0,  9'd424}: s1rd1 <= 424;
	     {1'd0,  9'd425}: s1rd1 <= 425;
	     {1'd0,  9'd426}: s1rd1 <= 426;
	     {1'd0,  9'd427}: s1rd1 <= 427;
	     {1'd0,  9'd428}: s1rd1 <= 428;
	     {1'd0,  9'd429}: s1rd1 <= 429;
	     {1'd0,  9'd430}: s1rd1 <= 430;
	     {1'd0,  9'd431}: s1rd1 <= 431;
	     {1'd0,  9'd432}: s1rd1 <= 432;
	     {1'd0,  9'd433}: s1rd1 <= 433;
	     {1'd0,  9'd434}: s1rd1 <= 434;
	     {1'd0,  9'd435}: s1rd1 <= 435;
	     {1'd0,  9'd436}: s1rd1 <= 436;
	     {1'd0,  9'd437}: s1rd1 <= 437;
	     {1'd0,  9'd438}: s1rd1 <= 438;
	     {1'd0,  9'd439}: s1rd1 <= 439;
	     {1'd0,  9'd440}: s1rd1 <= 440;
	     {1'd0,  9'd441}: s1rd1 <= 441;
	     {1'd0,  9'd442}: s1rd1 <= 442;
	     {1'd0,  9'd443}: s1rd1 <= 443;
	     {1'd0,  9'd444}: s1rd1 <= 444;
	     {1'd0,  9'd445}: s1rd1 <= 445;
	     {1'd0,  9'd446}: s1rd1 <= 446;
	     {1'd0,  9'd447}: s1rd1 <= 447;
	     {1'd0,  9'd448}: s1rd1 <= 448;
	     {1'd0,  9'd449}: s1rd1 <= 449;
	     {1'd0,  9'd450}: s1rd1 <= 450;
	     {1'd0,  9'd451}: s1rd1 <= 451;
	     {1'd0,  9'd452}: s1rd1 <= 452;
	     {1'd0,  9'd453}: s1rd1 <= 453;
	     {1'd0,  9'd454}: s1rd1 <= 454;
	     {1'd0,  9'd455}: s1rd1 <= 455;
	     {1'd0,  9'd456}: s1rd1 <= 456;
	     {1'd0,  9'd457}: s1rd1 <= 457;
	     {1'd0,  9'd458}: s1rd1 <= 458;
	     {1'd0,  9'd459}: s1rd1 <= 459;
	     {1'd0,  9'd460}: s1rd1 <= 460;
	     {1'd0,  9'd461}: s1rd1 <= 461;
	     {1'd0,  9'd462}: s1rd1 <= 462;
	     {1'd0,  9'd463}: s1rd1 <= 463;
	     {1'd0,  9'd464}: s1rd1 <= 464;
	     {1'd0,  9'd465}: s1rd1 <= 465;
	     {1'd0,  9'd466}: s1rd1 <= 466;
	     {1'd0,  9'd467}: s1rd1 <= 467;
	     {1'd0,  9'd468}: s1rd1 <= 468;
	     {1'd0,  9'd469}: s1rd1 <= 469;
	     {1'd0,  9'd470}: s1rd1 <= 470;
	     {1'd0,  9'd471}: s1rd1 <= 471;
	     {1'd0,  9'd472}: s1rd1 <= 472;
	     {1'd0,  9'd473}: s1rd1 <= 473;
	     {1'd0,  9'd474}: s1rd1 <= 474;
	     {1'd0,  9'd475}: s1rd1 <= 475;
	     {1'd0,  9'd476}: s1rd1 <= 476;
	     {1'd0,  9'd477}: s1rd1 <= 477;
	     {1'd0,  9'd478}: s1rd1 <= 478;
	     {1'd0,  9'd479}: s1rd1 <= 479;
	     {1'd0,  9'd480}: s1rd1 <= 480;
	     {1'd0,  9'd481}: s1rd1 <= 481;
	     {1'd0,  9'd482}: s1rd1 <= 482;
	     {1'd0,  9'd483}: s1rd1 <= 483;
	     {1'd0,  9'd484}: s1rd1 <= 484;
	     {1'd0,  9'd485}: s1rd1 <= 485;
	     {1'd0,  9'd486}: s1rd1 <= 486;
	     {1'd0,  9'd487}: s1rd1 <= 487;
	     {1'd0,  9'd488}: s1rd1 <= 488;
	     {1'd0,  9'd489}: s1rd1 <= 489;
	     {1'd0,  9'd490}: s1rd1 <= 490;
	     {1'd0,  9'd491}: s1rd1 <= 491;
	     {1'd0,  9'd492}: s1rd1 <= 492;
	     {1'd0,  9'd493}: s1rd1 <= 493;
	     {1'd0,  9'd494}: s1rd1 <= 494;
	     {1'd0,  9'd495}: s1rd1 <= 495;
	     {1'd0,  9'd496}: s1rd1 <= 496;
	     {1'd0,  9'd497}: s1rd1 <= 497;
	     {1'd0,  9'd498}: s1rd1 <= 498;
	     {1'd0,  9'd499}: s1rd1 <= 499;
	     {1'd0,  9'd500}: s1rd1 <= 500;
	     {1'd0,  9'd501}: s1rd1 <= 501;
	     {1'd0,  9'd502}: s1rd1 <= 502;
	     {1'd0,  9'd503}: s1rd1 <= 503;
	     {1'd0,  9'd504}: s1rd1 <= 504;
	     {1'd0,  9'd505}: s1rd1 <= 505;
	     {1'd0,  9'd506}: s1rd1 <= 506;
	     {1'd0,  9'd507}: s1rd1 <= 507;
	     {1'd0,  9'd508}: s1rd1 <= 508;
	     {1'd0,  9'd509}: s1rd1 <= 509;
	     {1'd0,  9'd510}: s1rd1 <= 510;
	     {1'd0,  9'd511}: s1rd1 <= 511;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet69554 sw(tm41_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm41_dd, writeCycle})
	      {1'd0, 9'd0}: s2wr0 <= 256;
	      {1'd0, 9'd1}: s2wr0 <= 257;
	      {1'd0, 9'd2}: s2wr0 <= 258;
	      {1'd0, 9'd3}: s2wr0 <= 259;
	      {1'd0, 9'd4}: s2wr0 <= 260;
	      {1'd0, 9'd5}: s2wr0 <= 261;
	      {1'd0, 9'd6}: s2wr0 <= 262;
	      {1'd0, 9'd7}: s2wr0 <= 263;
	      {1'd0, 9'd8}: s2wr0 <= 264;
	      {1'd0, 9'd9}: s2wr0 <= 265;
	      {1'd0, 9'd10}: s2wr0 <= 266;
	      {1'd0, 9'd11}: s2wr0 <= 267;
	      {1'd0, 9'd12}: s2wr0 <= 268;
	      {1'd0, 9'd13}: s2wr0 <= 269;
	      {1'd0, 9'd14}: s2wr0 <= 270;
	      {1'd0, 9'd15}: s2wr0 <= 271;
	      {1'd0, 9'd16}: s2wr0 <= 272;
	      {1'd0, 9'd17}: s2wr0 <= 273;
	      {1'd0, 9'd18}: s2wr0 <= 274;
	      {1'd0, 9'd19}: s2wr0 <= 275;
	      {1'd0, 9'd20}: s2wr0 <= 276;
	      {1'd0, 9'd21}: s2wr0 <= 277;
	      {1'd0, 9'd22}: s2wr0 <= 278;
	      {1'd0, 9'd23}: s2wr0 <= 279;
	      {1'd0, 9'd24}: s2wr0 <= 280;
	      {1'd0, 9'd25}: s2wr0 <= 281;
	      {1'd0, 9'd26}: s2wr0 <= 282;
	      {1'd0, 9'd27}: s2wr0 <= 283;
	      {1'd0, 9'd28}: s2wr0 <= 284;
	      {1'd0, 9'd29}: s2wr0 <= 285;
	      {1'd0, 9'd30}: s2wr0 <= 286;
	      {1'd0, 9'd31}: s2wr0 <= 287;
	      {1'd0, 9'd32}: s2wr0 <= 288;
	      {1'd0, 9'd33}: s2wr0 <= 289;
	      {1'd0, 9'd34}: s2wr0 <= 290;
	      {1'd0, 9'd35}: s2wr0 <= 291;
	      {1'd0, 9'd36}: s2wr0 <= 292;
	      {1'd0, 9'd37}: s2wr0 <= 293;
	      {1'd0, 9'd38}: s2wr0 <= 294;
	      {1'd0, 9'd39}: s2wr0 <= 295;
	      {1'd0, 9'd40}: s2wr0 <= 296;
	      {1'd0, 9'd41}: s2wr0 <= 297;
	      {1'd0, 9'd42}: s2wr0 <= 298;
	      {1'd0, 9'd43}: s2wr0 <= 299;
	      {1'd0, 9'd44}: s2wr0 <= 300;
	      {1'd0, 9'd45}: s2wr0 <= 301;
	      {1'd0, 9'd46}: s2wr0 <= 302;
	      {1'd0, 9'd47}: s2wr0 <= 303;
	      {1'd0, 9'd48}: s2wr0 <= 304;
	      {1'd0, 9'd49}: s2wr0 <= 305;
	      {1'd0, 9'd50}: s2wr0 <= 306;
	      {1'd0, 9'd51}: s2wr0 <= 307;
	      {1'd0, 9'd52}: s2wr0 <= 308;
	      {1'd0, 9'd53}: s2wr0 <= 309;
	      {1'd0, 9'd54}: s2wr0 <= 310;
	      {1'd0, 9'd55}: s2wr0 <= 311;
	      {1'd0, 9'd56}: s2wr0 <= 312;
	      {1'd0, 9'd57}: s2wr0 <= 313;
	      {1'd0, 9'd58}: s2wr0 <= 314;
	      {1'd0, 9'd59}: s2wr0 <= 315;
	      {1'd0, 9'd60}: s2wr0 <= 316;
	      {1'd0, 9'd61}: s2wr0 <= 317;
	      {1'd0, 9'd62}: s2wr0 <= 318;
	      {1'd0, 9'd63}: s2wr0 <= 319;
	      {1'd0, 9'd64}: s2wr0 <= 320;
	      {1'd0, 9'd65}: s2wr0 <= 321;
	      {1'd0, 9'd66}: s2wr0 <= 322;
	      {1'd0, 9'd67}: s2wr0 <= 323;
	      {1'd0, 9'd68}: s2wr0 <= 324;
	      {1'd0, 9'd69}: s2wr0 <= 325;
	      {1'd0, 9'd70}: s2wr0 <= 326;
	      {1'd0, 9'd71}: s2wr0 <= 327;
	      {1'd0, 9'd72}: s2wr0 <= 328;
	      {1'd0, 9'd73}: s2wr0 <= 329;
	      {1'd0, 9'd74}: s2wr0 <= 330;
	      {1'd0, 9'd75}: s2wr0 <= 331;
	      {1'd0, 9'd76}: s2wr0 <= 332;
	      {1'd0, 9'd77}: s2wr0 <= 333;
	      {1'd0, 9'd78}: s2wr0 <= 334;
	      {1'd0, 9'd79}: s2wr0 <= 335;
	      {1'd0, 9'd80}: s2wr0 <= 336;
	      {1'd0, 9'd81}: s2wr0 <= 337;
	      {1'd0, 9'd82}: s2wr0 <= 338;
	      {1'd0, 9'd83}: s2wr0 <= 339;
	      {1'd0, 9'd84}: s2wr0 <= 340;
	      {1'd0, 9'd85}: s2wr0 <= 341;
	      {1'd0, 9'd86}: s2wr0 <= 342;
	      {1'd0, 9'd87}: s2wr0 <= 343;
	      {1'd0, 9'd88}: s2wr0 <= 344;
	      {1'd0, 9'd89}: s2wr0 <= 345;
	      {1'd0, 9'd90}: s2wr0 <= 346;
	      {1'd0, 9'd91}: s2wr0 <= 347;
	      {1'd0, 9'd92}: s2wr0 <= 348;
	      {1'd0, 9'd93}: s2wr0 <= 349;
	      {1'd0, 9'd94}: s2wr0 <= 350;
	      {1'd0, 9'd95}: s2wr0 <= 351;
	      {1'd0, 9'd96}: s2wr0 <= 352;
	      {1'd0, 9'd97}: s2wr0 <= 353;
	      {1'd0, 9'd98}: s2wr0 <= 354;
	      {1'd0, 9'd99}: s2wr0 <= 355;
	      {1'd0, 9'd100}: s2wr0 <= 356;
	      {1'd0, 9'd101}: s2wr0 <= 357;
	      {1'd0, 9'd102}: s2wr0 <= 358;
	      {1'd0, 9'd103}: s2wr0 <= 359;
	      {1'd0, 9'd104}: s2wr0 <= 360;
	      {1'd0, 9'd105}: s2wr0 <= 361;
	      {1'd0, 9'd106}: s2wr0 <= 362;
	      {1'd0, 9'd107}: s2wr0 <= 363;
	      {1'd0, 9'd108}: s2wr0 <= 364;
	      {1'd0, 9'd109}: s2wr0 <= 365;
	      {1'd0, 9'd110}: s2wr0 <= 366;
	      {1'd0, 9'd111}: s2wr0 <= 367;
	      {1'd0, 9'd112}: s2wr0 <= 368;
	      {1'd0, 9'd113}: s2wr0 <= 369;
	      {1'd0, 9'd114}: s2wr0 <= 370;
	      {1'd0, 9'd115}: s2wr0 <= 371;
	      {1'd0, 9'd116}: s2wr0 <= 372;
	      {1'd0, 9'd117}: s2wr0 <= 373;
	      {1'd0, 9'd118}: s2wr0 <= 374;
	      {1'd0, 9'd119}: s2wr0 <= 375;
	      {1'd0, 9'd120}: s2wr0 <= 376;
	      {1'd0, 9'd121}: s2wr0 <= 377;
	      {1'd0, 9'd122}: s2wr0 <= 378;
	      {1'd0, 9'd123}: s2wr0 <= 379;
	      {1'd0, 9'd124}: s2wr0 <= 380;
	      {1'd0, 9'd125}: s2wr0 <= 381;
	      {1'd0, 9'd126}: s2wr0 <= 382;
	      {1'd0, 9'd127}: s2wr0 <= 383;
	      {1'd0, 9'd128}: s2wr0 <= 384;
	      {1'd0, 9'd129}: s2wr0 <= 385;
	      {1'd0, 9'd130}: s2wr0 <= 386;
	      {1'd0, 9'd131}: s2wr0 <= 387;
	      {1'd0, 9'd132}: s2wr0 <= 388;
	      {1'd0, 9'd133}: s2wr0 <= 389;
	      {1'd0, 9'd134}: s2wr0 <= 390;
	      {1'd0, 9'd135}: s2wr0 <= 391;
	      {1'd0, 9'd136}: s2wr0 <= 392;
	      {1'd0, 9'd137}: s2wr0 <= 393;
	      {1'd0, 9'd138}: s2wr0 <= 394;
	      {1'd0, 9'd139}: s2wr0 <= 395;
	      {1'd0, 9'd140}: s2wr0 <= 396;
	      {1'd0, 9'd141}: s2wr0 <= 397;
	      {1'd0, 9'd142}: s2wr0 <= 398;
	      {1'd0, 9'd143}: s2wr0 <= 399;
	      {1'd0, 9'd144}: s2wr0 <= 400;
	      {1'd0, 9'd145}: s2wr0 <= 401;
	      {1'd0, 9'd146}: s2wr0 <= 402;
	      {1'd0, 9'd147}: s2wr0 <= 403;
	      {1'd0, 9'd148}: s2wr0 <= 404;
	      {1'd0, 9'd149}: s2wr0 <= 405;
	      {1'd0, 9'd150}: s2wr0 <= 406;
	      {1'd0, 9'd151}: s2wr0 <= 407;
	      {1'd0, 9'd152}: s2wr0 <= 408;
	      {1'd0, 9'd153}: s2wr0 <= 409;
	      {1'd0, 9'd154}: s2wr0 <= 410;
	      {1'd0, 9'd155}: s2wr0 <= 411;
	      {1'd0, 9'd156}: s2wr0 <= 412;
	      {1'd0, 9'd157}: s2wr0 <= 413;
	      {1'd0, 9'd158}: s2wr0 <= 414;
	      {1'd0, 9'd159}: s2wr0 <= 415;
	      {1'd0, 9'd160}: s2wr0 <= 416;
	      {1'd0, 9'd161}: s2wr0 <= 417;
	      {1'd0, 9'd162}: s2wr0 <= 418;
	      {1'd0, 9'd163}: s2wr0 <= 419;
	      {1'd0, 9'd164}: s2wr0 <= 420;
	      {1'd0, 9'd165}: s2wr0 <= 421;
	      {1'd0, 9'd166}: s2wr0 <= 422;
	      {1'd0, 9'd167}: s2wr0 <= 423;
	      {1'd0, 9'd168}: s2wr0 <= 424;
	      {1'd0, 9'd169}: s2wr0 <= 425;
	      {1'd0, 9'd170}: s2wr0 <= 426;
	      {1'd0, 9'd171}: s2wr0 <= 427;
	      {1'd0, 9'd172}: s2wr0 <= 428;
	      {1'd0, 9'd173}: s2wr0 <= 429;
	      {1'd0, 9'd174}: s2wr0 <= 430;
	      {1'd0, 9'd175}: s2wr0 <= 431;
	      {1'd0, 9'd176}: s2wr0 <= 432;
	      {1'd0, 9'd177}: s2wr0 <= 433;
	      {1'd0, 9'd178}: s2wr0 <= 434;
	      {1'd0, 9'd179}: s2wr0 <= 435;
	      {1'd0, 9'd180}: s2wr0 <= 436;
	      {1'd0, 9'd181}: s2wr0 <= 437;
	      {1'd0, 9'd182}: s2wr0 <= 438;
	      {1'd0, 9'd183}: s2wr0 <= 439;
	      {1'd0, 9'd184}: s2wr0 <= 440;
	      {1'd0, 9'd185}: s2wr0 <= 441;
	      {1'd0, 9'd186}: s2wr0 <= 442;
	      {1'd0, 9'd187}: s2wr0 <= 443;
	      {1'd0, 9'd188}: s2wr0 <= 444;
	      {1'd0, 9'd189}: s2wr0 <= 445;
	      {1'd0, 9'd190}: s2wr0 <= 446;
	      {1'd0, 9'd191}: s2wr0 <= 447;
	      {1'd0, 9'd192}: s2wr0 <= 448;
	      {1'd0, 9'd193}: s2wr0 <= 449;
	      {1'd0, 9'd194}: s2wr0 <= 450;
	      {1'd0, 9'd195}: s2wr0 <= 451;
	      {1'd0, 9'd196}: s2wr0 <= 452;
	      {1'd0, 9'd197}: s2wr0 <= 453;
	      {1'd0, 9'd198}: s2wr0 <= 454;
	      {1'd0, 9'd199}: s2wr0 <= 455;
	      {1'd0, 9'd200}: s2wr0 <= 456;
	      {1'd0, 9'd201}: s2wr0 <= 457;
	      {1'd0, 9'd202}: s2wr0 <= 458;
	      {1'd0, 9'd203}: s2wr0 <= 459;
	      {1'd0, 9'd204}: s2wr0 <= 460;
	      {1'd0, 9'd205}: s2wr0 <= 461;
	      {1'd0, 9'd206}: s2wr0 <= 462;
	      {1'd0, 9'd207}: s2wr0 <= 463;
	      {1'd0, 9'd208}: s2wr0 <= 464;
	      {1'd0, 9'd209}: s2wr0 <= 465;
	      {1'd0, 9'd210}: s2wr0 <= 466;
	      {1'd0, 9'd211}: s2wr0 <= 467;
	      {1'd0, 9'd212}: s2wr0 <= 468;
	      {1'd0, 9'd213}: s2wr0 <= 469;
	      {1'd0, 9'd214}: s2wr0 <= 470;
	      {1'd0, 9'd215}: s2wr0 <= 471;
	      {1'd0, 9'd216}: s2wr0 <= 472;
	      {1'd0, 9'd217}: s2wr0 <= 473;
	      {1'd0, 9'd218}: s2wr0 <= 474;
	      {1'd0, 9'd219}: s2wr0 <= 475;
	      {1'd0, 9'd220}: s2wr0 <= 476;
	      {1'd0, 9'd221}: s2wr0 <= 477;
	      {1'd0, 9'd222}: s2wr0 <= 478;
	      {1'd0, 9'd223}: s2wr0 <= 479;
	      {1'd0, 9'd224}: s2wr0 <= 480;
	      {1'd0, 9'd225}: s2wr0 <= 481;
	      {1'd0, 9'd226}: s2wr0 <= 482;
	      {1'd0, 9'd227}: s2wr0 <= 483;
	      {1'd0, 9'd228}: s2wr0 <= 484;
	      {1'd0, 9'd229}: s2wr0 <= 485;
	      {1'd0, 9'd230}: s2wr0 <= 486;
	      {1'd0, 9'd231}: s2wr0 <= 487;
	      {1'd0, 9'd232}: s2wr0 <= 488;
	      {1'd0, 9'd233}: s2wr0 <= 489;
	      {1'd0, 9'd234}: s2wr0 <= 490;
	      {1'd0, 9'd235}: s2wr0 <= 491;
	      {1'd0, 9'd236}: s2wr0 <= 492;
	      {1'd0, 9'd237}: s2wr0 <= 493;
	      {1'd0, 9'd238}: s2wr0 <= 494;
	      {1'd0, 9'd239}: s2wr0 <= 495;
	      {1'd0, 9'd240}: s2wr0 <= 496;
	      {1'd0, 9'd241}: s2wr0 <= 497;
	      {1'd0, 9'd242}: s2wr0 <= 498;
	      {1'd0, 9'd243}: s2wr0 <= 499;
	      {1'd0, 9'd244}: s2wr0 <= 500;
	      {1'd0, 9'd245}: s2wr0 <= 501;
	      {1'd0, 9'd246}: s2wr0 <= 502;
	      {1'd0, 9'd247}: s2wr0 <= 503;
	      {1'd0, 9'd248}: s2wr0 <= 504;
	      {1'd0, 9'd249}: s2wr0 <= 505;
	      {1'd0, 9'd250}: s2wr0 <= 506;
	      {1'd0, 9'd251}: s2wr0 <= 507;
	      {1'd0, 9'd252}: s2wr0 <= 508;
	      {1'd0, 9'd253}: s2wr0 <= 509;
	      {1'd0, 9'd254}: s2wr0 <= 510;
	      {1'd0, 9'd255}: s2wr0 <= 511;
	      {1'd0, 9'd256}: s2wr0 <= 0;
	      {1'd0, 9'd257}: s2wr0 <= 1;
	      {1'd0, 9'd258}: s2wr0 <= 2;
	      {1'd0, 9'd259}: s2wr0 <= 3;
	      {1'd0, 9'd260}: s2wr0 <= 4;
	      {1'd0, 9'd261}: s2wr0 <= 5;
	      {1'd0, 9'd262}: s2wr0 <= 6;
	      {1'd0, 9'd263}: s2wr0 <= 7;
	      {1'd0, 9'd264}: s2wr0 <= 8;
	      {1'd0, 9'd265}: s2wr0 <= 9;
	      {1'd0, 9'd266}: s2wr0 <= 10;
	      {1'd0, 9'd267}: s2wr0 <= 11;
	      {1'd0, 9'd268}: s2wr0 <= 12;
	      {1'd0, 9'd269}: s2wr0 <= 13;
	      {1'd0, 9'd270}: s2wr0 <= 14;
	      {1'd0, 9'd271}: s2wr0 <= 15;
	      {1'd0, 9'd272}: s2wr0 <= 16;
	      {1'd0, 9'd273}: s2wr0 <= 17;
	      {1'd0, 9'd274}: s2wr0 <= 18;
	      {1'd0, 9'd275}: s2wr0 <= 19;
	      {1'd0, 9'd276}: s2wr0 <= 20;
	      {1'd0, 9'd277}: s2wr0 <= 21;
	      {1'd0, 9'd278}: s2wr0 <= 22;
	      {1'd0, 9'd279}: s2wr0 <= 23;
	      {1'd0, 9'd280}: s2wr0 <= 24;
	      {1'd0, 9'd281}: s2wr0 <= 25;
	      {1'd0, 9'd282}: s2wr0 <= 26;
	      {1'd0, 9'd283}: s2wr0 <= 27;
	      {1'd0, 9'd284}: s2wr0 <= 28;
	      {1'd0, 9'd285}: s2wr0 <= 29;
	      {1'd0, 9'd286}: s2wr0 <= 30;
	      {1'd0, 9'd287}: s2wr0 <= 31;
	      {1'd0, 9'd288}: s2wr0 <= 32;
	      {1'd0, 9'd289}: s2wr0 <= 33;
	      {1'd0, 9'd290}: s2wr0 <= 34;
	      {1'd0, 9'd291}: s2wr0 <= 35;
	      {1'd0, 9'd292}: s2wr0 <= 36;
	      {1'd0, 9'd293}: s2wr0 <= 37;
	      {1'd0, 9'd294}: s2wr0 <= 38;
	      {1'd0, 9'd295}: s2wr0 <= 39;
	      {1'd0, 9'd296}: s2wr0 <= 40;
	      {1'd0, 9'd297}: s2wr0 <= 41;
	      {1'd0, 9'd298}: s2wr0 <= 42;
	      {1'd0, 9'd299}: s2wr0 <= 43;
	      {1'd0, 9'd300}: s2wr0 <= 44;
	      {1'd0, 9'd301}: s2wr0 <= 45;
	      {1'd0, 9'd302}: s2wr0 <= 46;
	      {1'd0, 9'd303}: s2wr0 <= 47;
	      {1'd0, 9'd304}: s2wr0 <= 48;
	      {1'd0, 9'd305}: s2wr0 <= 49;
	      {1'd0, 9'd306}: s2wr0 <= 50;
	      {1'd0, 9'd307}: s2wr0 <= 51;
	      {1'd0, 9'd308}: s2wr0 <= 52;
	      {1'd0, 9'd309}: s2wr0 <= 53;
	      {1'd0, 9'd310}: s2wr0 <= 54;
	      {1'd0, 9'd311}: s2wr0 <= 55;
	      {1'd0, 9'd312}: s2wr0 <= 56;
	      {1'd0, 9'd313}: s2wr0 <= 57;
	      {1'd0, 9'd314}: s2wr0 <= 58;
	      {1'd0, 9'd315}: s2wr0 <= 59;
	      {1'd0, 9'd316}: s2wr0 <= 60;
	      {1'd0, 9'd317}: s2wr0 <= 61;
	      {1'd0, 9'd318}: s2wr0 <= 62;
	      {1'd0, 9'd319}: s2wr0 <= 63;
	      {1'd0, 9'd320}: s2wr0 <= 64;
	      {1'd0, 9'd321}: s2wr0 <= 65;
	      {1'd0, 9'd322}: s2wr0 <= 66;
	      {1'd0, 9'd323}: s2wr0 <= 67;
	      {1'd0, 9'd324}: s2wr0 <= 68;
	      {1'd0, 9'd325}: s2wr0 <= 69;
	      {1'd0, 9'd326}: s2wr0 <= 70;
	      {1'd0, 9'd327}: s2wr0 <= 71;
	      {1'd0, 9'd328}: s2wr0 <= 72;
	      {1'd0, 9'd329}: s2wr0 <= 73;
	      {1'd0, 9'd330}: s2wr0 <= 74;
	      {1'd0, 9'd331}: s2wr0 <= 75;
	      {1'd0, 9'd332}: s2wr0 <= 76;
	      {1'd0, 9'd333}: s2wr0 <= 77;
	      {1'd0, 9'd334}: s2wr0 <= 78;
	      {1'd0, 9'd335}: s2wr0 <= 79;
	      {1'd0, 9'd336}: s2wr0 <= 80;
	      {1'd0, 9'd337}: s2wr0 <= 81;
	      {1'd0, 9'd338}: s2wr0 <= 82;
	      {1'd0, 9'd339}: s2wr0 <= 83;
	      {1'd0, 9'd340}: s2wr0 <= 84;
	      {1'd0, 9'd341}: s2wr0 <= 85;
	      {1'd0, 9'd342}: s2wr0 <= 86;
	      {1'd0, 9'd343}: s2wr0 <= 87;
	      {1'd0, 9'd344}: s2wr0 <= 88;
	      {1'd0, 9'd345}: s2wr0 <= 89;
	      {1'd0, 9'd346}: s2wr0 <= 90;
	      {1'd0, 9'd347}: s2wr0 <= 91;
	      {1'd0, 9'd348}: s2wr0 <= 92;
	      {1'd0, 9'd349}: s2wr0 <= 93;
	      {1'd0, 9'd350}: s2wr0 <= 94;
	      {1'd0, 9'd351}: s2wr0 <= 95;
	      {1'd0, 9'd352}: s2wr0 <= 96;
	      {1'd0, 9'd353}: s2wr0 <= 97;
	      {1'd0, 9'd354}: s2wr0 <= 98;
	      {1'd0, 9'd355}: s2wr0 <= 99;
	      {1'd0, 9'd356}: s2wr0 <= 100;
	      {1'd0, 9'd357}: s2wr0 <= 101;
	      {1'd0, 9'd358}: s2wr0 <= 102;
	      {1'd0, 9'd359}: s2wr0 <= 103;
	      {1'd0, 9'd360}: s2wr0 <= 104;
	      {1'd0, 9'd361}: s2wr0 <= 105;
	      {1'd0, 9'd362}: s2wr0 <= 106;
	      {1'd0, 9'd363}: s2wr0 <= 107;
	      {1'd0, 9'd364}: s2wr0 <= 108;
	      {1'd0, 9'd365}: s2wr0 <= 109;
	      {1'd0, 9'd366}: s2wr0 <= 110;
	      {1'd0, 9'd367}: s2wr0 <= 111;
	      {1'd0, 9'd368}: s2wr0 <= 112;
	      {1'd0, 9'd369}: s2wr0 <= 113;
	      {1'd0, 9'd370}: s2wr0 <= 114;
	      {1'd0, 9'd371}: s2wr0 <= 115;
	      {1'd0, 9'd372}: s2wr0 <= 116;
	      {1'd0, 9'd373}: s2wr0 <= 117;
	      {1'd0, 9'd374}: s2wr0 <= 118;
	      {1'd0, 9'd375}: s2wr0 <= 119;
	      {1'd0, 9'd376}: s2wr0 <= 120;
	      {1'd0, 9'd377}: s2wr0 <= 121;
	      {1'd0, 9'd378}: s2wr0 <= 122;
	      {1'd0, 9'd379}: s2wr0 <= 123;
	      {1'd0, 9'd380}: s2wr0 <= 124;
	      {1'd0, 9'd381}: s2wr0 <= 125;
	      {1'd0, 9'd382}: s2wr0 <= 126;
	      {1'd0, 9'd383}: s2wr0 <= 127;
	      {1'd0, 9'd384}: s2wr0 <= 128;
	      {1'd0, 9'd385}: s2wr0 <= 129;
	      {1'd0, 9'd386}: s2wr0 <= 130;
	      {1'd0, 9'd387}: s2wr0 <= 131;
	      {1'd0, 9'd388}: s2wr0 <= 132;
	      {1'd0, 9'd389}: s2wr0 <= 133;
	      {1'd0, 9'd390}: s2wr0 <= 134;
	      {1'd0, 9'd391}: s2wr0 <= 135;
	      {1'd0, 9'd392}: s2wr0 <= 136;
	      {1'd0, 9'd393}: s2wr0 <= 137;
	      {1'd0, 9'd394}: s2wr0 <= 138;
	      {1'd0, 9'd395}: s2wr0 <= 139;
	      {1'd0, 9'd396}: s2wr0 <= 140;
	      {1'd0, 9'd397}: s2wr0 <= 141;
	      {1'd0, 9'd398}: s2wr0 <= 142;
	      {1'd0, 9'd399}: s2wr0 <= 143;
	      {1'd0, 9'd400}: s2wr0 <= 144;
	      {1'd0, 9'd401}: s2wr0 <= 145;
	      {1'd0, 9'd402}: s2wr0 <= 146;
	      {1'd0, 9'd403}: s2wr0 <= 147;
	      {1'd0, 9'd404}: s2wr0 <= 148;
	      {1'd0, 9'd405}: s2wr0 <= 149;
	      {1'd0, 9'd406}: s2wr0 <= 150;
	      {1'd0, 9'd407}: s2wr0 <= 151;
	      {1'd0, 9'd408}: s2wr0 <= 152;
	      {1'd0, 9'd409}: s2wr0 <= 153;
	      {1'd0, 9'd410}: s2wr0 <= 154;
	      {1'd0, 9'd411}: s2wr0 <= 155;
	      {1'd0, 9'd412}: s2wr0 <= 156;
	      {1'd0, 9'd413}: s2wr0 <= 157;
	      {1'd0, 9'd414}: s2wr0 <= 158;
	      {1'd0, 9'd415}: s2wr0 <= 159;
	      {1'd0, 9'd416}: s2wr0 <= 160;
	      {1'd0, 9'd417}: s2wr0 <= 161;
	      {1'd0, 9'd418}: s2wr0 <= 162;
	      {1'd0, 9'd419}: s2wr0 <= 163;
	      {1'd0, 9'd420}: s2wr0 <= 164;
	      {1'd0, 9'd421}: s2wr0 <= 165;
	      {1'd0, 9'd422}: s2wr0 <= 166;
	      {1'd0, 9'd423}: s2wr0 <= 167;
	      {1'd0, 9'd424}: s2wr0 <= 168;
	      {1'd0, 9'd425}: s2wr0 <= 169;
	      {1'd0, 9'd426}: s2wr0 <= 170;
	      {1'd0, 9'd427}: s2wr0 <= 171;
	      {1'd0, 9'd428}: s2wr0 <= 172;
	      {1'd0, 9'd429}: s2wr0 <= 173;
	      {1'd0, 9'd430}: s2wr0 <= 174;
	      {1'd0, 9'd431}: s2wr0 <= 175;
	      {1'd0, 9'd432}: s2wr0 <= 176;
	      {1'd0, 9'd433}: s2wr0 <= 177;
	      {1'd0, 9'd434}: s2wr0 <= 178;
	      {1'd0, 9'd435}: s2wr0 <= 179;
	      {1'd0, 9'd436}: s2wr0 <= 180;
	      {1'd0, 9'd437}: s2wr0 <= 181;
	      {1'd0, 9'd438}: s2wr0 <= 182;
	      {1'd0, 9'd439}: s2wr0 <= 183;
	      {1'd0, 9'd440}: s2wr0 <= 184;
	      {1'd0, 9'd441}: s2wr0 <= 185;
	      {1'd0, 9'd442}: s2wr0 <= 186;
	      {1'd0, 9'd443}: s2wr0 <= 187;
	      {1'd0, 9'd444}: s2wr0 <= 188;
	      {1'd0, 9'd445}: s2wr0 <= 189;
	      {1'd0, 9'd446}: s2wr0 <= 190;
	      {1'd0, 9'd447}: s2wr0 <= 191;
	      {1'd0, 9'd448}: s2wr0 <= 192;
	      {1'd0, 9'd449}: s2wr0 <= 193;
	      {1'd0, 9'd450}: s2wr0 <= 194;
	      {1'd0, 9'd451}: s2wr0 <= 195;
	      {1'd0, 9'd452}: s2wr0 <= 196;
	      {1'd0, 9'd453}: s2wr0 <= 197;
	      {1'd0, 9'd454}: s2wr0 <= 198;
	      {1'd0, 9'd455}: s2wr0 <= 199;
	      {1'd0, 9'd456}: s2wr0 <= 200;
	      {1'd0, 9'd457}: s2wr0 <= 201;
	      {1'd0, 9'd458}: s2wr0 <= 202;
	      {1'd0, 9'd459}: s2wr0 <= 203;
	      {1'd0, 9'd460}: s2wr0 <= 204;
	      {1'd0, 9'd461}: s2wr0 <= 205;
	      {1'd0, 9'd462}: s2wr0 <= 206;
	      {1'd0, 9'd463}: s2wr0 <= 207;
	      {1'd0, 9'd464}: s2wr0 <= 208;
	      {1'd0, 9'd465}: s2wr0 <= 209;
	      {1'd0, 9'd466}: s2wr0 <= 210;
	      {1'd0, 9'd467}: s2wr0 <= 211;
	      {1'd0, 9'd468}: s2wr0 <= 212;
	      {1'd0, 9'd469}: s2wr0 <= 213;
	      {1'd0, 9'd470}: s2wr0 <= 214;
	      {1'd0, 9'd471}: s2wr0 <= 215;
	      {1'd0, 9'd472}: s2wr0 <= 216;
	      {1'd0, 9'd473}: s2wr0 <= 217;
	      {1'd0, 9'd474}: s2wr0 <= 218;
	      {1'd0, 9'd475}: s2wr0 <= 219;
	      {1'd0, 9'd476}: s2wr0 <= 220;
	      {1'd0, 9'd477}: s2wr0 <= 221;
	      {1'd0, 9'd478}: s2wr0 <= 222;
	      {1'd0, 9'd479}: s2wr0 <= 223;
	      {1'd0, 9'd480}: s2wr0 <= 224;
	      {1'd0, 9'd481}: s2wr0 <= 225;
	      {1'd0, 9'd482}: s2wr0 <= 226;
	      {1'd0, 9'd483}: s2wr0 <= 227;
	      {1'd0, 9'd484}: s2wr0 <= 228;
	      {1'd0, 9'd485}: s2wr0 <= 229;
	      {1'd0, 9'd486}: s2wr0 <= 230;
	      {1'd0, 9'd487}: s2wr0 <= 231;
	      {1'd0, 9'd488}: s2wr0 <= 232;
	      {1'd0, 9'd489}: s2wr0 <= 233;
	      {1'd0, 9'd490}: s2wr0 <= 234;
	      {1'd0, 9'd491}: s2wr0 <= 235;
	      {1'd0, 9'd492}: s2wr0 <= 236;
	      {1'd0, 9'd493}: s2wr0 <= 237;
	      {1'd0, 9'd494}: s2wr0 <= 238;
	      {1'd0, 9'd495}: s2wr0 <= 239;
	      {1'd0, 9'd496}: s2wr0 <= 240;
	      {1'd0, 9'd497}: s2wr0 <= 241;
	      {1'd0, 9'd498}: s2wr0 <= 242;
	      {1'd0, 9'd499}: s2wr0 <= 243;
	      {1'd0, 9'd500}: s2wr0 <= 244;
	      {1'd0, 9'd501}: s2wr0 <= 245;
	      {1'd0, 9'd502}: s2wr0 <= 246;
	      {1'd0, 9'd503}: s2wr0 <= 247;
	      {1'd0, 9'd504}: s2wr0 <= 248;
	      {1'd0, 9'd505}: s2wr0 <= 249;
	      {1'd0, 9'd506}: s2wr0 <= 250;
	      {1'd0, 9'd507}: s2wr0 <= 251;
	      {1'd0, 9'd508}: s2wr0 <= 252;
	      {1'd0, 9'd509}: s2wr0 <= 253;
	      {1'd0, 9'd510}: s2wr0 <= 254;
	      {1'd0, 9'd511}: s2wr0 <= 255;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm41_dd, writeCycle})
	      {1'd0, 9'd0}: s2wr1 <= 0;
	      {1'd0, 9'd1}: s2wr1 <= 1;
	      {1'd0, 9'd2}: s2wr1 <= 2;
	      {1'd0, 9'd3}: s2wr1 <= 3;
	      {1'd0, 9'd4}: s2wr1 <= 4;
	      {1'd0, 9'd5}: s2wr1 <= 5;
	      {1'd0, 9'd6}: s2wr1 <= 6;
	      {1'd0, 9'd7}: s2wr1 <= 7;
	      {1'd0, 9'd8}: s2wr1 <= 8;
	      {1'd0, 9'd9}: s2wr1 <= 9;
	      {1'd0, 9'd10}: s2wr1 <= 10;
	      {1'd0, 9'd11}: s2wr1 <= 11;
	      {1'd0, 9'd12}: s2wr1 <= 12;
	      {1'd0, 9'd13}: s2wr1 <= 13;
	      {1'd0, 9'd14}: s2wr1 <= 14;
	      {1'd0, 9'd15}: s2wr1 <= 15;
	      {1'd0, 9'd16}: s2wr1 <= 16;
	      {1'd0, 9'd17}: s2wr1 <= 17;
	      {1'd0, 9'd18}: s2wr1 <= 18;
	      {1'd0, 9'd19}: s2wr1 <= 19;
	      {1'd0, 9'd20}: s2wr1 <= 20;
	      {1'd0, 9'd21}: s2wr1 <= 21;
	      {1'd0, 9'd22}: s2wr1 <= 22;
	      {1'd0, 9'd23}: s2wr1 <= 23;
	      {1'd0, 9'd24}: s2wr1 <= 24;
	      {1'd0, 9'd25}: s2wr1 <= 25;
	      {1'd0, 9'd26}: s2wr1 <= 26;
	      {1'd0, 9'd27}: s2wr1 <= 27;
	      {1'd0, 9'd28}: s2wr1 <= 28;
	      {1'd0, 9'd29}: s2wr1 <= 29;
	      {1'd0, 9'd30}: s2wr1 <= 30;
	      {1'd0, 9'd31}: s2wr1 <= 31;
	      {1'd0, 9'd32}: s2wr1 <= 32;
	      {1'd0, 9'd33}: s2wr1 <= 33;
	      {1'd0, 9'd34}: s2wr1 <= 34;
	      {1'd0, 9'd35}: s2wr1 <= 35;
	      {1'd0, 9'd36}: s2wr1 <= 36;
	      {1'd0, 9'd37}: s2wr1 <= 37;
	      {1'd0, 9'd38}: s2wr1 <= 38;
	      {1'd0, 9'd39}: s2wr1 <= 39;
	      {1'd0, 9'd40}: s2wr1 <= 40;
	      {1'd0, 9'd41}: s2wr1 <= 41;
	      {1'd0, 9'd42}: s2wr1 <= 42;
	      {1'd0, 9'd43}: s2wr1 <= 43;
	      {1'd0, 9'd44}: s2wr1 <= 44;
	      {1'd0, 9'd45}: s2wr1 <= 45;
	      {1'd0, 9'd46}: s2wr1 <= 46;
	      {1'd0, 9'd47}: s2wr1 <= 47;
	      {1'd0, 9'd48}: s2wr1 <= 48;
	      {1'd0, 9'd49}: s2wr1 <= 49;
	      {1'd0, 9'd50}: s2wr1 <= 50;
	      {1'd0, 9'd51}: s2wr1 <= 51;
	      {1'd0, 9'd52}: s2wr1 <= 52;
	      {1'd0, 9'd53}: s2wr1 <= 53;
	      {1'd0, 9'd54}: s2wr1 <= 54;
	      {1'd0, 9'd55}: s2wr1 <= 55;
	      {1'd0, 9'd56}: s2wr1 <= 56;
	      {1'd0, 9'd57}: s2wr1 <= 57;
	      {1'd0, 9'd58}: s2wr1 <= 58;
	      {1'd0, 9'd59}: s2wr1 <= 59;
	      {1'd0, 9'd60}: s2wr1 <= 60;
	      {1'd0, 9'd61}: s2wr1 <= 61;
	      {1'd0, 9'd62}: s2wr1 <= 62;
	      {1'd0, 9'd63}: s2wr1 <= 63;
	      {1'd0, 9'd64}: s2wr1 <= 64;
	      {1'd0, 9'd65}: s2wr1 <= 65;
	      {1'd0, 9'd66}: s2wr1 <= 66;
	      {1'd0, 9'd67}: s2wr1 <= 67;
	      {1'd0, 9'd68}: s2wr1 <= 68;
	      {1'd0, 9'd69}: s2wr1 <= 69;
	      {1'd0, 9'd70}: s2wr1 <= 70;
	      {1'd0, 9'd71}: s2wr1 <= 71;
	      {1'd0, 9'd72}: s2wr1 <= 72;
	      {1'd0, 9'd73}: s2wr1 <= 73;
	      {1'd0, 9'd74}: s2wr1 <= 74;
	      {1'd0, 9'd75}: s2wr1 <= 75;
	      {1'd0, 9'd76}: s2wr1 <= 76;
	      {1'd0, 9'd77}: s2wr1 <= 77;
	      {1'd0, 9'd78}: s2wr1 <= 78;
	      {1'd0, 9'd79}: s2wr1 <= 79;
	      {1'd0, 9'd80}: s2wr1 <= 80;
	      {1'd0, 9'd81}: s2wr1 <= 81;
	      {1'd0, 9'd82}: s2wr1 <= 82;
	      {1'd0, 9'd83}: s2wr1 <= 83;
	      {1'd0, 9'd84}: s2wr1 <= 84;
	      {1'd0, 9'd85}: s2wr1 <= 85;
	      {1'd0, 9'd86}: s2wr1 <= 86;
	      {1'd0, 9'd87}: s2wr1 <= 87;
	      {1'd0, 9'd88}: s2wr1 <= 88;
	      {1'd0, 9'd89}: s2wr1 <= 89;
	      {1'd0, 9'd90}: s2wr1 <= 90;
	      {1'd0, 9'd91}: s2wr1 <= 91;
	      {1'd0, 9'd92}: s2wr1 <= 92;
	      {1'd0, 9'd93}: s2wr1 <= 93;
	      {1'd0, 9'd94}: s2wr1 <= 94;
	      {1'd0, 9'd95}: s2wr1 <= 95;
	      {1'd0, 9'd96}: s2wr1 <= 96;
	      {1'd0, 9'd97}: s2wr1 <= 97;
	      {1'd0, 9'd98}: s2wr1 <= 98;
	      {1'd0, 9'd99}: s2wr1 <= 99;
	      {1'd0, 9'd100}: s2wr1 <= 100;
	      {1'd0, 9'd101}: s2wr1 <= 101;
	      {1'd0, 9'd102}: s2wr1 <= 102;
	      {1'd0, 9'd103}: s2wr1 <= 103;
	      {1'd0, 9'd104}: s2wr1 <= 104;
	      {1'd0, 9'd105}: s2wr1 <= 105;
	      {1'd0, 9'd106}: s2wr1 <= 106;
	      {1'd0, 9'd107}: s2wr1 <= 107;
	      {1'd0, 9'd108}: s2wr1 <= 108;
	      {1'd0, 9'd109}: s2wr1 <= 109;
	      {1'd0, 9'd110}: s2wr1 <= 110;
	      {1'd0, 9'd111}: s2wr1 <= 111;
	      {1'd0, 9'd112}: s2wr1 <= 112;
	      {1'd0, 9'd113}: s2wr1 <= 113;
	      {1'd0, 9'd114}: s2wr1 <= 114;
	      {1'd0, 9'd115}: s2wr1 <= 115;
	      {1'd0, 9'd116}: s2wr1 <= 116;
	      {1'd0, 9'd117}: s2wr1 <= 117;
	      {1'd0, 9'd118}: s2wr1 <= 118;
	      {1'd0, 9'd119}: s2wr1 <= 119;
	      {1'd0, 9'd120}: s2wr1 <= 120;
	      {1'd0, 9'd121}: s2wr1 <= 121;
	      {1'd0, 9'd122}: s2wr1 <= 122;
	      {1'd0, 9'd123}: s2wr1 <= 123;
	      {1'd0, 9'd124}: s2wr1 <= 124;
	      {1'd0, 9'd125}: s2wr1 <= 125;
	      {1'd0, 9'd126}: s2wr1 <= 126;
	      {1'd0, 9'd127}: s2wr1 <= 127;
	      {1'd0, 9'd128}: s2wr1 <= 128;
	      {1'd0, 9'd129}: s2wr1 <= 129;
	      {1'd0, 9'd130}: s2wr1 <= 130;
	      {1'd0, 9'd131}: s2wr1 <= 131;
	      {1'd0, 9'd132}: s2wr1 <= 132;
	      {1'd0, 9'd133}: s2wr1 <= 133;
	      {1'd0, 9'd134}: s2wr1 <= 134;
	      {1'd0, 9'd135}: s2wr1 <= 135;
	      {1'd0, 9'd136}: s2wr1 <= 136;
	      {1'd0, 9'd137}: s2wr1 <= 137;
	      {1'd0, 9'd138}: s2wr1 <= 138;
	      {1'd0, 9'd139}: s2wr1 <= 139;
	      {1'd0, 9'd140}: s2wr1 <= 140;
	      {1'd0, 9'd141}: s2wr1 <= 141;
	      {1'd0, 9'd142}: s2wr1 <= 142;
	      {1'd0, 9'd143}: s2wr1 <= 143;
	      {1'd0, 9'd144}: s2wr1 <= 144;
	      {1'd0, 9'd145}: s2wr1 <= 145;
	      {1'd0, 9'd146}: s2wr1 <= 146;
	      {1'd0, 9'd147}: s2wr1 <= 147;
	      {1'd0, 9'd148}: s2wr1 <= 148;
	      {1'd0, 9'd149}: s2wr1 <= 149;
	      {1'd0, 9'd150}: s2wr1 <= 150;
	      {1'd0, 9'd151}: s2wr1 <= 151;
	      {1'd0, 9'd152}: s2wr1 <= 152;
	      {1'd0, 9'd153}: s2wr1 <= 153;
	      {1'd0, 9'd154}: s2wr1 <= 154;
	      {1'd0, 9'd155}: s2wr1 <= 155;
	      {1'd0, 9'd156}: s2wr1 <= 156;
	      {1'd0, 9'd157}: s2wr1 <= 157;
	      {1'd0, 9'd158}: s2wr1 <= 158;
	      {1'd0, 9'd159}: s2wr1 <= 159;
	      {1'd0, 9'd160}: s2wr1 <= 160;
	      {1'd0, 9'd161}: s2wr1 <= 161;
	      {1'd0, 9'd162}: s2wr1 <= 162;
	      {1'd0, 9'd163}: s2wr1 <= 163;
	      {1'd0, 9'd164}: s2wr1 <= 164;
	      {1'd0, 9'd165}: s2wr1 <= 165;
	      {1'd0, 9'd166}: s2wr1 <= 166;
	      {1'd0, 9'd167}: s2wr1 <= 167;
	      {1'd0, 9'd168}: s2wr1 <= 168;
	      {1'd0, 9'd169}: s2wr1 <= 169;
	      {1'd0, 9'd170}: s2wr1 <= 170;
	      {1'd0, 9'd171}: s2wr1 <= 171;
	      {1'd0, 9'd172}: s2wr1 <= 172;
	      {1'd0, 9'd173}: s2wr1 <= 173;
	      {1'd0, 9'd174}: s2wr1 <= 174;
	      {1'd0, 9'd175}: s2wr1 <= 175;
	      {1'd0, 9'd176}: s2wr1 <= 176;
	      {1'd0, 9'd177}: s2wr1 <= 177;
	      {1'd0, 9'd178}: s2wr1 <= 178;
	      {1'd0, 9'd179}: s2wr1 <= 179;
	      {1'd0, 9'd180}: s2wr1 <= 180;
	      {1'd0, 9'd181}: s2wr1 <= 181;
	      {1'd0, 9'd182}: s2wr1 <= 182;
	      {1'd0, 9'd183}: s2wr1 <= 183;
	      {1'd0, 9'd184}: s2wr1 <= 184;
	      {1'd0, 9'd185}: s2wr1 <= 185;
	      {1'd0, 9'd186}: s2wr1 <= 186;
	      {1'd0, 9'd187}: s2wr1 <= 187;
	      {1'd0, 9'd188}: s2wr1 <= 188;
	      {1'd0, 9'd189}: s2wr1 <= 189;
	      {1'd0, 9'd190}: s2wr1 <= 190;
	      {1'd0, 9'd191}: s2wr1 <= 191;
	      {1'd0, 9'd192}: s2wr1 <= 192;
	      {1'd0, 9'd193}: s2wr1 <= 193;
	      {1'd0, 9'd194}: s2wr1 <= 194;
	      {1'd0, 9'd195}: s2wr1 <= 195;
	      {1'd0, 9'd196}: s2wr1 <= 196;
	      {1'd0, 9'd197}: s2wr1 <= 197;
	      {1'd0, 9'd198}: s2wr1 <= 198;
	      {1'd0, 9'd199}: s2wr1 <= 199;
	      {1'd0, 9'd200}: s2wr1 <= 200;
	      {1'd0, 9'd201}: s2wr1 <= 201;
	      {1'd0, 9'd202}: s2wr1 <= 202;
	      {1'd0, 9'd203}: s2wr1 <= 203;
	      {1'd0, 9'd204}: s2wr1 <= 204;
	      {1'd0, 9'd205}: s2wr1 <= 205;
	      {1'd0, 9'd206}: s2wr1 <= 206;
	      {1'd0, 9'd207}: s2wr1 <= 207;
	      {1'd0, 9'd208}: s2wr1 <= 208;
	      {1'd0, 9'd209}: s2wr1 <= 209;
	      {1'd0, 9'd210}: s2wr1 <= 210;
	      {1'd0, 9'd211}: s2wr1 <= 211;
	      {1'd0, 9'd212}: s2wr1 <= 212;
	      {1'd0, 9'd213}: s2wr1 <= 213;
	      {1'd0, 9'd214}: s2wr1 <= 214;
	      {1'd0, 9'd215}: s2wr1 <= 215;
	      {1'd0, 9'd216}: s2wr1 <= 216;
	      {1'd0, 9'd217}: s2wr1 <= 217;
	      {1'd0, 9'd218}: s2wr1 <= 218;
	      {1'd0, 9'd219}: s2wr1 <= 219;
	      {1'd0, 9'd220}: s2wr1 <= 220;
	      {1'd0, 9'd221}: s2wr1 <= 221;
	      {1'd0, 9'd222}: s2wr1 <= 222;
	      {1'd0, 9'd223}: s2wr1 <= 223;
	      {1'd0, 9'd224}: s2wr1 <= 224;
	      {1'd0, 9'd225}: s2wr1 <= 225;
	      {1'd0, 9'd226}: s2wr1 <= 226;
	      {1'd0, 9'd227}: s2wr1 <= 227;
	      {1'd0, 9'd228}: s2wr1 <= 228;
	      {1'd0, 9'd229}: s2wr1 <= 229;
	      {1'd0, 9'd230}: s2wr1 <= 230;
	      {1'd0, 9'd231}: s2wr1 <= 231;
	      {1'd0, 9'd232}: s2wr1 <= 232;
	      {1'd0, 9'd233}: s2wr1 <= 233;
	      {1'd0, 9'd234}: s2wr1 <= 234;
	      {1'd0, 9'd235}: s2wr1 <= 235;
	      {1'd0, 9'd236}: s2wr1 <= 236;
	      {1'd0, 9'd237}: s2wr1 <= 237;
	      {1'd0, 9'd238}: s2wr1 <= 238;
	      {1'd0, 9'd239}: s2wr1 <= 239;
	      {1'd0, 9'd240}: s2wr1 <= 240;
	      {1'd0, 9'd241}: s2wr1 <= 241;
	      {1'd0, 9'd242}: s2wr1 <= 242;
	      {1'd0, 9'd243}: s2wr1 <= 243;
	      {1'd0, 9'd244}: s2wr1 <= 244;
	      {1'd0, 9'd245}: s2wr1 <= 245;
	      {1'd0, 9'd246}: s2wr1 <= 246;
	      {1'd0, 9'd247}: s2wr1 <= 247;
	      {1'd0, 9'd248}: s2wr1 <= 248;
	      {1'd0, 9'd249}: s2wr1 <= 249;
	      {1'd0, 9'd250}: s2wr1 <= 250;
	      {1'd0, 9'd251}: s2wr1 <= 251;
	      {1'd0, 9'd252}: s2wr1 <= 252;
	      {1'd0, 9'd253}: s2wr1 <= 253;
	      {1'd0, 9'd254}: s2wr1 <= 254;
	      {1'd0, 9'd255}: s2wr1 <= 255;
	      {1'd0, 9'd256}: s2wr1 <= 256;
	      {1'd0, 9'd257}: s2wr1 <= 257;
	      {1'd0, 9'd258}: s2wr1 <= 258;
	      {1'd0, 9'd259}: s2wr1 <= 259;
	      {1'd0, 9'd260}: s2wr1 <= 260;
	      {1'd0, 9'd261}: s2wr1 <= 261;
	      {1'd0, 9'd262}: s2wr1 <= 262;
	      {1'd0, 9'd263}: s2wr1 <= 263;
	      {1'd0, 9'd264}: s2wr1 <= 264;
	      {1'd0, 9'd265}: s2wr1 <= 265;
	      {1'd0, 9'd266}: s2wr1 <= 266;
	      {1'd0, 9'd267}: s2wr1 <= 267;
	      {1'd0, 9'd268}: s2wr1 <= 268;
	      {1'd0, 9'd269}: s2wr1 <= 269;
	      {1'd0, 9'd270}: s2wr1 <= 270;
	      {1'd0, 9'd271}: s2wr1 <= 271;
	      {1'd0, 9'd272}: s2wr1 <= 272;
	      {1'd0, 9'd273}: s2wr1 <= 273;
	      {1'd0, 9'd274}: s2wr1 <= 274;
	      {1'd0, 9'd275}: s2wr1 <= 275;
	      {1'd0, 9'd276}: s2wr1 <= 276;
	      {1'd0, 9'd277}: s2wr1 <= 277;
	      {1'd0, 9'd278}: s2wr1 <= 278;
	      {1'd0, 9'd279}: s2wr1 <= 279;
	      {1'd0, 9'd280}: s2wr1 <= 280;
	      {1'd0, 9'd281}: s2wr1 <= 281;
	      {1'd0, 9'd282}: s2wr1 <= 282;
	      {1'd0, 9'd283}: s2wr1 <= 283;
	      {1'd0, 9'd284}: s2wr1 <= 284;
	      {1'd0, 9'd285}: s2wr1 <= 285;
	      {1'd0, 9'd286}: s2wr1 <= 286;
	      {1'd0, 9'd287}: s2wr1 <= 287;
	      {1'd0, 9'd288}: s2wr1 <= 288;
	      {1'd0, 9'd289}: s2wr1 <= 289;
	      {1'd0, 9'd290}: s2wr1 <= 290;
	      {1'd0, 9'd291}: s2wr1 <= 291;
	      {1'd0, 9'd292}: s2wr1 <= 292;
	      {1'd0, 9'd293}: s2wr1 <= 293;
	      {1'd0, 9'd294}: s2wr1 <= 294;
	      {1'd0, 9'd295}: s2wr1 <= 295;
	      {1'd0, 9'd296}: s2wr1 <= 296;
	      {1'd0, 9'd297}: s2wr1 <= 297;
	      {1'd0, 9'd298}: s2wr1 <= 298;
	      {1'd0, 9'd299}: s2wr1 <= 299;
	      {1'd0, 9'd300}: s2wr1 <= 300;
	      {1'd0, 9'd301}: s2wr1 <= 301;
	      {1'd0, 9'd302}: s2wr1 <= 302;
	      {1'd0, 9'd303}: s2wr1 <= 303;
	      {1'd0, 9'd304}: s2wr1 <= 304;
	      {1'd0, 9'd305}: s2wr1 <= 305;
	      {1'd0, 9'd306}: s2wr1 <= 306;
	      {1'd0, 9'd307}: s2wr1 <= 307;
	      {1'd0, 9'd308}: s2wr1 <= 308;
	      {1'd0, 9'd309}: s2wr1 <= 309;
	      {1'd0, 9'd310}: s2wr1 <= 310;
	      {1'd0, 9'd311}: s2wr1 <= 311;
	      {1'd0, 9'd312}: s2wr1 <= 312;
	      {1'd0, 9'd313}: s2wr1 <= 313;
	      {1'd0, 9'd314}: s2wr1 <= 314;
	      {1'd0, 9'd315}: s2wr1 <= 315;
	      {1'd0, 9'd316}: s2wr1 <= 316;
	      {1'd0, 9'd317}: s2wr1 <= 317;
	      {1'd0, 9'd318}: s2wr1 <= 318;
	      {1'd0, 9'd319}: s2wr1 <= 319;
	      {1'd0, 9'd320}: s2wr1 <= 320;
	      {1'd0, 9'd321}: s2wr1 <= 321;
	      {1'd0, 9'd322}: s2wr1 <= 322;
	      {1'd0, 9'd323}: s2wr1 <= 323;
	      {1'd0, 9'd324}: s2wr1 <= 324;
	      {1'd0, 9'd325}: s2wr1 <= 325;
	      {1'd0, 9'd326}: s2wr1 <= 326;
	      {1'd0, 9'd327}: s2wr1 <= 327;
	      {1'd0, 9'd328}: s2wr1 <= 328;
	      {1'd0, 9'd329}: s2wr1 <= 329;
	      {1'd0, 9'd330}: s2wr1 <= 330;
	      {1'd0, 9'd331}: s2wr1 <= 331;
	      {1'd0, 9'd332}: s2wr1 <= 332;
	      {1'd0, 9'd333}: s2wr1 <= 333;
	      {1'd0, 9'd334}: s2wr1 <= 334;
	      {1'd0, 9'd335}: s2wr1 <= 335;
	      {1'd0, 9'd336}: s2wr1 <= 336;
	      {1'd0, 9'd337}: s2wr1 <= 337;
	      {1'd0, 9'd338}: s2wr1 <= 338;
	      {1'd0, 9'd339}: s2wr1 <= 339;
	      {1'd0, 9'd340}: s2wr1 <= 340;
	      {1'd0, 9'd341}: s2wr1 <= 341;
	      {1'd0, 9'd342}: s2wr1 <= 342;
	      {1'd0, 9'd343}: s2wr1 <= 343;
	      {1'd0, 9'd344}: s2wr1 <= 344;
	      {1'd0, 9'd345}: s2wr1 <= 345;
	      {1'd0, 9'd346}: s2wr1 <= 346;
	      {1'd0, 9'd347}: s2wr1 <= 347;
	      {1'd0, 9'd348}: s2wr1 <= 348;
	      {1'd0, 9'd349}: s2wr1 <= 349;
	      {1'd0, 9'd350}: s2wr1 <= 350;
	      {1'd0, 9'd351}: s2wr1 <= 351;
	      {1'd0, 9'd352}: s2wr1 <= 352;
	      {1'd0, 9'd353}: s2wr1 <= 353;
	      {1'd0, 9'd354}: s2wr1 <= 354;
	      {1'd0, 9'd355}: s2wr1 <= 355;
	      {1'd0, 9'd356}: s2wr1 <= 356;
	      {1'd0, 9'd357}: s2wr1 <= 357;
	      {1'd0, 9'd358}: s2wr1 <= 358;
	      {1'd0, 9'd359}: s2wr1 <= 359;
	      {1'd0, 9'd360}: s2wr1 <= 360;
	      {1'd0, 9'd361}: s2wr1 <= 361;
	      {1'd0, 9'd362}: s2wr1 <= 362;
	      {1'd0, 9'd363}: s2wr1 <= 363;
	      {1'd0, 9'd364}: s2wr1 <= 364;
	      {1'd0, 9'd365}: s2wr1 <= 365;
	      {1'd0, 9'd366}: s2wr1 <= 366;
	      {1'd0, 9'd367}: s2wr1 <= 367;
	      {1'd0, 9'd368}: s2wr1 <= 368;
	      {1'd0, 9'd369}: s2wr1 <= 369;
	      {1'd0, 9'd370}: s2wr1 <= 370;
	      {1'd0, 9'd371}: s2wr1 <= 371;
	      {1'd0, 9'd372}: s2wr1 <= 372;
	      {1'd0, 9'd373}: s2wr1 <= 373;
	      {1'd0, 9'd374}: s2wr1 <= 374;
	      {1'd0, 9'd375}: s2wr1 <= 375;
	      {1'd0, 9'd376}: s2wr1 <= 376;
	      {1'd0, 9'd377}: s2wr1 <= 377;
	      {1'd0, 9'd378}: s2wr1 <= 378;
	      {1'd0, 9'd379}: s2wr1 <= 379;
	      {1'd0, 9'd380}: s2wr1 <= 380;
	      {1'd0, 9'd381}: s2wr1 <= 381;
	      {1'd0, 9'd382}: s2wr1 <= 382;
	      {1'd0, 9'd383}: s2wr1 <= 383;
	      {1'd0, 9'd384}: s2wr1 <= 384;
	      {1'd0, 9'd385}: s2wr1 <= 385;
	      {1'd0, 9'd386}: s2wr1 <= 386;
	      {1'd0, 9'd387}: s2wr1 <= 387;
	      {1'd0, 9'd388}: s2wr1 <= 388;
	      {1'd0, 9'd389}: s2wr1 <= 389;
	      {1'd0, 9'd390}: s2wr1 <= 390;
	      {1'd0, 9'd391}: s2wr1 <= 391;
	      {1'd0, 9'd392}: s2wr1 <= 392;
	      {1'd0, 9'd393}: s2wr1 <= 393;
	      {1'd0, 9'd394}: s2wr1 <= 394;
	      {1'd0, 9'd395}: s2wr1 <= 395;
	      {1'd0, 9'd396}: s2wr1 <= 396;
	      {1'd0, 9'd397}: s2wr1 <= 397;
	      {1'd0, 9'd398}: s2wr1 <= 398;
	      {1'd0, 9'd399}: s2wr1 <= 399;
	      {1'd0, 9'd400}: s2wr1 <= 400;
	      {1'd0, 9'd401}: s2wr1 <= 401;
	      {1'd0, 9'd402}: s2wr1 <= 402;
	      {1'd0, 9'd403}: s2wr1 <= 403;
	      {1'd0, 9'd404}: s2wr1 <= 404;
	      {1'd0, 9'd405}: s2wr1 <= 405;
	      {1'd0, 9'd406}: s2wr1 <= 406;
	      {1'd0, 9'd407}: s2wr1 <= 407;
	      {1'd0, 9'd408}: s2wr1 <= 408;
	      {1'd0, 9'd409}: s2wr1 <= 409;
	      {1'd0, 9'd410}: s2wr1 <= 410;
	      {1'd0, 9'd411}: s2wr1 <= 411;
	      {1'd0, 9'd412}: s2wr1 <= 412;
	      {1'd0, 9'd413}: s2wr1 <= 413;
	      {1'd0, 9'd414}: s2wr1 <= 414;
	      {1'd0, 9'd415}: s2wr1 <= 415;
	      {1'd0, 9'd416}: s2wr1 <= 416;
	      {1'd0, 9'd417}: s2wr1 <= 417;
	      {1'd0, 9'd418}: s2wr1 <= 418;
	      {1'd0, 9'd419}: s2wr1 <= 419;
	      {1'd0, 9'd420}: s2wr1 <= 420;
	      {1'd0, 9'd421}: s2wr1 <= 421;
	      {1'd0, 9'd422}: s2wr1 <= 422;
	      {1'd0, 9'd423}: s2wr1 <= 423;
	      {1'd0, 9'd424}: s2wr1 <= 424;
	      {1'd0, 9'd425}: s2wr1 <= 425;
	      {1'd0, 9'd426}: s2wr1 <= 426;
	      {1'd0, 9'd427}: s2wr1 <= 427;
	      {1'd0, 9'd428}: s2wr1 <= 428;
	      {1'd0, 9'd429}: s2wr1 <= 429;
	      {1'd0, 9'd430}: s2wr1 <= 430;
	      {1'd0, 9'd431}: s2wr1 <= 431;
	      {1'd0, 9'd432}: s2wr1 <= 432;
	      {1'd0, 9'd433}: s2wr1 <= 433;
	      {1'd0, 9'd434}: s2wr1 <= 434;
	      {1'd0, 9'd435}: s2wr1 <= 435;
	      {1'd0, 9'd436}: s2wr1 <= 436;
	      {1'd0, 9'd437}: s2wr1 <= 437;
	      {1'd0, 9'd438}: s2wr1 <= 438;
	      {1'd0, 9'd439}: s2wr1 <= 439;
	      {1'd0, 9'd440}: s2wr1 <= 440;
	      {1'd0, 9'd441}: s2wr1 <= 441;
	      {1'd0, 9'd442}: s2wr1 <= 442;
	      {1'd0, 9'd443}: s2wr1 <= 443;
	      {1'd0, 9'd444}: s2wr1 <= 444;
	      {1'd0, 9'd445}: s2wr1 <= 445;
	      {1'd0, 9'd446}: s2wr1 <= 446;
	      {1'd0, 9'd447}: s2wr1 <= 447;
	      {1'd0, 9'd448}: s2wr1 <= 448;
	      {1'd0, 9'd449}: s2wr1 <= 449;
	      {1'd0, 9'd450}: s2wr1 <= 450;
	      {1'd0, 9'd451}: s2wr1 <= 451;
	      {1'd0, 9'd452}: s2wr1 <= 452;
	      {1'd0, 9'd453}: s2wr1 <= 453;
	      {1'd0, 9'd454}: s2wr1 <= 454;
	      {1'd0, 9'd455}: s2wr1 <= 455;
	      {1'd0, 9'd456}: s2wr1 <= 456;
	      {1'd0, 9'd457}: s2wr1 <= 457;
	      {1'd0, 9'd458}: s2wr1 <= 458;
	      {1'd0, 9'd459}: s2wr1 <= 459;
	      {1'd0, 9'd460}: s2wr1 <= 460;
	      {1'd0, 9'd461}: s2wr1 <= 461;
	      {1'd0, 9'd462}: s2wr1 <= 462;
	      {1'd0, 9'd463}: s2wr1 <= 463;
	      {1'd0, 9'd464}: s2wr1 <= 464;
	      {1'd0, 9'd465}: s2wr1 <= 465;
	      {1'd0, 9'd466}: s2wr1 <= 466;
	      {1'd0, 9'd467}: s2wr1 <= 467;
	      {1'd0, 9'd468}: s2wr1 <= 468;
	      {1'd0, 9'd469}: s2wr1 <= 469;
	      {1'd0, 9'd470}: s2wr1 <= 470;
	      {1'd0, 9'd471}: s2wr1 <= 471;
	      {1'd0, 9'd472}: s2wr1 <= 472;
	      {1'd0, 9'd473}: s2wr1 <= 473;
	      {1'd0, 9'd474}: s2wr1 <= 474;
	      {1'd0, 9'd475}: s2wr1 <= 475;
	      {1'd0, 9'd476}: s2wr1 <= 476;
	      {1'd0, 9'd477}: s2wr1 <= 477;
	      {1'd0, 9'd478}: s2wr1 <= 478;
	      {1'd0, 9'd479}: s2wr1 <= 479;
	      {1'd0, 9'd480}: s2wr1 <= 480;
	      {1'd0, 9'd481}: s2wr1 <= 481;
	      {1'd0, 9'd482}: s2wr1 <= 482;
	      {1'd0, 9'd483}: s2wr1 <= 483;
	      {1'd0, 9'd484}: s2wr1 <= 484;
	      {1'd0, 9'd485}: s2wr1 <= 485;
	      {1'd0, 9'd486}: s2wr1 <= 486;
	      {1'd0, 9'd487}: s2wr1 <= 487;
	      {1'd0, 9'd488}: s2wr1 <= 488;
	      {1'd0, 9'd489}: s2wr1 <= 489;
	      {1'd0, 9'd490}: s2wr1 <= 490;
	      {1'd0, 9'd491}: s2wr1 <= 491;
	      {1'd0, 9'd492}: s2wr1 <= 492;
	      {1'd0, 9'd493}: s2wr1 <= 493;
	      {1'd0, 9'd494}: s2wr1 <= 494;
	      {1'd0, 9'd495}: s2wr1 <= 495;
	      {1'd0, 9'd496}: s2wr1 <= 496;
	      {1'd0, 9'd497}: s2wr1 <= 497;
	      {1'd0, 9'd498}: s2wr1 <= 498;
	      {1'd0, 9'd499}: s2wr1 <= 499;
	      {1'd0, 9'd500}: s2wr1 <= 500;
	      {1'd0, 9'd501}: s2wr1 <= 501;
	      {1'd0, 9'd502}: s2wr1 <= 502;
	      {1'd0, 9'd503}: s2wr1 <= 503;
	      {1'd0, 9'd504}: s2wr1 <= 504;
	      {1'd0, 9'd505}: s2wr1 <= 505;
	      {1'd0, 9'd506}: s2wr1 <= 506;
	      {1'd0, 9'd507}: s2wr1 <= 507;
	      {1'd0, 9'd508}: s2wr1 <= 508;
	      {1'd0, 9'd509}: s2wr1 <= 509;
	      {1'd0, 9'd510}: s2wr1 <= 510;
	      {1'd0, 9'd511}: s2wr1 <= 511;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule


// Latency: 8
// Gap: 512
module DirSum_71776(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   reg [8:0] i1;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   always @(posedge clk) begin
      if (reset == 1) begin
         i1 <= 0;
      end
      else begin
         if (next == 1)
            i1 <= 0;
         else if (i1 == 511)
            i1 <= 0;
         else
            i1 <= i1 + 1;
      end
   end

   codeBlock69558 codeBlockIsnt74109(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i1_in(i1),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D4_70746(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [8:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h0;
      1: out3 <= 16'hff9b;
      2: out3 <= 16'hff37;
      3: out3 <= 16'hfed2;
      4: out3 <= 16'hfe6e;
      5: out3 <= 16'hfe09;
      6: out3 <= 16'hfda5;
      7: out3 <= 16'hfd40;
      8: out3 <= 16'hfcdc;
      9: out3 <= 16'hfc78;
      10: out3 <= 16'hfc13;
      11: out3 <= 16'hfbaf;
      12: out3 <= 16'hfb4b;
      13: out3 <= 16'hfae6;
      14: out3 <= 16'hfa82;
      15: out3 <= 16'hfa1e;
      16: out3 <= 16'hf9ba;
      17: out3 <= 16'hf956;
      18: out3 <= 16'hf8f2;
      19: out3 <= 16'hf88e;
      20: out3 <= 16'hf82a;
      21: out3 <= 16'hf7c7;
      22: out3 <= 16'hf763;
      23: out3 <= 16'hf6ff;
      24: out3 <= 16'hf69c;
      25: out3 <= 16'hf639;
      26: out3 <= 16'hf5d5;
      27: out3 <= 16'hf572;
      28: out3 <= 16'hf50f;
      29: out3 <= 16'hf4ac;
      30: out3 <= 16'hf449;
      31: out3 <= 16'hf3e6;
      32: out3 <= 16'hf384;
      33: out3 <= 16'hf321;
      34: out3 <= 16'hf2bf;
      35: out3 <= 16'hf25c;
      36: out3 <= 16'hf1fa;
      37: out3 <= 16'hf198;
      38: out3 <= 16'hf136;
      39: out3 <= 16'hf0d5;
      40: out3 <= 16'hf073;
      41: out3 <= 16'hf012;
      42: out3 <= 16'hefb0;
      43: out3 <= 16'hef4f;
      44: out3 <= 16'heeee;
      45: out3 <= 16'hee8d;
      46: out3 <= 16'hee2d;
      47: out3 <= 16'hedcc;
      48: out3 <= 16'hed6c;
      49: out3 <= 16'hed0c;
      50: out3 <= 16'hecac;
      51: out3 <= 16'hec4c;
      52: out3 <= 16'hebed;
      53: out3 <= 16'heb8d;
      54: out3 <= 16'heb2e;
      55: out3 <= 16'heacf;
      56: out3 <= 16'hea70;
      57: out3 <= 16'hea12;
      58: out3 <= 16'he9b4;
      59: out3 <= 16'he955;
      60: out3 <= 16'he8f7;
      61: out3 <= 16'he89a;
      62: out3 <= 16'he83c;
      63: out3 <= 16'he7df;
      64: out3 <= 16'he782;
      65: out3 <= 16'he725;
      66: out3 <= 16'he6c9;
      67: out3 <= 16'he66d;
      68: out3 <= 16'he611;
      69: out3 <= 16'he5b5;
      70: out3 <= 16'he559;
      71: out3 <= 16'he4fe;
      72: out3 <= 16'he4a3;
      73: out3 <= 16'he448;
      74: out3 <= 16'he3ee;
      75: out3 <= 16'he394;
      76: out3 <= 16'he33a;
      77: out3 <= 16'he2e0;
      78: out3 <= 16'he287;
      79: out3 <= 16'he22d;
      80: out3 <= 16'he1d5;
      81: out3 <= 16'he17c;
      82: out3 <= 16'he124;
      83: out3 <= 16'he0cc;
      84: out3 <= 16'he074;
      85: out3 <= 16'he01d;
      86: out3 <= 16'hdfc6;
      87: out3 <= 16'hdf6f;
      88: out3 <= 16'hdf19;
      89: out3 <= 16'hdec3;
      90: out3 <= 16'hde6d;
      91: out3 <= 16'hde18;
      92: out3 <= 16'hddc3;
      93: out3 <= 16'hdd6e;
      94: out3 <= 16'hdd19;
      95: out3 <= 16'hdcc5;
      96: out3 <= 16'hdc72;
      97: out3 <= 16'hdc1e;
      98: out3 <= 16'hdbcb;
      99: out3 <= 16'hdb78;
      100: out3 <= 16'hdb26;
      101: out3 <= 16'hdad4;
      102: out3 <= 16'hda82;
      103: out3 <= 16'hda31;
      104: out3 <= 16'hd9e0;
      105: out3 <= 16'hd98f;
      106: out3 <= 16'hd93f;
      107: out3 <= 16'hd8ef;
      108: out3 <= 16'hd8a0;
      109: out3 <= 16'hd851;
      110: out3 <= 16'hd802;
      111: out3 <= 16'hd7b4;
      112: out3 <= 16'hd766;
      113: out3 <= 16'hd719;
      114: out3 <= 16'hd6cb;
      115: out3 <= 16'hd67f;
      116: out3 <= 16'hd632;
      117: out3 <= 16'hd5e6;
      118: out3 <= 16'hd59b;
      119: out3 <= 16'hd550;
      120: out3 <= 16'hd505;
      121: out3 <= 16'hd4bb;
      122: out3 <= 16'hd471;
      123: out3 <= 16'hd428;
      124: out3 <= 16'hd3df;
      125: out3 <= 16'hd396;
      126: out3 <= 16'hd34e;
      127: out3 <= 16'hd306;
      128: out3 <= 16'hd2bf;
      129: out3 <= 16'hd278;
      130: out3 <= 16'hd231;
      131: out3 <= 16'hd1eb;
      132: out3 <= 16'hd1a6;
      133: out3 <= 16'hd161;
      134: out3 <= 16'hd11c;
      135: out3 <= 16'hd0d8;
      136: out3 <= 16'hd094;
      137: out3 <= 16'hd051;
      138: out3 <= 16'hd00e;
      139: out3 <= 16'hcfcc;
      140: out3 <= 16'hcf8a;
      141: out3 <= 16'hcf48;
      142: out3 <= 16'hcf07;
      143: out3 <= 16'hcec7;
      144: out3 <= 16'hce87;
      145: out3 <= 16'hce47;
      146: out3 <= 16'hce08;
      147: out3 <= 16'hcdca;
      148: out3 <= 16'hcd8c;
      149: out3 <= 16'hcd4e;
      150: out3 <= 16'hcd11;
      151: out3 <= 16'hccd4;
      152: out3 <= 16'hcc98;
      153: out3 <= 16'hcc5d;
      154: out3 <= 16'hcc21;
      155: out3 <= 16'hcbe7;
      156: out3 <= 16'hcbad;
      157: out3 <= 16'hcb73;
      158: out3 <= 16'hcb3a;
      159: out3 <= 16'hcb01;
      160: out3 <= 16'hcac9;
      161: out3 <= 16'hca92;
      162: out3 <= 16'hca5b;
      163: out3 <= 16'hca24;
      164: out3 <= 16'hc9ee;
      165: out3 <= 16'hc9b8;
      166: out3 <= 16'hc983;
      167: out3 <= 16'hc94f;
      168: out3 <= 16'hc91b;
      169: out3 <= 16'hc8e8;
      170: out3 <= 16'hc8b5;
      171: out3 <= 16'hc882;
      172: out3 <= 16'hc850;
      173: out3 <= 16'hc81f;
      174: out3 <= 16'hc7ee;
      175: out3 <= 16'hc7be;
      176: out3 <= 16'hc78f;
      177: out3 <= 16'hc75f;
      178: out3 <= 16'hc731;
      179: out3 <= 16'hc703;
      180: out3 <= 16'hc6d5;
      181: out3 <= 16'hc6a8;
      182: out3 <= 16'hc67c;
      183: out3 <= 16'hc650;
      184: out3 <= 16'hc625;
      185: out3 <= 16'hc5fa;
      186: out3 <= 16'hc5d0;
      187: out3 <= 16'hc5a7;
      188: out3 <= 16'hc57e;
      189: out3 <= 16'hc555;
      190: out3 <= 16'hc52d;
      191: out3 <= 16'hc506;
      192: out3 <= 16'hc4df;
      193: out3 <= 16'hc4b9;
      194: out3 <= 16'hc493;
      195: out3 <= 16'hc46e;
      196: out3 <= 16'hc44a;
      197: out3 <= 16'hc426;
      198: out3 <= 16'hc403;
      199: out3 <= 16'hc3e0;
      200: out3 <= 16'hc3be;
      201: out3 <= 16'hc39c;
      202: out3 <= 16'hc37b;
      203: out3 <= 16'hc35b;
      204: out3 <= 16'hc33b;
      205: out3 <= 16'hc31c;
      206: out3 <= 16'hc2fd;
      207: out3 <= 16'hc2df;
      208: out3 <= 16'hc2c1;
      209: out3 <= 16'hc2a5;
      210: out3 <= 16'hc288;
      211: out3 <= 16'hc26d;
      212: out3 <= 16'hc251;
      213: out3 <= 16'hc237;
      214: out3 <= 16'hc21d;
      215: out3 <= 16'hc204;
      216: out3 <= 16'hc1eb;
      217: out3 <= 16'hc1d3;
      218: out3 <= 16'hc1bb;
      219: out3 <= 16'hc1a4;
      220: out3 <= 16'hc18e;
      221: out3 <= 16'hc178;
      222: out3 <= 16'hc163;
      223: out3 <= 16'hc14f;
      224: out3 <= 16'hc13b;
      225: out3 <= 16'hc128;
      226: out3 <= 16'hc115;
      227: out3 <= 16'hc103;
      228: out3 <= 16'hc0f1;
      229: out3 <= 16'hc0e0;
      230: out3 <= 16'hc0d0;
      231: out3 <= 16'hc0c0;
      232: out3 <= 16'hc0b1;
      233: out3 <= 16'hc0a3;
      234: out3 <= 16'hc095;
      235: out3 <= 16'hc088;
      236: out3 <= 16'hc07b;
      237: out3 <= 16'hc06f;
      238: out3 <= 16'hc064;
      239: out3 <= 16'hc059;
      240: out3 <= 16'hc04f;
      241: out3 <= 16'hc045;
      242: out3 <= 16'hc03c;
      243: out3 <= 16'hc034;
      244: out3 <= 16'hc02c;
      245: out3 <= 16'hc025;
      246: out3 <= 16'hc01f;
      247: out3 <= 16'hc019;
      248: out3 <= 16'hc014;
      249: out3 <= 16'hc00f;
      250: out3 <= 16'hc00b;
      251: out3 <= 16'hc008;
      252: out3 <= 16'hc005;
      253: out3 <= 16'hc003;
      254: out3 <= 16'hc001;
      255: out3 <= 16'hc000;
      256: out3 <= 16'hc000;
      257: out3 <= 16'hc000;
      258: out3 <= 16'hc001;
      259: out3 <= 16'hc003;
      260: out3 <= 16'hc005;
      261: out3 <= 16'hc008;
      262: out3 <= 16'hc00b;
      263: out3 <= 16'hc00f;
      264: out3 <= 16'hc014;
      265: out3 <= 16'hc019;
      266: out3 <= 16'hc01f;
      267: out3 <= 16'hc025;
      268: out3 <= 16'hc02c;
      269: out3 <= 16'hc034;
      270: out3 <= 16'hc03c;
      271: out3 <= 16'hc045;
      272: out3 <= 16'hc04f;
      273: out3 <= 16'hc059;
      274: out3 <= 16'hc064;
      275: out3 <= 16'hc06f;
      276: out3 <= 16'hc07b;
      277: out3 <= 16'hc088;
      278: out3 <= 16'hc095;
      279: out3 <= 16'hc0a3;
      280: out3 <= 16'hc0b1;
      281: out3 <= 16'hc0c0;
      282: out3 <= 16'hc0d0;
      283: out3 <= 16'hc0e0;
      284: out3 <= 16'hc0f1;
      285: out3 <= 16'hc103;
      286: out3 <= 16'hc115;
      287: out3 <= 16'hc128;
      288: out3 <= 16'hc13b;
      289: out3 <= 16'hc14f;
      290: out3 <= 16'hc163;
      291: out3 <= 16'hc178;
      292: out3 <= 16'hc18e;
      293: out3 <= 16'hc1a4;
      294: out3 <= 16'hc1bb;
      295: out3 <= 16'hc1d3;
      296: out3 <= 16'hc1eb;
      297: out3 <= 16'hc204;
      298: out3 <= 16'hc21d;
      299: out3 <= 16'hc237;
      300: out3 <= 16'hc251;
      301: out3 <= 16'hc26d;
      302: out3 <= 16'hc288;
      303: out3 <= 16'hc2a5;
      304: out3 <= 16'hc2c1;
      305: out3 <= 16'hc2df;
      306: out3 <= 16'hc2fd;
      307: out3 <= 16'hc31c;
      308: out3 <= 16'hc33b;
      309: out3 <= 16'hc35b;
      310: out3 <= 16'hc37b;
      311: out3 <= 16'hc39c;
      312: out3 <= 16'hc3be;
      313: out3 <= 16'hc3e0;
      314: out3 <= 16'hc403;
      315: out3 <= 16'hc426;
      316: out3 <= 16'hc44a;
      317: out3 <= 16'hc46e;
      318: out3 <= 16'hc493;
      319: out3 <= 16'hc4b9;
      320: out3 <= 16'hc4df;
      321: out3 <= 16'hc506;
      322: out3 <= 16'hc52d;
      323: out3 <= 16'hc555;
      324: out3 <= 16'hc57e;
      325: out3 <= 16'hc5a7;
      326: out3 <= 16'hc5d0;
      327: out3 <= 16'hc5fa;
      328: out3 <= 16'hc625;
      329: out3 <= 16'hc650;
      330: out3 <= 16'hc67c;
      331: out3 <= 16'hc6a8;
      332: out3 <= 16'hc6d5;
      333: out3 <= 16'hc703;
      334: out3 <= 16'hc731;
      335: out3 <= 16'hc75f;
      336: out3 <= 16'hc78f;
      337: out3 <= 16'hc7be;
      338: out3 <= 16'hc7ee;
      339: out3 <= 16'hc81f;
      340: out3 <= 16'hc850;
      341: out3 <= 16'hc882;
      342: out3 <= 16'hc8b5;
      343: out3 <= 16'hc8e8;
      344: out3 <= 16'hc91b;
      345: out3 <= 16'hc94f;
      346: out3 <= 16'hc983;
      347: out3 <= 16'hc9b8;
      348: out3 <= 16'hc9ee;
      349: out3 <= 16'hca24;
      350: out3 <= 16'hca5b;
      351: out3 <= 16'hca92;
      352: out3 <= 16'hcac9;
      353: out3 <= 16'hcb01;
      354: out3 <= 16'hcb3a;
      355: out3 <= 16'hcb73;
      356: out3 <= 16'hcbad;
      357: out3 <= 16'hcbe7;
      358: out3 <= 16'hcc21;
      359: out3 <= 16'hcc5d;
      360: out3 <= 16'hcc98;
      361: out3 <= 16'hccd4;
      362: out3 <= 16'hcd11;
      363: out3 <= 16'hcd4e;
      364: out3 <= 16'hcd8c;
      365: out3 <= 16'hcdca;
      366: out3 <= 16'hce08;
      367: out3 <= 16'hce47;
      368: out3 <= 16'hce87;
      369: out3 <= 16'hcec7;
      370: out3 <= 16'hcf07;
      371: out3 <= 16'hcf48;
      372: out3 <= 16'hcf8a;
      373: out3 <= 16'hcfcc;
      374: out3 <= 16'hd00e;
      375: out3 <= 16'hd051;
      376: out3 <= 16'hd094;
      377: out3 <= 16'hd0d8;
      378: out3 <= 16'hd11c;
      379: out3 <= 16'hd161;
      380: out3 <= 16'hd1a6;
      381: out3 <= 16'hd1eb;
      382: out3 <= 16'hd231;
      383: out3 <= 16'hd278;
      384: out3 <= 16'hd2bf;
      385: out3 <= 16'hd306;
      386: out3 <= 16'hd34e;
      387: out3 <= 16'hd396;
      388: out3 <= 16'hd3df;
      389: out3 <= 16'hd428;
      390: out3 <= 16'hd471;
      391: out3 <= 16'hd4bb;
      392: out3 <= 16'hd505;
      393: out3 <= 16'hd550;
      394: out3 <= 16'hd59b;
      395: out3 <= 16'hd5e6;
      396: out3 <= 16'hd632;
      397: out3 <= 16'hd67f;
      398: out3 <= 16'hd6cb;
      399: out3 <= 16'hd719;
      400: out3 <= 16'hd766;
      401: out3 <= 16'hd7b4;
      402: out3 <= 16'hd802;
      403: out3 <= 16'hd851;
      404: out3 <= 16'hd8a0;
      405: out3 <= 16'hd8ef;
      406: out3 <= 16'hd93f;
      407: out3 <= 16'hd98f;
      408: out3 <= 16'hd9e0;
      409: out3 <= 16'hda31;
      410: out3 <= 16'hda82;
      411: out3 <= 16'hdad4;
      412: out3 <= 16'hdb26;
      413: out3 <= 16'hdb78;
      414: out3 <= 16'hdbcb;
      415: out3 <= 16'hdc1e;
      416: out3 <= 16'hdc72;
      417: out3 <= 16'hdcc5;
      418: out3 <= 16'hdd19;
      419: out3 <= 16'hdd6e;
      420: out3 <= 16'hddc3;
      421: out3 <= 16'hde18;
      422: out3 <= 16'hde6d;
      423: out3 <= 16'hdec3;
      424: out3 <= 16'hdf19;
      425: out3 <= 16'hdf6f;
      426: out3 <= 16'hdfc6;
      427: out3 <= 16'he01d;
      428: out3 <= 16'he074;
      429: out3 <= 16'he0cc;
      430: out3 <= 16'he124;
      431: out3 <= 16'he17c;
      432: out3 <= 16'he1d5;
      433: out3 <= 16'he22d;
      434: out3 <= 16'he287;
      435: out3 <= 16'he2e0;
      436: out3 <= 16'he33a;
      437: out3 <= 16'he394;
      438: out3 <= 16'he3ee;
      439: out3 <= 16'he448;
      440: out3 <= 16'he4a3;
      441: out3 <= 16'he4fe;
      442: out3 <= 16'he559;
      443: out3 <= 16'he5b5;
      444: out3 <= 16'he611;
      445: out3 <= 16'he66d;
      446: out3 <= 16'he6c9;
      447: out3 <= 16'he725;
      448: out3 <= 16'he782;
      449: out3 <= 16'he7df;
      450: out3 <= 16'he83c;
      451: out3 <= 16'he89a;
      452: out3 <= 16'he8f7;
      453: out3 <= 16'he955;
      454: out3 <= 16'he9b4;
      455: out3 <= 16'hea12;
      456: out3 <= 16'hea70;
      457: out3 <= 16'heacf;
      458: out3 <= 16'heb2e;
      459: out3 <= 16'heb8d;
      460: out3 <= 16'hebed;
      461: out3 <= 16'hec4c;
      462: out3 <= 16'hecac;
      463: out3 <= 16'hed0c;
      464: out3 <= 16'hed6c;
      465: out3 <= 16'hedcc;
      466: out3 <= 16'hee2d;
      467: out3 <= 16'hee8d;
      468: out3 <= 16'heeee;
      469: out3 <= 16'hef4f;
      470: out3 <= 16'hefb0;
      471: out3 <= 16'hf012;
      472: out3 <= 16'hf073;
      473: out3 <= 16'hf0d5;
      474: out3 <= 16'hf136;
      475: out3 <= 16'hf198;
      476: out3 <= 16'hf1fa;
      477: out3 <= 16'hf25c;
      478: out3 <= 16'hf2bf;
      479: out3 <= 16'hf321;
      480: out3 <= 16'hf384;
      481: out3 <= 16'hf3e6;
      482: out3 <= 16'hf449;
      483: out3 <= 16'hf4ac;
      484: out3 <= 16'hf50f;
      485: out3 <= 16'hf572;
      486: out3 <= 16'hf5d5;
      487: out3 <= 16'hf639;
      488: out3 <= 16'hf69c;
      489: out3 <= 16'hf6ff;
      490: out3 <= 16'hf763;
      491: out3 <= 16'hf7c7;
      492: out3 <= 16'hf82a;
      493: out3 <= 16'hf88e;
      494: out3 <= 16'hf8f2;
      495: out3 <= 16'hf956;
      496: out3 <= 16'hf9ba;
      497: out3 <= 16'hfa1e;
      498: out3 <= 16'hfa82;
      499: out3 <= 16'hfae6;
      500: out3 <= 16'hfb4b;
      501: out3 <= 16'hfbaf;
      502: out3 <= 16'hfc13;
      503: out3 <= 16'hfc78;
      504: out3 <= 16'hfcdc;
      505: out3 <= 16'hfd40;
      506: out3 <= 16'hfda5;
      507: out3 <= 16'hfe09;
      508: out3 <= 16'hfe6e;
      509: out3 <= 16'hfed2;
      510: out3 <= 16'hff37;
      511: out3 <= 16'hff9b;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D2_71774(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [8:0] addr;

   always @(posedge clk) begin
      out2 <= out3;
      out <= out2;
   case(addr)
      0: out3 <= 16'h4000;
      1: out3 <= 16'h4000;
      2: out3 <= 16'h3fff;
      3: out3 <= 16'h3ffd;
      4: out3 <= 16'h3ffb;
      5: out3 <= 16'h3ff8;
      6: out3 <= 16'h3ff5;
      7: out3 <= 16'h3ff1;
      8: out3 <= 16'h3fec;
      9: out3 <= 16'h3fe7;
      10: out3 <= 16'h3fe1;
      11: out3 <= 16'h3fdb;
      12: out3 <= 16'h3fd4;
      13: out3 <= 16'h3fcc;
      14: out3 <= 16'h3fc4;
      15: out3 <= 16'h3fbb;
      16: out3 <= 16'h3fb1;
      17: out3 <= 16'h3fa7;
      18: out3 <= 16'h3f9c;
      19: out3 <= 16'h3f91;
      20: out3 <= 16'h3f85;
      21: out3 <= 16'h3f78;
      22: out3 <= 16'h3f6b;
      23: out3 <= 16'h3f5d;
      24: out3 <= 16'h3f4f;
      25: out3 <= 16'h3f40;
      26: out3 <= 16'h3f30;
      27: out3 <= 16'h3f20;
      28: out3 <= 16'h3f0f;
      29: out3 <= 16'h3efd;
      30: out3 <= 16'h3eeb;
      31: out3 <= 16'h3ed8;
      32: out3 <= 16'h3ec5;
      33: out3 <= 16'h3eb1;
      34: out3 <= 16'h3e9d;
      35: out3 <= 16'h3e88;
      36: out3 <= 16'h3e72;
      37: out3 <= 16'h3e5c;
      38: out3 <= 16'h3e45;
      39: out3 <= 16'h3e2d;
      40: out3 <= 16'h3e15;
      41: out3 <= 16'h3dfc;
      42: out3 <= 16'h3de3;
      43: out3 <= 16'h3dc9;
      44: out3 <= 16'h3daf;
      45: out3 <= 16'h3d93;
      46: out3 <= 16'h3d78;
      47: out3 <= 16'h3d5b;
      48: out3 <= 16'h3d3f;
      49: out3 <= 16'h3d21;
      50: out3 <= 16'h3d03;
      51: out3 <= 16'h3ce4;
      52: out3 <= 16'h3cc5;
      53: out3 <= 16'h3ca5;
      54: out3 <= 16'h3c85;
      55: out3 <= 16'h3c64;
      56: out3 <= 16'h3c42;
      57: out3 <= 16'h3c20;
      58: out3 <= 16'h3bfd;
      59: out3 <= 16'h3bda;
      60: out3 <= 16'h3bb6;
      61: out3 <= 16'h3b92;
      62: out3 <= 16'h3b6d;
      63: out3 <= 16'h3b47;
      64: out3 <= 16'h3b21;
      65: out3 <= 16'h3afa;
      66: out3 <= 16'h3ad3;
      67: out3 <= 16'h3aab;
      68: out3 <= 16'h3a82;
      69: out3 <= 16'h3a59;
      70: out3 <= 16'h3a30;
      71: out3 <= 16'h3a06;
      72: out3 <= 16'h39db;
      73: out3 <= 16'h39b0;
      74: out3 <= 16'h3984;
      75: out3 <= 16'h3958;
      76: out3 <= 16'h392b;
      77: out3 <= 16'h38fd;
      78: out3 <= 16'h38cf;
      79: out3 <= 16'h38a1;
      80: out3 <= 16'h3871;
      81: out3 <= 16'h3842;
      82: out3 <= 16'h3812;
      83: out3 <= 16'h37e1;
      84: out3 <= 16'h37b0;
      85: out3 <= 16'h377e;
      86: out3 <= 16'h374b;
      87: out3 <= 16'h3718;
      88: out3 <= 16'h36e5;
      89: out3 <= 16'h36b1;
      90: out3 <= 16'h367d;
      91: out3 <= 16'h3648;
      92: out3 <= 16'h3612;
      93: out3 <= 16'h35dc;
      94: out3 <= 16'h35a5;
      95: out3 <= 16'h356e;
      96: out3 <= 16'h3537;
      97: out3 <= 16'h34ff;
      98: out3 <= 16'h34c6;
      99: out3 <= 16'h348d;
      100: out3 <= 16'h3453;
      101: out3 <= 16'h3419;
      102: out3 <= 16'h33df;
      103: out3 <= 16'h33a3;
      104: out3 <= 16'h3368;
      105: out3 <= 16'h332c;
      106: out3 <= 16'h32ef;
      107: out3 <= 16'h32b2;
      108: out3 <= 16'h3274;
      109: out3 <= 16'h3236;
      110: out3 <= 16'h31f8;
      111: out3 <= 16'h31b9;
      112: out3 <= 16'h3179;
      113: out3 <= 16'h3139;
      114: out3 <= 16'h30f9;
      115: out3 <= 16'h30b8;
      116: out3 <= 16'h3076;
      117: out3 <= 16'h3034;
      118: out3 <= 16'h2ff2;
      119: out3 <= 16'h2faf;
      120: out3 <= 16'h2f6c;
      121: out3 <= 16'h2f28;
      122: out3 <= 16'h2ee4;
      123: out3 <= 16'h2e9f;
      124: out3 <= 16'h2e5a;
      125: out3 <= 16'h2e15;
      126: out3 <= 16'h2dcf;
      127: out3 <= 16'h2d88;
      128: out3 <= 16'h2d41;
      129: out3 <= 16'h2cfa;
      130: out3 <= 16'h2cb2;
      131: out3 <= 16'h2c6a;
      132: out3 <= 16'h2c21;
      133: out3 <= 16'h2bd8;
      134: out3 <= 16'h2b8f;
      135: out3 <= 16'h2b45;
      136: out3 <= 16'h2afb;
      137: out3 <= 16'h2ab0;
      138: out3 <= 16'h2a65;
      139: out3 <= 16'h2a1a;
      140: out3 <= 16'h29ce;
      141: out3 <= 16'h2981;
      142: out3 <= 16'h2935;
      143: out3 <= 16'h28e7;
      144: out3 <= 16'h289a;
      145: out3 <= 16'h284c;
      146: out3 <= 16'h27fe;
      147: out3 <= 16'h27af;
      148: out3 <= 16'h2760;
      149: out3 <= 16'h2711;
      150: out3 <= 16'h26c1;
      151: out3 <= 16'h2671;
      152: out3 <= 16'h2620;
      153: out3 <= 16'h25cf;
      154: out3 <= 16'h257e;
      155: out3 <= 16'h252c;
      156: out3 <= 16'h24da;
      157: out3 <= 16'h2488;
      158: out3 <= 16'h2435;
      159: out3 <= 16'h23e2;
      160: out3 <= 16'h238e;
      161: out3 <= 16'h233b;
      162: out3 <= 16'h22e7;
      163: out3 <= 16'h2292;
      164: out3 <= 16'h223d;
      165: out3 <= 16'h21e8;
      166: out3 <= 16'h2193;
      167: out3 <= 16'h213d;
      168: out3 <= 16'h20e7;
      169: out3 <= 16'h2091;
      170: out3 <= 16'h203a;
      171: out3 <= 16'h1fe3;
      172: out3 <= 16'h1f8c;
      173: out3 <= 16'h1f34;
      174: out3 <= 16'h1edc;
      175: out3 <= 16'h1e84;
      176: out3 <= 16'h1e2b;
      177: out3 <= 16'h1dd3;
      178: out3 <= 16'h1d79;
      179: out3 <= 16'h1d20;
      180: out3 <= 16'h1cc6;
      181: out3 <= 16'h1c6c;
      182: out3 <= 16'h1c12;
      183: out3 <= 16'h1bb8;
      184: out3 <= 16'h1b5d;
      185: out3 <= 16'h1b02;
      186: out3 <= 16'h1aa7;
      187: out3 <= 16'h1a4b;
      188: out3 <= 16'h19ef;
      189: out3 <= 16'h1993;
      190: out3 <= 16'h1937;
      191: out3 <= 16'h18db;
      192: out3 <= 16'h187e;
      193: out3 <= 16'h1821;
      194: out3 <= 16'h17c4;
      195: out3 <= 16'h1766;
      196: out3 <= 16'h1709;
      197: out3 <= 16'h16ab;
      198: out3 <= 16'h164c;
      199: out3 <= 16'h15ee;
      200: out3 <= 16'h1590;
      201: out3 <= 16'h1531;
      202: out3 <= 16'h14d2;
      203: out3 <= 16'h1473;
      204: out3 <= 16'h1413;
      205: out3 <= 16'h13b4;
      206: out3 <= 16'h1354;
      207: out3 <= 16'h12f4;
      208: out3 <= 16'h1294;
      209: out3 <= 16'h1234;
      210: out3 <= 16'h11d3;
      211: out3 <= 16'h1173;
      212: out3 <= 16'h1112;
      213: out3 <= 16'h10b1;
      214: out3 <= 16'h1050;
      215: out3 <= 16'hfee;
      216: out3 <= 16'hf8d;
      217: out3 <= 16'hf2b;
      218: out3 <= 16'heca;
      219: out3 <= 16'he68;
      220: out3 <= 16'he06;
      221: out3 <= 16'hda4;
      222: out3 <= 16'hd41;
      223: out3 <= 16'hcdf;
      224: out3 <= 16'hc7c;
      225: out3 <= 16'hc1a;
      226: out3 <= 16'hbb7;
      227: out3 <= 16'hb54;
      228: out3 <= 16'haf1;
      229: out3 <= 16'ha8e;
      230: out3 <= 16'ha2b;
      231: out3 <= 16'h9c7;
      232: out3 <= 16'h964;
      233: out3 <= 16'h901;
      234: out3 <= 16'h89d;
      235: out3 <= 16'h839;
      236: out3 <= 16'h7d6;
      237: out3 <= 16'h772;
      238: out3 <= 16'h70e;
      239: out3 <= 16'h6aa;
      240: out3 <= 16'h646;
      241: out3 <= 16'h5e2;
      242: out3 <= 16'h57e;
      243: out3 <= 16'h51a;
      244: out3 <= 16'h4b5;
      245: out3 <= 16'h451;
      246: out3 <= 16'h3ed;
      247: out3 <= 16'h388;
      248: out3 <= 16'h324;
      249: out3 <= 16'h2c0;
      250: out3 <= 16'h25b;
      251: out3 <= 16'h1f7;
      252: out3 <= 16'h192;
      253: out3 <= 16'h12e;
      254: out3 <= 16'hc9;
      255: out3 <= 16'h65;
      256: out3 <= 16'h0;
      257: out3 <= 16'hff9b;
      258: out3 <= 16'hff37;
      259: out3 <= 16'hfed2;
      260: out3 <= 16'hfe6e;
      261: out3 <= 16'hfe09;
      262: out3 <= 16'hfda5;
      263: out3 <= 16'hfd40;
      264: out3 <= 16'hfcdc;
      265: out3 <= 16'hfc78;
      266: out3 <= 16'hfc13;
      267: out3 <= 16'hfbaf;
      268: out3 <= 16'hfb4b;
      269: out3 <= 16'hfae6;
      270: out3 <= 16'hfa82;
      271: out3 <= 16'hfa1e;
      272: out3 <= 16'hf9ba;
      273: out3 <= 16'hf956;
      274: out3 <= 16'hf8f2;
      275: out3 <= 16'hf88e;
      276: out3 <= 16'hf82a;
      277: out3 <= 16'hf7c7;
      278: out3 <= 16'hf763;
      279: out3 <= 16'hf6ff;
      280: out3 <= 16'hf69c;
      281: out3 <= 16'hf639;
      282: out3 <= 16'hf5d5;
      283: out3 <= 16'hf572;
      284: out3 <= 16'hf50f;
      285: out3 <= 16'hf4ac;
      286: out3 <= 16'hf449;
      287: out3 <= 16'hf3e6;
      288: out3 <= 16'hf384;
      289: out3 <= 16'hf321;
      290: out3 <= 16'hf2bf;
      291: out3 <= 16'hf25c;
      292: out3 <= 16'hf1fa;
      293: out3 <= 16'hf198;
      294: out3 <= 16'hf136;
      295: out3 <= 16'hf0d5;
      296: out3 <= 16'hf073;
      297: out3 <= 16'hf012;
      298: out3 <= 16'hefb0;
      299: out3 <= 16'hef4f;
      300: out3 <= 16'heeee;
      301: out3 <= 16'hee8d;
      302: out3 <= 16'hee2d;
      303: out3 <= 16'hedcc;
      304: out3 <= 16'hed6c;
      305: out3 <= 16'hed0c;
      306: out3 <= 16'hecac;
      307: out3 <= 16'hec4c;
      308: out3 <= 16'hebed;
      309: out3 <= 16'heb8d;
      310: out3 <= 16'heb2e;
      311: out3 <= 16'heacf;
      312: out3 <= 16'hea70;
      313: out3 <= 16'hea12;
      314: out3 <= 16'he9b4;
      315: out3 <= 16'he955;
      316: out3 <= 16'he8f7;
      317: out3 <= 16'he89a;
      318: out3 <= 16'he83c;
      319: out3 <= 16'he7df;
      320: out3 <= 16'he782;
      321: out3 <= 16'he725;
      322: out3 <= 16'he6c9;
      323: out3 <= 16'he66d;
      324: out3 <= 16'he611;
      325: out3 <= 16'he5b5;
      326: out3 <= 16'he559;
      327: out3 <= 16'he4fe;
      328: out3 <= 16'he4a3;
      329: out3 <= 16'he448;
      330: out3 <= 16'he3ee;
      331: out3 <= 16'he394;
      332: out3 <= 16'he33a;
      333: out3 <= 16'he2e0;
      334: out3 <= 16'he287;
      335: out3 <= 16'he22d;
      336: out3 <= 16'he1d5;
      337: out3 <= 16'he17c;
      338: out3 <= 16'he124;
      339: out3 <= 16'he0cc;
      340: out3 <= 16'he074;
      341: out3 <= 16'he01d;
      342: out3 <= 16'hdfc6;
      343: out3 <= 16'hdf6f;
      344: out3 <= 16'hdf19;
      345: out3 <= 16'hdec3;
      346: out3 <= 16'hde6d;
      347: out3 <= 16'hde18;
      348: out3 <= 16'hddc3;
      349: out3 <= 16'hdd6e;
      350: out3 <= 16'hdd19;
      351: out3 <= 16'hdcc5;
      352: out3 <= 16'hdc72;
      353: out3 <= 16'hdc1e;
      354: out3 <= 16'hdbcb;
      355: out3 <= 16'hdb78;
      356: out3 <= 16'hdb26;
      357: out3 <= 16'hdad4;
      358: out3 <= 16'hda82;
      359: out3 <= 16'hda31;
      360: out3 <= 16'hd9e0;
      361: out3 <= 16'hd98f;
      362: out3 <= 16'hd93f;
      363: out3 <= 16'hd8ef;
      364: out3 <= 16'hd8a0;
      365: out3 <= 16'hd851;
      366: out3 <= 16'hd802;
      367: out3 <= 16'hd7b4;
      368: out3 <= 16'hd766;
      369: out3 <= 16'hd719;
      370: out3 <= 16'hd6cb;
      371: out3 <= 16'hd67f;
      372: out3 <= 16'hd632;
      373: out3 <= 16'hd5e6;
      374: out3 <= 16'hd59b;
      375: out3 <= 16'hd550;
      376: out3 <= 16'hd505;
      377: out3 <= 16'hd4bb;
      378: out3 <= 16'hd471;
      379: out3 <= 16'hd428;
      380: out3 <= 16'hd3df;
      381: out3 <= 16'hd396;
      382: out3 <= 16'hd34e;
      383: out3 <= 16'hd306;
      384: out3 <= 16'hd2bf;
      385: out3 <= 16'hd278;
      386: out3 <= 16'hd231;
      387: out3 <= 16'hd1eb;
      388: out3 <= 16'hd1a6;
      389: out3 <= 16'hd161;
      390: out3 <= 16'hd11c;
      391: out3 <= 16'hd0d8;
      392: out3 <= 16'hd094;
      393: out3 <= 16'hd051;
      394: out3 <= 16'hd00e;
      395: out3 <= 16'hcfcc;
      396: out3 <= 16'hcf8a;
      397: out3 <= 16'hcf48;
      398: out3 <= 16'hcf07;
      399: out3 <= 16'hcec7;
      400: out3 <= 16'hce87;
      401: out3 <= 16'hce47;
      402: out3 <= 16'hce08;
      403: out3 <= 16'hcdca;
      404: out3 <= 16'hcd8c;
      405: out3 <= 16'hcd4e;
      406: out3 <= 16'hcd11;
      407: out3 <= 16'hccd4;
      408: out3 <= 16'hcc98;
      409: out3 <= 16'hcc5d;
      410: out3 <= 16'hcc21;
      411: out3 <= 16'hcbe7;
      412: out3 <= 16'hcbad;
      413: out3 <= 16'hcb73;
      414: out3 <= 16'hcb3a;
      415: out3 <= 16'hcb01;
      416: out3 <= 16'hcac9;
      417: out3 <= 16'hca92;
      418: out3 <= 16'hca5b;
      419: out3 <= 16'hca24;
      420: out3 <= 16'hc9ee;
      421: out3 <= 16'hc9b8;
      422: out3 <= 16'hc983;
      423: out3 <= 16'hc94f;
      424: out3 <= 16'hc91b;
      425: out3 <= 16'hc8e8;
      426: out3 <= 16'hc8b5;
      427: out3 <= 16'hc882;
      428: out3 <= 16'hc850;
      429: out3 <= 16'hc81f;
      430: out3 <= 16'hc7ee;
      431: out3 <= 16'hc7be;
      432: out3 <= 16'hc78f;
      433: out3 <= 16'hc75f;
      434: out3 <= 16'hc731;
      435: out3 <= 16'hc703;
      436: out3 <= 16'hc6d5;
      437: out3 <= 16'hc6a8;
      438: out3 <= 16'hc67c;
      439: out3 <= 16'hc650;
      440: out3 <= 16'hc625;
      441: out3 <= 16'hc5fa;
      442: out3 <= 16'hc5d0;
      443: out3 <= 16'hc5a7;
      444: out3 <= 16'hc57e;
      445: out3 <= 16'hc555;
      446: out3 <= 16'hc52d;
      447: out3 <= 16'hc506;
      448: out3 <= 16'hc4df;
      449: out3 <= 16'hc4b9;
      450: out3 <= 16'hc493;
      451: out3 <= 16'hc46e;
      452: out3 <= 16'hc44a;
      453: out3 <= 16'hc426;
      454: out3 <= 16'hc403;
      455: out3 <= 16'hc3e0;
      456: out3 <= 16'hc3be;
      457: out3 <= 16'hc39c;
      458: out3 <= 16'hc37b;
      459: out3 <= 16'hc35b;
      460: out3 <= 16'hc33b;
      461: out3 <= 16'hc31c;
      462: out3 <= 16'hc2fd;
      463: out3 <= 16'hc2df;
      464: out3 <= 16'hc2c1;
      465: out3 <= 16'hc2a5;
      466: out3 <= 16'hc288;
      467: out3 <= 16'hc26d;
      468: out3 <= 16'hc251;
      469: out3 <= 16'hc237;
      470: out3 <= 16'hc21d;
      471: out3 <= 16'hc204;
      472: out3 <= 16'hc1eb;
      473: out3 <= 16'hc1d3;
      474: out3 <= 16'hc1bb;
      475: out3 <= 16'hc1a4;
      476: out3 <= 16'hc18e;
      477: out3 <= 16'hc178;
      478: out3 <= 16'hc163;
      479: out3 <= 16'hc14f;
      480: out3 <= 16'hc13b;
      481: out3 <= 16'hc128;
      482: out3 <= 16'hc115;
      483: out3 <= 16'hc103;
      484: out3 <= 16'hc0f1;
      485: out3 <= 16'hc0e0;
      486: out3 <= 16'hc0d0;
      487: out3 <= 16'hc0c0;
      488: out3 <= 16'hc0b1;
      489: out3 <= 16'hc0a3;
      490: out3 <= 16'hc095;
      491: out3 <= 16'hc088;
      492: out3 <= 16'hc07b;
      493: out3 <= 16'hc06f;
      494: out3 <= 16'hc064;
      495: out3 <= 16'hc059;
      496: out3 <= 16'hc04f;
      497: out3 <= 16'hc045;
      498: out3 <= 16'hc03c;
      499: out3 <= 16'hc034;
      500: out3 <= 16'hc02c;
      501: out3 <= 16'hc025;
      502: out3 <= 16'hc01f;
      503: out3 <= 16'hc019;
      504: out3 <= 16'hc014;
      505: out3 <= 16'hc00f;
      506: out3 <= 16'hc00b;
      507: out3 <= 16'hc008;
      508: out3 <= 16'hc005;
      509: out3 <= 16'hc003;
      510: out3 <= 16'hc001;
      511: out3 <= 16'hc000;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 8
// Gap: 1
module codeBlock69558(clk, reset, next_in, next_out,
   i1_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [8:0] i1_in;
   reg [8:0] i1;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(7, 1) shiftFIFO_74112(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a53;
   wire signed [15:0] a42;
   wire signed [15:0] a56;
   wire signed [15:0] a46;
   wire signed [15:0] a57;
   wire signed [15:0] a58;
   reg signed [15:0] tm525;
   reg signed [15:0] tm529;
   reg signed [15:0] tm541;
   reg signed [15:0] tm548;
   reg signed [15:0] tm526;
   reg signed [15:0] tm530;
   reg signed [15:0] tm542;
   reg signed [15:0] tm549;
   wire signed [15:0] tm44;
   wire signed [15:0] a47;
   wire signed [15:0] tm45;
   wire signed [15:0] a49;
   reg signed [15:0] tm527;
   reg signed [15:0] tm531;
   reg signed [15:0] tm543;
   reg signed [15:0] tm550;
   reg signed [15:0] tm115;
   reg signed [15:0] tm116;
   reg signed [15:0] tm528;
   reg signed [15:0] tm532;
   reg signed [15:0] tm544;
   reg signed [15:0] tm551;
   reg signed [15:0] tm545;
   reg signed [15:0] tm552;
   wire signed [15:0] a48;
   wire signed [15:0] a50;
   wire signed [15:0] a51;
   wire signed [15:0] a52;
   reg signed [15:0] tm546;
   reg signed [15:0] tm553;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm547;
   reg signed [15:0] tm554;


   assign a53 = X0;
   assign a42 = a53;
   assign a56 = X1;
   assign a46 = a56;
   assign a57 = X2;
   assign a58 = X3;
   assign a47 = tm44;
   assign a49 = tm45;
   assign Y0 = tm547;
   assign Y1 = tm554;

   D4_70746 instD4inst0_70746(.addr(i1[8:0]), .out(tm45), .clk(clk));

   D2_71774 instD2inst0_71774(.addr(i1[8:0]), .out(tm44), .clk(clk));

    multfix #(16, 2) m69657(.a(tm115), .b(tm528), .clk(clk), .q_sc(a48), .q_unsc(), .rst(reset));
    multfix #(16, 2) m69679(.a(tm116), .b(tm532), .clk(clk), .q_sc(a50), .q_unsc(), .rst(reset));
    multfix #(16, 2) m69697(.a(tm116), .b(tm528), .clk(clk), .q_sc(a51), .q_unsc(), .rst(reset));
    multfix #(16, 2) m69708(.a(tm115), .b(tm532), .clk(clk), .q_sc(a52), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub69686(.a(a48), .b(a50), .clk(clk), .q(Y2));    // 6
    addfxp #(16, 1) add69715(.a(a51), .b(a52), .clk(clk), .q(Y3));    // 6


   always @(posedge clk) begin
      if (reset == 1) begin
         tm115 <= 0;
         tm528 <= 0;
         tm116 <= 0;
         tm532 <= 0;
         tm116 <= 0;
         tm528 <= 0;
         tm115 <= 0;
         tm532 <= 0;
      end
      else begin
         i1 <= i1_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm525 <= a57;
         tm529 <= a58;
         tm541 <= a42;
         tm548 <= a46;
         tm526 <= tm525;
         tm530 <= tm529;
         tm542 <= tm541;
         tm549 <= tm548;
         tm527 <= tm526;
         tm531 <= tm530;
         tm543 <= tm542;
         tm550 <= tm549;
         tm115 <= a47;
         tm116 <= a49;
         tm528 <= tm527;
         tm532 <= tm531;
         tm544 <= tm543;
         tm551 <= tm550;
         tm545 <= tm544;
         tm552 <= tm551;
         tm546 <= tm545;
         tm553 <= tm552;
         tm547 <= tm546;
         tm554 <= tm553;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock71779(clk, reset, next_in, next_out,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;

   input [15:0] X0_in,
      X1_in,
      X2_in,
      X3_in;

   reg   [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   shiftRegFIFO #(1, 1) shiftFIFO_74115(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a9;
   wire signed [15:0] a10;
   wire signed [15:0] a11;
   wire signed [15:0] a12;
   wire signed [16:0] tm281;
   wire signed [16:0] tm282;
   wire signed [16:0] tm283;
   wire signed [16:0] tm284;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   wire signed [15:0] t21;
   wire signed [15:0] t22;
   wire signed [15:0] t23;
   wire signed [15:0] t24;


   assign a9 = X0;
   assign a10 = X2;
   assign a11 = X1;
   assign a12 = X3;
   assign Y0 = t21;
   assign Y1 = t22;
   assign Y2 = t23;
   assign Y3 = t24;
   assign t21 = tm281[16:1];
   assign t22 = tm282[16:1];
   assign t23 = tm283[16:1];
   assign t24 = tm284[16:1];

    addfxp #(17, 1) add71791(.a({{1{a9[15]}}, a9}), .b({{1{a10[15]}}, a10}), .clk(clk), .q(tm281));    // 0
    addfxp #(17, 1) add71806(.a({{1{a11[15]}}, a11}), .b({{1{a12[15]}}, a12}), .clk(clk), .q(tm282));    // 0
    subfxp #(17, 1) sub71821(.a({{1{a9[15]}}, a9}), .b({{1{a10[15]}}, a10}), .clk(clk), .q(tm283));    // 0
    subfxp #(17, 1) sub71836(.a({{1{a11[15]}}, a11}), .b({{1{a12[15]}}, a12}), .clk(clk), .q(tm284));    // 0


   always @(posedge clk) begin
      if (reset == 1) begin
      end
      else begin
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
      end
   end
endmodule

// Latency: 1028
// Gap: 512
module rc71861(clk, reset, next, next_out,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   wire [31:0] t0;
   wire [31:0] s0;
   assign t0 = {X0, X1};
   wire [31:0] t1;
   wire [31:0] s1;
   assign t1 = {X2, X3};
   assign Y0 = s0[31:16];
   assign Y1 = s0[15:0];
   assign Y2 = s1[31:16];
   assign Y3 = s1[15:0];

   perm71859 instPerm74116(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet71859(itr, clk, ct
,       x0, y0
,       x1, y1
);

    parameter width = 32;

    input [8:0] ct;
    input clk;
    input [0:0] itr;
    input [width-1:0] x0;
    output reg [width-1:0] y0;
    input [width-1:0] x1;
    output reg [width-1:0] y1;
    wire [width-1:0] t0_0, t0_1;
    reg [width-1:0] t1_0, t1_1;

    reg [0:0] control;

    always @(posedge clk) begin
      case(ct)
        9'd0: control <= 1'b1;
        9'd1: control <= 1'b1;
        9'd2: control <= 1'b1;
        9'd3: control <= 1'b1;
        9'd4: control <= 1'b1;
        9'd5: control <= 1'b1;
        9'd6: control <= 1'b1;
        9'd7: control <= 1'b1;
        9'd8: control <= 1'b1;
        9'd9: control <= 1'b1;
        9'd10: control <= 1'b1;
        9'd11: control <= 1'b1;
        9'd12: control <= 1'b1;
        9'd13: control <= 1'b1;
        9'd14: control <= 1'b1;
        9'd15: control <= 1'b1;
        9'd16: control <= 1'b1;
        9'd17: control <= 1'b1;
        9'd18: control <= 1'b1;
        9'd19: control <= 1'b1;
        9'd20: control <= 1'b1;
        9'd21: control <= 1'b1;
        9'd22: control <= 1'b1;
        9'd23: control <= 1'b1;
        9'd24: control <= 1'b1;
        9'd25: control <= 1'b1;
        9'd26: control <= 1'b1;
        9'd27: control <= 1'b1;
        9'd28: control <= 1'b1;
        9'd29: control <= 1'b1;
        9'd30: control <= 1'b1;
        9'd31: control <= 1'b1;
        9'd32: control <= 1'b1;
        9'd33: control <= 1'b1;
        9'd34: control <= 1'b1;
        9'd35: control <= 1'b1;
        9'd36: control <= 1'b1;
        9'd37: control <= 1'b1;
        9'd38: control <= 1'b1;
        9'd39: control <= 1'b1;
        9'd40: control <= 1'b1;
        9'd41: control <= 1'b1;
        9'd42: control <= 1'b1;
        9'd43: control <= 1'b1;
        9'd44: control <= 1'b1;
        9'd45: control <= 1'b1;
        9'd46: control <= 1'b1;
        9'd47: control <= 1'b1;
        9'd48: control <= 1'b1;
        9'd49: control <= 1'b1;
        9'd50: control <= 1'b1;
        9'd51: control <= 1'b1;
        9'd52: control <= 1'b1;
        9'd53: control <= 1'b1;
        9'd54: control <= 1'b1;
        9'd55: control <= 1'b1;
        9'd56: control <= 1'b1;
        9'd57: control <= 1'b1;
        9'd58: control <= 1'b1;
        9'd59: control <= 1'b1;
        9'd60: control <= 1'b1;
        9'd61: control <= 1'b1;
        9'd62: control <= 1'b1;
        9'd63: control <= 1'b1;
        9'd64: control <= 1'b1;
        9'd65: control <= 1'b1;
        9'd66: control <= 1'b1;
        9'd67: control <= 1'b1;
        9'd68: control <= 1'b1;
        9'd69: control <= 1'b1;
        9'd70: control <= 1'b1;
        9'd71: control <= 1'b1;
        9'd72: control <= 1'b1;
        9'd73: control <= 1'b1;
        9'd74: control <= 1'b1;
        9'd75: control <= 1'b1;
        9'd76: control <= 1'b1;
        9'd77: control <= 1'b1;
        9'd78: control <= 1'b1;
        9'd79: control <= 1'b1;
        9'd80: control <= 1'b1;
        9'd81: control <= 1'b1;
        9'd82: control <= 1'b1;
        9'd83: control <= 1'b1;
        9'd84: control <= 1'b1;
        9'd85: control <= 1'b1;
        9'd86: control <= 1'b1;
        9'd87: control <= 1'b1;
        9'd88: control <= 1'b1;
        9'd89: control <= 1'b1;
        9'd90: control <= 1'b1;
        9'd91: control <= 1'b1;
        9'd92: control <= 1'b1;
        9'd93: control <= 1'b1;
        9'd94: control <= 1'b1;
        9'd95: control <= 1'b1;
        9'd96: control <= 1'b1;
        9'd97: control <= 1'b1;
        9'd98: control <= 1'b1;
        9'd99: control <= 1'b1;
        9'd100: control <= 1'b1;
        9'd101: control <= 1'b1;
        9'd102: control <= 1'b1;
        9'd103: control <= 1'b1;
        9'd104: control <= 1'b1;
        9'd105: control <= 1'b1;
        9'd106: control <= 1'b1;
        9'd107: control <= 1'b1;
        9'd108: control <= 1'b1;
        9'd109: control <= 1'b1;
        9'd110: control <= 1'b1;
        9'd111: control <= 1'b1;
        9'd112: control <= 1'b1;
        9'd113: control <= 1'b1;
        9'd114: control <= 1'b1;
        9'd115: control <= 1'b1;
        9'd116: control <= 1'b1;
        9'd117: control <= 1'b1;
        9'd118: control <= 1'b1;
        9'd119: control <= 1'b1;
        9'd120: control <= 1'b1;
        9'd121: control <= 1'b1;
        9'd122: control <= 1'b1;
        9'd123: control <= 1'b1;
        9'd124: control <= 1'b1;
        9'd125: control <= 1'b1;
        9'd126: control <= 1'b1;
        9'd127: control <= 1'b1;
        9'd128: control <= 1'b1;
        9'd129: control <= 1'b1;
        9'd130: control <= 1'b1;
        9'd131: control <= 1'b1;
        9'd132: control <= 1'b1;
        9'd133: control <= 1'b1;
        9'd134: control <= 1'b1;
        9'd135: control <= 1'b1;
        9'd136: control <= 1'b1;
        9'd137: control <= 1'b1;
        9'd138: control <= 1'b1;
        9'd139: control <= 1'b1;
        9'd140: control <= 1'b1;
        9'd141: control <= 1'b1;
        9'd142: control <= 1'b1;
        9'd143: control <= 1'b1;
        9'd144: control <= 1'b1;
        9'd145: control <= 1'b1;
        9'd146: control <= 1'b1;
        9'd147: control <= 1'b1;
        9'd148: control <= 1'b1;
        9'd149: control <= 1'b1;
        9'd150: control <= 1'b1;
        9'd151: control <= 1'b1;
        9'd152: control <= 1'b1;
        9'd153: control <= 1'b1;
        9'd154: control <= 1'b1;
        9'd155: control <= 1'b1;
        9'd156: control <= 1'b1;
        9'd157: control <= 1'b1;
        9'd158: control <= 1'b1;
        9'd159: control <= 1'b1;
        9'd160: control <= 1'b1;
        9'd161: control <= 1'b1;
        9'd162: control <= 1'b1;
        9'd163: control <= 1'b1;
        9'd164: control <= 1'b1;
        9'd165: control <= 1'b1;
        9'd166: control <= 1'b1;
        9'd167: control <= 1'b1;
        9'd168: control <= 1'b1;
        9'd169: control <= 1'b1;
        9'd170: control <= 1'b1;
        9'd171: control <= 1'b1;
        9'd172: control <= 1'b1;
        9'd173: control <= 1'b1;
        9'd174: control <= 1'b1;
        9'd175: control <= 1'b1;
        9'd176: control <= 1'b1;
        9'd177: control <= 1'b1;
        9'd178: control <= 1'b1;
        9'd179: control <= 1'b1;
        9'd180: control <= 1'b1;
        9'd181: control <= 1'b1;
        9'd182: control <= 1'b1;
        9'd183: control <= 1'b1;
        9'd184: control <= 1'b1;
        9'd185: control <= 1'b1;
        9'd186: control <= 1'b1;
        9'd187: control <= 1'b1;
        9'd188: control <= 1'b1;
        9'd189: control <= 1'b1;
        9'd190: control <= 1'b1;
        9'd191: control <= 1'b1;
        9'd192: control <= 1'b1;
        9'd193: control <= 1'b1;
        9'd194: control <= 1'b1;
        9'd195: control <= 1'b1;
        9'd196: control <= 1'b1;
        9'd197: control <= 1'b1;
        9'd198: control <= 1'b1;
        9'd199: control <= 1'b1;
        9'd200: control <= 1'b1;
        9'd201: control <= 1'b1;
        9'd202: control <= 1'b1;
        9'd203: control <= 1'b1;
        9'd204: control <= 1'b1;
        9'd205: control <= 1'b1;
        9'd206: control <= 1'b1;
        9'd207: control <= 1'b1;
        9'd208: control <= 1'b1;
        9'd209: control <= 1'b1;
        9'd210: control <= 1'b1;
        9'd211: control <= 1'b1;
        9'd212: control <= 1'b1;
        9'd213: control <= 1'b1;
        9'd214: control <= 1'b1;
        9'd215: control <= 1'b1;
        9'd216: control <= 1'b1;
        9'd217: control <= 1'b1;
        9'd218: control <= 1'b1;
        9'd219: control <= 1'b1;
        9'd220: control <= 1'b1;
        9'd221: control <= 1'b1;
        9'd222: control <= 1'b1;
        9'd223: control <= 1'b1;
        9'd224: control <= 1'b1;
        9'd225: control <= 1'b1;
        9'd226: control <= 1'b1;
        9'd227: control <= 1'b1;
        9'd228: control <= 1'b1;
        9'd229: control <= 1'b1;
        9'd230: control <= 1'b1;
        9'd231: control <= 1'b1;
        9'd232: control <= 1'b1;
        9'd233: control <= 1'b1;
        9'd234: control <= 1'b1;
        9'd235: control <= 1'b1;
        9'd236: control <= 1'b1;
        9'd237: control <= 1'b1;
        9'd238: control <= 1'b1;
        9'd239: control <= 1'b1;
        9'd240: control <= 1'b1;
        9'd241: control <= 1'b1;
        9'd242: control <= 1'b1;
        9'd243: control <= 1'b1;
        9'd244: control <= 1'b1;
        9'd245: control <= 1'b1;
        9'd246: control <= 1'b1;
        9'd247: control <= 1'b1;
        9'd248: control <= 1'b1;
        9'd249: control <= 1'b1;
        9'd250: control <= 1'b1;
        9'd251: control <= 1'b1;
        9'd252: control <= 1'b1;
        9'd253: control <= 1'b1;
        9'd254: control <= 1'b1;
        9'd255: control <= 1'b1;
        9'd256: control <= 1'b0;
        9'd257: control <= 1'b0;
        9'd258: control <= 1'b0;
        9'd259: control <= 1'b0;
        9'd260: control <= 1'b0;
        9'd261: control <= 1'b0;
        9'd262: control <= 1'b0;
        9'd263: control <= 1'b0;
        9'd264: control <= 1'b0;
        9'd265: control <= 1'b0;
        9'd266: control <= 1'b0;
        9'd267: control <= 1'b0;
        9'd268: control <= 1'b0;
        9'd269: control <= 1'b0;
        9'd270: control <= 1'b0;
        9'd271: control <= 1'b0;
        9'd272: control <= 1'b0;
        9'd273: control <= 1'b0;
        9'd274: control <= 1'b0;
        9'd275: control <= 1'b0;
        9'd276: control <= 1'b0;
        9'd277: control <= 1'b0;
        9'd278: control <= 1'b0;
        9'd279: control <= 1'b0;
        9'd280: control <= 1'b0;
        9'd281: control <= 1'b0;
        9'd282: control <= 1'b0;
        9'd283: control <= 1'b0;
        9'd284: control <= 1'b0;
        9'd285: control <= 1'b0;
        9'd286: control <= 1'b0;
        9'd287: control <= 1'b0;
        9'd288: control <= 1'b0;
        9'd289: control <= 1'b0;
        9'd290: control <= 1'b0;
        9'd291: control <= 1'b0;
        9'd292: control <= 1'b0;
        9'd293: control <= 1'b0;
        9'd294: control <= 1'b0;
        9'd295: control <= 1'b0;
        9'd296: control <= 1'b0;
        9'd297: control <= 1'b0;
        9'd298: control <= 1'b0;
        9'd299: control <= 1'b0;
        9'd300: control <= 1'b0;
        9'd301: control <= 1'b0;
        9'd302: control <= 1'b0;
        9'd303: control <= 1'b0;
        9'd304: control <= 1'b0;
        9'd305: control <= 1'b0;
        9'd306: control <= 1'b0;
        9'd307: control <= 1'b0;
        9'd308: control <= 1'b0;
        9'd309: control <= 1'b0;
        9'd310: control <= 1'b0;
        9'd311: control <= 1'b0;
        9'd312: control <= 1'b0;
        9'd313: control <= 1'b0;
        9'd314: control <= 1'b0;
        9'd315: control <= 1'b0;
        9'd316: control <= 1'b0;
        9'd317: control <= 1'b0;
        9'd318: control <= 1'b0;
        9'd319: control <= 1'b0;
        9'd320: control <= 1'b0;
        9'd321: control <= 1'b0;
        9'd322: control <= 1'b0;
        9'd323: control <= 1'b0;
        9'd324: control <= 1'b0;
        9'd325: control <= 1'b0;
        9'd326: control <= 1'b0;
        9'd327: control <= 1'b0;
        9'd328: control <= 1'b0;
        9'd329: control <= 1'b0;
        9'd330: control <= 1'b0;
        9'd331: control <= 1'b0;
        9'd332: control <= 1'b0;
        9'd333: control <= 1'b0;
        9'd334: control <= 1'b0;
        9'd335: control <= 1'b0;
        9'd336: control <= 1'b0;
        9'd337: control <= 1'b0;
        9'd338: control <= 1'b0;
        9'd339: control <= 1'b0;
        9'd340: control <= 1'b0;
        9'd341: control <= 1'b0;
        9'd342: control <= 1'b0;
        9'd343: control <= 1'b0;
        9'd344: control <= 1'b0;
        9'd345: control <= 1'b0;
        9'd346: control <= 1'b0;
        9'd347: control <= 1'b0;
        9'd348: control <= 1'b0;
        9'd349: control <= 1'b0;
        9'd350: control <= 1'b0;
        9'd351: control <= 1'b0;
        9'd352: control <= 1'b0;
        9'd353: control <= 1'b0;
        9'd354: control <= 1'b0;
        9'd355: control <= 1'b0;
        9'd356: control <= 1'b0;
        9'd357: control <= 1'b0;
        9'd358: control <= 1'b0;
        9'd359: control <= 1'b0;
        9'd360: control <= 1'b0;
        9'd361: control <= 1'b0;
        9'd362: control <= 1'b0;
        9'd363: control <= 1'b0;
        9'd364: control <= 1'b0;
        9'd365: control <= 1'b0;
        9'd366: control <= 1'b0;
        9'd367: control <= 1'b0;
        9'd368: control <= 1'b0;
        9'd369: control <= 1'b0;
        9'd370: control <= 1'b0;
        9'd371: control <= 1'b0;
        9'd372: control <= 1'b0;
        9'd373: control <= 1'b0;
        9'd374: control <= 1'b0;
        9'd375: control <= 1'b0;
        9'd376: control <= 1'b0;
        9'd377: control <= 1'b0;
        9'd378: control <= 1'b0;
        9'd379: control <= 1'b0;
        9'd380: control <= 1'b0;
        9'd381: control <= 1'b0;
        9'd382: control <= 1'b0;
        9'd383: control <= 1'b0;
        9'd384: control <= 1'b0;
        9'd385: control <= 1'b0;
        9'd386: control <= 1'b0;
        9'd387: control <= 1'b0;
        9'd388: control <= 1'b0;
        9'd389: control <= 1'b0;
        9'd390: control <= 1'b0;
        9'd391: control <= 1'b0;
        9'd392: control <= 1'b0;
        9'd393: control <= 1'b0;
        9'd394: control <= 1'b0;
        9'd395: control <= 1'b0;
        9'd396: control <= 1'b0;
        9'd397: control <= 1'b0;
        9'd398: control <= 1'b0;
        9'd399: control <= 1'b0;
        9'd400: control <= 1'b0;
        9'd401: control <= 1'b0;
        9'd402: control <= 1'b0;
        9'd403: control <= 1'b0;
        9'd404: control <= 1'b0;
        9'd405: control <= 1'b0;
        9'd406: control <= 1'b0;
        9'd407: control <= 1'b0;
        9'd408: control <= 1'b0;
        9'd409: control <= 1'b0;
        9'd410: control <= 1'b0;
        9'd411: control <= 1'b0;
        9'd412: control <= 1'b0;
        9'd413: control <= 1'b0;
        9'd414: control <= 1'b0;
        9'd415: control <= 1'b0;
        9'd416: control <= 1'b0;
        9'd417: control <= 1'b0;
        9'd418: control <= 1'b0;
        9'd419: control <= 1'b0;
        9'd420: control <= 1'b0;
        9'd421: control <= 1'b0;
        9'd422: control <= 1'b0;
        9'd423: control <= 1'b0;
        9'd424: control <= 1'b0;
        9'd425: control <= 1'b0;
        9'd426: control <= 1'b0;
        9'd427: control <= 1'b0;
        9'd428: control <= 1'b0;
        9'd429: control <= 1'b0;
        9'd430: control <= 1'b0;
        9'd431: control <= 1'b0;
        9'd432: control <= 1'b0;
        9'd433: control <= 1'b0;
        9'd434: control <= 1'b0;
        9'd435: control <= 1'b0;
        9'd436: control <= 1'b0;
        9'd437: control <= 1'b0;
        9'd438: control <= 1'b0;
        9'd439: control <= 1'b0;
        9'd440: control <= 1'b0;
        9'd441: control <= 1'b0;
        9'd442: control <= 1'b0;
        9'd443: control <= 1'b0;
        9'd444: control <= 1'b0;
        9'd445: control <= 1'b0;
        9'd446: control <= 1'b0;
        9'd447: control <= 1'b0;
        9'd448: control <= 1'b0;
        9'd449: control <= 1'b0;
        9'd450: control <= 1'b0;
        9'd451: control <= 1'b0;
        9'd452: control <= 1'b0;
        9'd453: control <= 1'b0;
        9'd454: control <= 1'b0;
        9'd455: control <= 1'b0;
        9'd456: control <= 1'b0;
        9'd457: control <= 1'b0;
        9'd458: control <= 1'b0;
        9'd459: control <= 1'b0;
        9'd460: control <= 1'b0;
        9'd461: control <= 1'b0;
        9'd462: control <= 1'b0;
        9'd463: control <= 1'b0;
        9'd464: control <= 1'b0;
        9'd465: control <= 1'b0;
        9'd466: control <= 1'b0;
        9'd467: control <= 1'b0;
        9'd468: control <= 1'b0;
        9'd469: control <= 1'b0;
        9'd470: control <= 1'b0;
        9'd471: control <= 1'b0;
        9'd472: control <= 1'b0;
        9'd473: control <= 1'b0;
        9'd474: control <= 1'b0;
        9'd475: control <= 1'b0;
        9'd476: control <= 1'b0;
        9'd477: control <= 1'b0;
        9'd478: control <= 1'b0;
        9'd479: control <= 1'b0;
        9'd480: control <= 1'b0;
        9'd481: control <= 1'b0;
        9'd482: control <= 1'b0;
        9'd483: control <= 1'b0;
        9'd484: control <= 1'b0;
        9'd485: control <= 1'b0;
        9'd486: control <= 1'b0;
        9'd487: control <= 1'b0;
        9'd488: control <= 1'b0;
        9'd489: control <= 1'b0;
        9'd490: control <= 1'b0;
        9'd491: control <= 1'b0;
        9'd492: control <= 1'b0;
        9'd493: control <= 1'b0;
        9'd494: control <= 1'b0;
        9'd495: control <= 1'b0;
        9'd496: control <= 1'b0;
        9'd497: control <= 1'b0;
        9'd498: control <= 1'b0;
        9'd499: control <= 1'b0;
        9'd500: control <= 1'b0;
        9'd501: control <= 1'b0;
        9'd502: control <= 1'b0;
        9'd503: control <= 1'b0;
        9'd504: control <= 1'b0;
        9'd505: control <= 1'b0;
        9'd506: control <= 1'b0;
        9'd507: control <= 1'b0;
        9'd508: control <= 1'b0;
        9'd509: control <= 1'b0;
        9'd510: control <= 1'b0;
        9'd511: control <= 1'b0;
      endcase
   end

// synthesis attribute rom_style of control is "distributed"
   reg [0:0] control0;
    always @(posedge clk) begin
       control0 <= control;
    end
    assign t0_0 = x0;
    assign t0_1 = x1;
   always @(posedge clk) begin
         t1_0 <= (control0[0] == 0) ? t0_0 : t0_1;
         t1_1 <= (control0[0] == 0) ? t0_1 : t0_0;
   end
    always @(posedge clk) begin
        y0 <= t1_0;
        y1 <= t1_1;
    end
endmodule

// Latency: 1028
// Gap: 512
module perm71859(clk, next, reset, next_out,
   x0, y0,
   x1, y1);
   parameter width = 32;

   parameter depth = 512;

   parameter addrbits = 9;

   parameter muxbits = 1;

   input [width-1:0]  x0;
   output [width-1:0]  y0;
   wire [width-1:0]  t0;
   wire [width-1:0]  s0;
   input [width-1:0]  x1;
   output [width-1:0]  y1;
   wire [width-1:0]  t1;
   wire [width-1:0]  s1;
   input next, reset, clk;
   output next_out;
   reg [addrbits-1:0] s1rdloc, s2rdloc;

    reg [addrbits-1:0] s1wr0;
   reg [addrbits-1:0] s1rd0, s2wr0, s2rd0;
   reg [addrbits-1:0] s1rd1, s2wr1, s2rd1;
   reg s1wr_en, state1, state2, state3;
   wire 	      next2, next3, next4;
   reg 		      inFlip0, outFlip0_z, outFlip1;
   wire 	      inFlip1, outFlip0;

   wire [0:0] tm46;
   assign tm46 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_74121(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_74122(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(511, 9) nextReg_74133(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_74134(.X(next2), .Y(next3), .clk(clk));
nextReg #(512, 9) nextReg_74137(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_74138(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(511, 1) shiftFIFO_74141(.X(tm46), .Y(tm46_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_74144(.X(tm46_d), .Y(tm46_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 9) shiftFIFO_74149(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
      if (reset == 1) begin
	 state1 <= 0;
	 inFlip0 <= 0;	 
	 s1wr0 <= 0;
      end
      else if (next == 1) begin
	 s1wr0 <= 0;
	 state1 <= 1;
	 s1wr_en <= 1;
	 inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
      end
      else begin
	 case(state1)
	   0: begin
	      s1wr0 <= 0;
	      state1 <= 0;
	      s1wr_en <= 0;
	      inFlip0 <= inFlip0;	      
	   end
	   1: begin
	      s1wr0 <= (s1wr0 == depth-1) ? 0 : s1wr0 + 1;
	      state1 <= 1;
         s1wr_en <= 1;
	      inFlip0 <= (s1wr0 == depth-1) ? ~inFlip0 : inFlip0;
	   end
	 endcase
      end      
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	       state2 <= 0;
	       outFlip0_z <= 0;	 
      end
      else if (next2 == 1) begin
	       s1rdloc <= 0;
	       state2 <= 1;
	       outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
      end
      else begin
	 case(state2)
	   0: begin
	      s1rdloc <= 0;
	      state2 <= 0;
	      outFlip0_z <= outFlip0_z;	 
	   end
	   1: begin
	      s1rdloc <= (s1rdloc == depth-1) ? 0 : s1rdloc + 1;
         state2 <= 1;
	      outFlip0_z <= (s1rdloc == depth-1) ? ~outFlip0_z : outFlip0_z;
	   end	     
	 endcase
      end
   end
   
   always @(posedge clk) begin
      if (reset == 1) begin
	 state3 <= 0;
	 outFlip1 <= 0;	 
      end
      else if (next4 == 1) begin
	 s2rdloc <= 0;
	 state3 <= 1;
	 outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;	      
      end
      else begin
	 case(state3)
	   0: begin
	      s2rdloc <= 0;
	      state3 <= 0;
	      outFlip1 <= outFlip1;
	   end
	   1: begin
	      s2rdloc <= (s2rdloc == depth-1) ? 0 : s2rdloc + 1;
         state3 <= 1;
	      outFlip1 <= (s2rdloc == depth-1) ? ~outFlip1 : outFlip1;
	   end	     
	 endcase
      end
   end
   always @(posedge clk) begin
      case({tm46_d, s1rdloc})
	     {1'd0,  9'd0}: s1rd0 <= 1;
	     {1'd0,  9'd1}: s1rd0 <= 3;
	     {1'd0,  9'd2}: s1rd0 <= 5;
	     {1'd0,  9'd3}: s1rd0 <= 7;
	     {1'd0,  9'd4}: s1rd0 <= 9;
	     {1'd0,  9'd5}: s1rd0 <= 11;
	     {1'd0,  9'd6}: s1rd0 <= 13;
	     {1'd0,  9'd7}: s1rd0 <= 15;
	     {1'd0,  9'd8}: s1rd0 <= 17;
	     {1'd0,  9'd9}: s1rd0 <= 19;
	     {1'd0,  9'd10}: s1rd0 <= 21;
	     {1'd0,  9'd11}: s1rd0 <= 23;
	     {1'd0,  9'd12}: s1rd0 <= 25;
	     {1'd0,  9'd13}: s1rd0 <= 27;
	     {1'd0,  9'd14}: s1rd0 <= 29;
	     {1'd0,  9'd15}: s1rd0 <= 31;
	     {1'd0,  9'd16}: s1rd0 <= 33;
	     {1'd0,  9'd17}: s1rd0 <= 35;
	     {1'd0,  9'd18}: s1rd0 <= 37;
	     {1'd0,  9'd19}: s1rd0 <= 39;
	     {1'd0,  9'd20}: s1rd0 <= 41;
	     {1'd0,  9'd21}: s1rd0 <= 43;
	     {1'd0,  9'd22}: s1rd0 <= 45;
	     {1'd0,  9'd23}: s1rd0 <= 47;
	     {1'd0,  9'd24}: s1rd0 <= 49;
	     {1'd0,  9'd25}: s1rd0 <= 51;
	     {1'd0,  9'd26}: s1rd0 <= 53;
	     {1'd0,  9'd27}: s1rd0 <= 55;
	     {1'd0,  9'd28}: s1rd0 <= 57;
	     {1'd0,  9'd29}: s1rd0 <= 59;
	     {1'd0,  9'd30}: s1rd0 <= 61;
	     {1'd0,  9'd31}: s1rd0 <= 63;
	     {1'd0,  9'd32}: s1rd0 <= 65;
	     {1'd0,  9'd33}: s1rd0 <= 67;
	     {1'd0,  9'd34}: s1rd0 <= 69;
	     {1'd0,  9'd35}: s1rd0 <= 71;
	     {1'd0,  9'd36}: s1rd0 <= 73;
	     {1'd0,  9'd37}: s1rd0 <= 75;
	     {1'd0,  9'd38}: s1rd0 <= 77;
	     {1'd0,  9'd39}: s1rd0 <= 79;
	     {1'd0,  9'd40}: s1rd0 <= 81;
	     {1'd0,  9'd41}: s1rd0 <= 83;
	     {1'd0,  9'd42}: s1rd0 <= 85;
	     {1'd0,  9'd43}: s1rd0 <= 87;
	     {1'd0,  9'd44}: s1rd0 <= 89;
	     {1'd0,  9'd45}: s1rd0 <= 91;
	     {1'd0,  9'd46}: s1rd0 <= 93;
	     {1'd0,  9'd47}: s1rd0 <= 95;
	     {1'd0,  9'd48}: s1rd0 <= 97;
	     {1'd0,  9'd49}: s1rd0 <= 99;
	     {1'd0,  9'd50}: s1rd0 <= 101;
	     {1'd0,  9'd51}: s1rd0 <= 103;
	     {1'd0,  9'd52}: s1rd0 <= 105;
	     {1'd0,  9'd53}: s1rd0 <= 107;
	     {1'd0,  9'd54}: s1rd0 <= 109;
	     {1'd0,  9'd55}: s1rd0 <= 111;
	     {1'd0,  9'd56}: s1rd0 <= 113;
	     {1'd0,  9'd57}: s1rd0 <= 115;
	     {1'd0,  9'd58}: s1rd0 <= 117;
	     {1'd0,  9'd59}: s1rd0 <= 119;
	     {1'd0,  9'd60}: s1rd0 <= 121;
	     {1'd0,  9'd61}: s1rd0 <= 123;
	     {1'd0,  9'd62}: s1rd0 <= 125;
	     {1'd0,  9'd63}: s1rd0 <= 127;
	     {1'd0,  9'd64}: s1rd0 <= 129;
	     {1'd0,  9'd65}: s1rd0 <= 131;
	     {1'd0,  9'd66}: s1rd0 <= 133;
	     {1'd0,  9'd67}: s1rd0 <= 135;
	     {1'd0,  9'd68}: s1rd0 <= 137;
	     {1'd0,  9'd69}: s1rd0 <= 139;
	     {1'd0,  9'd70}: s1rd0 <= 141;
	     {1'd0,  9'd71}: s1rd0 <= 143;
	     {1'd0,  9'd72}: s1rd0 <= 145;
	     {1'd0,  9'd73}: s1rd0 <= 147;
	     {1'd0,  9'd74}: s1rd0 <= 149;
	     {1'd0,  9'd75}: s1rd0 <= 151;
	     {1'd0,  9'd76}: s1rd0 <= 153;
	     {1'd0,  9'd77}: s1rd0 <= 155;
	     {1'd0,  9'd78}: s1rd0 <= 157;
	     {1'd0,  9'd79}: s1rd0 <= 159;
	     {1'd0,  9'd80}: s1rd0 <= 161;
	     {1'd0,  9'd81}: s1rd0 <= 163;
	     {1'd0,  9'd82}: s1rd0 <= 165;
	     {1'd0,  9'd83}: s1rd0 <= 167;
	     {1'd0,  9'd84}: s1rd0 <= 169;
	     {1'd0,  9'd85}: s1rd0 <= 171;
	     {1'd0,  9'd86}: s1rd0 <= 173;
	     {1'd0,  9'd87}: s1rd0 <= 175;
	     {1'd0,  9'd88}: s1rd0 <= 177;
	     {1'd0,  9'd89}: s1rd0 <= 179;
	     {1'd0,  9'd90}: s1rd0 <= 181;
	     {1'd0,  9'd91}: s1rd0 <= 183;
	     {1'd0,  9'd92}: s1rd0 <= 185;
	     {1'd0,  9'd93}: s1rd0 <= 187;
	     {1'd0,  9'd94}: s1rd0 <= 189;
	     {1'd0,  9'd95}: s1rd0 <= 191;
	     {1'd0,  9'd96}: s1rd0 <= 193;
	     {1'd0,  9'd97}: s1rd0 <= 195;
	     {1'd0,  9'd98}: s1rd0 <= 197;
	     {1'd0,  9'd99}: s1rd0 <= 199;
	     {1'd0,  9'd100}: s1rd0 <= 201;
	     {1'd0,  9'd101}: s1rd0 <= 203;
	     {1'd0,  9'd102}: s1rd0 <= 205;
	     {1'd0,  9'd103}: s1rd0 <= 207;
	     {1'd0,  9'd104}: s1rd0 <= 209;
	     {1'd0,  9'd105}: s1rd0 <= 211;
	     {1'd0,  9'd106}: s1rd0 <= 213;
	     {1'd0,  9'd107}: s1rd0 <= 215;
	     {1'd0,  9'd108}: s1rd0 <= 217;
	     {1'd0,  9'd109}: s1rd0 <= 219;
	     {1'd0,  9'd110}: s1rd0 <= 221;
	     {1'd0,  9'd111}: s1rd0 <= 223;
	     {1'd0,  9'd112}: s1rd0 <= 225;
	     {1'd0,  9'd113}: s1rd0 <= 227;
	     {1'd0,  9'd114}: s1rd0 <= 229;
	     {1'd0,  9'd115}: s1rd0 <= 231;
	     {1'd0,  9'd116}: s1rd0 <= 233;
	     {1'd0,  9'd117}: s1rd0 <= 235;
	     {1'd0,  9'd118}: s1rd0 <= 237;
	     {1'd0,  9'd119}: s1rd0 <= 239;
	     {1'd0,  9'd120}: s1rd0 <= 241;
	     {1'd0,  9'd121}: s1rd0 <= 243;
	     {1'd0,  9'd122}: s1rd0 <= 245;
	     {1'd0,  9'd123}: s1rd0 <= 247;
	     {1'd0,  9'd124}: s1rd0 <= 249;
	     {1'd0,  9'd125}: s1rd0 <= 251;
	     {1'd0,  9'd126}: s1rd0 <= 253;
	     {1'd0,  9'd127}: s1rd0 <= 255;
	     {1'd0,  9'd128}: s1rd0 <= 257;
	     {1'd0,  9'd129}: s1rd0 <= 259;
	     {1'd0,  9'd130}: s1rd0 <= 261;
	     {1'd0,  9'd131}: s1rd0 <= 263;
	     {1'd0,  9'd132}: s1rd0 <= 265;
	     {1'd0,  9'd133}: s1rd0 <= 267;
	     {1'd0,  9'd134}: s1rd0 <= 269;
	     {1'd0,  9'd135}: s1rd0 <= 271;
	     {1'd0,  9'd136}: s1rd0 <= 273;
	     {1'd0,  9'd137}: s1rd0 <= 275;
	     {1'd0,  9'd138}: s1rd0 <= 277;
	     {1'd0,  9'd139}: s1rd0 <= 279;
	     {1'd0,  9'd140}: s1rd0 <= 281;
	     {1'd0,  9'd141}: s1rd0 <= 283;
	     {1'd0,  9'd142}: s1rd0 <= 285;
	     {1'd0,  9'd143}: s1rd0 <= 287;
	     {1'd0,  9'd144}: s1rd0 <= 289;
	     {1'd0,  9'd145}: s1rd0 <= 291;
	     {1'd0,  9'd146}: s1rd0 <= 293;
	     {1'd0,  9'd147}: s1rd0 <= 295;
	     {1'd0,  9'd148}: s1rd0 <= 297;
	     {1'd0,  9'd149}: s1rd0 <= 299;
	     {1'd0,  9'd150}: s1rd0 <= 301;
	     {1'd0,  9'd151}: s1rd0 <= 303;
	     {1'd0,  9'd152}: s1rd0 <= 305;
	     {1'd0,  9'd153}: s1rd0 <= 307;
	     {1'd0,  9'd154}: s1rd0 <= 309;
	     {1'd0,  9'd155}: s1rd0 <= 311;
	     {1'd0,  9'd156}: s1rd0 <= 313;
	     {1'd0,  9'd157}: s1rd0 <= 315;
	     {1'd0,  9'd158}: s1rd0 <= 317;
	     {1'd0,  9'd159}: s1rd0 <= 319;
	     {1'd0,  9'd160}: s1rd0 <= 321;
	     {1'd0,  9'd161}: s1rd0 <= 323;
	     {1'd0,  9'd162}: s1rd0 <= 325;
	     {1'd0,  9'd163}: s1rd0 <= 327;
	     {1'd0,  9'd164}: s1rd0 <= 329;
	     {1'd0,  9'd165}: s1rd0 <= 331;
	     {1'd0,  9'd166}: s1rd0 <= 333;
	     {1'd0,  9'd167}: s1rd0 <= 335;
	     {1'd0,  9'd168}: s1rd0 <= 337;
	     {1'd0,  9'd169}: s1rd0 <= 339;
	     {1'd0,  9'd170}: s1rd0 <= 341;
	     {1'd0,  9'd171}: s1rd0 <= 343;
	     {1'd0,  9'd172}: s1rd0 <= 345;
	     {1'd0,  9'd173}: s1rd0 <= 347;
	     {1'd0,  9'd174}: s1rd0 <= 349;
	     {1'd0,  9'd175}: s1rd0 <= 351;
	     {1'd0,  9'd176}: s1rd0 <= 353;
	     {1'd0,  9'd177}: s1rd0 <= 355;
	     {1'd0,  9'd178}: s1rd0 <= 357;
	     {1'd0,  9'd179}: s1rd0 <= 359;
	     {1'd0,  9'd180}: s1rd0 <= 361;
	     {1'd0,  9'd181}: s1rd0 <= 363;
	     {1'd0,  9'd182}: s1rd0 <= 365;
	     {1'd0,  9'd183}: s1rd0 <= 367;
	     {1'd0,  9'd184}: s1rd0 <= 369;
	     {1'd0,  9'd185}: s1rd0 <= 371;
	     {1'd0,  9'd186}: s1rd0 <= 373;
	     {1'd0,  9'd187}: s1rd0 <= 375;
	     {1'd0,  9'd188}: s1rd0 <= 377;
	     {1'd0,  9'd189}: s1rd0 <= 379;
	     {1'd0,  9'd190}: s1rd0 <= 381;
	     {1'd0,  9'd191}: s1rd0 <= 383;
	     {1'd0,  9'd192}: s1rd0 <= 385;
	     {1'd0,  9'd193}: s1rd0 <= 387;
	     {1'd0,  9'd194}: s1rd0 <= 389;
	     {1'd0,  9'd195}: s1rd0 <= 391;
	     {1'd0,  9'd196}: s1rd0 <= 393;
	     {1'd0,  9'd197}: s1rd0 <= 395;
	     {1'd0,  9'd198}: s1rd0 <= 397;
	     {1'd0,  9'd199}: s1rd0 <= 399;
	     {1'd0,  9'd200}: s1rd0 <= 401;
	     {1'd0,  9'd201}: s1rd0 <= 403;
	     {1'd0,  9'd202}: s1rd0 <= 405;
	     {1'd0,  9'd203}: s1rd0 <= 407;
	     {1'd0,  9'd204}: s1rd0 <= 409;
	     {1'd0,  9'd205}: s1rd0 <= 411;
	     {1'd0,  9'd206}: s1rd0 <= 413;
	     {1'd0,  9'd207}: s1rd0 <= 415;
	     {1'd0,  9'd208}: s1rd0 <= 417;
	     {1'd0,  9'd209}: s1rd0 <= 419;
	     {1'd0,  9'd210}: s1rd0 <= 421;
	     {1'd0,  9'd211}: s1rd0 <= 423;
	     {1'd0,  9'd212}: s1rd0 <= 425;
	     {1'd0,  9'd213}: s1rd0 <= 427;
	     {1'd0,  9'd214}: s1rd0 <= 429;
	     {1'd0,  9'd215}: s1rd0 <= 431;
	     {1'd0,  9'd216}: s1rd0 <= 433;
	     {1'd0,  9'd217}: s1rd0 <= 435;
	     {1'd0,  9'd218}: s1rd0 <= 437;
	     {1'd0,  9'd219}: s1rd0 <= 439;
	     {1'd0,  9'd220}: s1rd0 <= 441;
	     {1'd0,  9'd221}: s1rd0 <= 443;
	     {1'd0,  9'd222}: s1rd0 <= 445;
	     {1'd0,  9'd223}: s1rd0 <= 447;
	     {1'd0,  9'd224}: s1rd0 <= 449;
	     {1'd0,  9'd225}: s1rd0 <= 451;
	     {1'd0,  9'd226}: s1rd0 <= 453;
	     {1'd0,  9'd227}: s1rd0 <= 455;
	     {1'd0,  9'd228}: s1rd0 <= 457;
	     {1'd0,  9'd229}: s1rd0 <= 459;
	     {1'd0,  9'd230}: s1rd0 <= 461;
	     {1'd0,  9'd231}: s1rd0 <= 463;
	     {1'd0,  9'd232}: s1rd0 <= 465;
	     {1'd0,  9'd233}: s1rd0 <= 467;
	     {1'd0,  9'd234}: s1rd0 <= 469;
	     {1'd0,  9'd235}: s1rd0 <= 471;
	     {1'd0,  9'd236}: s1rd0 <= 473;
	     {1'd0,  9'd237}: s1rd0 <= 475;
	     {1'd0,  9'd238}: s1rd0 <= 477;
	     {1'd0,  9'd239}: s1rd0 <= 479;
	     {1'd0,  9'd240}: s1rd0 <= 481;
	     {1'd0,  9'd241}: s1rd0 <= 483;
	     {1'd0,  9'd242}: s1rd0 <= 485;
	     {1'd0,  9'd243}: s1rd0 <= 487;
	     {1'd0,  9'd244}: s1rd0 <= 489;
	     {1'd0,  9'd245}: s1rd0 <= 491;
	     {1'd0,  9'd246}: s1rd0 <= 493;
	     {1'd0,  9'd247}: s1rd0 <= 495;
	     {1'd0,  9'd248}: s1rd0 <= 497;
	     {1'd0,  9'd249}: s1rd0 <= 499;
	     {1'd0,  9'd250}: s1rd0 <= 501;
	     {1'd0,  9'd251}: s1rd0 <= 503;
	     {1'd0,  9'd252}: s1rd0 <= 505;
	     {1'd0,  9'd253}: s1rd0 <= 507;
	     {1'd0,  9'd254}: s1rd0 <= 509;
	     {1'd0,  9'd255}: s1rd0 <= 511;
	     {1'd0,  9'd256}: s1rd0 <= 0;
	     {1'd0,  9'd257}: s1rd0 <= 2;
	     {1'd0,  9'd258}: s1rd0 <= 4;
	     {1'd0,  9'd259}: s1rd0 <= 6;
	     {1'd0,  9'd260}: s1rd0 <= 8;
	     {1'd0,  9'd261}: s1rd0 <= 10;
	     {1'd0,  9'd262}: s1rd0 <= 12;
	     {1'd0,  9'd263}: s1rd0 <= 14;
	     {1'd0,  9'd264}: s1rd0 <= 16;
	     {1'd0,  9'd265}: s1rd0 <= 18;
	     {1'd0,  9'd266}: s1rd0 <= 20;
	     {1'd0,  9'd267}: s1rd0 <= 22;
	     {1'd0,  9'd268}: s1rd0 <= 24;
	     {1'd0,  9'd269}: s1rd0 <= 26;
	     {1'd0,  9'd270}: s1rd0 <= 28;
	     {1'd0,  9'd271}: s1rd0 <= 30;
	     {1'd0,  9'd272}: s1rd0 <= 32;
	     {1'd0,  9'd273}: s1rd0 <= 34;
	     {1'd0,  9'd274}: s1rd0 <= 36;
	     {1'd0,  9'd275}: s1rd0 <= 38;
	     {1'd0,  9'd276}: s1rd0 <= 40;
	     {1'd0,  9'd277}: s1rd0 <= 42;
	     {1'd0,  9'd278}: s1rd0 <= 44;
	     {1'd0,  9'd279}: s1rd0 <= 46;
	     {1'd0,  9'd280}: s1rd0 <= 48;
	     {1'd0,  9'd281}: s1rd0 <= 50;
	     {1'd0,  9'd282}: s1rd0 <= 52;
	     {1'd0,  9'd283}: s1rd0 <= 54;
	     {1'd0,  9'd284}: s1rd0 <= 56;
	     {1'd0,  9'd285}: s1rd0 <= 58;
	     {1'd0,  9'd286}: s1rd0 <= 60;
	     {1'd0,  9'd287}: s1rd0 <= 62;
	     {1'd0,  9'd288}: s1rd0 <= 64;
	     {1'd0,  9'd289}: s1rd0 <= 66;
	     {1'd0,  9'd290}: s1rd0 <= 68;
	     {1'd0,  9'd291}: s1rd0 <= 70;
	     {1'd0,  9'd292}: s1rd0 <= 72;
	     {1'd0,  9'd293}: s1rd0 <= 74;
	     {1'd0,  9'd294}: s1rd0 <= 76;
	     {1'd0,  9'd295}: s1rd0 <= 78;
	     {1'd0,  9'd296}: s1rd0 <= 80;
	     {1'd0,  9'd297}: s1rd0 <= 82;
	     {1'd0,  9'd298}: s1rd0 <= 84;
	     {1'd0,  9'd299}: s1rd0 <= 86;
	     {1'd0,  9'd300}: s1rd0 <= 88;
	     {1'd0,  9'd301}: s1rd0 <= 90;
	     {1'd0,  9'd302}: s1rd0 <= 92;
	     {1'd0,  9'd303}: s1rd0 <= 94;
	     {1'd0,  9'd304}: s1rd0 <= 96;
	     {1'd0,  9'd305}: s1rd0 <= 98;
	     {1'd0,  9'd306}: s1rd0 <= 100;
	     {1'd0,  9'd307}: s1rd0 <= 102;
	     {1'd0,  9'd308}: s1rd0 <= 104;
	     {1'd0,  9'd309}: s1rd0 <= 106;
	     {1'd0,  9'd310}: s1rd0 <= 108;
	     {1'd0,  9'd311}: s1rd0 <= 110;
	     {1'd0,  9'd312}: s1rd0 <= 112;
	     {1'd0,  9'd313}: s1rd0 <= 114;
	     {1'd0,  9'd314}: s1rd0 <= 116;
	     {1'd0,  9'd315}: s1rd0 <= 118;
	     {1'd0,  9'd316}: s1rd0 <= 120;
	     {1'd0,  9'd317}: s1rd0 <= 122;
	     {1'd0,  9'd318}: s1rd0 <= 124;
	     {1'd0,  9'd319}: s1rd0 <= 126;
	     {1'd0,  9'd320}: s1rd0 <= 128;
	     {1'd0,  9'd321}: s1rd0 <= 130;
	     {1'd0,  9'd322}: s1rd0 <= 132;
	     {1'd0,  9'd323}: s1rd0 <= 134;
	     {1'd0,  9'd324}: s1rd0 <= 136;
	     {1'd0,  9'd325}: s1rd0 <= 138;
	     {1'd0,  9'd326}: s1rd0 <= 140;
	     {1'd0,  9'd327}: s1rd0 <= 142;
	     {1'd0,  9'd328}: s1rd0 <= 144;
	     {1'd0,  9'd329}: s1rd0 <= 146;
	     {1'd0,  9'd330}: s1rd0 <= 148;
	     {1'd0,  9'd331}: s1rd0 <= 150;
	     {1'd0,  9'd332}: s1rd0 <= 152;
	     {1'd0,  9'd333}: s1rd0 <= 154;
	     {1'd0,  9'd334}: s1rd0 <= 156;
	     {1'd0,  9'd335}: s1rd0 <= 158;
	     {1'd0,  9'd336}: s1rd0 <= 160;
	     {1'd0,  9'd337}: s1rd0 <= 162;
	     {1'd0,  9'd338}: s1rd0 <= 164;
	     {1'd0,  9'd339}: s1rd0 <= 166;
	     {1'd0,  9'd340}: s1rd0 <= 168;
	     {1'd0,  9'd341}: s1rd0 <= 170;
	     {1'd0,  9'd342}: s1rd0 <= 172;
	     {1'd0,  9'd343}: s1rd0 <= 174;
	     {1'd0,  9'd344}: s1rd0 <= 176;
	     {1'd0,  9'd345}: s1rd0 <= 178;
	     {1'd0,  9'd346}: s1rd0 <= 180;
	     {1'd0,  9'd347}: s1rd0 <= 182;
	     {1'd0,  9'd348}: s1rd0 <= 184;
	     {1'd0,  9'd349}: s1rd0 <= 186;
	     {1'd0,  9'd350}: s1rd0 <= 188;
	     {1'd0,  9'd351}: s1rd0 <= 190;
	     {1'd0,  9'd352}: s1rd0 <= 192;
	     {1'd0,  9'd353}: s1rd0 <= 194;
	     {1'd0,  9'd354}: s1rd0 <= 196;
	     {1'd0,  9'd355}: s1rd0 <= 198;
	     {1'd0,  9'd356}: s1rd0 <= 200;
	     {1'd0,  9'd357}: s1rd0 <= 202;
	     {1'd0,  9'd358}: s1rd0 <= 204;
	     {1'd0,  9'd359}: s1rd0 <= 206;
	     {1'd0,  9'd360}: s1rd0 <= 208;
	     {1'd0,  9'd361}: s1rd0 <= 210;
	     {1'd0,  9'd362}: s1rd0 <= 212;
	     {1'd0,  9'd363}: s1rd0 <= 214;
	     {1'd0,  9'd364}: s1rd0 <= 216;
	     {1'd0,  9'd365}: s1rd0 <= 218;
	     {1'd0,  9'd366}: s1rd0 <= 220;
	     {1'd0,  9'd367}: s1rd0 <= 222;
	     {1'd0,  9'd368}: s1rd0 <= 224;
	     {1'd0,  9'd369}: s1rd0 <= 226;
	     {1'd0,  9'd370}: s1rd0 <= 228;
	     {1'd0,  9'd371}: s1rd0 <= 230;
	     {1'd0,  9'd372}: s1rd0 <= 232;
	     {1'd0,  9'd373}: s1rd0 <= 234;
	     {1'd0,  9'd374}: s1rd0 <= 236;
	     {1'd0,  9'd375}: s1rd0 <= 238;
	     {1'd0,  9'd376}: s1rd0 <= 240;
	     {1'd0,  9'd377}: s1rd0 <= 242;
	     {1'd0,  9'd378}: s1rd0 <= 244;
	     {1'd0,  9'd379}: s1rd0 <= 246;
	     {1'd0,  9'd380}: s1rd0 <= 248;
	     {1'd0,  9'd381}: s1rd0 <= 250;
	     {1'd0,  9'd382}: s1rd0 <= 252;
	     {1'd0,  9'd383}: s1rd0 <= 254;
	     {1'd0,  9'd384}: s1rd0 <= 256;
	     {1'd0,  9'd385}: s1rd0 <= 258;
	     {1'd0,  9'd386}: s1rd0 <= 260;
	     {1'd0,  9'd387}: s1rd0 <= 262;
	     {1'd0,  9'd388}: s1rd0 <= 264;
	     {1'd0,  9'd389}: s1rd0 <= 266;
	     {1'd0,  9'd390}: s1rd0 <= 268;
	     {1'd0,  9'd391}: s1rd0 <= 270;
	     {1'd0,  9'd392}: s1rd0 <= 272;
	     {1'd0,  9'd393}: s1rd0 <= 274;
	     {1'd0,  9'd394}: s1rd0 <= 276;
	     {1'd0,  9'd395}: s1rd0 <= 278;
	     {1'd0,  9'd396}: s1rd0 <= 280;
	     {1'd0,  9'd397}: s1rd0 <= 282;
	     {1'd0,  9'd398}: s1rd0 <= 284;
	     {1'd0,  9'd399}: s1rd0 <= 286;
	     {1'd0,  9'd400}: s1rd0 <= 288;
	     {1'd0,  9'd401}: s1rd0 <= 290;
	     {1'd0,  9'd402}: s1rd0 <= 292;
	     {1'd0,  9'd403}: s1rd0 <= 294;
	     {1'd0,  9'd404}: s1rd0 <= 296;
	     {1'd0,  9'd405}: s1rd0 <= 298;
	     {1'd0,  9'd406}: s1rd0 <= 300;
	     {1'd0,  9'd407}: s1rd0 <= 302;
	     {1'd0,  9'd408}: s1rd0 <= 304;
	     {1'd0,  9'd409}: s1rd0 <= 306;
	     {1'd0,  9'd410}: s1rd0 <= 308;
	     {1'd0,  9'd411}: s1rd0 <= 310;
	     {1'd0,  9'd412}: s1rd0 <= 312;
	     {1'd0,  9'd413}: s1rd0 <= 314;
	     {1'd0,  9'd414}: s1rd0 <= 316;
	     {1'd0,  9'd415}: s1rd0 <= 318;
	     {1'd0,  9'd416}: s1rd0 <= 320;
	     {1'd0,  9'd417}: s1rd0 <= 322;
	     {1'd0,  9'd418}: s1rd0 <= 324;
	     {1'd0,  9'd419}: s1rd0 <= 326;
	     {1'd0,  9'd420}: s1rd0 <= 328;
	     {1'd0,  9'd421}: s1rd0 <= 330;
	     {1'd0,  9'd422}: s1rd0 <= 332;
	     {1'd0,  9'd423}: s1rd0 <= 334;
	     {1'd0,  9'd424}: s1rd0 <= 336;
	     {1'd0,  9'd425}: s1rd0 <= 338;
	     {1'd0,  9'd426}: s1rd0 <= 340;
	     {1'd0,  9'd427}: s1rd0 <= 342;
	     {1'd0,  9'd428}: s1rd0 <= 344;
	     {1'd0,  9'd429}: s1rd0 <= 346;
	     {1'd0,  9'd430}: s1rd0 <= 348;
	     {1'd0,  9'd431}: s1rd0 <= 350;
	     {1'd0,  9'd432}: s1rd0 <= 352;
	     {1'd0,  9'd433}: s1rd0 <= 354;
	     {1'd0,  9'd434}: s1rd0 <= 356;
	     {1'd0,  9'd435}: s1rd0 <= 358;
	     {1'd0,  9'd436}: s1rd0 <= 360;
	     {1'd0,  9'd437}: s1rd0 <= 362;
	     {1'd0,  9'd438}: s1rd0 <= 364;
	     {1'd0,  9'd439}: s1rd0 <= 366;
	     {1'd0,  9'd440}: s1rd0 <= 368;
	     {1'd0,  9'd441}: s1rd0 <= 370;
	     {1'd0,  9'd442}: s1rd0 <= 372;
	     {1'd0,  9'd443}: s1rd0 <= 374;
	     {1'd0,  9'd444}: s1rd0 <= 376;
	     {1'd0,  9'd445}: s1rd0 <= 378;
	     {1'd0,  9'd446}: s1rd0 <= 380;
	     {1'd0,  9'd447}: s1rd0 <= 382;
	     {1'd0,  9'd448}: s1rd0 <= 384;
	     {1'd0,  9'd449}: s1rd0 <= 386;
	     {1'd0,  9'd450}: s1rd0 <= 388;
	     {1'd0,  9'd451}: s1rd0 <= 390;
	     {1'd0,  9'd452}: s1rd0 <= 392;
	     {1'd0,  9'd453}: s1rd0 <= 394;
	     {1'd0,  9'd454}: s1rd0 <= 396;
	     {1'd0,  9'd455}: s1rd0 <= 398;
	     {1'd0,  9'd456}: s1rd0 <= 400;
	     {1'd0,  9'd457}: s1rd0 <= 402;
	     {1'd0,  9'd458}: s1rd0 <= 404;
	     {1'd0,  9'd459}: s1rd0 <= 406;
	     {1'd0,  9'd460}: s1rd0 <= 408;
	     {1'd0,  9'd461}: s1rd0 <= 410;
	     {1'd0,  9'd462}: s1rd0 <= 412;
	     {1'd0,  9'd463}: s1rd0 <= 414;
	     {1'd0,  9'd464}: s1rd0 <= 416;
	     {1'd0,  9'd465}: s1rd0 <= 418;
	     {1'd0,  9'd466}: s1rd0 <= 420;
	     {1'd0,  9'd467}: s1rd0 <= 422;
	     {1'd0,  9'd468}: s1rd0 <= 424;
	     {1'd0,  9'd469}: s1rd0 <= 426;
	     {1'd0,  9'd470}: s1rd0 <= 428;
	     {1'd0,  9'd471}: s1rd0 <= 430;
	     {1'd0,  9'd472}: s1rd0 <= 432;
	     {1'd0,  9'd473}: s1rd0 <= 434;
	     {1'd0,  9'd474}: s1rd0 <= 436;
	     {1'd0,  9'd475}: s1rd0 <= 438;
	     {1'd0,  9'd476}: s1rd0 <= 440;
	     {1'd0,  9'd477}: s1rd0 <= 442;
	     {1'd0,  9'd478}: s1rd0 <= 444;
	     {1'd0,  9'd479}: s1rd0 <= 446;
	     {1'd0,  9'd480}: s1rd0 <= 448;
	     {1'd0,  9'd481}: s1rd0 <= 450;
	     {1'd0,  9'd482}: s1rd0 <= 452;
	     {1'd0,  9'd483}: s1rd0 <= 454;
	     {1'd0,  9'd484}: s1rd0 <= 456;
	     {1'd0,  9'd485}: s1rd0 <= 458;
	     {1'd0,  9'd486}: s1rd0 <= 460;
	     {1'd0,  9'd487}: s1rd0 <= 462;
	     {1'd0,  9'd488}: s1rd0 <= 464;
	     {1'd0,  9'd489}: s1rd0 <= 466;
	     {1'd0,  9'd490}: s1rd0 <= 468;
	     {1'd0,  9'd491}: s1rd0 <= 470;
	     {1'd0,  9'd492}: s1rd0 <= 472;
	     {1'd0,  9'd493}: s1rd0 <= 474;
	     {1'd0,  9'd494}: s1rd0 <= 476;
	     {1'd0,  9'd495}: s1rd0 <= 478;
	     {1'd0,  9'd496}: s1rd0 <= 480;
	     {1'd0,  9'd497}: s1rd0 <= 482;
	     {1'd0,  9'd498}: s1rd0 <= 484;
	     {1'd0,  9'd499}: s1rd0 <= 486;
	     {1'd0,  9'd500}: s1rd0 <= 488;
	     {1'd0,  9'd501}: s1rd0 <= 490;
	     {1'd0,  9'd502}: s1rd0 <= 492;
	     {1'd0,  9'd503}: s1rd0 <= 494;
	     {1'd0,  9'd504}: s1rd0 <= 496;
	     {1'd0,  9'd505}: s1rd0 <= 498;
	     {1'd0,  9'd506}: s1rd0 <= 500;
	     {1'd0,  9'd507}: s1rd0 <= 502;
	     {1'd0,  9'd508}: s1rd0 <= 504;
	     {1'd0,  9'd509}: s1rd0 <= 506;
	     {1'd0,  9'd510}: s1rd0 <= 508;
	     {1'd0,  9'd511}: s1rd0 <= 510;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm46_d, s1rdloc})
	     {1'd0,  9'd0}: s1rd1 <= 0;
	     {1'd0,  9'd1}: s1rd1 <= 2;
	     {1'd0,  9'd2}: s1rd1 <= 4;
	     {1'd0,  9'd3}: s1rd1 <= 6;
	     {1'd0,  9'd4}: s1rd1 <= 8;
	     {1'd0,  9'd5}: s1rd1 <= 10;
	     {1'd0,  9'd6}: s1rd1 <= 12;
	     {1'd0,  9'd7}: s1rd1 <= 14;
	     {1'd0,  9'd8}: s1rd1 <= 16;
	     {1'd0,  9'd9}: s1rd1 <= 18;
	     {1'd0,  9'd10}: s1rd1 <= 20;
	     {1'd0,  9'd11}: s1rd1 <= 22;
	     {1'd0,  9'd12}: s1rd1 <= 24;
	     {1'd0,  9'd13}: s1rd1 <= 26;
	     {1'd0,  9'd14}: s1rd1 <= 28;
	     {1'd0,  9'd15}: s1rd1 <= 30;
	     {1'd0,  9'd16}: s1rd1 <= 32;
	     {1'd0,  9'd17}: s1rd1 <= 34;
	     {1'd0,  9'd18}: s1rd1 <= 36;
	     {1'd0,  9'd19}: s1rd1 <= 38;
	     {1'd0,  9'd20}: s1rd1 <= 40;
	     {1'd0,  9'd21}: s1rd1 <= 42;
	     {1'd0,  9'd22}: s1rd1 <= 44;
	     {1'd0,  9'd23}: s1rd1 <= 46;
	     {1'd0,  9'd24}: s1rd1 <= 48;
	     {1'd0,  9'd25}: s1rd1 <= 50;
	     {1'd0,  9'd26}: s1rd1 <= 52;
	     {1'd0,  9'd27}: s1rd1 <= 54;
	     {1'd0,  9'd28}: s1rd1 <= 56;
	     {1'd0,  9'd29}: s1rd1 <= 58;
	     {1'd0,  9'd30}: s1rd1 <= 60;
	     {1'd0,  9'd31}: s1rd1 <= 62;
	     {1'd0,  9'd32}: s1rd1 <= 64;
	     {1'd0,  9'd33}: s1rd1 <= 66;
	     {1'd0,  9'd34}: s1rd1 <= 68;
	     {1'd0,  9'd35}: s1rd1 <= 70;
	     {1'd0,  9'd36}: s1rd1 <= 72;
	     {1'd0,  9'd37}: s1rd1 <= 74;
	     {1'd0,  9'd38}: s1rd1 <= 76;
	     {1'd0,  9'd39}: s1rd1 <= 78;
	     {1'd0,  9'd40}: s1rd1 <= 80;
	     {1'd0,  9'd41}: s1rd1 <= 82;
	     {1'd0,  9'd42}: s1rd1 <= 84;
	     {1'd0,  9'd43}: s1rd1 <= 86;
	     {1'd0,  9'd44}: s1rd1 <= 88;
	     {1'd0,  9'd45}: s1rd1 <= 90;
	     {1'd0,  9'd46}: s1rd1 <= 92;
	     {1'd0,  9'd47}: s1rd1 <= 94;
	     {1'd0,  9'd48}: s1rd1 <= 96;
	     {1'd0,  9'd49}: s1rd1 <= 98;
	     {1'd0,  9'd50}: s1rd1 <= 100;
	     {1'd0,  9'd51}: s1rd1 <= 102;
	     {1'd0,  9'd52}: s1rd1 <= 104;
	     {1'd0,  9'd53}: s1rd1 <= 106;
	     {1'd0,  9'd54}: s1rd1 <= 108;
	     {1'd0,  9'd55}: s1rd1 <= 110;
	     {1'd0,  9'd56}: s1rd1 <= 112;
	     {1'd0,  9'd57}: s1rd1 <= 114;
	     {1'd0,  9'd58}: s1rd1 <= 116;
	     {1'd0,  9'd59}: s1rd1 <= 118;
	     {1'd0,  9'd60}: s1rd1 <= 120;
	     {1'd0,  9'd61}: s1rd1 <= 122;
	     {1'd0,  9'd62}: s1rd1 <= 124;
	     {1'd0,  9'd63}: s1rd1 <= 126;
	     {1'd0,  9'd64}: s1rd1 <= 128;
	     {1'd0,  9'd65}: s1rd1 <= 130;
	     {1'd0,  9'd66}: s1rd1 <= 132;
	     {1'd0,  9'd67}: s1rd1 <= 134;
	     {1'd0,  9'd68}: s1rd1 <= 136;
	     {1'd0,  9'd69}: s1rd1 <= 138;
	     {1'd0,  9'd70}: s1rd1 <= 140;
	     {1'd0,  9'd71}: s1rd1 <= 142;
	     {1'd0,  9'd72}: s1rd1 <= 144;
	     {1'd0,  9'd73}: s1rd1 <= 146;
	     {1'd0,  9'd74}: s1rd1 <= 148;
	     {1'd0,  9'd75}: s1rd1 <= 150;
	     {1'd0,  9'd76}: s1rd1 <= 152;
	     {1'd0,  9'd77}: s1rd1 <= 154;
	     {1'd0,  9'd78}: s1rd1 <= 156;
	     {1'd0,  9'd79}: s1rd1 <= 158;
	     {1'd0,  9'd80}: s1rd1 <= 160;
	     {1'd0,  9'd81}: s1rd1 <= 162;
	     {1'd0,  9'd82}: s1rd1 <= 164;
	     {1'd0,  9'd83}: s1rd1 <= 166;
	     {1'd0,  9'd84}: s1rd1 <= 168;
	     {1'd0,  9'd85}: s1rd1 <= 170;
	     {1'd0,  9'd86}: s1rd1 <= 172;
	     {1'd0,  9'd87}: s1rd1 <= 174;
	     {1'd0,  9'd88}: s1rd1 <= 176;
	     {1'd0,  9'd89}: s1rd1 <= 178;
	     {1'd0,  9'd90}: s1rd1 <= 180;
	     {1'd0,  9'd91}: s1rd1 <= 182;
	     {1'd0,  9'd92}: s1rd1 <= 184;
	     {1'd0,  9'd93}: s1rd1 <= 186;
	     {1'd0,  9'd94}: s1rd1 <= 188;
	     {1'd0,  9'd95}: s1rd1 <= 190;
	     {1'd0,  9'd96}: s1rd1 <= 192;
	     {1'd0,  9'd97}: s1rd1 <= 194;
	     {1'd0,  9'd98}: s1rd1 <= 196;
	     {1'd0,  9'd99}: s1rd1 <= 198;
	     {1'd0,  9'd100}: s1rd1 <= 200;
	     {1'd0,  9'd101}: s1rd1 <= 202;
	     {1'd0,  9'd102}: s1rd1 <= 204;
	     {1'd0,  9'd103}: s1rd1 <= 206;
	     {1'd0,  9'd104}: s1rd1 <= 208;
	     {1'd0,  9'd105}: s1rd1 <= 210;
	     {1'd0,  9'd106}: s1rd1 <= 212;
	     {1'd0,  9'd107}: s1rd1 <= 214;
	     {1'd0,  9'd108}: s1rd1 <= 216;
	     {1'd0,  9'd109}: s1rd1 <= 218;
	     {1'd0,  9'd110}: s1rd1 <= 220;
	     {1'd0,  9'd111}: s1rd1 <= 222;
	     {1'd0,  9'd112}: s1rd1 <= 224;
	     {1'd0,  9'd113}: s1rd1 <= 226;
	     {1'd0,  9'd114}: s1rd1 <= 228;
	     {1'd0,  9'd115}: s1rd1 <= 230;
	     {1'd0,  9'd116}: s1rd1 <= 232;
	     {1'd0,  9'd117}: s1rd1 <= 234;
	     {1'd0,  9'd118}: s1rd1 <= 236;
	     {1'd0,  9'd119}: s1rd1 <= 238;
	     {1'd0,  9'd120}: s1rd1 <= 240;
	     {1'd0,  9'd121}: s1rd1 <= 242;
	     {1'd0,  9'd122}: s1rd1 <= 244;
	     {1'd0,  9'd123}: s1rd1 <= 246;
	     {1'd0,  9'd124}: s1rd1 <= 248;
	     {1'd0,  9'd125}: s1rd1 <= 250;
	     {1'd0,  9'd126}: s1rd1 <= 252;
	     {1'd0,  9'd127}: s1rd1 <= 254;
	     {1'd0,  9'd128}: s1rd1 <= 256;
	     {1'd0,  9'd129}: s1rd1 <= 258;
	     {1'd0,  9'd130}: s1rd1 <= 260;
	     {1'd0,  9'd131}: s1rd1 <= 262;
	     {1'd0,  9'd132}: s1rd1 <= 264;
	     {1'd0,  9'd133}: s1rd1 <= 266;
	     {1'd0,  9'd134}: s1rd1 <= 268;
	     {1'd0,  9'd135}: s1rd1 <= 270;
	     {1'd0,  9'd136}: s1rd1 <= 272;
	     {1'd0,  9'd137}: s1rd1 <= 274;
	     {1'd0,  9'd138}: s1rd1 <= 276;
	     {1'd0,  9'd139}: s1rd1 <= 278;
	     {1'd0,  9'd140}: s1rd1 <= 280;
	     {1'd0,  9'd141}: s1rd1 <= 282;
	     {1'd0,  9'd142}: s1rd1 <= 284;
	     {1'd0,  9'd143}: s1rd1 <= 286;
	     {1'd0,  9'd144}: s1rd1 <= 288;
	     {1'd0,  9'd145}: s1rd1 <= 290;
	     {1'd0,  9'd146}: s1rd1 <= 292;
	     {1'd0,  9'd147}: s1rd1 <= 294;
	     {1'd0,  9'd148}: s1rd1 <= 296;
	     {1'd0,  9'd149}: s1rd1 <= 298;
	     {1'd0,  9'd150}: s1rd1 <= 300;
	     {1'd0,  9'd151}: s1rd1 <= 302;
	     {1'd0,  9'd152}: s1rd1 <= 304;
	     {1'd0,  9'd153}: s1rd1 <= 306;
	     {1'd0,  9'd154}: s1rd1 <= 308;
	     {1'd0,  9'd155}: s1rd1 <= 310;
	     {1'd0,  9'd156}: s1rd1 <= 312;
	     {1'd0,  9'd157}: s1rd1 <= 314;
	     {1'd0,  9'd158}: s1rd1 <= 316;
	     {1'd0,  9'd159}: s1rd1 <= 318;
	     {1'd0,  9'd160}: s1rd1 <= 320;
	     {1'd0,  9'd161}: s1rd1 <= 322;
	     {1'd0,  9'd162}: s1rd1 <= 324;
	     {1'd0,  9'd163}: s1rd1 <= 326;
	     {1'd0,  9'd164}: s1rd1 <= 328;
	     {1'd0,  9'd165}: s1rd1 <= 330;
	     {1'd0,  9'd166}: s1rd1 <= 332;
	     {1'd0,  9'd167}: s1rd1 <= 334;
	     {1'd0,  9'd168}: s1rd1 <= 336;
	     {1'd0,  9'd169}: s1rd1 <= 338;
	     {1'd0,  9'd170}: s1rd1 <= 340;
	     {1'd0,  9'd171}: s1rd1 <= 342;
	     {1'd0,  9'd172}: s1rd1 <= 344;
	     {1'd0,  9'd173}: s1rd1 <= 346;
	     {1'd0,  9'd174}: s1rd1 <= 348;
	     {1'd0,  9'd175}: s1rd1 <= 350;
	     {1'd0,  9'd176}: s1rd1 <= 352;
	     {1'd0,  9'd177}: s1rd1 <= 354;
	     {1'd0,  9'd178}: s1rd1 <= 356;
	     {1'd0,  9'd179}: s1rd1 <= 358;
	     {1'd0,  9'd180}: s1rd1 <= 360;
	     {1'd0,  9'd181}: s1rd1 <= 362;
	     {1'd0,  9'd182}: s1rd1 <= 364;
	     {1'd0,  9'd183}: s1rd1 <= 366;
	     {1'd0,  9'd184}: s1rd1 <= 368;
	     {1'd0,  9'd185}: s1rd1 <= 370;
	     {1'd0,  9'd186}: s1rd1 <= 372;
	     {1'd0,  9'd187}: s1rd1 <= 374;
	     {1'd0,  9'd188}: s1rd1 <= 376;
	     {1'd0,  9'd189}: s1rd1 <= 378;
	     {1'd0,  9'd190}: s1rd1 <= 380;
	     {1'd0,  9'd191}: s1rd1 <= 382;
	     {1'd0,  9'd192}: s1rd1 <= 384;
	     {1'd0,  9'd193}: s1rd1 <= 386;
	     {1'd0,  9'd194}: s1rd1 <= 388;
	     {1'd0,  9'd195}: s1rd1 <= 390;
	     {1'd0,  9'd196}: s1rd1 <= 392;
	     {1'd0,  9'd197}: s1rd1 <= 394;
	     {1'd0,  9'd198}: s1rd1 <= 396;
	     {1'd0,  9'd199}: s1rd1 <= 398;
	     {1'd0,  9'd200}: s1rd1 <= 400;
	     {1'd0,  9'd201}: s1rd1 <= 402;
	     {1'd0,  9'd202}: s1rd1 <= 404;
	     {1'd0,  9'd203}: s1rd1 <= 406;
	     {1'd0,  9'd204}: s1rd1 <= 408;
	     {1'd0,  9'd205}: s1rd1 <= 410;
	     {1'd0,  9'd206}: s1rd1 <= 412;
	     {1'd0,  9'd207}: s1rd1 <= 414;
	     {1'd0,  9'd208}: s1rd1 <= 416;
	     {1'd0,  9'd209}: s1rd1 <= 418;
	     {1'd0,  9'd210}: s1rd1 <= 420;
	     {1'd0,  9'd211}: s1rd1 <= 422;
	     {1'd0,  9'd212}: s1rd1 <= 424;
	     {1'd0,  9'd213}: s1rd1 <= 426;
	     {1'd0,  9'd214}: s1rd1 <= 428;
	     {1'd0,  9'd215}: s1rd1 <= 430;
	     {1'd0,  9'd216}: s1rd1 <= 432;
	     {1'd0,  9'd217}: s1rd1 <= 434;
	     {1'd0,  9'd218}: s1rd1 <= 436;
	     {1'd0,  9'd219}: s1rd1 <= 438;
	     {1'd0,  9'd220}: s1rd1 <= 440;
	     {1'd0,  9'd221}: s1rd1 <= 442;
	     {1'd0,  9'd222}: s1rd1 <= 444;
	     {1'd0,  9'd223}: s1rd1 <= 446;
	     {1'd0,  9'd224}: s1rd1 <= 448;
	     {1'd0,  9'd225}: s1rd1 <= 450;
	     {1'd0,  9'd226}: s1rd1 <= 452;
	     {1'd0,  9'd227}: s1rd1 <= 454;
	     {1'd0,  9'd228}: s1rd1 <= 456;
	     {1'd0,  9'd229}: s1rd1 <= 458;
	     {1'd0,  9'd230}: s1rd1 <= 460;
	     {1'd0,  9'd231}: s1rd1 <= 462;
	     {1'd0,  9'd232}: s1rd1 <= 464;
	     {1'd0,  9'd233}: s1rd1 <= 466;
	     {1'd0,  9'd234}: s1rd1 <= 468;
	     {1'd0,  9'd235}: s1rd1 <= 470;
	     {1'd0,  9'd236}: s1rd1 <= 472;
	     {1'd0,  9'd237}: s1rd1 <= 474;
	     {1'd0,  9'd238}: s1rd1 <= 476;
	     {1'd0,  9'd239}: s1rd1 <= 478;
	     {1'd0,  9'd240}: s1rd1 <= 480;
	     {1'd0,  9'd241}: s1rd1 <= 482;
	     {1'd0,  9'd242}: s1rd1 <= 484;
	     {1'd0,  9'd243}: s1rd1 <= 486;
	     {1'd0,  9'd244}: s1rd1 <= 488;
	     {1'd0,  9'd245}: s1rd1 <= 490;
	     {1'd0,  9'd246}: s1rd1 <= 492;
	     {1'd0,  9'd247}: s1rd1 <= 494;
	     {1'd0,  9'd248}: s1rd1 <= 496;
	     {1'd0,  9'd249}: s1rd1 <= 498;
	     {1'd0,  9'd250}: s1rd1 <= 500;
	     {1'd0,  9'd251}: s1rd1 <= 502;
	     {1'd0,  9'd252}: s1rd1 <= 504;
	     {1'd0,  9'd253}: s1rd1 <= 506;
	     {1'd0,  9'd254}: s1rd1 <= 508;
	     {1'd0,  9'd255}: s1rd1 <= 510;
	     {1'd0,  9'd256}: s1rd1 <= 1;
	     {1'd0,  9'd257}: s1rd1 <= 3;
	     {1'd0,  9'd258}: s1rd1 <= 5;
	     {1'd0,  9'd259}: s1rd1 <= 7;
	     {1'd0,  9'd260}: s1rd1 <= 9;
	     {1'd0,  9'd261}: s1rd1 <= 11;
	     {1'd0,  9'd262}: s1rd1 <= 13;
	     {1'd0,  9'd263}: s1rd1 <= 15;
	     {1'd0,  9'd264}: s1rd1 <= 17;
	     {1'd0,  9'd265}: s1rd1 <= 19;
	     {1'd0,  9'd266}: s1rd1 <= 21;
	     {1'd0,  9'd267}: s1rd1 <= 23;
	     {1'd0,  9'd268}: s1rd1 <= 25;
	     {1'd0,  9'd269}: s1rd1 <= 27;
	     {1'd0,  9'd270}: s1rd1 <= 29;
	     {1'd0,  9'd271}: s1rd1 <= 31;
	     {1'd0,  9'd272}: s1rd1 <= 33;
	     {1'd0,  9'd273}: s1rd1 <= 35;
	     {1'd0,  9'd274}: s1rd1 <= 37;
	     {1'd0,  9'd275}: s1rd1 <= 39;
	     {1'd0,  9'd276}: s1rd1 <= 41;
	     {1'd0,  9'd277}: s1rd1 <= 43;
	     {1'd0,  9'd278}: s1rd1 <= 45;
	     {1'd0,  9'd279}: s1rd1 <= 47;
	     {1'd0,  9'd280}: s1rd1 <= 49;
	     {1'd0,  9'd281}: s1rd1 <= 51;
	     {1'd0,  9'd282}: s1rd1 <= 53;
	     {1'd0,  9'd283}: s1rd1 <= 55;
	     {1'd0,  9'd284}: s1rd1 <= 57;
	     {1'd0,  9'd285}: s1rd1 <= 59;
	     {1'd0,  9'd286}: s1rd1 <= 61;
	     {1'd0,  9'd287}: s1rd1 <= 63;
	     {1'd0,  9'd288}: s1rd1 <= 65;
	     {1'd0,  9'd289}: s1rd1 <= 67;
	     {1'd0,  9'd290}: s1rd1 <= 69;
	     {1'd0,  9'd291}: s1rd1 <= 71;
	     {1'd0,  9'd292}: s1rd1 <= 73;
	     {1'd0,  9'd293}: s1rd1 <= 75;
	     {1'd0,  9'd294}: s1rd1 <= 77;
	     {1'd0,  9'd295}: s1rd1 <= 79;
	     {1'd0,  9'd296}: s1rd1 <= 81;
	     {1'd0,  9'd297}: s1rd1 <= 83;
	     {1'd0,  9'd298}: s1rd1 <= 85;
	     {1'd0,  9'd299}: s1rd1 <= 87;
	     {1'd0,  9'd300}: s1rd1 <= 89;
	     {1'd0,  9'd301}: s1rd1 <= 91;
	     {1'd0,  9'd302}: s1rd1 <= 93;
	     {1'd0,  9'd303}: s1rd1 <= 95;
	     {1'd0,  9'd304}: s1rd1 <= 97;
	     {1'd0,  9'd305}: s1rd1 <= 99;
	     {1'd0,  9'd306}: s1rd1 <= 101;
	     {1'd0,  9'd307}: s1rd1 <= 103;
	     {1'd0,  9'd308}: s1rd1 <= 105;
	     {1'd0,  9'd309}: s1rd1 <= 107;
	     {1'd0,  9'd310}: s1rd1 <= 109;
	     {1'd0,  9'd311}: s1rd1 <= 111;
	     {1'd0,  9'd312}: s1rd1 <= 113;
	     {1'd0,  9'd313}: s1rd1 <= 115;
	     {1'd0,  9'd314}: s1rd1 <= 117;
	     {1'd0,  9'd315}: s1rd1 <= 119;
	     {1'd0,  9'd316}: s1rd1 <= 121;
	     {1'd0,  9'd317}: s1rd1 <= 123;
	     {1'd0,  9'd318}: s1rd1 <= 125;
	     {1'd0,  9'd319}: s1rd1 <= 127;
	     {1'd0,  9'd320}: s1rd1 <= 129;
	     {1'd0,  9'd321}: s1rd1 <= 131;
	     {1'd0,  9'd322}: s1rd1 <= 133;
	     {1'd0,  9'd323}: s1rd1 <= 135;
	     {1'd0,  9'd324}: s1rd1 <= 137;
	     {1'd0,  9'd325}: s1rd1 <= 139;
	     {1'd0,  9'd326}: s1rd1 <= 141;
	     {1'd0,  9'd327}: s1rd1 <= 143;
	     {1'd0,  9'd328}: s1rd1 <= 145;
	     {1'd0,  9'd329}: s1rd1 <= 147;
	     {1'd0,  9'd330}: s1rd1 <= 149;
	     {1'd0,  9'd331}: s1rd1 <= 151;
	     {1'd0,  9'd332}: s1rd1 <= 153;
	     {1'd0,  9'd333}: s1rd1 <= 155;
	     {1'd0,  9'd334}: s1rd1 <= 157;
	     {1'd0,  9'd335}: s1rd1 <= 159;
	     {1'd0,  9'd336}: s1rd1 <= 161;
	     {1'd0,  9'd337}: s1rd1 <= 163;
	     {1'd0,  9'd338}: s1rd1 <= 165;
	     {1'd0,  9'd339}: s1rd1 <= 167;
	     {1'd0,  9'd340}: s1rd1 <= 169;
	     {1'd0,  9'd341}: s1rd1 <= 171;
	     {1'd0,  9'd342}: s1rd1 <= 173;
	     {1'd0,  9'd343}: s1rd1 <= 175;
	     {1'd0,  9'd344}: s1rd1 <= 177;
	     {1'd0,  9'd345}: s1rd1 <= 179;
	     {1'd0,  9'd346}: s1rd1 <= 181;
	     {1'd0,  9'd347}: s1rd1 <= 183;
	     {1'd0,  9'd348}: s1rd1 <= 185;
	     {1'd0,  9'd349}: s1rd1 <= 187;
	     {1'd0,  9'd350}: s1rd1 <= 189;
	     {1'd0,  9'd351}: s1rd1 <= 191;
	     {1'd0,  9'd352}: s1rd1 <= 193;
	     {1'd0,  9'd353}: s1rd1 <= 195;
	     {1'd0,  9'd354}: s1rd1 <= 197;
	     {1'd0,  9'd355}: s1rd1 <= 199;
	     {1'd0,  9'd356}: s1rd1 <= 201;
	     {1'd0,  9'd357}: s1rd1 <= 203;
	     {1'd0,  9'd358}: s1rd1 <= 205;
	     {1'd0,  9'd359}: s1rd1 <= 207;
	     {1'd0,  9'd360}: s1rd1 <= 209;
	     {1'd0,  9'd361}: s1rd1 <= 211;
	     {1'd0,  9'd362}: s1rd1 <= 213;
	     {1'd0,  9'd363}: s1rd1 <= 215;
	     {1'd0,  9'd364}: s1rd1 <= 217;
	     {1'd0,  9'd365}: s1rd1 <= 219;
	     {1'd0,  9'd366}: s1rd1 <= 221;
	     {1'd0,  9'd367}: s1rd1 <= 223;
	     {1'd0,  9'd368}: s1rd1 <= 225;
	     {1'd0,  9'd369}: s1rd1 <= 227;
	     {1'd0,  9'd370}: s1rd1 <= 229;
	     {1'd0,  9'd371}: s1rd1 <= 231;
	     {1'd0,  9'd372}: s1rd1 <= 233;
	     {1'd0,  9'd373}: s1rd1 <= 235;
	     {1'd0,  9'd374}: s1rd1 <= 237;
	     {1'd0,  9'd375}: s1rd1 <= 239;
	     {1'd0,  9'd376}: s1rd1 <= 241;
	     {1'd0,  9'd377}: s1rd1 <= 243;
	     {1'd0,  9'd378}: s1rd1 <= 245;
	     {1'd0,  9'd379}: s1rd1 <= 247;
	     {1'd0,  9'd380}: s1rd1 <= 249;
	     {1'd0,  9'd381}: s1rd1 <= 251;
	     {1'd0,  9'd382}: s1rd1 <= 253;
	     {1'd0,  9'd383}: s1rd1 <= 255;
	     {1'd0,  9'd384}: s1rd1 <= 257;
	     {1'd0,  9'd385}: s1rd1 <= 259;
	     {1'd0,  9'd386}: s1rd1 <= 261;
	     {1'd0,  9'd387}: s1rd1 <= 263;
	     {1'd0,  9'd388}: s1rd1 <= 265;
	     {1'd0,  9'd389}: s1rd1 <= 267;
	     {1'd0,  9'd390}: s1rd1 <= 269;
	     {1'd0,  9'd391}: s1rd1 <= 271;
	     {1'd0,  9'd392}: s1rd1 <= 273;
	     {1'd0,  9'd393}: s1rd1 <= 275;
	     {1'd0,  9'd394}: s1rd1 <= 277;
	     {1'd0,  9'd395}: s1rd1 <= 279;
	     {1'd0,  9'd396}: s1rd1 <= 281;
	     {1'd0,  9'd397}: s1rd1 <= 283;
	     {1'd0,  9'd398}: s1rd1 <= 285;
	     {1'd0,  9'd399}: s1rd1 <= 287;
	     {1'd0,  9'd400}: s1rd1 <= 289;
	     {1'd0,  9'd401}: s1rd1 <= 291;
	     {1'd0,  9'd402}: s1rd1 <= 293;
	     {1'd0,  9'd403}: s1rd1 <= 295;
	     {1'd0,  9'd404}: s1rd1 <= 297;
	     {1'd0,  9'd405}: s1rd1 <= 299;
	     {1'd0,  9'd406}: s1rd1 <= 301;
	     {1'd0,  9'd407}: s1rd1 <= 303;
	     {1'd0,  9'd408}: s1rd1 <= 305;
	     {1'd0,  9'd409}: s1rd1 <= 307;
	     {1'd0,  9'd410}: s1rd1 <= 309;
	     {1'd0,  9'd411}: s1rd1 <= 311;
	     {1'd0,  9'd412}: s1rd1 <= 313;
	     {1'd0,  9'd413}: s1rd1 <= 315;
	     {1'd0,  9'd414}: s1rd1 <= 317;
	     {1'd0,  9'd415}: s1rd1 <= 319;
	     {1'd0,  9'd416}: s1rd1 <= 321;
	     {1'd0,  9'd417}: s1rd1 <= 323;
	     {1'd0,  9'd418}: s1rd1 <= 325;
	     {1'd0,  9'd419}: s1rd1 <= 327;
	     {1'd0,  9'd420}: s1rd1 <= 329;
	     {1'd0,  9'd421}: s1rd1 <= 331;
	     {1'd0,  9'd422}: s1rd1 <= 333;
	     {1'd0,  9'd423}: s1rd1 <= 335;
	     {1'd0,  9'd424}: s1rd1 <= 337;
	     {1'd0,  9'd425}: s1rd1 <= 339;
	     {1'd0,  9'd426}: s1rd1 <= 341;
	     {1'd0,  9'd427}: s1rd1 <= 343;
	     {1'd0,  9'd428}: s1rd1 <= 345;
	     {1'd0,  9'd429}: s1rd1 <= 347;
	     {1'd0,  9'd430}: s1rd1 <= 349;
	     {1'd0,  9'd431}: s1rd1 <= 351;
	     {1'd0,  9'd432}: s1rd1 <= 353;
	     {1'd0,  9'd433}: s1rd1 <= 355;
	     {1'd0,  9'd434}: s1rd1 <= 357;
	     {1'd0,  9'd435}: s1rd1 <= 359;
	     {1'd0,  9'd436}: s1rd1 <= 361;
	     {1'd0,  9'd437}: s1rd1 <= 363;
	     {1'd0,  9'd438}: s1rd1 <= 365;
	     {1'd0,  9'd439}: s1rd1 <= 367;
	     {1'd0,  9'd440}: s1rd1 <= 369;
	     {1'd0,  9'd441}: s1rd1 <= 371;
	     {1'd0,  9'd442}: s1rd1 <= 373;
	     {1'd0,  9'd443}: s1rd1 <= 375;
	     {1'd0,  9'd444}: s1rd1 <= 377;
	     {1'd0,  9'd445}: s1rd1 <= 379;
	     {1'd0,  9'd446}: s1rd1 <= 381;
	     {1'd0,  9'd447}: s1rd1 <= 383;
	     {1'd0,  9'd448}: s1rd1 <= 385;
	     {1'd0,  9'd449}: s1rd1 <= 387;
	     {1'd0,  9'd450}: s1rd1 <= 389;
	     {1'd0,  9'd451}: s1rd1 <= 391;
	     {1'd0,  9'd452}: s1rd1 <= 393;
	     {1'd0,  9'd453}: s1rd1 <= 395;
	     {1'd0,  9'd454}: s1rd1 <= 397;
	     {1'd0,  9'd455}: s1rd1 <= 399;
	     {1'd0,  9'd456}: s1rd1 <= 401;
	     {1'd0,  9'd457}: s1rd1 <= 403;
	     {1'd0,  9'd458}: s1rd1 <= 405;
	     {1'd0,  9'd459}: s1rd1 <= 407;
	     {1'd0,  9'd460}: s1rd1 <= 409;
	     {1'd0,  9'd461}: s1rd1 <= 411;
	     {1'd0,  9'd462}: s1rd1 <= 413;
	     {1'd0,  9'd463}: s1rd1 <= 415;
	     {1'd0,  9'd464}: s1rd1 <= 417;
	     {1'd0,  9'd465}: s1rd1 <= 419;
	     {1'd0,  9'd466}: s1rd1 <= 421;
	     {1'd0,  9'd467}: s1rd1 <= 423;
	     {1'd0,  9'd468}: s1rd1 <= 425;
	     {1'd0,  9'd469}: s1rd1 <= 427;
	     {1'd0,  9'd470}: s1rd1 <= 429;
	     {1'd0,  9'd471}: s1rd1 <= 431;
	     {1'd0,  9'd472}: s1rd1 <= 433;
	     {1'd0,  9'd473}: s1rd1 <= 435;
	     {1'd0,  9'd474}: s1rd1 <= 437;
	     {1'd0,  9'd475}: s1rd1 <= 439;
	     {1'd0,  9'd476}: s1rd1 <= 441;
	     {1'd0,  9'd477}: s1rd1 <= 443;
	     {1'd0,  9'd478}: s1rd1 <= 445;
	     {1'd0,  9'd479}: s1rd1 <= 447;
	     {1'd0,  9'd480}: s1rd1 <= 449;
	     {1'd0,  9'd481}: s1rd1 <= 451;
	     {1'd0,  9'd482}: s1rd1 <= 453;
	     {1'd0,  9'd483}: s1rd1 <= 455;
	     {1'd0,  9'd484}: s1rd1 <= 457;
	     {1'd0,  9'd485}: s1rd1 <= 459;
	     {1'd0,  9'd486}: s1rd1 <= 461;
	     {1'd0,  9'd487}: s1rd1 <= 463;
	     {1'd0,  9'd488}: s1rd1 <= 465;
	     {1'd0,  9'd489}: s1rd1 <= 467;
	     {1'd0,  9'd490}: s1rd1 <= 469;
	     {1'd0,  9'd491}: s1rd1 <= 471;
	     {1'd0,  9'd492}: s1rd1 <= 473;
	     {1'd0,  9'd493}: s1rd1 <= 475;
	     {1'd0,  9'd494}: s1rd1 <= 477;
	     {1'd0,  9'd495}: s1rd1 <= 479;
	     {1'd0,  9'd496}: s1rd1 <= 481;
	     {1'd0,  9'd497}: s1rd1 <= 483;
	     {1'd0,  9'd498}: s1rd1 <= 485;
	     {1'd0,  9'd499}: s1rd1 <= 487;
	     {1'd0,  9'd500}: s1rd1 <= 489;
	     {1'd0,  9'd501}: s1rd1 <= 491;
	     {1'd0,  9'd502}: s1rd1 <= 493;
	     {1'd0,  9'd503}: s1rd1 <= 495;
	     {1'd0,  9'd504}: s1rd1 <= 497;
	     {1'd0,  9'd505}: s1rd1 <= 499;
	     {1'd0,  9'd506}: s1rd1 <= 501;
	     {1'd0,  9'd507}: s1rd1 <= 503;
	     {1'd0,  9'd508}: s1rd1 <= 505;
	     {1'd0,  9'd509}: s1rd1 <= 507;
	     {1'd0,  9'd510}: s1rd1 <= 509;
	     {1'd0,  9'd511}: s1rd1 <= 511;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet71859 sw(tm46_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm46_dd, writeCycle})
	      {1'd0, 9'd0}: s2wr0 <= 256;
	      {1'd0, 9'd1}: s2wr0 <= 257;
	      {1'd0, 9'd2}: s2wr0 <= 258;
	      {1'd0, 9'd3}: s2wr0 <= 259;
	      {1'd0, 9'd4}: s2wr0 <= 260;
	      {1'd0, 9'd5}: s2wr0 <= 261;
	      {1'd0, 9'd6}: s2wr0 <= 262;
	      {1'd0, 9'd7}: s2wr0 <= 263;
	      {1'd0, 9'd8}: s2wr0 <= 264;
	      {1'd0, 9'd9}: s2wr0 <= 265;
	      {1'd0, 9'd10}: s2wr0 <= 266;
	      {1'd0, 9'd11}: s2wr0 <= 267;
	      {1'd0, 9'd12}: s2wr0 <= 268;
	      {1'd0, 9'd13}: s2wr0 <= 269;
	      {1'd0, 9'd14}: s2wr0 <= 270;
	      {1'd0, 9'd15}: s2wr0 <= 271;
	      {1'd0, 9'd16}: s2wr0 <= 272;
	      {1'd0, 9'd17}: s2wr0 <= 273;
	      {1'd0, 9'd18}: s2wr0 <= 274;
	      {1'd0, 9'd19}: s2wr0 <= 275;
	      {1'd0, 9'd20}: s2wr0 <= 276;
	      {1'd0, 9'd21}: s2wr0 <= 277;
	      {1'd0, 9'd22}: s2wr0 <= 278;
	      {1'd0, 9'd23}: s2wr0 <= 279;
	      {1'd0, 9'd24}: s2wr0 <= 280;
	      {1'd0, 9'd25}: s2wr0 <= 281;
	      {1'd0, 9'd26}: s2wr0 <= 282;
	      {1'd0, 9'd27}: s2wr0 <= 283;
	      {1'd0, 9'd28}: s2wr0 <= 284;
	      {1'd0, 9'd29}: s2wr0 <= 285;
	      {1'd0, 9'd30}: s2wr0 <= 286;
	      {1'd0, 9'd31}: s2wr0 <= 287;
	      {1'd0, 9'd32}: s2wr0 <= 288;
	      {1'd0, 9'd33}: s2wr0 <= 289;
	      {1'd0, 9'd34}: s2wr0 <= 290;
	      {1'd0, 9'd35}: s2wr0 <= 291;
	      {1'd0, 9'd36}: s2wr0 <= 292;
	      {1'd0, 9'd37}: s2wr0 <= 293;
	      {1'd0, 9'd38}: s2wr0 <= 294;
	      {1'd0, 9'd39}: s2wr0 <= 295;
	      {1'd0, 9'd40}: s2wr0 <= 296;
	      {1'd0, 9'd41}: s2wr0 <= 297;
	      {1'd0, 9'd42}: s2wr0 <= 298;
	      {1'd0, 9'd43}: s2wr0 <= 299;
	      {1'd0, 9'd44}: s2wr0 <= 300;
	      {1'd0, 9'd45}: s2wr0 <= 301;
	      {1'd0, 9'd46}: s2wr0 <= 302;
	      {1'd0, 9'd47}: s2wr0 <= 303;
	      {1'd0, 9'd48}: s2wr0 <= 304;
	      {1'd0, 9'd49}: s2wr0 <= 305;
	      {1'd0, 9'd50}: s2wr0 <= 306;
	      {1'd0, 9'd51}: s2wr0 <= 307;
	      {1'd0, 9'd52}: s2wr0 <= 308;
	      {1'd0, 9'd53}: s2wr0 <= 309;
	      {1'd0, 9'd54}: s2wr0 <= 310;
	      {1'd0, 9'd55}: s2wr0 <= 311;
	      {1'd0, 9'd56}: s2wr0 <= 312;
	      {1'd0, 9'd57}: s2wr0 <= 313;
	      {1'd0, 9'd58}: s2wr0 <= 314;
	      {1'd0, 9'd59}: s2wr0 <= 315;
	      {1'd0, 9'd60}: s2wr0 <= 316;
	      {1'd0, 9'd61}: s2wr0 <= 317;
	      {1'd0, 9'd62}: s2wr0 <= 318;
	      {1'd0, 9'd63}: s2wr0 <= 319;
	      {1'd0, 9'd64}: s2wr0 <= 320;
	      {1'd0, 9'd65}: s2wr0 <= 321;
	      {1'd0, 9'd66}: s2wr0 <= 322;
	      {1'd0, 9'd67}: s2wr0 <= 323;
	      {1'd0, 9'd68}: s2wr0 <= 324;
	      {1'd0, 9'd69}: s2wr0 <= 325;
	      {1'd0, 9'd70}: s2wr0 <= 326;
	      {1'd0, 9'd71}: s2wr0 <= 327;
	      {1'd0, 9'd72}: s2wr0 <= 328;
	      {1'd0, 9'd73}: s2wr0 <= 329;
	      {1'd0, 9'd74}: s2wr0 <= 330;
	      {1'd0, 9'd75}: s2wr0 <= 331;
	      {1'd0, 9'd76}: s2wr0 <= 332;
	      {1'd0, 9'd77}: s2wr0 <= 333;
	      {1'd0, 9'd78}: s2wr0 <= 334;
	      {1'd0, 9'd79}: s2wr0 <= 335;
	      {1'd0, 9'd80}: s2wr0 <= 336;
	      {1'd0, 9'd81}: s2wr0 <= 337;
	      {1'd0, 9'd82}: s2wr0 <= 338;
	      {1'd0, 9'd83}: s2wr0 <= 339;
	      {1'd0, 9'd84}: s2wr0 <= 340;
	      {1'd0, 9'd85}: s2wr0 <= 341;
	      {1'd0, 9'd86}: s2wr0 <= 342;
	      {1'd0, 9'd87}: s2wr0 <= 343;
	      {1'd0, 9'd88}: s2wr0 <= 344;
	      {1'd0, 9'd89}: s2wr0 <= 345;
	      {1'd0, 9'd90}: s2wr0 <= 346;
	      {1'd0, 9'd91}: s2wr0 <= 347;
	      {1'd0, 9'd92}: s2wr0 <= 348;
	      {1'd0, 9'd93}: s2wr0 <= 349;
	      {1'd0, 9'd94}: s2wr0 <= 350;
	      {1'd0, 9'd95}: s2wr0 <= 351;
	      {1'd0, 9'd96}: s2wr0 <= 352;
	      {1'd0, 9'd97}: s2wr0 <= 353;
	      {1'd0, 9'd98}: s2wr0 <= 354;
	      {1'd0, 9'd99}: s2wr0 <= 355;
	      {1'd0, 9'd100}: s2wr0 <= 356;
	      {1'd0, 9'd101}: s2wr0 <= 357;
	      {1'd0, 9'd102}: s2wr0 <= 358;
	      {1'd0, 9'd103}: s2wr0 <= 359;
	      {1'd0, 9'd104}: s2wr0 <= 360;
	      {1'd0, 9'd105}: s2wr0 <= 361;
	      {1'd0, 9'd106}: s2wr0 <= 362;
	      {1'd0, 9'd107}: s2wr0 <= 363;
	      {1'd0, 9'd108}: s2wr0 <= 364;
	      {1'd0, 9'd109}: s2wr0 <= 365;
	      {1'd0, 9'd110}: s2wr0 <= 366;
	      {1'd0, 9'd111}: s2wr0 <= 367;
	      {1'd0, 9'd112}: s2wr0 <= 368;
	      {1'd0, 9'd113}: s2wr0 <= 369;
	      {1'd0, 9'd114}: s2wr0 <= 370;
	      {1'd0, 9'd115}: s2wr0 <= 371;
	      {1'd0, 9'd116}: s2wr0 <= 372;
	      {1'd0, 9'd117}: s2wr0 <= 373;
	      {1'd0, 9'd118}: s2wr0 <= 374;
	      {1'd0, 9'd119}: s2wr0 <= 375;
	      {1'd0, 9'd120}: s2wr0 <= 376;
	      {1'd0, 9'd121}: s2wr0 <= 377;
	      {1'd0, 9'd122}: s2wr0 <= 378;
	      {1'd0, 9'd123}: s2wr0 <= 379;
	      {1'd0, 9'd124}: s2wr0 <= 380;
	      {1'd0, 9'd125}: s2wr0 <= 381;
	      {1'd0, 9'd126}: s2wr0 <= 382;
	      {1'd0, 9'd127}: s2wr0 <= 383;
	      {1'd0, 9'd128}: s2wr0 <= 384;
	      {1'd0, 9'd129}: s2wr0 <= 385;
	      {1'd0, 9'd130}: s2wr0 <= 386;
	      {1'd0, 9'd131}: s2wr0 <= 387;
	      {1'd0, 9'd132}: s2wr0 <= 388;
	      {1'd0, 9'd133}: s2wr0 <= 389;
	      {1'd0, 9'd134}: s2wr0 <= 390;
	      {1'd0, 9'd135}: s2wr0 <= 391;
	      {1'd0, 9'd136}: s2wr0 <= 392;
	      {1'd0, 9'd137}: s2wr0 <= 393;
	      {1'd0, 9'd138}: s2wr0 <= 394;
	      {1'd0, 9'd139}: s2wr0 <= 395;
	      {1'd0, 9'd140}: s2wr0 <= 396;
	      {1'd0, 9'd141}: s2wr0 <= 397;
	      {1'd0, 9'd142}: s2wr0 <= 398;
	      {1'd0, 9'd143}: s2wr0 <= 399;
	      {1'd0, 9'd144}: s2wr0 <= 400;
	      {1'd0, 9'd145}: s2wr0 <= 401;
	      {1'd0, 9'd146}: s2wr0 <= 402;
	      {1'd0, 9'd147}: s2wr0 <= 403;
	      {1'd0, 9'd148}: s2wr0 <= 404;
	      {1'd0, 9'd149}: s2wr0 <= 405;
	      {1'd0, 9'd150}: s2wr0 <= 406;
	      {1'd0, 9'd151}: s2wr0 <= 407;
	      {1'd0, 9'd152}: s2wr0 <= 408;
	      {1'd0, 9'd153}: s2wr0 <= 409;
	      {1'd0, 9'd154}: s2wr0 <= 410;
	      {1'd0, 9'd155}: s2wr0 <= 411;
	      {1'd0, 9'd156}: s2wr0 <= 412;
	      {1'd0, 9'd157}: s2wr0 <= 413;
	      {1'd0, 9'd158}: s2wr0 <= 414;
	      {1'd0, 9'd159}: s2wr0 <= 415;
	      {1'd0, 9'd160}: s2wr0 <= 416;
	      {1'd0, 9'd161}: s2wr0 <= 417;
	      {1'd0, 9'd162}: s2wr0 <= 418;
	      {1'd0, 9'd163}: s2wr0 <= 419;
	      {1'd0, 9'd164}: s2wr0 <= 420;
	      {1'd0, 9'd165}: s2wr0 <= 421;
	      {1'd0, 9'd166}: s2wr0 <= 422;
	      {1'd0, 9'd167}: s2wr0 <= 423;
	      {1'd0, 9'd168}: s2wr0 <= 424;
	      {1'd0, 9'd169}: s2wr0 <= 425;
	      {1'd0, 9'd170}: s2wr0 <= 426;
	      {1'd0, 9'd171}: s2wr0 <= 427;
	      {1'd0, 9'd172}: s2wr0 <= 428;
	      {1'd0, 9'd173}: s2wr0 <= 429;
	      {1'd0, 9'd174}: s2wr0 <= 430;
	      {1'd0, 9'd175}: s2wr0 <= 431;
	      {1'd0, 9'd176}: s2wr0 <= 432;
	      {1'd0, 9'd177}: s2wr0 <= 433;
	      {1'd0, 9'd178}: s2wr0 <= 434;
	      {1'd0, 9'd179}: s2wr0 <= 435;
	      {1'd0, 9'd180}: s2wr0 <= 436;
	      {1'd0, 9'd181}: s2wr0 <= 437;
	      {1'd0, 9'd182}: s2wr0 <= 438;
	      {1'd0, 9'd183}: s2wr0 <= 439;
	      {1'd0, 9'd184}: s2wr0 <= 440;
	      {1'd0, 9'd185}: s2wr0 <= 441;
	      {1'd0, 9'd186}: s2wr0 <= 442;
	      {1'd0, 9'd187}: s2wr0 <= 443;
	      {1'd0, 9'd188}: s2wr0 <= 444;
	      {1'd0, 9'd189}: s2wr0 <= 445;
	      {1'd0, 9'd190}: s2wr0 <= 446;
	      {1'd0, 9'd191}: s2wr0 <= 447;
	      {1'd0, 9'd192}: s2wr0 <= 448;
	      {1'd0, 9'd193}: s2wr0 <= 449;
	      {1'd0, 9'd194}: s2wr0 <= 450;
	      {1'd0, 9'd195}: s2wr0 <= 451;
	      {1'd0, 9'd196}: s2wr0 <= 452;
	      {1'd0, 9'd197}: s2wr0 <= 453;
	      {1'd0, 9'd198}: s2wr0 <= 454;
	      {1'd0, 9'd199}: s2wr0 <= 455;
	      {1'd0, 9'd200}: s2wr0 <= 456;
	      {1'd0, 9'd201}: s2wr0 <= 457;
	      {1'd0, 9'd202}: s2wr0 <= 458;
	      {1'd0, 9'd203}: s2wr0 <= 459;
	      {1'd0, 9'd204}: s2wr0 <= 460;
	      {1'd0, 9'd205}: s2wr0 <= 461;
	      {1'd0, 9'd206}: s2wr0 <= 462;
	      {1'd0, 9'd207}: s2wr0 <= 463;
	      {1'd0, 9'd208}: s2wr0 <= 464;
	      {1'd0, 9'd209}: s2wr0 <= 465;
	      {1'd0, 9'd210}: s2wr0 <= 466;
	      {1'd0, 9'd211}: s2wr0 <= 467;
	      {1'd0, 9'd212}: s2wr0 <= 468;
	      {1'd0, 9'd213}: s2wr0 <= 469;
	      {1'd0, 9'd214}: s2wr0 <= 470;
	      {1'd0, 9'd215}: s2wr0 <= 471;
	      {1'd0, 9'd216}: s2wr0 <= 472;
	      {1'd0, 9'd217}: s2wr0 <= 473;
	      {1'd0, 9'd218}: s2wr0 <= 474;
	      {1'd0, 9'd219}: s2wr0 <= 475;
	      {1'd0, 9'd220}: s2wr0 <= 476;
	      {1'd0, 9'd221}: s2wr0 <= 477;
	      {1'd0, 9'd222}: s2wr0 <= 478;
	      {1'd0, 9'd223}: s2wr0 <= 479;
	      {1'd0, 9'd224}: s2wr0 <= 480;
	      {1'd0, 9'd225}: s2wr0 <= 481;
	      {1'd0, 9'd226}: s2wr0 <= 482;
	      {1'd0, 9'd227}: s2wr0 <= 483;
	      {1'd0, 9'd228}: s2wr0 <= 484;
	      {1'd0, 9'd229}: s2wr0 <= 485;
	      {1'd0, 9'd230}: s2wr0 <= 486;
	      {1'd0, 9'd231}: s2wr0 <= 487;
	      {1'd0, 9'd232}: s2wr0 <= 488;
	      {1'd0, 9'd233}: s2wr0 <= 489;
	      {1'd0, 9'd234}: s2wr0 <= 490;
	      {1'd0, 9'd235}: s2wr0 <= 491;
	      {1'd0, 9'd236}: s2wr0 <= 492;
	      {1'd0, 9'd237}: s2wr0 <= 493;
	      {1'd0, 9'd238}: s2wr0 <= 494;
	      {1'd0, 9'd239}: s2wr0 <= 495;
	      {1'd0, 9'd240}: s2wr0 <= 496;
	      {1'd0, 9'd241}: s2wr0 <= 497;
	      {1'd0, 9'd242}: s2wr0 <= 498;
	      {1'd0, 9'd243}: s2wr0 <= 499;
	      {1'd0, 9'd244}: s2wr0 <= 500;
	      {1'd0, 9'd245}: s2wr0 <= 501;
	      {1'd0, 9'd246}: s2wr0 <= 502;
	      {1'd0, 9'd247}: s2wr0 <= 503;
	      {1'd0, 9'd248}: s2wr0 <= 504;
	      {1'd0, 9'd249}: s2wr0 <= 505;
	      {1'd0, 9'd250}: s2wr0 <= 506;
	      {1'd0, 9'd251}: s2wr0 <= 507;
	      {1'd0, 9'd252}: s2wr0 <= 508;
	      {1'd0, 9'd253}: s2wr0 <= 509;
	      {1'd0, 9'd254}: s2wr0 <= 510;
	      {1'd0, 9'd255}: s2wr0 <= 511;
	      {1'd0, 9'd256}: s2wr0 <= 0;
	      {1'd0, 9'd257}: s2wr0 <= 1;
	      {1'd0, 9'd258}: s2wr0 <= 2;
	      {1'd0, 9'd259}: s2wr0 <= 3;
	      {1'd0, 9'd260}: s2wr0 <= 4;
	      {1'd0, 9'd261}: s2wr0 <= 5;
	      {1'd0, 9'd262}: s2wr0 <= 6;
	      {1'd0, 9'd263}: s2wr0 <= 7;
	      {1'd0, 9'd264}: s2wr0 <= 8;
	      {1'd0, 9'd265}: s2wr0 <= 9;
	      {1'd0, 9'd266}: s2wr0 <= 10;
	      {1'd0, 9'd267}: s2wr0 <= 11;
	      {1'd0, 9'd268}: s2wr0 <= 12;
	      {1'd0, 9'd269}: s2wr0 <= 13;
	      {1'd0, 9'd270}: s2wr0 <= 14;
	      {1'd0, 9'd271}: s2wr0 <= 15;
	      {1'd0, 9'd272}: s2wr0 <= 16;
	      {1'd0, 9'd273}: s2wr0 <= 17;
	      {1'd0, 9'd274}: s2wr0 <= 18;
	      {1'd0, 9'd275}: s2wr0 <= 19;
	      {1'd0, 9'd276}: s2wr0 <= 20;
	      {1'd0, 9'd277}: s2wr0 <= 21;
	      {1'd0, 9'd278}: s2wr0 <= 22;
	      {1'd0, 9'd279}: s2wr0 <= 23;
	      {1'd0, 9'd280}: s2wr0 <= 24;
	      {1'd0, 9'd281}: s2wr0 <= 25;
	      {1'd0, 9'd282}: s2wr0 <= 26;
	      {1'd0, 9'd283}: s2wr0 <= 27;
	      {1'd0, 9'd284}: s2wr0 <= 28;
	      {1'd0, 9'd285}: s2wr0 <= 29;
	      {1'd0, 9'd286}: s2wr0 <= 30;
	      {1'd0, 9'd287}: s2wr0 <= 31;
	      {1'd0, 9'd288}: s2wr0 <= 32;
	      {1'd0, 9'd289}: s2wr0 <= 33;
	      {1'd0, 9'd290}: s2wr0 <= 34;
	      {1'd0, 9'd291}: s2wr0 <= 35;
	      {1'd0, 9'd292}: s2wr0 <= 36;
	      {1'd0, 9'd293}: s2wr0 <= 37;
	      {1'd0, 9'd294}: s2wr0 <= 38;
	      {1'd0, 9'd295}: s2wr0 <= 39;
	      {1'd0, 9'd296}: s2wr0 <= 40;
	      {1'd0, 9'd297}: s2wr0 <= 41;
	      {1'd0, 9'd298}: s2wr0 <= 42;
	      {1'd0, 9'd299}: s2wr0 <= 43;
	      {1'd0, 9'd300}: s2wr0 <= 44;
	      {1'd0, 9'd301}: s2wr0 <= 45;
	      {1'd0, 9'd302}: s2wr0 <= 46;
	      {1'd0, 9'd303}: s2wr0 <= 47;
	      {1'd0, 9'd304}: s2wr0 <= 48;
	      {1'd0, 9'd305}: s2wr0 <= 49;
	      {1'd0, 9'd306}: s2wr0 <= 50;
	      {1'd0, 9'd307}: s2wr0 <= 51;
	      {1'd0, 9'd308}: s2wr0 <= 52;
	      {1'd0, 9'd309}: s2wr0 <= 53;
	      {1'd0, 9'd310}: s2wr0 <= 54;
	      {1'd0, 9'd311}: s2wr0 <= 55;
	      {1'd0, 9'd312}: s2wr0 <= 56;
	      {1'd0, 9'd313}: s2wr0 <= 57;
	      {1'd0, 9'd314}: s2wr0 <= 58;
	      {1'd0, 9'd315}: s2wr0 <= 59;
	      {1'd0, 9'd316}: s2wr0 <= 60;
	      {1'd0, 9'd317}: s2wr0 <= 61;
	      {1'd0, 9'd318}: s2wr0 <= 62;
	      {1'd0, 9'd319}: s2wr0 <= 63;
	      {1'd0, 9'd320}: s2wr0 <= 64;
	      {1'd0, 9'd321}: s2wr0 <= 65;
	      {1'd0, 9'd322}: s2wr0 <= 66;
	      {1'd0, 9'd323}: s2wr0 <= 67;
	      {1'd0, 9'd324}: s2wr0 <= 68;
	      {1'd0, 9'd325}: s2wr0 <= 69;
	      {1'd0, 9'd326}: s2wr0 <= 70;
	      {1'd0, 9'd327}: s2wr0 <= 71;
	      {1'd0, 9'd328}: s2wr0 <= 72;
	      {1'd0, 9'd329}: s2wr0 <= 73;
	      {1'd0, 9'd330}: s2wr0 <= 74;
	      {1'd0, 9'd331}: s2wr0 <= 75;
	      {1'd0, 9'd332}: s2wr0 <= 76;
	      {1'd0, 9'd333}: s2wr0 <= 77;
	      {1'd0, 9'd334}: s2wr0 <= 78;
	      {1'd0, 9'd335}: s2wr0 <= 79;
	      {1'd0, 9'd336}: s2wr0 <= 80;
	      {1'd0, 9'd337}: s2wr0 <= 81;
	      {1'd0, 9'd338}: s2wr0 <= 82;
	      {1'd0, 9'd339}: s2wr0 <= 83;
	      {1'd0, 9'd340}: s2wr0 <= 84;
	      {1'd0, 9'd341}: s2wr0 <= 85;
	      {1'd0, 9'd342}: s2wr0 <= 86;
	      {1'd0, 9'd343}: s2wr0 <= 87;
	      {1'd0, 9'd344}: s2wr0 <= 88;
	      {1'd0, 9'd345}: s2wr0 <= 89;
	      {1'd0, 9'd346}: s2wr0 <= 90;
	      {1'd0, 9'd347}: s2wr0 <= 91;
	      {1'd0, 9'd348}: s2wr0 <= 92;
	      {1'd0, 9'd349}: s2wr0 <= 93;
	      {1'd0, 9'd350}: s2wr0 <= 94;
	      {1'd0, 9'd351}: s2wr0 <= 95;
	      {1'd0, 9'd352}: s2wr0 <= 96;
	      {1'd0, 9'd353}: s2wr0 <= 97;
	      {1'd0, 9'd354}: s2wr0 <= 98;
	      {1'd0, 9'd355}: s2wr0 <= 99;
	      {1'd0, 9'd356}: s2wr0 <= 100;
	      {1'd0, 9'd357}: s2wr0 <= 101;
	      {1'd0, 9'd358}: s2wr0 <= 102;
	      {1'd0, 9'd359}: s2wr0 <= 103;
	      {1'd0, 9'd360}: s2wr0 <= 104;
	      {1'd0, 9'd361}: s2wr0 <= 105;
	      {1'd0, 9'd362}: s2wr0 <= 106;
	      {1'd0, 9'd363}: s2wr0 <= 107;
	      {1'd0, 9'd364}: s2wr0 <= 108;
	      {1'd0, 9'd365}: s2wr0 <= 109;
	      {1'd0, 9'd366}: s2wr0 <= 110;
	      {1'd0, 9'd367}: s2wr0 <= 111;
	      {1'd0, 9'd368}: s2wr0 <= 112;
	      {1'd0, 9'd369}: s2wr0 <= 113;
	      {1'd0, 9'd370}: s2wr0 <= 114;
	      {1'd0, 9'd371}: s2wr0 <= 115;
	      {1'd0, 9'd372}: s2wr0 <= 116;
	      {1'd0, 9'd373}: s2wr0 <= 117;
	      {1'd0, 9'd374}: s2wr0 <= 118;
	      {1'd0, 9'd375}: s2wr0 <= 119;
	      {1'd0, 9'd376}: s2wr0 <= 120;
	      {1'd0, 9'd377}: s2wr0 <= 121;
	      {1'd0, 9'd378}: s2wr0 <= 122;
	      {1'd0, 9'd379}: s2wr0 <= 123;
	      {1'd0, 9'd380}: s2wr0 <= 124;
	      {1'd0, 9'd381}: s2wr0 <= 125;
	      {1'd0, 9'd382}: s2wr0 <= 126;
	      {1'd0, 9'd383}: s2wr0 <= 127;
	      {1'd0, 9'd384}: s2wr0 <= 128;
	      {1'd0, 9'd385}: s2wr0 <= 129;
	      {1'd0, 9'd386}: s2wr0 <= 130;
	      {1'd0, 9'd387}: s2wr0 <= 131;
	      {1'd0, 9'd388}: s2wr0 <= 132;
	      {1'd0, 9'd389}: s2wr0 <= 133;
	      {1'd0, 9'd390}: s2wr0 <= 134;
	      {1'd0, 9'd391}: s2wr0 <= 135;
	      {1'd0, 9'd392}: s2wr0 <= 136;
	      {1'd0, 9'd393}: s2wr0 <= 137;
	      {1'd0, 9'd394}: s2wr0 <= 138;
	      {1'd0, 9'd395}: s2wr0 <= 139;
	      {1'd0, 9'd396}: s2wr0 <= 140;
	      {1'd0, 9'd397}: s2wr0 <= 141;
	      {1'd0, 9'd398}: s2wr0 <= 142;
	      {1'd0, 9'd399}: s2wr0 <= 143;
	      {1'd0, 9'd400}: s2wr0 <= 144;
	      {1'd0, 9'd401}: s2wr0 <= 145;
	      {1'd0, 9'd402}: s2wr0 <= 146;
	      {1'd0, 9'd403}: s2wr0 <= 147;
	      {1'd0, 9'd404}: s2wr0 <= 148;
	      {1'd0, 9'd405}: s2wr0 <= 149;
	      {1'd0, 9'd406}: s2wr0 <= 150;
	      {1'd0, 9'd407}: s2wr0 <= 151;
	      {1'd0, 9'd408}: s2wr0 <= 152;
	      {1'd0, 9'd409}: s2wr0 <= 153;
	      {1'd0, 9'd410}: s2wr0 <= 154;
	      {1'd0, 9'd411}: s2wr0 <= 155;
	      {1'd0, 9'd412}: s2wr0 <= 156;
	      {1'd0, 9'd413}: s2wr0 <= 157;
	      {1'd0, 9'd414}: s2wr0 <= 158;
	      {1'd0, 9'd415}: s2wr0 <= 159;
	      {1'd0, 9'd416}: s2wr0 <= 160;
	      {1'd0, 9'd417}: s2wr0 <= 161;
	      {1'd0, 9'd418}: s2wr0 <= 162;
	      {1'd0, 9'd419}: s2wr0 <= 163;
	      {1'd0, 9'd420}: s2wr0 <= 164;
	      {1'd0, 9'd421}: s2wr0 <= 165;
	      {1'd0, 9'd422}: s2wr0 <= 166;
	      {1'd0, 9'd423}: s2wr0 <= 167;
	      {1'd0, 9'd424}: s2wr0 <= 168;
	      {1'd0, 9'd425}: s2wr0 <= 169;
	      {1'd0, 9'd426}: s2wr0 <= 170;
	      {1'd0, 9'd427}: s2wr0 <= 171;
	      {1'd0, 9'd428}: s2wr0 <= 172;
	      {1'd0, 9'd429}: s2wr0 <= 173;
	      {1'd0, 9'd430}: s2wr0 <= 174;
	      {1'd0, 9'd431}: s2wr0 <= 175;
	      {1'd0, 9'd432}: s2wr0 <= 176;
	      {1'd0, 9'd433}: s2wr0 <= 177;
	      {1'd0, 9'd434}: s2wr0 <= 178;
	      {1'd0, 9'd435}: s2wr0 <= 179;
	      {1'd0, 9'd436}: s2wr0 <= 180;
	      {1'd0, 9'd437}: s2wr0 <= 181;
	      {1'd0, 9'd438}: s2wr0 <= 182;
	      {1'd0, 9'd439}: s2wr0 <= 183;
	      {1'd0, 9'd440}: s2wr0 <= 184;
	      {1'd0, 9'd441}: s2wr0 <= 185;
	      {1'd0, 9'd442}: s2wr0 <= 186;
	      {1'd0, 9'd443}: s2wr0 <= 187;
	      {1'd0, 9'd444}: s2wr0 <= 188;
	      {1'd0, 9'd445}: s2wr0 <= 189;
	      {1'd0, 9'd446}: s2wr0 <= 190;
	      {1'd0, 9'd447}: s2wr0 <= 191;
	      {1'd0, 9'd448}: s2wr0 <= 192;
	      {1'd0, 9'd449}: s2wr0 <= 193;
	      {1'd0, 9'd450}: s2wr0 <= 194;
	      {1'd0, 9'd451}: s2wr0 <= 195;
	      {1'd0, 9'd452}: s2wr0 <= 196;
	      {1'd0, 9'd453}: s2wr0 <= 197;
	      {1'd0, 9'd454}: s2wr0 <= 198;
	      {1'd0, 9'd455}: s2wr0 <= 199;
	      {1'd0, 9'd456}: s2wr0 <= 200;
	      {1'd0, 9'd457}: s2wr0 <= 201;
	      {1'd0, 9'd458}: s2wr0 <= 202;
	      {1'd0, 9'd459}: s2wr0 <= 203;
	      {1'd0, 9'd460}: s2wr0 <= 204;
	      {1'd0, 9'd461}: s2wr0 <= 205;
	      {1'd0, 9'd462}: s2wr0 <= 206;
	      {1'd0, 9'd463}: s2wr0 <= 207;
	      {1'd0, 9'd464}: s2wr0 <= 208;
	      {1'd0, 9'd465}: s2wr0 <= 209;
	      {1'd0, 9'd466}: s2wr0 <= 210;
	      {1'd0, 9'd467}: s2wr0 <= 211;
	      {1'd0, 9'd468}: s2wr0 <= 212;
	      {1'd0, 9'd469}: s2wr0 <= 213;
	      {1'd0, 9'd470}: s2wr0 <= 214;
	      {1'd0, 9'd471}: s2wr0 <= 215;
	      {1'd0, 9'd472}: s2wr0 <= 216;
	      {1'd0, 9'd473}: s2wr0 <= 217;
	      {1'd0, 9'd474}: s2wr0 <= 218;
	      {1'd0, 9'd475}: s2wr0 <= 219;
	      {1'd0, 9'd476}: s2wr0 <= 220;
	      {1'd0, 9'd477}: s2wr0 <= 221;
	      {1'd0, 9'd478}: s2wr0 <= 222;
	      {1'd0, 9'd479}: s2wr0 <= 223;
	      {1'd0, 9'd480}: s2wr0 <= 224;
	      {1'd0, 9'd481}: s2wr0 <= 225;
	      {1'd0, 9'd482}: s2wr0 <= 226;
	      {1'd0, 9'd483}: s2wr0 <= 227;
	      {1'd0, 9'd484}: s2wr0 <= 228;
	      {1'd0, 9'd485}: s2wr0 <= 229;
	      {1'd0, 9'd486}: s2wr0 <= 230;
	      {1'd0, 9'd487}: s2wr0 <= 231;
	      {1'd0, 9'd488}: s2wr0 <= 232;
	      {1'd0, 9'd489}: s2wr0 <= 233;
	      {1'd0, 9'd490}: s2wr0 <= 234;
	      {1'd0, 9'd491}: s2wr0 <= 235;
	      {1'd0, 9'd492}: s2wr0 <= 236;
	      {1'd0, 9'd493}: s2wr0 <= 237;
	      {1'd0, 9'd494}: s2wr0 <= 238;
	      {1'd0, 9'd495}: s2wr0 <= 239;
	      {1'd0, 9'd496}: s2wr0 <= 240;
	      {1'd0, 9'd497}: s2wr0 <= 241;
	      {1'd0, 9'd498}: s2wr0 <= 242;
	      {1'd0, 9'd499}: s2wr0 <= 243;
	      {1'd0, 9'd500}: s2wr0 <= 244;
	      {1'd0, 9'd501}: s2wr0 <= 245;
	      {1'd0, 9'd502}: s2wr0 <= 246;
	      {1'd0, 9'd503}: s2wr0 <= 247;
	      {1'd0, 9'd504}: s2wr0 <= 248;
	      {1'd0, 9'd505}: s2wr0 <= 249;
	      {1'd0, 9'd506}: s2wr0 <= 250;
	      {1'd0, 9'd507}: s2wr0 <= 251;
	      {1'd0, 9'd508}: s2wr0 <= 252;
	      {1'd0, 9'd509}: s2wr0 <= 253;
	      {1'd0, 9'd510}: s2wr0 <= 254;
	      {1'd0, 9'd511}: s2wr0 <= 255;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr0 is "block"
   always @(posedge clk) begin
      case({tm46_dd, writeCycle})
	      {1'd0, 9'd0}: s2wr1 <= 0;
	      {1'd0, 9'd1}: s2wr1 <= 1;
	      {1'd0, 9'd2}: s2wr1 <= 2;
	      {1'd0, 9'd3}: s2wr1 <= 3;
	      {1'd0, 9'd4}: s2wr1 <= 4;
	      {1'd0, 9'd5}: s2wr1 <= 5;
	      {1'd0, 9'd6}: s2wr1 <= 6;
	      {1'd0, 9'd7}: s2wr1 <= 7;
	      {1'd0, 9'd8}: s2wr1 <= 8;
	      {1'd0, 9'd9}: s2wr1 <= 9;
	      {1'd0, 9'd10}: s2wr1 <= 10;
	      {1'd0, 9'd11}: s2wr1 <= 11;
	      {1'd0, 9'd12}: s2wr1 <= 12;
	      {1'd0, 9'd13}: s2wr1 <= 13;
	      {1'd0, 9'd14}: s2wr1 <= 14;
	      {1'd0, 9'd15}: s2wr1 <= 15;
	      {1'd0, 9'd16}: s2wr1 <= 16;
	      {1'd0, 9'd17}: s2wr1 <= 17;
	      {1'd0, 9'd18}: s2wr1 <= 18;
	      {1'd0, 9'd19}: s2wr1 <= 19;
	      {1'd0, 9'd20}: s2wr1 <= 20;
	      {1'd0, 9'd21}: s2wr1 <= 21;
	      {1'd0, 9'd22}: s2wr1 <= 22;
	      {1'd0, 9'd23}: s2wr1 <= 23;
	      {1'd0, 9'd24}: s2wr1 <= 24;
	      {1'd0, 9'd25}: s2wr1 <= 25;
	      {1'd0, 9'd26}: s2wr1 <= 26;
	      {1'd0, 9'd27}: s2wr1 <= 27;
	      {1'd0, 9'd28}: s2wr1 <= 28;
	      {1'd0, 9'd29}: s2wr1 <= 29;
	      {1'd0, 9'd30}: s2wr1 <= 30;
	      {1'd0, 9'd31}: s2wr1 <= 31;
	      {1'd0, 9'd32}: s2wr1 <= 32;
	      {1'd0, 9'd33}: s2wr1 <= 33;
	      {1'd0, 9'd34}: s2wr1 <= 34;
	      {1'd0, 9'd35}: s2wr1 <= 35;
	      {1'd0, 9'd36}: s2wr1 <= 36;
	      {1'd0, 9'd37}: s2wr1 <= 37;
	      {1'd0, 9'd38}: s2wr1 <= 38;
	      {1'd0, 9'd39}: s2wr1 <= 39;
	      {1'd0, 9'd40}: s2wr1 <= 40;
	      {1'd0, 9'd41}: s2wr1 <= 41;
	      {1'd0, 9'd42}: s2wr1 <= 42;
	      {1'd0, 9'd43}: s2wr1 <= 43;
	      {1'd0, 9'd44}: s2wr1 <= 44;
	      {1'd0, 9'd45}: s2wr1 <= 45;
	      {1'd0, 9'd46}: s2wr1 <= 46;
	      {1'd0, 9'd47}: s2wr1 <= 47;
	      {1'd0, 9'd48}: s2wr1 <= 48;
	      {1'd0, 9'd49}: s2wr1 <= 49;
	      {1'd0, 9'd50}: s2wr1 <= 50;
	      {1'd0, 9'd51}: s2wr1 <= 51;
	      {1'd0, 9'd52}: s2wr1 <= 52;
	      {1'd0, 9'd53}: s2wr1 <= 53;
	      {1'd0, 9'd54}: s2wr1 <= 54;
	      {1'd0, 9'd55}: s2wr1 <= 55;
	      {1'd0, 9'd56}: s2wr1 <= 56;
	      {1'd0, 9'd57}: s2wr1 <= 57;
	      {1'd0, 9'd58}: s2wr1 <= 58;
	      {1'd0, 9'd59}: s2wr1 <= 59;
	      {1'd0, 9'd60}: s2wr1 <= 60;
	      {1'd0, 9'd61}: s2wr1 <= 61;
	      {1'd0, 9'd62}: s2wr1 <= 62;
	      {1'd0, 9'd63}: s2wr1 <= 63;
	      {1'd0, 9'd64}: s2wr1 <= 64;
	      {1'd0, 9'd65}: s2wr1 <= 65;
	      {1'd0, 9'd66}: s2wr1 <= 66;
	      {1'd0, 9'd67}: s2wr1 <= 67;
	      {1'd0, 9'd68}: s2wr1 <= 68;
	      {1'd0, 9'd69}: s2wr1 <= 69;
	      {1'd0, 9'd70}: s2wr1 <= 70;
	      {1'd0, 9'd71}: s2wr1 <= 71;
	      {1'd0, 9'd72}: s2wr1 <= 72;
	      {1'd0, 9'd73}: s2wr1 <= 73;
	      {1'd0, 9'd74}: s2wr1 <= 74;
	      {1'd0, 9'd75}: s2wr1 <= 75;
	      {1'd0, 9'd76}: s2wr1 <= 76;
	      {1'd0, 9'd77}: s2wr1 <= 77;
	      {1'd0, 9'd78}: s2wr1 <= 78;
	      {1'd0, 9'd79}: s2wr1 <= 79;
	      {1'd0, 9'd80}: s2wr1 <= 80;
	      {1'd0, 9'd81}: s2wr1 <= 81;
	      {1'd0, 9'd82}: s2wr1 <= 82;
	      {1'd0, 9'd83}: s2wr1 <= 83;
	      {1'd0, 9'd84}: s2wr1 <= 84;
	      {1'd0, 9'd85}: s2wr1 <= 85;
	      {1'd0, 9'd86}: s2wr1 <= 86;
	      {1'd0, 9'd87}: s2wr1 <= 87;
	      {1'd0, 9'd88}: s2wr1 <= 88;
	      {1'd0, 9'd89}: s2wr1 <= 89;
	      {1'd0, 9'd90}: s2wr1 <= 90;
	      {1'd0, 9'd91}: s2wr1 <= 91;
	      {1'd0, 9'd92}: s2wr1 <= 92;
	      {1'd0, 9'd93}: s2wr1 <= 93;
	      {1'd0, 9'd94}: s2wr1 <= 94;
	      {1'd0, 9'd95}: s2wr1 <= 95;
	      {1'd0, 9'd96}: s2wr1 <= 96;
	      {1'd0, 9'd97}: s2wr1 <= 97;
	      {1'd0, 9'd98}: s2wr1 <= 98;
	      {1'd0, 9'd99}: s2wr1 <= 99;
	      {1'd0, 9'd100}: s2wr1 <= 100;
	      {1'd0, 9'd101}: s2wr1 <= 101;
	      {1'd0, 9'd102}: s2wr1 <= 102;
	      {1'd0, 9'd103}: s2wr1 <= 103;
	      {1'd0, 9'd104}: s2wr1 <= 104;
	      {1'd0, 9'd105}: s2wr1 <= 105;
	      {1'd0, 9'd106}: s2wr1 <= 106;
	      {1'd0, 9'd107}: s2wr1 <= 107;
	      {1'd0, 9'd108}: s2wr1 <= 108;
	      {1'd0, 9'd109}: s2wr1 <= 109;
	      {1'd0, 9'd110}: s2wr1 <= 110;
	      {1'd0, 9'd111}: s2wr1 <= 111;
	      {1'd0, 9'd112}: s2wr1 <= 112;
	      {1'd0, 9'd113}: s2wr1 <= 113;
	      {1'd0, 9'd114}: s2wr1 <= 114;
	      {1'd0, 9'd115}: s2wr1 <= 115;
	      {1'd0, 9'd116}: s2wr1 <= 116;
	      {1'd0, 9'd117}: s2wr1 <= 117;
	      {1'd0, 9'd118}: s2wr1 <= 118;
	      {1'd0, 9'd119}: s2wr1 <= 119;
	      {1'd0, 9'd120}: s2wr1 <= 120;
	      {1'd0, 9'd121}: s2wr1 <= 121;
	      {1'd0, 9'd122}: s2wr1 <= 122;
	      {1'd0, 9'd123}: s2wr1 <= 123;
	      {1'd0, 9'd124}: s2wr1 <= 124;
	      {1'd0, 9'd125}: s2wr1 <= 125;
	      {1'd0, 9'd126}: s2wr1 <= 126;
	      {1'd0, 9'd127}: s2wr1 <= 127;
	      {1'd0, 9'd128}: s2wr1 <= 128;
	      {1'd0, 9'd129}: s2wr1 <= 129;
	      {1'd0, 9'd130}: s2wr1 <= 130;
	      {1'd0, 9'd131}: s2wr1 <= 131;
	      {1'd0, 9'd132}: s2wr1 <= 132;
	      {1'd0, 9'd133}: s2wr1 <= 133;
	      {1'd0, 9'd134}: s2wr1 <= 134;
	      {1'd0, 9'd135}: s2wr1 <= 135;
	      {1'd0, 9'd136}: s2wr1 <= 136;
	      {1'd0, 9'd137}: s2wr1 <= 137;
	      {1'd0, 9'd138}: s2wr1 <= 138;
	      {1'd0, 9'd139}: s2wr1 <= 139;
	      {1'd0, 9'd140}: s2wr1 <= 140;
	      {1'd0, 9'd141}: s2wr1 <= 141;
	      {1'd0, 9'd142}: s2wr1 <= 142;
	      {1'd0, 9'd143}: s2wr1 <= 143;
	      {1'd0, 9'd144}: s2wr1 <= 144;
	      {1'd0, 9'd145}: s2wr1 <= 145;
	      {1'd0, 9'd146}: s2wr1 <= 146;
	      {1'd0, 9'd147}: s2wr1 <= 147;
	      {1'd0, 9'd148}: s2wr1 <= 148;
	      {1'd0, 9'd149}: s2wr1 <= 149;
	      {1'd0, 9'd150}: s2wr1 <= 150;
	      {1'd0, 9'd151}: s2wr1 <= 151;
	      {1'd0, 9'd152}: s2wr1 <= 152;
	      {1'd0, 9'd153}: s2wr1 <= 153;
	      {1'd0, 9'd154}: s2wr1 <= 154;
	      {1'd0, 9'd155}: s2wr1 <= 155;
	      {1'd0, 9'd156}: s2wr1 <= 156;
	      {1'd0, 9'd157}: s2wr1 <= 157;
	      {1'd0, 9'd158}: s2wr1 <= 158;
	      {1'd0, 9'd159}: s2wr1 <= 159;
	      {1'd0, 9'd160}: s2wr1 <= 160;
	      {1'd0, 9'd161}: s2wr1 <= 161;
	      {1'd0, 9'd162}: s2wr1 <= 162;
	      {1'd0, 9'd163}: s2wr1 <= 163;
	      {1'd0, 9'd164}: s2wr1 <= 164;
	      {1'd0, 9'd165}: s2wr1 <= 165;
	      {1'd0, 9'd166}: s2wr1 <= 166;
	      {1'd0, 9'd167}: s2wr1 <= 167;
	      {1'd0, 9'd168}: s2wr1 <= 168;
	      {1'd0, 9'd169}: s2wr1 <= 169;
	      {1'd0, 9'd170}: s2wr1 <= 170;
	      {1'd0, 9'd171}: s2wr1 <= 171;
	      {1'd0, 9'd172}: s2wr1 <= 172;
	      {1'd0, 9'd173}: s2wr1 <= 173;
	      {1'd0, 9'd174}: s2wr1 <= 174;
	      {1'd0, 9'd175}: s2wr1 <= 175;
	      {1'd0, 9'd176}: s2wr1 <= 176;
	      {1'd0, 9'd177}: s2wr1 <= 177;
	      {1'd0, 9'd178}: s2wr1 <= 178;
	      {1'd0, 9'd179}: s2wr1 <= 179;
	      {1'd0, 9'd180}: s2wr1 <= 180;
	      {1'd0, 9'd181}: s2wr1 <= 181;
	      {1'd0, 9'd182}: s2wr1 <= 182;
	      {1'd0, 9'd183}: s2wr1 <= 183;
	      {1'd0, 9'd184}: s2wr1 <= 184;
	      {1'd0, 9'd185}: s2wr1 <= 185;
	      {1'd0, 9'd186}: s2wr1 <= 186;
	      {1'd0, 9'd187}: s2wr1 <= 187;
	      {1'd0, 9'd188}: s2wr1 <= 188;
	      {1'd0, 9'd189}: s2wr1 <= 189;
	      {1'd0, 9'd190}: s2wr1 <= 190;
	      {1'd0, 9'd191}: s2wr1 <= 191;
	      {1'd0, 9'd192}: s2wr1 <= 192;
	      {1'd0, 9'd193}: s2wr1 <= 193;
	      {1'd0, 9'd194}: s2wr1 <= 194;
	      {1'd0, 9'd195}: s2wr1 <= 195;
	      {1'd0, 9'd196}: s2wr1 <= 196;
	      {1'd0, 9'd197}: s2wr1 <= 197;
	      {1'd0, 9'd198}: s2wr1 <= 198;
	      {1'd0, 9'd199}: s2wr1 <= 199;
	      {1'd0, 9'd200}: s2wr1 <= 200;
	      {1'd0, 9'd201}: s2wr1 <= 201;
	      {1'd0, 9'd202}: s2wr1 <= 202;
	      {1'd0, 9'd203}: s2wr1 <= 203;
	      {1'd0, 9'd204}: s2wr1 <= 204;
	      {1'd0, 9'd205}: s2wr1 <= 205;
	      {1'd0, 9'd206}: s2wr1 <= 206;
	      {1'd0, 9'd207}: s2wr1 <= 207;
	      {1'd0, 9'd208}: s2wr1 <= 208;
	      {1'd0, 9'd209}: s2wr1 <= 209;
	      {1'd0, 9'd210}: s2wr1 <= 210;
	      {1'd0, 9'd211}: s2wr1 <= 211;
	      {1'd0, 9'd212}: s2wr1 <= 212;
	      {1'd0, 9'd213}: s2wr1 <= 213;
	      {1'd0, 9'd214}: s2wr1 <= 214;
	      {1'd0, 9'd215}: s2wr1 <= 215;
	      {1'd0, 9'd216}: s2wr1 <= 216;
	      {1'd0, 9'd217}: s2wr1 <= 217;
	      {1'd0, 9'd218}: s2wr1 <= 218;
	      {1'd0, 9'd219}: s2wr1 <= 219;
	      {1'd0, 9'd220}: s2wr1 <= 220;
	      {1'd0, 9'd221}: s2wr1 <= 221;
	      {1'd0, 9'd222}: s2wr1 <= 222;
	      {1'd0, 9'd223}: s2wr1 <= 223;
	      {1'd0, 9'd224}: s2wr1 <= 224;
	      {1'd0, 9'd225}: s2wr1 <= 225;
	      {1'd0, 9'd226}: s2wr1 <= 226;
	      {1'd0, 9'd227}: s2wr1 <= 227;
	      {1'd0, 9'd228}: s2wr1 <= 228;
	      {1'd0, 9'd229}: s2wr1 <= 229;
	      {1'd0, 9'd230}: s2wr1 <= 230;
	      {1'd0, 9'd231}: s2wr1 <= 231;
	      {1'd0, 9'd232}: s2wr1 <= 232;
	      {1'd0, 9'd233}: s2wr1 <= 233;
	      {1'd0, 9'd234}: s2wr1 <= 234;
	      {1'd0, 9'd235}: s2wr1 <= 235;
	      {1'd0, 9'd236}: s2wr1 <= 236;
	      {1'd0, 9'd237}: s2wr1 <= 237;
	      {1'd0, 9'd238}: s2wr1 <= 238;
	      {1'd0, 9'd239}: s2wr1 <= 239;
	      {1'd0, 9'd240}: s2wr1 <= 240;
	      {1'd0, 9'd241}: s2wr1 <= 241;
	      {1'd0, 9'd242}: s2wr1 <= 242;
	      {1'd0, 9'd243}: s2wr1 <= 243;
	      {1'd0, 9'd244}: s2wr1 <= 244;
	      {1'd0, 9'd245}: s2wr1 <= 245;
	      {1'd0, 9'd246}: s2wr1 <= 246;
	      {1'd0, 9'd247}: s2wr1 <= 247;
	      {1'd0, 9'd248}: s2wr1 <= 248;
	      {1'd0, 9'd249}: s2wr1 <= 249;
	      {1'd0, 9'd250}: s2wr1 <= 250;
	      {1'd0, 9'd251}: s2wr1 <= 251;
	      {1'd0, 9'd252}: s2wr1 <= 252;
	      {1'd0, 9'd253}: s2wr1 <= 253;
	      {1'd0, 9'd254}: s2wr1 <= 254;
	      {1'd0, 9'd255}: s2wr1 <= 255;
	      {1'd0, 9'd256}: s2wr1 <= 256;
	      {1'd0, 9'd257}: s2wr1 <= 257;
	      {1'd0, 9'd258}: s2wr1 <= 258;
	      {1'd0, 9'd259}: s2wr1 <= 259;
	      {1'd0, 9'd260}: s2wr1 <= 260;
	      {1'd0, 9'd261}: s2wr1 <= 261;
	      {1'd0, 9'd262}: s2wr1 <= 262;
	      {1'd0, 9'd263}: s2wr1 <= 263;
	      {1'd0, 9'd264}: s2wr1 <= 264;
	      {1'd0, 9'd265}: s2wr1 <= 265;
	      {1'd0, 9'd266}: s2wr1 <= 266;
	      {1'd0, 9'd267}: s2wr1 <= 267;
	      {1'd0, 9'd268}: s2wr1 <= 268;
	      {1'd0, 9'd269}: s2wr1 <= 269;
	      {1'd0, 9'd270}: s2wr1 <= 270;
	      {1'd0, 9'd271}: s2wr1 <= 271;
	      {1'd0, 9'd272}: s2wr1 <= 272;
	      {1'd0, 9'd273}: s2wr1 <= 273;
	      {1'd0, 9'd274}: s2wr1 <= 274;
	      {1'd0, 9'd275}: s2wr1 <= 275;
	      {1'd0, 9'd276}: s2wr1 <= 276;
	      {1'd0, 9'd277}: s2wr1 <= 277;
	      {1'd0, 9'd278}: s2wr1 <= 278;
	      {1'd0, 9'd279}: s2wr1 <= 279;
	      {1'd0, 9'd280}: s2wr1 <= 280;
	      {1'd0, 9'd281}: s2wr1 <= 281;
	      {1'd0, 9'd282}: s2wr1 <= 282;
	      {1'd0, 9'd283}: s2wr1 <= 283;
	      {1'd0, 9'd284}: s2wr1 <= 284;
	      {1'd0, 9'd285}: s2wr1 <= 285;
	      {1'd0, 9'd286}: s2wr1 <= 286;
	      {1'd0, 9'd287}: s2wr1 <= 287;
	      {1'd0, 9'd288}: s2wr1 <= 288;
	      {1'd0, 9'd289}: s2wr1 <= 289;
	      {1'd0, 9'd290}: s2wr1 <= 290;
	      {1'd0, 9'd291}: s2wr1 <= 291;
	      {1'd0, 9'd292}: s2wr1 <= 292;
	      {1'd0, 9'd293}: s2wr1 <= 293;
	      {1'd0, 9'd294}: s2wr1 <= 294;
	      {1'd0, 9'd295}: s2wr1 <= 295;
	      {1'd0, 9'd296}: s2wr1 <= 296;
	      {1'd0, 9'd297}: s2wr1 <= 297;
	      {1'd0, 9'd298}: s2wr1 <= 298;
	      {1'd0, 9'd299}: s2wr1 <= 299;
	      {1'd0, 9'd300}: s2wr1 <= 300;
	      {1'd0, 9'd301}: s2wr1 <= 301;
	      {1'd0, 9'd302}: s2wr1 <= 302;
	      {1'd0, 9'd303}: s2wr1 <= 303;
	      {1'd0, 9'd304}: s2wr1 <= 304;
	      {1'd0, 9'd305}: s2wr1 <= 305;
	      {1'd0, 9'd306}: s2wr1 <= 306;
	      {1'd0, 9'd307}: s2wr1 <= 307;
	      {1'd0, 9'd308}: s2wr1 <= 308;
	      {1'd0, 9'd309}: s2wr1 <= 309;
	      {1'd0, 9'd310}: s2wr1 <= 310;
	      {1'd0, 9'd311}: s2wr1 <= 311;
	      {1'd0, 9'd312}: s2wr1 <= 312;
	      {1'd0, 9'd313}: s2wr1 <= 313;
	      {1'd0, 9'd314}: s2wr1 <= 314;
	      {1'd0, 9'd315}: s2wr1 <= 315;
	      {1'd0, 9'd316}: s2wr1 <= 316;
	      {1'd0, 9'd317}: s2wr1 <= 317;
	      {1'd0, 9'd318}: s2wr1 <= 318;
	      {1'd0, 9'd319}: s2wr1 <= 319;
	      {1'd0, 9'd320}: s2wr1 <= 320;
	      {1'd0, 9'd321}: s2wr1 <= 321;
	      {1'd0, 9'd322}: s2wr1 <= 322;
	      {1'd0, 9'd323}: s2wr1 <= 323;
	      {1'd0, 9'd324}: s2wr1 <= 324;
	      {1'd0, 9'd325}: s2wr1 <= 325;
	      {1'd0, 9'd326}: s2wr1 <= 326;
	      {1'd0, 9'd327}: s2wr1 <= 327;
	      {1'd0, 9'd328}: s2wr1 <= 328;
	      {1'd0, 9'd329}: s2wr1 <= 329;
	      {1'd0, 9'd330}: s2wr1 <= 330;
	      {1'd0, 9'd331}: s2wr1 <= 331;
	      {1'd0, 9'd332}: s2wr1 <= 332;
	      {1'd0, 9'd333}: s2wr1 <= 333;
	      {1'd0, 9'd334}: s2wr1 <= 334;
	      {1'd0, 9'd335}: s2wr1 <= 335;
	      {1'd0, 9'd336}: s2wr1 <= 336;
	      {1'd0, 9'd337}: s2wr1 <= 337;
	      {1'd0, 9'd338}: s2wr1 <= 338;
	      {1'd0, 9'd339}: s2wr1 <= 339;
	      {1'd0, 9'd340}: s2wr1 <= 340;
	      {1'd0, 9'd341}: s2wr1 <= 341;
	      {1'd0, 9'd342}: s2wr1 <= 342;
	      {1'd0, 9'd343}: s2wr1 <= 343;
	      {1'd0, 9'd344}: s2wr1 <= 344;
	      {1'd0, 9'd345}: s2wr1 <= 345;
	      {1'd0, 9'd346}: s2wr1 <= 346;
	      {1'd0, 9'd347}: s2wr1 <= 347;
	      {1'd0, 9'd348}: s2wr1 <= 348;
	      {1'd0, 9'd349}: s2wr1 <= 349;
	      {1'd0, 9'd350}: s2wr1 <= 350;
	      {1'd0, 9'd351}: s2wr1 <= 351;
	      {1'd0, 9'd352}: s2wr1 <= 352;
	      {1'd0, 9'd353}: s2wr1 <= 353;
	      {1'd0, 9'd354}: s2wr1 <= 354;
	      {1'd0, 9'd355}: s2wr1 <= 355;
	      {1'd0, 9'd356}: s2wr1 <= 356;
	      {1'd0, 9'd357}: s2wr1 <= 357;
	      {1'd0, 9'd358}: s2wr1 <= 358;
	      {1'd0, 9'd359}: s2wr1 <= 359;
	      {1'd0, 9'd360}: s2wr1 <= 360;
	      {1'd0, 9'd361}: s2wr1 <= 361;
	      {1'd0, 9'd362}: s2wr1 <= 362;
	      {1'd0, 9'd363}: s2wr1 <= 363;
	      {1'd0, 9'd364}: s2wr1 <= 364;
	      {1'd0, 9'd365}: s2wr1 <= 365;
	      {1'd0, 9'd366}: s2wr1 <= 366;
	      {1'd0, 9'd367}: s2wr1 <= 367;
	      {1'd0, 9'd368}: s2wr1 <= 368;
	      {1'd0, 9'd369}: s2wr1 <= 369;
	      {1'd0, 9'd370}: s2wr1 <= 370;
	      {1'd0, 9'd371}: s2wr1 <= 371;
	      {1'd0, 9'd372}: s2wr1 <= 372;
	      {1'd0, 9'd373}: s2wr1 <= 373;
	      {1'd0, 9'd374}: s2wr1 <= 374;
	      {1'd0, 9'd375}: s2wr1 <= 375;
	      {1'd0, 9'd376}: s2wr1 <= 376;
	      {1'd0, 9'd377}: s2wr1 <= 377;
	      {1'd0, 9'd378}: s2wr1 <= 378;
	      {1'd0, 9'd379}: s2wr1 <= 379;
	      {1'd0, 9'd380}: s2wr1 <= 380;
	      {1'd0, 9'd381}: s2wr1 <= 381;
	      {1'd0, 9'd382}: s2wr1 <= 382;
	      {1'd0, 9'd383}: s2wr1 <= 383;
	      {1'd0, 9'd384}: s2wr1 <= 384;
	      {1'd0, 9'd385}: s2wr1 <= 385;
	      {1'd0, 9'd386}: s2wr1 <= 386;
	      {1'd0, 9'd387}: s2wr1 <= 387;
	      {1'd0, 9'd388}: s2wr1 <= 388;
	      {1'd0, 9'd389}: s2wr1 <= 389;
	      {1'd0, 9'd390}: s2wr1 <= 390;
	      {1'd0, 9'd391}: s2wr1 <= 391;
	      {1'd0, 9'd392}: s2wr1 <= 392;
	      {1'd0, 9'd393}: s2wr1 <= 393;
	      {1'd0, 9'd394}: s2wr1 <= 394;
	      {1'd0, 9'd395}: s2wr1 <= 395;
	      {1'd0, 9'd396}: s2wr1 <= 396;
	      {1'd0, 9'd397}: s2wr1 <= 397;
	      {1'd0, 9'd398}: s2wr1 <= 398;
	      {1'd0, 9'd399}: s2wr1 <= 399;
	      {1'd0, 9'd400}: s2wr1 <= 400;
	      {1'd0, 9'd401}: s2wr1 <= 401;
	      {1'd0, 9'd402}: s2wr1 <= 402;
	      {1'd0, 9'd403}: s2wr1 <= 403;
	      {1'd0, 9'd404}: s2wr1 <= 404;
	      {1'd0, 9'd405}: s2wr1 <= 405;
	      {1'd0, 9'd406}: s2wr1 <= 406;
	      {1'd0, 9'd407}: s2wr1 <= 407;
	      {1'd0, 9'd408}: s2wr1 <= 408;
	      {1'd0, 9'd409}: s2wr1 <= 409;
	      {1'd0, 9'd410}: s2wr1 <= 410;
	      {1'd0, 9'd411}: s2wr1 <= 411;
	      {1'd0, 9'd412}: s2wr1 <= 412;
	      {1'd0, 9'd413}: s2wr1 <= 413;
	      {1'd0, 9'd414}: s2wr1 <= 414;
	      {1'd0, 9'd415}: s2wr1 <= 415;
	      {1'd0, 9'd416}: s2wr1 <= 416;
	      {1'd0, 9'd417}: s2wr1 <= 417;
	      {1'd0, 9'd418}: s2wr1 <= 418;
	      {1'd0, 9'd419}: s2wr1 <= 419;
	      {1'd0, 9'd420}: s2wr1 <= 420;
	      {1'd0, 9'd421}: s2wr1 <= 421;
	      {1'd0, 9'd422}: s2wr1 <= 422;
	      {1'd0, 9'd423}: s2wr1 <= 423;
	      {1'd0, 9'd424}: s2wr1 <= 424;
	      {1'd0, 9'd425}: s2wr1 <= 425;
	      {1'd0, 9'd426}: s2wr1 <= 426;
	      {1'd0, 9'd427}: s2wr1 <= 427;
	      {1'd0, 9'd428}: s2wr1 <= 428;
	      {1'd0, 9'd429}: s2wr1 <= 429;
	      {1'd0, 9'd430}: s2wr1 <= 430;
	      {1'd0, 9'd431}: s2wr1 <= 431;
	      {1'd0, 9'd432}: s2wr1 <= 432;
	      {1'd0, 9'd433}: s2wr1 <= 433;
	      {1'd0, 9'd434}: s2wr1 <= 434;
	      {1'd0, 9'd435}: s2wr1 <= 435;
	      {1'd0, 9'd436}: s2wr1 <= 436;
	      {1'd0, 9'd437}: s2wr1 <= 437;
	      {1'd0, 9'd438}: s2wr1 <= 438;
	      {1'd0, 9'd439}: s2wr1 <= 439;
	      {1'd0, 9'd440}: s2wr1 <= 440;
	      {1'd0, 9'd441}: s2wr1 <= 441;
	      {1'd0, 9'd442}: s2wr1 <= 442;
	      {1'd0, 9'd443}: s2wr1 <= 443;
	      {1'd0, 9'd444}: s2wr1 <= 444;
	      {1'd0, 9'd445}: s2wr1 <= 445;
	      {1'd0, 9'd446}: s2wr1 <= 446;
	      {1'd0, 9'd447}: s2wr1 <= 447;
	      {1'd0, 9'd448}: s2wr1 <= 448;
	      {1'd0, 9'd449}: s2wr1 <= 449;
	      {1'd0, 9'd450}: s2wr1 <= 450;
	      {1'd0, 9'd451}: s2wr1 <= 451;
	      {1'd0, 9'd452}: s2wr1 <= 452;
	      {1'd0, 9'd453}: s2wr1 <= 453;
	      {1'd0, 9'd454}: s2wr1 <= 454;
	      {1'd0, 9'd455}: s2wr1 <= 455;
	      {1'd0, 9'd456}: s2wr1 <= 456;
	      {1'd0, 9'd457}: s2wr1 <= 457;
	      {1'd0, 9'd458}: s2wr1 <= 458;
	      {1'd0, 9'd459}: s2wr1 <= 459;
	      {1'd0, 9'd460}: s2wr1 <= 460;
	      {1'd0, 9'd461}: s2wr1 <= 461;
	      {1'd0, 9'd462}: s2wr1 <= 462;
	      {1'd0, 9'd463}: s2wr1 <= 463;
	      {1'd0, 9'd464}: s2wr1 <= 464;
	      {1'd0, 9'd465}: s2wr1 <= 465;
	      {1'd0, 9'd466}: s2wr1 <= 466;
	      {1'd0, 9'd467}: s2wr1 <= 467;
	      {1'd0, 9'd468}: s2wr1 <= 468;
	      {1'd0, 9'd469}: s2wr1 <= 469;
	      {1'd0, 9'd470}: s2wr1 <= 470;
	      {1'd0, 9'd471}: s2wr1 <= 471;
	      {1'd0, 9'd472}: s2wr1 <= 472;
	      {1'd0, 9'd473}: s2wr1 <= 473;
	      {1'd0, 9'd474}: s2wr1 <= 474;
	      {1'd0, 9'd475}: s2wr1 <= 475;
	      {1'd0, 9'd476}: s2wr1 <= 476;
	      {1'd0, 9'd477}: s2wr1 <= 477;
	      {1'd0, 9'd478}: s2wr1 <= 478;
	      {1'd0, 9'd479}: s2wr1 <= 479;
	      {1'd0, 9'd480}: s2wr1 <= 480;
	      {1'd0, 9'd481}: s2wr1 <= 481;
	      {1'd0, 9'd482}: s2wr1 <= 482;
	      {1'd0, 9'd483}: s2wr1 <= 483;
	      {1'd0, 9'd484}: s2wr1 <= 484;
	      {1'd0, 9'd485}: s2wr1 <= 485;
	      {1'd0, 9'd486}: s2wr1 <= 486;
	      {1'd0, 9'd487}: s2wr1 <= 487;
	      {1'd0, 9'd488}: s2wr1 <= 488;
	      {1'd0, 9'd489}: s2wr1 <= 489;
	      {1'd0, 9'd490}: s2wr1 <= 490;
	      {1'd0, 9'd491}: s2wr1 <= 491;
	      {1'd0, 9'd492}: s2wr1 <= 492;
	      {1'd0, 9'd493}: s2wr1 <= 493;
	      {1'd0, 9'd494}: s2wr1 <= 494;
	      {1'd0, 9'd495}: s2wr1 <= 495;
	      {1'd0, 9'd496}: s2wr1 <= 496;
	      {1'd0, 9'd497}: s2wr1 <= 497;
	      {1'd0, 9'd498}: s2wr1 <= 498;
	      {1'd0, 9'd499}: s2wr1 <= 499;
	      {1'd0, 9'd500}: s2wr1 <= 500;
	      {1'd0, 9'd501}: s2wr1 <= 501;
	      {1'd0, 9'd502}: s2wr1 <= 502;
	      {1'd0, 9'd503}: s2wr1 <= 503;
	      {1'd0, 9'd504}: s2wr1 <= 504;
	      {1'd0, 9'd505}: s2wr1 <= 505;
	      {1'd0, 9'd506}: s2wr1 <= 506;
	      {1'd0, 9'd507}: s2wr1 <= 507;
	      {1'd0, 9'd508}: s2wr1 <= 508;
	      {1'd0, 9'd509}: s2wr1 <= 509;
	      {1'd0, 9'd510}: s2wr1 <= 510;
	      {1'd0, 9'd511}: s2wr1 <= 511;
      endcase // case(writeCycle)
   end // always @ (posedge clk)

// synthesis attribute rom_style of s2wr1 is "block"
endmodule



						module multfix(clk, rst, a, b, q_sc, q_unsc);
						   parameter WIDTH=35, CYCLES=6;

						   input signed [WIDTH-1:0]    a,b;
						   output [WIDTH-1:0]          q_sc;
						   output [WIDTH-1:0]              q_unsc;

						   input                       clk, rst;
						   
						   reg signed [2*WIDTH-1:0]    q[CYCLES-1:0];
						   wire signed [2*WIDTH-1:0]   res;   
						   integer                     i;

						   assign                      res = q[CYCLES-1];   
						   
						   assign                      q_unsc = res[WIDTH-1:0];
						   assign                      q_sc = {res[2*WIDTH-1], res[2*WIDTH-4:WIDTH-2]};
						      
						   always @(posedge clk) begin
						      q[0] <= a * b;
						      for (i = 1; i < CYCLES; i=i+1) begin
						         q[i] <= q[i-1];
						      end
						   end
						                  
						endmodule 
module addfxp(a, b, q, clk);

   parameter width = 16, cycles=1;
   
   input signed [width-1:0]  a, b;
   input                     clk;   
   output signed [width-1:0] q;
   reg signed [width-1:0]    res[cycles-1:0];

   assign                    q = res[cycles-1];
   
   integer                   i;   
   
   always @(posedge clk) begin
     res[0] <= a+b;
      for (i=1; i < cycles; i = i+1)
        res[i] <= res[i-1];
      
   end
   
endmodule

module subfxp(a, b, q, clk);

   parameter width = 16, cycles=1;
   
   input signed [width-1:0]  a, b;
   input                     clk;   
   output signed [width-1:0] q;
   reg signed [width-1:0]    res[cycles-1:0];

   assign                    q = res[cycles-1];
   
   integer                   i;   
   
   always @(posedge clk) begin
     res[0] <= a-b;
      for (i=1; i < cycles; i = i+1)
        res[i] <= res[i-1];
      
   end
  
endmodule

module shiftRegFIFO(X, Y, clk);
   parameter depth=1, width=2;

   
   input signed  [width-1:0]   X;
   reg signed [width-1:0]      zero;
   input                       clk;
	

	output signed [width-1:0]  Y;
   reg signed [width-1:0]      mem [515-1:0];

   assign                      Y = mem[depth-1];
   integer                     i;

   always @ (posedge clk) begin
	  mem[0]<=X-zero;
                mem[513] <= mem[512];
                mem[512] <= mem[511];
                mem[511] <= mem[510];
                mem[510] <= mem[509];
                mem[509] <= mem[508];
                mem[508] <= mem[507];
                mem[507] <= mem[506];
                mem[506] <= mem[505];
                mem[505] <= mem[504];
                mem[504] <= mem[503];
                mem[503] <= mem[502];
                mem[502] <= mem[501];
                mem[501] <= mem[500];
                mem[500] <= mem[499];
                mem[499] <= mem[498];
                mem[498] <= mem[497];
                mem[497] <= mem[496];
                mem[496] <= mem[495];
                mem[495] <= mem[494];
                mem[494] <= mem[493];
                mem[493] <= mem[492];
                mem[492] <= mem[491];
                mem[491] <= mem[490];
                mem[490] <= mem[489];
                mem[489] <= mem[488];
                mem[488] <= mem[487];
                mem[487] <= mem[486];
                mem[486] <= mem[485];
                mem[485] <= mem[484];
                mem[484] <= mem[483];
                mem[483] <= mem[482];
                mem[482] <= mem[481];
                mem[481] <= mem[480];
                mem[480] <= mem[479];
                mem[479] <= mem[478];
                mem[478] <= mem[477];
                mem[477] <= mem[476];
                mem[476] <= mem[475];
                mem[475] <= mem[474];
                mem[474] <= mem[473];
                mem[473] <= mem[472];
                mem[472] <= mem[471];
                mem[471] <= mem[470];
                mem[470] <= mem[469];
                mem[469] <= mem[468];
                mem[468] <= mem[467];
                mem[467] <= mem[466];
                mem[466] <= mem[465];
                mem[465] <= mem[464];
                mem[464] <= mem[463];
                mem[463] <= mem[462];
                mem[462] <= mem[461];
                mem[461] <= mem[460];
                mem[460] <= mem[459];
                mem[459] <= mem[458];
                mem[458] <= mem[457];
                mem[457] <= mem[456];
                mem[456] <= mem[455];
                mem[455] <= mem[454];
                mem[454] <= mem[453];
                mem[453] <= mem[452];
                mem[452] <= mem[451];
                mem[451] <= mem[450];
                mem[450] <= mem[449];
                mem[449] <= mem[448];
                mem[448] <= mem[447];
                mem[447] <= mem[446];
                mem[446] <= mem[445];
                mem[445] <= mem[444];
                mem[444] <= mem[443];
                mem[443] <= mem[442];
                mem[442] <= mem[441];
                mem[441] <= mem[440];
                mem[440] <= mem[439];
                mem[439] <= mem[438];
                mem[438] <= mem[437];
                mem[437] <= mem[436];
                mem[436] <= mem[435];
                mem[435] <= mem[434];
                mem[434] <= mem[433];
                mem[433] <= mem[432];
                mem[432] <= mem[431];
                mem[431] <= mem[430];
                mem[430] <= mem[429];
                mem[429] <= mem[428];
                mem[428] <= mem[427];
                mem[427] <= mem[426];
                mem[426] <= mem[425];
                mem[425] <= mem[424];
                mem[424] <= mem[423];
                mem[423] <= mem[422];
                mem[422] <= mem[421];
                mem[421] <= mem[420];
                mem[420] <= mem[419];
                mem[419] <= mem[418];
                mem[418] <= mem[417];
                mem[417] <= mem[416];
                mem[416] <= mem[415];
                mem[415] <= mem[414];
                mem[414] <= mem[413];
                mem[413] <= mem[412];
                mem[412] <= mem[411];
                mem[411] <= mem[410];
                mem[410] <= mem[409];
                mem[409] <= mem[408];
                mem[408] <= mem[407];
                mem[407] <= mem[406];
                mem[406] <= mem[405];
                mem[405] <= mem[404];
                mem[404] <= mem[403];
                mem[403] <= mem[402];
                mem[402] <= mem[401];
                mem[401] <= mem[400];
                mem[400] <= mem[399];
                mem[399] <= mem[398];
                mem[398] <= mem[397];
                mem[397] <= mem[396];
                mem[396] <= mem[395];
                mem[395] <= mem[394];
                mem[394] <= mem[393];
                mem[393] <= mem[392];
                mem[392] <= mem[391];
                mem[391] <= mem[390];
                mem[390] <= mem[389];
                mem[389] <= mem[388];
                mem[388] <= mem[387];
                mem[387] <= mem[386];
                mem[386] <= mem[385];
                mem[385] <= mem[384];
                mem[384] <= mem[383];
                mem[383] <= mem[382];
                mem[382] <= mem[381];
                mem[381] <= mem[380];
                mem[380] <= mem[379];
                mem[379] <= mem[378];
                mem[378] <= mem[377];
                mem[377] <= mem[376];
                mem[376] <= mem[375];
                mem[375] <= mem[374];
                mem[374] <= mem[373];
                mem[373] <= mem[372];
                mem[372] <= mem[371];
                mem[371] <= mem[370];
                mem[370] <= mem[369];
                mem[369] <= mem[368];
                mem[368] <= mem[367];
                mem[367] <= mem[366];
                mem[366] <= mem[365];
                mem[365] <= mem[364];
                mem[364] <= mem[363];
                mem[363] <= mem[362];
                mem[362] <= mem[361];
                mem[361] <= mem[360];
                mem[360] <= mem[359];
                mem[359] <= mem[358];
                mem[358] <= mem[357];
                mem[357] <= mem[356];
                mem[356] <= mem[355];
                mem[355] <= mem[354];
                mem[354] <= mem[353];
                mem[353] <= mem[352];
                mem[352] <= mem[351];
                mem[351] <= mem[350];
                mem[350] <= mem[349];
                mem[349] <= mem[348];
                mem[348] <= mem[347];
                mem[347] <= mem[346];
                mem[346] <= mem[345];
                mem[345] <= mem[344];
                mem[344] <= mem[343];
                mem[343] <= mem[342];
                mem[342] <= mem[341];
                mem[341] <= mem[340];
                mem[340] <= mem[339];
                mem[339] <= mem[338];
                mem[338] <= mem[337];
                mem[337] <= mem[336];
                mem[336] <= mem[335];
                mem[335] <= mem[334];
                mem[334] <= mem[333];
                mem[333] <= mem[332];
                mem[332] <= mem[331];
                mem[331] <= mem[330];
                mem[330] <= mem[329];
                mem[329] <= mem[328];
                mem[328] <= mem[327];
                mem[327] <= mem[326];
                mem[326] <= mem[325];
                mem[325] <= mem[324];
                mem[324] <= mem[323];
                mem[323] <= mem[322];
                mem[322] <= mem[321];
                mem[321] <= mem[320];
                mem[320] <= mem[319];
                mem[319] <= mem[318];
                mem[318] <= mem[317];
                mem[317] <= mem[316];
                mem[316] <= mem[315];
                mem[315] <= mem[314];
                mem[314] <= mem[313];
                mem[313] <= mem[312];
                mem[312] <= mem[311];
                mem[311] <= mem[310];
                mem[310] <= mem[309];
                mem[309] <= mem[308];
                mem[308] <= mem[307];
                mem[307] <= mem[306];
                mem[306] <= mem[305];
                mem[305] <= mem[304];
                mem[304] <= mem[303];
                mem[303] <= mem[302];
                mem[302] <= mem[301];
                mem[301] <= mem[300];
                mem[300] <= mem[299];
                mem[299] <= mem[298];
                mem[298] <= mem[297];
                mem[297] <= mem[296];
                mem[296] <= mem[295];
                mem[295] <= mem[294];
                mem[294] <= mem[293];
                mem[293] <= mem[292];
                mem[292] <= mem[291];
                mem[291] <= mem[290];
                mem[290] <= mem[289];
                mem[289] <= mem[288];
                mem[288] <= mem[287];
                mem[287] <= mem[286];
                mem[286] <= mem[285];
                mem[285] <= mem[284];
                mem[284] <= mem[283];
                mem[283] <= mem[282];
                mem[282] <= mem[281];
                mem[281] <= mem[280];
                mem[280] <= mem[279];
                mem[279] <= mem[278];
                mem[278] <= mem[277];
                mem[277] <= mem[276];
                mem[276] <= mem[275];
                mem[275] <= mem[274];
                mem[274] <= mem[273];
                mem[273] <= mem[272];
                mem[272] <= mem[271];
                mem[271] <= mem[270];
                mem[270] <= mem[269];
                mem[269] <= mem[268];
                mem[268] <= mem[267];
                mem[267] <= mem[266];
                mem[266] <= mem[265];
                mem[265] <= mem[264];
                mem[264] <= mem[263];
                mem[263] <= mem[262];
                mem[262] <= mem[261];
                mem[261] <= mem[260];
                mem[260] <= mem[259];
                mem[259] <= mem[258];
                mem[258] <= mem[257];
                mem[257] <= mem[256];
                mem[256] <= mem[255];
                mem[255] <= mem[254];
                mem[254] <= mem[253];
                mem[253] <= mem[252];
                mem[252] <= mem[251];
                mem[251] <= mem[250];
                mem[250] <= mem[249];
                mem[249] <= mem[248];
                mem[248] <= mem[247];
                mem[247] <= mem[246];
                mem[246] <= mem[245];
                mem[245] <= mem[244];
                mem[244] <= mem[243];
                mem[243] <= mem[242];
                mem[242] <= mem[241];
                mem[241] <= mem[240];
                mem[240] <= mem[239];
                mem[239] <= mem[238];
                mem[238] <= mem[237];
                mem[237] <= mem[236];
                mem[236] <= mem[235];
                mem[235] <= mem[234];
                mem[234] <= mem[233];
                mem[233] <= mem[232];
                mem[232] <= mem[231];
                mem[231] <= mem[230];
                mem[230] <= mem[229];
                mem[229] <= mem[228];
                mem[228] <= mem[227];
                mem[227] <= mem[226];
                mem[226] <= mem[225];
                mem[225] <= mem[224];
                mem[224] <= mem[223];
                mem[223] <= mem[222];
                mem[222] <= mem[221];
                mem[221] <= mem[220];
                mem[220] <= mem[219];
                mem[219] <= mem[218];
                mem[218] <= mem[217];
                mem[217] <= mem[216];
                mem[216] <= mem[215];
                mem[215] <= mem[214];
                mem[214] <= mem[213];
                mem[213] <= mem[212];
                mem[212] <= mem[211];
                mem[211] <= mem[210];
                mem[210] <= mem[209];
                mem[209] <= mem[208];
                mem[208] <= mem[207];
                mem[207] <= mem[206];
                mem[206] <= mem[205];
                mem[205] <= mem[204];
                mem[204] <= mem[203];
                mem[203] <= mem[202];
                mem[202] <= mem[201];
                mem[201] <= mem[200];
                mem[200] <= mem[199];
                mem[199] <= mem[198];
                mem[198] <= mem[197];
                mem[197] <= mem[196];
                mem[196] <= mem[195];
                mem[195] <= mem[194];
                mem[194] <= mem[193];
                mem[193] <= mem[192];
                mem[192] <= mem[191];
                mem[191] <= mem[190];
                mem[190] <= mem[189];
                mem[189] <= mem[188];
                mem[188] <= mem[187];
                mem[187] <= mem[186];
                mem[186] <= mem[185];
                mem[185] <= mem[184];
                mem[184] <= mem[183];
                mem[183] <= mem[182];
                mem[182] <= mem[181];
                mem[181] <= mem[180];
                mem[180] <= mem[179];
                mem[179] <= mem[178];
                mem[178] <= mem[177];
                mem[177] <= mem[176];
                mem[176] <= mem[175];
                mem[175] <= mem[174];
                mem[174] <= mem[173];
                mem[173] <= mem[172];
                mem[172] <= mem[171];
                mem[171] <= mem[170];
                mem[170] <= mem[169];
                mem[169] <= mem[168];
                mem[168] <= mem[167];
                mem[167] <= mem[166];
                mem[166] <= mem[165];
                mem[165] <= mem[164];
                mem[164] <= mem[163];
                mem[163] <= mem[162];
                mem[162] <= mem[161];
                mem[161] <= mem[160];
                mem[160] <= mem[159];
                mem[159] <= mem[158];
                mem[158] <= mem[157];
                mem[157] <= mem[156];
                mem[156] <= mem[155];
                mem[155] <= mem[154];
                mem[154] <= mem[153];
                mem[153] <= mem[152];
                mem[152] <= mem[151];
                mem[151] <= mem[150];
                mem[150] <= mem[149];
                mem[149] <= mem[148];
                mem[148] <= mem[147];
                mem[147] <= mem[146];
                mem[146] <= mem[145];
                mem[145] <= mem[144];
                mem[144] <= mem[143];
                mem[143] <= mem[142];
                mem[142] <= mem[141];
                mem[141] <= mem[140];
                mem[140] <= mem[139];
                mem[139] <= mem[138];
                mem[138] <= mem[137];
                mem[137] <= mem[136];
                mem[136] <= mem[135];
                mem[135] <= mem[134];
                mem[134] <= mem[133];
                mem[133] <= mem[132];
                mem[132] <= mem[131];
                mem[131] <= mem[130];
                mem[130] <= mem[129];
                mem[129] <= mem[128];
                mem[128] <= mem[127];
                mem[127] <= mem[126];
                mem[126] <= mem[125];
                mem[125] <= mem[124];
                mem[124] <= mem[123];
                mem[123] <= mem[122];
                mem[122] <= mem[121];
                mem[121] <= mem[120];
                mem[120] <= mem[119];
                mem[119] <= mem[118];
                mem[118] <= mem[117];
                mem[117] <= mem[116];
                mem[116] <= mem[115];
                mem[115] <= mem[114];
                mem[114] <= mem[113];
                mem[113] <= mem[112];
                mem[112] <= mem[111];
                mem[111] <= mem[110];
                mem[110] <= mem[109];
                mem[109] <= mem[108];
                mem[108] <= mem[107];
                mem[107] <= mem[106];
                mem[106] <= mem[105];
                mem[105] <= mem[104];
                mem[104] <= mem[103];
                mem[103] <= mem[102];
                mem[102] <= mem[101];
                mem[101] <= mem[100];
                mem[100] <= mem[99];
                mem[99] <= mem[98];
                mem[98] <= mem[97];
                mem[97] <= mem[96];
                mem[96] <= mem[95];
                mem[95] <= mem[94];
                mem[94] <= mem[93];
                mem[93] <= mem[92];
                mem[92] <= mem[91];
                mem[91] <= mem[90];
                mem[90] <= mem[89];
                mem[89] <= mem[88];
                mem[88] <= mem[87];
                mem[87] <= mem[86];
                mem[86] <= mem[85];
                mem[85] <= mem[84];
                mem[84] <= mem[83];
                mem[83] <= mem[82];
                mem[82] <= mem[81];
                mem[81] <= mem[80];
                mem[80] <= mem[79];
                mem[79] <= mem[78];
                mem[78] <= mem[77];
                mem[77] <= mem[76];
                mem[76] <= mem[75];
                mem[75] <= mem[74];
                mem[74] <= mem[73];
                mem[73] <= mem[72];
                mem[72] <= mem[71];
                mem[71] <= mem[70];
                mem[70] <= mem[69];
                mem[69] <= mem[68];
                mem[68] <= mem[67];
                mem[67] <= mem[66];
                mem[66] <= mem[65];
                mem[65] <= mem[64];
                mem[64] <= mem[63];
                mem[63] <= mem[62];
                mem[62] <= mem[61];
                mem[61] <= mem[60];
                mem[60] <= mem[59];
                mem[59] <= mem[58];
                mem[58] <= mem[57];
                mem[57] <= mem[56];
                mem[56] <= mem[55];
                mem[55] <= mem[54];
                mem[54] <= mem[53];
                mem[53] <= mem[52];
                mem[52] <= mem[51];
                mem[51] <= mem[50];
                mem[50] <= mem[49];
                mem[49] <= mem[48];
                mem[48] <= mem[47];
                mem[47] <= mem[46];
                mem[46] <= mem[45];
                mem[45] <= mem[44];
                mem[44] <= mem[43];
                mem[43] <= mem[42];
                mem[42] <= mem[41];
                mem[41] <= mem[40];
                mem[40] <= mem[39];
                mem[39] <= mem[38];
                mem[38] <= mem[37];
                mem[37] <= mem[36];
                mem[36] <= mem[35];
                mem[35] <= mem[34];
                mem[34] <= mem[33];
                mem[33] <= mem[32];
                mem[32] <= mem[31];
                mem[31] <= mem[30];
                mem[30] <= mem[29];
                mem[29] <= mem[28];
                mem[28] <= mem[27];
                mem[27] <= mem[26];
                mem[26] <= mem[25];
                mem[25] <= mem[24];
                mem[24] <= mem[23];
                mem[23] <= mem[22];
                mem[22] <= mem[21];
                mem[21] <= mem[20];
                mem[20] <= mem[19];
                mem[19] <= mem[18];
                mem[18] <= mem[17];
                mem[17] <= mem[16];
                mem[16] <= mem[15];
                mem[15] <= mem[14];
                mem[14] <= mem[13];
                mem[13] <= mem[12];
                mem[12] <= mem[11];
                mem[11] <= mem[10];
                mem[10] <= mem[9];
                mem[9] <= mem[8];
                mem[8] <= mem[7];
                mem[7] <= mem[6];
                mem[6] <= mem[5];
                mem[5] <= mem[4];
                mem[4] <= mem[3];
                mem[3] <= mem[2];
                mem[2] <= mem[1];
                mem[1] <= mem[0];
   end
   always @(posedge clk) zero<=0;
endmodule


