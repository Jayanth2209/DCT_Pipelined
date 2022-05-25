package DCT4;

import Vector :: *;
import ConfigReg :: *;

import CosineLUT :: *;
import Butterfly :: *;

interface DCT4_ifc;
	method Action fetch_Input (Vector#(8, int) signal);
	method Vector#(8, Reg#(int)) result();
endinterface

module mkDCT4 (DCT4_ifc);

	Vector#(2, LUT_ifc) lut <- replicateM(mkCosineLUT);
	Vector#(3, Butterfly_ifc) fly <- replicateM(mkButterfly);
	
	Vector#(8, Reg#(int)) x <- replicateM(mkConfigReg(0));
	
	Reg#(Bit#(2)) stage <- mkReg(0);  // Flag Register
	
	// Butterfly Stage 4
	
	rule out4 (stage == 1);
		let cs1 <- lut[0].cs(1), cs3 <- lut[1].cs(3);
		x[1] <= (tpl_2(cs1))*x[4] + (tpl_1(cs1))*x[7]; 
		x[3] <= -((tpl_2(cs3))*x[5]) + (tpl_1(cs3))*x[6]; 
		x[4] <= x[1];
		x[5] <= (tpl_1(cs3))*x[5] + (tpl_2(cs3))*x[6]; 
		x[6] <= x[3];
		x[7] <= -((tpl_1(cs1))*x[4]) + (tpl_2(cs1))*x[7]; 
		stage <= 2;
	endrule: out4
	
	method Action fetch_Input (Vector#(8, int) signal) if (stage == 0);
		for (Integer j=0; j<8; j = j+1) begin
			x[j] <= unpack(pack(signal[j]));
		end
		stage <= 1;
	endmethod
	
	method Vector#(8, Reg#(int)) result() if (stage == 2);
		return x;
	endmethod
	
endmodule: mkDCT4

endpackage
	
	

