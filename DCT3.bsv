package DCT3;

import Vector :: *;
import ConfigReg :: *;

import CosineLUT :: *;
import Butterfly :: *;

interface DCT3_ifc;
	method Action fetch_Input (Vector#(8, int) signal);
	method Vector#(8, Reg#(int)) result();
endinterface

module mkDCT3 (DCT3_ifc);

	Vector#(2, LUT_ifc) lut <- replicateM(mkCosineLUT);
	Vector#(3, Butterfly_ifc) fly <- replicateM(mkButterfly);
	
	Vector#(8, Reg#(int)) x <- replicateM(mkConfigReg(0));
	
	Reg#(Bit#(2)) stage <- mkReg(0);  // Flag Register
	
	// Butterfly Stage 2
	rule fly3 (stage == 1);
		fly[0].butterfly(x[0], x[1]);
		fly[1].butterfly(x[4]<<8, x[5]);
		fly[2].butterfly(x[7]<<8, x[6]);
		stage <= 2;
	endrule: fly3	
	
	rule out3 (stage == 2);
		let cs2 <- lut[0].cs(2), cs4 <- lut[1].cs(4);
		x[0] <= (tpl_1(cs4))*(fly[0].sum);
		x[1] <= (tpl_1(cs4))*(fly[0].diff);
		x[2] <= (tpl_2(cs2))*x[2] + (tpl_1(cs2))*x[3]; 
		x[3] <= -((tpl_1(cs2))*x[2]) + (tpl_2(cs2))*x[3]; 
		x[4] <= fly[1].sum;
		x[5] <= fly[1].diff;
		x[6] <= fly[2].diff;
		x[7] <= fly[2].sum; 
		stage <= 3;
	endrule: out3
	
	method Action fetch_Input (Vector#(8, int) signal) if (stage == 0);
		for (Integer j=0; j<8; j = j+1) begin
			x[j] <= unpack(pack(signal[j]));
		end
		stage <= 1;
	endmethod
	
	method Vector#(8, Reg#(int)) result() if (stage == 3);
		return x;
	endmethod
	
endmodule: mkDCT3

endpackage
	
	

