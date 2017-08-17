/*******************************************************
______________                ______________
______________ \  /\  /|\  /| ______________
______________  \/  \/ | \/ | ______________

--Module Name:
--Project Name:
--Chinese Description:
	生成随机测试数据
--English Description:
	
--Version:VERA.1.0.0
--Data modified:
--author:Young-吴明
--E-mail: wmy367@Gmail.com
--Data created:
________________________________________________________
********************************************************/
`timescale 1ns/1ps
module order_25D_switch_tb; 

bit		clock;                                  
                                                
clock_rst clk_c0(                               
	.clock		(clock),                        
	.rst		(rst_n)                         
);                                              
                                                
defparam clk_c0.ACTIVE = 0;                     
initial begin:INITIAL_CLOCK                     
	clk_c0.run(10 , 1000/100 ,0);		//100	
end      


class Packet;
	randc bit [7:0]	kind;
	constraint c { kind inside {[0:24]} ;}
endclass

Packet p;
initial begin
	p=new();
end                                      

logic[7:0]	id00 	, od00	;	  
logic[7:0]	id01  	, od01   ; 
logic[7:0]	id02  	, od02   ; 
logic[7:0]	id03  	, od03   ; 
logic[7:0]	id04  	, od04   ; 
logic[7:0]	id05  	, od05   ; 
logic[7:0]	id06  	, od06   ; 
logic[7:0]	id07  	, od07   ; 
logic[7:0]	id08  	, od08   ; 
logic[7:0]	id09  	, od09   ; 
logic[7:0]	id10 	, od10  ; 
logic[7:0]	id11 	, od11  ; 
logic[7:0]	id12 	, od12  ; 
logic[7:0]	id13 	, od13  ; 
logic[7:0]	id14 	, od14  ; 
logic[7:0]	id15 	, od15  ; 
logic[7:0]	id16 	, od16  ; 
logic[7:0]	id17 	, od17  ; 
logic[7:0]	id18 	, od18  ; 
logic[7:0]	id19 	, od19  ; 
logic[7:0]	id20 	, od20  ; 
logic[7:0]	id21 	, od21  ; 
logic[7:0]	id22 	, od22  ; 
logic[7:0]	id23 	, od23  ; 
logic[7:0]	id24 	, od24  ; 

always@(posedge clock)begin
	id00 	= p.kind;p.randomize();	
	id01  	= p.kind;p.randomize();
	id02  	= p.kind;p.randomize();
	id03  	= p.kind;p.randomize();
	id04  	= p.kind;p.randomize();
	id05  	= p.kind;p.randomize();
	id06  	= p.kind;p.randomize();
	id07  	= p.kind;p.randomize();
	id08  	= p.kind;p.randomize();
	id09  	= p.kind;p.randomize();
	id10 	= p.kind;p.randomize();
	id11 	= p.kind;p.randomize();
	id12 	= p.kind;p.randomize();
	id13 	= p.kind;p.randomize();
	id14 	= p.kind;p.randomize();
	id15 	= p.kind;p.randomize();
	id16 	= p.kind;p.randomize();
	id17 	= p.kind;p.randomize();
	id18 	= p.kind;p.randomize();
	id19 	= p.kind;p.randomize();
	id20 	= p.kind;p.randomize();
	id21 	= p.kind;p.randomize();
	id22 	= p.kind;p.randomize();
	id23 	= p.kind;p.randomize();
	id24 	= p.kind;p.randomize();
end


order_25D_switch #(         
	.TIMES				(12	),                                   
	.DSIZE				(64	)                                             
)order_25D_switch(                                        
	.clock		(clock		),			                        
	.id00       (id00        ),	.od00		(od00		),   
	.id01       (id01        ),	.od01       (od01        ),   
	.id02       (id02        ),	.od02       (od02        ),   
	.id03       (id03        ),	.od03       (od03        ),   
	.id04       (id04        ),	.od04       (od04        ),   
	.id05       (id05        ),	.od05       (od05        ),   
	.id06       (id06        ),	.od06       (od06        ),   
	.id07       (id07        ),	.od07       (od07        ),   
	.id08       (id08        ),	.od08       (od08        ),   
	.id09       (id09        ),	.od09       (od09        ),   
	.id10       (id10       ),	.od10       (od10       ),   
	.id11       (id11       ),	.od11       (od11       ),   
	.id12       (id12       ),	.od12       (od12       ),   
	.id13       (id13       ),	.od13       (od13       ),   
	.id14       (id14       ),	.od14       (od14       ),   
	.id15       (id15       ),	.od15       (od15       ),   
	.id16       (id16       ),	.od16       (od16       ),   
	.id17       (id17       ),	.od17       (od17       ),   
	.id18       (id18       ),	.od18       (od18       ),   
	.id19       (id19       ),	.od19       (od19       ),   
	.id20       (id20       ),	.od20       (od20       ),   
	.id21       (id21       ),	.od21       (od21       ),   
	.id22       (id22       ),	.od22       (od22       ),   
	.id23       (id23       ),	.od23       (od23       ),   
	.id24       (id24       ),	.od24       (od24       ) 	
		                                                        
);     


endmodule
                                                         
