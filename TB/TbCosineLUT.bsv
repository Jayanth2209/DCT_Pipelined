package TbCosineLUT;

import CosineLUT :: *;

(* synthesize *)
module mkTbCosineLUT (Empty);

	LUT_ifc lut <- mkCosineLUT();
	
	rule compute;
		let csvals <- lut.cs(2);
		$display("COSINE = %d and SINE = %d", tpl_1(csvals), tpl_2(csvals));
		$finish;
	endrule

endmodule: mkTbCosineLUT

endpackage
