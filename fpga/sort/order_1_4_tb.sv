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
module order_1_4_tb;

bit		clock;

clock_rst clk_c0(
	.clock		(clock),
	.rst		(rst_n)
);

defparam clk_c0.ACTIVE = 0;
initial begin:INITIAL_CLOCK
	clk_c0.run(10 , 1000/100 ,0);		//100	
end 
  
logic [7:0]	indata0	;
logic [7:0]	indata1	;
logic [7:0]	indata2	;
logic [7:0]	indata3	;

order_1_4 #(
	.DSIZE		(64)
)order_1_4_inst(
	.clock 			(clock 			),	
	.indata0        (indata0        ),
	.indata1        (indata1        ),
	.indata2        (indata2        ),
	.indata3        (indata3        ),
       
	.outdata0       (               ),
	.outdata1       (               ),
	.outdata2       (               ),
	.outdata3       (               )
);   

always@(posedge clock)begin
	indata0		= {$urandom_range(0,10)};
	indata1		= {$urandom_range(0,10)};
	indata2		= {$urandom_range(0,10)};
	indata3		= {$urandom_range(0,10)};
end

endmodule
