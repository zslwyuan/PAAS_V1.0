// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vour_H_
#define _Vour_H_

#include "verilated.h"
class Vour__Syms;

//----------

VL_MODULE(Vour) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(read_enable,0,0);
    VL_OUT8(write_enable,0,0);
    VL_OUT8(finish_read,0,0);
    VL_OUT8(finish_write,0,0);
    VL_OUT8(done,0,0);
    //char	__VpadToAlign7[1];
    VL_IN(read_data,31,0);
    VL_OUT(write_data,31,0);
    VL_OUT(returnvalue,31,0);
    //char	__VpadToAlign20[4];
    VL_IN64(read_base,63,0);
    VL_IN64(write_base,63,0);
    VL_IN64(num_read,63,0);
    VL_IN64(read_size_input,63,0);
    VL_IN64(read_ready,63,0);
    VL_IN64(write_ready,63,0);
    VL_OUT64(read_addr,63,0);
    VL_OUT64(write_addr,63,0);
    VL_OUT64(write_size,63,0);
    VL_OUT64(read_size_output,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(our__DOT__r_read_enable,0,0);
    VL_SIG8(our__DOT__r_write_enable,0,0);
    VL_SIG8(our__DOT__r_finish_read,0,0);
    VL_SIG8(our__DOT__r_finish_write,0,0);
    VL_SIG8(our__DOT__r_done,0,0);
    VL_SIG8(our__DOT__addr0,6,0);
    VL_SIG8(our__DOT__addr1,6,0);
    VL_SIG8(our__DOT__ce0,0,0);
    VL_SIG8(our__DOT__ce1,0,0);
    VL_SIG8(our__DOT__r_next,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009_ap_return,5,0);
    VL_SIG8(our__DOT__enc__DOT__il_assign_reg_3665,5,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done,0,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_50_i_reg_3690,0,0);
    VL_SIG8(our__DOT__enc__DOT__wd2_cast_reg_3712,3,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_47_reg_3985,0,0);
    VL_SIG8(our__DOT__enc__DOT__p_ih_t_reg_4023,1,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_53_i_reg_4046,0,0);
    VL_SIG8(our__DOT__enc__DOT__wd2_4_cast_reg_4066,3,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_60_reg_4122,0,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_30_reg_4151,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996_ap_done,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset,6,0);
    VL_SIG8(our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start,0,0);
    VL_SIG8(our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__dlti_addr_reg_1051,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_reg_1057,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_6_reg_1061,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066,5,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_reg_1075,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080,5,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_1_reg_1088,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_8_reg_1108,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_12_reg_1118,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123,5,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_10_reg_1141,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_14_reg_1147,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_16_reg_1157,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228,5,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_2_reg_1237,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_3_reg_1242,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_4_reg_1247,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_5_reg_1252,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_17_reg_1257,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_19_reg_1262,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_20_reg_1267,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_21_reg_1272,6,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_q0,5,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_q0,5,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_reg_1201,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_2_reg_1292,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_1_fu_469_p2,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_3_reg_1296,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_4_reg_1300,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_5_reg_1304,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_6_reg_1308,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_7_reg_1312,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_8_reg_1316,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_9_reg_1320,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_s_reg_1324,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_10_reg_1328,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_11_reg_1332,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_12_reg_1336,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_13_reg_1340,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_14_reg_1344,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_15_reg_1348,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_16_reg_1352,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_18_reg_1359,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_17_fu_903_p2,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_19_reg_1363,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_20_reg_1367,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_21_reg_1371,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_22_reg_1375,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_23_reg_1379,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_24_reg_1383,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_25_reg_1387,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_26_reg_1391,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_27_reg_1395,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220,4,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ril2_phi_fu_346_p4,5,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_return_preg,5,0);
    //char	__VpadToAlign191[1];
    VL_SIG16(our__DOT__enc__DOT__qq4_code4_table_s_q0,15,0);
    VL_SIG16(our__DOT__enc__DOT__wl_code_table_q0,12,0);
    VL_SIG16(our__DOT__enc__DOT__ilb_table_q0,11,0);
    VL_SIG16(our__DOT__enc__DOT__qq4_code4_table_loa_reg_3680,15,0);
    VL_SIG16(our__DOT__enc__DOT__tmp_46_reg_3685,14,0);
    VL_SIG16(our__DOT__enc__DOT__nbl_assign_2_fu_1971_p3,14,0);
    VL_SIG16(our__DOT__enc__DOT__nbl_assign_2_reg_3707,14,0);
    VL_SIG16(our__DOT__enc__DOT__apl2_assign_reg_4030,14,0);
    VL_SIG16(our__DOT__enc__DOT__tmp_59_reg_4041,14,0);
    VL_SIG16(our__DOT__enc__DOT__apl1_3_reg_4051,15,0);
    VL_SIG16(our__DOT__enc__DOT__apl2_assign_1_reg_4145,14,0);
    VL_SIG16(our__DOT__enc__DOT__apl1_7_reg_4161,15,0);
    VL_SIG16(our__DOT__enc__DOT__nbl_assign_3_fu_2705_p3,14,0);
    //char	__VpadToAlign218[2];
    VL_SIG(our__DOT__r_write_data,31,0);
    VL_SIG(our__DOT__r_returnvalue,31,0);
    VL_SIG(our__DOT__d0,31,0);
    VL_SIG(our__DOT__d1,31,0);
    VL_SIG(our__DOT__r_q0,31,0);
    VL_SIG(our__DOT__r_q1,31,0);
    //char	__VpadToAlign244[4];
    VL_SIGW(our__DOT__enc__DOT__ap_CS_fsm,66,0,3);
    VL_SIG(our__DOT__enc__DOT__reg_1019,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1026,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1032,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1038,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1044,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1050,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1056,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1062,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1068,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1075,31,0);
    VL_SIG(our__DOT__enc__DOT__reg_1081,31,0);
    VL_SIG(our__DOT__enc__DOT__szl_reg_3331,31,0);
    VL_SIG(our__DOT__enc__DOT__spl_reg_3371,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_11_reg_3382,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_12_reg_3394,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_13_reg_3406,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_14_reg_3418,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_15_reg_3430,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_16_reg_3442,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_18_reg_3454,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_19_reg_3466,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_20_reg_3478,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_21_reg_3490,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_22_reg_3502,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_25_reg_3520,31,0);
    VL_SIG(our__DOT__enc__DOT__xl_reg_3638,31,0);
    VL_SIG(our__DOT__enc__DOT__xh_reg_3643,31,0);
    VL_SIG(our__DOT__enc__DOT__sl_reg_3648,31,0);
    VL_SIG(our__DOT__enc__DOT__buff_load_45_reg_3654,31,0);
    VL_SIG(our__DOT__enc__DOT__el_reg_3660,31,0);
    VL_SIG(our__DOT__enc__DOT__dlt_reg_3695,31,0);
    VL_SIG(our__DOT__enc__DOT__plt_reg_3722,31,0);
    VL_SIG(our__DOT__enc__DOT__rlt_reg_3728,31,0);
    VL_SIG(our__DOT__enc__DOT__szh_reg_3959,31,0);
    VL_SIG(our__DOT__enc__DOT__sph_reg_3996,31,0);
    VL_SIG(our__DOT__enc__DOT__apl2_reg_4006,31,0);
    VL_SIG(our__DOT__enc__DOT__apl1_reg_4012,31,0);
    VL_SIG(our__DOT__enc__DOT__sh_fu_2415_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__sh_reg_4018,31,0);
    VL_SIG(our__DOT__enc__DOT__tmp_23_reg_4036,31,0);
    VL_SIG(our__DOT__enc__DOT__dh_1_reg_4076,31,0);
    VL_SIG(our__DOT__enc__DOT__ph_reg_4083,31,0);
    VL_SIG(our__DOT__enc__DOT__yh_reg_4089,31,0);
    VL_SIG(our__DOT__enc__DOT__apl2_1_reg_4133,31,0);
    VL_SIG(our__DOT__enc__DOT__apl1_4_reg_4139,31,0);
    VL_SIG(our__DOT__enc__DOT__tmp_31_reg_4156,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996_dlt,31,0);
    VL_SIG(our__DOT__enc__DOT__p_i_fu_1926_p3,30,0);
    VL_SIG(our__DOT__enc__DOT__eh_fu_2419_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__p_i1_fu_2500_p3,31,0);
    VL_SIG(our__DOT__enc__DOT__p_i2_fu_2613_p3,30,0);
    VL_SIG(our__DOT__enc__DOT__wd3_0_apl1_i_fu_2653_p3,31,0);
    VL_SIG(our__DOT__enc__DOT__p_i3_fu_2984_p3,31,0);
    VL_SIG(our__DOT__enc__DOT__wd3_0_apl1_i1_fu_3054_p3,31,0);
    //char	__VpadToAlign476[4];
    VL_SIGW(our__DOT__enc__DOT__ap_NS_fsm,66,0,3);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_load_9_reg_1168,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U7__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm,29,0);
    VL_SIG(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_17_reg_1196,26,0);
    VL_SIG(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_NS_fsm,29,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U17__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mux_42_32_1_U34__DOT__mux_2_0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG64(our__DOT__read_cnt,63,0);
    VL_SIG64(our__DOT__write_cnt,63,0);
    VL_SIG64(our__DOT__state,63,0);
    VL_SIG64(our__DOT__r_read_addr,63,0);
    VL_SIG64(our__DOT__r_write_addr,63,0);
    VL_SIG64(our__DOT__r_write_size,63,0);
    VL_SIG64(our__DOT__r_read_size_output,63,0);
    VL_SIG64(our__DOT__timer,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_i_reg_3183,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_1_i_reg_3188,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp21_reg_3244,63,0);
    VL_SIG64(our__DOT__enc__DOT__zl_reg_3289,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_2_i_reg_3294,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_3_i_reg_3299,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_4_i_reg_3304,63,0);
    VL_SIG64(our__DOT__enc__DOT__pl_reg_3337,46,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_58_i_reg_3354,46,0);
    VL_SIG64(our__DOT__enc__DOT__xb_reg_3542,38,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_7_reg_3547,40,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_76_1_reg_3552,41,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_73_3_reg_3557,41,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_76_3_reg_3562,43,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_73_4_reg_3567,43,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_76_4_reg_3572,45,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_73_5_reg_3577,45,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_73_6_reg_3582,43,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_73_8_reg_3587,42,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_76_9_reg_3592,38,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_8_reg_3597,38,0);
    VL_SIG64(our__DOT__enc__DOT__tmp1_reg_3602,42,0);
    VL_SIG64(our__DOT__enc__DOT__tmp6_reg_3607,38,0);
    VL_SIG64(our__DOT__enc__DOT__tmp13_reg_3612,44,0);
    VL_SIG64(our__DOT__enc__DOT__tmp18_reg_3617,42,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_i1_reg_3813,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_1_i1_reg_3818,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp34_reg_3875,63,0);
    VL_SIG64(our__DOT__enc__DOT__zl_1_reg_3903,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_2_i1_reg_3908,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_3_i1_reg_3913,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_61_4_i1_reg_3918,63,0);
    VL_SIG64(our__DOT__enc__DOT__pl_3_reg_3970,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_58_i1_reg_3975,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_6_i_reg_3991,63,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_19_reg_4001,42,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_6_i1_reg_4128,63,0);
    VL_SIG64(our__DOT__enc__DOT__xa_1_fu_1720_p2,46,0);
    VL_SIG64(our__DOT__enc__DOT__xb_1_fu_1795_p2,46,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_i2_fu_1872_p2,38,0);
    VL_SIG64(our__DOT__enc__DOT__tmp_i8_fu_2550_p2,38,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm,46,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_reg_1093,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_s_reg_1113,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_32_reg_1152,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_reg_1178,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_3_33_reg_1193,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_4_reg_1208,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_5_34_reg_1223,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_NS_fsm,46,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U7__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__wd_cast_cast1_reg_1235,32,0);
    VL_SIG64(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240,45,0);
    VL_SIG64(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251,43,0);
    VL_SIG64(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast5_reg_1263,47,0);
    VL_SIG64(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast4_reg_1268,46,0);
    VL_SIG64(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275,44,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U17__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0,46,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0,46,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG(our__DOT__r_data[128],31,0);
    VL_SIG16(our__DOT__enc__DOT__qq4_code4_table_s_U__DOT__encode_qq4_code4_eOg_rom_U__DOT__ram[16],15,0);
    VL_SIG16(our__DOT__enc__DOT__wl_code_table_U__DOT__encode_wl_code_tafYi_rom_U__DOT__ram[16],12,0);
    VL_SIG16(our__DOT__enc__DOT__ilb_table_U__DOT__encode_ilb_table_rom_U__DOT__ram[32],11,0);
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_U__DOT__quantl_quant26bt_bkb_rom_U__DOT__ram[31],5,0);
    //char	__VpadToAlign2055[1];
    VL_SIG8(our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_U__DOT__quantl_quant26bt_cud_rom_U__DOT__ram[31],5,0);
    //char	__VpadToAlign2087[1];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    //char	__VpadToAlign2093[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign2100[4];
    Vour__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vour& operator= (const Vour&);	///< Copying not allowed
    Vour(const Vour&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vour(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vour();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vour__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vour__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vour__Syms* __restrict vlSymsp);
    void	_configure_coverage(Vour__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(Vour__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vour__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vour__Syms* __restrict vlSymsp);
    static void	_initial__TOP__2(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vour__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
