package TbButterfly;

import Butterfly :: *;

(* synthesize *)
module mkTbButterfly (Empty);
	
	Butterfly_ifc fly <- mkButterfly();
	
	Reg#(Bool) flag <- mkReg(False);
	
	rule start;
		fly.butterfly(56,63);
		flag <= True;
	endrule
	
	rule show if (flag);
		$display("SUM = %d and DIFF = %d", fly.sum, fly.diff);
		$finish;
	endrule 
				
endmodule: mkTbButterfly

endpackage
