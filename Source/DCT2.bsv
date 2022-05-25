package DCT2;

import Vector :: *;

import CosineLUT :: *;
import Butterfly :: *;

interface DCT2_ifc;
	method Action fetch_Input (Vector#(8, int) signal);
	method Vector#(8, Reg#(int)) result();
endinterface

module mkDCT2 (DCT2_ifc);

	LUT_ifc lut <- mkCosineLUT();
	Vector#(3, Butterfly_ifc) fly <- replicateM(mkButterfly);
	
	Vector#(8, Reg#(int)) x <- replicateM(mkReg(0));
	
	Reg#(Bit#(2)) stage <- mkReg(0);  // Flag Register
	
	// Butterfly Stage 2
	rule fly2 (stage == 1);
		fly[0].butterfly(x[0], x[3]);
		fly[1].butterfly(x[1], x[2]);
		fly[2].butterfly(x[5], x[6]);
		stage <= 2;
	endrule: fly2
	
	rule out1 (stage == 2);
		let cs4 <- lut.cs(4);
		x[0] <= fly[0].sum;
		x[1] <= fly[1].sum;
		x[2] <= fly[1].diff;
		x[3] <= fly[0].diff;
		x[5] <= -(tpl_1(cs4))*(fly[2].diff);
		x[6] <= (tpl_1(cs4))*(fly[2].sum);
		stage <= 3;
	endrule: out1
	
	method Action fetch_Input (Vector#(8, int) signal) if (stage == 0);
		for (Integer j=0; j<8; j = j+1) begin
			x[j] <= unpack(pack(signal[j]));
		end
		stage <= 1;
	endmethod
	
	method Vector#(8, Reg#(int)) result() if (stage == 3);
		return x;
	endmethod
	
endmodule: mkDCT2

endpackage
	
	

