/*******************************************************
______________                ______________
______________ \  /\  /|\  /| ______________
______________  \/  \/ | \/ | ______________

--Module Name:
--Project Name:
--Chinese Description:
	合并  两种交换模式
--English Description:
	
--Version:VERA.1.0.0
--Data modified:
--author:Young-吴明
--E-mail: wmy367@Gmail.com
--Data created:
________________________________________________________
********************************************************/
`timescale 1ns/1ps
module order_25D_comodel #(
	parameter	DSIZE	= 64
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

wire[DSIZE-1:0]	co_od00	;		
wire[DSIZE-1:0]	co_od01  ;      
wire[DSIZE-1:0]	co_od02  ;      
wire[DSIZE-1:0]	co_od03  ;      
wire[DSIZE-1:0]	co_od04  ;      
wire[DSIZE-1:0]	co_od05  ;      
wire[DSIZE-1:0]	co_od06  ;      
wire[DSIZE-1:0]	co_od07  ;      
wire[DSIZE-1:0]	co_od08  ;      
wire[DSIZE-1:0]	co_od09  ;      
wire[DSIZE-1:0]	co_od10 ;      
wire[DSIZE-1:0]	co_od11 ;      
wire[DSIZE-1:0]	co_od12 ;      
wire[DSIZE-1:0]	co_od13 ;      
wire[DSIZE-1:0]	co_od14 ;      
wire[DSIZE-1:0]	co_od15 ;      
wire[DSIZE-1:0]	co_od16 ;      
wire[DSIZE-1:0]	co_od17 ;      
wire[DSIZE-1:0]	co_od18 ;      
wire[DSIZE-1:0]	co_od19 ;      
wire[DSIZE-1:0]	co_od20 ;      
wire[DSIZE-1:0]	co_od21 ;      
wire[DSIZE-1:0]	co_od22 ;      
wire[DSIZE-1:0]	co_od23 ;      
wire[DSIZE-1:0]	co_od24 ;      



order_25D_model_0 #(
	.DSIZE	(DSIZE)
)order_25D_model_0_inst(
	.clock		(clock		),			
	.id00       (id00        ),	.od00		(co_od00		),
	.id01       (id01        ),	.od01       (co_od01        ),
	.id02       (id02        ),	.od02       (co_od02        ),
	.id03       (id03        ),	.od03       (co_od03        ),
	.id04       (id04        ),	.od04       (co_od04        ),
	.id05       (id05        ),	.od05       (co_od05        ),
	.id06       (id06        ),	.od06       (co_od06        ),
	.id07       (id07        ),	.od07       (co_od07        ),
	.id08       (id08        ),	.od08       (co_od08        ),
	.id09       (id09        ),	.od09       (co_od09        ),
	.id10       (id10       ),	.od10       (co_od10       ),
	.id11       (id11       ),	.od11       (co_od11       ),
	.id12       (id12       ),	.od12       (co_od12       ),
	.id13       (id13       ),	.od13       (co_od13       ),
	.id14       (id14       ),	.od14       (co_od14       ),
	.id15       (id15       ),	.od15       (co_od15       ),
	.id16       (id16       ),	.od16       (co_od16       ),
	.id17       (id17       ),	.od17       (co_od17       ),
	.id18       (id18       ),	.od18       (co_od18       ),
	.id19       (id19       ),	.od19       (co_od19       ),
	.id20       (id20       ),	.od20       (co_od20       ),
	.id21       (id21       ),	.od21       (co_od21       ),
	.id22       (id22       ),	.od22       (co_od22       ),
	.id23       (id23       ),	.od23       (co_od23       ),
	.id24       (id24       ),	.od24       (co_od24       ) 			
		
);

order_25D_model_1 #(
	.DSIZE	(DSIZE)
)order_25D_model_1_inst(
	.clock		(clock		   ),			
	.id00       (co_od00        ),	.od00		(od00		),
	.id01       (co_od01        ),	.od01       (od01        ),
	.id02       (co_od02        ),	.od02       (od02        ),
	.id03       (co_od03        ),	.od03       (od03        ),
	.id04       (co_od04        ),	.od04       (od04        ),
	.id05       (co_od05        ),	.od05       (od05        ),
	.id06       (co_od06        ),	.od06       (od06        ),
	.id07       (co_od07        ),	.od07       (od07        ),
	.id08       (co_od08        ),	.od08       (od08        ),
	.id09       (co_od09        ),	.od09       (od09        ),
	.id10       (co_od10       ),	.od10       (od10       ),
	.id11       (co_od11       ),	.od11       (od11       ),
	.id12       (co_od12       ),	.od12       (od12       ),
	.id13       (co_od13       ),	.od13       (od13       ),
	.id14       (co_od14       ),	.od14       (od14       ),
	.id15       (co_od15       ),	.od15       (od15       ),
	.id16       (co_od16       ),	.od16       (od16       ),
	.id17       (co_od17       ),	.od17       (od17       ),
	.id18       (co_od18       ),	.od18       (od18       ),
	.id19       (co_od19       ),	.od19       (od19       ),
	.id20       (co_od20       ),	.od20       (od20       ),
	.id21       (co_od21       ),	.od21       (od21       ),
	.id22       (co_od22       ),	.od22       (od22       ),
	.id23       (co_od23       ),	.od23       (od23       ),
	.id24       (co_od24       ),	.od24       (od24       ) 			
		
); 

endmodule
