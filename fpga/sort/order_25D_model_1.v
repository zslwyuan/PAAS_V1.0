/*******************************************************
______________                ______________
______________ \  /\  /|\  /| ______________
______________  \/  \/ | \/ | ______________

--Module Name:
--Project Name:
--Chinese Description:
	
--English Description:
	
--Version:VERA.1.0.0
--Data modified:
--author:Young-ÎâÃ÷
--E-mail: wmy367@Gmail.com
--Data created:
________________________________________________________
********************************************************/

//verilator lint_off CASEX
`timescale 1ns/1ps
module order_25D_model_1 #(
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



order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst0(
	.clock 			(clock 			),	
	.indata0        (id02        	),
	.indata1        (id03        	),
	.indata2        (id04        	),
	.indata3        (id05        	),
       
	.outdata0       (od02            ),
	.outdata1       (od03            ),
	.outdata2       (od04            ),
	.outdata3       (od05            )
);      

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst1(
	.clock 			(clock 			),	
	.indata0        (id06        	),
	.indata1        (id07        	),
	.indata2        (id08        	),
	.indata3        (id09        	),
       
	.outdata0       (od06            ),
	.outdata1       (od07            ),
	.outdata2       (od08            ),
	.outdata3       (od09            )
);     

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst2(
	.clock 			(clock 			),	
	.indata0        (id10       	),
	.indata1        (id11       	),
	.indata2        (id12        	),
	.indata3        (id13        	),
       
	.outdata0       (od10           ),
	.outdata1       (od11           ),
	.outdata2       (od12           ),
	.outdata3       (od13           )
);   

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst3(
	.clock 			(clock 			),	
	.indata0        (id14        	),
	.indata1        (id15        	),
	.indata2        (id16        	),
	.indata3        (id17        	),
       
	.outdata0       (od14            ),
	.outdata1       (od15            ),
	.outdata2       (od16            ),
	.outdata3       (od17            )
);   

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst4(
	.clock 			(clock 			),	
	.indata0        (id18        	),
	.indata1        (id19        	),
	.indata2        (id20        	),
	.indata3        (id21        	),
       
	.outdata0       (od18            ),
	.outdata1       (od19            ),
	.outdata2       (od20            ),
	.outdata3       (od21            )
);  

order_1_3 #(
	.DSIZE		(DSIZE)
)order_1_3_inst5(
	.clock 			(clock 			),	
	.indata0        (id22        	),
	.indata1        (id23        	),
	.indata2        (id24        	),
       
	.outdata0       (od22           ),
	.outdata1       (od23           ),
	.outdata2       (od24           )
);  

/*cross_clk_sync #(                     
	.DSIZE    	(DSIZE*2),                 
	.LAT		(1)                   
)latency(                              
	clock,                              
	1'b1,                            
	{id00,id01},
	{od00,od01}
);*/ 

reg[DSIZE-1:0] r_od00;
reg[DSIZE-1:0] r_od01;
assign od00=r_od00;
assign od01=r_od01;

always @(posedge clock)
begin
	r_od00<=id00;
	r_od01<=id01;
end

endmodule
