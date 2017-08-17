/*******************************************************
______________                ______________
______________ \  /\  /|\  /| ______________
______________  \/  \/ | \/ | ______________

--Module Name:
--Project Name:
--Chinese Description:
	ÅÅÐò3¸öÊý
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
module order_1_3 #(
	parameter DSIZE	= 64
)(       
	input					clock		,
	input [DSIZE-1:0]		indata0     ,
	input [DSIZE-1:0]		indata1     ,
	input [DSIZE-1:0]		indata2     ,
                                        
	output [DSIZE-1:0]		outdata0    ,
	output [DSIZE-1:0]		outdata1    ,
	output [DSIZE-1:0]		outdata2    
);

wire		cmp_0_1;
wire		cmp_0_2;
wire		cmp_1_2;

assign		cmp_0_1	= !(indata0 < indata1);
assign		cmp_0_2	= !(indata0 < indata2);
assign		cmp_1_2	= !(indata1 < indata2);

wire [2:0]	cmp;
assign		cmp		=    {	cmp_0_1,
							cmp_0_2,
							cmp_1_2    };   

/*  
        0

    c0    c1
 
 1     c2     2

*/


reg [DSIZE-1:0]	cmpdata [2:0];

always@(posedge clock)begin
	casex(cmp)
	3'b11x:	cmpdata[0]	<= indata0;	//D0>d1 D0>d2 
	3'b0x1:	cmpdata[0]	<= indata1; //d0<D1 D1>d2
	3'bx00:	cmpdata[0]	<= indata2; //d0<D2 d1<D2                        
	default:cmpdata[0]	<= indata0; 
	endcase                        
end                         

always@(posedge clock)begin
	casex(cmp)
	3'b01x,3'b10x:	cmpdata[1]	<= indata0;	//D0-01-d1 D0-01-d2 
	3'b1x1,3'b0x0:	cmpdata[1]	<= indata1; //d0-01-D1 D1-01-d2 
	3'bx01,3'bx10:	cmpdata[1]	<= indata2; //d0-01-D2 d1-01-D2 
	default:		cmpdata[1]	<= indata0;
	endcase
end

always@(posedge clock)begin
	casex(cmp)
	3'b00x:	cmpdata[2]	<= indata0;	//D0<d1 D0<d2 
	3'b1x0:	cmpdata[2]	<= indata1; //d0>D1 D1<d2 
	3'bx11:	cmpdata[2]	<= indata2; //d0>D2 d1>D2                        
	default:cmpdata[2]	<= indata0;
	endcase   
end
assign	outdata0	= cmpdata[0];
assign	outdata1	= cmpdata[1];
assign	outdata2	= cmpdata[2];

endmodule                 
