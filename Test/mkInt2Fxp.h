/*
 * Generated by Bluespec Compiler, version 2021.12.1-27-g9a7d5e05 (build 9a7d5e05)
 * 
 * On Wed May 25 20:01:50 IST 2022
 * 
 */

/* Generation options: */
#ifndef __mkInt2Fxp_h__
#define __mkInt2Fxp_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkInt2Fxp module */
class MOD_mkInt2Fxp : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Reg<tUInt8> INST_flag;
  MOD_Reg<tUInt32> INST_x_0;
  MOD_Reg<tUInt32> INST_x_1;
  MOD_Reg<tUInt32> INST_x_2;
  MOD_Reg<tUInt32> INST_x_3;
  MOD_Reg<tUInt32> INST_x_4;
  MOD_Reg<tUInt32> INST_x_5;
  MOD_Reg<tUInt32> INST_x_6;
  MOD_Reg<tUInt32> INST_x_7;
 
 /* Constructor */
 public:
  MOD_mkInt2Fxp(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_fetch_Input_signal;
  tUWide PORT_result;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_flag__h614;
 
 /* Local definitions */
 private:
  tUWide DEF_IF_NOT_IF_NOT_IF_SEXT_x_7_0_1_BIT_32_2_THEN_NE_ETC___d246;
  tUWide DEF_IF_NOT_IF_NOT_IF_SEXT_x_7_0_1_BIT_32_2_THEN_NE_ETC___d167;
  tUWide DEF_IF_NOT_IF_NOT_IF_SEXT_x_7_0_1_BIT_32_2_THEN_NE_ETC___d88;
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  void METH_fetch_Input(tUWide ARG_fetch_Input_signal);
  tUInt8 METH_RDY_fetch_Input();
  tUWide METH_result();
  tUInt8 METH_RDY_result();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkInt2Fxp &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkInt2Fxp &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkInt2Fxp &backing);
};

#endif /* ifndef __mkInt2Fxp_h__ */
