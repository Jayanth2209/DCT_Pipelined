package Top;

import DCT1 :: *;
import DCT2 :: *;
import DCT3 :: *;
import DCT4 :: *;
import Int2Fxp :: *;

import Vector :: *;
import FixedPoint :: *;

(* synthesize *)
module mkTop (Empty);
	
	DCT1_ifc dct1 <- mkDCT1();
	DCT2_ifc dct2 <- mkDCT2();
	DCT3_ifc dct3 <- mkDCT3();
	DCT4_ifc dct4 <- mkDCT4();
	
	Int2Fxp_ifc int2fxp <- mkInt2Fxp();
	
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
	
	Reg#(Bit#(3)) flag <- mkReg(0);
	
	function Vector#(8, int) r2i (Vector#(8, Reg#(int)) v);
		Vector#(8, int) x = replicate(0);
		for (int i=0; i<8; i=i+1) begin
			x[i] = readReg(v[i]);
		end
		return x;
	endfunction
	
	rule stage1 (flag == 0);
		dct1.fetch_Input (sig);
		flag <= 1;
	endrule
	
	rule stage2 (flag == 1);
		dct2.fetch_Input (r2i(dct1.result()));
		flag <= 2;
	endrule
	
	rule stage3 (flag == 2);
		dct3.fetch_Input (r2i(dct2.result()));
		flag <= 3;
	endrule
	
	rule stage4 (flag == 3);
		dct4.fetch_Input (r2i(dct3.result()));
		flag <= 4;
	endrule
	
	rule transform (flag == 4);
		int2fxp.fetch_Input (r2i(dct4.result()));
		flag <= 5; 
	endrule 
	
	rule result (flag == 5);
		let out = int2fxp.result();
		for (int i=0; i<8; i=i+1) begin
			fxptWrite(4, out[i]);
			$display(" ");
		end
		$finish;
		flag <= 6;
	endrule
	
endmodule: mkTop

endpackage
