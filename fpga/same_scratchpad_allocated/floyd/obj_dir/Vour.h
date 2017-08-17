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
    VL_SIG8(our__DOT__kk__DOT__mod_clk,0,0);
    VL_SIG8(our__DOT__r_read_enable,0,0);
    VL_SIG8(our__DOT__r_write_enable,0,0);
    VL_SIG8(our__DOT__r_finish_read,0,0);
    VL_SIG8(our__DOT__r_finish_write,0,0);
    VL_SIG8(our__DOT__r_done,0,0);
    VL_SIG8(our__DOT__reload,0,0);
    VL_SIG8(our__DOT__read_waiting,0,0);
    VL_SIG8(our__DOT__write_waiting,0,0);
    VL_SIG8(our__DOT__r_k_reset,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_read_enable,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_write_enable,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_finish_read,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_finish_write,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_done,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_next,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_mod_clk,0,0);
    VL_SIG8(our__DOT__kk__DOT__next_out,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_ce0,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_we0,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_ce1,0,0);
    VL_SIG8(our__DOT__kk__DOT__r_we1,0,0);
    VL_SIG8(our__DOT__kk__DOT__kernel__DOT__k_1_reg_3106,6,0);
    VL_SIG8(our__DOT__kk__DOT__kernel__DOT__i_1_reg_3439,6,0);
    VL_SIG8(our__DOT__kk__DOT__kernel__DOT__k_reg_1137,6,0);
    VL_SIG8(our__DOT__kk__DOT__kernel__DOT__i_reg_1148,6,0);
    VL_SIG16(our__DOT__kk__DOT__saddr0,13,0);
    VL_SIG16(our__DOT__kk__DOT__saddr1,13,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__tmp_cast_reg_3111,13,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_2_reg_3116,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_4_reg_3121,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_6_reg_3126,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_8_reg_3131,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_10_reg_3136,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_12_reg_3141,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_14_reg_3146,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_16_reg_3151,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_18_reg_3156,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_20_reg_3161,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_22_reg_3166,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_24_reg_3171,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_26_reg_3176,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_28_reg_3181,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_30_reg_3186,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_32_reg_3191,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_34_reg_3196,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_36_reg_3201,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_38_reg_3206,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_40_reg_3211,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_42_reg_3216,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_44_reg_3221,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_46_reg_3226,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_48_reg_3231,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_50_reg_3236,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_52_reg_3241,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_54_reg_3246,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_56_reg_3251,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_58_reg_3256,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_60_reg_3261,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_62_reg_3266,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_64_reg_3271,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_66_reg_3276,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_68_reg_3281,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_70_reg_3286,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_72_reg_3291,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_74_reg_3296,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_76_reg_3301,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_78_reg_3306,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_80_reg_3311,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_82_reg_3316,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_84_reg_3321,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_86_reg_3326,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_88_reg_3331,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_90_reg_3336,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_92_reg_3341,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_94_reg_3346,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_96_reg_3351,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_98_reg_3356,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_100_reg_3361,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_102_reg_3366,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_104_reg_3371,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_106_reg_3376,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_108_reg_3381,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_110_reg_3386,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_112_reg_3391,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_114_reg_3396,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_116_reg_3401,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_118_reg_3406,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_120_reg_3411,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_122_reg_3416,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_124_reg_3421,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_126_reg_3426,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_128_reg_3431,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__tmp_132_reg_3444,12,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_reg_3511,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_1_reg_3517,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_3_reg_3528,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_5_reg_3534,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_7_reg_3540,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_9_reg_3546,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_11_reg_3552,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_13_reg_3558,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_15_reg_3564,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_17_reg_3570,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_19_reg_3576,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_21_reg_3582,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_23_reg_3588,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_25_reg_3594,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_27_reg_3600,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_29_reg_3606,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_31_reg_3612,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_33_reg_3618,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_35_reg_3624,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_37_reg_3630,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_39_reg_3636,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_41_reg_3642,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_43_reg_3648,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_45_reg_3654,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_47_reg_3660,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_49_reg_3666,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_51_reg_3672,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_53_reg_3678,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_55_reg_3684,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_57_reg_3690,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_59_reg_3696,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_61_reg_3702,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_63_reg_3708,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_65_reg_3714,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_67_reg_3720,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_69_reg_3726,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_71_reg_3732,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_73_reg_3738,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_75_reg_3744,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_77_reg_3750,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_79_reg_3756,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_81_reg_3762,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_83_reg_3768,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_85_reg_3774,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_87_reg_3780,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_89_reg_3786,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_91_reg_3792,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_93_reg_3798,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_95_reg_3804,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_97_reg_3810,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_99_reg_3816,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_101_reg_3822,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_103_reg_3828,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_105_reg_3834,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_107_reg_3840,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_109_reg_3846,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_111_reg_3852,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_113_reg_3858,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_115_reg_3864,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_117_reg_3870,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_119_reg_3876,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_121_reg_3882,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_123_reg_3888,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_125_reg_3894,11,0);
    VL_SIG16(our__DOT__kk__DOT__kernel__DOT__path_addr_127_reg_3900,11,0);
    VL_SIG(our__DOT__r_write_data,31,0);
    VL_SIG(our__DOT__r_returnvalue,31,0);
    VL_SIG(our__DOT__ret,31,0);
    VL_SIG(our__DOT__r_k_read_data,31,0);
    VL_SIG(our__DOT__kk__DOT__r_write_data,31,0);
    VL_SIG(our__DOT__kk__DOT__d0,31,0);
    VL_SIG(our__DOT__kk__DOT__r_q0,31,0);
    VL_SIG(our__DOT__kk__DOT__r_q1,31,0);
    VL_SIG(our__DOT__kk__DOT__r_d0,31,0);
    VL_SIG(our__DOT__kk__DOT__r_d1,31,0);
    VL_SIGW(our__DOT__kk__DOT__kernel__DOT__ap_CS_fsm,194,0,7);
    VL_SIG(our__DOT__kk__DOT__kernel__DOT__reg_1165,31,0);
    VL_SIG(our__DOT__kk__DOT__kernel__DOT__reg_1183,31,0);
    VL_SIG(our__DOT__kk__DOT__kernel__DOT__tmp_7_reg_3523,31,0);
    VL_SIG(our__DOT__kk__DOT__kernel__DOT__grp_fu_1159_p2,31,0);
    VL_SIG(our__DOT__kk__DOT__kernel__DOT__tmp_5_fu_2201_p2,31,0);
    VL_SIGW(our__DOT__kk__DOT__kernel__DOT__ap_NS_fsm,194,0,7);
    //char	__VpadToAlign516[4];
    VL_SIG64(our__DOT__read_cnt,63,0);
    VL_SIG64(our__DOT__write_cnt,63,0);
    VL_SIG64(our__DOT__state,63,0);
    VL_SIG64(our__DOT__r_read_addr,63,0);
    VL_SIG64(our__DOT__r_write_addr,63,0);
    VL_SIG64(our__DOT__r_write_size,63,0);
    VL_SIG64(our__DOT__r_read_size_output,63,0);
    VL_SIG64(our__DOT__timer,63,0);
    VL_SIG64(our__DOT__tmp_addr_head,63,0);
    VL_SIG64(our__DOT__new_addr_head,63,0);
    VL_SIG64(our__DOT__r_k_read_ready,63,0);
    VL_SIG64(our__DOT__r_k_write_ready,63,0);
    VL_SIG64(our__DOT__latency,63,0);
    VL_SIG64(our__DOT__tj,63,0);
    VL_SIG64(our__DOT__kk__DOT__state,63,0);
    VL_SIG64(our__DOT__kk__DOT__r_read_addr,63,0);
    VL_SIG64(our__DOT__kk__DOT__r_write_addr,63,0);
    VL_SIG64(our__DOT__kk__DOT__timer,63,0);
    VL_SIG64(our__DOT__kk__DOT__access_timer,63,0);
    VL_SIG(our__DOT__r_data[8192],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__our__DOT__r_k_reset,0,0);
    VL_SIG8(__Vdly__our__DOT__kk__DOT__r_mod_clk,0,0);
    VL_SIG8(__Vdly__our__DOT__kk__DOT__r_read_enable,0,0);
    VL_SIG8(__Vdly__our__DOT__kk__DOT__r_write_enable,0,0);
    VL_SIG8(__Vdly__our__DOT__kk__DOT__kernel__DOT__k_reg_1137,6,0);
    VL_SIG8(__Vdly__our__DOT__kk__DOT__kernel__DOT__i_1_reg_3439,6,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__our__DOT__kk__DOT__mod_clk,0,0);
    VL_SIG8(__Vchglast__TOP__our__DOT__r_k_reset,0,0);
    VL_SIG8(__Vchglast__TOP__our__DOT__kk__DOT__r_mod_clk,0,0);
    //char	__VpadToAlign33454[2];
    VL_SIG(__Vdly__our__DOT__r_k_read_data,31,0);
    VL_SIG(__Vdly__our__DOT__kk__DOT__kernel__DOT__reg_1165,31,0);
    VL_SIG64(__Vdly__our__DOT__r_k_read_ready,63,0);
    VL_SIG64(__Vdly__our__DOT__r_k_write_ready,63,0);
    VL_SIG64(__Vdly__our__DOT__kk__DOT__state,63,0);
    VL_SIG64(__Vdly__our__DOT__kk__DOT__timer,63,0);
    VL_SIG64(__Vdly__our__DOT__kk__DOT__access_timer,63,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign33508[4];
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
    static void	_combo__TOP__2(Vour__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(Vour__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(Vour__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vour__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vour__Syms* __restrict vlSymsp);
    static void	_initial__TOP__10(Vour__Syms* __restrict vlSymsp);
    static void	_initial__TOP__6(Vour__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__13(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vour__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
