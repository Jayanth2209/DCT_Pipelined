package TbInt2Fxp;

import Int2Fxp :: *;

import FixedPoint :: *;
import Vector :: *;

(* synthesize *)
module mkTbInt2Fxp (Empty);
	
	Int2Fxp_ifc int2fxp <- mkInt2Fxp();
	
	// Input 
	Vector#(8, int) sig = replicate(0); //[137922, 1545180, -948, -692108, -362, -257730, -392, -53886]	
	sig[0] = 137922;
	sig[1] = 1545180;
	sig[2] = -948;
	sig[3] = -692108;
	sig[4] = -362;
	sig[5] = -257730;
	sig[6] = -392;
	sig[7] = -53886;
	
	Reg#(Bit#(2)) flag <- mkReg(0);
	
	rule start (flag == 0);
		int2fxp.fetch_Input (sig);
		flag <= 1;
	endrule
	
	rule result (flag == 1);
		let out = int2fxp.result();
		for (int i=0; i<8; i=i+1) begin
			fxptWrite(4, out[i]);
			$display(" ");
		end
		$finish;
		flag <= 2;
	endrule
				
endmodule: mkTbInt2Fxp

endpackage


