//verilator lint_off DECLFILENAME
//verilator lint_off UNUSED
`timescale 1 ns / 1 ns

module cf_fft_1024_8 (clock_c, enable_i, reset_i, sync_i, data_0_i, data_1_i, sync_o, data_0_o, data_1_o);
input  clock_c;
input  enable_i;
input  reset_i;
input  sync_i;
input  [15:0] data_0_i;
input  [15:0] data_1_i;
output sync_o;
output [15:0] data_0_o;
output [15:0] data_1_o;
wire   n1;
wire   [15:0] n2;
wire   [15:0] n3;

cf_fft_1024_8_1 s1 (clock_c, sync_i, data_0_i, data_1_i, enable_i, reset_i, n1, n2, n3);
assign sync_o = n1;
assign data_0_o = n2;
assign data_1_o = n3;
endmodule

module cf_fft_1024_8_1 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   s1_1;
wire   [15:0] s1_2;
wire   [15:0] s1_3;
wire   s2_1;
wire   [15:0] s2_2;
wire   [15:0] s2_3;
wire   s3_1;
wire   [15:0] s3_2;
wire   [15:0] s3_3;
wire   s4_1;
wire   [15:0] s4_2;
wire   [15:0] s4_3;
cf_fft_1024_8_23 s1 (clock_c, s3_1, s3_2, s3_3, i4, i5, s1_1, s1_2, s1_3);
cf_fft_1024_8_6 s2 (clock_c, s1_1, s1_2, s1_3, i4, i5, s2_1, s2_2, s2_3);
cf_fft_1024_8_5 s3 (clock_c, s4_1, s4_2, s4_3, i4, i5, s3_1, s3_2, s3_3);
cf_fft_1024_8_2 s4 (clock_c, i1, i2, i3, i4, i5, s4_1, s4_2, s4_3);
assign o3 = s2_3;
assign o2 = s2_2;
assign o1 = s2_1;
endmodule

module cf_fft_1024_8_2 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [31:0] n1;
wire   n2;
wire   n3;
wire   [7:0] n4;
wire   [7:0] n5;
wire   [1:0] n6;
wire   [15:0] n7;
wire   [15:0] n8;
wire   [15:0] n9;
wire   [15:0] n10;
wire   [15:0] n11;
wire   [15:0] n12;
wire   s13_1;
wire   [31:0] s14_1;
wire   s15_1;
wire   s15_2;
wire   [31:0] s15_3;
wire   [8:0] s16_1;
wire   s16_2;
assign n1 = {i2, i3};
assign n2 = s16_1[8];
assign n3 = ~n2;
assign n4 = {s16_1[7],
  s16_1[6],
  s16_1[5],
  s16_1[4],
  s16_1[3],
  s16_1[2],
  s16_1[1],
  s16_1[0]};
assign n5 = {n4[0],
  n4[1],
  n4[2],
  n4[3],
  n4[4],
  n4[5],
  n4[6],
  n4[7]};
assign n6 = {s15_2, s15_1};
assign n7 = {s15_3[31],
  s15_3[30],
  s15_3[29],
  s15_3[28],
  s15_3[27],
  s15_3[26],
  s15_3[25],
  s15_3[24],
  s15_3[23],
  s15_3[22],
  s15_3[21],
  s15_3[20],
  s15_3[19],
  s15_3[18],
  s15_3[17],
  s15_3[16]};
assign n8 = {s15_3[15],
  s15_3[14],
  s15_3[13],
  s15_3[12],
  s15_3[11],
  s15_3[10],
  s15_3[9],
  s15_3[8],
  s15_3[7],
  s15_3[6],
  s15_3[5],
  s15_3[4],
  s15_3[3],
  s15_3[2],
  s15_3[1],
  s15_3[0]};
assign n9 = {s14_1[31],
  s14_1[30],
  s14_1[29],
  s14_1[28],
  s14_1[27],
  s14_1[26],
  s14_1[25],
  s14_1[24],
  s14_1[23],
  s14_1[22],
  s14_1[21],
  s14_1[20],
  s14_1[19],
  s14_1[18],
  s14_1[17],
  s14_1[16]};
assign n10 = {s14_1[15],
  s14_1[14],
  s14_1[13],
  s14_1[12],
  s14_1[11],
  s14_1[10],
  s14_1[9],
  s14_1[8],
  s14_1[7],
  s14_1[6],
  s14_1[5],
  s14_1[4],
  s14_1[3],
  s14_1[2],
  s14_1[1],
  s14_1[0]};
assign n11 = s13_1 ? n8 : n7;
assign n12 = s13_1 ? n10 : n9;
cf_fft_1024_8_33 s13 (clock_c, n6, i4, i5, s13_1);
cf_fft_1024_8_4 s14 (clock_c, s16_2, n1, n2, n5, i4, i5, s14_1);
cf_fft_1024_8_3 s15 (clock_c, s16_2, n1, n3, n5, i4, i5, s15_1, s15_2, s15_3);
cf_fft_1024_8_24 s16 (clock_c, i1, i4, i5, s16_1, s16_2);
assign o3 = n12;
assign o2 = n11;
assign o1 = s15_1;
endmodule

module cf_fft_1024_8_3 (clock_c, i1, i2, i3, i4, i5, i6, o1, o2, o3);
input  clock_c;
input  i1;
input  [31:0] i2;
input  i3;
input  [7:0] i4;
input  i5;
input  i6;
output o1;
output o2;
output [31:0] o3;
wire   [7:0] n1;
wire   [7:0] n2;
reg    [7:0] n3;
wire   n4;
reg    n5;
wire   [7:0] n6;
wire   n7;
wire   n8;
wire   [31:0] n9;
reg    [7:0] n9a;
reg    [31:0] n9m [255:0];
wire   n10;
wire   [31:0] n11;
reg    [7:0] n11a;
reg    [31:0] n11m [255:0];
reg    n12;
wire   [31:0] n13;
wire   n14;
wire   s15_1;
assign n1 = 8'b00000001;
assign n2 = n3 + n1;
initial n3 = 8'b00000000;
always @ (posedge clock_c)
  if (n14 == 1'b1)
    n3 <= 8'b00000000;
  else if (i5 == 1'b1)
    n3 <= n2;
assign n4 = ~s15_1;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i6 == 1'b1)
    n5 <= 1'b0;
  else if (i5 == 1'b1)
    n5 <= i1;
assign n6 = 8'b00000000;
assign n7 = n3 == n6;
assign n8 = i3 & n4;
initial n9a = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1) begin
    if (n8 == 1'b1)
      n9m[i4] <= i2;
    n9a <= n3;
  end
assign n9 = n9m[n9a];
assign n10 = i3 & s15_1;
initial n11a = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1) begin
    if (n10 == 1'b1)
      n11m[i4] <= i2;
    n11a <= n3;
  end
assign n11 = n11m[n11a];
initial n12 = 1'b0;
always @ (posedge clock_c)
  if (i6 == 1'b1)
    n12 <= 1'b0;
  else if (i5 == 1'b1)
    n12 <= n4;
assign n13 = n12 ? n11 : n9;
assign n14 = i1 | i6;
cf_fft_1024_8_30 s15 (clock_c, i1, i5, i6, s15_1);
assign o3 = n13;
assign o2 = n7;
assign o1 = n5;
endmodule

module cf_fft_1024_8_4 (clock_c, i1, i2, i3, i4, i5, i6, o1);
input  clock_c;
input  i1;
input  [31:0] i2;
input  i3;
input  [7:0] i4;
input  i5;
input  i6;
output [31:0] o1;
wire   [7:0] n1;
wire   [7:0] n2;
reg    [7:0] n3;
wire   n4;
wire   n5;
wire   [31:0] n6;
reg    [7:0] n6a;
reg    [31:0] n6m [255:0];
wire   n7;
wire   [31:0] n8;
reg    [7:0] n8a;
reg    [31:0] n8m [255:0];
reg    n9;
wire   [31:0] n10;
wire   n11;
wire   s12_1;
assign n1 = 8'b00000001;
assign n2 = n3 + n1;
initial n3 = 8'b00000000;
always @ (posedge clock_c)
  if (n11 == 1'b1)
    n3 <= 8'b00000000;
  else if (i5 == 1'b1)
    n3 <= n2;
assign n4 = ~s12_1;
assign n5 = i3 & n4;
initial n6a = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1) begin
    if (n5 == 1'b1)
      n6m[i4] <= i2;
    n6a <= n3;
  end
assign n6 = n6m[n6a];
assign n7 = i3 & s12_1;
initial n8a = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1) begin
    if (n7 == 1'b1)
      n8m[i4] <= i2;
    n8a <= n3;
  end
assign n8 = n8m[n8a];
initial n9 = 1'b0;
always @ (posedge clock_c)
  if (i6 == 1'b1)
    n9 <= 1'b0;
  else if (i5 == 1'b1)
    n9 <= n4;
assign n10 = n9 ? n8 : n6;
assign n11 = i1 | i6;
cf_fft_1024_8_30 s12 (clock_c, i1, i5, i6, s12_1);
assign o1 = n10;
endmodule

module cf_fft_1024_8_5 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   [15:0] s25_1;
wire   [15:0] s25_2;
wire   s26_1;
wire   [31:0] s27_1;
wire   s28_1;
wire   s28_2;
wire   [31:0] s28_3;
wire   [8:0] s29_1;
wire   s29_2;
assign n1 = 1'b0;
assign n2 = {s25_1, s25_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s29_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s29_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s28_2, s28_1};
assign n19 = {s28_3[31],
  s28_3[30],
  s28_3[29],
  s28_3[28],
  s28_3[27],
  s28_3[26],
  s28_3[25],
  s28_3[24],
  s28_3[23],
  s28_3[22],
  s28_3[21],
  s28_3[20],
  s28_3[19],
  s28_3[18],
  s28_3[17],
  s28_3[16]};
assign n20 = {s28_3[15],
  s28_3[14],
  s28_3[13],
  s28_3[12],
  s28_3[11],
  s28_3[10],
  s28_3[9],
  s28_3[8],
  s28_3[7],
  s28_3[6],
  s28_3[5],
  s28_3[4],
  s28_3[3],
  s28_3[2],
  s28_3[1],
  s28_3[0]};
assign n21 = {s27_1[31],
  s27_1[30],
  s27_1[29],
  s27_1[28],
  s27_1[27],
  s27_1[26],
  s27_1[25],
  s27_1[24],
  s27_1[23],
  s27_1[22],
  s27_1[21],
  s27_1[20],
  s27_1[19],
  s27_1[18],
  s27_1[17],
  s27_1[16]};
assign n22 = {s27_1[15],
  s27_1[14],
  s27_1[13],
  s27_1[12],
  s27_1[11],
  s27_1[10],
  s27_1[9],
  s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1],
  s27_1[0]};
assign n23 = s26_1 ? n20 : n19;
assign n24 = s26_1 ? n22 : n21;
cf_fft_1024_8_39 s25 (clock_c, i2, i3, n1, i4, i5, s25_1, s25_2);
cf_fft_1024_8_33 s26 (clock_c, n18, i4, i5, s26_1);
cf_fft_1024_8_29 s27 (clock_c, n2, n6, n11, n16, i4, i5, s27_1);
cf_fft_1024_8_28 s28 (clock_c, n2, n6, n11, n17, i4, i5, s28_1, s28_2, s28_3);
cf_fft_1024_8_24 s29 (clock_c, i1, i4, i5, s29_1, s29_2);
assign o3 = n24;
assign o2 = n23;
assign o1 = s28_1;
endmodule

module cf_fft_1024_8_6 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   s1_1;
wire   [15:0] s1_2;
wire   [15:0] s1_3;
wire   s2_1;
wire   [15:0] s2_2;
wire   [15:0] s2_3;
wire   s3_1;
wire   [15:0] s3_2;
wire   [15:0] s3_3;
wire   s4_1;
wire   [15:0] s4_2;
wire   [15:0] s4_3;
wire   s5_1;
wire   [15:0] s5_2;
wire   [15:0] s5_3;
wire   s6_1;
wire   [15:0] s6_2;
wire   [15:0] s6_3;
wire   s7_1;
wire   [15:0] s7_2;
wire   [15:0] s7_3;
wire   s8_1;
wire   [15:0] s8_2;
wire   [15:0] s8_3;
cf_fft_1024_8_21 s1 (clock_c, s2_1, s2_2, s2_3, i4, i5, s1_1, s1_2, s1_3);
cf_fft_1024_8_19 s2 (clock_c, s3_1, s3_2, s3_3, i4, i5, s2_1, s2_2, s2_3);
cf_fft_1024_8_17 s3 (clock_c, s4_1, s4_2, s4_3, i4, i5, s3_1, s3_2, s3_3);
cf_fft_1024_8_15 s4 (clock_c, s5_1, s5_2, s5_3, i4, i5, s4_1, s4_2, s4_3);
cf_fft_1024_8_13 s5 (clock_c, s6_1, s6_2, s6_3, i4, i5, s5_1, s5_2, s5_3);
cf_fft_1024_8_11 s6 (clock_c, s7_1, s7_2, s7_3, i4, i5, s6_1, s6_2, s6_3);
cf_fft_1024_8_9 s7 (clock_c, s8_1, s8_2, s8_3, i4, i5, s7_1, s7_2, s7_3);
cf_fft_1024_8_7 s8 (clock_c, i1, i2, i3, i4, i5, s8_1, s8_2, s8_3);
assign o3 = s1_3;
assign o2 = s1_2;
assign o1 = s1_1;
endmodule

module cf_fft_1024_8_7 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [1:0] n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   [15:0] s25_1;
wire   [15:0] s25_2;
wire   s26_1;
wire   s27_1;
wire   s27_2;
wire   [31:0] s27_3;
wire   [31:0] s28_1;
wire   [8:0] s29_1;
wire   s29_2;
assign n1 = {s29_1[8],
  s29_1[7]};
assign n2 = {s25_1, s25_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s29_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s29_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s27_2, s27_1};
assign n19 = {s27_3[31],
  s27_3[30],
  s27_3[29],
  s27_3[28],
  s27_3[27],
  s27_3[26],
  s27_3[25],
  s27_3[24],
  s27_3[23],
  s27_3[22],
  s27_3[21],
  s27_3[20],
  s27_3[19],
  s27_3[18],
  s27_3[17],
  s27_3[16]};
assign n20 = {s27_3[15],
  s27_3[14],
  s27_3[13],
  s27_3[12],
  s27_3[11],
  s27_3[10],
  s27_3[9],
  s27_3[8],
  s27_3[7],
  s27_3[6],
  s27_3[5],
  s27_3[4],
  s27_3[3],
  s27_3[2],
  s27_3[1],
  s27_3[0]};
assign n21 = {s28_1[31],
  s28_1[30],
  s28_1[29],
  s28_1[28],
  s28_1[27],
  s28_1[26],
  s28_1[25],
  s28_1[24],
  s28_1[23],
  s28_1[22],
  s28_1[21],
  s28_1[20],
  s28_1[19],
  s28_1[18],
  s28_1[17],
  s28_1[16]};
assign n22 = {s28_1[15],
  s28_1[14],
  s28_1[13],
  s28_1[12],
  s28_1[11],
  s28_1[10],
  s28_1[9],
  s28_1[8],
  s28_1[7],
  s28_1[6],
  s28_1[5],
  s28_1[4],
  s28_1[3],
  s28_1[2],
  s28_1[1],
  s28_1[0]};
assign n23 = s26_1 ? n20 : n19;
assign n24 = s26_1 ? n22 : n21;
cf_fft_1024_8_8 s25 (clock_c, i2, i3, n1, i4, i5, s25_1, s25_2);
cf_fft_1024_8_33 s26 (clock_c, n18, i4, i5, s26_1);
cf_fft_1024_8_28 s27 (clock_c, n2, n6, n11, n17, i4, i5, s27_1, s27_2, s27_3);
cf_fft_1024_8_29 s28 (clock_c, n2, n6, n11, n16, i4, i5, s28_1);
cf_fft_1024_8_24 s29 (clock_c, i1, i4, i5, s29_1, s29_2);
assign o3 = n24;
assign o2 = n23;
assign o1 = s27_1;
endmodule

module cf_fft_1024_8_8 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  [1:0] i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      2'b00 : n11 <= 16'b0111111100000000;
      2'b01 : n11 <= 16'b0101101010100101;
      2'b10 : n11 <= 16'b0000000010000000;
      2'b11 : n11 <= 16'b1010010110100101;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule

module cf_fft_1024_8_9 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [2:0] n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   s25_1;
wire   [15:0] s26_1;
wire   [15:0] s26_2;
wire   [8:0] s27_1;
wire   s27_2;
wire   s28_1;
wire   s28_2;
wire   [31:0] s28_3;
wire   [31:0] s29_1;
assign n1 = {s27_1[8],
  s27_1[7],
  s27_1[6]};
assign n2 = {s26_1, s26_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s27_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s27_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s28_2, s28_1};
assign n19 = {s28_3[31],
  s28_3[30],
  s28_3[29],
  s28_3[28],
  s28_3[27],
  s28_3[26],
  s28_3[25],
  s28_3[24],
  s28_3[23],
  s28_3[22],
  s28_3[21],
  s28_3[20],
  s28_3[19],
  s28_3[18],
  s28_3[17],
  s28_3[16]};
assign n20 = {s28_3[15],
  s28_3[14],
  s28_3[13],
  s28_3[12],
  s28_3[11],
  s28_3[10],
  s28_3[9],
  s28_3[8],
  s28_3[7],
  s28_3[6],
  s28_3[5],
  s28_3[4],
  s28_3[3],
  s28_3[2],
  s28_3[1],
  s28_3[0]};
assign n21 = {s29_1[31],
  s29_1[30],
  s29_1[29],
  s29_1[28],
  s29_1[27],
  s29_1[26],
  s29_1[25],
  s29_1[24],
  s29_1[23],
  s29_1[22],
  s29_1[21],
  s29_1[20],
  s29_1[19],
  s29_1[18],
  s29_1[17],
  s29_1[16]};
assign n22 = {s29_1[15],
  s29_1[14],
  s29_1[13],
  s29_1[12],
  s29_1[11],
  s29_1[10],
  s29_1[9],
  s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1],
  s29_1[0]};
assign n23 = s25_1 ? n20 : n19;
assign n24 = s25_1 ? n22 : n21;
cf_fft_1024_8_33 s25 (clock_c, n18, i4, i5, s25_1);
cf_fft_1024_8_10 s26 (clock_c, i2, i3, n1, i4, i5, s26_1, s26_2);
cf_fft_1024_8_24 s27 (clock_c, i1, i4, i5, s27_1, s27_2);
cf_fft_1024_8_28 s28 (clock_c, n2, n6, n11, n17, i4, i5, s28_1, s28_2, s28_3);
cf_fft_1024_8_29 s29 (clock_c, n2, n6, n11, n16, i4, i5, s29_1);
assign o3 = n24;
assign o2 = n23;
assign o1 = s28_1;
endmodule

module cf_fft_1024_8_10 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  [2:0] i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      3'b000 : n11 <= 16'b0111111100000000;
      3'b001 : n11 <= 16'b0111011011001111;
      3'b010 : n11 <= 16'b0101101010100101;
      3'b011 : n11 <= 16'b0011000010001001;
      3'b100 : n11 <= 16'b0000000010000000;
      3'b101 : n11 <= 16'b1100111110001001;
      3'b110 : n11 <= 16'b1010010110100101;
      3'b111 : n11 <= 16'b1000100111001111;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule

module cf_fft_1024_8_11 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [3:0] n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   s25_1;
wire   [15:0] s26_1;
wire   [15:0] s26_2;
wire   [8:0] s27_1;
wire   s27_2;
wire   s28_1;
wire   s28_2;
wire   [31:0] s28_3;
wire   [31:0] s29_1;
assign n1 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5]};
assign n2 = {s26_1, s26_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s27_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s27_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s28_2, s28_1};
assign n19 = {s28_3[31],
  s28_3[30],
  s28_3[29],
  s28_3[28],
  s28_3[27],
  s28_3[26],
  s28_3[25],
  s28_3[24],
  s28_3[23],
  s28_3[22],
  s28_3[21],
  s28_3[20],
  s28_3[19],
  s28_3[18],
  s28_3[17],
  s28_3[16]};
assign n20 = {s28_3[15],
  s28_3[14],
  s28_3[13],
  s28_3[12],
  s28_3[11],
  s28_3[10],
  s28_3[9],
  s28_3[8],
  s28_3[7],
  s28_3[6],
  s28_3[5],
  s28_3[4],
  s28_3[3],
  s28_3[2],
  s28_3[1],
  s28_3[0]};
assign n21 = {s29_1[31],
  s29_1[30],
  s29_1[29],
  s29_1[28],
  s29_1[27],
  s29_1[26],
  s29_1[25],
  s29_1[24],
  s29_1[23],
  s29_1[22],
  s29_1[21],
  s29_1[20],
  s29_1[19],
  s29_1[18],
  s29_1[17],
  s29_1[16]};
assign n22 = {s29_1[15],
  s29_1[14],
  s29_1[13],
  s29_1[12],
  s29_1[11],
  s29_1[10],
  s29_1[9],
  s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1],
  s29_1[0]};
assign n23 = s25_1 ? n20 : n19;
assign n24 = s25_1 ? n22 : n21;
cf_fft_1024_8_33 s25 (clock_c, n18, i4, i5, s25_1);
cf_fft_1024_8_12 s26 (clock_c, i2, i3, n1, i4, i5, s26_1, s26_2);
cf_fft_1024_8_24 s27 (clock_c, i1, i4, i5, s27_1, s27_2);
cf_fft_1024_8_28 s28 (clock_c, n2, n6, n11, n17, i4, i5, s28_1, s28_2, s28_3);
cf_fft_1024_8_29 s29 (clock_c, n2, n6, n11, n16, i4, i5, s29_1);
assign o3 = n24;
assign o2 = n23;
assign o1 = s28_1;
endmodule

module cf_fft_1024_8_12 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  [3:0] i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      4'b0000 : n11 <= 16'b0111111100000000;
      4'b0001 : n11 <= 16'b0111110111100111;
      4'b0010 : n11 <= 16'b0111011011001111;
      4'b0011 : n11 <= 16'b0110101010111000;
      4'b0100 : n11 <= 16'b0101101010100101;
      4'b0101 : n11 <= 16'b0100011110010101;
      4'b0110 : n11 <= 16'b0011000010001001;
      4'b0111 : n11 <= 16'b0001100010000010;
      4'b1000 : n11 <= 16'b0000000010000000;
      4'b1001 : n11 <= 16'b1110011110000010;
      4'b1010 : n11 <= 16'b1100111110001001;
      4'b1011 : n11 <= 16'b1011100010010101;
      4'b1100 : n11 <= 16'b1010010110100101;
      4'b1101 : n11 <= 16'b1001010110111000;
      4'b1110 : n11 <= 16'b1000100111001111;
      4'b1111 : n11 <= 16'b1000001011100111;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule

module cf_fft_1024_8_13 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [4:0] n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   s25_1;
wire   [15:0] s26_1;
wire   [15:0] s26_2;
wire   [8:0] s27_1;
wire   s27_2;
wire   s28_1;
wire   s28_2;
wire   [31:0] s28_3;
wire   [31:0] s29_1;
assign n1 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4]};
assign n2 = {s26_1, s26_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s27_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s27_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s28_2, s28_1};
assign n19 = {s28_3[31],
  s28_3[30],
  s28_3[29],
  s28_3[28],
  s28_3[27],
  s28_3[26],
  s28_3[25],
  s28_3[24],
  s28_3[23],
  s28_3[22],
  s28_3[21],
  s28_3[20],
  s28_3[19],
  s28_3[18],
  s28_3[17],
  s28_3[16]};
assign n20 = {s28_3[15],
  s28_3[14],
  s28_3[13],
  s28_3[12],
  s28_3[11],
  s28_3[10],
  s28_3[9],
  s28_3[8],
  s28_3[7],
  s28_3[6],
  s28_3[5],
  s28_3[4],
  s28_3[3],
  s28_3[2],
  s28_3[1],
  s28_3[0]};
assign n21 = {s29_1[31],
  s29_1[30],
  s29_1[29],
  s29_1[28],
  s29_1[27],
  s29_1[26],
  s29_1[25],
  s29_1[24],
  s29_1[23],
  s29_1[22],
  s29_1[21],
  s29_1[20],
  s29_1[19],
  s29_1[18],
  s29_1[17],
  s29_1[16]};
assign n22 = {s29_1[15],
  s29_1[14],
  s29_1[13],
  s29_1[12],
  s29_1[11],
  s29_1[10],
  s29_1[9],
  s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1],
  s29_1[0]};
assign n23 = s25_1 ? n20 : n19;
assign n24 = s25_1 ? n22 : n21;
cf_fft_1024_8_33 s25 (clock_c, n18, i4, i5, s25_1);
cf_fft_1024_8_14 s26 (clock_c, i2, i3, n1, i4, i5, s26_1, s26_2);
cf_fft_1024_8_24 s27 (clock_c, i1, i4, i5, s27_1, s27_2);
cf_fft_1024_8_28 s28 (clock_c, n2, n6, n11, n17, i4, i5, s28_1, s28_2, s28_3);
cf_fft_1024_8_29 s29 (clock_c, n2, n6, n11, n16, i4, i5, s29_1);
assign o3 = n24;
assign o2 = n23;
assign o1 = s28_1;
endmodule

module cf_fft_1024_8_14 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  [4:0] i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      5'b00000 : n11 <= 16'b0111111100000000;
      5'b00001 : n11 <= 16'b0111111111110011;
      5'b00010 : n11 <= 16'b0111110111100111;
      5'b00011 : n11 <= 16'b0111101011011010;
      5'b00100 : n11 <= 16'b0111011011001111;
      5'b00101 : n11 <= 16'b0111000011000011;
      5'b00110 : n11 <= 16'b0110101010111000;
      5'b00111 : n11 <= 16'b0110001010101110;
      5'b01000 : n11 <= 16'b0101101010100101;
      5'b01001 : n11 <= 16'b0101000110011101;
      5'b01010 : n11 <= 16'b0100011110010101;
      5'b01011 : n11 <= 16'b0011110010001111;
      5'b01100 : n11 <= 16'b0011000010001001;
      5'b01101 : n11 <= 16'b0010010110000101;
      5'b01110 : n11 <= 16'b0001100010000010;
      5'b01111 : n11 <= 16'b0000110010000000;
      5'b10000 : n11 <= 16'b0000000010000000;
      5'b10001 : n11 <= 16'b1111001110000000;
      5'b10010 : n11 <= 16'b1110011110000010;
      5'b10011 : n11 <= 16'b1101101010000101;
      5'b10100 : n11 <= 16'b1100111110001001;
      5'b10101 : n11 <= 16'b1100001110001111;
      5'b10110 : n11 <= 16'b1011100010010101;
      5'b10111 : n11 <= 16'b1010111010011101;
      5'b11000 : n11 <= 16'b1010010110100101;
      5'b11001 : n11 <= 16'b1001110110101110;
      5'b11010 : n11 <= 16'b1001010110111000;
      5'b11011 : n11 <= 16'b1000111111000011;
      5'b11100 : n11 <= 16'b1000100111001111;
      5'b11101 : n11 <= 16'b1000010111011010;
      5'b11110 : n11 <= 16'b1000001011100111;
      5'b11111 : n11 <= 16'b1000000011110011;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule

module cf_fft_1024_8_15 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [5:0] n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   s25_1;
wire   [15:0] s26_1;
wire   [15:0] s26_2;
wire   [8:0] s27_1;
wire   s27_2;
wire   s28_1;
wire   s28_2;
wire   [31:0] s28_3;
wire   [31:0] s29_1;
assign n1 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3]};
assign n2 = {s26_1, s26_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s27_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s27_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s28_2, s28_1};
assign n19 = {s28_3[31],
  s28_3[30],
  s28_3[29],
  s28_3[28],
  s28_3[27],
  s28_3[26],
  s28_3[25],
  s28_3[24],
  s28_3[23],
  s28_3[22],
  s28_3[21],
  s28_3[20],
  s28_3[19],
  s28_3[18],
  s28_3[17],
  s28_3[16]};
assign n20 = {s28_3[15],
  s28_3[14],
  s28_3[13],
  s28_3[12],
  s28_3[11],
  s28_3[10],
  s28_3[9],
  s28_3[8],
  s28_3[7],
  s28_3[6],
  s28_3[5],
  s28_3[4],
  s28_3[3],
  s28_3[2],
  s28_3[1],
  s28_3[0]};
assign n21 = {s29_1[31],
  s29_1[30],
  s29_1[29],
  s29_1[28],
  s29_1[27],
  s29_1[26],
  s29_1[25],
  s29_1[24],
  s29_1[23],
  s29_1[22],
  s29_1[21],
  s29_1[20],
  s29_1[19],
  s29_1[18],
  s29_1[17],
  s29_1[16]};
assign n22 = {s29_1[15],
  s29_1[14],
  s29_1[13],
  s29_1[12],
  s29_1[11],
  s29_1[10],
  s29_1[9],
  s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1],
  s29_1[0]};
assign n23 = s25_1 ? n20 : n19;
assign n24 = s25_1 ? n22 : n21;
cf_fft_1024_8_33 s25 (clock_c, n18, i4, i5, s25_1);
cf_fft_1024_8_16 s26 (clock_c, i2, i3, n1, i4, i5, s26_1, s26_2);
cf_fft_1024_8_24 s27 (clock_c, i1, i4, i5, s27_1, s27_2);
cf_fft_1024_8_28 s28 (clock_c, n2, n6, n11, n17, i4, i5, s28_1, s28_2, s28_3);
cf_fft_1024_8_29 s29 (clock_c, n2, n6, n11, n16, i4, i5, s29_1);
assign o3 = n24;
assign o2 = n23;
assign o1 = s28_1;
endmodule

module cf_fft_1024_8_16 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  [5:0] i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      6'b000000 : n11 <= 16'b0111111100000000;
      6'b000001 : n11 <= 16'b0111111111111001;
      6'b000010 : n11 <= 16'b0111111111110011;
      6'b000011 : n11 <= 16'b0111111011101101;
      6'b000100 : n11 <= 16'b0111110111100111;
      6'b000101 : n11 <= 16'b0111110011100000;
      6'b000110 : n11 <= 16'b0111101011011010;
      6'b000111 : n11 <= 16'b0111100011010100;
      6'b001000 : n11 <= 16'b0111011011001111;
      6'b001001 : n11 <= 16'b0111001111001001;
      6'b001010 : n11 <= 16'b0111000011000011;
      6'b001011 : n11 <= 16'b0110110110111110;
      6'b001100 : n11 <= 16'b0110101010111000;
      6'b001101 : n11 <= 16'b0110011010110011;
      6'b001110 : n11 <= 16'b0110001010101110;
      6'b001111 : n11 <= 16'b0101111010101010;
      6'b010000 : n11 <= 16'b0101101010100101;
      6'b010001 : n11 <= 16'b0101010110100001;
      6'b010010 : n11 <= 16'b0101000110011101;
      6'b010011 : n11 <= 16'b0100110010011001;
      6'b010100 : n11 <= 16'b0100011110010101;
      6'b010101 : n11 <= 16'b0100000110010010;
      6'b010110 : n11 <= 16'b0011110010001111;
      6'b010111 : n11 <= 16'b0011011010001100;
      6'b011000 : n11 <= 16'b0011000010001001;
      6'b011001 : n11 <= 16'b0010101110000111;
      6'b011010 : n11 <= 16'b0010010110000101;
      6'b011011 : n11 <= 16'b0001111110000011;
      6'b011100 : n11 <= 16'b0001100010000010;
      6'b011101 : n11 <= 16'b0001001010000001;
      6'b011110 : n11 <= 16'b0000110010000000;
      6'b011111 : n11 <= 16'b0000011010000000;
      6'b100000 : n11 <= 16'b0000000010000000;
      6'b100001 : n11 <= 16'b1111100110000000;
      6'b100010 : n11 <= 16'b1111001110000000;
      6'b100011 : n11 <= 16'b1110110110000001;
      6'b100100 : n11 <= 16'b1110011110000010;
      6'b100101 : n11 <= 16'b1110000010000011;
      6'b100110 : n11 <= 16'b1101101010000101;
      6'b100111 : n11 <= 16'b1101010010000111;
      6'b101000 : n11 <= 16'b1100111110001001;
      6'b101001 : n11 <= 16'b1100100110001100;
      6'b101010 : n11 <= 16'b1100001110001111;
      6'b101011 : n11 <= 16'b1011111010010010;
      6'b101100 : n11 <= 16'b1011100010010101;
      6'b101101 : n11 <= 16'b1011001110011001;
      6'b101110 : n11 <= 16'b1010111010011101;
      6'b101111 : n11 <= 16'b1010101010100001;
      6'b110000 : n11 <= 16'b1010010110100101;
      6'b110001 : n11 <= 16'b1010000110101010;
      6'b110010 : n11 <= 16'b1001110110101110;
      6'b110011 : n11 <= 16'b1001100110110011;
      6'b110100 : n11 <= 16'b1001010110111000;
      6'b110101 : n11 <= 16'b1001001010111110;
      6'b110110 : n11 <= 16'b1000111111000011;
      6'b110111 : n11 <= 16'b1000110011001001;
      6'b111000 : n11 <= 16'b1000100111001111;
      6'b111001 : n11 <= 16'b1000011111010100;
      6'b111010 : n11 <= 16'b1000010111011010;
      6'b111011 : n11 <= 16'b1000001111100000;
      6'b111100 : n11 <= 16'b1000001011100111;
      6'b111101 : n11 <= 16'b1000000111101101;
      6'b111110 : n11 <= 16'b1000000011110011;
      6'b111111 : n11 <= 16'b1000000011111001;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule

module cf_fft_1024_8_17 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [6:0] n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   [15:0] s25_1;
wire   [15:0] s25_2;
wire   s26_1;
wire   [8:0] s27_1;
wire   s27_2;
wire   [31:0] s28_1;
wire   s29_1;
wire   s29_2;
wire   [31:0] s29_3;
assign n1 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2]};
assign n2 = {s25_1, s25_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s27_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s27_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s29_2, s29_1};
assign n19 = {s29_3[31],
  s29_3[30],
  s29_3[29],
  s29_3[28],
  s29_3[27],
  s29_3[26],
  s29_3[25],
  s29_3[24],
  s29_3[23],
  s29_3[22],
  s29_3[21],
  s29_3[20],
  s29_3[19],
  s29_3[18],
  s29_3[17],
  s29_3[16]};
assign n20 = {s29_3[15],
  s29_3[14],
  s29_3[13],
  s29_3[12],
  s29_3[11],
  s29_3[10],
  s29_3[9],
  s29_3[8],
  s29_3[7],
  s29_3[6],
  s29_3[5],
  s29_3[4],
  s29_3[3],
  s29_3[2],
  s29_3[1],
  s29_3[0]};
assign n21 = {s28_1[31],
  s28_1[30],
  s28_1[29],
  s28_1[28],
  s28_1[27],
  s28_1[26],
  s28_1[25],
  s28_1[24],
  s28_1[23],
  s28_1[22],
  s28_1[21],
  s28_1[20],
  s28_1[19],
  s28_1[18],
  s28_1[17],
  s28_1[16]};
assign n22 = {s28_1[15],
  s28_1[14],
  s28_1[13],
  s28_1[12],
  s28_1[11],
  s28_1[10],
  s28_1[9],
  s28_1[8],
  s28_1[7],
  s28_1[6],
  s28_1[5],
  s28_1[4],
  s28_1[3],
  s28_1[2],
  s28_1[1],
  s28_1[0]};
assign n23 = s26_1 ? n20 : n19;
assign n24 = s26_1 ? n22 : n21;
cf_fft_1024_8_18 s25 (clock_c, i2, i3, n1, i4, i5, s25_1, s25_2);
cf_fft_1024_8_33 s26 (clock_c, n18, i4, i5, s26_1);
cf_fft_1024_8_24 s27 (clock_c, i1, i4, i5, s27_1, s27_2);
cf_fft_1024_8_29 s28 (clock_c, n2, n6, n11, n16, i4, i5, s28_1);
cf_fft_1024_8_28 s29 (clock_c, n2, n6, n11, n17, i4, i5, s29_1, s29_2, s29_3);
assign o3 = n24;
assign o2 = n23;
assign o1 = s29_1;
endmodule

module cf_fft_1024_8_18 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  [6:0] i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      7'b0000000 : n11 <= 16'b0111111100000000;
      7'b0000001 : n11 <= 16'b0111111111111100;
      7'b0000010 : n11 <= 16'b0111111111111001;
      7'b0000011 : n11 <= 16'b0111111111110110;
      7'b0000100 : n11 <= 16'b0111111111110011;
      7'b0000101 : n11 <= 16'b0111111111110000;
      7'b0000110 : n11 <= 16'b0111111011101101;
      7'b0000111 : n11 <= 16'b0111111011101010;
      7'b0001000 : n11 <= 16'b0111110111100111;
      7'b0001001 : n11 <= 16'b0111110011100011;
      7'b0001010 : n11 <= 16'b0111110011100000;
      7'b0001011 : n11 <= 16'b0111101111011101;
      7'b0001100 : n11 <= 16'b0111101011011010;
      7'b0001101 : n11 <= 16'b0111100111010111;
      7'b0001110 : n11 <= 16'b0111100011010100;
      7'b0001111 : n11 <= 16'b0111011111010001;
      7'b0010000 : n11 <= 16'b0111011011001111;
      7'b0010001 : n11 <= 16'b0111010111001100;
      7'b0010010 : n11 <= 16'b0111001111001001;
      7'b0010011 : n11 <= 16'b0111001011000110;
      7'b0010100 : n11 <= 16'b0111000011000011;
      7'b0010101 : n11 <= 16'b0110111111000000;
      7'b0010110 : n11 <= 16'b0110110110111110;
      7'b0010111 : n11 <= 16'b0110110010111011;
      7'b0011000 : n11 <= 16'b0110101010111000;
      7'b0011001 : n11 <= 16'b0110100010110110;
      7'b0011010 : n11 <= 16'b0110011010110011;
      7'b0011011 : n11 <= 16'b0110010010110001;
      7'b0011100 : n11 <= 16'b0110001010101110;
      7'b0011101 : n11 <= 16'b0110000010101100;
      7'b0011110 : n11 <= 16'b0101111010101010;
      7'b0011111 : n11 <= 16'b0101110010100111;
      7'b0100000 : n11 <= 16'b0101101010100101;
      7'b0100001 : n11 <= 16'b0101100010100011;
      7'b0100010 : n11 <= 16'b0101010110100001;
      7'b0100011 : n11 <= 16'b0101001110011111;
      7'b0100100 : n11 <= 16'b0101000110011101;
      7'b0100101 : n11 <= 16'b0100111010011011;
      7'b0100110 : n11 <= 16'b0100110010011001;
      7'b0100111 : n11 <= 16'b0100100110010111;
      7'b0101000 : n11 <= 16'b0100011110010101;
      7'b0101001 : n11 <= 16'b0100010010010011;
      7'b0101010 : n11 <= 16'b0100000110010010;
      7'b0101011 : n11 <= 16'b0011111110010000;
      7'b0101100 : n11 <= 16'b0011110010001111;
      7'b0101101 : n11 <= 16'b0011100110001101;
      7'b0101110 : n11 <= 16'b0011011010001100;
      7'b0101111 : n11 <= 16'b0011001110001010;
      7'b0110000 : n11 <= 16'b0011000010001001;
      7'b0110001 : n11 <= 16'b0010111010001000;
      7'b0110010 : n11 <= 16'b0010101110000111;
      7'b0110011 : n11 <= 16'b0010100010000110;
      7'b0110100 : n11 <= 16'b0010010110000101;
      7'b0110101 : n11 <= 16'b0010001010000100;
      7'b0110110 : n11 <= 16'b0001111110000011;
      7'b0110111 : n11 <= 16'b0001110010000011;
      7'b0111000 : n11 <= 16'b0001100010000010;
      7'b0111001 : n11 <= 16'b0001010110000001;
      7'b0111010 : n11 <= 16'b0001001010000001;
      7'b0111011 : n11 <= 16'b0000111110000000;
      7'b0111100 : n11 <= 16'b0000110010000000;
      7'b0111101 : n11 <= 16'b0000100110000000;
      7'b0111110 : n11 <= 16'b0000011010000000;
      7'b0111111 : n11 <= 16'b0000001110000000;
      7'b1000000 : n11 <= 16'b0000000010000000;
      7'b1000001 : n11 <= 16'b1111110010000000;
      7'b1000010 : n11 <= 16'b1111100110000000;
      7'b1000011 : n11 <= 16'b1111011010000000;
      7'b1000100 : n11 <= 16'b1111001110000000;
      7'b1000101 : n11 <= 16'b1111000010000000;
      7'b1000110 : n11 <= 16'b1110110110000001;
      7'b1000111 : n11 <= 16'b1110101010000001;
      7'b1001000 : n11 <= 16'b1110011110000010;
      7'b1001001 : n11 <= 16'b1110001110000011;
      7'b1001010 : n11 <= 16'b1110000010000011;
      7'b1001011 : n11 <= 16'b1101110110000100;
      7'b1001100 : n11 <= 16'b1101101010000101;
      7'b1001101 : n11 <= 16'b1101011110000110;
      7'b1001110 : n11 <= 16'b1101010010000111;
      7'b1001111 : n11 <= 16'b1101000110001000;
      7'b1010000 : n11 <= 16'b1100111110001001;
      7'b1010001 : n11 <= 16'b1100110010001010;
      7'b1010010 : n11 <= 16'b1100100110001100;
      7'b1010011 : n11 <= 16'b1100011010001101;
      7'b1010100 : n11 <= 16'b1100001110001111;
      7'b1010101 : n11 <= 16'b1100000010010000;
      7'b1010110 : n11 <= 16'b1011111010010010;
      7'b1010111 : n11 <= 16'b1011101110010011;
      7'b1011000 : n11 <= 16'b1011100010010101;
      7'b1011001 : n11 <= 16'b1011011010010111;
      7'b1011010 : n11 <= 16'b1011001110011001;
      7'b1011011 : n11 <= 16'b1011000110011011;
      7'b1011100 : n11 <= 16'b1010111010011101;
      7'b1011101 : n11 <= 16'b1010110010011111;
      7'b1011110 : n11 <= 16'b1010101010100001;
      7'b1011111 : n11 <= 16'b1010011110100011;
      7'b1100000 : n11 <= 16'b1010010110100101;
      7'b1100001 : n11 <= 16'b1010001110100111;
      7'b1100010 : n11 <= 16'b1010000110101010;
      7'b1100011 : n11 <= 16'b1001111110101100;
      7'b1100100 : n11 <= 16'b1001110110101110;
      7'b1100101 : n11 <= 16'b1001101110110001;
      7'b1100110 : n11 <= 16'b1001100110110011;
      7'b1100111 : n11 <= 16'b1001011110110110;
      7'b1101000 : n11 <= 16'b1001010110111000;
      7'b1101001 : n11 <= 16'b1001001110111011;
      7'b1101010 : n11 <= 16'b1001001010111110;
      7'b1101011 : n11 <= 16'b1001000011000000;
      7'b1101100 : n11 <= 16'b1000111111000011;
      7'b1101101 : n11 <= 16'b1000110111000110;
      7'b1101110 : n11 <= 16'b1000110011001001;
      7'b1101111 : n11 <= 16'b1000101011001100;
      7'b1110000 : n11 <= 16'b1000100111001111;
      7'b1110001 : n11 <= 16'b1000100011010001;
      7'b1110010 : n11 <= 16'b1000011111010100;
      7'b1110011 : n11 <= 16'b1000011011010111;
      7'b1110100 : n11 <= 16'b1000010111011010;
      7'b1110101 : n11 <= 16'b1000010011011101;
      7'b1110110 : n11 <= 16'b1000001111100000;
      7'b1110111 : n11 <= 16'b1000001111100011;
      7'b1111000 : n11 <= 16'b1000001011100111;
      7'b1111001 : n11 <= 16'b1000000111101010;
      7'b1111010 : n11 <= 16'b1000000111101101;
      7'b1111011 : n11 <= 16'b1000000011110000;
      7'b1111100 : n11 <= 16'b1000000011110011;
      7'b1111101 : n11 <= 16'b1000000011110110;
      7'b1111110 : n11 <= 16'b1000000011111001;
      7'b1111111 : n11 <= 16'b1000000011111100;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule

module cf_fft_1024_8_19 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [7:0] n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   [15:0] s25_1;
wire   [15:0] s25_2;
wire   s26_1;
wire   [31:0] s27_1;
wire   s28_1;
wire   s28_2;
wire   [31:0] s28_3;
wire   [8:0] s29_1;
wire   s29_2;
assign n1 = {s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1]};
assign n2 = {s25_1, s25_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s29_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s29_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s28_2, s28_1};
assign n19 = {s28_3[31],
  s28_3[30],
  s28_3[29],
  s28_3[28],
  s28_3[27],
  s28_3[26],
  s28_3[25],
  s28_3[24],
  s28_3[23],
  s28_3[22],
  s28_3[21],
  s28_3[20],
  s28_3[19],
  s28_3[18],
  s28_3[17],
  s28_3[16]};
assign n20 = {s28_3[15],
  s28_3[14],
  s28_3[13],
  s28_3[12],
  s28_3[11],
  s28_3[10],
  s28_3[9],
  s28_3[8],
  s28_3[7],
  s28_3[6],
  s28_3[5],
  s28_3[4],
  s28_3[3],
  s28_3[2],
  s28_3[1],
  s28_3[0]};
assign n21 = {s27_1[31],
  s27_1[30],
  s27_1[29],
  s27_1[28],
  s27_1[27],
  s27_1[26],
  s27_1[25],
  s27_1[24],
  s27_1[23],
  s27_1[22],
  s27_1[21],
  s27_1[20],
  s27_1[19],
  s27_1[18],
  s27_1[17],
  s27_1[16]};
assign n22 = {s27_1[15],
  s27_1[14],
  s27_1[13],
  s27_1[12],
  s27_1[11],
  s27_1[10],
  s27_1[9],
  s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1],
  s27_1[0]};
assign n23 = s26_1 ? n20 : n19;
assign n24 = s26_1 ? n22 : n21;
cf_fft_1024_8_20 s25 (clock_c, i2, i3, n1, i4, i5, s25_1, s25_2);
cf_fft_1024_8_33 s26 (clock_c, n18, i4, i5, s26_1);
cf_fft_1024_8_29 s27 (clock_c, n2, n6, n11, n16, i4, i5, s27_1);
cf_fft_1024_8_28 s28 (clock_c, n2, n6, n11, n17, i4, i5, s28_1, s28_2, s28_3);
cf_fft_1024_8_24 s29 (clock_c, i1, i4, i5, s29_1, s29_2);
assign o3 = n24;
assign o2 = n23;
assign o1 = s28_1;
endmodule

module cf_fft_1024_8_20 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  [7:0] i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      8'b00000000 : n11 <= 16'b0111111100000000;
      8'b00000001 : n11 <= 16'b0111111111111110;
      8'b00000010 : n11 <= 16'b0111111111111100;
      8'b00000011 : n11 <= 16'b0111111111111011;
      8'b00000100 : n11 <= 16'b0111111111111001;
      8'b00000101 : n11 <= 16'b0111111111111000;
      8'b00000110 : n11 <= 16'b0111111111110110;
      8'b00000111 : n11 <= 16'b0111111111110101;
      8'b00001000 : n11 <= 16'b0111111111110011;
      8'b00001001 : n11 <= 16'b0111111111110001;
      8'b00001010 : n11 <= 16'b0111111111110000;
      8'b00001011 : n11 <= 16'b0111111011101110;
      8'b00001100 : n11 <= 16'b0111111011101101;
      8'b00001101 : n11 <= 16'b0111111011101011;
      8'b00001110 : n11 <= 16'b0111111011101010;
      8'b00001111 : n11 <= 16'b0111110111101000;
      8'b00010000 : n11 <= 16'b0111110111100111;
      8'b00010001 : n11 <= 16'b0111110111100101;
      8'b00010010 : n11 <= 16'b0111110011100011;
      8'b00010011 : n11 <= 16'b0111110011100010;
      8'b00010100 : n11 <= 16'b0111110011100000;
      8'b00010101 : n11 <= 16'b0111101111011111;
      8'b00010110 : n11 <= 16'b0111101111011101;
      8'b00010111 : n11 <= 16'b0111101011011100;
      8'b00011000 : n11 <= 16'b0111101011011010;
      8'b00011001 : n11 <= 16'b0111101011011001;
      8'b00011010 : n11 <= 16'b0111100111010111;
      8'b00011011 : n11 <= 16'b0111100111010110;
      8'b00011100 : n11 <= 16'b0111100011010100;
      8'b00011101 : n11 <= 16'b0111011111010011;
      8'b00011110 : n11 <= 16'b0111011111010001;
      8'b00011111 : n11 <= 16'b0111011011010000;
      8'b00100000 : n11 <= 16'b0111011011001111;
      8'b00100001 : n11 <= 16'b0111010111001101;
      8'b00100010 : n11 <= 16'b0111010111001100;
      8'b00100011 : n11 <= 16'b0111010011001010;
      8'b00100100 : n11 <= 16'b0111001111001001;
      8'b00100101 : n11 <= 16'b0111001111000111;
      8'b00100110 : n11 <= 16'b0111001011000110;
      8'b00100111 : n11 <= 16'b0111000111000101;
      8'b00101000 : n11 <= 16'b0111000011000011;
      8'b00101001 : n11 <= 16'b0111000011000010;
      8'b00101010 : n11 <= 16'b0110111111000000;
      8'b00101011 : n11 <= 16'b0110111010111111;
      8'b00101100 : n11 <= 16'b0110110110111110;
      8'b00101101 : n11 <= 16'b0110110010111100;
      8'b00101110 : n11 <= 16'b0110110010111011;
      8'b00101111 : n11 <= 16'b0110101110111010;
      8'b00110000 : n11 <= 16'b0110101010111000;
      8'b00110001 : n11 <= 16'b0110100110110111;
      8'b00110010 : n11 <= 16'b0110100010110110;
      8'b00110011 : n11 <= 16'b0110011110110101;
      8'b00110100 : n11 <= 16'b0110011010110011;
      8'b00110101 : n11 <= 16'b0110010110110010;
      8'b00110110 : n11 <= 16'b0110010010110001;
      8'b00110111 : n11 <= 16'b0110001110110000;
      8'b00111000 : n11 <= 16'b0110001010101110;
      8'b00111001 : n11 <= 16'b0110000110101101;
      8'b00111010 : n11 <= 16'b0110000010101100;
      8'b00111011 : n11 <= 16'b0101111110101011;
      8'b00111100 : n11 <= 16'b0101111010101010;
      8'b00111101 : n11 <= 16'b0101110110101000;
      8'b00111110 : n11 <= 16'b0101110010100111;
      8'b00111111 : n11 <= 16'b0101101110100110;
      8'b01000000 : n11 <= 16'b0101101010100101;
      8'b01000001 : n11 <= 16'b0101100110100100;
      8'b01000010 : n11 <= 16'b0101100010100011;
      8'b01000011 : n11 <= 16'b0101011110100010;
      8'b01000100 : n11 <= 16'b0101010110100001;
      8'b01000101 : n11 <= 16'b0101010010100000;
      8'b01000110 : n11 <= 16'b0101001110011111;
      8'b01000111 : n11 <= 16'b0101001010011110;
      8'b01001000 : n11 <= 16'b0101000110011101;
      8'b01001001 : n11 <= 16'b0100111110011100;
      8'b01001010 : n11 <= 16'b0100111010011011;
      8'b01001011 : n11 <= 16'b0100110110011010;
      8'b01001100 : n11 <= 16'b0100110010011001;
      8'b01001101 : n11 <= 16'b0100101010011000;
      8'b01001110 : n11 <= 16'b0100100110010111;
      8'b01001111 : n11 <= 16'b0100100010010110;
      8'b01010000 : n11 <= 16'b0100011110010101;
      8'b01010001 : n11 <= 16'b0100010110010100;
      8'b01010010 : n11 <= 16'b0100010010010011;
      8'b01010011 : n11 <= 16'b0100001110010011;
      8'b01010100 : n11 <= 16'b0100000110010010;
      8'b01010101 : n11 <= 16'b0100000010010001;
      8'b01010110 : n11 <= 16'b0011111110010000;
      8'b01010111 : n11 <= 16'b0011110110001111;
      8'b01011000 : n11 <= 16'b0011110010001111;
      8'b01011001 : n11 <= 16'b0011101010001110;
      8'b01011010 : n11 <= 16'b0011100110001101;
      8'b01011011 : n11 <= 16'b0011100010001100;
      8'b01011100 : n11 <= 16'b0011011010001100;
      8'b01011101 : n11 <= 16'b0011010110001011;
      8'b01011110 : n11 <= 16'b0011001110001010;
      8'b01011111 : n11 <= 16'b0011001010001010;
      8'b01100000 : n11 <= 16'b0011000010001001;
      8'b01100001 : n11 <= 16'b0010111110001001;
      8'b01100010 : n11 <= 16'b0010111010001000;
      8'b01100011 : n11 <= 16'b0010110010001000;
      8'b01100100 : n11 <= 16'b0010101110000111;
      8'b01100101 : n11 <= 16'b0010100110000110;
      8'b01100110 : n11 <= 16'b0010100010000110;
      8'b01100111 : n11 <= 16'b0010011010000101;
      8'b01101000 : n11 <= 16'b0010010110000101;
      8'b01101001 : n11 <= 16'b0010001110000101;
      8'b01101010 : n11 <= 16'b0010001010000100;
      8'b01101011 : n11 <= 16'b0010000010000100;
      8'b01101100 : n11 <= 16'b0001111110000011;
      8'b01101101 : n11 <= 16'b0001110110000011;
      8'b01101110 : n11 <= 16'b0001110010000011;
      8'b01101111 : n11 <= 16'b0001101010000010;
      8'b01110000 : n11 <= 16'b0001100010000010;
      8'b01110001 : n11 <= 16'b0001011110000010;
      8'b01110010 : n11 <= 16'b0001010110000001;
      8'b01110011 : n11 <= 16'b0001010010000001;
      8'b01110100 : n11 <= 16'b0001001010000001;
      8'b01110101 : n11 <= 16'b0001000110000001;
      8'b01110110 : n11 <= 16'b0000111110000000;
      8'b01110111 : n11 <= 16'b0000111010000000;
      8'b01111000 : n11 <= 16'b0000110010000000;
      8'b01111001 : n11 <= 16'b0000101010000000;
      8'b01111010 : n11 <= 16'b0000100110000000;
      8'b01111011 : n11 <= 16'b0000011110000000;
      8'b01111100 : n11 <= 16'b0000011010000000;
      8'b01111101 : n11 <= 16'b0000010010000000;
      8'b01111110 : n11 <= 16'b0000001110000000;
      8'b01111111 : n11 <= 16'b0000000110000000;
      8'b10000000 : n11 <= 16'b0000000010000000;
      8'b10000001 : n11 <= 16'b1111111010000000;
      8'b10000010 : n11 <= 16'b1111110010000000;
      8'b10000011 : n11 <= 16'b1111101110000000;
      8'b10000100 : n11 <= 16'b1111100110000000;
      8'b10000101 : n11 <= 16'b1111100010000000;
      8'b10000110 : n11 <= 16'b1111011010000000;
      8'b10000111 : n11 <= 16'b1111010110000000;
      8'b10001000 : n11 <= 16'b1111001110000000;
      8'b10001001 : n11 <= 16'b1111000110000000;
      8'b10001010 : n11 <= 16'b1111000010000000;
      8'b10001011 : n11 <= 16'b1110111010000001;
      8'b10001100 : n11 <= 16'b1110110110000001;
      8'b10001101 : n11 <= 16'b1110101110000001;
      8'b10001110 : n11 <= 16'b1110101010000001;
      8'b10001111 : n11 <= 16'b1110100010000010;
      8'b10010000 : n11 <= 16'b1110011110000010;
      8'b10010001 : n11 <= 16'b1110010110000010;
      8'b10010010 : n11 <= 16'b1110001110000011;
      8'b10010011 : n11 <= 16'b1110001010000011;
      8'b10010100 : n11 <= 16'b1110000010000011;
      8'b10010101 : n11 <= 16'b1101111110000100;
      8'b10010110 : n11 <= 16'b1101110110000100;
      8'b10010111 : n11 <= 16'b1101110010000101;
      8'b10011000 : n11 <= 16'b1101101010000101;
      8'b10011001 : n11 <= 16'b1101100110000101;
      8'b10011010 : n11 <= 16'b1101011110000110;
      8'b10011011 : n11 <= 16'b1101011010000110;
      8'b10011100 : n11 <= 16'b1101010010000111;
      8'b10011101 : n11 <= 16'b1101001110001000;
      8'b10011110 : n11 <= 16'b1101000110001000;
      8'b10011111 : n11 <= 16'b1101000010001001;
      8'b10100000 : n11 <= 16'b1100111110001001;
      8'b10100001 : n11 <= 16'b1100110110001010;
      8'b10100010 : n11 <= 16'b1100110010001010;
      8'b10100011 : n11 <= 16'b1100101010001011;
      8'b10100100 : n11 <= 16'b1100100110001100;
      8'b10100101 : n11 <= 16'b1100011110001100;
      8'b10100110 : n11 <= 16'b1100011010001101;
      8'b10100111 : n11 <= 16'b1100010110001110;
      8'b10101000 : n11 <= 16'b1100001110001111;
      8'b10101001 : n11 <= 16'b1100001010001111;
      8'b10101010 : n11 <= 16'b1100000010010000;
      8'b10101011 : n11 <= 16'b1011111110010001;
      8'b10101100 : n11 <= 16'b1011111010010010;
      8'b10101101 : n11 <= 16'b1011110010010011;
      8'b10101110 : n11 <= 16'b1011101110010011;
      8'b10101111 : n11 <= 16'b1011101010010100;
      8'b10110000 : n11 <= 16'b1011100010010101;
      8'b10110001 : n11 <= 16'b1011011110010110;
      8'b10110010 : n11 <= 16'b1011011010010111;
      8'b10110011 : n11 <= 16'b1011010110011000;
      8'b10110100 : n11 <= 16'b1011001110011001;
      8'b10110101 : n11 <= 16'b1011001010011010;
      8'b10110110 : n11 <= 16'b1011000110011011;
      8'b10110111 : n11 <= 16'b1011000010011100;
      8'b10111000 : n11 <= 16'b1010111010011101;
      8'b10111001 : n11 <= 16'b1010110110011110;
      8'b10111010 : n11 <= 16'b1010110010011111;
      8'b10111011 : n11 <= 16'b1010101110100000;
      8'b10111100 : n11 <= 16'b1010101010100001;
      8'b10111101 : n11 <= 16'b1010100010100010;
      8'b10111110 : n11 <= 16'b1010011110100011;
      8'b10111111 : n11 <= 16'b1010011010100100;
      8'b11000000 : n11 <= 16'b1010010110100101;
      8'b11000001 : n11 <= 16'b1010010010100110;
      8'b11000010 : n11 <= 16'b1010001110100111;
      8'b11000011 : n11 <= 16'b1010001010101000;
      8'b11000100 : n11 <= 16'b1010000110101010;
      8'b11000101 : n11 <= 16'b1010000010101011;
      8'b11000110 : n11 <= 16'b1001111110101100;
      8'b11000111 : n11 <= 16'b1001111010101101;
      8'b11001000 : n11 <= 16'b1001110110101110;
      8'b11001001 : n11 <= 16'b1001110010110000;
      8'b11001010 : n11 <= 16'b1001101110110001;
      8'b11001011 : n11 <= 16'b1001101010110010;
      8'b11001100 : n11 <= 16'b1001100110110011;
      8'b11001101 : n11 <= 16'b1001100010110101;
      8'b11001110 : n11 <= 16'b1001011110110110;
      8'b11001111 : n11 <= 16'b1001011010110111;
      8'b11010000 : n11 <= 16'b1001010110111000;
      8'b11010001 : n11 <= 16'b1001010010111010;
      8'b11010010 : n11 <= 16'b1001001110111011;
      8'b11010011 : n11 <= 16'b1001001110111100;
      8'b11010100 : n11 <= 16'b1001001010111110;
      8'b11010101 : n11 <= 16'b1001000110111111;
      8'b11010110 : n11 <= 16'b1001000011000000;
      8'b11010111 : n11 <= 16'b1000111111000010;
      8'b11011000 : n11 <= 16'b1000111111000011;
      8'b11011001 : n11 <= 16'b1000111011000101;
      8'b11011010 : n11 <= 16'b1000110111000110;
      8'b11011011 : n11 <= 16'b1000110011000111;
      8'b11011100 : n11 <= 16'b1000110011001001;
      8'b11011101 : n11 <= 16'b1000101111001010;
      8'b11011110 : n11 <= 16'b1000101011001100;
      8'b11011111 : n11 <= 16'b1000101011001101;
      8'b11100000 : n11 <= 16'b1000100111001111;
      8'b11100001 : n11 <= 16'b1000100111010000;
      8'b11100010 : n11 <= 16'b1000100011010001;
      8'b11100011 : n11 <= 16'b1000100011010011;
      8'b11100100 : n11 <= 16'b1000011111010100;
      8'b11100101 : n11 <= 16'b1000011011010110;
      8'b11100110 : n11 <= 16'b1000011011010111;
      8'b11100111 : n11 <= 16'b1000010111011001;
      8'b11101000 : n11 <= 16'b1000010111011010;
      8'b11101001 : n11 <= 16'b1000010111011100;
      8'b11101010 : n11 <= 16'b1000010011011101;
      8'b11101011 : n11 <= 16'b1000010011011111;
      8'b11101100 : n11 <= 16'b1000001111100000;
      8'b11101101 : n11 <= 16'b1000001111100010;
      8'b11101110 : n11 <= 16'b1000001111100011;
      8'b11101111 : n11 <= 16'b1000001011100101;
      8'b11110000 : n11 <= 16'b1000001011100111;
      8'b11110001 : n11 <= 16'b1000001011101000;
      8'b11110010 : n11 <= 16'b1000000111101010;
      8'b11110011 : n11 <= 16'b1000000111101011;
      8'b11110100 : n11 <= 16'b1000000111101101;
      8'b11110101 : n11 <= 16'b1000000111101110;
      8'b11110110 : n11 <= 16'b1000000011110000;
      8'b11110111 : n11 <= 16'b1000000011110001;
      8'b11111000 : n11 <= 16'b1000000011110011;
      8'b11111001 : n11 <= 16'b1000000011110101;
      8'b11111010 : n11 <= 16'b1000000011110110;
      8'b11111011 : n11 <= 16'b1000000011111000;
      8'b11111100 : n11 <= 16'b1000000011111001;
      8'b11111101 : n11 <= 16'b1000000011111011;
      8'b11111110 : n11 <= 16'b1000000011111100;
      8'b11111111 : n11 <= 16'b1000000011111110;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule

module cf_fft_1024_8_21 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   [8:0] n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   [15:0] s25_1;
wire   [15:0] s25_2;
wire   s26_1;
wire   [31:0] s27_1;
wire   s28_1;
wire   s28_2;
wire   [31:0] s28_3;
wire   [8:0] s29_1;
wire   s29_2;
assign n1 = {s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1],
  s29_1[0]};
assign n2 = {s25_1, s25_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s29_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s29_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s28_2, s28_1};
assign n19 = {s28_3[31],
  s28_3[30],
  s28_3[29],
  s28_3[28],
  s28_3[27],
  s28_3[26],
  s28_3[25],
  s28_3[24],
  s28_3[23],
  s28_3[22],
  s28_3[21],
  s28_3[20],
  s28_3[19],
  s28_3[18],
  s28_3[17],
  s28_3[16]};
assign n20 = {s28_3[15],
  s28_3[14],
  s28_3[13],
  s28_3[12],
  s28_3[11],
  s28_3[10],
  s28_3[9],
  s28_3[8],
  s28_3[7],
  s28_3[6],
  s28_3[5],
  s28_3[4],
  s28_3[3],
  s28_3[2],
  s28_3[1],
  s28_3[0]};
assign n21 = {s27_1[31],
  s27_1[30],
  s27_1[29],
  s27_1[28],
  s27_1[27],
  s27_1[26],
  s27_1[25],
  s27_1[24],
  s27_1[23],
  s27_1[22],
  s27_1[21],
  s27_1[20],
  s27_1[19],
  s27_1[18],
  s27_1[17],
  s27_1[16]};
assign n22 = {s27_1[15],
  s27_1[14],
  s27_1[13],
  s27_1[12],
  s27_1[11],
  s27_1[10],
  s27_1[9],
  s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1],
  s27_1[0]};
assign n23 = s26_1 ? n20 : n19;
assign n24 = s26_1 ? n22 : n21;
cf_fft_1024_8_22 s25 (clock_c, i2, i3, n1, i4, i5, s25_1, s25_2);
cf_fft_1024_8_33 s26 (clock_c, n18, i4, i5, s26_1);
cf_fft_1024_8_29 s27 (clock_c, n2, n6, n11, n16, i4, i5, s27_1);
cf_fft_1024_8_28 s28 (clock_c, n2, n6, n11, n17, i4, i5, s28_1, s28_2, s28_3);
cf_fft_1024_8_24 s29 (clock_c, i1, i4, i5, s29_1, s29_2);
assign o3 = n24;
assign o2 = n23;
assign o1 = s28_1;
endmodule

module cf_fft_1024_8_22 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  [8:0] i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      9'b000000000 : n11 <= 16'b0111111100000000;
      9'b000000001 : n11 <= 16'b0111111111111111;
      9'b000000010 : n11 <= 16'b0111111111111110;
      9'b000000011 : n11 <= 16'b0111111111111101;
      9'b000000100 : n11 <= 16'b0111111111111100;
      9'b000000101 : n11 <= 16'b0111111111111100;
      9'b000000110 : n11 <= 16'b0111111111111011;
      9'b000000111 : n11 <= 16'b0111111111111010;
      9'b000001000 : n11 <= 16'b0111111111111001;
      9'b000001001 : n11 <= 16'b0111111111111000;
      9'b000001010 : n11 <= 16'b0111111111111000;
      9'b000001011 : n11 <= 16'b0111111111110111;
      9'b000001100 : n11 <= 16'b0111111111110110;
      9'b000001101 : n11 <= 16'b0111111111110101;
      9'b000001110 : n11 <= 16'b0111111111110101;
      9'b000001111 : n11 <= 16'b0111111111110100;
      9'b000010000 : n11 <= 16'b0111111111110011;
      9'b000010001 : n11 <= 16'b0111111111110010;
      9'b000010010 : n11 <= 16'b0111111111110001;
      9'b000010011 : n11 <= 16'b0111111111110001;
      9'b000010100 : n11 <= 16'b0111111111110000;
      9'b000010101 : n11 <= 16'b0111111011101111;
      9'b000010110 : n11 <= 16'b0111111011101110;
      9'b000010111 : n11 <= 16'b0111111011101101;
      9'b000011000 : n11 <= 16'b0111111011101101;
      9'b000011001 : n11 <= 16'b0111111011101100;
      9'b000011010 : n11 <= 16'b0111111011101011;
      9'b000011011 : n11 <= 16'b0111111011101010;
      9'b000011100 : n11 <= 16'b0111111011101010;
      9'b000011101 : n11 <= 16'b0111110111101001;
      9'b000011110 : n11 <= 16'b0111110111101000;
      9'b000011111 : n11 <= 16'b0111110111100111;
      9'b000100000 : n11 <= 16'b0111110111100111;
      9'b000100001 : n11 <= 16'b0111110111100110;
      9'b000100010 : n11 <= 16'b0111110111100101;
      9'b000100011 : n11 <= 16'b0111110111100100;
      9'b000100100 : n11 <= 16'b0111110011100011;
      9'b000100101 : n11 <= 16'b0111110011100011;
      9'b000100110 : n11 <= 16'b0111110011100010;
      9'b000100111 : n11 <= 16'b0111110011100001;
      9'b000101000 : n11 <= 16'b0111110011100000;
      9'b000101001 : n11 <= 16'b0111101111100000;
      9'b000101010 : n11 <= 16'b0111101111011111;
      9'b000101011 : n11 <= 16'b0111101111011110;
      9'b000101100 : n11 <= 16'b0111101111011101;
      9'b000101101 : n11 <= 16'b0111101111011101;
      9'b000101110 : n11 <= 16'b0111101011011100;
      9'b000101111 : n11 <= 16'b0111101011011011;
      9'b000110000 : n11 <= 16'b0111101011011010;
      9'b000110001 : n11 <= 16'b0111101011011010;
      9'b000110010 : n11 <= 16'b0111101011011001;
      9'b000110011 : n11 <= 16'b0111100111011000;
      9'b000110100 : n11 <= 16'b0111100111010111;
      9'b000110101 : n11 <= 16'b0111100111010111;
      9'b000110110 : n11 <= 16'b0111100111010110;
      9'b000110111 : n11 <= 16'b0111100011010101;
      9'b000111000 : n11 <= 16'b0111100011010100;
      9'b000111001 : n11 <= 16'b0111100011010100;
      9'b000111010 : n11 <= 16'b0111011111010011;
      9'b000111011 : n11 <= 16'b0111011111010010;
      9'b000111100 : n11 <= 16'b0111011111010001;
      9'b000111101 : n11 <= 16'b0111011111010001;
      9'b000111110 : n11 <= 16'b0111011011010000;
      9'b000111111 : n11 <= 16'b0111011011001111;
      9'b001000000 : n11 <= 16'b0111011011001111;
      9'b001000001 : n11 <= 16'b0111010111001110;
      9'b001000010 : n11 <= 16'b0111010111001101;
      9'b001000011 : n11 <= 16'b0111010111001100;
      9'b001000100 : n11 <= 16'b0111010111001100;
      9'b001000101 : n11 <= 16'b0111010011001011;
      9'b001000110 : n11 <= 16'b0111010011001010;
      9'b001000111 : n11 <= 16'b0111010011001001;
      9'b001001000 : n11 <= 16'b0111001111001001;
      9'b001001001 : n11 <= 16'b0111001111001000;
      9'b001001010 : n11 <= 16'b0111001111000111;
      9'b001001011 : n11 <= 16'b0111001011000111;
      9'b001001100 : n11 <= 16'b0111001011000110;
      9'b001001101 : n11 <= 16'b0111000111000101;
      9'b001001110 : n11 <= 16'b0111000111000101;
      9'b001001111 : n11 <= 16'b0111000111000100;
      9'b001010000 : n11 <= 16'b0111000011000011;
      9'b001010001 : n11 <= 16'b0111000011000010;
      9'b001010010 : n11 <= 16'b0111000011000010;
      9'b001010011 : n11 <= 16'b0110111111000001;
      9'b001010100 : n11 <= 16'b0110111111000000;
      9'b001010101 : n11 <= 16'b0110111011000000;
      9'b001010110 : n11 <= 16'b0110111010111111;
      9'b001010111 : n11 <= 16'b0110111010111110;
      9'b001011000 : n11 <= 16'b0110110110111110;
      9'b001011001 : n11 <= 16'b0110110110111101;
      9'b001011010 : n11 <= 16'b0110110010111100;
      9'b001011011 : n11 <= 16'b0110110010111100;
      9'b001011100 : n11 <= 16'b0110110010111011;
      9'b001011101 : n11 <= 16'b0110101110111010;
      9'b001011110 : n11 <= 16'b0110101110111010;
      9'b001011111 : n11 <= 16'b0110101010111001;
      9'b001100000 : n11 <= 16'b0110101010111000;
      9'b001100001 : n11 <= 16'b0110100110111000;
      9'b001100010 : n11 <= 16'b0110100110110111;
      9'b001100011 : n11 <= 16'b0110100110110110;
      9'b001100100 : n11 <= 16'b0110100010110110;
      9'b001100101 : n11 <= 16'b0110100010110101;
      9'b001100110 : n11 <= 16'b0110011110110101;
      9'b001100111 : n11 <= 16'b0110011110110100;
      9'b001101000 : n11 <= 16'b0110011010110011;
      9'b001101001 : n11 <= 16'b0110011010110011;
      9'b001101010 : n11 <= 16'b0110010110110010;
      9'b001101011 : n11 <= 16'b0110010110110001;
      9'b001101100 : n11 <= 16'b0110010010110001;
      9'b001101101 : n11 <= 16'b0110010010110000;
      9'b001101110 : n11 <= 16'b0110001110110000;
      9'b001101111 : n11 <= 16'b0110001110101111;
      9'b001110000 : n11 <= 16'b0110001010101110;
      9'b001110001 : n11 <= 16'b0110001010101110;
      9'b001110010 : n11 <= 16'b0110000110101101;
      9'b001110011 : n11 <= 16'b0110000110101100;
      9'b001110100 : n11 <= 16'b0110000010101100;
      9'b001110101 : n11 <= 16'b0110000010101011;
      9'b001110110 : n11 <= 16'b0101111110101011;
      9'b001110111 : n11 <= 16'b0101111110101010;
      9'b001111000 : n11 <= 16'b0101111010101010;
      9'b001111001 : n11 <= 16'b0101111010101001;
      9'b001111010 : n11 <= 16'b0101110110101000;
      9'b001111011 : n11 <= 16'b0101110110101000;
      9'b001111100 : n11 <= 16'b0101110010100111;
      9'b001111101 : n11 <= 16'b0101110010100111;
      9'b001111110 : n11 <= 16'b0101101110100110;
      9'b001111111 : n11 <= 16'b0101101110100110;
      9'b010000000 : n11 <= 16'b0101101010100101;
      9'b010000001 : n11 <= 16'b0101100110100100;
      9'b010000010 : n11 <= 16'b0101100110100100;
      9'b010000011 : n11 <= 16'b0101100010100011;
      9'b010000100 : n11 <= 16'b0101100010100011;
      9'b010000101 : n11 <= 16'b0101011110100010;
      9'b010000110 : n11 <= 16'b0101011110100010;
      9'b010000111 : n11 <= 16'b0101011010100001;
      9'b010001000 : n11 <= 16'b0101010110100001;
      9'b010001001 : n11 <= 16'b0101010110100000;
      9'b010001010 : n11 <= 16'b0101010010100000;
      9'b010001011 : n11 <= 16'b0101010010011111;
      9'b010001100 : n11 <= 16'b0101001110011111;
      9'b010001101 : n11 <= 16'b0101001110011110;
      9'b010001110 : n11 <= 16'b0101001010011110;
      9'b010001111 : n11 <= 16'b0101000110011101;
      9'b010010000 : n11 <= 16'b0101000110011101;
      9'b010010001 : n11 <= 16'b0101000010011100;
      9'b010010010 : n11 <= 16'b0100111110011100;
      9'b010010011 : n11 <= 16'b0100111110011011;
      9'b010010100 : n11 <= 16'b0100111010011011;
      9'b010010101 : n11 <= 16'b0100111010011010;
      9'b010010110 : n11 <= 16'b0100110110011010;
      9'b010010111 : n11 <= 16'b0100110010011001;
      9'b010011000 : n11 <= 16'b0100110010011001;
      9'b010011001 : n11 <= 16'b0100101110011000;
      9'b010011010 : n11 <= 16'b0100101010011000;
      9'b010011011 : n11 <= 16'b0100101010010111;
      9'b010011100 : n11 <= 16'b0100100110010111;
      9'b010011101 : n11 <= 16'b0100100110010110;
      9'b010011110 : n11 <= 16'b0100100010010110;
      9'b010011111 : n11 <= 16'b0100011110010110;
      9'b010100000 : n11 <= 16'b0100011110010101;
      9'b010100001 : n11 <= 16'b0100011010010101;
      9'b010100010 : n11 <= 16'b0100010110010100;
      9'b010100011 : n11 <= 16'b0100010110010100;
      9'b010100100 : n11 <= 16'b0100010010010011;
      9'b010100101 : n11 <= 16'b0100001110010011;
      9'b010100110 : n11 <= 16'b0100001110010011;
      9'b010100111 : n11 <= 16'b0100001010010010;
      9'b010101000 : n11 <= 16'b0100000110010010;
      9'b010101001 : n11 <= 16'b0100000110010001;
      9'b010101010 : n11 <= 16'b0100000010010001;
      9'b010101011 : n11 <= 16'b0011111110010001;
      9'b010101100 : n11 <= 16'b0011111110010000;
      9'b010101101 : n11 <= 16'b0011111010010000;
      9'b010101110 : n11 <= 16'b0011110110001111;
      9'b010101111 : n11 <= 16'b0011110110001111;
      9'b010110000 : n11 <= 16'b0011110010001111;
      9'b010110001 : n11 <= 16'b0011101110001110;
      9'b010110010 : n11 <= 16'b0011101010001110;
      9'b010110011 : n11 <= 16'b0011101010001110;
      9'b010110100 : n11 <= 16'b0011100110001101;
      9'b010110101 : n11 <= 16'b0011100010001101;
      9'b010110110 : n11 <= 16'b0011100010001100;
      9'b010110111 : n11 <= 16'b0011011110001100;
      9'b010111000 : n11 <= 16'b0011011010001100;
      9'b010111001 : n11 <= 16'b0011011010001011;
      9'b010111010 : n11 <= 16'b0011010110001011;
      9'b010111011 : n11 <= 16'b0011010010001011;
      9'b010111100 : n11 <= 16'b0011001110001010;
      9'b010111101 : n11 <= 16'b0011001110001010;
      9'b010111110 : n11 <= 16'b0011001010001010;
      9'b010111111 : n11 <= 16'b0011000110001010;
      9'b011000000 : n11 <= 16'b0011000010001001;
      9'b011000001 : n11 <= 16'b0011000010001001;
      9'b011000010 : n11 <= 16'b0010111110001001;
      9'b011000011 : n11 <= 16'b0010111010001000;
      9'b011000100 : n11 <= 16'b0010111010001000;
      9'b011000101 : n11 <= 16'b0010110110001000;
      9'b011000110 : n11 <= 16'b0010110010001000;
      9'b011000111 : n11 <= 16'b0010101110000111;
      9'b011001000 : n11 <= 16'b0010101110000111;
      9'b011001001 : n11 <= 16'b0010101010000111;
      9'b011001010 : n11 <= 16'b0010100110000110;
      9'b011001011 : n11 <= 16'b0010100010000110;
      9'b011001100 : n11 <= 16'b0010100010000110;
      9'b011001101 : n11 <= 16'b0010011110000110;
      9'b011001110 : n11 <= 16'b0010011010000101;
      9'b011001111 : n11 <= 16'b0010010110000101;
      9'b011010000 : n11 <= 16'b0010010110000101;
      9'b011010001 : n11 <= 16'b0010010010000101;
      9'b011010010 : n11 <= 16'b0010001110000101;
      9'b011010011 : n11 <= 16'b0010001010000100;
      9'b011010100 : n11 <= 16'b0010001010000100;
      9'b011010101 : n11 <= 16'b0010000110000100;
      9'b011010110 : n11 <= 16'b0010000010000100;
      9'b011010111 : n11 <= 16'b0001111110000100;
      9'b011011000 : n11 <= 16'b0001111110000011;
      9'b011011001 : n11 <= 16'b0001111010000011;
      9'b011011010 : n11 <= 16'b0001110110000011;
      9'b011011011 : n11 <= 16'b0001110010000011;
      9'b011011100 : n11 <= 16'b0001110010000011;
      9'b011011101 : n11 <= 16'b0001101110000010;
      9'b011011110 : n11 <= 16'b0001101010000010;
      9'b011011111 : n11 <= 16'b0001100110000010;
      9'b011100000 : n11 <= 16'b0001100010000010;
      9'b011100001 : n11 <= 16'b0001100010000010;
      9'b011100010 : n11 <= 16'b0001011110000010;
      9'b011100011 : n11 <= 16'b0001011010000010;
      9'b011100100 : n11 <= 16'b0001010110000001;
      9'b011100101 : n11 <= 16'b0001010110000001;
      9'b011100110 : n11 <= 16'b0001010010000001;
      9'b011100111 : n11 <= 16'b0001001110000001;
      9'b011101000 : n11 <= 16'b0001001010000001;
      9'b011101001 : n11 <= 16'b0001001010000001;
      9'b011101010 : n11 <= 16'b0001000110000001;
      9'b011101011 : n11 <= 16'b0001000010000001;
      9'b011101100 : n11 <= 16'b0000111110000000;
      9'b011101101 : n11 <= 16'b0000111010000000;
      9'b011101110 : n11 <= 16'b0000111010000000;
      9'b011101111 : n11 <= 16'b0000110110000000;
      9'b011110000 : n11 <= 16'b0000110010000000;
      9'b011110001 : n11 <= 16'b0000101110000000;
      9'b011110010 : n11 <= 16'b0000101010000000;
      9'b011110011 : n11 <= 16'b0000101010000000;
      9'b011110100 : n11 <= 16'b0000100110000000;
      9'b011110101 : n11 <= 16'b0000100010000000;
      9'b011110110 : n11 <= 16'b0000011110000000;
      9'b011110111 : n11 <= 16'b0000011110000000;
      9'b011111000 : n11 <= 16'b0000011010000000;
      9'b011111001 : n11 <= 16'b0000010110000000;
      9'b011111010 : n11 <= 16'b0000010010000000;
      9'b011111011 : n11 <= 16'b0000001110000000;
      9'b011111100 : n11 <= 16'b0000001110000000;
      9'b011111101 : n11 <= 16'b0000001010000000;
      9'b011111110 : n11 <= 16'b0000000110000000;
      9'b011111111 : n11 <= 16'b0000000010000000;
      9'b100000000 : n11 <= 16'b0000000010000000;
      9'b100000001 : n11 <= 16'b1111111110000000;
      9'b100000010 : n11 <= 16'b1111111010000000;
      9'b100000011 : n11 <= 16'b1111110110000000;
      9'b100000100 : n11 <= 16'b1111110010000000;
      9'b100000101 : n11 <= 16'b1111110010000000;
      9'b100000110 : n11 <= 16'b1111101110000000;
      9'b100000111 : n11 <= 16'b1111101010000000;
      9'b100001000 : n11 <= 16'b1111100110000000;
      9'b100001001 : n11 <= 16'b1111100010000000;
      9'b100001010 : n11 <= 16'b1111100010000000;
      9'b100001011 : n11 <= 16'b1111011110000000;
      9'b100001100 : n11 <= 16'b1111011010000000;
      9'b100001101 : n11 <= 16'b1111010110000000;
      9'b100001110 : n11 <= 16'b1111010110000000;
      9'b100001111 : n11 <= 16'b1111010010000000;
      9'b100010000 : n11 <= 16'b1111001110000000;
      9'b100010001 : n11 <= 16'b1111001010000000;
      9'b100010010 : n11 <= 16'b1111000110000000;
      9'b100010011 : n11 <= 16'b1111000110000000;
      9'b100010100 : n11 <= 16'b1111000010000000;
      9'b100010101 : n11 <= 16'b1110111110000001;
      9'b100010110 : n11 <= 16'b1110111010000001;
      9'b100010111 : n11 <= 16'b1110110110000001;
      9'b100011000 : n11 <= 16'b1110110110000001;
      9'b100011001 : n11 <= 16'b1110110010000001;
      9'b100011010 : n11 <= 16'b1110101110000001;
      9'b100011011 : n11 <= 16'b1110101010000001;
      9'b100011100 : n11 <= 16'b1110101010000001;
      9'b100011101 : n11 <= 16'b1110100110000010;
      9'b100011110 : n11 <= 16'b1110100010000010;
      9'b100011111 : n11 <= 16'b1110011110000010;
      9'b100100000 : n11 <= 16'b1110011110000010;
      9'b100100001 : n11 <= 16'b1110011010000010;
      9'b100100010 : n11 <= 16'b1110010110000010;
      9'b100100011 : n11 <= 16'b1110010010000010;
      9'b100100100 : n11 <= 16'b1110001110000011;
      9'b100100101 : n11 <= 16'b1110001110000011;
      9'b100100110 : n11 <= 16'b1110001010000011;
      9'b100100111 : n11 <= 16'b1110000110000011;
      9'b100101000 : n11 <= 16'b1110000010000011;
      9'b100101001 : n11 <= 16'b1110000010000100;
      9'b100101010 : n11 <= 16'b1101111110000100;
      9'b100101011 : n11 <= 16'b1101111010000100;
      9'b100101100 : n11 <= 16'b1101110110000100;
      9'b100101101 : n11 <= 16'b1101110110000100;
      9'b100101110 : n11 <= 16'b1101110010000101;
      9'b100101111 : n11 <= 16'b1101101110000101;
      9'b100110000 : n11 <= 16'b1101101010000101;
      9'b100110001 : n11 <= 16'b1101101010000101;
      9'b100110010 : n11 <= 16'b1101100110000101;
      9'b100110011 : n11 <= 16'b1101100010000110;
      9'b100110100 : n11 <= 16'b1101011110000110;
      9'b100110101 : n11 <= 16'b1101011110000110;
      9'b100110110 : n11 <= 16'b1101011010000110;
      9'b100110111 : n11 <= 16'b1101010110000111;
      9'b100111000 : n11 <= 16'b1101010010000111;
      9'b100111001 : n11 <= 16'b1101010010000111;
      9'b100111010 : n11 <= 16'b1101001110001000;
      9'b100111011 : n11 <= 16'b1101001010001000;
      9'b100111100 : n11 <= 16'b1101000110001000;
      9'b100111101 : n11 <= 16'b1101000110001000;
      9'b100111110 : n11 <= 16'b1101000010001001;
      9'b100111111 : n11 <= 16'b1100111110001001;
      9'b101000000 : n11 <= 16'b1100111110001001;
      9'b101000001 : n11 <= 16'b1100111010001010;
      9'b101000010 : n11 <= 16'b1100110110001010;
      9'b101000011 : n11 <= 16'b1100110010001010;
      9'b101000100 : n11 <= 16'b1100110010001010;
      9'b101000101 : n11 <= 16'b1100101110001011;
      9'b101000110 : n11 <= 16'b1100101010001011;
      9'b101000111 : n11 <= 16'b1100100110001011;
      9'b101001000 : n11 <= 16'b1100100110001100;
      9'b101001001 : n11 <= 16'b1100100010001100;
      9'b101001010 : n11 <= 16'b1100011110001100;
      9'b101001011 : n11 <= 16'b1100011110001101;
      9'b101001100 : n11 <= 16'b1100011010001101;
      9'b101001101 : n11 <= 16'b1100010110001110;
      9'b101001110 : n11 <= 16'b1100010110001110;
      9'b101001111 : n11 <= 16'b1100010010001110;
      9'b101010000 : n11 <= 16'b1100001110001111;
      9'b101010001 : n11 <= 16'b1100001010001111;
      9'b101010010 : n11 <= 16'b1100001010001111;
      9'b101010011 : n11 <= 16'b1100000110010000;
      9'b101010100 : n11 <= 16'b1100000010010000;
      9'b101010101 : n11 <= 16'b1100000010010001;
      9'b101010110 : n11 <= 16'b1011111110010001;
      9'b101010111 : n11 <= 16'b1011111010010001;
      9'b101011000 : n11 <= 16'b1011111010010010;
      9'b101011001 : n11 <= 16'b1011110110010010;
      9'b101011010 : n11 <= 16'b1011110010010011;
      9'b101011011 : n11 <= 16'b1011110010010011;
      9'b101011100 : n11 <= 16'b1011101110010011;
      9'b101011101 : n11 <= 16'b1011101010010100;
      9'b101011110 : n11 <= 16'b1011101010010100;
      9'b101011111 : n11 <= 16'b1011100110010101;
      9'b101100000 : n11 <= 16'b1011100010010101;
      9'b101100001 : n11 <= 16'b1011100010010110;
      9'b101100010 : n11 <= 16'b1011011110010110;
      9'b101100011 : n11 <= 16'b1011011010010110;
      9'b101100100 : n11 <= 16'b1011011010010111;
      9'b101100101 : n11 <= 16'b1011010110010111;
      9'b101100110 : n11 <= 16'b1011010110011000;
      9'b101100111 : n11 <= 16'b1011010010011000;
      9'b101101000 : n11 <= 16'b1011001110011001;
      9'b101101001 : n11 <= 16'b1011001110011001;
      9'b101101010 : n11 <= 16'b1011001010011010;
      9'b101101011 : n11 <= 16'b1011000110011010;
      9'b101101100 : n11 <= 16'b1011000110011011;
      9'b101101101 : n11 <= 16'b1011000010011011;
      9'b101101110 : n11 <= 16'b1011000010011100;
      9'b101101111 : n11 <= 16'b1010111110011100;
      9'b101110000 : n11 <= 16'b1010111010011101;
      9'b101110001 : n11 <= 16'b1010111010011101;
      9'b101110010 : n11 <= 16'b1010110110011110;
      9'b101110011 : n11 <= 16'b1010110010011110;
      9'b101110100 : n11 <= 16'b1010110010011111;
      9'b101110101 : n11 <= 16'b1010101110011111;
      9'b101110110 : n11 <= 16'b1010101110100000;
      9'b101110111 : n11 <= 16'b1010101010100000;
      9'b101111000 : n11 <= 16'b1010101010100001;
      9'b101111001 : n11 <= 16'b1010100110100001;
      9'b101111010 : n11 <= 16'b1010100010100010;
      9'b101111011 : n11 <= 16'b1010100010100010;
      9'b101111100 : n11 <= 16'b1010011110100011;
      9'b101111101 : n11 <= 16'b1010011110100011;
      9'b101111110 : n11 <= 16'b1010011010100100;
      9'b101111111 : n11 <= 16'b1010011010100100;
      9'b110000000 : n11 <= 16'b1010010110100101;
      9'b110000001 : n11 <= 16'b1010010010100110;
      9'b110000010 : n11 <= 16'b1010010010100110;
      9'b110000011 : n11 <= 16'b1010001110100111;
      9'b110000100 : n11 <= 16'b1010001110100111;
      9'b110000101 : n11 <= 16'b1010001010101000;
      9'b110000110 : n11 <= 16'b1010001010101000;
      9'b110000111 : n11 <= 16'b1010000110101001;
      9'b110001000 : n11 <= 16'b1010000110101010;
      9'b110001001 : n11 <= 16'b1010000010101010;
      9'b110001010 : n11 <= 16'b1010000010101011;
      9'b110001011 : n11 <= 16'b1001111110101011;
      9'b110001100 : n11 <= 16'b1001111110101100;
      9'b110001101 : n11 <= 16'b1001111010101100;
      9'b110001110 : n11 <= 16'b1001111010101101;
      9'b110001111 : n11 <= 16'b1001110110101110;
      9'b110010000 : n11 <= 16'b1001110110101110;
      9'b110010001 : n11 <= 16'b1001110010101111;
      9'b110010010 : n11 <= 16'b1001110010110000;
      9'b110010011 : n11 <= 16'b1001101110110000;
      9'b110010100 : n11 <= 16'b1001101110110001;
      9'b110010101 : n11 <= 16'b1001101010110001;
      9'b110010110 : n11 <= 16'b1001101010110010;
      9'b110010111 : n11 <= 16'b1001100110110011;
      9'b110011000 : n11 <= 16'b1001100110110011;
      9'b110011001 : n11 <= 16'b1001100010110100;
      9'b110011010 : n11 <= 16'b1001100010110101;
      9'b110011011 : n11 <= 16'b1001011110110101;
      9'b110011100 : n11 <= 16'b1001011110110110;
      9'b110011101 : n11 <= 16'b1001011010110110;
      9'b110011110 : n11 <= 16'b1001011010110111;
      9'b110011111 : n11 <= 16'b1001011010111000;
      9'b110100000 : n11 <= 16'b1001010110111000;
      9'b110100001 : n11 <= 16'b1001010110111001;
      9'b110100010 : n11 <= 16'b1001010010111010;
      9'b110100011 : n11 <= 16'b1001010010111010;
      9'b110100100 : n11 <= 16'b1001001110111011;
      9'b110100101 : n11 <= 16'b1001001110111100;
      9'b110100110 : n11 <= 16'b1001001110111100;
      9'b110100111 : n11 <= 16'b1001001010111101;
      9'b110101000 : n11 <= 16'b1001001010111110;
      9'b110101001 : n11 <= 16'b1001000110111110;
      9'b110101010 : n11 <= 16'b1001000110111111;
      9'b110101011 : n11 <= 16'b1001000111000000;
      9'b110101100 : n11 <= 16'b1001000011000000;
      9'b110101101 : n11 <= 16'b1001000011000001;
      9'b110101110 : n11 <= 16'b1000111111000010;
      9'b110101111 : n11 <= 16'b1000111111000010;
      9'b110110000 : n11 <= 16'b1000111111000011;
      9'b110110001 : n11 <= 16'b1000111011000100;
      9'b110110010 : n11 <= 16'b1000111011000101;
      9'b110110011 : n11 <= 16'b1000111011000101;
      9'b110110100 : n11 <= 16'b1000110111000110;
      9'b110110101 : n11 <= 16'b1000110111000111;
      9'b110110110 : n11 <= 16'b1000110011000111;
      9'b110110111 : n11 <= 16'b1000110011001000;
      9'b110111000 : n11 <= 16'b1000110011001001;
      9'b110111001 : n11 <= 16'b1000101111001001;
      9'b110111010 : n11 <= 16'b1000101111001010;
      9'b110111011 : n11 <= 16'b1000101111001011;
      9'b110111100 : n11 <= 16'b1000101011001100;
      9'b110111101 : n11 <= 16'b1000101011001100;
      9'b110111110 : n11 <= 16'b1000101011001101;
      9'b110111111 : n11 <= 16'b1000101011001110;
      9'b111000000 : n11 <= 16'b1000100111001111;
      9'b111000001 : n11 <= 16'b1000100111001111;
      9'b111000010 : n11 <= 16'b1000100111010000;
      9'b111000011 : n11 <= 16'b1000100011010001;
      9'b111000100 : n11 <= 16'b1000100011010001;
      9'b111000101 : n11 <= 16'b1000100011010010;
      9'b111000110 : n11 <= 16'b1000100011010011;
      9'b111000111 : n11 <= 16'b1000011111010100;
      9'b111001000 : n11 <= 16'b1000011111010100;
      9'b111001001 : n11 <= 16'b1000011111010101;
      9'b111001010 : n11 <= 16'b1000011011010110;
      9'b111001011 : n11 <= 16'b1000011011010111;
      9'b111001100 : n11 <= 16'b1000011011010111;
      9'b111001101 : n11 <= 16'b1000011011011000;
      9'b111001110 : n11 <= 16'b1000010111011001;
      9'b111001111 : n11 <= 16'b1000010111011010;
      9'b111010000 : n11 <= 16'b1000010111011010;
      9'b111010001 : n11 <= 16'b1000010111011011;
      9'b111010010 : n11 <= 16'b1000010111011100;
      9'b111010011 : n11 <= 16'b1000010011011101;
      9'b111010100 : n11 <= 16'b1000010011011101;
      9'b111010101 : n11 <= 16'b1000010011011110;
      9'b111010110 : n11 <= 16'b1000010011011111;
      9'b111010111 : n11 <= 16'b1000010011100000;
      9'b111011000 : n11 <= 16'b1000001111100000;
      9'b111011001 : n11 <= 16'b1000001111100001;
      9'b111011010 : n11 <= 16'b1000001111100010;
      9'b111011011 : n11 <= 16'b1000001111100011;
      9'b111011100 : n11 <= 16'b1000001111100011;
      9'b111011101 : n11 <= 16'b1000001011100100;
      9'b111011110 : n11 <= 16'b1000001011100101;
      9'b111011111 : n11 <= 16'b1000001011100110;
      9'b111100000 : n11 <= 16'b1000001011100111;
      9'b111100001 : n11 <= 16'b1000001011100111;
      9'b111100010 : n11 <= 16'b1000001011101000;
      9'b111100011 : n11 <= 16'b1000001011101001;
      9'b111100100 : n11 <= 16'b1000000111101010;
      9'b111100101 : n11 <= 16'b1000000111101010;
      9'b111100110 : n11 <= 16'b1000000111101011;
      9'b111100111 : n11 <= 16'b1000000111101100;
      9'b111101000 : n11 <= 16'b1000000111101101;
      9'b111101001 : n11 <= 16'b1000000111101101;
      9'b111101010 : n11 <= 16'b1000000111101110;
      9'b111101011 : n11 <= 16'b1000000111101111;
      9'b111101100 : n11 <= 16'b1000000011110000;
      9'b111101101 : n11 <= 16'b1000000011110001;
      9'b111101110 : n11 <= 16'b1000000011110001;
      9'b111101111 : n11 <= 16'b1000000011110010;
      9'b111110000 : n11 <= 16'b1000000011110011;
      9'b111110001 : n11 <= 16'b1000000011110100;
      9'b111110010 : n11 <= 16'b1000000011110101;
      9'b111110011 : n11 <= 16'b1000000011110101;
      9'b111110100 : n11 <= 16'b1000000011110110;
      9'b111110101 : n11 <= 16'b1000000011110111;
      9'b111110110 : n11 <= 16'b1000000011111000;
      9'b111110111 : n11 <= 16'b1000000011111000;
      9'b111111000 : n11 <= 16'b1000000011111001;
      9'b111111001 : n11 <= 16'b1000000011111010;
      9'b111111010 : n11 <= 16'b1000000011111011;
      9'b111111011 : n11 <= 16'b1000000011111100;
      9'b111111100 : n11 <= 16'b1000000011111100;
      9'b111111101 : n11 <= 16'b1000000011111101;
      9'b111111110 : n11 <= 16'b1000000011111110;
      9'b111111111 : n11 <= 16'b1000000011111111;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule

module cf_fft_1024_8_23 (clock_c, i1, i2, i3, i4, i5, o1, o2, o3);
input  clock_c;
input  i1;
input  [15:0] i2;
input  [15:0] i3;
input  i4;
input  i5;
output o1;
output [15:0] o2;
output [15:0] o3;
wire   n1;
wire   [31:0] n2;
reg    n3;
reg    n4;
reg    n5;
reg    n6;
wire   [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [7:0] n11;
wire   n12;
reg    n13;
reg    n14;
reg    n15;
reg    n16;
wire   n17;
wire   [1:0] n18;
wire   [15:0] n19;
wire   [15:0] n20;
wire   [15:0] n21;
wire   [15:0] n22;
wire   [15:0] n23;
wire   [15:0] n24;
wire   [15:0] s25_1;
wire   [15:0] s25_2;
wire   s26_1;
wire   [31:0] s27_1;
wire   s28_1;
wire   s28_2;
wire   [31:0] s28_3;
wire   [8:0] s29_1;
wire   s29_2;
assign n1 = s29_1[8];
assign n2 = {s25_1, s25_2};
initial n3 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n3 <= 1'b0;
  else if (i4 == 1'b1)
    n3 <= s29_2;
initial n4 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 1'b0;
  else if (i4 == 1'b1)
    n4 <= n3;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n5 <= 1'b0;
  else if (i4 == 1'b1)
    n5 <= n4;
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n6 <= 1'b0;
  else if (i4 == 1'b1)
    n6 <= n5;
assign n7 = {s29_1[8],
  s29_1[7],
  s29_1[6],
  s29_1[5],
  s29_1[4],
  s29_1[3],
  s29_1[2],
  s29_1[1]};
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n8;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n11 <= 8'b00000000;
  else if (i4 == 1'b1)
    n11 <= n10;
assign n12 = s29_1[0];
initial n13 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n13 <= 1'b0;
  else if (i4 == 1'b1)
    n13 <= n12;
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n14 <= 1'b0;
  else if (i4 == 1'b1)
    n14 <= n13;
initial n15 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n15 <= 1'b0;
  else if (i4 == 1'b1)
    n15 <= n14;
initial n16 = 1'b0;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 1'b0;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = ~n16;
assign n18 = {s28_2, s28_1};
assign n19 = {s28_3[31],
  s28_3[30],
  s28_3[29],
  s28_3[28],
  s28_3[27],
  s28_3[26],
  s28_3[25],
  s28_3[24],
  s28_3[23],
  s28_3[22],
  s28_3[21],
  s28_3[20],
  s28_3[19],
  s28_3[18],
  s28_3[17],
  s28_3[16]};
assign n20 = {s28_3[15],
  s28_3[14],
  s28_3[13],
  s28_3[12],
  s28_3[11],
  s28_3[10],
  s28_3[9],
  s28_3[8],
  s28_3[7],
  s28_3[6],
  s28_3[5],
  s28_3[4],
  s28_3[3],
  s28_3[2],
  s28_3[1],
  s28_3[0]};
assign n21 = {s27_1[31],
  s27_1[30],
  s27_1[29],
  s27_1[28],
  s27_1[27],
  s27_1[26],
  s27_1[25],
  s27_1[24],
  s27_1[23],
  s27_1[22],
  s27_1[21],
  s27_1[20],
  s27_1[19],
  s27_1[18],
  s27_1[17],
  s27_1[16]};
assign n22 = {s27_1[15],
  s27_1[14],
  s27_1[13],
  s27_1[12],
  s27_1[11],
  s27_1[10],
  s27_1[9],
  s27_1[8],
  s27_1[7],
  s27_1[6],
  s27_1[5],
  s27_1[4],
  s27_1[3],
  s27_1[2],
  s27_1[1],
  s27_1[0]};
assign n23 = s26_1 ? n20 : n19;
assign n24 = s26_1 ? n22 : n21;
cf_fft_1024_8_39 s25 (clock_c, i2, i3, n1, i4, i5, s25_1, s25_2);
cf_fft_1024_8_33 s26 (clock_c, n18, i4, i5, s26_1);
cf_fft_1024_8_29 s27 (clock_c, n2, n6, n11, n16, i4, i5, s27_1);
cf_fft_1024_8_28 s28 (clock_c, n2, n6, n11, n17, i4, i5, s28_1, s28_2, s28_3);
cf_fft_1024_8_24 s29 (clock_c, i1, i4, i5, s29_1, s29_2);
assign o3 = n24;
assign o2 = n23;
assign o1 = s28_1;
endmodule

module cf_fft_1024_8_24 (clock_c, i1, i2, i3, o1, o2);
input  clock_c;
input  i1;
input  i2;
input  i3;
output [8:0] o1;
output o2;
wire   [8:0] n1;
wire   [8:0] n2;
reg    [8:0] n3;
wire   [8:0] n4;
wire   n5;
wire   [1:0] n6;
reg    n7;
wire   n8;
wire   n9;
wire   n10;
wire   s11_1;
assign n1 = 9'b000000001;
assign n2 = n3 + n1;
initial n3 = 9'b000000000;
always @ (posedge clock_c)
  if (n9 == 1'b1)
    n3 <= 9'b000000000;
  else if (n10 == 1'b1)
    n3 <= n2;
assign n4 = 9'b111111111;
assign n5 = n3 == n4;
assign n6 = {i1, n5};
initial n7 = 1'b0;
always @ (posedge clock_c)
  if (i3 == 1'b1)
    n7 <= 1'b0;
  else if (i2 == 1'b1)
    n7 <= s11_1;
assign n8 = n7 & n5;
assign n9 = i1 | i3;
assign n10 = s11_1 & i2;
cf_fft_1024_8_25 s11 (clock_c, n6, i2, i3, s11_1);
assign o2 = n8;
assign o1 = n3;
endmodule

module cf_fft_1024_8_25 (clock_c, i1, i2, i3, o1);
input  clock_c;
input  [1:0] i1;
input  i2;
input  i3;
output o1;
wire   n1;
wire   n2;
wire   n3;
wire   n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
wire   n9;
wire   n10;
wire   n11;
wire   n12;
wire   [2:0] n13;
reg    n14;
wire   s15_1;
wire   s16_1;
assign n1 = 1'b0;
assign n2 = 1'b1;
assign n3 = 1'b1;
assign n4 = 1'b1;
assign n5 = 1'b0;
assign n6 = 1'b0;
assign n7 = 1'b0;
assign n8 = 1'b1;
assign n9 = 1'b1;
assign n10 = 1'b1;
assign n11 = 1'b0;
assign n12 = 1'b0;
assign n13 = {i1, n14};
initial n14 = 1'b0;
always @ (posedge clock_c)
  if (i3 == 1'b1)
    n14 <= 1'b0;
  else if (i2 == 1'b1)
    n14 <= s15_1;
cf_fft_1024_8_26 s15 (n1, n2, n3, n4, n5, n6, n13, s15_1);
cf_fft_1024_8_26 s16 (n7, n8, n9, n10, n11, n12, n13, s16_1);
assign o1 = s16_1;
endmodule

module cf_fft_1024_8_26 (i1, i2, i3, i4, i5, i6, i7, o1);
input  i1;
input  i2;
input  i3;
input  i4;
input  i5;
input  i6;
input  [2:0] i7;
output o1;
wire   [2:0] n1;
wire   [2:0] n2;
wire   [2:0] n3;
wire   n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
wire   n9;
wire   s10_1;
assign n1 = 3'b000;
assign n2 = 3'b010;
assign n3 = 3'b100;
assign n4 = i7 == n1;
assign n5 = i7 == n2;
assign n6 = i7 == n3;
assign n7 = n6 ? i4 : s10_1;
assign n8 = n5 ? i5 : n7;
assign n9 = n4 ? i6 : n8;
cf_fft_1024_8_27 s10 (i1, i2, i3, i7, s10_1);
assign o1 = n9;
endmodule

module cf_fft_1024_8_27 (i1, i2, i3, i4, o1);
input  i1;
input  i2;
input  i3;
input  [2:0] i4;
output o1;
wire   [2:0] n1;
wire   [2:0] n2;
wire   [2:0] n3;
wire   n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
wire   n9;
wire   n10;
assign n1 = 3'b110;
assign n2 = 3'b001;
assign n3 = 3'b011;
assign n4 = i4 == n1;
assign n5 = i4 == n2;
assign n6 = i4 == n3;
assign n7 = n6 ? i1 : n10;
assign n8 = n5 ? i2 : n7;
assign n9 = n4 ? i3 : n8;
assign n10 = 1'b1;
assign o1 = n9;
endmodule

module cf_fft_1024_8_28 (clock_c, i1, i2, i3, i4, i5, i6, o1, o2, o3);
input  clock_c;
input  [31:0] i1;
input  i2;
input  [7:0] i3;
input  i4;
input  i5;
input  i6;
output o1;
output o2;
output [31:0] o3;
wire   [7:0] n1;
wire   [7:0] n2;
reg    [7:0] n3;
wire   n4;
reg    n5;
wire   [7:0] n6;
wire   n7;
wire   n8;
wire   [31:0] n9;
reg    [7:0] n9a;
reg    [31:0] n9m [255:0];
wire   n10;
wire   [31:0] n11;
reg    [7:0] n11a;
reg    [31:0] n11m [255:0];
reg    n12;
wire   [31:0] n13;
wire   n14;
wire   s15_1;
assign n1 = 8'b00000001;
assign n2 = n3 + n1;
initial n3 = 8'b00000000;
always @ (posedge clock_c)
  if (n14 == 1'b1)
    n3 <= 8'b00000000;
  else if (i5 == 1'b1)
    n3 <= n2;
assign n4 = ~s15_1;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i6 == 1'b1)
    n5 <= 1'b0;
  else if (i5 == 1'b1)
    n5 <= i2;
assign n6 = 8'b00000000;
assign n7 = n3 == n6;
assign n8 = i4 & n4;
initial n9a = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1) begin
    if (n8 == 1'b1)
      n9m[i3] <= i1;
    n9a <= n3;
  end
assign n9 = n9m[n9a];
assign n10 = i4 & s15_1;
initial n11a = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1) begin
    if (n10 == 1'b1)
      n11m[i3] <= i1;
    n11a <= n3;
  end
assign n11 = n11m[n11a];
initial n12 = 1'b0;
always @ (posedge clock_c)
  if (i6 == 1'b1)
    n12 <= 1'b0;
  else if (i5 == 1'b1)
    n12 <= n4;
assign n13 = n12 ? n11 : n9;
assign n14 = i2 | i6;
cf_fft_1024_8_30 s15 (clock_c, i2, i5, i6, s15_1);
assign o3 = n13;
assign o2 = n7;
assign o1 = n5;
endmodule

module cf_fft_1024_8_29 (clock_c, i1, i2, i3, i4, i5, i6, o1);
input  clock_c;
input  [31:0] i1;
input  i2;
input  [7:0] i3;
input  i4;
input  i5;
input  i6;
output [31:0] o1;
wire   [7:0] n1;
wire   [7:0] n2;
reg    [7:0] n3;
wire   n4;
wire   n5;
wire   [31:0] n6;
reg    [7:0] n6a;
reg    [31:0] n6m [255:0];
wire   n7;
wire   [31:0] n8;
reg    [7:0] n8a;
reg    [31:0] n8m [255:0];
reg    n9;
wire   [31:0] n10;
wire   n11;
wire   s12_1;
assign n1 = 8'b00000001;
assign n2 = n3 + n1;
initial n3 = 8'b00000000;
always @ (posedge clock_c)
  if (n11 == 1'b1)
    n3 <= 8'b00000000;
  else if (i5 == 1'b1)
    n3 <= n2;
assign n4 = ~s12_1;
assign n5 = i4 & n4;
initial n6a = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1) begin
    if (n5 == 1'b1)
      n6m[i3] <= i1;
    n6a <= n3;
  end
assign n6 = n6m[n6a];
assign n7 = i4 & s12_1;
initial n8a = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1) begin
    if (n7 == 1'b1)
      n8m[i3] <= i1;
    n8a <= n3;
  end
assign n8 = n8m[n8a];
initial n9 = 1'b0;
always @ (posedge clock_c)
  if (i6 == 1'b1)
    n9 <= 1'b0;
  else if (i5 == 1'b1)
    n9 <= n4;
assign n10 = n9 ? n8 : n6;
assign n11 = i2 | i6;
cf_fft_1024_8_30 s12 (clock_c, i2, i5, i6, s12_1);
assign o1 = n10;
endmodule

module cf_fft_1024_8_30 (clock_c, i1, i2, i3, o1);
input  clock_c;
input  i1;
input  i2;
input  i3;
output o1;
wire   n1;
wire   n2;
wire   n3;
wire   n4;
wire   [1:0] n5;
reg    n6;
wire   s7_1;
wire   s8_1;
assign n1 = 1'b0;
assign n2 = 1'b1;
assign n3 = 1'b1;
assign n4 = 1'b0;
assign n5 = {i1, n6};
initial n6 = 1'b0;
always @ (posedge clock_c)
  if (i3 == 1'b1)
    n6 <= 1'b0;
  else if (i2 == 1'b1)
    n6 <= s7_1;
cf_fft_1024_8_32 s7 (n1, n2, n3, n4, n5, s7_1);
cf_fft_1024_8_31 s8 (n5, s8_1);
assign o1 = s8_1;
endmodule

module cf_fft_1024_8_31 (i1, o1);
input  [1:0] i1;
output o1;
wire   n1;
wire   n2;
wire   [1:0] n3;
wire   [1:0] n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
wire   n9;
assign n1 = 1'b0;
assign n2 = 1'b0;
assign n3 = 2'b00;
assign n4 = 2'b10;
assign n5 = i1 == n3;
assign n6 = i1 == n4;
assign n7 = n6 ? n1 : n9;
assign n8 = n5 ? n2 : n7;
assign n9 = 1'b1;
assign o1 = n8;
endmodule

module cf_fft_1024_8_32 (i1, i2, i3, i4, i5, o1);
input  i1;
input  i2;
input  i3;
input  i4;
input  [1:0] i5;
output o1;
wire   [1:0] n1;
wire   [1:0] n2;
wire   [1:0] n3;
wire   n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
wire   n9;
assign n1 = 2'b00;
assign n2 = 2'b10;
assign n3 = 2'b01;
assign n4 = i5 == n1;
assign n5 = i5 == n2;
assign n6 = i5 == n3;
assign n7 = n6 ? i2 : i1;
assign n8 = n5 ? i3 : n7;
assign n9 = n4 ? i4 : n8;
assign o1 = n9;
endmodule

module cf_fft_1024_8_33 (clock_c, i1, i2, i3, o1);
input  clock_c;
input  [1:0] i1;
input  i2;
input  i3;
output o1;
wire   [2:0] n1;
wire   [2:0] n2;
wire   n3;
wire   n4;
reg    n5;
wire   s6_1;
wire   s7_1;
wire   s7_2;
wire   s7_3;
wire   s7_4;
wire   s7_5;
wire   s7_6;
wire   s7_7;
wire   s7_8;
wire   s8_1;
assign n1 = 3'b000;
assign n2 = {i1, n5};
assign n3 = n2 == n1;
assign n4 = n3 ? s7_8 : s6_1;
initial n5 = 1'b0;
always @ (posedge clock_c)
  if (i3 == 1'b1)
    n5 <= 1'b0;
  else if (i2 == 1'b1)
    n5 <= n4;
cf_fft_1024_8_37 s6 (s7_1, s7_2, s7_3, s7_4, s7_5, s7_6, s7_7, n2, s6_1);
cf_fft_1024_8_36 s7 (s7_1, s7_2, s7_3, s7_4, s7_5, s7_6, s7_7, s7_8);
cf_fft_1024_8_34 s8 (n2, s8_1);
assign o1 = s8_1;
endmodule

module cf_fft_1024_8_34 (i1, o1);
input  [2:0] i1;
output o1;
wire   n1;
wire   n2;
wire   n3;
wire   n4;
wire   [2:0] n5;
wire   n6;
wire   n7;
wire   s8_1;
assign n1 = 1'b0;
assign n2 = 1'b0;
assign n3 = 1'b0;
assign n4 = 1'b0;
assign n5 = 3'b000;
assign n6 = i1 == n5;
assign n7 = n6 ? n4 : s8_1;
cf_fft_1024_8_35 s8 (n1, n2, n3, i1, s8_1);
assign o1 = n7;
endmodule

module cf_fft_1024_8_35 (i1, i2, i3, i4, o1);
input  i1;
input  i2;
input  i3;
input  [2:0] i4;
output o1;
wire   [2:0] n1;
wire   [2:0] n2;
wire   [2:0] n3;
wire   n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
wire   n9;
wire   n10;
assign n1 = 3'b010;
assign n2 = 3'b100;
assign n3 = 3'b110;
assign n4 = i4 == n1;
assign n5 = i4 == n2;
assign n6 = i4 == n3;
assign n7 = n6 ? i1 : n10;
assign n8 = n5 ? i2 : n7;
assign n9 = n4 ? i3 : n8;
assign n10 = 1'b1;
assign o1 = n9;
endmodule

module cf_fft_1024_8_36 (o1, o2, o3, o4, o5, o6, o7, o8);
output o1;
output o2;
output o3;
output o4;
output o5;
output o6;
output o7;
output o8;
wire   n1;
wire   n2;
wire   n3;
wire   n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
assign n1 = 1'b0;
assign n2 = 1'b1;
assign n3 = 1'b0;
assign n4 = 1'b1;
assign n5 = 1'b0;
assign n6 = 1'b1;
assign n7 = 1'b0;
assign n8 = 1'b0;
assign o8 = n8;
assign o7 = n7;
assign o6 = n6;
assign o5 = n5;
assign o4 = n4;
assign o3 = n3;
assign o2 = n2;
assign o1 = n1;
endmodule

module cf_fft_1024_8_37 (i1, i2, i3, i4, i5, i6, i7, i8, o1);
input  i1;
input  i2;
input  i3;
input  i4;
input  i5;
input  i6;
input  i7;
input  [2:0] i8;
output o1;
wire   [2:0] n1;
wire   [2:0] n2;
wire   [2:0] n3;
wire   n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
wire   n9;
wire   s10_1;
assign n1 = 3'b010;
assign n2 = 3'b100;
assign n3 = 3'b110;
assign n4 = i8 == n1;
assign n5 = i8 == n2;
assign n6 = i8 == n3;
assign n7 = n6 ? i5 : s10_1;
assign n8 = n5 ? i6 : n7;
assign n9 = n4 ? i7 : n8;
cf_fft_1024_8_38 s10 (i1, i2, i3, i4, i8, s10_1);
assign o1 = n9;
endmodule

module cf_fft_1024_8_38 (i1, i2, i3, i4, i5, o1);
input  i1;
input  i2;
input  i3;
input  i4;
input  [2:0] i5;
output o1;
wire   [2:0] n1;
wire   [2:0] n2;
wire   [2:0] n3;
wire   n4;
wire   n5;
wire   n6;
wire   n7;
wire   n8;
wire   n9;
assign n1 = 3'b001;
assign n2 = 3'b011;
assign n3 = 3'b101;
assign n4 = i5 == n1;
assign n5 = i5 == n2;
assign n6 = i5 == n3;
assign n7 = n6 ? i2 : i1;
assign n8 = n5 ? i3 : n7;
assign n9 = n4 ? i4 : n8;
assign o1 = n9;
endmodule

module cf_fft_1024_8_39 (clock_c, i1, i2, i3, i4, i5, o1, o2);
input  clock_c;
input  [15:0] i1;
input  [15:0] i2;
input  i3;
input  i4;
input  i5;
output [15:0] o1;
output [15:0] o2;
reg    [15:0] n1;
wire   [7:0] n2;
wire   [7:0] n3;
reg    [15:0] n4;
wire   [7:0] n5;
wire   [7:0] n6;
reg    [7:0] n7;
reg    [7:0] n8;
reg    [7:0] n9;
reg    [7:0] n10;
reg    [15:0] n11;
wire   [7:0] n12;
wire   [7:0] n13;
wire   [15:0] n14;
wire   [7:0] n15;
reg    [7:0] n16;
wire   [15:0] n17;
wire   [7:0] n18;
reg    [7:0] n19;
wire   [7:0] n20;
reg    [7:0] n21;
wire   [15:0] n22;
wire   [7:0] n23;
reg    [7:0] n24;
wire   [15:0] n25;
wire   [7:0] n26;
reg    [7:0] n27;
wire   [7:0] n28;
reg    [7:0] n29;
wire   [7:0] n30;
wire   [7:0] n31;
wire   [15:0] n32;
reg    [15:0] n33;
wire   [7:0] n34;
wire   [7:0] n35;
wire   [15:0] n36;
reg    [15:0] n37;
initial n1 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n1 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n1 <= i1;
assign n2 = {n1[15],
  n1[14],
  n1[13],
  n1[12],
  n1[11],
  n1[10],
  n1[9],
  n1[8]};
assign n3 = {n1[7],
  n1[6],
  n1[5],
  n1[4],
  n1[3],
  n1[2],
  n1[1],
  n1[0]};
initial n4 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n4 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n4 <= i2;
assign n5 = {n4[15],
  n4[14],
  n4[13],
  n4[12],
  n4[11],
  n4[10],
  n4[9],
  n4[8]};
assign n6 = {n4[7],
  n4[6],
  n4[5],
  n4[4],
  n4[3],
  n4[2],
  n4[1],
  n4[0]};
initial n7 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n7 <= 8'b00000000;
  else if (i4 == 1'b1)
    n7 <= n2;
initial n8 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n8 <= 8'b00000000;
  else if (i4 == 1'b1)
    n8 <= n7;
initial n9 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n9 <= 8'b00000000;
  else if (i4 == 1'b1)
    n9 <= n3;
initial n10 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n10 <= 8'b00000000;
  else if (i4 == 1'b1)
    n10 <= n9;
initial n11 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i4 == 1'b1)
    case (i3)
      1'b0 : n11 <= 16'b0111111100000000;
      1'b1 : n11 <= 16'b0000000010000000;
      default : n11 <= 16'bxxxxxxxxxxxxxxxx;
    endcase
assign n12 = {n11[15],
  n11[14],
  n11[13],
  n11[12],
  n11[11],
  n11[10],
  n11[9],
  n11[8]};
assign n13 = {n11[7],
  n11[6],
  n11[5],
  n11[4],
  n11[3],
  n11[2],
  n11[1],
  n11[0]};
assign n14 = {{8{n5[7]}}, n5} * {{8{n12[7]}}, n12};
assign n15 = {n14[14],
  n14[13],
  n14[12],
  n14[11],
  n14[10],
  n14[9],
  n14[8],
  n14[7]};
initial n16 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n16 <= 8'b00000000;
  else if (i4 == 1'b1)
    n16 <= n15;
assign n17 = {{8{n6[7]}}, n6} * {{8{n13[7]}}, n13};
assign n18 = {n17[14],
  n17[13],
  n17[12],
  n17[11],
  n17[10],
  n17[9],
  n17[8],
  n17[7]};
initial n19 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n19 <= 8'b00000000;
  else if (i4 == 1'b1)
    n19 <= n18;
assign n20 = n16 - n19;
initial n21 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n21 <= 8'b00000000;
  else if (i4 == 1'b1)
    n21 <= n20;
assign n22 = {{8{n5[7]}}, n5} * {{8{n13[7]}}, n13};
assign n23 = {n22[14],
  n22[13],
  n22[12],
  n22[11],
  n22[10],
  n22[9],
  n22[8],
  n22[7]};
initial n24 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n24 <= 8'b00000000;
  else if (i4 == 1'b1)
    n24 <= n23;
assign n25 = {{8{n6[7]}}, n6} * {{8{n12[7]}}, n12};
assign n26 = {n25[14],
  n25[13],
  n25[12],
  n25[11],
  n25[10],
  n25[9],
  n25[8],
  n25[7]};
initial n27 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n27 <= 8'b00000000;
  else if (i4 == 1'b1)
    n27 <= n26;
assign n28 = n24 + n27;
initial n29 = 8'b00000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n29 <= 8'b00000000;
  else if (i4 == 1'b1)
    n29 <= n28;
assign n30 = n8 + n21;
assign n31 = n10 + n29;
assign n32 = {n30, n31};
initial n33 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n33 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n33 <= n32;
assign n34 = n8 - n21;
assign n35 = n10 - n29;
assign n36 = {n34, n35};
initial n37 = 16'b0000000000000000;
always @ (posedge clock_c)
  if (i5 == 1'b1)
    n37 <= 16'b0000000000000000;
  else if (i4 == 1'b1)
    n37 <= n36;
assign o2 = n37;
assign o1 = n33;
endmodule



