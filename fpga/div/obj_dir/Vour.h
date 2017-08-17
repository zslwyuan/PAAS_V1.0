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
    VL_IN64(read_base,63,0);
    VL_IN64(write_base,63,0);
    VL_IN64(num_read,63,0);
    VL_IN64(read_size_input,63,0);
    VL_IN64(read_ready,63,0);
    VL_IN64(write_ready,63,0);
    VL_IN64(read_data,63,0);
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(read_addr,63,0);
    VL_OUT64(write_addr,63,0);
    VL_OUT64(write_size,63,0);
    VL_OUT64(read_size_output,63,0);
    VL_OUT64(write_data,63,0);
    VL_OUT64(returnvalue,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(our__DOT__r_read_enable,0,0);
    VL_SIG8(our__DOT__r_write_enable,0,0);
    VL_SIG8(our__DOT__r_finish_read,0,0);
    VL_SIG8(our__DOT__r_finish_write,0,0);
    VL_SIG8(our__DOT__r_done,0,0);
    VL_SIG8(our__DOT__addr0,1,0);
    VL_SIG8(our__DOT__addr1,1,0);
    VL_SIG8(our__DOT__ce0,0,0);
    VL_SIG8(our__DOT__we0,0,0);
    VL_SIG8(our__DOT__ce1,0,0);
    VL_SIG8(our__DOT__we1,0,0);
    VL_SIG8(our__DOT__r_next,0,0);
    VL_SIG8(our__DOT__div__DOT__countLeadingZerosHig_q0,3,0);
    VL_SIG8(our__DOT__div__DOT__zSign_fu_410_p2,0,0);
    VL_SIG8(our__DOT__div__DOT__zSign_reg_1275,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_reg_1281,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_36_reg_1285,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_40_reg_1289,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_43_reg_1293,0,0);
    VL_SIG8(our__DOT__div__DOT__icmp_reg_1297,0,0);
    VL_SIG8(our__DOT__div__DOT__icmp7_reg_1302,0,0);
    VL_SIG8(our__DOT__div__DOT__icmp1_reg_1308,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_49_reg_1353,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_50_reg_1357,0,0);
    VL_SIG8(our__DOT__div__DOT__icmp2_reg_1361,0,0);
    VL_SIG8(our__DOT__div__DOT__icmp3_reg_1366,0,0);
    VL_SIG8(our__DOT__div__DOT__icmp4_reg_1372,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_done,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_55_i_reg_1476,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_60_i_reg_1492,0,0);
    VL_SIG8(our__DOT__div__DOT__tmp_85_fu_1167_p3,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_done,0,0);
    VL_SIG8(our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start,0,0);
    VL_SIG8(our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start,0,0);
    VL_SIG8(our__DOT__div__DOT__shiftCount_1_fu_667_p2,6,0);
    VL_SIG8(our__DOT__div__DOT__shiftCount_4_fu_874_p2,6,0);
    VL_SIG8(our__DOT__div__DOT__tmp_55_fu_953_p2,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_91_fu_244_p3,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_reg_433,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__start0,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__start0,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm,1,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_reg_581,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_8_reg_597,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_1_reg_605,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_6_reg_609,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__sel_tmp7_fu_216_p2,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_NS_fsm,1,0);
    VL_SIG8(our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_33_fu_144_p2,0,0);
    VL_SIG8(our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_32_fu_126_p2,0,0);
    //char	__VpadToAlign187[1];
    VL_SIG16(our__DOT__div__DOT__ap_CS_fsm,12,0);
    VL_SIG16(our__DOT__div__DOT__aExp_reg_1254,10,0);
    VL_SIG16(our__DOT__div__DOT__aExp_cast_reg_1259,11,0);
    VL_SIG16(our__DOT__div__DOT__bExp2_cast_reg_1348,12,0);
    VL_SIG16(our__DOT__div__DOT__zExp_reg_1415,12,0);
    VL_SIG16(our__DOT__div__DOT__bExp2_reg_170,11,0);
    VL_SIG16(our__DOT__div__DOT__aExp2_reg_188,11,0);
    VL_SIG16(our__DOT__div__DOT__ap_NS_fsm,12,0);
    VL_SIG16(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_fu_236_p3,9,0);
    VL_SIG16(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_reg_586,9,0);
    VL_SIG16(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zExp_assign_1_reg_117,12,0);
    VL_SIG16(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundBits_1_reg_130,9,0);
    VL_SIG(our__DOT__div__DOT__tmp_79_reg_1397,20,0);
    VL_SIG(our__DOT__div__DOT__tmp_66_reg_1481,31,0);
    VL_SIG(our__DOT__div__DOT__a_assign_3_fu_462_p3,31,0);
    VL_SIG(our__DOT__div__DOT__p_a_i_i_i_fu_492_p3,31,0);
    VL_SIG(our__DOT__div__DOT__a_assign_8_fu_744_p3,31,0);
    VL_SIG(our__DOT__div__DOT__p_a_i_i_i1_fu_774_p3,31,0);
    //char	__VpadToAlign236[4];
    VL_SIGW(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm,139,0,5);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_58_i_reg_390,31,0);
    VL_SIGW(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm,139,0,5);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__divisor0,31,0);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0,31,0);
    //char	__VpadToAlign292[4];
    VL_SIGW(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp,64,0,3);
    //char	__VpadToAlign308[4];
    VL_SIGW(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage,64,0,3);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__divisor0,31,0);
    VL_SIG(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0,31,0);
    //char	__VpadToAlign348[4];
    VL_SIGW(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp,64,0,3);
    //char	__VpadToAlign364[4];
    VL_SIGW(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage,64,0,3);
    VL_SIG(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode,31,0);
    VL_SIG(our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0,31,0);
    VL_SIG64(our__DOT__r_write_data,63,0);
    VL_SIG64(our__DOT__read_cnt,63,0);
    VL_SIG64(our__DOT__write_cnt,63,0);
    VL_SIG64(our__DOT__state,63,0);
    VL_SIG64(our__DOT__r_read_addr,63,0);
    VL_SIG64(our__DOT__r_write_addr,63,0);
    VL_SIG64(our__DOT__r_write_size,63,0);
    VL_SIG64(our__DOT__r_read_size_output,63,0);
    VL_SIG64(our__DOT__r_returnvalue,63,0);
    VL_SIG64(our__DOT__d0,63,0);
    VL_SIG64(our__DOT__d1,63,0);
    VL_SIG64(our__DOT__timer,63,0);
    VL_SIG64(our__DOT__div__DOT__aSig_3_reg_1243,51,0);
    VL_SIG64(our__DOT__div__DOT__aSig_3_cast8_reg_1248,63,0);
    VL_SIG64(our__DOT__div__DOT__bSig_2_cast6_reg_1264,63,0);
    VL_SIG64(our__DOT__div__DOT__bSig_2_reg_1402,63,0);
    VL_SIG64(our__DOT__div__DOT__aSig_reg_1409,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return,63,0);
    VL_SIG64(our__DOT__div__DOT__zSig_3_reg_1420,63,0);
    VL_SIG64(our__DOT__div__DOT__z1_reg_1455,63,0);
    VL_SIG64(our__DOT__div__DOT__zMiddleA_reg_1460,63,0);
    VL_SIG64(our__DOT__div__DOT__zMiddleB_reg_1465,63,0);
    VL_SIG64(our__DOT__div__DOT__z0_reg_1471,63,0);
    VL_SIG64(our__DOT__div__DOT__z1_3_fu_1099_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__z1_3_reg_1486,63,0);
    VL_SIG64(our__DOT__div__DOT__zSig_fu_1175_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__z1_4_fu_1181_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__rem0_1_fu_1196_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_return,63,0);
    VL_SIG64(our__DOT__div__DOT__bSig2_reg_160,63,0);
    VL_SIG64(our__DOT__div__DOT__aSig2_reg_179,63,0);
    VL_SIG64(our__DOT__div__DOT__a1_assign_reg_197,63,0);
    VL_SIG64(our__DOT__div__DOT__a0_assign_1_reg_206,63,0);
    VL_SIG64(our__DOT__div__DOT__zSig1_reg_215,63,0);
    VL_SIG64(our__DOT__div__DOT__zSig_1_reg_224,63,0);
    VL_SIG64(our__DOT__div__DOT__p_0_reg_234,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_fu_332_p0,51,0);
    VL_SIG64(our__DOT__div__DOT__tmp_7_fu_569_p3,51,0);
    VL_SIG64(our__DOT__div__DOT__zMiddleA_1_fu_1074_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_reg_344,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_cast_reg_351,32,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_s_reg_356,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__zMiddleA_reg_380,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z0_reg_385,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b1_reg_405,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_fu_252_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z1_fu_258_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_2_fu_282_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_1_fu_302_p3,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z3_reg_70,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_315_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_67_reg_81,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_2_fu_321_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_phi_fu_96_p4,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_reg_92,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_141_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_return_preg,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__dividend0,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__dividend0,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__z_2_fu_382_p3,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_14_reg_106,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_phi_fu_144_p4,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_reg_141,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_50_i6_fu_557_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_5_i_fu_318_p2,63,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zSig_assign_2_fu_516_p2,53,0);
    VL_SIG64(our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_return_preg,63,0);
    VL_SIG64(our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0,63,0);
    VL_SIG64(our__DOT__r_data[2],63,0);
    VL_SIG8(our__DOT__div__DOT__countLeadingZerosHig_U__DOT__float64_div_countdEe_rom_U__DOT__ram[256],3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    //char	__VpadToAlign1389[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign1396[4];
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
  public:
    static void	_combo__TOP__3(Vour__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(Vour__Syms* __restrict vlSymsp);
    static void	_combo__TOP__9(Vour__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(Vour__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(Vour__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vour__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vour__Syms* __restrict vlSymsp);
    static void	_initial__TOP__2(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vour__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
