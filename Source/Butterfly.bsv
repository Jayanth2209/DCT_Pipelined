package Butterfly;

interface Butterfly_ifc;
	method Action butterfly (int x, int y);
	method int sum;
	method int diff;
endinterface

module mkButterfly (Butterfly_ifc);

	Reg#(int) s <- mkReg(0), d <- mkReg(0);
	Reg#(Bool) rflag <- mkReg(False);

method Action butterfly (int x, int y);
	s <= x + y;
	d <= x - y;
	rflag <= True;
endmethod

method int sum if (rflag);
	return s;
endmethod

method int diff if (rflag);
	return d;
endmethod

endmodule: mkButterfly

endpackage


