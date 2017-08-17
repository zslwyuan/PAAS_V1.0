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
`timescale 1ns/1ps
module order_25D_model_0 #(
	parameter	DSIZE	= 64
)(
	input				clock	,
	input [DSIZE-1:0]	id00    ,
	input [DSIZE-1:0]	id01    ,
	input [DSIZE-1:0]	id02    ,
	input [DSIZE-1:0]	id03    ,
	input [DSIZE-1:0]	id04    ,
	input [DSIZE-1:0]	id05    ,
	input [DSIZE-1:0]	id06    ,
	input [DSIZE-1:0]	id07    ,
	input [DSIZE-1:0]	id08    ,
	input [DSIZE-1:0]	id09    ,
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
	output [DSIZE-1:0]	od01    ,
	output [DSIZE-1:0]	od02    ,
	output [DSIZE-1:0]	od03    ,
	output [DSIZE-1:0]	od04    ,
	output [DSIZE-1:0]	od05    ,
	output [DSIZE-1:0]	od06    ,
	output [DSIZE-1:0]	od07    ,
	output [DSIZE-1:0]	od08    ,
	output [DSIZE-1:0]	od09    ,
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
	.indata0        (id00        	),
	.indata1        (id01        	),
	.indata2        (id02        	),
	.indata3        (id03        	),
       
	.outdata0       (od00            ),
	.outdata1       (od01            ),
	.outdata2       (od02            ),
	.outdata3       (od03            )
);      

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst1(
	.clock 			(clock 			),	
	.indata0        (id04        	),
	.indata1        (id05        	),
	.indata2        (id06        	),
	.indata3        (id07        	),
       
	.outdata0       (od04            ),
	.outdata1       (od05            ),
	.outdata2       (od06            ),
	.outdata3       (od07            )
);     

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst2(
	.clock 			(clock 			),	
	.indata0        (id08        	),
	.indata1        (id09        	),
	.indata2        (id10        	),
	.indata3        (id11        	),
       
	.outdata0       (od08            ),
	.outdata1       (od09            ),
	.outdata2       (od10           ),
	.outdata3       (od11           )
);   

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst3(
	.clock 			(clock 			),	
	.indata0        (id12        	),
	.indata1        (id13        	),
	.indata2        (id14        	),
	.indata3        (id15        	),
       
	.outdata0       (od12            ),
	.outdata1       (od13            ),
	.outdata2       (od14            ),
	.outdata3       (od15            )
);   

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst4(
	.clock 			(clock 			),	
	.indata0        (id16        	),
	.indata1        (id17        	),
	.indata2        (id18        	),
	.indata3        (id19        	),
       
	.outdata0       (od16            ),
	.outdata1       (od17            ),
	.outdata2       (od18            ),
	.outdata3       (od19            )
);  

order_1_4 #(
	.DSIZE		(DSIZE)
)order_1_4_inst5(
	.clock 			(clock 			),	
	.indata0        (id20        	),
	.indata1        (id21        	),
	.indata2        (id22        	),
	.indata3        (id23        	),
       
	.outdata0       (od20           ),
	.outdata1       (od21           ),
	.outdata2       (od22           ),
	.outdata3       (od23           )
);  

reg[DSIZE-1:0] r_od24;
assign od24=r_od24;

/*
cross_clk_sync #(                     
	.DSIZE    	(DSIZE),                 
	.LAT		(1)                   
)latency(                              
	clock,                              
	1'b1,                            
	id24,
	od24
);*/

always @(posedge clock)
begin
	r_od24<=id24;
end

endmodule
                                                                                  
