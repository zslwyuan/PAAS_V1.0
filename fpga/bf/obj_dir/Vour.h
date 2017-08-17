// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vour_H_
#define _Vour_H_

#include "verilated_heavy.h"
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
    VL_IN8(read_data,7,0);
    VL_OUT8(read_enable,0,0);
    VL_OUT8(write_enable,0,0);
    VL_OUT8(finish_read,0,0);
    VL_OUT8(finish_write,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(write_data,7,0);
    //char	__VpadToAlign9[3];
    VL_OUT(returnvalue,31,0);
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
    VL_SIG8(our__DOT__r_write_data,7,0);
    VL_SIG8(our__DOT__addr0,6,0);
    VL_SIG8(our__DOT__addr1,6,0);
    VL_SIG8(our__DOT__ce0,0,0);
    VL_SIG8(our__DOT__ce1,0,0);
    VL_SIG8(our__DOT__r_next,0,0);
    VL_SIG8(our__DOT__d0,7,0);
    VL_SIG8(our__DOT__ret,7,0);
    VL_SIG8(our__DOT__r_q0,7,0);
    VL_SIG8(our__DOT__r_q1,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_472,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_476,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_480,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_484,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_488,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_492,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_496,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done,0,0);
    VL_SIG8(our__DOT__enc__DOT__reg_501,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_506,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_511,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_fu_465_p2,7,0);
    VL_SIG8(our__DOT__enc__DOT__reg_516,7,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_s_reg_843,0,0);
    VL_SIG8(our__DOT__enc__DOT__in_addr_21_reg_929,6,0);
    VL_SIG8(our__DOT__enc__DOT__in_addr_22_reg_934,6,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_209_reg_952,0,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_410_reg_966,7,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_411_reg_971,7,0);
    VL_SIG8(our__DOT__enc__DOT__in_addr_24_reg_976,6,0);
    VL_SIG8(our__DOT__enc__DOT__in_addr_19_reg_986,6,0);
    VL_SIG8(our__DOT__enc__DOT__in_addr_20_reg_991,6,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_208_reg_1009,0,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_404_reg_1023,7,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_405_reg_1028,7,0);
    VL_SIG8(our__DOT__enc__DOT__in_addr_23_reg_1033,6,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_4_reg_1044,7,0);
    VL_SIG8(our__DOT__enc__DOT__tmp_6_reg_1049,7,0);
    VL_SIG8(our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start,0,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_address0,4,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast1_reg_3822,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_5_cast_reg_3853,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast1_reg_3883,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_18_cast_reg_3914,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast1_reg_3939,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_31_cast_reg_3970,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast1_reg_3995,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_44_cast_reg_4026,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast1_reg_4046,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_57_cast_reg_4077,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast1_reg_4107,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_70_cast_reg_4138,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast1_reg_4163,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_83_cast_reg_4194,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast1_reg_4219,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_96_cast_reg_4250,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast1_reg_4275,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_109_cast_reg_4306,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast1_reg_4326,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_122_cast_reg_4357,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast1_reg_4387,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_135_cast_reg_4418,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast1_reg_4443,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_148_cast_reg_4474,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast1_reg_4499,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_161_cast_reg_4530,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast1_reg_4555,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_174_cast_reg_4586,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_13_cast1_reg_4606,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_187_cast_reg_4621,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_14_cast1_reg_4651,7,0);
    VL_SIG8(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_200_cast_reg_4666,7,0);
    //char	__VpadToAlign177[1];
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_fu_685_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_reg_3828,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_fu_882_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_reg_3889,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_fu_1063_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_reg_3945,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_fu_1244_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_reg_4001,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_fu_1459_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_reg_4052,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_fu_1681_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_reg_4113,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_fu_1862_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_reg_4169,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_fu_2043_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_reg_4225,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_fu_2224_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_reg_4281,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_fu_2439_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_reg_4332,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_fu_2661_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_reg_4393,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_fu_2842_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_reg_4449,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_fu_3023_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_reg_4505,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_fu_3204_p2,15,0);
    VL_SIG16(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_reg_4561,15,0);
    //char	__VpadToAlign234[2];
    VL_SIG(our__DOT__r_returnvalue,31,0);
    VL_SIG(our__DOT__i,31,0);
    VL_SIG(our__DOT__enc__DOT__n_fu_539_p5,31,0);
    VL_SIG(our__DOT__enc__DOT__length_fu_551_p5,31,0);
    VL_SIG(our__DOT__enc__DOT__l_3_reg_939,31,0);
    VL_SIG(our__DOT__enc__DOT__p_rec5_reg_947,31,0);
    VL_SIG(our__DOT__enc__DOT__tmp_407_reg_956,31,0);
    VL_SIG(our__DOT__enc__DOT__tmp_408_reg_961,31,0);
    VL_SIG(our__DOT__enc__DOT__n_4_cast_reg_981,31,0);
    VL_SIG(our__DOT__enc__DOT__l_2_reg_996,31,0);
    VL_SIG(our__DOT__enc__DOT__p_rec_reg_1004,31,0);
    VL_SIG(our__DOT__enc__DOT__tmp_402_reg_1013,31,0);
    VL_SIG(our__DOT__enc__DOT__tmp_403_reg_1018,31,0);
    VL_SIG(our__DOT__enc__DOT__n_3_cast_reg_1039,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read,31,0);
    VL_SIG(our__DOT__enc__DOT__l3_reg_314,31,0);
    VL_SIG(our__DOT__enc__DOT__n1_reg_323,31,0);
    VL_SIG(our__DOT__enc__DOT__out_0_rec_reg_333,31,0);
    VL_SIG(our__DOT__enc__DOT__l_1_reg_344,31,0);
    VL_SIG(our__DOT__enc__DOT__n_1_reg_353,31,0);
    VL_SIG(our__DOT__enc__DOT__out_1_rec_reg_363,31,0);
    VL_SIG(our__DOT__enc__DOT__n_2_reg_374,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_fu_691_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_reg_3833,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_17_reg_3863,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_reg_3878,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_fu_888_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_reg_3894,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_reg_3924,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_reg_3934,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_fu_1069_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_reg_3950,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_80_reg_3980,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_reg_3990,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_fu_1250_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_reg_4006,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_110_reg_4036,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_fu_1465_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_reg_4057,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_181_reg_4082,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_reg_4092,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_164_reg_4102,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_fu_1687_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_reg_4118,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_171_reg_4148,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_reg_4158,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_fu_1868_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_reg_4174,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_201_reg_4204,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_reg_4214,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_fu_2049_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_reg_4230,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_224_reg_4260,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_reg_4270,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_fu_2230_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_reg_4286,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_245_reg_4316,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_fu_2445_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_reg_4337,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_294_reg_4362,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_266_reg_4372,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_282_reg_4382,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_fu_2667_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_reg_4398,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_287_reg_4428,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_reg_4438,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_fu_2848_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_reg_4454,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_308_reg_4484,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_reg_4494,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_fu_3029_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_reg_4510,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_329_reg_4540,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_reg_4550,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_fu_3210_p2,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_reg_4566,23,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_350_reg_4596,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_395_reg_4626,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_371_reg_4636,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_387_reg_4646,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_392_reg_4676,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_15_cast_reg_4686,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2,31,0);
    VL_SIG(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_15_cast_fu_3792_p2,31,0);
    VL_SIG64(our__DOT__read_cnt,63,0);
    VL_SIG64(our__DOT__write_cnt,63,0);
    VL_SIG64(our__DOT__state,63,0);
    VL_SIG64(our__DOT__r_read_addr,63,0);
    VL_SIG64(our__DOT__r_write_addr,63,0);
    VL_SIG64(our__DOT__r_write_size,63,0);
    VL_SIG64(our__DOT__r_read_size_output,63,0);
    VL_SIG64(our__DOT__timer,63,0);
    VL_SIG64(our__DOT__enc__DOT__ap_CS_fsm,32,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1,63,0);
    VL_SIG64(our__DOT__enc__DOT__ap_NS_fsm,32,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm,33,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_631,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_635,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_639,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_643,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_fu_697_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_reg_3838,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_fu_894_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_reg_3899,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_fu_1075_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_reg_3955,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_fu_1256_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_reg_4011,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_fu_1471_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_reg_4062,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_fu_1693_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_reg_4123,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_fu_1874_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_reg_4179,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_fu_2055_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_reg_4235,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_fu_2236_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_reg_4291,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_fu_2451_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_reg_4342,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_fu_2673_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_reg_4403,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_fu_2854_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_reg_4459,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_fu_3035_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_reg_4515,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_fu_3216_p2,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_reg_4571,35,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg,63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_NS_fsm,33,0);
    VL_SIG8(our__DOT__r_data[128],7,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_U__DOT__BF_encrypt_key_S_rom_U__DOT__ram[1024],63,0);
    VL_SIG64(our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_U__DOT__BF_encrypt_key_P_rom_U__DOT__ram[18],63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    //char	__VpadToAlign9509[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign9516[4];
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
