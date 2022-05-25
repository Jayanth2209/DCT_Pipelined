package DCT1;

import Vector :: *;

import Butterfly :: *;

interface DCT1_ifc;
	method Action fetch_Input (Vector#(8, int) signal);
	method Vector#(8, Reg#(int)) result();
endinterface

module mkDCT1 (DCT1_ifc);

	Vector#(4, Butterfly_ifc) fly <- replicateM(mkButterfly);
	
	Vector#(8, Reg#(int)) x <- replicateM(mkReg(0));
	
	Reg#(Bit#(3)) stage <- mkReg(0);  // Flag Register
	
	// Butterfly Stage 1
	rule fly1 (stage == 1);	
		for (int i=0; i<4; i=i+1) begin
			fly[i].butterfly(x[i], x[7-i]);
		end
		stage <= 2;
	endrule: fly1
	
	rule out1 (stage == 2);
		for (int i=0; i<4; i=i+1) begin
			x[i] <= fly[i].sum;
			x[7-i] <= fly[i].diff;
		end
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
	
endmodule: mkDCT1

/*function int cos8(int n);
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

function int sin8(int t);
	return cos8(8-t);
endfunction*/

endpackage
	
	

