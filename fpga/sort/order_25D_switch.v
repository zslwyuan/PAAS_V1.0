/*******************************************************
______________                ______________
______________ \  /\  /|\  /| ______________
______________  \/  \/ | \/ | ______________

--Module Name:
--Project Name:
--Chinese Description:
	排序 25个数  TIMES设成 12
--English Description:
	
--Version:VERA.1.0.0
--Data modified:
--author:Young-吴明
--E-mail: wmy367@Gmail.com
--Data created:
________________________________________________________
********************************************************/
`timescale 1ns/1ps
module order_25D_switch #(
	parameter	TIMES		= 12,
	parameter	DSIZE		= 64
)(
	input				clock	,
	input [DSIZE-1:0]	id00     ,
	input [DSIZE-1:0]	id01     ,
	input [DSIZE-1:0]	id02     ,
	input [DSIZE-1:0]	id03     ,
	input [DSIZE-1:0]	id04     ,
	input [DSIZE-1:0]	id05     ,
	input [DSIZE-1:0]	id06     ,
	input [DSIZE-1:0]	id07     ,
	input [DSIZE-1:0]	id08     ,
	input [DSIZE-1:0]	id09     ,
	input [DSIZE-1:0]	id10    ,
	input [DSIZE-1:0]	id11    ,
	input [DSIZE-1:0]	id12    ,
	input [DSIZE-1:0]	id13    ,
	input [DSIZE-1:0]	id14    ,
	input [DSIZE-1:0]	id15    ,
	input [DSIZE-1:0]	id16    ,
	input [DSIZE-1:0]	id17    ,
	input [DSIZE-1:0]	id18    ,
	input [DSIZE-1:0]	id19    ,
	input [DSIZE-1:0]	id20    ,
	input [DSIZE-1:0]	id21    ,
	input [DSIZE-1:0]	id22    ,
	input [DSIZE-1:0]	id23    ,
	input [DSIZE-1:0]	id24    ,

	output [DSIZE-1:0]	od00	,
	output [DSIZE-1:0]	od01     ,
	output [DSIZE-1:0]	od02     ,
	output [DSIZE-1:0]	od03     ,
	output [DSIZE-1:0]	od04     ,
	output [DSIZE-1:0]	od05     ,
	output [DSIZE-1:0]	od06     ,
	output [DSIZE-1:0]	od07     ,
	output [DSIZE-1:0]	od08     ,
	output [DSIZE-1:0]	od09     ,
	output [DSIZE-1:0]	od10    ,
	output [DSIZE-1:0]	od11    ,
	output [DSIZE-1:0]	od12    ,
	output [DSIZE-1:0]	od13    ,
	output [DSIZE-1:0]	od14    ,
	output [DSIZE-1:0]	od15    ,
	output [DSIZE-1:0]	od16    ,
	output [DSIZE-1:0]	od17    ,
	output [DSIZE-1:0]	od18    ,
	output [DSIZE-1:0]	od19    ,
	output [DSIZE-1:0]	od20    ,
	output [DSIZE-1:0]	od21    ,
	output [DSIZE-1:0]	od22    ,
	output [DSIZE-1:0]	od23    ,
	output [DSIZE-1:0]	od24    
);  

localparam	TIMES_2 = TIMES/2;

   
wire[DSIZE*TIMES/2-1:0]		imd00 	,	omd00	; 
wire[DSIZE*TIMES/2-1:0]		imd01 	,	omd01    ;
wire[DSIZE*TIMES/2-1:0]		imd02 	,	omd02    ;
wire[DSIZE*TIMES/2-1:0]		imd03 	,	omd03    ;
wire[DSIZE*TIMES/2-1:0]		imd04 	,	omd04    ;
wire[DSIZE*TIMES/2-1:0]		imd05 	,	omd05    ;
wire[DSIZE*TIMES/2-1:0]		imd06 	,	omd06    ;
wire[DSIZE*TIMES/2-1:0]		imd07 	,	omd07    ;
wire[DSIZE*TIMES/2-1:0]		imd08 	,	omd08    ;
wire[DSIZE*TIMES/2-1:0]		imd09 	,	omd09    ;
wire[DSIZE*TIMES/2-1:0]		imd10	,	omd10   ;
wire[DSIZE*TIMES/2-1:0]		imd11	,	omd11   ;
wire[DSIZE*TIMES/2-1:0]		imd12	,	omd12   ;
wire[DSIZE*TIMES/2-1:0]		imd13	,	omd13   ;
wire[DSIZE*TIMES/2-1:0]		imd14	,	omd14   ;
wire[DSIZE*TIMES/2-1:0]		imd15	,	omd15   ;
wire[DSIZE*TIMES/2-1:0]		imd16	,	omd16   ;
wire[DSIZE*TIMES/2-1:0]		imd17	,	omd17   ;
wire[DSIZE*TIMES/2-1:0]		imd18	,	omd18   ;
wire[DSIZE*TIMES/2-1:0]		imd19	,	omd19   ;
wire[DSIZE*TIMES/2-1:0]		imd20	,	omd20   ;
wire[DSIZE*TIMES/2-1:0]		imd21	,	omd21   ;
wire[DSIZE*TIMES/2-1:0]		imd22	,	omd22   ;
wire[DSIZE*TIMES/2-1:0]		imd23	,	omd23   ;
wire[DSIZE*TIMES/2-1:0]		imd24	,	omd24   ;


genvar II;
generate begin
for (II=0;II<TIMES_2;II=II+1)begin
order_25D_comodel #(
	.DSIZE	(DSIZE)
)order_25D_comodel_inst(
	.clock		(clock		),			
	.id00       (imd00[II*DSIZE+:DSIZE]       ),	.od00		(omd00[II*DSIZE+:DSIZE]   ),
	.id01       (imd01[II*DSIZE+:DSIZE]       ),	.od01       (omd01[II*DSIZE+:DSIZE]   ),
	.id02       (imd02[II*DSIZE+:DSIZE]       ),	.od02       (omd02[II*DSIZE+:DSIZE]   ),
	.id03       (imd03[II*DSIZE+:DSIZE]       ),	.od03       (omd03[II*DSIZE+:DSIZE]   ),
	.id04       (imd04[II*DSIZE+:DSIZE]       ),	.od04       (omd04[II*DSIZE+:DSIZE]   ),
	.id05       (imd05[II*DSIZE+:DSIZE]       ),	.od05       (omd05[II*DSIZE+:DSIZE]   ),
	.id06       (imd06[II*DSIZE+:DSIZE]       ),	.od06       (omd06[II*DSIZE+:DSIZE]   ),
	.id07       (imd07[II*DSIZE+:DSIZE]       ),	.od07       (omd07[II*DSIZE+:DSIZE]   ),
	.id08       (imd08[II*DSIZE+:DSIZE]       ),	.od08       (omd08[II*DSIZE+:DSIZE]   ),
	.id09       (imd09[II*DSIZE+:DSIZE]       ),	.od09       (omd09[II*DSIZE+:DSIZE]   ),
	.id10       (imd10[II*DSIZE+:DSIZE]       ),	.od10       (omd10[II*DSIZE+:DSIZE]   ),
	.id11       (imd11[II*DSIZE+:DSIZE]       ),	.od11       (omd11[II*DSIZE+:DSIZE]   ),
	.id12       (imd12[II*DSIZE+:DSIZE]       ),	.od12       (omd12[II*DSIZE+:DSIZE]   ),
	.id13       (imd13[II*DSIZE+:DSIZE]       ),	.od13       (omd13[II*DSIZE+:DSIZE]   ),
	.id14       (imd14[II*DSIZE+:DSIZE]       ),	.od14       (omd14[II*DSIZE+:DSIZE]   ),
	.id15       (imd15[II*DSIZE+:DSIZE]       ),	.od15       (omd15[II*DSIZE+:DSIZE]   ),
	.id16       (imd16[II*DSIZE+:DSIZE]       ),	.od16       (omd16[II*DSIZE+:DSIZE]   ),
	.id17       (imd17[II*DSIZE+:DSIZE]       ),	.od17       (omd17[II*DSIZE+:DSIZE]   ),
	.id18       (imd18[II*DSIZE+:DSIZE]       ),	.od18       (omd18[II*DSIZE+:DSIZE]   ),
	.id19       (imd19[II*DSIZE+:DSIZE]       ),	.od19       (omd19[II*DSIZE+:DSIZE]   ),
	.id20       (imd20[II*DSIZE+:DSIZE]       ),	.od20       (omd20[II*DSIZE+:DSIZE]   ),
	.id21       (imd21[II*DSIZE+:DSIZE]       ),	.od21       (omd21[II*DSIZE+:DSIZE]   ),
	.id22       (imd22[II*DSIZE+:DSIZE]       ),	.od22       (omd22[II*DSIZE+:DSIZE]   ),
	.id23       (imd23[II*DSIZE+:DSIZE]       ),	.od23       (omd23[II*DSIZE+:DSIZE]   ),
	.id24       (imd24[II*DSIZE+:DSIZE]      ),		.od24       (omd24[II*DSIZE+:DSIZE]   ) 			
		
);
if(II<TIMES_2-1)begin
assign	imd00[(II+1)*DSIZE+:DSIZE]		= omd00[II*DSIZE+:DSIZE]		; 
assign	imd01[(II+1)*DSIZE+:DSIZE]		= omd01[II*DSIZE+:DSIZE]		; 
assign	imd02[(II+1)*DSIZE+:DSIZE]		= omd02[II*DSIZE+:DSIZE]		; 
assign	imd03[(II+1)*DSIZE+:DSIZE]		= omd03[II*DSIZE+:DSIZE]		; 
assign	imd04[(II+1)*DSIZE+:DSIZE]		= omd04[II*DSIZE+:DSIZE]		; 
assign	imd05[(II+1)*DSIZE+:DSIZE]		= omd05[II*DSIZE+:DSIZE]		; 
assign	imd06[(II+1)*DSIZE+:DSIZE]		= omd06[II*DSIZE+:DSIZE]		; 
assign	imd07[(II+1)*DSIZE+:DSIZE]		= omd07[II*DSIZE+:DSIZE]		; 
assign	imd08[(II+1)*DSIZE+:DSIZE]		= omd08[II*DSIZE+:DSIZE]		; 
assign	imd09[(II+1)*DSIZE+:DSIZE]		= omd09[II*DSIZE+:DSIZE]		; 
assign	imd10[(II+1)*DSIZE+:DSIZE]		= omd10[II*DSIZE+:DSIZE]		; 
assign	imd11[(II+1)*DSIZE+:DSIZE]		= omd11[II*DSIZE+:DSIZE]		; 
assign	imd12[(II+1)*DSIZE+:DSIZE]		= omd12[II*DSIZE+:DSIZE]		; 
assign	imd13[(II+1)*DSIZE+:DSIZE]		= omd13[II*DSIZE+:DSIZE]		; 
assign	imd14[(II+1)*DSIZE+:DSIZE]		= omd14[II*DSIZE+:DSIZE]		; 
assign	imd15[(II+1)*DSIZE+:DSIZE]		= omd15[II*DSIZE+:DSIZE]		; 
assign	imd16[(II+1)*DSIZE+:DSIZE]		= omd16[II*DSIZE+:DSIZE]		; 
assign	imd17[(II+1)*DSIZE+:DSIZE]		= omd17[II*DSIZE+:DSIZE]		; 
assign	imd18[(II+1)*DSIZE+:DSIZE]		= omd18[II*DSIZE+:DSIZE]		; 
assign	imd19[(II+1)*DSIZE+:DSIZE]		= omd19[II*DSIZE+:DSIZE]		; 
assign	imd20[(II+1)*DSIZE+:DSIZE]		= omd20[II*DSIZE+:DSIZE]		; 
assign	imd21[(II+1)*DSIZE+:DSIZE]		= omd21[II*DSIZE+:DSIZE]		; 
assign	imd22[(II+1)*DSIZE+:DSIZE]		= omd22[II*DSIZE+:DSIZE]		; 
assign	imd23[(II+1)*DSIZE+:DSIZE]		= omd23[II*DSIZE+:DSIZE]		; 
assign	imd24[(II+1)*DSIZE+:DSIZE]		= omd24[II*DSIZE+:DSIZE]		; 
end
end
end
endgenerate

assign	imd00[0*DSIZE+:DSIZE]		= id00 		; 
assign	imd01[0*DSIZE+:DSIZE]		= id01 		; 
assign	imd02[0*DSIZE+:DSIZE]		= id02 		; 
assign	imd03[0*DSIZE+:DSIZE]		= id03 		; 
assign	imd04[0*DSIZE+:DSIZE]		= id04 		; 
assign	imd05[0*DSIZE+:DSIZE]		= id05 		; 
assign	imd06[0*DSIZE+:DSIZE]		= id06 		; 
assign	imd07[0*DSIZE+:DSIZE]		= id07 		; 
assign	imd08[0*DSIZE+:DSIZE]		= id08 		; 
assign	imd09[0*DSIZE+:DSIZE]		= id09 		; 
assign	imd10[0*DSIZE+:DSIZE]		= id10		; 
assign	imd11[0*DSIZE+:DSIZE]		= id11		; 
assign	imd12[0*DSIZE+:DSIZE]		= id12		; 
assign	imd13[0*DSIZE+:DSIZE]		= id13		; 
assign	imd14[0*DSIZE+:DSIZE]		= id14		; 
assign	imd15[0*DSIZE+:DSIZE]		= id15		; 
assign	imd16[0*DSIZE+:DSIZE]		= id16		; 
assign	imd17[0*DSIZE+:DSIZE]		= id17		; 
assign	imd18[0*DSIZE+:DSIZE]		= id18		; 
assign	imd19[0*DSIZE+:DSIZE]		= id19		; 
assign	imd20[0*DSIZE+:DSIZE]		= id20		; 
assign	imd21[0*DSIZE+:DSIZE]		= id21		; 
assign	imd22[0*DSIZE+:DSIZE]		= id22		; 
assign	imd23[0*DSIZE+:DSIZE]		= id23		; 
assign	imd24[0*DSIZE+:DSIZE]		= id24		; 

assign	od00 	= omd00[(TIMES_2-1)*DSIZE+:DSIZE]			;  
assign	od01 	= omd01[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od02 	= omd02[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od03 	= omd03[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od04 	= omd04[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od05 	= omd05[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od06 	= omd06[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od07 	= omd07[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od08 	= omd08[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od09 	= omd09[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od10	= omd10[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od11	= omd11[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od12	= omd12[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od13	= omd13[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od14	= omd14[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od15	= omd15[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od16	= omd16[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od17	= omd17[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od18	= omd18[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od19	= omd19[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od20	= omd20[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od21	= omd21[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od22	= omd22[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od23	= omd23[(TIMES_2-1)*DSIZE+:DSIZE]			; 
assign	od24	= omd24[(TIMES_2-1)*DSIZE+:DSIZE]			; 

endmodule

