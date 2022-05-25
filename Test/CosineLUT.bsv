package CosineLUT;

interface LUT_ifc;
	method ActionValue#(Tuple2#(int, int)) cs (int n);
endinterface

module mkCosineLUT (LUT_ifc);

	function int cos8(int n);
		case(n) matches
			0: return 256;
			1: return 251;
			2: return 237;
			3: return 213;
			4: return 181;
			5: return 142;
			6: return 98;
			7: return 50;
			8: return 0;
		endcase
	endfunction
	
	method ActionValue#(Tuple2#(int, int)) cs (int n);
		let c = cos8(n);
		let s = cos8(8-n);
		return tuple2(c, s);
	endmethod
	
endmodule: mkCosineLUT

endpackage
