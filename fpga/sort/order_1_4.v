/*******************************************************
______________                ______________
______________ \  /\  /|\  /| ______________
______________  \/  \/ | \/ | ______________

--Module Name:
--Project Name:
--Chinese Description:
	ÅÅÐò4¸öÊý
--English Description:
	
--Version:VERA.1.0.0
--Data modified:
--author:Young-ÎâÃ÷
--E-mail: wmy367@Gmail.com
--Data created:
________________________________________________________
********************************************************/

//verilator lint_off CASEX
//verilator lint_off CASEOVERLAP
`timescale 1ns/1ps
module order_1_4 #(
	parameter DSIZE	= 64
)(
	input					clock		,
	input [DSIZE-1:0]		indata0     ,
	input [DSIZE-1:0]		indata1     ,
	input [DSIZE-1:0]		indata2     ,
	input [DSIZE-1:0]		indata3     ,
                                        
	output [DSIZE-1:0]		outdata0    ,
	output [DSIZE-1:0]		outdata1    ,
	output [DSIZE-1:0]		outdata2    ,
	output [DSIZE-1:0]		outdata3
);

wire		cmp_0_1;
wire		cmp_0_2;
wire		cmp_0_3;
wire		cmp_1_2;
wire		cmp_1_3;
wire		cmp_2_3;

assign		cmp_0_1	= !(indata0 < indata1);
assign		cmp_0_2	= !(indata0 < indata2);
assign		cmp_0_3	= !(indata0 < indata3);
assign		cmp_1_2	= !(indata1 < indata2);
assign		cmp_1_3	= !(indata1 < indata3);
assign		cmp_2_3	= !(indata2 < indata3);
wire [5:0]	cmp;
assign		cmp		=    {	cmp_0_1,
							cmp_0_2,
							cmp_0_3,
							cmp_1_2,
							cmp_1_3,
							cmp_2_3    };   

/*  
   	    0
  	c0  |   c1
       c2
		|
1-- c3------c2--2
        |
		c2    
    c4  |   c5
        3
*/


reg [DSIZE-1:0]	cmpdata [3:0];

always@(posedge clock)begin
	casex(cmp)
	6'b111_xxx:	cmpdata[0]	<= indata0;	//D0>d1 D0>d2 D0>d3
	6'b0xx_11x:	cmpdata[0]	<= indata1; //d0<D1 D1>d2 D1>d3
	6'bx0x_0x1:	cmpdata[0]	<= indata2; //d0<D2 d1<D2 D2>d3                        
	6'bxx0_x00:	cmpdata[0]	<= indata3; //d0<D3 d1<D3 d2<D3
	default:	cmpdata[0]	<= indata0; 
	endcase                        
end                         

always@(posedge clock)begin
	casex(cmp)
	6'b011_xxx,6'b101_xxx,6'b110_xxx:	cmpdata[1]	<= indata0;	//D0-01-d1 D0-01-d2 D0-01-d3
	6'b1xx_11x,6'b0xx_01x,6'b0xx_10x:	cmpdata[1]	<= indata1; //d0-01-D1 D1-01-d2 D1-01-d3
	6'bx1x_0x1,6'bx0x_1x1,6'bx0x_0x0:	cmpdata[1]	<= indata2; //d0-01-D2 d1-01-D2 D2-01-d3
	6'bxx1_x00,6'bxx0_x10,6'bxx0_x01:	cmpdata[1]	<= indata3; //d0-01-D3 d1-01-D3 d2-01-D3
	default:							cmpdata[1]	<= indata0;
	endcase
end

always@(posedge clock)begin
	casex(cmp)
	6'b001_xxx,6'b100_xxx,6'b010_xxx:	cmpdata[2]	<= indata0;	//D0-01-d1 D0-01-d2 D0-01-d3
	6'b1xx_01x,6'b0xx_00x,6'b1xx_10x:	cmpdata[2]	<= indata1; //d0-01-D1 D1-01-d2 D1-01-d3
	6'bx1x_1x1,6'bx0x_1x0,6'bx1x_0x0:	cmpdata[2]	<= indata2; //d0-01-D2 d1-01-D2 D2-01-d3
	6'bxx1_x10,6'bxx0_x11,6'bxx1_x01:	cmpdata[2]	<= indata3; //d0-01-D3 d1-01-D3 d2-01-D3
	default:							cmpdata[2]	<= indata0;
	endcase
end
always@(posedge clock)begin
	casex(cmp)
	6'b000_xxx:	cmpdata[3]	<= indata0;	//D0<d1 D0<d2 D0<d3
	6'b1xx_00x:	cmpdata[3]	<= indata1; //d0>D1 D1<d2 D1<d3
	6'bx1x_1x0:	cmpdata[3]	<= indata2; //d0>D2 d1>D2 D2<d3                        
	6'bxx1_x11:	cmpdata[3]	<= indata3; //d0>D3 d1>D3 d2>D3
	default:	cmpdata[3]	<= indata0;
	endcase   
end
assign	outdata0	= cmpdata[0];
assign	outdata1	= cmpdata[1];
assign	outdata2	= cmpdata[2];
assign	outdata3	= cmpdata[3];

endmodule                 
                                                 
                         
