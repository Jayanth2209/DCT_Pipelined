package TbDCT1;

import DCT1 :: *;

import Vector :: *;

(* synthesize *)
module mkTbDCT1 (Empty);
	
	DCT1_ifc dct1 <- mkDCT1();
	
	// Input 
	Vector#(8, int) sig = replicate(0); //[97, 102, 101, 98, 94, 90, 89, 91]	
	sig[0] = 97;
	sig[1] = 102;
	sig[2] = 101;
	sig[3] = 98;
	sig[4] = 94;
	sig[5] = 90;
	sig[6] = 89;
	sig[7] = 91;
	
	Vector#(8, Reg#(int)) f <- replicateM(mkReg(0)); 
	
	Reg#(Bit#(2)) flag <- mkReg(0);
	
	rule start (flag == 0);
		dct1.fetch_Input (sig);
		flag <= 1;
	endrule
	
	rule transform (flag == 1);
		for (int i=0; i<8; i=i+1) begin
			f[i] <= dct1.result()[i];
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
				
endmodule: mkTbDCT1

endpackage


