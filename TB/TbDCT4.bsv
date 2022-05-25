package TbDCT4;

import DCT4 :: *;

import Vector :: *;

(* synthesize *)
module mkTbDCT4 (Empty);
	
	DCT4_ifc dct4 <- mkDCT4();
	
	// Input 
	Vector#(8, int) sig = replicate(0); //[137922, -362, -948, -392, 1386, 662, -2808, 5880]	
	sig[0] = 137922;
	sig[1] = -362;
	sig[2] = -948;
	sig[3] = -392;
	sig[4] = 1386;
	sig[5] = 662;
	sig[6] = -2808;
	sig[7] = 5880;
	
	Vector#(8, Reg#(int)) f <- replicateM(mkReg(0)); 
	
	Reg#(Bit#(2)) flag <- mkReg(0);
	
	rule start (flag == 0);
		dct4.fetch_Input (sig);
		flag <= 1;
	endrule
	
	rule transform (flag == 1);
		for (int i=0; i<8; i=i+1) begin
			f[i] <= dct4.result()[i];
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
				
endmodule: mkTbDCT4

endpackage


