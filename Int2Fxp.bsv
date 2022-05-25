package Int2Fxp;

import FixedPoint :: *;
import Vector :: *;

interface Int2Fxp_ifc;
	method Action fetch_Input (Vector#(8, int) signal);
	method Vector#(8, FixedPoint#(32,4)) result();
endinterface

module mkInt2Fxp (Int2Fxp_ifc);

	Vector#(8, Reg#(int)) x <- replicateM(mkReg(0));

	Vector#(8, FixedPoint#(32,4)) f = replicate(0); 
	
	Reg#(Bool) flag <- mkReg(False);
	
	function Bool isEven (Bit#(32) a);
		return (a[0] == 0);
	endfunction
	
	function Vector#(8, FixedPoint#(32,4)) i2f (Vector#(8, Reg#(int)) vint, Vector#(8, FixedPoint#(32,4)) vfxp);
		for (int i=0; i<8; i=i+1) begin
			if (isEven(unpack(pack(i)))) begin
				vfxp[i] = fromInt(unpack(pack(vint[i])))/512;
			end else begin
				vfxp[i] = fromInt(unpack(pack(vint[i])))/131072;
			end	
		end
		return vfxp;
	endfunction		

	method Action fetch_Input (Vector#(8, int) signal) if (!flag);
		for (Integer j=0; j<8; j = j+1) begin
			x[j] <= unpack(pack(signal[j]));
		end
		flag <= True;
	endmethod
	
	method Vector#(8, FixedPoint#(32,4)) result() if (flag);
		return i2f(x,f);
	endmethod
	
endmodule: mkInt2Fxp

endpackage
