//verilator lint_off DECLFILENAME
//verilator lint_off PINCONNECTEMPTY
//verilator lint_off WIDTH
//verilator lint_off UNUSED
//verilator lint_off CASEINCOMPLETE
//verilator lint_off UNOPTFLAT
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
   assign t0_0 = X0;
   assign Y0 = t2_0;
   assign t0_1 = X1;
   assign Y1 = t2_1;
   assign t0_2 = X2;
   assign Y2 = t2_2;
   assign t0_3 = X3;
   assign Y3 = t2_3;
   assign next_0 = next;
   assign next_out = next_2;
   always @(posedge next_out)
		$display("next_out %d",next);

// latency=260, gap=128
   rc84684 stage0(.clk(clk), .reset(reset), .next(next_0), .next_out(next_1),
    .X0(t0_0), .Y0(t1_0),
    .X1(t0_1), .Y1(t1_1),
    .X2(t0_2), .Y2(t1_2),
    .X3(t0_3), .Y3(t1_3));


// latency=2193, gap=2193
   ICompose_85426 IComposeInst85669(.next(next_1), .clk(clk), .reset(reset), .next_out(next_2),
       .X0(t1_0), .Y0(t2_0),
       .X1(t1_1), .Y1(t2_1),
       .X2(t1_2), .Y2(t2_2),
       .X3(t1_3), .Y3(t2_3));


endmodule

// Latency: 260
// Gap: 128
module rc84684(clk, reset, next, next_out,
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

   perm84682 instPerm85670(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet84682(itr, clk, ct
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
module perm84682(clk, next, reset, next_out,
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

   wire [0:0] tm0;
	wire [0:0] tm0_d;
	wire [0:0] tm0_dd;
   assign tm0 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_85675(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_85676(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(127, 7) nextReg_85687(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_85688(.X(next2), .Y(next3), .clk(clk));
nextReg #(128, 7) nextReg_85691(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_85692(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(127, 1) shiftFIFO_85695(.X(tm0), .Y(tm0_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_85698(.X(tm0_d), .Y(tm0_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 7) shiftFIFO_85703(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
   wire 		      readInt, s2wr_en;   
   assign 		      readInt = (state2 == 1);

   shiftRegFIFO #(4, 1) writeIntReg(readInt, s2wr_en, clk);

   memMod_dist #(depth*2, width, addrbits+1) s2mem0(s0, y0, {inFlip1, s2wr0}, {outFlip1, s2rdloc}, s2wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s2mem1(s1, y1, {inFlip1, s2wr1}, {outFlip1, s2rdloc}, s2wr_en, clk);
   always @(posedge clk) begin
	//	$display("reset %d\n",reset);
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
	     {1'd0,  7'd0}: s1rd0 <= 64;
	     {1'd0,  7'd1}: s1rd0 <= 96;
	     {1'd0,  7'd2}: s1rd0 <= 80;
	     {1'd0,  7'd3}: s1rd0 <= 112;
	     {1'd0,  7'd4}: s1rd0 <= 72;
	     {1'd0,  7'd5}: s1rd0 <= 104;
	     {1'd0,  7'd6}: s1rd0 <= 88;
	     {1'd0,  7'd7}: s1rd0 <= 120;
	     {1'd0,  7'd8}: s1rd0 <= 68;
	     {1'd0,  7'd9}: s1rd0 <= 100;
	     {1'd0,  7'd10}: s1rd0 <= 84;
	     {1'd0,  7'd11}: s1rd0 <= 116;
	     {1'd0,  7'd12}: s1rd0 <= 76;
	     {1'd0,  7'd13}: s1rd0 <= 108;
	     {1'd0,  7'd14}: s1rd0 <= 92;
	     {1'd0,  7'd15}: s1rd0 <= 124;
	     {1'd0,  7'd16}: s1rd0 <= 66;
	     {1'd0,  7'd17}: s1rd0 <= 98;
	     {1'd0,  7'd18}: s1rd0 <= 82;
	     {1'd0,  7'd19}: s1rd0 <= 114;
	     {1'd0,  7'd20}: s1rd0 <= 74;
	     {1'd0,  7'd21}: s1rd0 <= 106;
	     {1'd0,  7'd22}: s1rd0 <= 90;
	     {1'd0,  7'd23}: s1rd0 <= 122;
	     {1'd0,  7'd24}: s1rd0 <= 70;
	     {1'd0,  7'd25}: s1rd0 <= 102;
	     {1'd0,  7'd26}: s1rd0 <= 86;
	     {1'd0,  7'd27}: s1rd0 <= 118;
	     {1'd0,  7'd28}: s1rd0 <= 78;
	     {1'd0,  7'd29}: s1rd0 <= 110;
	     {1'd0,  7'd30}: s1rd0 <= 94;
	     {1'd0,  7'd31}: s1rd0 <= 126;
	     {1'd0,  7'd32}: s1rd0 <= 65;
	     {1'd0,  7'd33}: s1rd0 <= 97;
	     {1'd0,  7'd34}: s1rd0 <= 81;
	     {1'd0,  7'd35}: s1rd0 <= 113;
	     {1'd0,  7'd36}: s1rd0 <= 73;
	     {1'd0,  7'd37}: s1rd0 <= 105;
	     {1'd0,  7'd38}: s1rd0 <= 89;
	     {1'd0,  7'd39}: s1rd0 <= 121;
	     {1'd0,  7'd40}: s1rd0 <= 69;
	     {1'd0,  7'd41}: s1rd0 <= 101;
	     {1'd0,  7'd42}: s1rd0 <= 85;
	     {1'd0,  7'd43}: s1rd0 <= 117;
	     {1'd0,  7'd44}: s1rd0 <= 77;
	     {1'd0,  7'd45}: s1rd0 <= 109;
	     {1'd0,  7'd46}: s1rd0 <= 93;
	     {1'd0,  7'd47}: s1rd0 <= 125;
	     {1'd0,  7'd48}: s1rd0 <= 67;
	     {1'd0,  7'd49}: s1rd0 <= 99;
	     {1'd0,  7'd50}: s1rd0 <= 83;
	     {1'd0,  7'd51}: s1rd0 <= 115;
	     {1'd0,  7'd52}: s1rd0 <= 75;
	     {1'd0,  7'd53}: s1rd0 <= 107;
	     {1'd0,  7'd54}: s1rd0 <= 91;
	     {1'd0,  7'd55}: s1rd0 <= 123;
	     {1'd0,  7'd56}: s1rd0 <= 71;
	     {1'd0,  7'd57}: s1rd0 <= 103;
	     {1'd0,  7'd58}: s1rd0 <= 87;
	     {1'd0,  7'd59}: s1rd0 <= 119;
	     {1'd0,  7'd60}: s1rd0 <= 79;
	     {1'd0,  7'd61}: s1rd0 <= 111;
	     {1'd0,  7'd62}: s1rd0 <= 95;
	     {1'd0,  7'd63}: s1rd0 <= 127;
	     {1'd0,  7'd64}: s1rd0 <= 0;
	     {1'd0,  7'd65}: s1rd0 <= 32;
	     {1'd0,  7'd66}: s1rd0 <= 16;
	     {1'd0,  7'd67}: s1rd0 <= 48;
	     {1'd0,  7'd68}: s1rd0 <= 8;
	     {1'd0,  7'd69}: s1rd0 <= 40;
	     {1'd0,  7'd70}: s1rd0 <= 24;
	     {1'd0,  7'd71}: s1rd0 <= 56;
	     {1'd0,  7'd72}: s1rd0 <= 4;
	     {1'd0,  7'd73}: s1rd0 <= 36;
	     {1'd0,  7'd74}: s1rd0 <= 20;
	     {1'd0,  7'd75}: s1rd0 <= 52;
	     {1'd0,  7'd76}: s1rd0 <= 12;
	     {1'd0,  7'd77}: s1rd0 <= 44;
	     {1'd0,  7'd78}: s1rd0 <= 28;
	     {1'd0,  7'd79}: s1rd0 <= 60;
	     {1'd0,  7'd80}: s1rd0 <= 2;
	     {1'd0,  7'd81}: s1rd0 <= 34;
	     {1'd0,  7'd82}: s1rd0 <= 18;
	     {1'd0,  7'd83}: s1rd0 <= 50;
	     {1'd0,  7'd84}: s1rd0 <= 10;
	     {1'd0,  7'd85}: s1rd0 <= 42;
	     {1'd0,  7'd86}: s1rd0 <= 26;
	     {1'd0,  7'd87}: s1rd0 <= 58;
	     {1'd0,  7'd88}: s1rd0 <= 6;
	     {1'd0,  7'd89}: s1rd0 <= 38;
	     {1'd0,  7'd90}: s1rd0 <= 22;
	     {1'd0,  7'd91}: s1rd0 <= 54;
	     {1'd0,  7'd92}: s1rd0 <= 14;
	     {1'd0,  7'd93}: s1rd0 <= 46;
	     {1'd0,  7'd94}: s1rd0 <= 30;
	     {1'd0,  7'd95}: s1rd0 <= 62;
	     {1'd0,  7'd96}: s1rd0 <= 1;
	     {1'd0,  7'd97}: s1rd0 <= 33;
	     {1'd0,  7'd98}: s1rd0 <= 17;
	     {1'd0,  7'd99}: s1rd0 <= 49;
	     {1'd0,  7'd100}: s1rd0 <= 9;
	     {1'd0,  7'd101}: s1rd0 <= 41;
	     {1'd0,  7'd102}: s1rd0 <= 25;
	     {1'd0,  7'd103}: s1rd0 <= 57;
	     {1'd0,  7'd104}: s1rd0 <= 5;
	     {1'd0,  7'd105}: s1rd0 <= 37;
	     {1'd0,  7'd106}: s1rd0 <= 21;
	     {1'd0,  7'd107}: s1rd0 <= 53;
	     {1'd0,  7'd108}: s1rd0 <= 13;
	     {1'd0,  7'd109}: s1rd0 <= 45;
	     {1'd0,  7'd110}: s1rd0 <= 29;
	     {1'd0,  7'd111}: s1rd0 <= 61;
	     {1'd0,  7'd112}: s1rd0 <= 3;
	     {1'd0,  7'd113}: s1rd0 <= 35;
	     {1'd0,  7'd114}: s1rd0 <= 19;
	     {1'd0,  7'd115}: s1rd0 <= 51;
	     {1'd0,  7'd116}: s1rd0 <= 11;
	     {1'd0,  7'd117}: s1rd0 <= 43;
	     {1'd0,  7'd118}: s1rd0 <= 27;
	     {1'd0,  7'd119}: s1rd0 <= 59;
	     {1'd0,  7'd120}: s1rd0 <= 7;
	     {1'd0,  7'd121}: s1rd0 <= 39;
	     {1'd0,  7'd122}: s1rd0 <= 23;
	     {1'd0,  7'd123}: s1rd0 <= 55;
	     {1'd0,  7'd124}: s1rd0 <= 15;
	     {1'd0,  7'd125}: s1rd0 <= 47;
	     {1'd0,  7'd126}: s1rd0 <= 31;
	     {1'd0,  7'd127}: s1rd0 <= 63;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm0_d, s1rdloc})
	     {1'd0,  7'd0}: s1rd1 <= 0;
	     {1'd0,  7'd1}: s1rd1 <= 32;
	     {1'd0,  7'd2}: s1rd1 <= 16;
	     {1'd0,  7'd3}: s1rd1 <= 48;
	     {1'd0,  7'd4}: s1rd1 <= 8;
	     {1'd0,  7'd5}: s1rd1 <= 40;
	     {1'd0,  7'd6}: s1rd1 <= 24;
	     {1'd0,  7'd7}: s1rd1 <= 56;
	     {1'd0,  7'd8}: s1rd1 <= 4;
	     {1'd0,  7'd9}: s1rd1 <= 36;
	     {1'd0,  7'd10}: s1rd1 <= 20;
	     {1'd0,  7'd11}: s1rd1 <= 52;
	     {1'd0,  7'd12}: s1rd1 <= 12;
	     {1'd0,  7'd13}: s1rd1 <= 44;
	     {1'd0,  7'd14}: s1rd1 <= 28;
	     {1'd0,  7'd15}: s1rd1 <= 60;
	     {1'd0,  7'd16}: s1rd1 <= 2;
	     {1'd0,  7'd17}: s1rd1 <= 34;
	     {1'd0,  7'd18}: s1rd1 <= 18;
	     {1'd0,  7'd19}: s1rd1 <= 50;
	     {1'd0,  7'd20}: s1rd1 <= 10;
	     {1'd0,  7'd21}: s1rd1 <= 42;
	     {1'd0,  7'd22}: s1rd1 <= 26;
	     {1'd0,  7'd23}: s1rd1 <= 58;
	     {1'd0,  7'd24}: s1rd1 <= 6;
	     {1'd0,  7'd25}: s1rd1 <= 38;
	     {1'd0,  7'd26}: s1rd1 <= 22;
	     {1'd0,  7'd27}: s1rd1 <= 54;
	     {1'd0,  7'd28}: s1rd1 <= 14;
	     {1'd0,  7'd29}: s1rd1 <= 46;
	     {1'd0,  7'd30}: s1rd1 <= 30;
	     {1'd0,  7'd31}: s1rd1 <= 62;
	     {1'd0,  7'd32}: s1rd1 <= 1;
	     {1'd0,  7'd33}: s1rd1 <= 33;
	     {1'd0,  7'd34}: s1rd1 <= 17;
	     {1'd0,  7'd35}: s1rd1 <= 49;
	     {1'd0,  7'd36}: s1rd1 <= 9;
	     {1'd0,  7'd37}: s1rd1 <= 41;
	     {1'd0,  7'd38}: s1rd1 <= 25;
	     {1'd0,  7'd39}: s1rd1 <= 57;
	     {1'd0,  7'd40}: s1rd1 <= 5;
	     {1'd0,  7'd41}: s1rd1 <= 37;
	     {1'd0,  7'd42}: s1rd1 <= 21;
	     {1'd0,  7'd43}: s1rd1 <= 53;
	     {1'd0,  7'd44}: s1rd1 <= 13;
	     {1'd0,  7'd45}: s1rd1 <= 45;
	     {1'd0,  7'd46}: s1rd1 <= 29;
	     {1'd0,  7'd47}: s1rd1 <= 61;
	     {1'd0,  7'd48}: s1rd1 <= 3;
	     {1'd0,  7'd49}: s1rd1 <= 35;
	     {1'd0,  7'd50}: s1rd1 <= 19;
	     {1'd0,  7'd51}: s1rd1 <= 51;
	     {1'd0,  7'd52}: s1rd1 <= 11;
	     {1'd0,  7'd53}: s1rd1 <= 43;
	     {1'd0,  7'd54}: s1rd1 <= 27;
	     {1'd0,  7'd55}: s1rd1 <= 59;
	     {1'd0,  7'd56}: s1rd1 <= 7;
	     {1'd0,  7'd57}: s1rd1 <= 39;
	     {1'd0,  7'd58}: s1rd1 <= 23;
	     {1'd0,  7'd59}: s1rd1 <= 55;
	     {1'd0,  7'd60}: s1rd1 <= 15;
	     {1'd0,  7'd61}: s1rd1 <= 47;
	     {1'd0,  7'd62}: s1rd1 <= 31;
	     {1'd0,  7'd63}: s1rd1 <= 63;
	     {1'd0,  7'd64}: s1rd1 <= 64;
	     {1'd0,  7'd65}: s1rd1 <= 96;
	     {1'd0,  7'd66}: s1rd1 <= 80;
	     {1'd0,  7'd67}: s1rd1 <= 112;
	     {1'd0,  7'd68}: s1rd1 <= 72;
	     {1'd0,  7'd69}: s1rd1 <= 104;
	     {1'd0,  7'd70}: s1rd1 <= 88;
	     {1'd0,  7'd71}: s1rd1 <= 120;
	     {1'd0,  7'd72}: s1rd1 <= 68;
	     {1'd0,  7'd73}: s1rd1 <= 100;
	     {1'd0,  7'd74}: s1rd1 <= 84;
	     {1'd0,  7'd75}: s1rd1 <= 116;
	     {1'd0,  7'd76}: s1rd1 <= 76;
	     {1'd0,  7'd77}: s1rd1 <= 108;
	     {1'd0,  7'd78}: s1rd1 <= 92;
	     {1'd0,  7'd79}: s1rd1 <= 124;
	     {1'd0,  7'd80}: s1rd1 <= 66;
	     {1'd0,  7'd81}: s1rd1 <= 98;
	     {1'd0,  7'd82}: s1rd1 <= 82;
	     {1'd0,  7'd83}: s1rd1 <= 114;
	     {1'd0,  7'd84}: s1rd1 <= 74;
	     {1'd0,  7'd85}: s1rd1 <= 106;
	     {1'd0,  7'd86}: s1rd1 <= 90;
	     {1'd0,  7'd87}: s1rd1 <= 122;
	     {1'd0,  7'd88}: s1rd1 <= 70;
	     {1'd0,  7'd89}: s1rd1 <= 102;
	     {1'd0,  7'd90}: s1rd1 <= 86;
	     {1'd0,  7'd91}: s1rd1 <= 118;
	     {1'd0,  7'd92}: s1rd1 <= 78;
	     {1'd0,  7'd93}: s1rd1 <= 110;
	     {1'd0,  7'd94}: s1rd1 <= 94;
	     {1'd0,  7'd95}: s1rd1 <= 126;
	     {1'd0,  7'd96}: s1rd1 <= 65;
	     {1'd0,  7'd97}: s1rd1 <= 97;
	     {1'd0,  7'd98}: s1rd1 <= 81;
	     {1'd0,  7'd99}: s1rd1 <= 113;
	     {1'd0,  7'd100}: s1rd1 <= 73;
	     {1'd0,  7'd101}: s1rd1 <= 105;
	     {1'd0,  7'd102}: s1rd1 <= 89;
	     {1'd0,  7'd103}: s1rd1 <= 121;
	     {1'd0,  7'd104}: s1rd1 <= 69;
	     {1'd0,  7'd105}: s1rd1 <= 101;
	     {1'd0,  7'd106}: s1rd1 <= 85;
	     {1'd0,  7'd107}: s1rd1 <= 117;
	     {1'd0,  7'd108}: s1rd1 <= 77;
	     {1'd0,  7'd109}: s1rd1 <= 109;
	     {1'd0,  7'd110}: s1rd1 <= 93;
	     {1'd0,  7'd111}: s1rd1 <= 125;
	     {1'd0,  7'd112}: s1rd1 <= 67;
	     {1'd0,  7'd113}: s1rd1 <= 99;
	     {1'd0,  7'd114}: s1rd1 <= 83;
	     {1'd0,  7'd115}: s1rd1 <= 115;
	     {1'd0,  7'd116}: s1rd1 <= 75;
	     {1'd0,  7'd117}: s1rd1 <= 107;
	     {1'd0,  7'd118}: s1rd1 <= 91;
	     {1'd0,  7'd119}: s1rd1 <= 123;
	     {1'd0,  7'd120}: s1rd1 <= 71;
	     {1'd0,  7'd121}: s1rd1 <= 103;
	     {1'd0,  7'd122}: s1rd1 <= 87;
	     {1'd0,  7'd123}: s1rd1 <= 119;
	     {1'd0,  7'd124}: s1rd1 <= 79;
	     {1'd0,  7'd125}: s1rd1 <= 111;
	     {1'd0,  7'd126}: s1rd1 <= 95;
	     {1'd0,  7'd127}: s1rd1 <= 127;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet84682 sw(tm0_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm0_dd, writeCycle})
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
      case({tm0_dd, writeCycle})
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
endmodule 

*/

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

module shiftRegFIFO(X, Y, clk);
   parameter depth=1, width=1;

   output [width-1:0] Y;
   input  [width-1:0] X;
   input              clk;

   reg [width-1:0]    mem [depth-1:0];
   integer            index;

   assign Y = mem[depth-1];

   always @ (clk) begin
      if (clk)
      begin
		  
          for(index=depth-1;index>=0;index=index-1) begin
             mem[index] = mem[index-1];
          end
          mem[0]=X;
      end
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

// Latency: 2193
// Gap: 2193
module ICompose_85426(clk, reset, next, next_out,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   reg next_out;
   input clk, reset, next;

   reg [8:0] cycle_count;
   reg [7:0] count;

   input [15:0] X0,
      X1,
      X2,
      X3;

   output [15:0] Y0,
      Y1,
      Y2,
      Y3;

   reg [15:0] Y0,
      Y1,
      Y2,
      Y3;

   reg int_next;
   reg state;
   wire [15:0] t0; 
   reg [15:0] s0;
   wire [15:0] t1; 
   reg [15:0] s1;
   wire [15:0] t2; 
   reg [15:0] s2;
   wire [15:0] t3; 
   reg [15:0] s3;

   reg [1:0] iri_state;
   wire int_next_out;
   reg [3:0] i1;

   statementList85424 instList85708 (.clk(clk), .reset(reset), .next(int_next), .next_out(int_next_out),
      .i1_in(i1),
    .X0(s0), .Y0(t0),
    .X1(s1), .Y1(t1),
    .X2(s2), .Y2(t2),
    .X3(s3), .Y3(t3));

   always @(posedge clk) begin
      if (reset == 1) begin
         int_next <= 0;
         i1 <= 7;
         cycle_count <= 0;
         next_out <= 0;
         iri_state <= 0;
         Y0 <= 0;
         Y1 <= 0;
         Y2 <= 0;
         Y3 <= 0;
      end
      else begin
         Y0 <= t0;
         Y1 <= t1;
         Y2 <= t2;
         Y3 <= t3;
         next_out <= 0;
         case (iri_state)
            0: begin
               i1 <= 7;
               cycle_count <= 0;
               if (next == 1) begin
                  int_next <= 1;
                  iri_state <= 1;
                  
               end
               else begin
                  int_next <= 0;
                  iri_state <= 0;
               end
            end
            1: begin
               int_next <= 0;
               cycle_count <= cycle_count + 1;
               i1 <= i1;
               if (cycle_count < 272)
                  iri_state <= 1;
               else
                  iri_state <= 2;
            end
            2: begin
               cycle_count <= 0;
               i1 <= i1 - 1;
               if (i1 > 0) begin
                  iri_state <= 1;
                  int_next <= 1;
               end
               else begin
                  iri_state <= 0;
                  next_out <= 1;
                  int_next <= 0;
               end
            end
         endcase               
      end
   end

   always @(posedge clk) begin
      if (reset == 1) begin
         state <= 0;
         count <= 0;
         s0 <= 0;
         s1 <= 0;
         s2 <= 0;
         s3 <= 0;
      end      
      else begin
         case (state)
            0: begin
               count <= 0;
               if (next == 1) begin
                  state <= 1;
                  count <= 0;
                  s0 <= X0; 
                  s1 <= X1; 
                  s2 <= X2; 
                  s3 <= X3; 
               end
               else begin
                  state <= 0;
                  count <= 0;
                  s0 <= t0; 
                  s1 <= t1; 
                  s2 <= t2; 
                  s3 <= t3; 
               end               
            end
            1: begin
               count <= count + 1;
               if (count < 128) begin
                  s0 <= X0; 
                  s1 <= X1; 
                  s2 <= X2; 
                  s3 <= X3; 
                  state <= 1;                    
               end
               else begin
                  s0 <= t0; 
                  s1 <= t1; 
                  s2 <= t2; 
                  s3 <= t3; 
                  state <= 0;
               end
            end
         endcase               
      end
   end
endmodule

// Latency: 273
// Gap: 128
// module_name_is:statementList85424
module statementList85424(clk, reset, next, next_out,
   i1_in,
   X0, Y0,
   X1, Y1,
   X2, Y2,
   X3, Y3);

   output next_out;
   input clk, reset, next;

   input [3:0] i1_in;
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
   wire [3:0] i1;
   wire [3:0] i1_0;
   assign t0_0 = X0;
   assign Y0 = t3_0;
   assign t0_1 = X1;
   assign Y1 = t3_1;
   assign t0_2 = X2;
   assign Y2 = t3_2;
   assign t0_3 = X3;
   assign Y3 = t3_3;
   assign next_0 = next;
   assign next_out = next_3;

   assign i1_0 = i1_in;

// latency=11, gap=128
   DirSum_85338 DirSumInst85711(.next(next_0), .clk(clk), .reset(reset), .next_out(next_1),
.i1(i1_0),
       .X0(t0_0), .Y0(t1_0),
       .X1(t0_1), .Y1(t1_1),
       .X2(t0_2), .Y2(t1_2),
       .X3(t0_3), .Y3(t1_3));


// latency=2, gap=128
   codeBlock85340 codeBlockIsnt85712(.clk(clk), .reset(reset), .next_in(next_1), .next_out(next_2),
       .X0_in(t1_0), .Y0(t2_0),
       .X1_in(t1_1), .Y1(t2_1),
       .X2_in(t1_2), .Y2(t2_2),
       .X3_in(t1_3), .Y3(t2_3));


// latency=260, gap=128
   rc85422 instrc85713(.clk(clk), .reset(reset), .next(next_2), .next_out(next_3),
    .X0(t2_0), .Y0(t3_0),
    .X1(t2_1), .Y1(t3_1),
    .X2(t2_2), .Y2(t3_2),
    .X3(t2_3), .Y3(t3_3));


endmodule

// Latency: 11
// Gap: 128
module DirSum_85338(clk, reset, next, next_out,
      i1,
      X0, Y0,
      X1, Y1,
      X2, Y2,
      X3, Y3);

   output next_out;
   input clk, reset, next;

   input [3:0] i1;
   reg [6:0] i2;

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
         else if (i2 == 127)
            i2 <= 0;
         else
            i2 <= i2 + 1;
      end
   end

   codeBlock84686 codeBlockIsnt85714(.clk(clk), .reset(reset), .next_in(next), .next_out(next_out),
.i2_in(i2),
.i1_in(i1),
       .X0_in(X0), .Y0(Y0),
       .X1_in(X1), .Y1(Y1),
       .X2_in(X2), .Y2(Y2),
       .X3_in(X3), .Y3(Y3));

endmodule

module D2_85078(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [7:0] addr;

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
      128: out3 <= 16'h0;
      129: out3 <= 16'hfcdc;
      130: out3 <= 16'hf9ba;
      131: out3 <= 16'hf69c;
      132: out3 <= 16'hf384;
      133: out3 <= 16'hf073;
      134: out3 <= 16'hed6c;
      135: out3 <= 16'hea70;
      136: out3 <= 16'he782;
      137: out3 <= 16'he4a3;
      138: out3 <= 16'he1d5;
      139: out3 <= 16'hdf19;
      140: out3 <= 16'hdc72;
      141: out3 <= 16'hd9e0;
      142: out3 <= 16'hd766;
      143: out3 <= 16'hd505;
      144: out3 <= 16'hd2bf;
      145: out3 <= 16'hd094;
      146: out3 <= 16'hce87;
      147: out3 <= 16'hcc98;
      148: out3 <= 16'hcac9;
      149: out3 <= 16'hc91b;
      150: out3 <= 16'hc78f;
      151: out3 <= 16'hc625;
      152: out3 <= 16'hc4df;
      153: out3 <= 16'hc3be;
      154: out3 <= 16'hc2c1;
      155: out3 <= 16'hc1eb;
      156: out3 <= 16'hc13b;
      157: out3 <= 16'hc0b1;
      158: out3 <= 16'hc04f;
      159: out3 <= 16'hc014;
      160: out3 <= 16'hc000;
      161: out3 <= 16'hc014;
      162: out3 <= 16'hc04f;
      163: out3 <= 16'hc0b1;
      164: out3 <= 16'hc13b;
      165: out3 <= 16'hc1eb;
      166: out3 <= 16'hc2c1;
      167: out3 <= 16'hc3be;
      168: out3 <= 16'hc4df;
      169: out3 <= 16'hc625;
      170: out3 <= 16'hc78f;
      171: out3 <= 16'hc91b;
      172: out3 <= 16'hcac9;
      173: out3 <= 16'hcc98;
      174: out3 <= 16'hce87;
      175: out3 <= 16'hd094;
      176: out3 <= 16'hd2bf;
      177: out3 <= 16'hd505;
      178: out3 <= 16'hd766;
      179: out3 <= 16'hd9e0;
      180: out3 <= 16'hdc72;
      181: out3 <= 16'hdf19;
      182: out3 <= 16'he1d5;
      183: out3 <= 16'he4a3;
      184: out3 <= 16'he782;
      185: out3 <= 16'hea70;
      186: out3 <= 16'hed6c;
      187: out3 <= 16'hf073;
      188: out3 <= 16'hf384;
      189: out3 <= 16'hf69c;
      190: out3 <= 16'hf9ba;
      191: out3 <= 16'hfcdc;
      192: out3 <= 16'h0;
      193: out3 <= 16'h324;
      194: out3 <= 16'h646;
      195: out3 <= 16'h964;
      196: out3 <= 16'hc7c;
      197: out3 <= 16'hf8d;
      198: out3 <= 16'h1294;
      199: out3 <= 16'h1590;
      200: out3 <= 16'h187e;
      201: out3 <= 16'h1b5d;
      202: out3 <= 16'h1e2b;
      203: out3 <= 16'h20e7;
      204: out3 <= 16'h238e;
      205: out3 <= 16'h2620;
      206: out3 <= 16'h289a;
      207: out3 <= 16'h2afb;
      208: out3 <= 16'h2d41;
      209: out3 <= 16'h2f6c;
      210: out3 <= 16'h3179;
      211: out3 <= 16'h3368;
      212: out3 <= 16'h3537;
      213: out3 <= 16'h36e5;
      214: out3 <= 16'h3871;
      215: out3 <= 16'h39db;
      216: out3 <= 16'h3b21;
      217: out3 <= 16'h3c42;
      218: out3 <= 16'h3d3f;
      219: out3 <= 16'h3e15;
      220: out3 <= 16'h3ec5;
      221: out3 <= 16'h3f4f;
      222: out3 <= 16'h3fb1;
      223: out3 <= 16'h3fec;
      224: out3 <= 16'h4000;
      225: out3 <= 16'h3fec;
      226: out3 <= 16'h3fb1;
      227: out3 <= 16'h3f4f;
      228: out3 <= 16'h3ec5;
      229: out3 <= 16'h3e15;
      230: out3 <= 16'h3d3f;
      231: out3 <= 16'h3c42;
      232: out3 <= 16'h3b21;
      233: out3 <= 16'h39db;
      234: out3 <= 16'h3871;
      235: out3 <= 16'h36e5;
      236: out3 <= 16'h3537;
      237: out3 <= 16'h3368;
      238: out3 <= 16'h3179;
      239: out3 <= 16'h2f6c;
      240: out3 <= 16'h2d41;
      241: out3 <= 16'h2afb;
      242: out3 <= 16'h289a;
      243: out3 <= 16'h2620;
      244: out3 <= 16'h238e;
      245: out3 <= 16'h20e7;
      246: out3 <= 16'h1e2b;
      247: out3 <= 16'h1b5d;
      248: out3 <= 16'h187e;
      249: out3 <= 16'h1590;
      250: out3 <= 16'h1294;
      251: out3 <= 16'hf8d;
      252: out3 <= 16'hc7c;
      253: out3 <= 16'h964;
      254: out3 <= 16'h646;
      255: out3 <= 16'h324;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



module D1_85336(addr, out, clk);
   input clk;
   output [15:0] out;
   reg [15:0] out, out2, out3;
   input [7:0] addr;

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
      128: out3 <= 16'h4000;
      129: out3 <= 16'h3fec;
      130: out3 <= 16'h3fb1;
      131: out3 <= 16'h3f4f;
      132: out3 <= 16'h3ec5;
      133: out3 <= 16'h3e15;
      134: out3 <= 16'h3d3f;
      135: out3 <= 16'h3c42;
      136: out3 <= 16'h3b21;
      137: out3 <= 16'h39db;
      138: out3 <= 16'h3871;
      139: out3 <= 16'h36e5;
      140: out3 <= 16'h3537;
      141: out3 <= 16'h3368;
      142: out3 <= 16'h3179;
      143: out3 <= 16'h2f6c;
      144: out3 <= 16'h2d41;
      145: out3 <= 16'h2afb;
      146: out3 <= 16'h289a;
      147: out3 <= 16'h2620;
      148: out3 <= 16'h238e;
      149: out3 <= 16'h20e7;
      150: out3 <= 16'h1e2b;
      151: out3 <= 16'h1b5d;
      152: out3 <= 16'h187e;
      153: out3 <= 16'h1590;
      154: out3 <= 16'h1294;
      155: out3 <= 16'hf8d;
      156: out3 <= 16'hc7c;
      157: out3 <= 16'h964;
      158: out3 <= 16'h646;
      159: out3 <= 16'h324;
      160: out3 <= 16'h0;
      161: out3 <= 16'hfcdc;
      162: out3 <= 16'hf9ba;
      163: out3 <= 16'hf69c;
      164: out3 <= 16'hf384;
      165: out3 <= 16'hf073;
      166: out3 <= 16'hed6c;
      167: out3 <= 16'hea70;
      168: out3 <= 16'he782;
      169: out3 <= 16'he4a3;
      170: out3 <= 16'he1d5;
      171: out3 <= 16'hdf19;
      172: out3 <= 16'hdc72;
      173: out3 <= 16'hd9e0;
      174: out3 <= 16'hd766;
      175: out3 <= 16'hd505;
      176: out3 <= 16'hd2bf;
      177: out3 <= 16'hd094;
      178: out3 <= 16'hce87;
      179: out3 <= 16'hcc98;
      180: out3 <= 16'hcac9;
      181: out3 <= 16'hc91b;
      182: out3 <= 16'hc78f;
      183: out3 <= 16'hc625;
      184: out3 <= 16'hc4df;
      185: out3 <= 16'hc3be;
      186: out3 <= 16'hc2c1;
      187: out3 <= 16'hc1eb;
      188: out3 <= 16'hc13b;
      189: out3 <= 16'hc0b1;
      190: out3 <= 16'hc04f;
      191: out3 <= 16'hc014;
      192: out3 <= 16'hc000;
      193: out3 <= 16'hc014;
      194: out3 <= 16'hc04f;
      195: out3 <= 16'hc0b1;
      196: out3 <= 16'hc13b;
      197: out3 <= 16'hc1eb;
      198: out3 <= 16'hc2c1;
      199: out3 <= 16'hc3be;
      200: out3 <= 16'hc4df;
      201: out3 <= 16'hc625;
      202: out3 <= 16'hc78f;
      203: out3 <= 16'hc91b;
      204: out3 <= 16'hcac9;
      205: out3 <= 16'hcc98;
      206: out3 <= 16'hce87;
      207: out3 <= 16'hd094;
      208: out3 <= 16'hd2bf;
      209: out3 <= 16'hd505;
      210: out3 <= 16'hd766;
      211: out3 <= 16'hd9e0;
      212: out3 <= 16'hdc72;
      213: out3 <= 16'hdf19;
      214: out3 <= 16'he1d5;
      215: out3 <= 16'he4a3;
      216: out3 <= 16'he782;
      217: out3 <= 16'hea70;
      218: out3 <= 16'hed6c;
      219: out3 <= 16'hf073;
      220: out3 <= 16'hf384;
      221: out3 <= 16'hf69c;
      222: out3 <= 16'hf9ba;
      223: out3 <= 16'hfcdc;
      224: out3 <= 16'h0;
      225: out3 <= 16'h324;
      226: out3 <= 16'h646;
      227: out3 <= 16'h964;
      228: out3 <= 16'hc7c;
      229: out3 <= 16'hf8d;
      230: out3 <= 16'h1294;
      231: out3 <= 16'h1590;
      232: out3 <= 16'h187e;
      233: out3 <= 16'h1b5d;
      234: out3 <= 16'h1e2b;
      235: out3 <= 16'h20e7;
      236: out3 <= 16'h238e;
      237: out3 <= 16'h2620;
      238: out3 <= 16'h289a;
      239: out3 <= 16'h2afb;
      240: out3 <= 16'h2d41;
      241: out3 <= 16'h2f6c;
      242: out3 <= 16'h3179;
      243: out3 <= 16'h3368;
      244: out3 <= 16'h3537;
      245: out3 <= 16'h36e5;
      246: out3 <= 16'h3871;
      247: out3 <= 16'h39db;
      248: out3 <= 16'h3b21;
      249: out3 <= 16'h3c42;
      250: out3 <= 16'h3d3f;
      251: out3 <= 16'h3e15;
      252: out3 <= 16'h3ec5;
      253: out3 <= 16'h3f4f;
      254: out3 <= 16'h3fb1;
      255: out3 <= 16'h3fec;
      default: out3 <= 0;
   endcase
   end
// synthesis attribute rom_style of out3 is "block"
endmodule



// Latency: 11
// Gap: 1
module codeBlock84686(clk, reset, next_in, next_out,
   i2_in,
   i1_in,
   X0_in, Y0,
   X1_in, Y1,
   X2_in, Y2,
   X3_in, Y3);

   output next_out;
   input clk, reset, next_in;

   reg next;
   input [6:0] i2_in;
   reg [6:0] i2;
   input [3:0] i1_in;
   reg [3:0] i1;

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

   shiftRegFIFO #(10, 1) shiftFIFO_85717(.X(next), .Y(next_out), .clk(clk));


   wire  [7:0] a57;
   wire  [6:0] a59;
   wire  [7:0] a60;
   wire signed [15:0] a70;
   wire signed [15:0] a71;
   wire  [8:0] a58;
   reg  [7:0] tm13;
   reg signed [15:0] tm14;
   reg signed [15:0] tm21;
   reg signed [15:0] tm42;
   reg signed [15:0] tm52;
   reg  [8:0] a61;
   wire  [7:0] a62;
   reg signed [15:0] tm15;
   reg signed [15:0] tm22;
   reg signed [15:0] tm43;
   reg signed [15:0] tm53;
   wire  [8:0] a63;
   reg signed [15:0] tm16;
   reg signed [15:0] tm23;
   reg signed [15:0] tm44;
   reg signed [15:0] tm54;
   reg signed [15:0] tm17;
   reg signed [15:0] tm24;
   reg signed [15:0] tm45;
   reg signed [15:0] tm55;
   reg signed [15:0] tm18;
   reg signed [15:0] tm25;
   reg signed [15:0] tm46;
   reg signed [15:0] tm56;
   wire signed [15:0] tm6;
   wire signed [15:0] a64;
   wire signed [15:0] tm7;
   wire signed [15:0] a66;
   reg signed [15:0] tm19;
   reg signed [15:0] tm26;
   reg signed [15:0] tm47;
   reg signed [15:0] tm57;
   reg signed [15:0] tm9;
   reg signed [15:0] tm10;
   reg signed [15:0] tm20;
   reg signed [15:0] tm27;
   reg signed [15:0] tm48;
   reg signed [15:0] tm58;
   reg signed [15:0] tm49;
   reg signed [15:0] tm59;
   wire signed [15:0] a65;
   wire signed [15:0] a67;
   wire signed [15:0] a68;
   wire signed [15:0] a69;
   reg signed [15:0] tm50;
   reg signed [15:0] tm60;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;
   reg signed [15:0] tm51;
   reg signed [15:0] tm61;

   wire [0:0] tm2;
   assign tm2 = 1'h1;
   wire [6:0] tm3;
   assign tm3 = 7'h7f;
   wire [7:0] tm5;
   assign tm5 = 8'h80;

   assign a57 = i2 << 1;
   assign a59 = tm3 << i1;
   assign a60 = {a59, tm2[0:0]};
   assign a70 = X2;
   assign a71 = X3;
   assign a62 = {a61[0:0], a61[7:1]};
   assign a64 = tm6;
   assign a66 = tm7;
   assign Y0 = tm51;
   assign Y1 = tm61;

   D2_85078 instD2inst0_85078(.addr(a63[7:0]), .out(tm7), .clk(clk));

   D1_85336 instD1inst0_85336(.addr(a63[7:0]), .out(tm6), .clk(clk));

    addfxp #(9, 1) add84705(.a({1'b0, a57}), .b({8'b0, tm2}), .clk(clk), .q(a58));    // 0
    subfxp #(9, 1) sub84737(.a({1'b0, a62}), .b({1'b0, tm5}), .clk(clk), .q(a63));    // 2
    multfix #(16, 2) m84759(.a(tm9), .b(tm20), .clk(clk), .q_sc(a65), .q_unsc(), .rst(reset));
    multfix #(16, 2) m84781(.a(tm10), .b(tm27), .clk(clk), .q_sc(a67), .q_unsc(), .rst(reset));
    multfix #(16, 2) m84799(.a(tm10), .b(tm20), .clk(clk), .q_sc(a68), .q_unsc(), .rst(reset));
    multfix #(16, 2) m84810(.a(tm9), .b(tm27), .clk(clk), .q_sc(a69), .q_unsc(), .rst(reset));
    subfxp #(16, 1) sub84788(.a(a65), .b(a67), .clk(clk), .q(Y2));    // 9
    addfxp #(16, 1) add84817(.a(a68), .b(a69), .clk(clk), .q(Y3));    // 9


   always @(posedge clk) begin
      if (reset == 1) begin
         tm9 <= 0;
         tm20 <= 0;
         tm10 <= 0;
         tm27 <= 0;
         tm10 <= 0;
         tm20 <= 0;
         tm9 <= 0;
         tm27 <= 0;
      end
      else begin
         i2 <= i2_in;
         i1 <= i1_in;
         X0 <= X0_in;
         X1 <= X1_in;
         X2 <= X2_in;
         X3 <= X3_in;
         next <= next_in;
         tm13 <= a60;
         tm14 <= a70;
         tm21 <= a71;
         tm42 <= X0;
         tm52 <= X1;
         a61 <= (a58 & tm13);
         tm15 <= tm14;
         tm22 <= tm21;
         tm43 <= tm42;
         tm53 <= tm52;
         tm16 <= tm15;
         tm23 <= tm22;
         tm44 <= tm43;
         tm54 <= tm53;
         tm17 <= tm16;
         tm24 <= tm23;
         tm45 <= tm44;
         tm55 <= tm54;
         tm18 <= tm17;
         tm25 <= tm24;
         tm46 <= tm45;
         tm56 <= tm55;
         tm19 <= tm18;
         tm26 <= tm25;
         tm47 <= tm46;
         tm57 <= tm56;
         tm9 <= a64;
         tm10 <= a66;
         tm20 <= tm19;
         tm27 <= tm26;
         tm48 <= tm47;
         tm58 <= tm57;
         tm49 <= tm48;
         tm59 <= tm58;
         tm50 <= tm49;
         tm60 <= tm59;
         tm51 <= tm50;
         tm61 <= tm60;
      end
   end
endmodule

// Latency: 2
// Gap: 1
module codeBlock85340(clk, reset, next_in, next_out,
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

   shiftRegFIFO #(1, 1) shiftFIFO_85720(.X(next), .Y(next_out), .clk(clk));


   wire signed [15:0] a9;
   wire signed [15:0] a10;
   wire signed [15:0] a11;
   wire signed [15:0] a12;
   wire signed [15:0] t21;
   wire signed [15:0] t22;
   wire signed [15:0] t23;
   wire signed [15:0] t24;
   wire signed [15:0] Y0;
   wire signed [15:0] Y1;
   wire signed [15:0] Y2;
   wire signed [15:0] Y3;


   assign a9 = X0;
   assign a10 = X2;
   assign a11 = X1;
   assign a12 = X3;
   assign Y0 = t21;
   assign Y1 = t22;
   assign Y2 = t23;
   assign Y3 = t24;

    addfxp #(16, 1) add85352(.a(a9), .b(a10), .clk(clk), .q(t21));    // 0
    addfxp #(16, 1) add85367(.a(a11), .b(a12), .clk(clk), .q(t22));    // 0
    subfxp #(16, 1) sub85382(.a(a9), .b(a10), .clk(clk), .q(t23));    // 0
    subfxp #(16, 1) sub85397(.a(a11), .b(a12), .clk(clk), .q(t24));    // 0


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
module rc85422(clk, reset, next, next_out,
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

   perm85420 instPerm85721(.x0(t0), .y0(s0),
    .x1(t1), .y1(s1),
   .clk(clk), .next(next), .next_out(next_out), .reset(reset)
);



endmodule

module swNet85420(itr, clk, ct
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
module perm85420(clk, next, reset, next_out,
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
   
   wire [0:0] tm8;
	wire [0:0] tm8_d;
	wire [0:0] tm8_dd;
   assign tm8 = 0;

shiftRegFIFO #(3, 1) shiftFIFO_85726(.X(outFlip0), .Y(inFlip1), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_85727(.X(outFlip0_z), .Y(outFlip0), .clk(clk));
//   shiftRegFIFO #(2, 1) inFlip1Reg(outFlip0, inFlip1, clk);
//   shiftRegFIFO #(1, 1) outFlip0Reg(outFlip0_z, outFlip0, clk);
   
   memMod_dist #(depth*2, width, addrbits+1) s1mem0(x0, t0, {inFlip0, s1wr0}, {outFlip0, s1rd0}, s1wr_en, clk);
   memMod_dist #(depth*2, width, addrbits+1) s1mem1(x1, t1, {inFlip0, s1wr0}, {outFlip0, s1rd1}, s1wr_en, clk);

nextReg #(127, 7) nextReg_85738(.X(next), .Y(next2), .reset(reset), .clk(clk));
shiftRegFIFO #(4, 1) shiftFIFO_85739(.X(next2), .Y(next3), .clk(clk));
nextReg #(128, 7) nextReg_85742(.X(next3), .Y(next4), .reset(reset), .clk(clk));
shiftRegFIFO #(1, 1) shiftFIFO_85743(.X(next4), .Y(next_out), .clk(clk));
shiftRegFIFO #(127, 1) shiftFIFO_85746(.X(tm8), .Y(tm8_d), .clk(clk));
shiftRegFIFO #(3, 1) shiftFIFO_85749(.X(tm8_d), .Y(tm8_dd), .clk(clk));
   
   wire [addrbits-1:0] 	      muxCycle, writeCycle;
assign muxCycle = s1rdloc;
shiftRegFIFO #(3, 7) shiftFIFO_85754(.X(muxCycle), .Y(writeCycle), .clk(clk));
        
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
      case({tm8_d, s1rdloc})
	     {1'd0,  7'd0}: s1rd0 <= 1;
	     {1'd0,  7'd1}: s1rd0 <= 3;
	     {1'd0,  7'd2}: s1rd0 <= 5;
	     {1'd0,  7'd3}: s1rd0 <= 7;
	     {1'd0,  7'd4}: s1rd0 <= 9;
	     {1'd0,  7'd5}: s1rd0 <= 11;
	     {1'd0,  7'd6}: s1rd0 <= 13;
	     {1'd0,  7'd7}: s1rd0 <= 15;
	     {1'd0,  7'd8}: s1rd0 <= 17;
	     {1'd0,  7'd9}: s1rd0 <= 19;
	     {1'd0,  7'd10}: s1rd0 <= 21;
	     {1'd0,  7'd11}: s1rd0 <= 23;
	     {1'd0,  7'd12}: s1rd0 <= 25;
	     {1'd0,  7'd13}: s1rd0 <= 27;
	     {1'd0,  7'd14}: s1rd0 <= 29;
	     {1'd0,  7'd15}: s1rd0 <= 31;
	     {1'd0,  7'd16}: s1rd0 <= 33;
	     {1'd0,  7'd17}: s1rd0 <= 35;
	     {1'd0,  7'd18}: s1rd0 <= 37;
	     {1'd0,  7'd19}: s1rd0 <= 39;
	     {1'd0,  7'd20}: s1rd0 <= 41;
	     {1'd0,  7'd21}: s1rd0 <= 43;
	     {1'd0,  7'd22}: s1rd0 <= 45;
	     {1'd0,  7'd23}: s1rd0 <= 47;
	     {1'd0,  7'd24}: s1rd0 <= 49;
	     {1'd0,  7'd25}: s1rd0 <= 51;
	     {1'd0,  7'd26}: s1rd0 <= 53;
	     {1'd0,  7'd27}: s1rd0 <= 55;
	     {1'd0,  7'd28}: s1rd0 <= 57;
	     {1'd0,  7'd29}: s1rd0 <= 59;
	     {1'd0,  7'd30}: s1rd0 <= 61;
	     {1'd0,  7'd31}: s1rd0 <= 63;
	     {1'd0,  7'd32}: s1rd0 <= 65;
	     {1'd0,  7'd33}: s1rd0 <= 67;
	     {1'd0,  7'd34}: s1rd0 <= 69;
	     {1'd0,  7'd35}: s1rd0 <= 71;
	     {1'd0,  7'd36}: s1rd0 <= 73;
	     {1'd0,  7'd37}: s1rd0 <= 75;
	     {1'd0,  7'd38}: s1rd0 <= 77;
	     {1'd0,  7'd39}: s1rd0 <= 79;
	     {1'd0,  7'd40}: s1rd0 <= 81;
	     {1'd0,  7'd41}: s1rd0 <= 83;
	     {1'd0,  7'd42}: s1rd0 <= 85;
	     {1'd0,  7'd43}: s1rd0 <= 87;
	     {1'd0,  7'd44}: s1rd0 <= 89;
	     {1'd0,  7'd45}: s1rd0 <= 91;
	     {1'd0,  7'd46}: s1rd0 <= 93;
	     {1'd0,  7'd47}: s1rd0 <= 95;
	     {1'd0,  7'd48}: s1rd0 <= 97;
	     {1'd0,  7'd49}: s1rd0 <= 99;
	     {1'd0,  7'd50}: s1rd0 <= 101;
	     {1'd0,  7'd51}: s1rd0 <= 103;
	     {1'd0,  7'd52}: s1rd0 <= 105;
	     {1'd0,  7'd53}: s1rd0 <= 107;
	     {1'd0,  7'd54}: s1rd0 <= 109;
	     {1'd0,  7'd55}: s1rd0 <= 111;
	     {1'd0,  7'd56}: s1rd0 <= 113;
	     {1'd0,  7'd57}: s1rd0 <= 115;
	     {1'd0,  7'd58}: s1rd0 <= 117;
	     {1'd0,  7'd59}: s1rd0 <= 119;
	     {1'd0,  7'd60}: s1rd0 <= 121;
	     {1'd0,  7'd61}: s1rd0 <= 123;
	     {1'd0,  7'd62}: s1rd0 <= 125;
	     {1'd0,  7'd63}: s1rd0 <= 127;
	     {1'd0,  7'd64}: s1rd0 <= 0;
	     {1'd0,  7'd65}: s1rd0 <= 2;
	     {1'd0,  7'd66}: s1rd0 <= 4;
	     {1'd0,  7'd67}: s1rd0 <= 6;
	     {1'd0,  7'd68}: s1rd0 <= 8;
	     {1'd0,  7'd69}: s1rd0 <= 10;
	     {1'd0,  7'd70}: s1rd0 <= 12;
	     {1'd0,  7'd71}: s1rd0 <= 14;
	     {1'd0,  7'd72}: s1rd0 <= 16;
	     {1'd0,  7'd73}: s1rd0 <= 18;
	     {1'd0,  7'd74}: s1rd0 <= 20;
	     {1'd0,  7'd75}: s1rd0 <= 22;
	     {1'd0,  7'd76}: s1rd0 <= 24;
	     {1'd0,  7'd77}: s1rd0 <= 26;
	     {1'd0,  7'd78}: s1rd0 <= 28;
	     {1'd0,  7'd79}: s1rd0 <= 30;
	     {1'd0,  7'd80}: s1rd0 <= 32;
	     {1'd0,  7'd81}: s1rd0 <= 34;
	     {1'd0,  7'd82}: s1rd0 <= 36;
	     {1'd0,  7'd83}: s1rd0 <= 38;
	     {1'd0,  7'd84}: s1rd0 <= 40;
	     {1'd0,  7'd85}: s1rd0 <= 42;
	     {1'd0,  7'd86}: s1rd0 <= 44;
	     {1'd0,  7'd87}: s1rd0 <= 46;
	     {1'd0,  7'd88}: s1rd0 <= 48;
	     {1'd0,  7'd89}: s1rd0 <= 50;
	     {1'd0,  7'd90}: s1rd0 <= 52;
	     {1'd0,  7'd91}: s1rd0 <= 54;
	     {1'd0,  7'd92}: s1rd0 <= 56;
	     {1'd0,  7'd93}: s1rd0 <= 58;
	     {1'd0,  7'd94}: s1rd0 <= 60;
	     {1'd0,  7'd95}: s1rd0 <= 62;
	     {1'd0,  7'd96}: s1rd0 <= 64;
	     {1'd0,  7'd97}: s1rd0 <= 66;
	     {1'd0,  7'd98}: s1rd0 <= 68;
	     {1'd0,  7'd99}: s1rd0 <= 70;
	     {1'd0,  7'd100}: s1rd0 <= 72;
	     {1'd0,  7'd101}: s1rd0 <= 74;
	     {1'd0,  7'd102}: s1rd0 <= 76;
	     {1'd0,  7'd103}: s1rd0 <= 78;
	     {1'd0,  7'd104}: s1rd0 <= 80;
	     {1'd0,  7'd105}: s1rd0 <= 82;
	     {1'd0,  7'd106}: s1rd0 <= 84;
	     {1'd0,  7'd107}: s1rd0 <= 86;
	     {1'd0,  7'd108}: s1rd0 <= 88;
	     {1'd0,  7'd109}: s1rd0 <= 90;
	     {1'd0,  7'd110}: s1rd0 <= 92;
	     {1'd0,  7'd111}: s1rd0 <= 94;
	     {1'd0,  7'd112}: s1rd0 <= 96;
	     {1'd0,  7'd113}: s1rd0 <= 98;
	     {1'd0,  7'd114}: s1rd0 <= 100;
	     {1'd0,  7'd115}: s1rd0 <= 102;
	     {1'd0,  7'd116}: s1rd0 <= 104;
	     {1'd0,  7'd117}: s1rd0 <= 106;
	     {1'd0,  7'd118}: s1rd0 <= 108;
	     {1'd0,  7'd119}: s1rd0 <= 110;
	     {1'd0,  7'd120}: s1rd0 <= 112;
	     {1'd0,  7'd121}: s1rd0 <= 114;
	     {1'd0,  7'd122}: s1rd0 <= 116;
	     {1'd0,  7'd123}: s1rd0 <= 118;
	     {1'd0,  7'd124}: s1rd0 <= 120;
	     {1'd0,  7'd125}: s1rd0 <= 122;
	     {1'd0,  7'd126}: s1rd0 <= 124;
	     {1'd0,  7'd127}: s1rd0 <= 126;
      endcase      
   end

// synthesis attribute rom_style of s1rd0 is "block"
   always @(posedge clk) begin
      case({tm8_d, s1rdloc})
	     {1'd0,  7'd0}: s1rd1 <= 0;
	     {1'd0,  7'd1}: s1rd1 <= 2;
	     {1'd0,  7'd2}: s1rd1 <= 4;
	     {1'd0,  7'd3}: s1rd1 <= 6;
	     {1'd0,  7'd4}: s1rd1 <= 8;
	     {1'd0,  7'd5}: s1rd1 <= 10;
	     {1'd0,  7'd6}: s1rd1 <= 12;
	     {1'd0,  7'd7}: s1rd1 <= 14;
	     {1'd0,  7'd8}: s1rd1 <= 16;
	     {1'd0,  7'd9}: s1rd1 <= 18;
	     {1'd0,  7'd10}: s1rd1 <= 20;
	     {1'd0,  7'd11}: s1rd1 <= 22;
	     {1'd0,  7'd12}: s1rd1 <= 24;
	     {1'd0,  7'd13}: s1rd1 <= 26;
	     {1'd0,  7'd14}: s1rd1 <= 28;
	     {1'd0,  7'd15}: s1rd1 <= 30;
	     {1'd0,  7'd16}: s1rd1 <= 32;
	     {1'd0,  7'd17}: s1rd1 <= 34;
	     {1'd0,  7'd18}: s1rd1 <= 36;
	     {1'd0,  7'd19}: s1rd1 <= 38;
	     {1'd0,  7'd20}: s1rd1 <= 40;
	     {1'd0,  7'd21}: s1rd1 <= 42;
	     {1'd0,  7'd22}: s1rd1 <= 44;
	     {1'd0,  7'd23}: s1rd1 <= 46;
	     {1'd0,  7'd24}: s1rd1 <= 48;
	     {1'd0,  7'd25}: s1rd1 <= 50;
	     {1'd0,  7'd26}: s1rd1 <= 52;
	     {1'd0,  7'd27}: s1rd1 <= 54;
	     {1'd0,  7'd28}: s1rd1 <= 56;
	     {1'd0,  7'd29}: s1rd1 <= 58;
	     {1'd0,  7'd30}: s1rd1 <= 60;
	     {1'd0,  7'd31}: s1rd1 <= 62;
	     {1'd0,  7'd32}: s1rd1 <= 64;
	     {1'd0,  7'd33}: s1rd1 <= 66;
	     {1'd0,  7'd34}: s1rd1 <= 68;
	     {1'd0,  7'd35}: s1rd1 <= 70;
	     {1'd0,  7'd36}: s1rd1 <= 72;
	     {1'd0,  7'd37}: s1rd1 <= 74;
	     {1'd0,  7'd38}: s1rd1 <= 76;
	     {1'd0,  7'd39}: s1rd1 <= 78;
	     {1'd0,  7'd40}: s1rd1 <= 80;
	     {1'd0,  7'd41}: s1rd1 <= 82;
	     {1'd0,  7'd42}: s1rd1 <= 84;
	     {1'd0,  7'd43}: s1rd1 <= 86;
	     {1'd0,  7'd44}: s1rd1 <= 88;
	     {1'd0,  7'd45}: s1rd1 <= 90;
	     {1'd0,  7'd46}: s1rd1 <= 92;
	     {1'd0,  7'd47}: s1rd1 <= 94;
	     {1'd0,  7'd48}: s1rd1 <= 96;
	     {1'd0,  7'd49}: s1rd1 <= 98;
	     {1'd0,  7'd50}: s1rd1 <= 100;
	     {1'd0,  7'd51}: s1rd1 <= 102;
	     {1'd0,  7'd52}: s1rd1 <= 104;
	     {1'd0,  7'd53}: s1rd1 <= 106;
	     {1'd0,  7'd54}: s1rd1 <= 108;
	     {1'd0,  7'd55}: s1rd1 <= 110;
	     {1'd0,  7'd56}: s1rd1 <= 112;
	     {1'd0,  7'd57}: s1rd1 <= 114;
	     {1'd0,  7'd58}: s1rd1 <= 116;
	     {1'd0,  7'd59}: s1rd1 <= 118;
	     {1'd0,  7'd60}: s1rd1 <= 120;
	     {1'd0,  7'd61}: s1rd1 <= 122;
	     {1'd0,  7'd62}: s1rd1 <= 124;
	     {1'd0,  7'd63}: s1rd1 <= 126;
	     {1'd0,  7'd64}: s1rd1 <= 1;
	     {1'd0,  7'd65}: s1rd1 <= 3;
	     {1'd0,  7'd66}: s1rd1 <= 5;
	     {1'd0,  7'd67}: s1rd1 <= 7;
	     {1'd0,  7'd68}: s1rd1 <= 9;
	     {1'd0,  7'd69}: s1rd1 <= 11;
	     {1'd0,  7'd70}: s1rd1 <= 13;
	     {1'd0,  7'd71}: s1rd1 <= 15;
	     {1'd0,  7'd72}: s1rd1 <= 17;
	     {1'd0,  7'd73}: s1rd1 <= 19;
	     {1'd0,  7'd74}: s1rd1 <= 21;
	     {1'd0,  7'd75}: s1rd1 <= 23;
	     {1'd0,  7'd76}: s1rd1 <= 25;
	     {1'd0,  7'd77}: s1rd1 <= 27;
	     {1'd0,  7'd78}: s1rd1 <= 29;
	     {1'd0,  7'd79}: s1rd1 <= 31;
	     {1'd0,  7'd80}: s1rd1 <= 33;
	     {1'd0,  7'd81}: s1rd1 <= 35;
	     {1'd0,  7'd82}: s1rd1 <= 37;
	     {1'd0,  7'd83}: s1rd1 <= 39;
	     {1'd0,  7'd84}: s1rd1 <= 41;
	     {1'd0,  7'd85}: s1rd1 <= 43;
	     {1'd0,  7'd86}: s1rd1 <= 45;
	     {1'd0,  7'd87}: s1rd1 <= 47;
	     {1'd0,  7'd88}: s1rd1 <= 49;
	     {1'd0,  7'd89}: s1rd1 <= 51;
	     {1'd0,  7'd90}: s1rd1 <= 53;
	     {1'd0,  7'd91}: s1rd1 <= 55;
	     {1'd0,  7'd92}: s1rd1 <= 57;
	     {1'd0,  7'd93}: s1rd1 <= 59;
	     {1'd0,  7'd94}: s1rd1 <= 61;
	     {1'd0,  7'd95}: s1rd1 <= 63;
	     {1'd0,  7'd96}: s1rd1 <= 65;
	     {1'd0,  7'd97}: s1rd1 <= 67;
	     {1'd0,  7'd98}: s1rd1 <= 69;
	     {1'd0,  7'd99}: s1rd1 <= 71;
	     {1'd0,  7'd100}: s1rd1 <= 73;
	     {1'd0,  7'd101}: s1rd1 <= 75;
	     {1'd0,  7'd102}: s1rd1 <= 77;
	     {1'd0,  7'd103}: s1rd1 <= 79;
	     {1'd0,  7'd104}: s1rd1 <= 81;
	     {1'd0,  7'd105}: s1rd1 <= 83;
	     {1'd0,  7'd106}: s1rd1 <= 85;
	     {1'd0,  7'd107}: s1rd1 <= 87;
	     {1'd0,  7'd108}: s1rd1 <= 89;
	     {1'd0,  7'd109}: s1rd1 <= 91;
	     {1'd0,  7'd110}: s1rd1 <= 93;
	     {1'd0,  7'd111}: s1rd1 <= 95;
	     {1'd0,  7'd112}: s1rd1 <= 97;
	     {1'd0,  7'd113}: s1rd1 <= 99;
	     {1'd0,  7'd114}: s1rd1 <= 101;
	     {1'd0,  7'd115}: s1rd1 <= 103;
	     {1'd0,  7'd116}: s1rd1 <= 105;
	     {1'd0,  7'd117}: s1rd1 <= 107;
	     {1'd0,  7'd118}: s1rd1 <= 109;
	     {1'd0,  7'd119}: s1rd1 <= 111;
	     {1'd0,  7'd120}: s1rd1 <= 113;
	     {1'd0,  7'd121}: s1rd1 <= 115;
	     {1'd0,  7'd122}: s1rd1 <= 117;
	     {1'd0,  7'd123}: s1rd1 <= 119;
	     {1'd0,  7'd124}: s1rd1 <= 121;
	     {1'd0,  7'd125}: s1rd1 <= 123;
	     {1'd0,  7'd126}: s1rd1 <= 125;
	     {1'd0,  7'd127}: s1rd1 <= 127;
      endcase      
   end

// synthesis attribute rom_style of s1rd1 is "block"
    swNet85420 sw(tm8_d, clk, muxCycle, t0, s0, t1, s1);

   always @(posedge clk) begin
      case({tm8_dd, writeCycle})
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
      case({tm8_dd, writeCycle})
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
