package TbDCT3;

import DCT3 :: *;

import Vector :: *;

(* synthesize *)
module mkTbDCT3 (Empty);
	
	DCT3_ifc dct3 <- mkDCT3();
	
	// Input 
	Vector#(8, int) sig = replicate(0); //[380, 382, 0, -4, 4, 362, 4344, 6]	
	sig[0] = 380;
	sig[1] = 382;
	sig[2] = 0;
	sig[3] = -4;
	sig[4] = 4;
	sig[5] = 362;
	sig[6] = 4344;
	sig[7] = 6;
	
	Vector#(8, Reg#(int)) f <- replicateM(mkReg(0)); 
	
	Reg#(Bit#(2)) flag <- mkReg(0);
	
	rule start (flag == 0);
		dct3.fetch_Input (sig);
		flag <= 1;
	endrule
	
	rule transform (flag == 1);
		for (int i=0; i<8; i=i+1) begin
			f[i] <= dct3.result()[i];
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
				
endmodule: mkTbDCT3

endpackage


