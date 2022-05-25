/*
 * Generated by Bluespec Compiler, version 2021.12.1-27-g9a7d5e05 (build 9a7d5e05)
 * 
 * On Wed May 25 20:01:50 IST 2022
 * 
 */
#include "bluesim_primitives.h"
#include "mkDCT1.h"


/* Constructor */
MOD_mkDCT1::MOD_mkDCT1(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_fly_0(simHdl, "fly_0", this),
    INST_fly_1(simHdl, "fly_1", this),
    INST_fly_2(simHdl, "fly_2", this),
    INST_fly_3(simHdl, "fly_3", this),
    INST_stage(simHdl, "stage", this, 3u, (tUInt8)0u, (tUInt8)0u),
    INST_x_0(simHdl, "x_0", this, 32u, 0u, (tUInt8)0u),
    INST_x_1(simHdl, "x_1", this, 32u, 0u, (tUInt8)0u),
    INST_x_2(simHdl, "x_2", this, 32u, 0u, (tUInt8)0u),
    INST_x_3(simHdl, "x_3", this, 32u, 0u, (tUInt8)0u),
    INST_x_4(simHdl, "x_4", this, 32u, 0u, (tUInt8)0u),
    INST_x_5(simHdl, "x_5", this, 32u, 0u, (tUInt8)0u),
    INST_x_6(simHdl, "x_6", this, 32u, 0u, (tUInt8)0u),
    INST_x_7(simHdl, "x_7", this, 32u, 0u, (tUInt8)0u),
    PORT_RST_N((tUInt8)1u)
{
  PORT_fetch_Input_signal.setSize(256u);
  PORT_fetch_Input_signal.clear();
  symbol_count = 17u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkDCT1::init_symbols_0()
{
  init_symbol(&symbols[0u], "fetch_Input_signal", SYM_PORT, &PORT_fetch_Input_signal, 256u);
  init_symbol(&symbols[1u], "fly_0", SYM_MODULE, &INST_fly_0);
  init_symbol(&symbols[2u], "fly_1", SYM_MODULE, &INST_fly_1);
  init_symbol(&symbols[3u], "fly_2", SYM_MODULE, &INST_fly_2);
  init_symbol(&symbols[4u], "fly_3", SYM_MODULE, &INST_fly_3);
  init_symbol(&symbols[5u], "RL_fly1", SYM_RULE);
  init_symbol(&symbols[6u], "RL_out1", SYM_RULE);
  init_symbol(&symbols[7u], "stage", SYM_MODULE, &INST_stage);
  init_symbol(&symbols[8u], "x_0", SYM_MODULE, &INST_x_0);
  init_symbol(&symbols[9u], "x_1", SYM_MODULE, &INST_x_1);
  init_symbol(&symbols[10u], "x_2", SYM_MODULE, &INST_x_2);
  init_symbol(&symbols[11u], "x_3", SYM_MODULE, &INST_x_3);
  init_symbol(&symbols[12u], "x_4", SYM_MODULE, &INST_x_4);
  init_symbol(&symbols[13u], "x_5", SYM_MODULE, &INST_x_5);
  init_symbol(&symbols[14u], "x_6", SYM_MODULE, &INST_x_6);
  init_symbol(&symbols[15u], "x_7", SYM_MODULE, &INST_x_7);
  init_symbol(&symbols[16u], "x__h1809", SYM_DEF, &DEF_x__h1809, 3u);
}


/* Rule actions */

void MOD_mkDCT1::RL_fly1()
{
  DEF_b__h1468 = INST_x_7.METH_read();
  DEF_b__h1570 = INST_x_6.METH_read();
  DEF_b__h1672 = INST_x_5.METH_read();
  DEF_b__h1774 = INST_x_4.METH_read();
  DEF_b__h1756 = INST_x_3.METH_read();
  DEF_b__h1552 = INST_x_1.METH_read();
  DEF_b__h1654 = INST_x_2.METH_read();
  DEF_b__h1443 = INST_x_0.METH_read();
  INST_fly_0.METH_butterfly(DEF_b__h1443, DEF_b__h1468);
  INST_fly_1.METH_butterfly(DEF_b__h1552, DEF_b__h1570);
  INST_fly_2.METH_butterfly(DEF_b__h1654, DEF_b__h1672);
  INST_fly_3.METH_butterfly(DEF_b__h1756, DEF_b__h1774);
  INST_stage.METH_write((tUInt8)2u);
}

void MOD_mkDCT1::RL_out1()
{
  tUInt32 DEF_fly_0_sum____d28;
  tUInt32 DEF_fly_0_diff____d29;
  tUInt32 DEF_fly_1_sum____d30;
  tUInt32 DEF_fly_1_diff____d31;
  tUInt32 DEF_fly_2_sum____d32;
  tUInt32 DEF_fly_2_diff____d33;
  tUInt32 DEF_fly_3_sum____d34;
  tUInt32 DEF_fly_3_diff____d35;
  DEF_fly_3_diff____d35 = INST_fly_3.METH_diff();
  DEF_fly_3_sum____d34 = INST_fly_3.METH_sum();
  DEF_fly_2_diff____d33 = INST_fly_2.METH_diff();
  DEF_fly_2_sum____d32 = INST_fly_2.METH_sum();
  DEF_fly_1_diff____d31 = INST_fly_1.METH_diff();
  DEF_fly_1_sum____d30 = INST_fly_1.METH_sum();
  DEF_fly_0_diff____d29 = INST_fly_0.METH_diff();
  DEF_fly_0_sum____d28 = INST_fly_0.METH_sum();
  INST_x_0.METH_write(DEF_fly_0_sum____d28);
  INST_x_7.METH_write(DEF_fly_0_diff____d29);
  INST_x_1.METH_write(DEF_fly_1_sum____d30);
  INST_x_6.METH_write(DEF_fly_1_diff____d31);
  INST_x_2.METH_write(DEF_fly_2_sum____d32);
  INST_x_5.METH_write(DEF_fly_2_diff____d33);
  INST_x_3.METH_write(DEF_fly_3_sum____d34);
  INST_x_4.METH_write(DEF_fly_3_diff____d35);
  INST_stage.METH_write((tUInt8)3u);
}


/* Methods */

void MOD_mkDCT1::METH_fetch_Input(tUWide ARG_fetch_Input_signal)
{
  tUInt32 DEF_b__h2639;
  tUInt32 DEF_b__h2916;
  tUInt32 DEF_b__h3007;
  tUInt32 DEF_b__h3098;
  tUInt32 DEF_b__h3189;
  tUInt32 DEF_b__h3280;
  tUInt32 DEF_b__h3371;
  tUInt32 DEF_b__h3462;
  PORT_fetch_Input_signal = ARG_fetch_Input_signal;
  DEF_b__h3462 = ARG_fetch_Input_signal.get_whole_word(7u);
  DEF_b__h3371 = ARG_fetch_Input_signal.get_whole_word(6u);
  DEF_b__h3280 = ARG_fetch_Input_signal.get_whole_word(5u);
  DEF_b__h3189 = ARG_fetch_Input_signal.get_whole_word(4u);
  DEF_b__h3098 = ARG_fetch_Input_signal.get_whole_word(3u);
  DEF_b__h3007 = ARG_fetch_Input_signal.get_whole_word(2u);
  DEF_b__h2916 = ARG_fetch_Input_signal.get_whole_word(1u);
  DEF_b__h2639 = ARG_fetch_Input_signal.get_whole_word(0u);
  INST_x_0.METH_write(DEF_b__h2639);
  INST_x_1.METH_write(DEF_b__h2916);
  INST_x_2.METH_write(DEF_b__h3007);
  INST_x_3.METH_write(DEF_b__h3098);
  INST_x_4.METH_write(DEF_b__h3189);
  INST_x_5.METH_write(DEF_b__h3280);
  INST_x_6.METH_write(DEF_b__h3371);
  INST_x_7.METH_write(DEF_b__h3462);
  INST_stage.METH_write((tUInt8)1u);
}

tUInt8 MOD_mkDCT1::METH_RDY_fetch_Input()
{
  tUInt8 DEF_CAN_FIRE_fetch_Input;
  tUInt8 PORT_RDY_fetch_Input;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_CAN_FIRE_fetch_Input = DEF_x__h1809 == (tUInt8)0u;
  PORT_RDY_fetch_Input = DEF_CAN_FIRE_fetch_Input;
  return PORT_RDY_fetch_Input;
}

void MOD_mkDCT1::METH_result_0__write(tUInt32 ARG_result_0__write_1)
{
  INST_x_0.METH_write(ARG_result_0__write_1);
}

tUInt8 MOD_mkDCT1::METH_RDY_result_0__write()
{
  tUInt8 DEF_CAN_FIRE_result_0__write;
  tUInt8 PORT_RDY_result_0__write;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_0__write = DEF_stage_EQ_3___d44;
  PORT_RDY_result_0__write = DEF_CAN_FIRE_result_0__write;
  return PORT_RDY_result_0__write;
}

tUInt32 MOD_mkDCT1::METH_result_0__read()
{
  tUInt32 PORT_result_0__read;
  DEF_b__h1443 = INST_x_0.METH_read();
  PORT_result_0__read = DEF_b__h1443;
  return PORT_result_0__read;
}

tUInt8 MOD_mkDCT1::METH_RDY_result_0__read()
{
  tUInt8 DEF_CAN_FIRE_result_0__read;
  tUInt8 PORT_RDY_result_0__read;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_0__read = DEF_stage_EQ_3___d44;
  PORT_RDY_result_0__read = DEF_CAN_FIRE_result_0__read;
  return PORT_RDY_result_0__read;
}

void MOD_mkDCT1::METH_result_1__write(tUInt32 ARG_result_1__write_1)
{
  INST_x_1.METH_write(ARG_result_1__write_1);
}

tUInt8 MOD_mkDCT1::METH_RDY_result_1__write()
{
  tUInt8 DEF_CAN_FIRE_result_1__write;
  tUInt8 PORT_RDY_result_1__write;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_1__write = DEF_stage_EQ_3___d44;
  PORT_RDY_result_1__write = DEF_CAN_FIRE_result_1__write;
  return PORT_RDY_result_1__write;
}

tUInt32 MOD_mkDCT1::METH_result_1__read()
{
  tUInt32 PORT_result_1__read;
  DEF_b__h1552 = INST_x_1.METH_read();
  PORT_result_1__read = DEF_b__h1552;
  return PORT_result_1__read;
}

tUInt8 MOD_mkDCT1::METH_RDY_result_1__read()
{
  tUInt8 DEF_CAN_FIRE_result_1__read;
  tUInt8 PORT_RDY_result_1__read;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_1__read = DEF_stage_EQ_3___d44;
  PORT_RDY_result_1__read = DEF_CAN_FIRE_result_1__read;
  return PORT_RDY_result_1__read;
}

void MOD_mkDCT1::METH_result_2__write(tUInt32 ARG_result_2__write_1)
{
  INST_x_2.METH_write(ARG_result_2__write_1);
}

tUInt8 MOD_mkDCT1::METH_RDY_result_2__write()
{
  tUInt8 DEF_CAN_FIRE_result_2__write;
  tUInt8 PORT_RDY_result_2__write;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_2__write = DEF_stage_EQ_3___d44;
  PORT_RDY_result_2__write = DEF_CAN_FIRE_result_2__write;
  return PORT_RDY_result_2__write;
}

tUInt32 MOD_mkDCT1::METH_result_2__read()
{
  tUInt32 PORT_result_2__read;
  DEF_b__h1654 = INST_x_2.METH_read();
  PORT_result_2__read = DEF_b__h1654;
  return PORT_result_2__read;
}

tUInt8 MOD_mkDCT1::METH_RDY_result_2__read()
{
  tUInt8 DEF_CAN_FIRE_result_2__read;
  tUInt8 PORT_RDY_result_2__read;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_2__read = DEF_stage_EQ_3___d44;
  PORT_RDY_result_2__read = DEF_CAN_FIRE_result_2__read;
  return PORT_RDY_result_2__read;
}

void MOD_mkDCT1::METH_result_3__write(tUInt32 ARG_result_3__write_1)
{
  INST_x_3.METH_write(ARG_result_3__write_1);
}

tUInt8 MOD_mkDCT1::METH_RDY_result_3__write()
{
  tUInt8 DEF_CAN_FIRE_result_3__write;
  tUInt8 PORT_RDY_result_3__write;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_3__write = DEF_stage_EQ_3___d44;
  PORT_RDY_result_3__write = DEF_CAN_FIRE_result_3__write;
  return PORT_RDY_result_3__write;
}

tUInt32 MOD_mkDCT1::METH_result_3__read()
{
  tUInt32 PORT_result_3__read;
  DEF_b__h1756 = INST_x_3.METH_read();
  PORT_result_3__read = DEF_b__h1756;
  return PORT_result_3__read;
}

tUInt8 MOD_mkDCT1::METH_RDY_result_3__read()
{
  tUInt8 DEF_CAN_FIRE_result_3__read;
  tUInt8 PORT_RDY_result_3__read;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_3__read = DEF_stage_EQ_3___d44;
  PORT_RDY_result_3__read = DEF_CAN_FIRE_result_3__read;
  return PORT_RDY_result_3__read;
}

void MOD_mkDCT1::METH_result_4__write(tUInt32 ARG_result_4__write_1)
{
  INST_x_4.METH_write(ARG_result_4__write_1);
}

tUInt8 MOD_mkDCT1::METH_RDY_result_4__write()
{
  tUInt8 DEF_CAN_FIRE_result_4__write;
  tUInt8 PORT_RDY_result_4__write;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_4__write = DEF_stage_EQ_3___d44;
  PORT_RDY_result_4__write = DEF_CAN_FIRE_result_4__write;
  return PORT_RDY_result_4__write;
}

tUInt32 MOD_mkDCT1::METH_result_4__read()
{
  tUInt32 PORT_result_4__read;
  DEF_b__h1774 = INST_x_4.METH_read();
  PORT_result_4__read = DEF_b__h1774;
  return PORT_result_4__read;
}

tUInt8 MOD_mkDCT1::METH_RDY_result_4__read()
{
  tUInt8 DEF_CAN_FIRE_result_4__read;
  tUInt8 PORT_RDY_result_4__read;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_4__read = DEF_stage_EQ_3___d44;
  PORT_RDY_result_4__read = DEF_CAN_FIRE_result_4__read;
  return PORT_RDY_result_4__read;
}

void MOD_mkDCT1::METH_result_5__write(tUInt32 ARG_result_5__write_1)
{
  INST_x_5.METH_write(ARG_result_5__write_1);
}

tUInt8 MOD_mkDCT1::METH_RDY_result_5__write()
{
  tUInt8 DEF_CAN_FIRE_result_5__write;
  tUInt8 PORT_RDY_result_5__write;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_5__write = DEF_stage_EQ_3___d44;
  PORT_RDY_result_5__write = DEF_CAN_FIRE_result_5__write;
  return PORT_RDY_result_5__write;
}

tUInt32 MOD_mkDCT1::METH_result_5__read()
{
  tUInt32 PORT_result_5__read;
  DEF_b__h1672 = INST_x_5.METH_read();
  PORT_result_5__read = DEF_b__h1672;
  return PORT_result_5__read;
}

tUInt8 MOD_mkDCT1::METH_RDY_result_5__read()
{
  tUInt8 DEF_CAN_FIRE_result_5__read;
  tUInt8 PORT_RDY_result_5__read;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_5__read = DEF_stage_EQ_3___d44;
  PORT_RDY_result_5__read = DEF_CAN_FIRE_result_5__read;
  return PORT_RDY_result_5__read;
}

void MOD_mkDCT1::METH_result_6__write(tUInt32 ARG_result_6__write_1)
{
  INST_x_6.METH_write(ARG_result_6__write_1);
}

tUInt8 MOD_mkDCT1::METH_RDY_result_6__write()
{
  tUInt8 DEF_CAN_FIRE_result_6__write;
  tUInt8 PORT_RDY_result_6__write;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_6__write = DEF_stage_EQ_3___d44;
  PORT_RDY_result_6__write = DEF_CAN_FIRE_result_6__write;
  return PORT_RDY_result_6__write;
}

tUInt32 MOD_mkDCT1::METH_result_6__read()
{
  tUInt32 PORT_result_6__read;
  DEF_b__h1570 = INST_x_6.METH_read();
  PORT_result_6__read = DEF_b__h1570;
  return PORT_result_6__read;
}

tUInt8 MOD_mkDCT1::METH_RDY_result_6__read()
{
  tUInt8 DEF_CAN_FIRE_result_6__read;
  tUInt8 PORT_RDY_result_6__read;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_6__read = DEF_stage_EQ_3___d44;
  PORT_RDY_result_6__read = DEF_CAN_FIRE_result_6__read;
  return PORT_RDY_result_6__read;
}

void MOD_mkDCT1::METH_result_7__write(tUInt32 ARG_result_7__write_1)
{
  INST_x_7.METH_write(ARG_result_7__write_1);
}

tUInt8 MOD_mkDCT1::METH_RDY_result_7__write()
{
  tUInt8 DEF_CAN_FIRE_result_7__write;
  tUInt8 PORT_RDY_result_7__write;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_7__write = DEF_stage_EQ_3___d44;
  PORT_RDY_result_7__write = DEF_CAN_FIRE_result_7__write;
  return PORT_RDY_result_7__write;
}

tUInt32 MOD_mkDCT1::METH_result_7__read()
{
  tUInt32 PORT_result_7__read;
  DEF_b__h1468 = INST_x_7.METH_read();
  PORT_result_7__read = DEF_b__h1468;
  return PORT_result_7__read;
}

tUInt8 MOD_mkDCT1::METH_RDY_result_7__read()
{
  tUInt8 DEF_CAN_FIRE_result_7__read;
  tUInt8 PORT_RDY_result_7__read;
  DEF_x__h1809 = INST_stage.METH_read();
  DEF_stage_EQ_3___d44 = DEF_x__h1809 == (tUInt8)3u;
  DEF_CAN_FIRE_result_7__read = DEF_stage_EQ_3___d44;
  PORT_RDY_result_7__read = DEF_CAN_FIRE_result_7__read;
  return PORT_RDY_result_7__read;
}


/* Reset routines */

void MOD_mkDCT1::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_x_7.reset_RST(ARG_rst_in);
  INST_x_6.reset_RST(ARG_rst_in);
  INST_x_5.reset_RST(ARG_rst_in);
  INST_x_4.reset_RST(ARG_rst_in);
  INST_x_3.reset_RST(ARG_rst_in);
  INST_x_2.reset_RST(ARG_rst_in);
  INST_x_1.reset_RST(ARG_rst_in);
  INST_x_0.reset_RST(ARG_rst_in);
  INST_stage.reset_RST(ARG_rst_in);
  INST_fly_3.reset_RST_N(ARG_rst_in);
  INST_fly_2.reset_RST_N(ARG_rst_in);
  INST_fly_1.reset_RST_N(ARG_rst_in);
  INST_fly_0.reset_RST_N(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkDCT1::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkDCT1::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_fly_0.dump_state(indent + 2u);
  INST_fly_1.dump_state(indent + 2u);
  INST_fly_2.dump_state(indent + 2u);
  INST_fly_3.dump_state(indent + 2u);
  INST_stage.dump_state(indent + 2u);
  INST_x_0.dump_state(indent + 2u);
  INST_x_1.dump_state(indent + 2u);
  INST_x_2.dump_state(indent + 2u);
  INST_x_3.dump_state(indent + 2u);
  INST_x_4.dump_state(indent + 2u);
  INST_x_5.dump_state(indent + 2u);
  INST_x_6.dump_state(indent + 2u);
  INST_x_7.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkDCT1::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 21u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h1443", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h1468", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h1552", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h1570", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h1654", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h1672", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h1756", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h1774", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "stage_EQ_3___d44", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h1809", 3u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "fetch_Input_signal", 256u);
  num = INST_stage.dump_VCD_defs(num);
  num = INST_x_0.dump_VCD_defs(num);
  num = INST_x_1.dump_VCD_defs(num);
  num = INST_x_2.dump_VCD_defs(num);
  num = INST_x_3.dump_VCD_defs(num);
  num = INST_x_4.dump_VCD_defs(num);
  num = INST_x_5.dump_VCD_defs(num);
  num = INST_x_6.dump_VCD_defs(num);
  num = INST_x_7.dump_VCD_defs(num);
  if (levels != 1u)
  {
    unsigned int l = levels == 0u ? 0u : levels - 1u;
    num = INST_fly_0.dump_VCD_defs(l);
    num = INST_fly_1.dump_VCD_defs(l);
    num = INST_fly_2.dump_VCD_defs(l);
    num = INST_fly_3.dump_VCD_defs(l);
  }
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkDCT1::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkDCT1 &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
  if (levels != 1u)
    vcd_submodules(dt, levels - 1u, backing);
}

void MOD_mkDCT1::vcd_defs(tVCDDumpType dt, MOD_mkDCT1 &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 3u);
    vcd_write_x(sim_hdl, num++, 256u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_b__h1443) != DEF_b__h1443)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h1443, 32u);
	backing.DEF_b__h1443 = DEF_b__h1443;
      }
      ++num;
      if ((backing.DEF_b__h1468) != DEF_b__h1468)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h1468, 32u);
	backing.DEF_b__h1468 = DEF_b__h1468;
      }
      ++num;
      if ((backing.DEF_b__h1552) != DEF_b__h1552)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h1552, 32u);
	backing.DEF_b__h1552 = DEF_b__h1552;
      }
      ++num;
      if ((backing.DEF_b__h1570) != DEF_b__h1570)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h1570, 32u);
	backing.DEF_b__h1570 = DEF_b__h1570;
      }
      ++num;
      if ((backing.DEF_b__h1654) != DEF_b__h1654)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h1654, 32u);
	backing.DEF_b__h1654 = DEF_b__h1654;
      }
      ++num;
      if ((backing.DEF_b__h1672) != DEF_b__h1672)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h1672, 32u);
	backing.DEF_b__h1672 = DEF_b__h1672;
      }
      ++num;
      if ((backing.DEF_b__h1756) != DEF_b__h1756)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h1756, 32u);
	backing.DEF_b__h1756 = DEF_b__h1756;
      }
      ++num;
      if ((backing.DEF_b__h1774) != DEF_b__h1774)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h1774, 32u);
	backing.DEF_b__h1774 = DEF_b__h1774;
      }
      ++num;
      if ((backing.DEF_stage_EQ_3___d44) != DEF_stage_EQ_3___d44)
      {
	vcd_write_val(sim_hdl, num, DEF_stage_EQ_3___d44, 1u);
	backing.DEF_stage_EQ_3___d44 = DEF_stage_EQ_3___d44;
      }
      ++num;
      if ((backing.DEF_x__h1809) != DEF_x__h1809)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h1809, 3u);
	backing.DEF_x__h1809 = DEF_x__h1809;
      }
      ++num;
      if ((backing.PORT_fetch_Input_signal) != PORT_fetch_Input_signal)
      {
	vcd_write_val(sim_hdl, num, PORT_fetch_Input_signal, 256u);
	backing.PORT_fetch_Input_signal = PORT_fetch_Input_signal;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_b__h1443, 32u);
      backing.DEF_b__h1443 = DEF_b__h1443;
      vcd_write_val(sim_hdl, num++, DEF_b__h1468, 32u);
      backing.DEF_b__h1468 = DEF_b__h1468;
      vcd_write_val(sim_hdl, num++, DEF_b__h1552, 32u);
      backing.DEF_b__h1552 = DEF_b__h1552;
      vcd_write_val(sim_hdl, num++, DEF_b__h1570, 32u);
      backing.DEF_b__h1570 = DEF_b__h1570;
      vcd_write_val(sim_hdl, num++, DEF_b__h1654, 32u);
      backing.DEF_b__h1654 = DEF_b__h1654;
      vcd_write_val(sim_hdl, num++, DEF_b__h1672, 32u);
      backing.DEF_b__h1672 = DEF_b__h1672;
      vcd_write_val(sim_hdl, num++, DEF_b__h1756, 32u);
      backing.DEF_b__h1756 = DEF_b__h1756;
      vcd_write_val(sim_hdl, num++, DEF_b__h1774, 32u);
      backing.DEF_b__h1774 = DEF_b__h1774;
      vcd_write_val(sim_hdl, num++, DEF_stage_EQ_3___d44, 1u);
      backing.DEF_stage_EQ_3___d44 = DEF_stage_EQ_3___d44;
      vcd_write_val(sim_hdl, num++, DEF_x__h1809, 3u);
      backing.DEF_x__h1809 = DEF_x__h1809;
      vcd_write_val(sim_hdl, num++, PORT_fetch_Input_signal, 256u);
      backing.PORT_fetch_Input_signal = PORT_fetch_Input_signal;
    }
}

void MOD_mkDCT1::vcd_prims(tVCDDumpType dt, MOD_mkDCT1 &backing)
{
  INST_stage.dump_VCD(dt, backing.INST_stage);
  INST_x_0.dump_VCD(dt, backing.INST_x_0);
  INST_x_1.dump_VCD(dt, backing.INST_x_1);
  INST_x_2.dump_VCD(dt, backing.INST_x_2);
  INST_x_3.dump_VCD(dt, backing.INST_x_3);
  INST_x_4.dump_VCD(dt, backing.INST_x_4);
  INST_x_5.dump_VCD(dt, backing.INST_x_5);
  INST_x_6.dump_VCD(dt, backing.INST_x_6);
  INST_x_7.dump_VCD(dt, backing.INST_x_7);
}

void MOD_mkDCT1::vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkDCT1 &backing)
{
  INST_fly_0.dump_VCD(dt, levels, backing.INST_fly_0);
  INST_fly_1.dump_VCD(dt, levels, backing.INST_fly_1);
  INST_fly_2.dump_VCD(dt, levels, backing.INST_fly_2);
  INST_fly_3.dump_VCD(dt, levels, backing.INST_fly_3);
}