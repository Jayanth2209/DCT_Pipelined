package TbDCT2;

import DCT2 :: *;

import Vector :: *;

(* synthesize *)
module mkTbDCT2 (Empty);
	
	DCT2_ifc dct2 <- mkDCT2();
	
	// Input 
	Vector#(8, int) sig = replicate(0); //[188, 191, 191, 192, 4, 11, 13, 6]	
	sig[0] = 188;
	sig[1] = 191;
	sig[2] = 191;
	sig[3] = 192;
	sig[4] = 4;
	sig[5] = 11;
	sig[6] = 13;
	sig[7] = 6;
	
	Vector#(8, Reg#(int)) f <- replicateM(mkReg(0)); 
	
	Reg#(Bit#(2)) flag <- mkReg(0);
	
	rule start (flag == 0);
		dct2.fetch_Input (sig);
		flag <= 1;
	endrule
	
	rule transform (flag == 1);
		for (int i=0; i<8; i=i+1) begin
			f[i] <= dct2.result()[i];
		end
		flag <= 2; 
	endrule 
	
	rule result (flag == 2);
		for (int i=0; i<8; i=i+1) begin
			$display("%d ", f[i]);
		end
		$finish;
		flag <= 3;
	endrule
				
endmodule: mkTbDCT2

endpackage


