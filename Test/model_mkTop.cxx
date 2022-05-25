/*
 * Generated by Bluespec Compiler, version 2021.12.1-27-g9a7d5e05 (build 9a7d5e05)
 * 
 * On Wed May 25 20:01:50 IST 2022
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTop.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTop::MODEL_mkTop()
{
  mkTop_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTop()
{
  MODEL_mkTop *model = new MODEL_mkTop();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTop &INST_top = *((MOD_mkTop *)(instance_ptr));
	 tUInt8 DEF_INST_top_INST_dct4_DEF_CAN_FIRE_RL_out4;
	 tUInt8 DEF_INST_top_INST_dct4_DEF_WILL_FIRE_RL_out4;
	 tUInt8 DEF_INST_top_INST_dct3_DEF_CAN_FIRE_RL_fly3;
	 tUInt8 DEF_INST_top_INST_dct3_DEF_WILL_FIRE_RL_fly3;
	 tUInt8 DEF_INST_top_INST_dct3_DEF_CAN_FIRE_RL_out3;
	 tUInt8 DEF_INST_top_INST_dct3_DEF_WILL_FIRE_RL_out3;
	 tUInt8 DEF_INST_top_INST_dct2_DEF_CAN_FIRE_RL_fly2;
	 tUInt8 DEF_INST_top_INST_dct2_DEF_WILL_FIRE_RL_fly2;
	 tUInt8 DEF_INST_top_INST_dct2_DEF_CAN_FIRE_RL_out1;
	 tUInt8 DEF_INST_top_INST_dct2_DEF_WILL_FIRE_RL_out1;
	 tUInt8 DEF_INST_top_INST_dct1_DEF_CAN_FIRE_RL_fly1;
	 tUInt8 DEF_INST_top_INST_dct1_DEF_WILL_FIRE_RL_fly1;
	 tUInt8 DEF_INST_top_INST_dct1_DEF_CAN_FIRE_RL_out1;
	 tUInt8 DEF_INST_top_INST_dct1_DEF_WILL_FIRE_RL_out1;
	 tUInt8 DEF_INST_top_DEF_x__h8702;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_stage1;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_stage1;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_stage2;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_stage2;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_stage3;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_stage3;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_stage4;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_stage4;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_transform;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_transform;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_result;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_result;
	 DEF_INST_top_DEF_x__h8702 = INST_top.INST_flag.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_result = INST_top.INST_int2fxp.METH_RDY_result() && DEF_INST_top_DEF_x__h8702 == (tUInt8)5u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_result = DEF_INST_top_DEF_CAN_FIRE_RL_result;
	 DEF_INST_top_DEF_CAN_FIRE_RL_stage1 = INST_top.INST_dct1.METH_RDY_fetch_Input() && DEF_INST_top_DEF_x__h8702 == (tUInt8)0u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_stage1 = DEF_INST_top_DEF_CAN_FIRE_RL_stage1;
	 DEF_INST_top_DEF_CAN_FIRE_RL_stage2 = (INST_top.INST_dct2.METH_RDY_fetch_Input() && (INST_top.INST_dct1.METH_RDY_result_0__read() && (INST_top.INST_dct1.METH_RDY_result_1__read() && (INST_top.INST_dct1.METH_RDY_result_2__read() && (INST_top.INST_dct1.METH_RDY_result_3__read() && (INST_top.INST_dct1.METH_RDY_result_4__read() && (INST_top.INST_dct1.METH_RDY_result_5__read() && (INST_top.INST_dct1.METH_RDY_result_6__read() && INST_top.INST_dct1.METH_RDY_result_7__read())))))))) && DEF_INST_top_DEF_x__h8702 == (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_stage2 = DEF_INST_top_DEF_CAN_FIRE_RL_stage2;
	 DEF_INST_top_DEF_CAN_FIRE_RL_stage3 = (INST_top.INST_dct3.METH_RDY_fetch_Input() && (INST_top.INST_dct2.METH_RDY_result_0__read() && (INST_top.INST_dct2.METH_RDY_result_1__read() && (INST_top.INST_dct2.METH_RDY_result_2__read() && (INST_top.INST_dct2.METH_RDY_result_3__read() && (INST_top.INST_dct2.METH_RDY_result_4__read() && (INST_top.INST_dct2.METH_RDY_result_5__read() && (INST_top.INST_dct2.METH_RDY_result_6__read() && INST_top.INST_dct2.METH_RDY_result_7__read())))))))) && DEF_INST_top_DEF_x__h8702 == (tUInt8)2u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_stage3 = DEF_INST_top_DEF_CAN_FIRE_RL_stage3;
	 DEF_INST_top_DEF_CAN_FIRE_RL_stage4 = (INST_top.INST_dct4.METH_RDY_fetch_Input() && (INST_top.INST_dct3.METH_RDY_result_0__read() && (INST_top.INST_dct3.METH_RDY_result_1__read() && (INST_top.INST_dct3.METH_RDY_result_2__read() && (INST_top.INST_dct3.METH_RDY_result_3__read() && (INST_top.INST_dct3.METH_RDY_result_4__read() && (INST_top.INST_dct3.METH_RDY_result_5__read() && (INST_top.INST_dct3.METH_RDY_result_6__read() && INST_top.INST_dct3.METH_RDY_result_7__read())))))))) && DEF_INST_top_DEF_x__h8702 == (tUInt8)3u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_stage4 = DEF_INST_top_DEF_CAN_FIRE_RL_stage4;
	 INST_top.INST_dct1.INST_fly_0.METH_RDY_butterfly();
	 INST_top.INST_dct1.INST_fly_1.METH_RDY_butterfly();
	 INST_top.INST_dct1.INST_fly_2.METH_RDY_butterfly();
	 INST_top.INST_dct1.INST_fly_3.METH_RDY_butterfly();
	 INST_top.INST_dct1.DEF_x__h1809 = INST_top.INST_dct1.INST_stage.METH_read();
	 DEF_INST_top_INST_dct1_DEF_CAN_FIRE_RL_fly1 = (INST_top.INST_dct1.DEF_x__h1809) == (tUInt8)1u;
	 DEF_INST_top_INST_dct1_DEF_WILL_FIRE_RL_fly1 = DEF_INST_top_INST_dct1_DEF_CAN_FIRE_RL_fly1;
	 DEF_INST_top_DEF_CAN_FIRE_RL_transform = (INST_top.INST_int2fxp.METH_RDY_fetch_Input() && (INST_top.INST_dct4.METH_RDY_result_0__read() && (INST_top.INST_dct4.METH_RDY_result_1__read() && (INST_top.INST_dct4.METH_RDY_result_2__read() && (INST_top.INST_dct4.METH_RDY_result_3__read() && (INST_top.INST_dct4.METH_RDY_result_4__read() && (INST_top.INST_dct4.METH_RDY_result_5__read() && (INST_top.INST_dct4.METH_RDY_result_6__read() && INST_top.INST_dct4.METH_RDY_result_7__read())))))))) && DEF_INST_top_DEF_x__h8702 == (tUInt8)4u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_transform = DEF_INST_top_DEF_CAN_FIRE_RL_transform;
	 DEF_INST_top_INST_dct1_DEF_CAN_FIRE_RL_out1 = (INST_top.INST_dct1.INST_fly_0.METH_RDY_sum() && (INST_top.INST_dct1.INST_fly_1.METH_RDY_sum() && (INST_top.INST_dct1.INST_fly_2.METH_RDY_sum() && (INST_top.INST_dct1.INST_fly_3.METH_RDY_sum() && (INST_top.INST_dct1.INST_fly_0.METH_RDY_diff() && (INST_top.INST_dct1.INST_fly_1.METH_RDY_diff() && (INST_top.INST_dct1.INST_fly_2.METH_RDY_diff() && INST_top.INST_dct1.INST_fly_3.METH_RDY_diff()))))))) && (INST_top.INST_dct1.DEF_x__h1809) == (tUInt8)2u;
	 DEF_INST_top_INST_dct1_DEF_WILL_FIRE_RL_out1 = DEF_INST_top_INST_dct1_DEF_CAN_FIRE_RL_out1;
	 INST_top.INST_dct2.INST_fly_0.METH_RDY_butterfly();
	 INST_top.INST_dct2.INST_fly_1.METH_RDY_butterfly();
	 INST_top.INST_dct2.INST_fly_2.METH_RDY_butterfly();
	 INST_top.INST_dct2.DEF_x__h1462 = INST_top.INST_dct2.INST_stage.METH_read();
	 DEF_INST_top_INST_dct2_DEF_CAN_FIRE_RL_fly2 = (INST_top.INST_dct2.DEF_x__h1462) == (tUInt8)1u;
	 DEF_INST_top_INST_dct2_DEF_WILL_FIRE_RL_fly2 = DEF_INST_top_INST_dct2_DEF_CAN_FIRE_RL_fly2;
	 INST_top.INST_dct2.INST_lut.METH_RDY_cs();
	 DEF_INST_top_INST_dct2_DEF_CAN_FIRE_RL_out1 = (INST_top.INST_dct2.INST_fly_0.METH_RDY_sum() && (INST_top.INST_dct2.INST_fly_1.METH_RDY_sum() && (INST_top.INST_dct2.INST_fly_2.METH_RDY_sum() && (INST_top.INST_dct2.INST_fly_0.METH_RDY_diff() && (INST_top.INST_dct2.INST_fly_1.METH_RDY_diff() && INST_top.INST_dct2.INST_fly_2.METH_RDY_diff()))))) && (INST_top.INST_dct2.DEF_x__h1462) == (tUInt8)2u;
	 DEF_INST_top_INST_dct2_DEF_WILL_FIRE_RL_out1 = DEF_INST_top_INST_dct2_DEF_CAN_FIRE_RL_out1;
	 INST_top.INST_dct3.INST_fly_0.METH_RDY_butterfly();
	 INST_top.INST_dct3.INST_fly_1.METH_RDY_butterfly();
	 INST_top.INST_dct3.INST_fly_2.METH_RDY_butterfly();
	 INST_top.INST_dct3.DEF_x__h1608 = INST_top.INST_dct3.INST_stage.METH_read();
	 DEF_INST_top_INST_dct3_DEF_CAN_FIRE_RL_fly3 = (INST_top.INST_dct3.DEF_x__h1608) == (tUInt8)1u;
	 DEF_INST_top_INST_dct3_DEF_WILL_FIRE_RL_fly3 = DEF_INST_top_INST_dct3_DEF_CAN_FIRE_RL_fly3;
	 INST_top.INST_dct4.INST_lut_0.METH_RDY_cs();
	 INST_top.INST_dct4.INST_lut_1.METH_RDY_cs();
	 INST_top.INST_dct4.DEF__read__h1047 = INST_top.INST_dct4.INST_stage.METH_read();
	 DEF_INST_top_INST_dct4_DEF_CAN_FIRE_RL_out4 = (INST_top.INST_dct4.DEF__read__h1047) == (tUInt8)1u;
	 DEF_INST_top_INST_dct4_DEF_WILL_FIRE_RL_out4 = DEF_INST_top_INST_dct4_DEF_CAN_FIRE_RL_out4;
	 INST_top.INST_dct3.INST_lut_0.METH_RDY_cs();
	 INST_top.INST_dct3.INST_lut_1.METH_RDY_cs();
	 DEF_INST_top_INST_dct3_DEF_CAN_FIRE_RL_out3 = (INST_top.INST_dct3.INST_fly_0.METH_RDY_sum() && (INST_top.INST_dct3.INST_fly_1.METH_RDY_sum() && (INST_top.INST_dct3.INST_fly_2.METH_RDY_sum() && (INST_top.INST_dct3.INST_fly_0.METH_RDY_diff() && (INST_top.INST_dct3.INST_fly_1.METH_RDY_diff() && INST_top.INST_dct3.INST_fly_2.METH_RDY_diff()))))) && (INST_top.INST_dct3.DEF_x__h1608) == (tUInt8)2u;
	 DEF_INST_top_INST_dct3_DEF_WILL_FIRE_RL_out3 = DEF_INST_top_INST_dct3_DEF_CAN_FIRE_RL_out3;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_result)
	   INST_top.RL_result();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_stage1)
	   INST_top.RL_stage1();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_stage2)
	   INST_top.RL_stage2();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_stage3)
	   INST_top.RL_stage3();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_stage4)
	   INST_top.RL_stage4();
	 if (DEF_INST_top_INST_dct1_DEF_WILL_FIRE_RL_fly1)
	   INST_top.INST_dct1.RL_fly1();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_transform)
	   INST_top.RL_transform();
	 if (DEF_INST_top_INST_dct1_DEF_WILL_FIRE_RL_out1)
	   INST_top.INST_dct1.RL_out1();
	 if (DEF_INST_top_INST_dct2_DEF_WILL_FIRE_RL_fly2)
	   INST_top.INST_dct2.RL_fly2();
	 if (DEF_INST_top_INST_dct2_DEF_WILL_FIRE_RL_out1)
	   INST_top.INST_dct2.RL_out1();
	 if (DEF_INST_top_INST_dct3_DEF_WILL_FIRE_RL_fly3)
	   INST_top.INST_dct3.RL_fly3();
	 if (DEF_INST_top_INST_dct3_DEF_WILL_FIRE_RL_out3)
	   INST_top.INST_dct3.RL_out3();
	 if (DEF_INST_top_INST_dct4_DEF_WILL_FIRE_RL_out4)
	   INST_top.INST_dct4.RL_out4();
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_dct1.INST_fly_0.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_0.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_0.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_1.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_1.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_1.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_2.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_2.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_2.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_3.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_3.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_fly_3.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_x_0.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_x_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_x_2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_x_3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_x_4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_x_5.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_x_6.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_x_7.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct1.INST_stage.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_0.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_0.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_0.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_1.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_1.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_1.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_2.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_2.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_fly_2.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_x_0.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_x_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_x_2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_x_3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_x_4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_x_5.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_x_6.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_x_7.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct2.INST_stage.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_0.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_0.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_0.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_1.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_1.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_1.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_2.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_2.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_fly_2.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_x_0.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_x_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_x_2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_x_3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_x_4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_x_5.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_x_6.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_x_7.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct3.INST_stage.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_0.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_0.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_0.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_1.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_1.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_1.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_2.INST_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_2.INST_d.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_fly_2.INST_rflag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_x_0.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_x_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_x_2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_x_3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_x_4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_x_5.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_x_6.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_x_7.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_dct4.INST_stage.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_x_0.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_x_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_x_2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_x_3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_x_4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_x_5.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_x_6.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_x_7.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_int2fxp.INST_flag.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_f_0.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_f_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_f_2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_f_3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_f_4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_f_5.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_f_6.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_f_7.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_flag.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTop::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTop_instance = new MOD_mkTop(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTop_instance->INST_dct1.INST_fly_0.set_clk_0)("CLK");
  (mkTop_instance->INST_dct1.INST_fly_1.set_clk_0)("CLK");
  (mkTop_instance->INST_dct1.INST_fly_2.set_clk_0)("CLK");
  (mkTop_instance->INST_dct1.INST_fly_3.set_clk_0)("CLK");
  (mkTop_instance->INST_dct1.set_clk_0)("CLK");
  (mkTop_instance->INST_dct2.INST_lut.set_clk_0)("CLK");
  (mkTop_instance->INST_dct2.INST_fly_0.set_clk_0)("CLK");
  (mkTop_instance->INST_dct2.INST_fly_1.set_clk_0)("CLK");
  (mkTop_instance->INST_dct2.INST_fly_2.set_clk_0)("CLK");
  (mkTop_instance->INST_dct2.set_clk_0)("CLK");
  (mkTop_instance->INST_dct3.INST_lut_0.set_clk_0)("CLK");
  (mkTop_instance->INST_dct3.INST_lut_1.set_clk_0)("CLK");
  (mkTop_instance->INST_dct3.INST_fly_0.set_clk_0)("CLK");
  (mkTop_instance->INST_dct3.INST_fly_1.set_clk_0)("CLK");
  (mkTop_instance->INST_dct3.INST_fly_2.set_clk_0)("CLK");
  (mkTop_instance->INST_dct3.set_clk_0)("CLK");
  (mkTop_instance->INST_dct4.INST_lut_0.set_clk_0)("CLK");
  (mkTop_instance->INST_dct4.INST_lut_1.set_clk_0)("CLK");
  (mkTop_instance->INST_dct4.INST_fly_0.set_clk_0)("CLK");
  (mkTop_instance->INST_dct4.INST_fly_1.set_clk_0)("CLK");
  (mkTop_instance->INST_dct4.INST_fly_2.set_clk_0)("CLK");
  (mkTop_instance->INST_dct4.set_clk_0)("CLK");
  (mkTop_instance->INST_int2fxp.set_clk_0)("CLK");
  (mkTop_instance->set_clk_0)("CLK");
}
void MODEL_mkTop::destroy_model()
{
  delete mkTop_instance;
  mkTop_instance = NULL;
}
void MODEL_mkTop::reset_model(bool asserted)
{
  (mkTop_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTop::get_instance()
{
  return mkTop_instance;
}

/* Fill in version numbers */
void MODEL_mkTop::get_version(char const **name, char const **build)
{
  *name = "2021.12.1-27-g9a7d5e05";
  *build = "9a7d5e05";
}

/* Get the model creation time */
time_t MODEL_mkTop::get_creation_time()
{
  
  /* Wed May 25 14:31:50 UTC 2022 */
  return 1653489110llu;
}

/* State dumping function */
void MODEL_mkTop::dump_state()
{
  (mkTop_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTop & mkTop_backing(tSimStateHdl simHdl)
{
  static MOD_mkTop *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTop(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTop::dump_VCD_defs()
{
  (mkTop_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTop::dump_VCD(tVCDDumpType dt)
{
  (mkTop_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTop_backing(sim_hdl));
}