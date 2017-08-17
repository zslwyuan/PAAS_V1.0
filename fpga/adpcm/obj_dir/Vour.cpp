// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "Vour.h"              // For This
#include "Vour__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vour) {
    Vour__Syms* __restrict vlSymsp = __VlSymsp = new Vour__Syms(this, name());
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vour::__Vconfigure(Vour__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vour::~Vour() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vour::eval() {
    Vour__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vour::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vour::_eval_initial_loop(Vour__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vour::_sequent__TOP__1(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__1\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v0,6,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v0,0,0);
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v1,6,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v1,0,0);
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v2,6,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v2,0,0);
    VL_SIG8(__Vdly__our__DOT__enc__DOT__p_ih_t_reg_4023,1,0);
    //char	__VpadToAlign11[1];
    VL_SIG(__Vdlyvval__our__DOT__r_data__v0,31,0);
    VL_SIG(__Vdlyvval__our__DOT__r_data__v1,31,0);
    VL_SIG(__Vdlyvval__our__DOT__r_data__v2,31,0);
    VL_SIG(__Vdly__our__DOT__r_q1,31,0);
    //char	__VpadToAlign28[4];
    VL_SIG64(__Vdly__our__DOT__state,63,0);
    VL_SIG64(__Vdly__our__DOT__read_cnt,63,0);
    VL_SIG64(__Vdly__our__DOT__write_cnt,63,0);
    VL_SIG64(__Vdly__our__DOT__r_read_addr,63,0);
    VL_SIG64(__Vdly__our__DOT__r_write_addr,63,0);
    VL_SIG64(__Vdly__our__DOT__timer,63,0);
    // Body
    __Vdly__our__DOT__state = vlTOPp->our__DOT__state;
    __Vdly__our__DOT__read_cnt = vlTOPp->our__DOT__read_cnt;
    __Vdly__our__DOT__write_cnt = vlTOPp->our__DOT__write_cnt;
    __Vdly__our__DOT__timer = vlTOPp->our__DOT__timer;
    __Vdly__our__DOT__r_read_addr = vlTOPp->our__DOT__r_read_addr;
    __Vdly__our__DOT__r_write_addr = vlTOPp->our__DOT__r_write_addr;
    __Vdly__our__DOT__r_q1 = vlTOPp->our__DOT__r_q1;
    __Vdlyvset__our__DOT__r_data__v0 = 0U;
    __Vdlyvset__our__DOT__r_data__v1 = 0U;
    __Vdlyvset__our__DOT__r_data__v2 = 0U;
    __Vdly__our__DOT__enc__DOT__p_ih_t_reg_4023 = vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023;
    // ALWAYS at quantl.v:451
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_return_preg = 0U;
    } else {
	if ((0x20000000U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) {
	    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_return_preg 
		= vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ril2_phi_fu_346_p4;
	}
    }
    // ALWAYS at upzero.v:624
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 6U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123 
	    = (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset));
    }
    // ALWAYS at upzero.v:582
    if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			>> 0x25U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
					      >> 0xaU))))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271 
	    = vlTOPp->our__DOT__r_q1;
    }
    // ALWAYS at upzero.v:1302
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_17_reg_1257 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_17_reg_1257));
    // ALWAYS at upzero.v:1304
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_20_reg_1267 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_20_reg_1267));
    // ALWAYS at upzero.v:1303
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_19_reg_1262 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_19_reg_1262));
    // ALWAYS at upzero.v:520
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x29U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_17_reg_1257 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_17_reg_1257)) 
	       | (0x3fU & ((IData)(4U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))));
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_19_reg_1262 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_19_reg_1262)) 
	       | (0x3fU & ((IData)(3U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))));
    }
    // ALWAYS at upzero.v:1305
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_21_reg_1272 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_21_reg_1272));
    // ALWAYS at upzero.v:535
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x2aU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_20_reg_1267 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_20_reg_1267)) 
	       | (0x3fU & ((IData)(2U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))));
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_21_reg_1272 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_21_reg_1272)) 
	       | (0x3fU & ((IData)(1U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))));
    }
    // ALWAYS at encode_wl_code_tafYi.v:33
    if (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
	  >> 0x18U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) {
	vlTOPp->our__DOT__enc__DOT__wl_code_table_q0 
	    = vlTOPp->our__DOT__enc__DOT__wl_code_table_U__DOT__encode_wl_code_tafYi_rom_U__DOT__ram
	    [(0xfU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_return) 
		      >> 2U))];
    }
    // ALWAYS at encode.v:1495
    if ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__nbl_assign_2_reg_3707 
	    = vlTOPp->our__DOT__enc__DOT__nbl_assign_2_fu_1971_p3;
	vlTOPp->our__DOT__enc__DOT__wd2_cast_reg_3712 
	    = (0xfU & ((IData)(vlTOPp->our__DOT__enc__DOT__nbl_assign_2_fu_1971_p3) 
		       >> 0xbU));
    }
    // ALWAYS at encode.v:1489
    if (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
	  >> 0x18U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) {
	vlTOPp->our__DOT__enc__DOT__il_assign_reg_3665 
	    = vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_return;
    }
    // ALWAYS at encode.v:1649
    if ((0x400000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__wd2_4_cast_reg_4066 
	    = (0xfU & ((IData)(vlTOPp->our__DOT__enc__DOT__nbl_assign_3_fu_2705_p3) 
		       >> 0xbU));
    }
    // ALWAYS at encode_ilb_table.v:33
    if ((1U & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		>> 2U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			  >> 0x16U)))) {
	vlTOPp->our__DOT__enc__DOT__ilb_table_q0 = 
	    vlTOPp->our__DOT__enc__DOT__ilb_table_U__DOT__encode_ilb_table_rom_U__DOT__ram
	    [(0x1fU & ((0x400000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
		        ? ((IData)(vlTOPp->our__DOT__enc__DOT__nbl_assign_3_fu_2705_p3) 
			   >> 6U) : ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
				      ? ((IData)(vlTOPp->our__DOT__enc__DOT__nbl_assign_2_fu_1971_p3) 
					 >> 6U) : 0U)))];
    }
    // ALWAYS at encode.v:1383
    if ((2U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) {
	vlTOPp->our__DOT__enc__DOT__apl1_7_reg_4161 
	    = (0xffffU & (VL_LTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__wd3_0_apl1_i1_fu_3054_p3, 
				     VL_EXTENDS_II(32,16, 
						   (0xffffU 
						    & VL_NEGATE_I(
								  (0x7fffU 
								   & ((IData)(0x3c00U) 
								      - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145)))))))
			   ? VL_NEGATE_I((0x7fffU & 
					  ((IData)(0x3c00U) 
					   - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145))))
			   : vlTOPp->our__DOT__enc__DOT__wd3_0_apl1_i1_fu_3054_p3));
    }
    // ALWAYS at encode.v:1370
    if ((0x200000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__apl1_3_reg_4051 
	    = (0xffffU & (VL_LTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__wd3_0_apl1_i_fu_2653_p3, 
				     VL_EXTENDS_II(32,16, 
						   (0xffffU 
						    & VL_NEGATE_I(
								  (0x7fffU 
								   & ((IData)(0x3c00U) 
								      - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030)))))))
			   ? VL_NEGATE_I((0x7fffU & 
					  ((IData)(0x3c00U) 
					   - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030))))
			   : vlTOPp->our__DOT__enc__DOT__wd3_0_apl1_i_fu_2653_p3));
    }
    // ALWAYS at upzero.v:1292
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_1_reg_1088 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_1_reg_1088));
    // ALWAYS at upzero.v:1295
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_10_reg_1141 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_10_reg_1141));
    // ALWAYS at upzero.v:494
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 8U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_10_reg_1141 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_10_reg_1141)) 
	       | (0x3fU & ((IData)(2U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))));
    }
    // ALWAYS at upzero.v:1296
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_14_reg_1147 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_14_reg_1147));
    // ALWAYS at upzero.v:507
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 9U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_14_reg_1147 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_14_reg_1147)) 
	       | (0x3fU & ((IData)(4U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))));
    }
    // ALWAYS at upzero.v:1293
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_8_reg_1108 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_8_reg_1108));
    // ALWAYS at upzero.v:563
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 3U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_8_reg_1108 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_8_reg_1108)) 
	       | (0x3fU & ((IData)(1U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))));
    }
    // ALWAYS at upzero.v:1298
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_2_reg_1237 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_2_reg_1237));
    // ALWAYS at upzero.v:1300
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_4_reg_1247 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_4_reg_1247));
    // ALWAYS at upzero.v:1299
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_3_reg_1242 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_3_reg_1242));
    // ALWAYS at upzero.v:542
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x24U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_2_reg_1237 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_2_reg_1237)) 
	       | (0x3fU & ((IData)(2U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))));
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_3_reg_1242 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_3_reg_1242)) 
	       | (0x3fU & ((IData)(3U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))));
    }
    // ALWAYS at upzero.v:1301
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_5_reg_1252 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_5_reg_1252));
    // ALWAYS at upzero.v:549
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x25U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_4_reg_1247 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_4_reg_1247)) 
	       | (0x3fU & ((IData)(4U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))));
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_5_reg_1252 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_5_reg_1252)) 
	       | (0x3fU & ((IData)(5U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))));
    }
    // ALWAYS at encode.v:1362
    if ((0x800000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__reg_1068 = vlTOPp->our__DOT__r_q0;
    } else {
	if ((0x80000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	    vlTOPp->our__DOT__enc__DOT__reg_1068 = vlTOPp->our__DOT__r_q1;
	}
    }
    // ALWAYS at upzero.v:600
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x10U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_reg_1178 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U7__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at upzero.v:606
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x16U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_3_33_reg_1193 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at upzero.v:612
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x1cU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_4_reg_1208 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at upzero.v:618
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x22U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_5_34_reg_1223 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at upzero.v:1294
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_12_reg_1118 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_12_reg_1118));
    // ALWAYS at upzero.v:500
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 4U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_12_reg_1118 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_12_reg_1118)) 
	       | (0x3fU & ((IData)(3U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))));
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_s_reg_1113 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at quantl.v:538
    if ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	 & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_17_reg_1196 
	    = (0x7ffffffU & (IData)((VL_ULL(0x7ffffff) 
				     & (VL_MULS_QQQ(42,42,42, VL_ULL(0x118), 
						    (VL_ULL(0x3ffffffffff) 
						     & VL_EXTENDS_QI(42,32, vlTOPp->our__DOT__enc__DOT__reg_1081))) 
					>> 0xfU))));
    }
    // ALWAYS at upzero.v:1297
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_16_reg_1157 
	= (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_16_reg_1157));
    // ALWAYS at upzero.v:513
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0xaU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_16_reg_1157 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_16_reg_1157)) 
	       | (0x3fU & ((IData)(5U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))));
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_32_reg_1152 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at encode.v:1571
    if ((0x200000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__tmp13_reg_3612 
	    = (VL_ULL(0x1fffffffffff) & (VL_EXTENDS_QQ(45,43, 
						       (VL_ULL(0x7ffffffffff) 
							& VL_MULS_QQQ(43,43,43, VL_ULL(0x7fffffffcb8), 
								      (VL_ULL(0x7ffffffffff) 
								       & VL_EXTENDS_QI(43,32, vlTOPp->our__DOT__enc__DOT__buff_load_19_reg_3466))))) 
					 + VL_EXTENDS_QQ(45,44, 
							 (VL_ULL(0xfffffffffff) 
							  & VL_MULS_QQQ(45,45,45, VL_ULL(0xedc), 
									(VL_ULL(0x1fffffffffff) 
									 & VL_EXTENDS_QI(45,32, vlTOPp->our__DOT__enc__DOT__buff_load_16_reg_3442)))))));
	vlTOPp->our__DOT__enc__DOT__tmp18_reg_3617 
	    = (VL_ULL(0x7ffffffffff) & ((VL_ULL(0xfffffffffff) 
					 & VL_MULS_QQQ(44,44,44, VL_ULL(0x5a8), 
						       (VL_ULL(0xfffffffffff) 
							& VL_EXTENDS_QI(44,32, vlTOPp->our__DOT__enc__DOT__reg_1062)))) 
					+ VL_EXTENDS_QQ(43,37, 
							(VL_ULL(0x1fffffffff) 
							 & (VL_EXTENDS_QQ(37,36, 
									  ((QData)((IData)(vlTOPp->our__DOT__r_q1)) 
									   << 4U)) 
							    - 
							    VL_EXTENDS_QQ(37,34, 
									  ((QData)((IData)(vlTOPp->our__DOT__r_q1)) 
									   << 2U)))))));
	vlTOPp->our__DOT__enc__DOT__tmp1_reg_3602 = 
	    (VL_ULL(0x7ffffffffff) & (VL_EXTENDS_QQ(43,41, 
						    (VL_ULL(0x1ffffffffff) 
						     & VL_MULS_QQQ(42,42,42, VL_ULL(0xd4), 
								   (VL_ULL(0x3ffffffffff) 
								    & VL_EXTENDS_QI(42,32, vlTOPp->our__DOT__enc__DOT__buff_load_25_reg_3520))))) 
				      + (VL_ULL(0xfffffffffff) 
					 & VL_MULS_QQQ(44,44,44, VL_ULL(0x5a8), 
						       (VL_ULL(0xfffffffffff) 
							& VL_EXTENDS_QI(44,32, vlTOPp->our__DOT__enc__DOT__buff_load_20_reg_3478))))));
	vlTOPp->our__DOT__enc__DOT__tmp6_reg_3607 = 
	    (VL_ULL(0x7fffffffff) & (VL_MULS_QQQ(39,39,39, VL_ULL(0x7fffffffd4), 
						 (VL_ULL(0x7fffffffff) 
						  & VL_EXTENDS_QI(39,32, vlTOPp->our__DOT__enc__DOT__reg_1032))) 
				     + (VL_EXTENDS_QQ(39,38, 
						      ((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1044)) 
						       << 6U)) 
					- VL_EXTENDS_QQ(39,36, 
							((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1044)) 
							 << 4U)))));
	vlTOPp->our__DOT__enc__DOT__tmp_73_3_reg_3557 
	    = (VL_ULL(0x3ffffffffff) & VL_MULS_QQQ(42,42,42, VL_ULL(0x3fffffffcb8), 
						   (VL_ULL(0x3ffffffffff) 
						    & VL_EXTENDS_QI(42,32, vlTOPp->our__DOT__enc__DOT__buff_load_11_reg_3382))));
	vlTOPp->our__DOT__enc__DOT__tmp_73_4_reg_3567 
	    = (VL_ULL(0xfffffffffff) & VL_MULS_QQQ(45,45,45, VL_ULL(0xedc), 
						   (VL_ULL(0x1fffffffffff) 
						    & VL_EXTENDS_QI(45,32, vlTOPp->our__DOT__enc__DOT__buff_load_13_reg_3406))));
	vlTOPp->our__DOT__enc__DOT__tmp_73_5_reg_3577 
	    = (VL_ULL(0x3fffffffffff) & VL_MULS_QQQ(47,47,47, VL_ULL(0x3c90), 
						    (VL_ULL(0x7fffffffffff) 
						     & VL_EXTENDS_QI(47,32, vlTOPp->our__DOT__enc__DOT__buff_load_15_reg_3430))));
	vlTOPp->our__DOT__enc__DOT__tmp_73_6_reg_3582 
	    = (VL_ULL(0xfffffffffff) & VL_MULS_QQQ(44,44,44, VL_ULL(0xffffffff36c), 
						   (VL_ULL(0xfffffffffff) 
						    & VL_EXTENDS_QI(44,32, vlTOPp->our__DOT__enc__DOT__buff_load_18_reg_3454))));
	vlTOPp->our__DOT__enc__DOT__tmp_73_8_reg_3587 
	    = (VL_ULL(0x7ffffffffff) & VL_MULS_QQQ(43,43,43, VL_ULL(0x7fffffffd90), 
						   (VL_ULL(0x7ffffffffff) 
						    & VL_EXTENDS_QI(43,32, vlTOPp->our__DOT__enc__DOT__buff_load_22_reg_3502))));
	vlTOPp->our__DOT__enc__DOT__tmp_76_1_reg_3552 
	    = (VL_ULL(0x3ffffffffff) & VL_MULS_QQQ(42,42,42, VL_ULL(0x3fffffffd90), 
						   (VL_ULL(0x3ffffffffff) 
						    & VL_EXTENDS_QI(42,32, vlTOPp->our__DOT__enc__DOT__reg_1050))));
	vlTOPp->our__DOT__enc__DOT__tmp_76_3_reg_3562 
	    = (VL_ULL(0xfffffffffff) & VL_MULS_QQQ(44,44,44, VL_ULL(0xffffffff36c), 
						   (VL_ULL(0xfffffffffff) 
						    & VL_EXTENDS_QI(44,32, vlTOPp->our__DOT__enc__DOT__buff_load_12_reg_3394))));
	vlTOPp->our__DOT__enc__DOT__tmp_76_4_reg_3572 
	    = (VL_ULL(0x3fffffffffff) & VL_MULS_QQQ(47,47,47, VL_ULL(0x3c90), 
						    (VL_ULL(0x7fffffffffff) 
						     & VL_EXTENDS_QI(47,32, vlTOPp->our__DOT__enc__DOT__buff_load_14_reg_3418))));
	vlTOPp->our__DOT__enc__DOT__tmp_76_9_reg_3592 
	    = (VL_ULL(0x7fffffffff) & VL_MULS_QQQ(39,39,39, VL_ULL(0x7fffffffd4), 
						  (VL_ULL(0x7fffffffff) 
						   & VL_EXTENDS_QI(39,32, vlTOPp->our__DOT__enc__DOT__reg_1075))));
	vlTOPp->our__DOT__enc__DOT__tmp_7_reg_3547 
	    = (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(42,42,42, VL_ULL(0xd4), 
						   (VL_ULL(0x3ffffffffff) 
						    & VL_EXTENDS_QI(42,32, vlTOPp->our__DOT__enc__DOT__reg_1038))));
	vlTOPp->our__DOT__enc__DOT__tmp_8_reg_3597 
	    = (VL_ULL(0x7fffffffff) & VL_MULS_QQQ(39,39,39, VL_ULL(0x7fffffffd4), 
						  (VL_ULL(0x7fffffffff) 
						   & VL_EXTENDS_QI(39,32, vlTOPp->our__DOT__enc__DOT__reg_1081))));
	vlTOPp->our__DOT__enc__DOT__xb_reg_3542 = (VL_ULL(0x7fffffffff) 
						   & VL_MULS_QQQ(39,39,39, VL_ULL(0x7fffffffd4), 
								 (VL_ULL(0x7fffffffff) 
								  & VL_EXTENDS_QI(39,32, vlTOPp->our__DOT__enc__DOT__reg_1026))));
    }
    // ALWAYS at encode.v:1376
    if ((0x80000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__apl1_4_reg_4139 
	    = (((IData)(vlTOPp->our__DOT__enc__DOT__tmp_60_reg_4122)
		 ? 0xffffff40U : 0xc0U) + (IData)((VL_ULL(0x1ffffffff) 
						   & ((((QData)((IData)(vlTOPp->our__DOT__r_q0)) 
							<< 8U) 
						       - 
						       VL_EXTENDS_QI(41,32, vlTOPp->our__DOT__r_q0)) 
						      >> 8U))));
	vlTOPp->our__DOT__enc__DOT__apl2_1_reg_4133 
	    = (VL_EXTENDS_II(32,29, (0x1fffffffU & 
				     (VL_EXTENDS_II(29,28, 
						    (0xfffffffU 
						     & ((IData)(vlTOPp->our__DOT__enc__DOT__tmp_60_reg_4122)
							 ? 
							VL_EXTENDS_II(28,27, 
								      (0x7ffffffU 
								       & (vlTOPp->our__DOT__r_q0 
									  >> 5U)))
							 : (IData)(
								   (VL_ULL(0xfffffff) 
								    & (VL_NEGATE_Q(
										VL_EXTENDS_QQ(35,34, 
										((QData)((IData)(vlTOPp->our__DOT__r_q0)) 
										<< 2U))) 
								       >> 7U)))))) 
				      + ((1U & (IData)(
						       (vlTOPp->our__DOT__enc__DOT__tmp_6_i1_reg_4128 
							>> 0x3fU)))
					  ? 0x1fffff80U
					  : 0x80U)))) 
	       + (IData)((VL_ULL(0x1ffffffff) & ((((QData)((IData)(vlTOPp->our__DOT__r_q1)) 
						   << 7U) 
						  - 
						  VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__r_q1)) 
						 >> 7U))));
    }
    // ALWAYS at quantl_quant26bt_bkb.v:33
    if ((0x10000000U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_q0 
	    = ((0x1eU >= (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220))
	        ? vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_U__DOT__quantl_quant26bt_bkb_rom_U__DOT__ram
	       [vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220]
	        : 0U);
    }
    // ALWAYS at quantl_quant26bt_cud.v:33
    if ((0x10000000U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_q0 
	    = ((0x1eU >= (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220))
	        ? vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_U__DOT__quantl_quant26bt_cud_rom_U__DOT__ram
	       [vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220]
	        : 0U);
    }
    // ALWAYS at upzero.v:588
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0x23U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228 
	    = (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset));
    }
    // ALWAYS at upzero.v:527
    if ((((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
	  & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start)) 
	 & (0U == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_1_reg_1088 
	    = ((0x40U & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_1_reg_1088)) 
	       | (0x3fU & ((IData)(1U) + (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset))));
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_reg_1075 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset;
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080 
	    = (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset));
    }
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U7__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U7__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode.v:1274
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start = 0U;
    } else {
	if ((0x800000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	    vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start = 1U;
	} else {
	    if ((0x20000000U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) {
		vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start = 0U;
	    }
	}
    }
    // ALWAYS at upzero.v:556
    if ((((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
	  & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start)) 
	 & (0U != vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_6_reg_1061 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset;
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066 
	    = (0x3fU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset));
    }
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode.v:1538
    if ((1U & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		>> 0x14U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
			     >> 0x16U)))) {
	vlTOPp->our__DOT__enc__DOT__reg_1075 = vlTOPp->our__DOT__r_q1;
    }
    // ALWAYS at encode.v:1456
    if ((0x80000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__buff_load_25_reg_3520 
	    = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at encode.v:1415
    if ((0x2000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__buff_load_11_reg_3382 
	    = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at encode.v:1442
    if ((0x20000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__buff_load_19_reg_3466 
	    = vlTOPp->our__DOT__r_q1;
	vlTOPp->our__DOT__enc__DOT__buff_load_20_reg_3478 
	    = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at encode.v:1421
    if ((0x4000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__buff_load_12_reg_3394 
	    = vlTOPp->our__DOT__r_q1;
	vlTOPp->our__DOT__enc__DOT__buff_load_13_reg_3406 
	    = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at encode.v:1428
    if ((0x8000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__buff_load_14_reg_3418 
	    = vlTOPp->our__DOT__r_q1;
	vlTOPp->our__DOT__enc__DOT__buff_load_15_reg_3430 
	    = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at encode.v:1435
    if ((0x10000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__buff_load_16_reg_3442 
	    = vlTOPp->our__DOT__r_q1;
	vlTOPp->our__DOT__enc__DOT__buff_load_18_reg_3454 
	    = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at encode.v:1449
    if ((0x40000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__buff_load_21_reg_3490 
	    = vlTOPp->our__DOT__r_q1;
	vlTOPp->our__DOT__enc__DOT__buff_load_22_reg_3502 
	    = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at encode.v:1610
    if ((0x40000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__tmp_60_reg_4122 
	    = (1U & (IData)((vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
			     >> 0x3fU)));
	vlTOPp->our__DOT__enc__DOT__tmp_6_i1_reg_4128 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at quantl.v:461
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x1bU) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_27_reg_1395))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 
	    = (VL_GTS_IQQ(1,33,33, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__wd_cast_cast1_reg_1235, 
			  (VL_ULL(0x1ffffffff) & ((
						   VL_EXTENDS_QQ(48,47, 
								 ((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
								  << 0xfU)) 
						   - vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast5_reg_1263) 
						  >> 0xfU)))
	        ? 0x1eU : 0x1dU);
    } else {
	if ((1U & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
		    >> 0x1bU) & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_27_reg_1395))))) {
	    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x1cU;
	} else {
	    if ((1U & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
			>> 0x1aU) & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_26_reg_1391))))) {
		vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x1bU;
	    } else {
		if ((1U & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
			    >> 0x19U) & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_25_reg_1387))))) {
		    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x1aU;
		} else {
		    if ((1U & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
				>> 0x18U) & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_24_reg_1383))))) {
			vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x19U;
		    } else {
			if ((1U & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
				    >> 0x17U) & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_23_reg_1379))))) {
			    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x18U;
			} else {
			    if ((1U & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
					>> 0x16U) & 
				       (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_22_reg_1375))))) {
				vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x17U;
			    } else {
				if ((1U & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
					    >> 0x15U) 
					   & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_21_reg_1371))))) {
				    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x16U;
				} else {
				    if ((1U & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
						>> 0x14U) 
					       & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_20_reg_1367))))) {
					vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x15U;
				    } else {
					if ((1U & (
						   (vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
						    >> 0x13U) 
						   & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_19_reg_1363))))) {
					    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x14U;
					} else {
					    if ((1U 
						 & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
						     >> 0x12U) 
						    & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_18_reg_1359))))) {
						vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x13U;
					    } else {
						if (
						    (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
						       >> 0x11U) 
						      & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_16_reg_1352)) 
						     & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_17_fu_903_p2)))) {
						    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x12U;
						} else {
						    if (
							(1U 
							 & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
							     >> 0x11U) 
							    & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_16_reg_1352))))) {
							vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x11U;
						    } else {
							if (
							    (1U 
							     & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
								 >> 0x10U) 
								& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_15_reg_1348))))) {
							    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0x10U;
							} else {
							    if (
								(1U 
								 & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
								     >> 0xfU) 
								    & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_14_reg_1344))))) {
								vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0xfU;
							    } else {
								if (
								    (1U 
								     & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
									 >> 0xeU) 
									& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_13_reg_1340))))) {
								    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0xeU;
								} else {
								    if (
									(1U 
									 & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
									     >> 0xdU) 
									    & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_12_reg_1336))))) {
									vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0xdU;
								    } else {
									if (
									    (1U 
									     & ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 0xcU) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_11_reg_1332))))) {
									    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0xcU;
									} else {
									    if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 0xbU) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_10_reg_1328))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0xbU;
									    } else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 0xaU) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_s_reg_1324))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0xaU;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 9U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_9_reg_1320))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 9U;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 8U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_8_reg_1316))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 8U;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 7U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_7_reg_1312))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 7U;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 6U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_6_reg_1308))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 6U;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 5U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_5_reg_1304))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 5U;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 4U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_4_reg_1300))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 4U;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 3U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_3_reg_1296))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 3U;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 2U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_2_reg_1292))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 2U;
										} else {
										if (
										(((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 1U) 
										& (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2)) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_1_fu_469_p2)))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 1U;
										} else {
										if (
										(1U 
										& ((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
										>> 1U) 
										& (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2))))) {
										vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = 0U;
										}
										}
										}
										}
										}
										}
										}
										}
										}
										}
										}
									    }
									}
								    }
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U7__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_load_9_reg_1168;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_reg_1093);
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265;
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at quantl.v:640
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x1aU) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_26_reg_1391))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_27_reg_1395 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, (IData)(
										(VL_ULL(0xffffffff) 
										& (VL_MULS_QQQ(47,47,47, VL_ULL(0x5b38), 
										(VL_ULL(0x7fffffffffff) 
										& VL_EXTENDS_QI(47,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast4_reg_1268)))) 
										>> 0xfU))));
    }
    // ALWAYS at upzero.v:569
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 0xdU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_load_9_reg_1168 
	    = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at upzero.v:478
    if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			>> 0x19U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
					      >> 0x1fU))))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259 
	    = vlTOPp->our__DOT__r_q0;
    } else {
	if ((1U & ((((IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			      >> 0x24U)) | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						    >> 0x26U))) 
		    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			       >> 0x2aU))) | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						      >> 5U))))) {
	    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259 
		= vlTOPp->our__DOT__r_q1;
	}
    }
    // ALWAYS at upzero.v:470
    if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			>> 4U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
					   >> 0x2cU))))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252 
	    = vlTOPp->our__DOT__r_q1;
    } else {
	if ((1U & ((((((IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
				>> 1U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						   >> 0xbU))) 
		      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
				 >> 0x24U))) | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							>> 0x26U))) 
		    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			       >> 0x2aU))) | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						      >> 0x2bU))))) {
	    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252 
		= vlTOPp->our__DOT__r_q0;
	}
    }
    // ALWAYS at upzero.v:594
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
		       >> 2U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_reg_1093 
	    = VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt);
    }
    // ALWAYS at upzero.v:486
    if ((1U & (((IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			 >> 9U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
					    >> 0x13U))) 
	       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			  >> 0x25U))))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265 
	    = vlTOPp->our__DOT__r_q0;
    } else {
	if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			    >> 0x2bU)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						  >> 7U))))) {
	    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265 
		= vlTOPp->our__DOT__r_q1;
	}
    }
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1026;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= (IData)(VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__ph_reg_4083));
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1019;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= (IData)(VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__ph_reg_4083));
    // ALWAYS at quantl.v:634
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x19U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_25_reg_1387))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_26_reg_1391 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, (IData)(
										(VL_ULL(0xffffffff) 
										& (VL_MULS_QQQ(47,47,47, VL_ULL(0x4fe8), 
										(VL_ULL(0x7fffffffffff) 
										& VL_EXTENDS_QI(47,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast4_reg_1268)))) 
										>> 0xfU))));
    }
    // ALWAYS at encode.v:1502
    if ((0x1000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__ph_reg_4083 = (vlTOPp->our__DOT__enc__DOT__szh_reg_3959 
						   + vlTOPp->our__DOT__enc__DOT__dh_1_reg_4076);
	vlTOPp->our__DOT__enc__DOT__yh_reg_4089 = (vlTOPp->our__DOT__enc__DOT__sh_reg_4018 
						   + vlTOPp->our__DOT__enc__DOT__dh_1_reg_4076);
    }
    // ALWAYS at quantl.v:628
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x18U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_24_reg_1383))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_25_reg_1387 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, (IData)(
										(VL_ULL(0xffffffff) 
										& (VL_MULS_QQQ(47,47,47, VL_ULL(0x4498), 
										(VL_ULL(0x7fffffffffff) 
										& VL_EXTENDS_QI(47,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast4_reg_1268)))) 
										>> 0xfU))));
    }
    // ALWAYS at encode.v:1471
    if ((0x800000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__dh_1_reg_4076 = (IData)(
							    (vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0 
							     >> 0xfU));
    }
    // ALWAYS at encode.v:1565
    if ((0x10000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__szh_reg_3959 = (IData)(
							   ((((vlTOPp->our__DOT__enc__DOT__tmp_61_3_i1_reg_3913 
							       + vlTOPp->our__DOT__enc__DOT__tmp_61_4_i1_reg_3918) 
							      + vlTOPp->our__DOT__enc__DOT__tmp_61_2_i1_reg_3908) 
							     + 
							     (vlTOPp->our__DOT__enc__DOT__tmp34_reg_3875 
							      + vlTOPp->our__DOT__enc__DOT__zl_1_reg_3903)) 
							    >> 0xeU));
    }
    // ALWAYS at encode.v:1389
    if ((0x80000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__apl1_reg_4012 = 
	    (((IData)(vlTOPp->our__DOT__enc__DOT__tmp_47_reg_3985)
	       ? 0xffffff40U : 0xc0U) + (IData)((VL_ULL(0x1ffffffff) 
						 & ((((QData)((IData)(vlTOPp->our__DOT__r_q1)) 
						      << 8U) 
						     - 
						     VL_EXTENDS_QI(41,32, vlTOPp->our__DOT__r_q1)) 
						    >> 8U))));
	vlTOPp->our__DOT__enc__DOT__apl2_reg_4006 = 
	    (VL_EXTENDS_II(32,29, (0x1fffffffU & (VL_EXTENDS_II(29,28, 
								(0xfffffffU 
								 & ((IData)(vlTOPp->our__DOT__enc__DOT__tmp_47_reg_3985)
								     ? 
								    VL_EXTENDS_II(28,27, 
										(0x7ffffffU 
										& (vlTOPp->our__DOT__r_q1 
										>> 5U)))
								     : (IData)(
									       (VL_ULL(0xfffffff) 
										& (VL_NEGATE_Q(
										VL_EXTENDS_QQ(35,34, 
										((QData)((IData)(vlTOPp->our__DOT__r_q1)) 
										<< 2U))) 
										>> 7U)))))) 
						  + 
						  ((1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__tmp_6_i_reg_3991 
							       >> 0x3fU)))
						    ? 0x1fffff80U
						    : 0x80U)))) 
	     + (IData)((VL_ULL(0x1ffffffff) & ((((QData)((IData)(vlTOPp->our__DOT__r_q0)) 
						 << 7U) 
						- VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__r_q0)) 
					       >> 7U))));
	__Vdly__our__DOT__enc__DOT__p_ih_t_reg_4023 
	    = (3U & ((VL_GTS_III(1,32,32, ((0x80000000U 
					    & vlTOPp->our__DOT__enc__DOT__eh_fu_2419_p2)
					    ? VL_NEGATE_I(vlTOPp->our__DOT__enc__DOT__eh_fu_2419_p2)
					    : vlTOPp->our__DOT__enc__DOT__eh_fu_2419_p2), 
				 VL_EXTENDS_II(32,31, 
					       (0x7fffffffU 
						& (IData)(
							  (vlTOPp->our__DOT__enc__DOT__tmp_19_reg_4001 
							   >> 0xcU)))))
		       ? 2U : 3U) + ((0x80000000U & vlTOPp->our__DOT__enc__DOT__eh_fu_2419_p2)
				      ? 2U : 0U)));
	vlTOPp->our__DOT__enc__DOT__sh_reg_4018 = vlTOPp->our__DOT__enc__DOT__sh_fu_2415_p2;
    }
    // ALWAYS at quantl.v:622
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x17U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_23_reg_1379))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_24_reg_1383 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,31, (0x7fffffffU 
					       & (IData)(
							 (VL_ULL(0x7fffffff) 
							  & (VL_MULS_QQQ(46,46,46, VL_ULL(0x3de0), 
									 (VL_ULL(0x3fffffffffff) 
									  & VL_EXTENDS_QI(46,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at encode_mul_32s_32g8j.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0 
	= (VL_ULL(0x7fffffffffff) & VL_MULS_QQQ(47,47,47, 
						(VL_ULL(0x7fffffffffff) 
						 & VL_EXTENDS_QI(47,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0)), 
						(VL_ULL(0x7fffffffffff) 
						 & VL_EXTENDS_QI(47,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__b_reg0))));
    // ALWAYS at encode.v:1631
    if ((0x8000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__tmp_61_2_i1_reg_3908 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__tmp_61_3_i1_reg_3913 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__tmp_61_4_i1_reg_3918 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__zl_1_reg_3903 = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at encode.v:1598
    if ((0x2000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__tmp34_reg_3875 
	    = (vlTOPp->our__DOT__enc__DOT__tmp_61_i1_reg_3813 
	       + vlTOPp->our__DOT__enc__DOT__tmp_61_1_i1_reg_3818);
    }
    // ALWAYS at encode.v:1550
    if ((0x40000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__sph_reg_3996 = (IData)(
							   ((vlTOPp->our__DOT__enc__DOT__pl_3_reg_3970 
							     + vlTOPp->our__DOT__enc__DOT__tmp_58_i1_reg_3975) 
							    >> 0xfU));
	vlTOPp->our__DOT__enc__DOT__tmp_19_reg_4001 
	    = (VL_ULL(0x7ffffffffff) & VL_MULS_QQQ(44,44,44, VL_ULL(0x234), 
						   (VL_ULL(0xfffffffffff) 
						    & VL_EXTENDS_QI(44,32, vlTOPp->our__DOT__enc__DOT__reg_1026))));
	vlTOPp->our__DOT__enc__DOT__tmp_47_reg_3985 
	    = (1U & (IData)((vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
			     >> 0x3fU)));
	vlTOPp->our__DOT__enc__DOT__tmp_6_i_reg_3991 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at quantl.v:616
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x16U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_22_reg_1375))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_23_reg_1379 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,31, (0x7fffffffU 
					       & (IData)(
							 (VL_ULL(0x7fffffff) 
							  & (VL_MULS_QQQ(46,46,46, VL_ULL(0x3728), 
									 (VL_ULL(0x3fffffffffff) 
									  & VL_EXTENDS_QI(46,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at encode_mul_32s_32g8j.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__tmp_23_reg_4036;
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode.v:1617
    if ((0x1000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__tmp_61_1_i1_reg_3818 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__tmp_61_i1_reg_3813 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    vlTOPp->our__DOT__enc__DOT__sh_fu_2415_p2 = (vlTOPp->our__DOT__enc__DOT__szh_reg_3959 
						 + vlTOPp->our__DOT__enc__DOT__sph_reg_3996);
    // ALWAYS at encode.v:1509
    if ((0x20000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__pl_3_reg_3970 = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__tmp_58_i1_reg_3975 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at quantl.v:610
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x15U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_21_reg_1371))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_22_reg_1375 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,31, (0x7fffffffU 
					       & (IData)(
							 (VL_ULL(0x7fffffff) 
							  & (VL_MULS_QQQ(46,46,46, VL_ULL(0x3260), 
									 (VL_ULL(0x3fffffffffff) 
									  & VL_EXTENDS_QI(46,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at encode.v:1406
    if ((0x100000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030 
	    = (0x7fffU & (VL_GTS_III(1,32,32, 0xffffd000U, vlTOPp->our__DOT__enc__DOT__p_i1_fu_2500_p3)
			   ? 0x5000U : vlTOPp->our__DOT__enc__DOT__p_i1_fu_2500_p3));
	vlTOPp->our__DOT__enc__DOT__tmp_23_reg_4036 
	    = ((2U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
	        ? ((1U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
		    ? 0x650U : 0x1cf0U) : ((1U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
					    ? 0xfffff9b0U
					    : 0xffffe310U));
	vlTOPp->our__DOT__enc__DOT__tmp_53_i_reg_4046 
	    = (0x5800U < vlTOPp->our__DOT__enc__DOT__p_i2_fu_2613_p3);
	vlTOPp->our__DOT__enc__DOT__tmp_59_reg_4041 
	    = (0x7fffU & vlTOPp->our__DOT__enc__DOT__p_i2_fu_2613_p3);
    }
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1050;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1044;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1062;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1056;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1038;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1032;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1026;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1019;
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1026;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= (IData)(VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__plt_reg_3722));
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1019;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= (IData)(VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__plt_reg_3722));
    // ALWAYS at quantl.v:604
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x14U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_20_reg_1367))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_21_reg_1371 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,31, (0x7fffffffU 
					       & (IData)(
							 (VL_ULL(0x7fffffff) 
							  & (VL_MULS_QQQ(46,46,46, VL_ULL(0x2d90), 
									 (VL_ULL(0x3fffffffffff) 
									  & VL_EXTENDS_QI(46,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240)))) 
							     >> 0xfU))))));
    }
    vlTOPp->our__DOT__enc__DOT__p_i1_fu_2500_p3 = (
						   VL_LTS_III(1,32,32, 0x3000U, vlTOPp->our__DOT__enc__DOT__apl2_reg_4006)
						    ? 0x3000U
						    : vlTOPp->our__DOT__enc__DOT__apl2_reg_4006);
    vlTOPp->our__DOT__enc__DOT__wd3_0_apl1_i_fu_2653_p3 
	= (VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__apl1_reg_4012, 
		      (0x7fffU & ((IData)(0x3c00U) 
				  - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030))))
	    ? (0x7fffU & ((IData)(0x3c00U) - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030)))
	    : vlTOPp->our__DOT__enc__DOT__apl1_reg_4012);
    vlTOPp->our__DOT__enc__DOT__nbl_assign_3_fu_2705_p3 
	= ((IData)(vlTOPp->our__DOT__enc__DOT__tmp_53_i_reg_4046)
	    ? 0x5800U : (IData)(vlTOPp->our__DOT__enc__DOT__tmp_59_reg_4041));
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1050;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1044;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1038;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1032;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1038;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= (vlTOPp->our__DOT__enc__DOT__reg_1032 << 1U);
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1026;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= (vlTOPp->our__DOT__enc__DOT__reg_1019 << 1U);
    // ALWAYS at encode.v:1523
    if ((0x10U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__plt_reg_3722 = 
	    (vlTOPp->our__DOT__enc__DOT__szl_reg_3331 
	     + vlTOPp->our__DOT__enc__DOT__dlt_reg_3695);
	vlTOPp->our__DOT__enc__DOT__rlt_reg_3728 = 
	    (vlTOPp->our__DOT__enc__DOT__sl_reg_3648 
	     + vlTOPp->our__DOT__enc__DOT__dlt_reg_3695);
    }
    // ALWAYS at quantl.v:598
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x13U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_19_reg_1363))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_20_reg_1367 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,31, (0x7fffffffU 
					       & (IData)(
							 (VL_ULL(0x7fffffff) 
							  & (VL_MULS_QQQ(46,46,46, VL_ULL(0x29d8), 
									 (VL_ULL(0x3fffffffffff) 
									  & VL_EXTENDS_QI(46,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at encode.v:1477
    if ((0x4000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__dlt_reg_3695 = (IData)(
							   (VL_ULL(0xffffffff) 
							    & (VL_MULS_QQQ(47,47,47, 
									   (VL_ULL(0x7fffffffffff) 
									    & VL_EXTENDS_QI(47,32, vlTOPp->our__DOT__enc__DOT__reg_1081)), 
									   (VL_ULL(0x7fffffffffff) 
									    & VL_EXTENDS_QI(47,16, (IData)(vlTOPp->our__DOT__enc__DOT__qq4_code4_table_loa_reg_3680)))) 
							       >> 0xfU)));
    }
    // ALWAYS at quantl.v:592
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x12U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_18_reg_1359))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_19_reg_1363 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,31, (0x7fffffffU 
					       & (IData)(
							 (VL_ULL(0x7fffffff) 
							  & (VL_MULS_QQQ(46,46,46, VL_ULL(0x2618), 
									 (VL_ULL(0x3fffffffffff) 
									  & VL_EXTENDS_QI(46,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at encode.v:1530
    if ((0x2000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__qq4_code4_table_loa_reg_3680 
	    = vlTOPp->our__DOT__enc__DOT__qq4_code4_table_s_q0;
	vlTOPp->our__DOT__enc__DOT__tmp_46_reg_3685 
	    = (0x7fffU & vlTOPp->our__DOT__enc__DOT__p_i_fu_1926_p3);
	vlTOPp->our__DOT__enc__DOT__tmp_50_i_reg_3690 
	    = (0x4800U < vlTOPp->our__DOT__enc__DOT__p_i_fu_1926_p3);
    }
    // ALWAYS at quantl.v:586
    if ((((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	   >> 0x11U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_16_reg_1352)) 
	 & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_17_fu_903_p2))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_18_reg_1359 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,31, (0x7fffffffU 
					       & (IData)(
							 (VL_ULL(0x7fffffff) 
							  & (VL_MULS_QQQ(46,46,46, VL_ULL(0x2308), 
									 (VL_ULL(0x3fffffffffff) 
									  & VL_EXTENDS_QI(46,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240)))) 
							     >> 0xfU))))));
    }
    vlTOPp->our__DOT__enc__DOT__nbl_assign_2_fu_1971_p3 
	= ((IData)(vlTOPp->our__DOT__enc__DOT__tmp_50_i_reg_3690)
	    ? 0x4800U : (IData)(vlTOPp->our__DOT__enc__DOT__tmp_46_reg_3685));
    // ALWAYS at encode_qq4_code4_eOg.v:33
    if (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
	  >> 0x18U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) {
	vlTOPp->our__DOT__enc__DOT__qq4_code4_table_s_q0 
	    = vlTOPp->our__DOT__enc__DOT__qq4_code4_table_s_U__DOT__encode_qq4_code4_eOg_rom_U__DOT__ram
	    [(0xfU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_return) 
		      >> 2U))];
    }
    // ALWAYS at quantl.v:580
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0x10U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_15_reg_1348))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_16_reg_1352 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,30, (0x3fffffffU 
					       & (IData)(
							 (VL_ULL(0x3fffffff) 
							  & (VL_MULS_QQQ(45,45,45, VL_ULL(0x1d60), 
									 (VL_ULL(0x1fffffffffff) 
									  & VL_EXTENDS_QI(45,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:574
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0xfU) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_14_reg_1344))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_15_reg_1348 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,30, (0x3fffffffU 
					       & (IData)(
							 (VL_ULL(0x3fffffff) 
							  & (VL_MULS_QQQ(45,45,45, VL_ULL(0x1ad0), 
									 (VL_ULL(0x1fffffffffff) 
									  & VL_EXTENDS_QI(45,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:568
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0xeU) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_13_reg_1340))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_14_reg_1344 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,30, (0x3fffffffU 
					       & (IData)(
							 (VL_ULL(0x3fffffff) 
							  & (VL_MULS_QQQ(45,45,45, VL_ULL(0x1890), 
									 (VL_ULL(0x1fffffffffff) 
									  & VL_EXTENDS_QI(45,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:562
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0xdU) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_12_reg_1336))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_13_reg_1340 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,30, (0x3fffffffU 
					       & (IData)(
							 (VL_ULL(0x3fffffff) 
							  & (VL_MULS_QQQ(45,45,45, VL_ULL(0x1650), 
									 (VL_ULL(0x1fffffffffff) 
									  & VL_EXTENDS_QI(45,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:556
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0xcU) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_11_reg_1332))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_12_reg_1336 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,30, (0x3fffffffU 
					       & (IData)(
							 (VL_ULL(0x3fffffff) 
							  & (VL_MULS_QQQ(45,45,45, VL_ULL(0x1450), 
									 (VL_ULL(0x1fffffffffff) 
									  & VL_EXTENDS_QI(45,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:550
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0xbU) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_10_reg_1328))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_11_reg_1332 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,30, (0x3fffffffU 
					       & (IData)(
							 (VL_ULL(0x3fffffff) 
							  & (VL_MULS_QQQ(45,45,45, VL_ULL(0x1258), 
									 (VL_ULL(0x1fffffffffff) 
									  & VL_EXTENDS_QI(45,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:544
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 0xaU) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_s_reg_1324))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_10_reg_1328 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,30, (0x3fffffffU 
					       & (IData)(
							 (VL_ULL(0x3fffffff) 
							  & (VL_MULS_QQQ(45,45,45, VL_ULL(0x1090), 
									 (VL_ULL(0x1fffffffffff) 
									  & VL_EXTENDS_QI(45,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:694
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 9U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_9_reg_1320))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_s_reg_1324 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,29, (0x1fffffffU 
					       & (IData)(
							 (VL_ULL(0x1fffffff) 
							  & (VL_MULS_QQQ(44,44,44, VL_ULL(0xec8), 
									 (VL_ULL(0xfffffffffff) 
									  & VL_EXTENDS_QI(44,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:688
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 8U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_8_reg_1316))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_9_reg_1320 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,29, (0x1fffffffU 
					       & (IData)(
							 (VL_ULL(0x1fffffff) 
							  & (VL_MULS_QQQ(44,44,44, VL_ULL(0xd30), 
									 (VL_ULL(0xfffffffffff) 
									  & VL_EXTENDS_QI(44,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:682
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 7U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_7_reg_1312))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_8_reg_1316 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,29, (0x1fffffffU 
					       & (IData)(
							 (VL_ULL(0x1fffffff) 
							  & (VL_MULS_QQQ(44,44,44, VL_ULL(0xb90), 
									 (VL_ULL(0xfffffffffff) 
									  & VL_EXTENDS_QI(44,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:676
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 6U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_6_reg_1308))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_7_reg_1312 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,29, (0x1fffffffU 
					       & (IData)(
							 (VL_ULL(0x1fffffff) 
							  & (VL_MULS_QQQ(44,44,44, VL_ULL(0xa18), 
									 (VL_ULL(0xfffffffffff) 
									  & VL_EXTENDS_QI(44,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:670
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 5U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_5_reg_1304))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_6_reg_1308 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,29, (0x1fffffffU 
					       & (IData)(
							 (VL_ULL(0x1fffffff) 
							  & (VL_MULS_QQQ(44,44,44, VL_ULL(0x8a0), 
									 (VL_ULL(0xfffffffffff) 
									  & VL_EXTENDS_QI(44,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:664
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 4U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_4_reg_1300))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_5_reg_1304 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,29, (0x1fffffffU 
					       & (IData)(
							 (VL_ULL(0x1fffffff) 
							  & (VL_MULS_QQQ(44,44,44, VL_ULL(0x748), 
									 (VL_ULL(0xfffffffffff) 
									  & VL_EXTENDS_QI(44,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:658
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 3U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_3_reg_1296))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_4_reg_1300 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,29, (0x1fffffffU 
					       & (IData)(
							 (VL_ULL(0x1fffffff) 
							  & (VL_MULS_QQQ(44,44,44, VL_ULL(0x5f0), 
									 (VL_ULL(0xfffffffffff) 
									  & VL_EXTENDS_QI(44,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:652
    if (((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	  >> 2U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_2_reg_1292))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_3_reg_1296 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
			 VL_EXTENDS_II(32,29, (0x1fffffffU 
					       & (IData)(
							 (VL_ULL(0x1fffffff) 
							  & (VL_MULS_QQQ(44,44,44, VL_ULL(0x4b0), 
									 (VL_ULL(0xfffffffffff) 
									  & VL_EXTENDS_QI(44,32, (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251)))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:646
    if ((((vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	   >> 1U) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2)) 
	 & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_1_fu_469_p2))) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_2_reg_1292 
	    = VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3, 
			 VL_EXTENDS_II(32,28, (0xfffffffU 
					       & (IData)(
							 (VL_ULL(0xfffffff) 
							  & (VL_MULS_QQQ(43,43,43, VL_ULL(0x370), 
									 (VL_ULL(0x7ffffffffff) 
									  & VL_EXTENDS_QI(43,32, vlTOPp->our__DOT__enc__DOT__reg_1081))) 
							     >> 0xfU))))));
    }
    // ALWAYS at quantl.v:525
    if ((2U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) {
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205 
	    = vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3;
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275 
	    = (VL_ULL(0x1fffffffffff) & VL_EXTENDS_QI(45,32, vlTOPp->our__DOT__enc__DOT__reg_1081));
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast4_reg_1268 
	    = (VL_ULL(0x7fffffffffff) & VL_EXTENDS_QI(47,32, vlTOPp->our__DOT__enc__DOT__reg_1081));
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast5_reg_1263 
	    = (VL_ULL(0xffffffffffff) & VL_EXTENDS_QI(48,32, vlTOPp->our__DOT__enc__DOT__reg_1081));
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251 
	    = (VL_ULL(0xfffffffffff) & VL_EXTENDS_QI(44,32, vlTOPp->our__DOT__enc__DOT__reg_1081));
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240 
	    = (VL_ULL(0x3fffffffffff) & VL_EXTENDS_QI(46,32, vlTOPp->our__DOT__enc__DOT__reg_1081));
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_reg_1201 
	    = (1U & (vlTOPp->our__DOT__enc__DOT__el_reg_3660 
		     >> 0x1fU));
	vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__wd_cast_cast1_reg_1235 
	    = (VL_ULL(0x1ffffffff) & VL_EXTENDS_QI(33,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3));
    }
    // ALWAYS at quantl.v:443
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->reset) ? 1U : vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_NS_fsm);
    // ALWAYS at encode.v:1544
    if ((1U & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		>> 0x14U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
			     >> 0x15U)))) {
	vlTOPp->our__DOT__enc__DOT__reg_1081 = vlTOPp->our__DOT__r_q0;
    }
    // ALWAYS at encode.v:1483
    if ((0x800000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__el_reg_3660 = (vlTOPp->our__DOT__enc__DOT__xl_reg_3638 
						   - vlTOPp->our__DOT__enc__DOT__sl_reg_3648);
    }
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_17_fu_903_p2 
	= VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
		     VL_EXTENDS_II(32,31, (0x7fffffffU 
					   & (IData)(
						     (VL_ULL(0x7fffffff) 
						      & ((VL_EXTENDS_QQ(46,45, 
									((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
									 << 0xdU)) 
							  - 
							  VL_EXTENDS_QQ(46,35, 
									((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
									 << 3U))) 
							 >> 0xfU))))));
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3 
	= ((0x80000000U & vlTOPp->our__DOT__enc__DOT__el_reg_3660)
	    ? VL_NEGATE_I(vlTOPp->our__DOT__enc__DOT__el_reg_3660)
	    : vlTOPp->our__DOT__enc__DOT__el_reg_3660);
    // ALWAYS at encode.v:1462
    if ((0x400000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__buff_load_45_reg_3654 
	    = vlTOPp->our__DOT__r_q0;
	vlTOPp->our__DOT__enc__DOT__sl_reg_3648 = (vlTOPp->our__DOT__enc__DOT__szl_reg_3331 
						   + vlTOPp->our__DOT__enc__DOT__spl_reg_3371);
	vlTOPp->our__DOT__enc__DOT__xh_reg_3643 = (IData)(
							  (VL_ULL(0x1ffffffff) 
							   & ((vlTOPp->our__DOT__enc__DOT__xa_1_fu_1720_p2 
							       - vlTOPp->our__DOT__enc__DOT__xb_1_fu_1795_p2) 
							      >> 0xfU)));
	vlTOPp->our__DOT__enc__DOT__xl_reg_3638 = (IData)(
							  (VL_ULL(0xffffffff) 
							   & ((vlTOPp->our__DOT__enc__DOT__xa_1_fu_1720_p2 
							       + vlTOPp->our__DOT__enc__DOT__xb_1_fu_1795_p2) 
							      >> 0xfU)));
    }
    vlTOPp->our__DOT__enc__DOT__xb_1_fu_1795_p2 = (VL_ULL(0x7fffffffffff) 
						   & (VL_EXTENDS_QQ(47,45, 
								    (VL_ULL(0x1fffffffffff) 
								     & ((VL_EXTENDS_QQ(45,43, vlTOPp->our__DOT__enc__DOT__tmp18_reg_3617) 
									 + 
									 VL_EXTENDS_QQ(45,44, vlTOPp->our__DOT__enc__DOT__tmp_76_3_reg_3562)) 
									+ 
									VL_EXTENDS_QQ(45,42, 
										(VL_ULL(0x3ffffffffff) 
										& ((VL_EXTENDS_QQ(42,41, vlTOPp->our__DOT__enc__DOT__tmp_7_reg_3547) 
										+ vlTOPp->our__DOT__enc__DOT__tmp_76_1_reg_3552) 
										+ 
										VL_EXTENDS_QQ(42,39, vlTOPp->our__DOT__enc__DOT__xb_reg_3542))))))) 
						      + 
						      ((VL_EXTENDS_QQ(47,45, vlTOPp->our__DOT__enc__DOT__tmp13_reg_3612) 
							+ 
							VL_EXTENDS_QQ(47,46, vlTOPp->our__DOT__enc__DOT__tmp_76_4_reg_3572)) 
						       + 
						       VL_EXTENDS_QQ(47,40, 
								     (VL_ULL(0xffffffffff) 
								      & ((VL_EXTENDS_QQ(40,39, vlTOPp->our__DOT__enc__DOT__tmp_76_9_reg_3592) 
									  + 
									  VL_EXTENDS_QQ(40,39, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__buff_load_21_reg_3490)) 
										<< 7U))) 
									 + 
									 VL_EXTENDS_QQ(40,39, 
										(VL_ULL(0x7fffffffff) 
										& (VL_EXTENDS_QQ(39,38, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1068)) 
										<< 6U)) 
										- 
										VL_EXTENDS_QQ(39,36, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1068)) 
										<< 4U)))))))))));
    vlTOPp->our__DOT__enc__DOT__tmp_i2_fu_1872_p2 = 
	(VL_ULL(0x7fffffffff) & (((QData)((IData)(vlTOPp->our__DOT__enc__DOT__buff_load_45_reg_3654)) 
				  << 7U) - VL_EXTENDS_QI(39,32, vlTOPp->our__DOT__enc__DOT__buff_load_45_reg_3654)));
    // ALWAYS at encode.v:1559
    if ((0x1000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__spl_reg_3371 = (IData)(
							   (VL_ULL(0xffffffff) 
							    & ((vlTOPp->our__DOT__enc__DOT__pl_reg_3337 
								+ vlTOPp->our__DOT__enc__DOT__tmp_58_i_reg_3354) 
							       >> 0xfU)));
    }
    // ALWAYS at encode.v:1604
    if ((0x800U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__tmp_58_i_reg_3354 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0;
    }
    // ALWAYS at encode.v:1516
    if ((0x400U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__pl_reg_3337 = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__szl_reg_3331 = (IData)(
							   ((((vlTOPp->our__DOT__enc__DOT__tmp_61_3_i_reg_3299 
							       + vlTOPp->our__DOT__enc__DOT__tmp_61_4_i_reg_3304) 
							      + vlTOPp->our__DOT__enc__DOT__tmp_61_2_i_reg_3294) 
							     + 
							     (vlTOPp->our__DOT__enc__DOT__tmp21_reg_3244 
							      + vlTOPp->our__DOT__enc__DOT__zl_reg_3289)) 
							    >> 0xeU));
    }
    // ALWAYS at encode_mul_32s_32g8j.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0 
	= (VL_ULL(0x7fffffffffff) & VL_MULS_QQQ(47,47,47, 
						(VL_ULL(0x7fffffffffff) 
						 & VL_EXTENDS_QI(47,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0)), 
						(VL_ULL(0x7fffffffffff) 
						 & VL_EXTENDS_QI(47,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0))));
    // ALWAYS at encode.v:1640
    if ((0x200U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__tmp_61_2_i_reg_3294 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__tmp_61_3_i_reg_3299 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__tmp_61_4_i_reg_3304 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__zl_reg_3289 = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U17__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at encode.v:1592
    if ((0x80U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__tmp21_reg_3244 
	    = (vlTOPp->our__DOT__enc__DOT__tmp_61_i_reg_3183 
	       + vlTOPp->our__DOT__enc__DOT__tmp_61_1_i_reg_3188);
    }
    // ALWAYS at encode_mul_32s_32g8j.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0 
	= (vlTOPp->our__DOT__enc__DOT__reg_1019 << 1U);
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U17__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U17__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0));
    // ALWAYS at encode.v:1624
    if ((0x40U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])) {
	vlTOPp->our__DOT__enc__DOT__tmp_61_1_i_reg_3188 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__enc__DOT__tmp_61_i_reg_3183 
	    = vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1062;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1056;
    // ALWAYS at encode_mul_32s_32g8j.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1026;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U17__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1019;
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode_mul_32s_32dEe.v:33
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0), 
		      VL_EXTENDS_QI(64,32, vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0));
    // ALWAYS at encode.v:1354
    if ((0x1000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__reg_1062 = vlTOPp->our__DOT__r_q0;
    } else {
	if ((1U & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		    >> 6U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
			      >> 0xdU)))) {
	    vlTOPp->our__DOT__enc__DOT__reg_1062 = vlTOPp->our__DOT__r_q1;
	}
    }
    // ALWAYS at encode.v:1346
    if ((0x1000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) {
	vlTOPp->our__DOT__enc__DOT__reg_1056 = vlTOPp->our__DOT__r_q1;
    } else {
	if ((1U & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		    >> 0xcU) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				>> 6U)))) {
	    vlTOPp->our__DOT__enc__DOT__reg_1056 = vlTOPp->our__DOT__r_q0;
	}
    }
    // ALWAYS at encode.v:1306
    if ((1U & (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		 >> 7U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			   >> 0xdU)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					>> 0xfU)))) {
	vlTOPp->our__DOT__enc__DOT__reg_1026 = vlTOPp->our__DOT__r_q0;
    } else {
	if ((1U & ((((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
			>> 1U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				  >> 7U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     >> 8U)) 
		     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			>> 0x1bU)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				      >> 0xaU)) | (
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						   >> 0x11U)))) {
	    vlTOPp->our__DOT__enc__DOT__reg_1026 = vlTOPp->our__DOT__r_q1;
	}
    }
    // ALWAYS at encode.v:1298
    if ((1U & (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		 >> 7U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			   >> 0xdU)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					>> 0xfU)))) {
	vlTOPp->our__DOT__enc__DOT__reg_1019 = vlTOPp->our__DOT__r_q1;
    } else {
	if ((1U & (((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		       >> 1U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				 >> 7U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    >> 8U)) 
		    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		       >> 9U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
				  >> 0x1bU)))) {
	    vlTOPp->our__DOT__enc__DOT__reg_1019 = vlTOPp->our__DOT__r_q0;
	}
    }
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1050;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1044;
    // ALWAYS at encode_mul_32s_32dEe.v:32
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1038;
    // ALWAYS at encode_mul_32s_32dEe.v:31
    vlTOPp->our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 
	= vlTOPp->our__DOT__enc__DOT__reg_1032;
    vlTOPp->our__DOT__enc__DOT__xa_1_fu_1720_p2 = (VL_ULL(0x7fffffffffff) 
						   & (VL_EXTENDS_QQ(47,43, 
								    (VL_ULL(0x7ffffffffff) 
								     & (VL_EXTENDS_QQ(43,42, 
										(VL_ULL(0x3ffffffffff) 
										& (VL_EXTENDS_QQ(42,40, 
										(VL_ULL(0xffffffffff) 
										& (VL_EXTENDS_QQ(40,39, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1056)) 
										<< 7U)) 
										+ 
										VL_EXTENDS_QQ(40,39, vlTOPp->our__DOT__enc__DOT__tmp_8_reg_3597)))) 
										+ vlTOPp->our__DOT__enc__DOT__tmp_73_3_reg_3557))) 
									+ 
									VL_EXTENDS_QQ(43,40, 
										(VL_ULL(0xffffffffff) 
										& (VL_EXTENDS_QQ(40,39, vlTOPp->our__DOT__enc__DOT__tmp6_reg_3607) 
										+ 
										VL_EXTENDS_QQ(40,37, 
										(VL_ULL(0x1fffffffff) 
										& (VL_EXTENDS_QQ(37,36, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1019)) 
										<< 4U)) 
										- 
										VL_EXTENDS_QQ(37,34, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1019)) 
										<< 2U))))))))))) 
						      + 
						      (((VL_EXTENDS_QQ(47,44, vlTOPp->our__DOT__enc__DOT__tmp_73_6_reg_3582) 
							 + 
							 VL_EXTENDS_QQ(47,46, vlTOPp->our__DOT__enc__DOT__tmp_73_5_reg_3577)) 
							+ 
							VL_EXTENDS_QQ(47,44, vlTOPp->our__DOT__enc__DOT__tmp_73_4_reg_3567)) 
						       + 
						       VL_EXTENDS_QQ(47,44, 
								     (VL_ULL(0xfffffffffff) 
								      & (VL_EXTENDS_QQ(44,43, vlTOPp->our__DOT__enc__DOT__tmp1_reg_3602) 
									 + 
									 VL_EXTENDS_QQ(44,43, vlTOPp->our__DOT__enc__DOT__tmp_73_8_reg_3587)))))));
    // ALWAYS at encode.v:1338
    if ((1U & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		>> 9U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			  >> 0xbU)))) {
	vlTOPp->our__DOT__enc__DOT__reg_1050 = vlTOPp->our__DOT__r_q0;
    } else {
	if ((1U & (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		     >> 3U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
			       >> 5U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					  >> 0xcU)))) {
	    vlTOPp->our__DOT__enc__DOT__reg_1050 = vlTOPp->our__DOT__r_q1;
	}
    }
    // ALWAYS at encode.v:1330
    if ((1U & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		>> 9U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			  >> 0xbU)))) {
	vlTOPp->our__DOT__enc__DOT__reg_1044 = vlTOPp->our__DOT__r_q1;
    } else {
	if ((1U & (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		     >> 0xbU) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				 >> 3U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    >> 5U)))) {
	    vlTOPp->our__DOT__enc__DOT__reg_1044 = vlTOPp->our__DOT__r_q0;
	}
    }
    // ALWAYS at encode.v:1322
    if ((1U & (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		 >> 8U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			   >> 0xaU)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					>> 0xeU)))) {
	vlTOPp->our__DOT__enc__DOT__reg_1038 = vlTOPp->our__DOT__r_q0;
    } else {
	if ((1U & (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		     >> 2U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
			       >> 4U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					  >> 0xbU)))) {
	    vlTOPp->our__DOT__enc__DOT__reg_1038 = vlTOPp->our__DOT__r_q1;
	}
    }
    // ALWAYS at encode.v:1314
    if ((1U & (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		 >> 8U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			   >> 0xaU)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					>> 0xeU)))) {
	vlTOPp->our__DOT__enc__DOT__reg_1032 = vlTOPp->our__DOT__r_q1;
    } else {
	if ((1U & ((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
		      >> 0xaU) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				  >> 2U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     >> 4U)) 
		   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		      >> 0x12U)))) {
	    vlTOPp->our__DOT__enc__DOT__reg_1032 = vlTOPp->our__DOT__r_q0;
	}
    }
    vlTOPp->our__DOT__enc__DOT__tmp_i8_fu_2550_p2 = 
	(VL_ULL(0x7fffffffff) & (((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1032)) 
				  << 7U) - VL_EXTENDS_QI(39,32, vlTOPp->our__DOT__enc__DOT__reg_1032)));
    // ALWAYS at our.v:114
    if (vlTOPp->reset) {
	__Vdly__our__DOT__state = VL_ULL(0xb);
	__Vdly__our__DOT__read_cnt = VL_ULL(0);
	__Vdly__our__DOT__write_cnt = VL_ULL(0);
	vlTOPp->our__DOT__r_read_enable = 0U;
	vlTOPp->our__DOT__r_write_enable = 0U;
	vlTOPp->our__DOT__r_finish_read = 0U;
	vlTOPp->our__DOT__r_finish_write = 0U;
	__Vdly__our__DOT__r_read_addr = VL_ULL(0);
	__Vdly__our__DOT__r_write_addr = VL_ULL(0);
	vlTOPp->our__DOT__r_write_size = VL_ULL(0);
	vlTOPp->our__DOT__r_read_size_output = VL_ULL(0);
	vlTOPp->our__DOT__r_done = 0U;
	vlTOPp->our__DOT__r_next = 0U;
	__Vdly__our__DOT__timer = VL_ULL(0);
    } else {
	__Vdly__our__DOT__timer = (VL_ULL(1) + vlTOPp->our__DOT__timer);
	if ((VL_ULL(0xb) == vlTOPp->our__DOT__state)) {
	    __Vdly__our__DOT__state = VL_ULL(0);
	} else {
	    if ((VL_ULL(0) == vlTOPp->our__DOT__state)) {
		__Vdly__our__DOT__state = VL_ULL(2);
		__Vdly__our__DOT__r_read_addr = vlTOPp->read_base;
		vlTOPp->our__DOT__r_read_enable = 1U;
		vlTOPp->our__DOT__r_read_size_output 
		    = vlTOPp->read_size_input;
	    } else {
		if ((VL_ULL(2) == vlTOPp->our__DOT__state)) {
		    if ((VL_ULL(1) == vlTOPp->read_ready)) {
			__Vdlyvval__our__DOT__r_data__v0 
			    = vlTOPp->read_data;
			__Vdlyvset__our__DOT__r_data__v0 = 1U;
			__Vdlyvdim0__our__DOT__r_data__v0 
			    = (0x7fU & (IData)(vlTOPp->our__DOT__read_cnt));
			if (((VL_ULL(1) + vlTOPp->our__DOT__read_cnt) 
			     < vlTOPp->num_read)) {
			    __Vdly__our__DOT__read_cnt 
				= (VL_ULL(1) + vlTOPp->our__DOT__read_cnt);
			    __Vdly__our__DOT__r_read_addr 
				= (vlTOPp->our__DOT__r_read_addr 
				   + vlTOPp->read_size_input);
			    __Vdly__our__DOT__state = VL_ULL(2);
			    vlTOPp->our__DOT__r_finish_read = 1U;
			} else {
			    vlTOPp->our__DOT__r_read_enable = 0U;
			    vlTOPp->our__DOT__r_finish_read = 0U;
			    vlTOPp->our__DOT__r_next = 1U;
			    __Vdly__our__DOT__read_cnt = VL_ULL(0);
			    __Vdly__our__DOT__state = VL_ULL(9);
			}
		    } else {
			vlTOPp->our__DOT__r_finish_read = 0U;
		    }
		} else {
		    if ((VL_ULL(0xc) != vlTOPp->our__DOT__state)) {
			if ((VL_ULL(9) == vlTOPp->our__DOT__state)) {
			    vlTOPp->our__DOT__r_next = 0U;
			    if (vlTOPp->our__DOT__ce0) {
				if ((1U & (((((((((
						   ((((((((((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       >> 0x17U) 
							      | ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								  >> 0x18U) 
								 & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) 
							     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x19U)) 
							    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       >> 0x1aU)) 
							   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							      >> 2U)) 
							  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							     >> 0x13U)) 
							 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							    >> 0x14U)) 
							| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							   >> 0x15U)) 
						       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							  >> 0x16U)) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]) 
						     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
							>> 1U)) 
						    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       >> 0x1bU)) 
						   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						      >> 0x1cU)) 
						  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						     >> 0x1dU)) 
						 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						    >> 0x1eU)) 
						| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   >> 0x1fU)) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						 >> 1U)) 
					     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						>> 3U)) 
					    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
					       >> 2U)) 
					   | (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						>> 5U) 
					       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x19U)) 
					      & ((((((((IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								>> 0x26U)) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								  >> 0x2bU))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								 >> 0x2cU))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								>> 5U))) 
						    | (IData)(
							      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							       >> 0x27U))) 
						   | (IData)(
							     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							      >> 0x28U))) 
						  | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							     >> 0x2dU))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							    >> 0x2eU))))))) {
				    __Vdlyvval__our__DOT__r_data__v1 
					= vlTOPp->our__DOT__d0;
				    __Vdlyvset__our__DOT__r_data__v1 = 1U;
				    __Vdlyvdim0__our__DOT__r_data__v1 
					= vlTOPp->our__DOT__addr0;
				} else {
				    vlTOPp->our__DOT__r_q0 
					= vlTOPp->our__DOT__r_data
					[vlTOPp->our__DOT__addr0];
				}
			    }
			    if ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) {
				__Vdly__our__DOT__state = VL_ULL(5);
				vlTOPp->our__DOT__r_returnvalue 
				    = ((vlTOPp->our__DOT__enc__DOT__tmp_31_reg_4156 
					<< 8U) | (IData)(vlTOPp->our__DOT__enc__DOT__tmp_30_reg_4151));
			    }
			    if (vlTOPp->our__DOT__ce1) {
				if ((1U & (((((((((
						   (((((((((((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x17U) 
							       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								  >> 0x16U)) 
							      | ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								  >> 0x18U) 
								 & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) 
							     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x19U)) 
							    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       >> 0x1aU)) 
							   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							      >> 2U)) 
							  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							     >> 0x14U)) 
							 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							    >> 0x15U)) 
							| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							   >> 0x16U)) 
						       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							  >> 0x17U)) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]) 
						     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
							>> 1U)) 
						    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       >> 0x1bU)) 
						   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						      >> 0x1cU)) 
						  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						     >> 0x1dU)) 
						 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						    >> 0x1eU)) 
						| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   >> 0x1fU)) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						 >> 1U)) 
					     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						>> 3U)) 
					    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
					       >> 2U)) 
					   | (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						>> 5U) 
					       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x19U)) 
					      & ((((((((((IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								  >> 0xbU)) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								    >> 0x26U))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								   >> 0x2cU))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								  >> 0x11U))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								 >> 0x17U))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								>> 0x1dU))) 
						    | ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								>> 0x23U)) 
						       & (~ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_reg_1057)))) 
						   | (IData)(
							     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							      >> 0x27U))) 
						  | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							     >> 0x28U))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							    >> 0x2dU))))))) {
				    __Vdlyvval__our__DOT__r_data__v2 
					= vlTOPp->our__DOT__d1;
				    __Vdlyvset__our__DOT__r_data__v2 = 1U;
				    __Vdlyvdim0__our__DOT__r_data__v2 
					= vlTOPp->our__DOT__addr1;
				} else {
				    __Vdly__our__DOT__r_q1 
					= vlTOPp->our__DOT__r_data
					[vlTOPp->our__DOT__addr1];
				}
			    }
			} else {
			    if ((VL_ULL(5) == vlTOPp->our__DOT__state)) {
				__Vdly__our__DOT__r_write_addr 
				    = vlTOPp->write_base;
				vlTOPp->our__DOT__r_write_data 
				    = vlTOPp->our__DOT__r_data
				    [(0x7fU & (IData)(vlTOPp->our__DOT__write_cnt))];
				vlTOPp->our__DOT__r_write_enable = 1U;
				__Vdly__our__DOT__state = VL_ULL(6);
				vlTOPp->our__DOT__r_write_size 
				    = vlTOPp->read_size_input;
				__Vdly__our__DOT__write_cnt = VL_ULL(0);
			    } else {
				if ((VL_ULL(6) == vlTOPp->our__DOT__state)) {
				    if ((VL_ULL(1) 
					 == vlTOPp->write_ready)) {
					if (((VL_ULL(1) 
					      + vlTOPp->our__DOT__write_cnt) 
					     < vlTOPp->num_read)) {
					    __Vdly__our__DOT__write_cnt 
						= (VL_ULL(1) 
						   + vlTOPp->our__DOT__write_cnt);
					    __Vdly__our__DOT__r_write_addr 
						= (vlTOPp->our__DOT__r_write_addr 
						   + vlTOPp->write_size);
					    vlTOPp->our__DOT__r_finish_write = 1U;
					    vlTOPp->our__DOT__r_write_data 
						= vlTOPp->our__DOT__r_data
						[(0x7fU 
						  & ((IData)(1U) 
						     + (IData)(vlTOPp->our__DOT__write_cnt)))];
					    __Vdly__our__DOT__state = VL_ULL(6);
					} else {
					    vlTOPp->our__DOT__r_finish_write = 0U;
					    vlTOPp->our__DOT__r_write_enable = 0U;
					    __Vdly__our__DOT__state = VL_ULL(8);
					    vlTOPp->our__DOT__r_done = 1U;
					}
				    } else {
					vlTOPp->our__DOT__r_finish_write = 0U;
				    }
				} else {
				    if ((VL_ULL(8) 
					 == vlTOPp->our__DOT__state)) {
					__Vdly__our__DOT__read_cnt = VL_ULL(0);
					__Vdly__our__DOT__write_cnt = VL_ULL(0);
					vlTOPp->our__DOT__r_read_enable = 0U;
					vlTOPp->our__DOT__r_write_enable = 0U;
					vlTOPp->our__DOT__r_finish_read = 0U;
					vlTOPp->our__DOT__r_finish_write = 0U;
					__Vdly__our__DOT__r_read_addr = VL_ULL(0);
					__Vdly__our__DOT__r_write_addr = VL_ULL(0);
					vlTOPp->our__DOT__r_write_size = VL_ULL(0);
					vlTOPp->our__DOT__r_read_size_output = VL_ULL(0);
					vlTOPp->our__DOT__r_done = 0U;
					vlTOPp->our__DOT__r_next = 0U;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->our__DOT__timer = __Vdly__our__DOT__timer;
    vlTOPp->our__DOT__state = __Vdly__our__DOT__state;
    vlTOPp->our__DOT__read_cnt = __Vdly__our__DOT__read_cnt;
    vlTOPp->our__DOT__write_cnt = __Vdly__our__DOT__write_cnt;
    // ALWAYSPOST at our.v:158
    if (__Vdlyvset__our__DOT__r_data__v0) {
	vlTOPp->our__DOT__r_data[__Vdlyvdim0__our__DOT__r_data__v0] 
	    = __Vdlyvval__our__DOT__r_data__v0;
    }
    if (__Vdlyvset__our__DOT__r_data__v1) {
	vlTOPp->our__DOT__r_data[__Vdlyvdim0__our__DOT__r_data__v1] 
	    = __Vdlyvval__our__DOT__r_data__v1;
    }
    if (__Vdlyvset__our__DOT__r_data__v2) {
	vlTOPp->our__DOT__r_data[__Vdlyvdim0__our__DOT__r_data__v2] 
	    = __Vdlyvval__our__DOT__r_data__v2;
    }
    vlTOPp->our__DOT__r_read_addr = __Vdly__our__DOT__r_read_addr;
    vlTOPp->our__DOT__r_write_addr = __Vdly__our__DOT__r_write_addr;
    vlTOPp->read_addr = vlTOPp->our__DOT__r_read_addr;
    vlTOPp->write_addr = vlTOPp->our__DOT__r_write_addr;
    vlTOPp->read_enable = vlTOPp->our__DOT__r_read_enable;
    vlTOPp->write_enable = vlTOPp->our__DOT__r_write_enable;
    vlTOPp->finish_read = vlTOPp->our__DOT__r_finish_read;
    vlTOPp->finish_write = vlTOPp->our__DOT__r_finish_write;
    vlTOPp->write_size = vlTOPp->our__DOT__r_write_size;
    vlTOPp->read_size_output = vlTOPp->our__DOT__r_read_size_output;
    vlTOPp->done = vlTOPp->our__DOT__r_done;
    vlTOPp->returnvalue = vlTOPp->our__DOT__r_returnvalue;
    vlTOPp->write_data = vlTOPp->our__DOT__r_write_data;
    // ALWAYS at encode.v:1398
    if ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) {
	vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145 
	    = (0x7fffU & (VL_GTS_III(1,32,32, 0xffffd000U, vlTOPp->our__DOT__enc__DOT__p_i3_fu_2984_p3)
			   ? 0x5000U : vlTOPp->our__DOT__enc__DOT__p_i3_fu_2984_p3));
	vlTOPp->our__DOT__enc__DOT__tmp_30_reg_4151 
	    = (0xffU & (vlTOPp->our__DOT__r_q1 | ((IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023) 
						  << 6U)));
	vlTOPp->our__DOT__enc__DOT__tmp_31_reg_4156 
	    = (0xffffffU & (vlTOPp->our__DOT__r_q1 
			    >> 8U));
    }
    // ALWAYS at upzero.v:575
    if (((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start))) {
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__dlti_addr_reg_1051 
	    = vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset;
	vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_reg_1057 
	    = (0U == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt);
    }
    vlTOPp->our__DOT__enc__DOT__p_i3_fu_2984_p3 = (
						   VL_LTS_III(1,32,32, 0x3000U, vlTOPp->our__DOT__enc__DOT__apl2_1_reg_4133)
						    ? 0x3000U
						    : vlTOPp->our__DOT__enc__DOT__apl2_1_reg_4133);
    vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023 = __Vdly__our__DOT__enc__DOT__p_ih_t_reg_4023;
    vlTOPp->our__DOT__r_q1 = __Vdly__our__DOT__r_q1;
    vlTOPp->our__DOT__enc__DOT__encode_mux_42_32_1_U34__DOT__mux_2_0 
	= ((2U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
	    ? ((1U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
	        ? 0xffffff2aU : 0x31eU) : ((1U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
					    ? 0xffffff2aU
					    : 0x31eU));
    vlTOPp->our__DOT__enc__DOT__wd3_0_apl1_i1_fu_3054_p3 
	= (VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__apl1_4_reg_4139, 
		      (0x7fffU & ((IData)(0x3c00U) 
				  - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145))))
	    ? (0x7fffU & ((IData)(0x3c00U) - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145)))
	    : vlTOPp->our__DOT__enc__DOT__apl1_4_reg_4139);
    // ALWAYS at encode.v:1286
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start = 0U;
    } else {
	if ((1U & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
		    >> 4U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
			      >> 0x18U)))) {
	    vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start = 1U;
	} else {
	    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			       >> 0x2eU)))) {
		vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start = 0U;
	    }
	}
    }
    // ALWAYS at upzero.v:462
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->reset) ? VL_ULL(1) : vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_NS_fsm);
    // ALWAYS at encode.v:1266
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] = 1U;
	vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] = 0U;
	vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] = 0U;
    } else {
	vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] = 
	    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U];
	vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] = 
	    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U];
	vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] = 
	    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U];
    }
}

void Vour::_initial__TOP__2(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_initial__TOP__2\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign100[4];
    VL_SIGW(__Vtemp1,255,0,8);
    VL_SIGW(__Vtemp2,223,0,7);
    //char	__VpadToAlign164[4];
    VL_SIGW(__Vtemp3,255,0,8);
    VL_SIGW(__Vtemp4,255,0,8);
    VL_SIGW(__Vtemp5,255,0,8);
    // Body
    // INITIAL at encode_wl_code_tafYi.v:27
    __Vtemp1[0U] = 0x2e646174U;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x61665969U;
    __Vtemp1[3U] = 0x64655f74U;
    __Vtemp1[4U] = 0x6c5f636fU;
    __Vtemp1[5U] = 0x64655f77U;
    __Vtemp1[6U] = 0x656e636fU;
    __Vtemp1[7U] = 0x2e2fU;
    VL_READMEM_W (true,13,16, 0,8, __Vtemp1, vlTOPp->our__DOT__enc__DOT__wl_code_table_U__DOT__encode_wl_code_tafYi_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at encode_ilb_table.v:27
    __Vtemp2[0U] = 0x2e646174U;
    __Vtemp2[1U] = 0x5f726f6dU;
    __Vtemp2[2U] = 0x61626c65U;
    __Vtemp2[3U] = 0x6c625f74U;
    __Vtemp2[4U] = 0x64655f69U;
    __Vtemp2[5U] = 0x656e636fU;
    __Vtemp2[6U] = 0x2e2fU;
    VL_READMEM_W (true,12,32, 0,7, __Vtemp2, vlTOPp->our__DOT__enc__DOT__ilb_table_U__DOT__encode_ilb_table_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at quantl_quant26bt_bkb.v:27
    __Vtemp3[0U] = 0x2e646174U;
    __Vtemp3[1U] = 0x5f726f6dU;
    __Vtemp3[2U] = 0x5f626b62U;
    __Vtemp3[3U] = 0x32366274U;
    __Vtemp3[4U] = 0x75616e74U;
    __Vtemp3[5U] = 0x746c5f71U;
    __Vtemp3[6U] = 0x7175616eU;
    __Vtemp3[7U] = 0x2e2fU;
    VL_READMEM_W (true,6,31, 0,8, __Vtemp3, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_U__DOT__quantl_quant26bt_bkb_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at quantl_quant26bt_cud.v:27
    __Vtemp4[0U] = 0x2e646174U;
    __Vtemp4[1U] = 0x5f726f6dU;
    __Vtemp4[2U] = 0x5f637564U;
    __Vtemp4[3U] = 0x32366274U;
    __Vtemp4[4U] = 0x75616e74U;
    __Vtemp4[5U] = 0x746c5f71U;
    __Vtemp4[6U] = 0x7175616eU;
    __Vtemp4[7U] = 0x2e2fU;
    VL_READMEM_W (true,6,31, 0,8, __Vtemp4, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_U__DOT__quantl_quant26bt_cud_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at encode_qq4_code4_eOg.v:27
    __Vtemp5[0U] = 0x2e646174U;
    __Vtemp5[1U] = 0x5f726f6dU;
    __Vtemp5[2U] = 0x5f654f67U;
    __Vtemp5[3U] = 0x6f646534U;
    __Vtemp5[4U] = 0x71345f63U;
    __Vtemp5[5U] = 0x64655f71U;
    __Vtemp5[6U] = 0x656e636fU;
    __Vtemp5[7U] = 0x2e2fU;
    VL_READMEM_W (true,16,16, 0,8, __Vtemp5, vlTOPp->our__DOT__enc__DOT__qq4_code4_table_s_U__DOT__encode_qq4_code4_eOg_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at quantl.v:414
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm = 1U;
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_return_preg = 0U;
    // INITIAL at upzero.v:368
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm = VL_ULL(1);
    // INITIAL at encode.v:839
    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] = 1U;
    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] = 0U;
    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] = 0U;
    vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start = 0U;
    vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start = 0U;
}

void Vour::_settle__TOP__3(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__3\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__enc__DOT__sh_fu_2415_p2 = (vlTOPp->our__DOT__enc__DOT__szh_reg_3959 
						 + vlTOPp->our__DOT__enc__DOT__sph_reg_3996);
    vlTOPp->our__DOT__enc__DOT__p_i1_fu_2500_p3 = (
						   VL_LTS_III(1,32,32, 0x3000U, vlTOPp->our__DOT__enc__DOT__apl2_reg_4006)
						    ? 0x3000U
						    : vlTOPp->our__DOT__enc__DOT__apl2_reg_4006);
    vlTOPp->our__DOT__enc__DOT__wd3_0_apl1_i_fu_2653_p3 
	= (VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__apl1_reg_4012, 
		      (0x7fffU & ((IData)(0x3c00U) 
				  - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030))))
	    ? (0x7fffU & ((IData)(0x3c00U) - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030)))
	    : vlTOPp->our__DOT__enc__DOT__apl1_reg_4012);
    vlTOPp->our__DOT__enc__DOT__nbl_assign_3_fu_2705_p3 
	= ((IData)(vlTOPp->our__DOT__enc__DOT__tmp_53_i_reg_4046)
	    ? 0x5800U : (IData)(vlTOPp->our__DOT__enc__DOT__tmp_59_reg_4041));
    vlTOPp->our__DOT__enc__DOT__nbl_assign_2_fu_1971_p3 
	= ((IData)(vlTOPp->our__DOT__enc__DOT__tmp_50_i_reg_3690)
	    ? 0x4800U : (IData)(vlTOPp->our__DOT__enc__DOT__tmp_46_reg_3685));
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_17_fu_903_p2 
	= VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205, 
		     VL_EXTENDS_II(32,31, (0x7fffffffU 
					   & (IData)(
						     (VL_ULL(0x7fffffff) 
						      & ((VL_EXTENDS_QQ(46,45, 
									((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
									 << 0xdU)) 
							  - 
							  VL_EXTENDS_QQ(46,35, 
									((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
									 << 3U))) 
							 >> 0xfU))))));
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3 
	= ((0x80000000U & vlTOPp->our__DOT__enc__DOT__el_reg_3660)
	    ? VL_NEGATE_I(vlTOPp->our__DOT__enc__DOT__el_reg_3660)
	    : vlTOPp->our__DOT__enc__DOT__el_reg_3660);
    vlTOPp->our__DOT__enc__DOT__xb_1_fu_1795_p2 = (VL_ULL(0x7fffffffffff) 
						   & (VL_EXTENDS_QQ(47,45, 
								    (VL_ULL(0x1fffffffffff) 
								     & ((VL_EXTENDS_QQ(45,43, vlTOPp->our__DOT__enc__DOT__tmp18_reg_3617) 
									 + 
									 VL_EXTENDS_QQ(45,44, vlTOPp->our__DOT__enc__DOT__tmp_76_3_reg_3562)) 
									+ 
									VL_EXTENDS_QQ(45,42, 
										(VL_ULL(0x3ffffffffff) 
										& ((VL_EXTENDS_QQ(42,41, vlTOPp->our__DOT__enc__DOT__tmp_7_reg_3547) 
										+ vlTOPp->our__DOT__enc__DOT__tmp_76_1_reg_3552) 
										+ 
										VL_EXTENDS_QQ(42,39, vlTOPp->our__DOT__enc__DOT__xb_reg_3542))))))) 
						      + 
						      ((VL_EXTENDS_QQ(47,45, vlTOPp->our__DOT__enc__DOT__tmp13_reg_3612) 
							+ 
							VL_EXTENDS_QQ(47,46, vlTOPp->our__DOT__enc__DOT__tmp_76_4_reg_3572)) 
						       + 
						       VL_EXTENDS_QQ(47,40, 
								     (VL_ULL(0xffffffffff) 
								      & ((VL_EXTENDS_QQ(40,39, vlTOPp->our__DOT__enc__DOT__tmp_76_9_reg_3592) 
									  + 
									  VL_EXTENDS_QQ(40,39, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__buff_load_21_reg_3490)) 
										<< 7U))) 
									 + 
									 VL_EXTENDS_QQ(40,39, 
										(VL_ULL(0x7fffffffff) 
										& (VL_EXTENDS_QQ(39,38, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1068)) 
										<< 6U)) 
										- 
										VL_EXTENDS_QQ(39,36, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1068)) 
										<< 4U)))))))))));
    vlTOPp->our__DOT__enc__DOT__tmp_i2_fu_1872_p2 = 
	(VL_ULL(0x7fffffffff) & (((QData)((IData)(vlTOPp->our__DOT__enc__DOT__buff_load_45_reg_3654)) 
				  << 7U) - VL_EXTENDS_QI(39,32, vlTOPp->our__DOT__enc__DOT__buff_load_45_reg_3654)));
    vlTOPp->our__DOT__enc__DOT__xa_1_fu_1720_p2 = (VL_ULL(0x7fffffffffff) 
						   & (VL_EXTENDS_QQ(47,43, 
								    (VL_ULL(0x7ffffffffff) 
								     & (VL_EXTENDS_QQ(43,42, 
										(VL_ULL(0x3ffffffffff) 
										& (VL_EXTENDS_QQ(42,40, 
										(VL_ULL(0xffffffffff) 
										& (VL_EXTENDS_QQ(40,39, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1056)) 
										<< 7U)) 
										+ 
										VL_EXTENDS_QQ(40,39, vlTOPp->our__DOT__enc__DOT__tmp_8_reg_3597)))) 
										+ vlTOPp->our__DOT__enc__DOT__tmp_73_3_reg_3557))) 
									+ 
									VL_EXTENDS_QQ(43,40, 
										(VL_ULL(0xffffffffff) 
										& (VL_EXTENDS_QQ(40,39, vlTOPp->our__DOT__enc__DOT__tmp6_reg_3607) 
										+ 
										VL_EXTENDS_QQ(40,37, 
										(VL_ULL(0x1fffffffff) 
										& (VL_EXTENDS_QQ(37,36, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1019)) 
										<< 4U)) 
										- 
										VL_EXTENDS_QQ(37,34, 
										((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1019)) 
										<< 2U))))))))))) 
						      + 
						      (((VL_EXTENDS_QQ(47,44, vlTOPp->our__DOT__enc__DOT__tmp_73_6_reg_3582) 
							 + 
							 VL_EXTENDS_QQ(47,46, vlTOPp->our__DOT__enc__DOT__tmp_73_5_reg_3577)) 
							+ 
							VL_EXTENDS_QQ(47,44, vlTOPp->our__DOT__enc__DOT__tmp_73_4_reg_3567)) 
						       + 
						       VL_EXTENDS_QQ(47,44, 
								     (VL_ULL(0xfffffffffff) 
								      & (VL_EXTENDS_QQ(44,43, vlTOPp->our__DOT__enc__DOT__tmp1_reg_3602) 
									 + 
									 VL_EXTENDS_QQ(44,43, vlTOPp->our__DOT__enc__DOT__tmp_73_8_reg_3587)))))));
    vlTOPp->our__DOT__enc__DOT__tmp_i8_fu_2550_p2 = 
	(VL_ULL(0x7fffffffff) & (((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1032)) 
				  << 7U) - VL_EXTENDS_QI(39,32, vlTOPp->our__DOT__enc__DOT__reg_1032)));
    vlTOPp->read_addr = vlTOPp->our__DOT__r_read_addr;
    vlTOPp->write_addr = vlTOPp->our__DOT__r_write_addr;
    vlTOPp->read_enable = vlTOPp->our__DOT__r_read_enable;
    vlTOPp->write_enable = vlTOPp->our__DOT__r_write_enable;
    vlTOPp->finish_read = vlTOPp->our__DOT__r_finish_read;
    vlTOPp->finish_write = vlTOPp->our__DOT__r_finish_write;
    vlTOPp->write_size = vlTOPp->our__DOT__r_write_size;
    vlTOPp->read_size_output = vlTOPp->our__DOT__r_read_size_output;
    vlTOPp->done = vlTOPp->our__DOT__r_done;
    vlTOPp->returnvalue = vlTOPp->our__DOT__r_returnvalue;
    vlTOPp->write_data = vlTOPp->our__DOT__r_write_data;
    vlTOPp->our__DOT__enc__DOT__p_i3_fu_2984_p3 = (
						   VL_LTS_III(1,32,32, 0x3000U, vlTOPp->our__DOT__enc__DOT__apl2_1_reg_4133)
						    ? 0x3000U
						    : vlTOPp->our__DOT__enc__DOT__apl2_1_reg_4133);
    vlTOPp->our__DOT__enc__DOT__encode_mux_42_32_1_U34__DOT__mux_2_0 
	= ((2U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
	    ? ((1U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
	        ? 0xffffff2aU : 0x31eU) : ((1U & (IData)(vlTOPp->our__DOT__enc__DOT__p_ih_t_reg_4023))
					    ? 0xffffff2aU
					    : 0x31eU));
    vlTOPp->our__DOT__enc__DOT__wd3_0_apl1_i1_fu_3054_p3 
	= (VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__apl1_4_reg_4139, 
		      (0x7fffU & ((IData)(0x3c00U) 
				  - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145))))
	    ? (0x7fffU & ((IData)(0x3c00U) - (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145)))
	    : vlTOPp->our__DOT__enc__DOT__apl1_4_reg_4139);
    // ALWAYS at quantl.v:748
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ril2_phi_fu_346_p4 
	= ((0x20000000U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
	    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_reg_1201)
	        ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_q0)
	        : ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_reg_1201)
		    ? 0U : (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_q0)))
	    : 0U);
    // ALWAYS at upzero.v:630
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start)) 
		  & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		 | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			    >> 0x2eU))));
    // ALWAYS at quantl.v:700
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start)) 
		  & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm) 
		 | (vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
		    >> 0x1dU)));
    // ALWAYS at encode.v:1987
    vlTOPp->our__DOT__d1 = ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
			     ? VL_EXTENDS_II(32,16, (IData)(vlTOPp->our__DOT__enc__DOT__apl1_7_reg_4161))
			     : ((2U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
				 ? vlTOPp->our__DOT__enc__DOT__ph_reg_4083
				 : ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
				     ? vlTOPp->our__DOT__enc__DOT__yh_reg_4089
				     : ((0x800000U 
					 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					 ? (0x7ff8U 
					    & (((0xbU 
						 >= 
						 (0xfU 
						  & ((IData)(0xbU) 
						     - (IData)(vlTOPp->our__DOT__enc__DOT__wd2_4_cast_reg_4066))))
						 ? 
						((IData)(vlTOPp->our__DOT__enc__DOT__ilb_table_q0) 
						 >> 
						 (0xfU 
						  & ((IData)(0xbU) 
						     - (IData)(vlTOPp->our__DOT__enc__DOT__wd2_4_cast_reg_4066))))
						 : 0U) 
					       << 3U))
					 : ((0x400000U 
					     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					     ? VL_EXTENDS_II(32,16, (IData)(vlTOPp->our__DOT__enc__DOT__apl1_3_reg_4051))
					     : ((0x200000U 
						 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						 ? 
						VL_EXTENDS_II(32,15, (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030))
						 : 
						((0x100000U 
						  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						  ? vlTOPp->our__DOT__r_q1
						  : 
						 ((8U 
						   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						   ? (IData)(vlTOPp->our__DOT__enc__DOT__nbl_assign_2_reg_3707)
						   : 
						  ((4U 
						    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						    ? vlTOPp->our__DOT__enc__DOT__reg_1068
						    : 
						   ((2U 
						     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						     ? vlTOPp->our__DOT__enc__DOT__reg_1019
						     : 
						    ((1U 
						      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						      ? vlTOPp->our__DOT__enc__DOT__reg_1032
						      : 
						     ((0x80000000U 
						       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						       ? vlTOPp->our__DOT__enc__DOT__reg_1044
						       : 
						      ((0x40000000U 
							& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						        ? vlTOPp->our__DOT__enc__DOT__reg_1056
						        : 
						       ((0x20000000U 
							 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							 ? vlTOPp->our__DOT__enc__DOT__buff_load_11_reg_3382
							 : 
							((0x10000000U 
							  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							  ? vlTOPp->our__DOT__enc__DOT__buff_load_13_reg_3406
							  : 
							 ((0x8000000U 
							   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							   ? vlTOPp->our__DOT__enc__DOT__buff_load_15_reg_3430
							   : 
							  ((0x4000000U 
							    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							    ? vlTOPp->our__DOT__enc__DOT__buff_load_18_reg_3454
							    : 
							   ((0x2000000U 
							     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							     ? vlTOPp->our__DOT__enc__DOT__buff_load_20_reg_3478
							     : 
							    ((0x1000000U 
							      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							      ? vlTOPp->our__DOT__enc__DOT__buff_load_22_reg_3502
							      : 
							     ((0x800000U 
							       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							       ? vlTOPp->our__DOT__enc__DOT__buff_load_25_reg_3520
							       : 
							      ((0x400000U 
								& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							        ? vlTOPp->our__DOT__enc__DOT__reg_1075
							        : 
							       ((1U 
								 & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
								     >> 5U) 
								    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
								       >> 0x19U)))
								 ? 
								((1U 
								  & ((IData)(
									     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									      >> 0x2cU)) 
								     | (IData)(
									       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2dU))))
								  ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									      >> 0x28U)))
								   ? (IData)(
									     (VL_ULL(0xffffffff) 
									      & ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										>> 8U)))
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									       >> 0x27U)))
								    ? (IData)(
									      (VL_ULL(0xffffffff) 
									       & ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271)) 
										>> 8U)))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x26U)))
								     ? (IData)(
									       (VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										>> 8U)))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x23U)))
								      ? 
								     ((IData)(
									      (VL_ULL(0xffffffff) 
									       & ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										>> 8U))) 
								      + 
								      ((1U 
									& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_5_34_reg_1223 
										>> 0x3fU)))
								        ? 0xffffff80U
								        : 0x80U))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x1dU)))
								       ? 
								      ((IData)(
									       (VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271)) 
										>> 8U))) 
								       + 
								       ((1U 
									 & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_4_reg_1208 
										>> 0x3fU)))
									 ? 0xffffff80U
									 : 0x80U))
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x17U)))
								        ? 
								       ((IData)(
										(VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										>> 8U))) 
									+ 
									((1U 
									  & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_3_33_reg_1193 
										>> 0x3fU)))
									  ? 0xffffff80U
									  : 0x80U))
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x11U)))
									 ? 
									((IData)(
										(VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265)) 
										>> 8U))) 
									 + 
									 ((1U 
									   & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_reg_1178 
										>> 0x3fU)))
									   ? 0xffffff80U
									   : 0x80U))
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0xbU)))
									  ? 
									 ((IData)(
										(VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										>> 8U))) 
									  + 
									  ((1U 
									    & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_32_reg_1152 
										>> 0x3fU)))
									    ? 0xffffff80U
									    : 0x80U))
									  : 0U)))))))))
								 : 0U))))))))))))))))))))));
    // ALWAYS at encode.v:2057
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset 
	= ((0x2000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
	    ? 0x1eU : ((0x20U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
		        ? 0x24U : 0U));
    // ALWAYS at encode.v:2077
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset 
	= ((0x2000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
	    ? 0x18U : ((0x20U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
		        ? 0x2aU : 0U));
    // ALWAYS at encode.v:2067
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt 
	= ((0x2000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
	    ? vlTOPp->our__DOT__enc__DOT__dh_1_reg_4076
	    : ((0x20U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
	        ? vlTOPp->our__DOT__enc__DOT__dlt_reg_3695
	        : 0U));
    vlTOPp->our__DOT__enc__DOT__eh_fu_2419_p2 = (vlTOPp->our__DOT__enc__DOT__xh_reg_3643 
						 - vlTOPp->our__DOT__enc__DOT__sh_fu_2415_p2);
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_1_fu_469_p2 
	= VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3, 
		     VL_EXTENDS_II(32,27, (0x7ffffffU 
					   & (IData)(
						     (VL_ULL(0x7ffffff) 
						      & ((VL_EXTENDS_QQ(42,38, 
									((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
									 << 6U)) 
							  + 
							  VL_EXTENDS_QQ(42,41, 
									((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
									 << 9U))) 
							 >> 0xfU))))));
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2 
	= VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3, 
		     VL_EXTENDS_II(32,27, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_17_reg_1196));
    vlTOPp->our__DOT__enc__DOT__p_i_fu_1926_p3 = (0x7fffffffU 
						  & ((0x80000000U 
						      & (VL_EXTENDS_II(32,13, (IData)(vlTOPp->our__DOT__enc__DOT__wl_code_table_q0)) 
							 + (IData)(
								   (vlTOPp->our__DOT__enc__DOT__tmp_i2_fu_1872_p2 
								    >> 7U))))
						      ? 0U
						      : 
						     ((IData)(
							      (vlTOPp->our__DOT__enc__DOT__tmp_i2_fu_1872_p2 
							       >> 7U)) 
						      + 
						      VL_EXTENDS_II(31,13, (IData)(vlTOPp->our__DOT__enc__DOT__wl_code_table_q0)))));
    vlTOPp->our__DOT__enc__DOT__p_i2_fu_2613_p3 = (0x7fffffffU 
						   & ((0x80000000U 
						       & (vlTOPp->our__DOT__enc__DOT__encode_mux_42_32_1_U34__DOT__mux_2_0 
							  + (IData)(
								    (vlTOPp->our__DOT__enc__DOT__tmp_i8_fu_2550_p2 
								     >> 7U))))
						       ? 0U
						       : 
						      ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__tmp_i8_fu_2550_p2 
								>> 7U)) 
						       + vlTOPp->our__DOT__enc__DOT__encode_mux_42_32_1_U34__DOT__mux_2_0)));
}

VL_INLINE_OPT void Vour::_sequent__TOP__4(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__4\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at quantl.v:748
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ril2_phi_fu_346_p4 
	= ((0x20000000U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
	    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_reg_1201)
	        ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_q0)
	        : ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_reg_1201)
		    ? 0U : (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_q0)))
	    : 0U);
    // ALWAYS at upzero.v:630
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start)) 
		  & (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		 | (IData)((vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
			    >> 0x2eU))));
    // ALWAYS at quantl.v:700
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start)) 
		  & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm) 
		 | (vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm 
		    >> 0x1dU)));
    // ALWAYS at encode.v:1987
    vlTOPp->our__DOT__d1 = ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
			     ? VL_EXTENDS_II(32,16, (IData)(vlTOPp->our__DOT__enc__DOT__apl1_7_reg_4161))
			     : ((2U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
				 ? vlTOPp->our__DOT__enc__DOT__ph_reg_4083
				 : ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
				     ? vlTOPp->our__DOT__enc__DOT__yh_reg_4089
				     : ((0x800000U 
					 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					 ? (0x7ff8U 
					    & (((0xbU 
						 >= 
						 (0xfU 
						  & ((IData)(0xbU) 
						     - (IData)(vlTOPp->our__DOT__enc__DOT__wd2_4_cast_reg_4066))))
						 ? 
						((IData)(vlTOPp->our__DOT__enc__DOT__ilb_table_q0) 
						 >> 
						 (0xfU 
						  & ((IData)(0xbU) 
						     - (IData)(vlTOPp->our__DOT__enc__DOT__wd2_4_cast_reg_4066))))
						 : 0U) 
					       << 3U))
					 : ((0x400000U 
					     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					     ? VL_EXTENDS_II(32,16, (IData)(vlTOPp->our__DOT__enc__DOT__apl1_3_reg_4051))
					     : ((0x200000U 
						 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						 ? 
						VL_EXTENDS_II(32,15, (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_reg_4030))
						 : 
						((0x100000U 
						  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						  ? vlTOPp->our__DOT__r_q1
						  : 
						 ((8U 
						   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						   ? (IData)(vlTOPp->our__DOT__enc__DOT__nbl_assign_2_reg_3707)
						   : 
						  ((4U 
						    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						    ? vlTOPp->our__DOT__enc__DOT__reg_1068
						    : 
						   ((2U 
						     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						     ? vlTOPp->our__DOT__enc__DOT__reg_1019
						     : 
						    ((1U 
						      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						      ? vlTOPp->our__DOT__enc__DOT__reg_1032
						      : 
						     ((0x80000000U 
						       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						       ? vlTOPp->our__DOT__enc__DOT__reg_1044
						       : 
						      ((0x40000000U 
							& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						        ? vlTOPp->our__DOT__enc__DOT__reg_1056
						        : 
						       ((0x20000000U 
							 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							 ? vlTOPp->our__DOT__enc__DOT__buff_load_11_reg_3382
							 : 
							((0x10000000U 
							  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							  ? vlTOPp->our__DOT__enc__DOT__buff_load_13_reg_3406
							  : 
							 ((0x8000000U 
							   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							   ? vlTOPp->our__DOT__enc__DOT__buff_load_15_reg_3430
							   : 
							  ((0x4000000U 
							    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							    ? vlTOPp->our__DOT__enc__DOT__buff_load_18_reg_3454
							    : 
							   ((0x2000000U 
							     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							     ? vlTOPp->our__DOT__enc__DOT__buff_load_20_reg_3478
							     : 
							    ((0x1000000U 
							      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							      ? vlTOPp->our__DOT__enc__DOT__buff_load_22_reg_3502
							      : 
							     ((0x800000U 
							       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							       ? vlTOPp->our__DOT__enc__DOT__buff_load_25_reg_3520
							       : 
							      ((0x400000U 
								& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							        ? vlTOPp->our__DOT__enc__DOT__reg_1075
							        : 
							       ((1U 
								 & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
								     >> 5U) 
								    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
								       >> 0x19U)))
								 ? 
								((1U 
								  & ((IData)(
									     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									      >> 0x2cU)) 
								     | (IData)(
									       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2dU))))
								  ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									      >> 0x28U)))
								   ? (IData)(
									     (VL_ULL(0xffffffff) 
									      & ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										>> 8U)))
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									       >> 0x27U)))
								    ? (IData)(
									      (VL_ULL(0xffffffff) 
									       & ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271)) 
										>> 8U)))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x26U)))
								     ? (IData)(
									       (VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										>> 8U)))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x23U)))
								      ? 
								     ((IData)(
									      (VL_ULL(0xffffffff) 
									       & ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										>> 8U))) 
								      + 
								      ((1U 
									& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_5_34_reg_1223 
										>> 0x3fU)))
								        ? 0xffffff80U
								        : 0x80U))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x1dU)))
								       ? 
								      ((IData)(
									       (VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271)) 
										>> 8U))) 
								       + 
								       ((1U 
									 & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_4_reg_1208 
										>> 0x3fU)))
									 ? 0xffffff80U
									 : 0x80U))
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x17U)))
								        ? 
								       ((IData)(
										(VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259)) 
										>> 8U))) 
									+ 
									((1U 
									  & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_3_33_reg_1193 
										>> 0x3fU)))
									  ? 0xffffff80U
									  : 0x80U))
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x11U)))
									 ? 
									((IData)(
										(VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265)) 
										>> 8U))) 
									 + 
									 ((1U 
									   & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_reg_1178 
										>> 0x3fU)))
									   ? 0xffffff80U
									   : 0x80U))
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0xbU)))
									  ? 
									 ((IData)(
										(VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										>> 8U))) 
									  + 
									  ((1U 
									    & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_32_reg_1152 
										>> 0x3fU)))
									    ? 0xffffff80U
									    : 0x80U))
									  : 0U)))))))))
								 : 0U))))))))))))))))))))));
    // ALWAYS at encode.v:2057
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset 
	= ((0x2000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
	    ? 0x1eU : ((0x20U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
		        ? 0x24U : 0U));
    // ALWAYS at encode.v:2077
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset 
	= ((0x2000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
	    ? 0x18U : ((0x20U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
		        ? 0x2aU : 0U));
    // ALWAYS at encode.v:2067
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt 
	= ((0x2000000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
	    ? vlTOPp->our__DOT__enc__DOT__dh_1_reg_4076
	    : ((0x20U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
	        ? vlTOPp->our__DOT__enc__DOT__dlt_reg_3695
	        : 0U));
    vlTOPp->our__DOT__enc__DOT__eh_fu_2419_p2 = (vlTOPp->our__DOT__enc__DOT__xh_reg_3643 
						 - vlTOPp->our__DOT__enc__DOT__sh_fu_2415_p2);
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_1_fu_469_p2 
	= VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3, 
		     VL_EXTENDS_II(32,27, (0x7ffffffU 
					   & (IData)(
						     (VL_ULL(0x7ffffff) 
						      & ((VL_EXTENDS_QQ(42,38, 
									((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
									 << 6U)) 
							  + 
							  VL_EXTENDS_QQ(42,41, 
									((QData)((IData)(vlTOPp->our__DOT__enc__DOT__reg_1081)) 
									 << 9U))) 
							 >> 0xfU))))));
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2 
	= VL_GTS_III(1,32,32, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3, 
		     VL_EXTENDS_II(32,27, vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_17_reg_1196));
    vlTOPp->our__DOT__enc__DOT__p_i_fu_1926_p3 = (0x7fffffffU 
						  & ((0x80000000U 
						      & (VL_EXTENDS_II(32,13, (IData)(vlTOPp->our__DOT__enc__DOT__wl_code_table_q0)) 
							 + (IData)(
								   (vlTOPp->our__DOT__enc__DOT__tmp_i2_fu_1872_p2 
								    >> 7U))))
						      ? 0U
						      : 
						     ((IData)(
							      (vlTOPp->our__DOT__enc__DOT__tmp_i2_fu_1872_p2 
							       >> 7U)) 
						      + 
						      VL_EXTENDS_II(31,13, (IData)(vlTOPp->our__DOT__enc__DOT__wl_code_table_q0)))));
    vlTOPp->our__DOT__enc__DOT__p_i2_fu_2613_p3 = (0x7fffffffU 
						   & ((0x80000000U 
						       & (vlTOPp->our__DOT__enc__DOT__encode_mux_42_32_1_U34__DOT__mux_2_0 
							  + (IData)(
								    (vlTOPp->our__DOT__enc__DOT__tmp_i8_fu_2550_p2 
								     >> 7U))))
						       ? 0U
						       : 
						      ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__tmp_i8_fu_2550_p2 
								>> 7U)) 
						       + vlTOPp->our__DOT__enc__DOT__encode_mux_42_32_1_U34__DOT__mux_2_0)));
    // ALWAYS at quantl.v:724
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_return 
	= ((0x20000000U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
	    ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ril2_phi_fu_346_p4)
	    : (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_return_preg));
    // ALWAYS at encode.v:1931
    vlTOPp->our__DOT__ce1 = (1U & (((((((((((((((((
						   (((((((((((((((((((((((((((((((((((((((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 1U) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 7U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 9U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 7U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xdU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 0xaU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 2U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 4U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 8U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xaU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xeU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x12U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 0xbU)) 
									       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 3U)) 
									      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 5U)) 
									     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 9U)) 
									    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									       >> 0xbU)) 
									   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									      >> 0xcU)) 
									  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									     >> 6U)) 
									 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									    >> 0xcU)) 
									| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									   >> 0xdU)) 
								       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									  >> 0x13U)) 
								      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									 >> 0x17U)) 
								     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									>> 0x14U)) 
								    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								       >> 0x16U)) 
								   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								      >> 0x15U)) 
								  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								     & (IData)(vlTOPp->our__DOT__r_next))) 
								 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								    >> 0xeU)) 
								| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								   >> 0xfU)) 
							       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								  >> 0x10U)) 
							      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								 >> 0x11U)) 
							     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x12U)) 
							    | ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x18U) 
							       & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) 
							   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							      >> 0x19U)) 
							  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							     >> 0x1aU)) 
							 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							    >> 2U)) 
							| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							   >> 6U)) 
						       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							  >> 0x10U)) 
						      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							 >> 0x13U)) 
						     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							>> 0x14U)) 
						    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						       >> 0x15U)) 
						   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						      >> 0x16U)) 
						  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						     >> 0x17U)) 
						 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						    >> 0x1aU)) 
						| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						   >> 0x1eU)) 
					       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x1fU)) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]) 
					     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						>> 1U)) 
					    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       >> 0x1bU)) 
					   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					      >> 0x1cU)) 
					  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     >> 0x1dU)) 
					 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    >> 0x1eU)) 
					| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					   >> 0x1fU)) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					 >> 1U)) | 
				     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
				      >> 3U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						 >> 2U)) 
				   | (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					>> 5U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x19U)) 
				      & ((((((((((((((((((((IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								    >> 4U)) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								      >> 0xbU))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								     >> 0x24U))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								    >> 0x26U))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								   >> 0x2aU))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								  >> 0x2bU))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								 >> 0x2cU))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								>> 9U))) 
						    | (IData)(
							      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							       >> 0x25U))) 
						   | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
						      & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start))) 
						  | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							     >> 3U))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							    >> 6U))) 
						| (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							   >> 0x23U))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							  >> 0x29U))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							 >> 0x11U))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							>> 0x17U))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						       >> 0x1dU))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						      >> 0x27U))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						     >> 0x28U))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						    >> 0x2dU))))));
    // ALWAYS at encode.v:2121
    if (((((((((0U == (((1U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
	       | (0U == (((2U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	      | (0U == (((4U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	     | (0U == (((8U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	    | (0U == (((0x10U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	   | (0U == (((0x20U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	  | (0U == (((0x40U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	 | (0U == (((0x80U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
	if ((0U == (((1U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
	    if (vlTOPp->our__DOT__r_next) {
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 2U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
	    } else {
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 1U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
	    }
	} else {
	    if ((0U == (((2U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 4U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
	    } else {
		if ((0U == (((4U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 8U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		} else {
		    if ((0U == (((8U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x10U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		    } else {
			if ((0U == (((0x10U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x20U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == (((0x20U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x40U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == (((0x40U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x80U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x100U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((0U == (((0x100U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
		   | (0U == (((0x200U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		  | (0U == (((0x400U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		 | (0U == (((0x800U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		| (0U == (((0x1000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	       | (0U == (((0x2000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	      | (0U == (((0x4000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	     | (0U == (((0x8000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
	    if ((0U == (((0x100U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x200U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
	    } else {
		if ((0U == (((0x200U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x400U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		} else {
		    if ((0U == (((0x400U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x800U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		    } else {
			if ((0U == (((0x800U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x1000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == (((0x1000U ^ 
					  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x2000U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == (((0x2000U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x4000U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == (((0x4000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x8000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x10000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0U == (((0x10000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
		       | (0U == (((0x20000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		      | (0U == (((0x40000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		     | (0U == (((0x80000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		    | (0U == (((0x100000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		   | (0U == (((0x200000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		  | (0U == (((0x400000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		 | (0U == (((0x800000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
		if ((0U == (((0x10000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x20000U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		} else {
		    if ((0U == (((0x20000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x40000U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		    } else {
			if ((0U == (((0x40000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x80000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == (((0x80000U 
					  ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x100000U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == (((0x100000U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x200000U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == (((0x200000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x400000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     (((0x400000U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x800000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x1000000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0U == (((0x1000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
			   | (0U == (((0x2000000U ^ 
				       vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			  | (0U == (((0x4000000U ^ 
				      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			 | (0U == (((0x8000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			| (0U == (((0x10000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		       | (0U == (((0x20000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		      | (0U == (((0x40000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		     | (0U == (((0x80000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
		    if ((0U == (((0x1000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			if (vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x2000000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x1000000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			}
		    } else {
			if ((0U == (((0x2000000U ^ 
				      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x4000000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == (((0x4000000U 
					  ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x8000000U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == (((0x8000000U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x10000000U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == (((0x10000000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x20000000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     (((0x20000000U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x40000000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    if ((0U 
						 == 
						 (((0x40000000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
						   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x80000000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 1U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if (((((((((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					| (1U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
			       | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					  | (2U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			      | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					 | (4U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			     | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					| (8U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			    | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				       | (0x10U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			   | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				      | (0x20U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			  | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				     | (0x40U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			 | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				    | (0x80U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
			if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				     | (1U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 2U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					 | (2U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 4U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (4U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 8U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (8U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x10U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x10U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x20U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x20U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						if (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_ap_done) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x40U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x20U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						}
					    } else {
						if (
						    (0U 
						     == 
						     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       | (0x40U 
							  ^ 
							  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x80U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x100U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if (((((((((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    | (0x100U 
					       ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
				   | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					      | (0x200U 
						 ^ 
						 vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				  | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (0x400U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				 | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    | (0x800U 
					       ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				| (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					   | (0x1000U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			       | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					  | (0x2000U 
					     ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			      | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					 | (0x4000U 
					    ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			     | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					| (0x8000U 
					   ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
			    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					 | (0x100U 
					    ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x200U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (0x200U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x400U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x400U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x800U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x800U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x1000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x1000U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x2000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       | (0x2000U 
							  ^ 
							  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x4000U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							   | (0x4000U 
							      ^ 
							      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x8000U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						    } else {
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x10000U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if (((((((((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						| (0x10000U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
				       | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						  | (0x20000U 
						     ^ 
						     vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				      | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x40000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				     | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						| (0x80000U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				    | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x100000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				   | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					      | (0x200000U 
						 ^ 
						 vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				  | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (0x400000U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				 | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    | (0x800000U 
					       ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
				if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (0x10000U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x20000U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x20000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x40000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x40000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x80000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x80000U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x100000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       | (0x100000U 
							  ^ 
							  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x200000U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							   | (0x200000U 
							      ^ 
							      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x400000U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       | (0x400000U 
								  ^ 
								  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x800000U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
							} else {
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x1000000U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if (((((((((0U == (
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						    | (0x1000000U 
						       ^ 
						       vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
					   | (0U == 
					      ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						| (0x2000000U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
					  | (0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x4000000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
					 | (0U == (
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						    | (0x8000000U 
						       ^ 
						       vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
					| (0U == ((
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x10000000U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				       | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						  | (0x20000000U 
						     ^ 
						     vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				      | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x40000000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				     | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						| (0x80000000U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x1000000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x2000000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x2000000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    if (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_ap_done) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x4000000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x2000000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    }
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x4000000U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x8000000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       | (0x8000000U 
							  ^ 
							  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x10000000U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							   | (0x10000000U 
							      ^ 
							      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x20000000U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       | (0x20000000U 
								  ^ 
								  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x40000000U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								   | (0x40000000U 
								      ^ 
								      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
								  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x80000000U;
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
							    } else {
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 1U;
							    }
							}
						    }
						}
					    }
					}
				    }
				} else {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						| (1U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 2U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					      | (2U 
						 ^ 
						 vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 4U;
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						  | (4U 
						     ^ 
						     vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 1U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at encode.v:1801
    vlTOPp->our__DOT__addr1 = (0x7fU & ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					 ? 0x3bU : 
					((2U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					  ? 0x3dU : 
					 ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					   ? 0x3fU : 
					  ((0x80000000U 
					    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					    ? 0x30U
					    : ((0x40000000U 
						& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					        ? 0x3cU
					        : (
						   (0x4000000U 
						    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						    ? 0x3eU
						    : 
						   ((0x800000U 
						     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						     ? 0x3aU
						     : 
						    ((0x200000U 
						      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						      ? 0x33U
						      : 
						     ((0x100000U 
						       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						       ? 0x37U
						       : 
						      ((0x80000U 
							& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						        ? 0x36U
						        : 
						       ((1U 
							 & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							     >> 0x12U) 
							    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							       >> 0x16U)))
							 ? 0x32U
							 : 
							((0x10000U 
							  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							  ? 0x3aU
							  : 
							 ((0x4000U 
							   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							   ? 0x34U
							   : 
							  ((0x2000U 
							    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							    ? 0x40U
							    : 
							   ((0x1000U 
							     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							     ? 0x3fU
							     : 
							    ((0x800U 
							      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							      ? 0x23U
							      : 
							     ((0x400U 
							       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							       ? 0x22U
							       : 
							      ((0x200U 
								& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							        ? 0x21U
							        : 
							       ((0x100U 
								 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								 ? 0x20U
								 : 
								((0x80U 
								  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								  ? 0x1fU
								  : 
								 ((0x40U 
								   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								   ? 0x1eU
								   : 
								  ((8U 
								    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								    ? 0x31U
								    : 
								   ((4U 
								     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								     ? 0U
								     : 
								    ((2U 
								      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								      ? 2U
								      : 
								     ((1U 
								       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								       ? 4U
								       : 
								      ((0x80000000U 
									& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
								        ? 6U
								        : 
								       ((0x40000000U 
									 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									 ? 8U
									 : 
									((0x20000000U 
									  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									  ? 0xaU
									  : 
									 ((0x10000000U 
									   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									   ? 0xcU
									   : 
									  ((0x8000000U 
									    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									    ? 0xeU
									    : 
									   ((0x4000000U 
									     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									     ? 0x10U
									     : 
									    ((0x2000000U 
									      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									      ? 0x12U
									      : 
									     ((0x1000000U 
									       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									       ? 0x14U
									       : 
									      ((0x800000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									        ? 0x16U
									        : 
									       ((0x400000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x17U
										 : 
										((0x200000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x41U
										 : 
										((0x100000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x17U
										 : 
										((0x80000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x15U
										 : 
										((0x40000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x13U
										 : 
										((0x20000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x11U
										 : 
										((0x10000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xfU
										 : 
										((0x8000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xdU
										 : 
										((0x4000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xbU
										 : 
										((0x2000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 9U
										 : 
										((0x1000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 7U
										 : 
										((0x800U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 5U
										 : 
										((0x400U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 3U
										 : 
										((0x200U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 1U
										 : 
										((0x80U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x33U
										 : 
										((0x40U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x32U
										 : 
										((0x20U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2fU
										 : 
										((0x10U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2eU
										 : 
										((8U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2dU
										 : 
										((4U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2cU
										 : 
										((2U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2bU
										 : 
										((1U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2aU
										 : 
										((1U 
										& ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 5U) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x19U)))
										 ? 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2dU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_21_reg_1272)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2cU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_19_reg_1262)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2bU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__dlti_addr_reg_1051)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2aU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(1U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x29U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(3U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x28U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_5_reg_1252)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x27U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_3_reg_1242)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x26U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_1_reg_1088)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x25U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(5U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x24U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(3U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x23U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_16_reg_1157)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x1dU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_14_reg_1147)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x17U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_12_reg_1118)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x11U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_10_reg_1141)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0xbU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_8_reg_1108)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 9U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(4U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 6U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(1U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 4U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(3U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 3U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(1U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(1U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset))))))
										 : 0U))))))))))))))))))))
										 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    // ALWAYS at upzero.v:824
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_NS_fsm 
	= (((((((((VL_ULL(1) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
		  | (VL_ULL(2) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		 | (VL_ULL(4) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		| (VL_ULL(8) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
	       | (VL_ULL(0x10) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
	      | (VL_ULL(0x20) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
	     | (VL_ULL(0x40) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
	    | (VL_ULL(0x80) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
	    ? ((VL_ULL(1) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
	        ? (((IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start) 
		    & (0U == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))
		    ? VL_ULL(0x1000000000) : (((IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start) 
					       & (0U 
						  != vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))
					       ? VL_ULL(2)
					       : VL_ULL(1)))
	        : ((VL_ULL(2) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
		    ? VL_ULL(4) : ((VL_ULL(4) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				    ? VL_ULL(8) : (
						   (VL_ULL(8) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x10)
						    : 
						   ((VL_ULL(0x10) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x20)
						     : 
						    ((VL_ULL(0x20) 
						      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						      ? VL_ULL(0x40)
						      : 
						     ((VL_ULL(0x40) 
						       == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						       ? VL_ULL(0x80)
						       : VL_ULL(0x100))))))))
	    : (((((((((VL_ULL(0x100) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
		      | (VL_ULL(0x200) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		   | (VL_ULL(0x1000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		  | (VL_ULL(0x2000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		 | (VL_ULL(0x4000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		| (VL_ULL(0x8000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
	        ? ((VL_ULL(0x100) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
		    ? VL_ULL(0x200) : ((VL_ULL(0x200) 
					== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				        ? VL_ULL(0x400)
				        : ((VL_ULL(0x400) 
					    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					    ? VL_ULL(0x800)
					    : ((VL_ULL(0x800) 
						== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					        ? VL_ULL(0x1000)
					        : (
						   (VL_ULL(0x1000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x2000)
						    : 
						   ((VL_ULL(0x2000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x4000)
						     : 
						    ((VL_ULL(0x4000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						      ? VL_ULL(0x8000)
						      : VL_ULL(0x10000))))))))
	        : (((((((((VL_ULL(0x10000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
			  | (VL_ULL(0x20000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		       | (VL_ULL(0x100000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		      | (VL_ULL(0x200000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
		    ? ((VL_ULL(0x10000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
		        ? VL_ULL(0x20000) : ((VL_ULL(0x20000) 
					      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					      ? VL_ULL(0x40000)
					      : ((VL_ULL(0x40000) 
						  == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						  ? VL_ULL(0x80000)
						  : 
						 ((VL_ULL(0x80000) 
						   == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						   ? VL_ULL(0x100000)
						   : 
						  ((VL_ULL(0x100000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x200000)
						    : 
						   ((VL_ULL(0x200000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x400000)
						     : 
						    ((VL_ULL(0x400000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						      ? VL_ULL(0x800000)
						      : VL_ULL(0x1000000))))))))
		    : (((((((((VL_ULL(0x1000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
			      | (VL_ULL(0x2000000) 
				 == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			   | (VL_ULL(0x10000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			  | (VL_ULL(0x20000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
		        ? ((VL_ULL(0x1000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
			    ? VL_ULL(0x2000000) : (
						   (VL_ULL(0x2000000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000)
						    : 
						   ((VL_ULL(0x4000000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000)
						     : 
						    ((VL_ULL(0x8000000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						      ? VL_ULL(0x10000000)
						      : 
						     ((VL_ULL(0x10000000) 
						       == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						       ? VL_ULL(0x20000000)
						       : 
						      ((VL_ULL(0x20000000) 
							== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						        ? VL_ULL(0x40000000)
						        : 
						       ((VL_ULL(0x40000000) 
							 == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
							 ? VL_ULL(0x80000000)
							 : VL_ULL(0x100000000))))))))
		        : (((((((((VL_ULL(0x100000000) 
				   == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
				  | (VL_ULL(0x200000000) 
				     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
				 | (VL_ULL(0x400000000) 
				    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
				| (VL_ULL(0x800000000) 
				   == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			       | (VL_ULL(0x1000000000) 
				  == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			      | (VL_ULL(0x2000000000) 
				 == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000000) 
				== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000000) 
			       == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
			    ? ((VL_ULL(0x100000000) 
				== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
			        ? VL_ULL(0x200000000)
			        : ((VL_ULL(0x200000000) 
				    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				    ? VL_ULL(0x400000000)
				    : ((VL_ULL(0x400000000) 
					== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				        ? VL_ULL(0x800000000)
				        : ((VL_ULL(0x800000000) 
					    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					    ? VL_ULL(0x20000000000)
					    : ((VL_ULL(0x1000000000) 
						== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					        ? VL_ULL(0x2000000000)
					        : (
						   (VL_ULL(0x2000000000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000000)
						    : 
						   ((VL_ULL(0x4000000000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000000)
						     : VL_ULL(0x10000000000))))))))
			    : ((VL_ULL(0x10000000000) 
				== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
			        ? VL_ULL(0x800000000)
			        : ((VL_ULL(0x20000000000) 
				    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				    ? VL_ULL(0x40000000000)
				    : ((VL_ULL(0x40000000000) 
					== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				        ? VL_ULL(0x80000000000)
				        : ((VL_ULL(0x80000000000) 
					    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					    ? VL_ULL(0x100000000000)
					    : ((VL_ULL(0x100000000000) 
						== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					        ? VL_ULL(0x200000000000)
					        : (
						   (VL_ULL(0x200000000000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x400000000000)
						    : 
						   ((VL_ULL(0x400000000000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(1)
						     : VL_ULL(0)))))))))))));
    // ALWAYS at encode.v:1921
    vlTOPp->our__DOT__ce0 = (1U & (((((((((((((((((
						   (((((((((((((((((((((((((((((((((((((((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 1U) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 7U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 8U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 9U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 7U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xdU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 0xaU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x11U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 2U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 4U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 8U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xaU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xeU)) 
									       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x12U)) 
									      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 0xbU)) 
									     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 3U)) 
									    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									       >> 5U)) 
									   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									      >> 9U)) 
									  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									     >> 0xbU)) 
									 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									    >> 0xcU)) 
									| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									   >> 6U)) 
								       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									  >> 0xcU)) 
								      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									 >> 0xdU)) 
								     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									>> 0x13U)) 
								    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								       >> 0x17U)) 
								   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								      >> 0x14U)) 
								  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								     >> 0x16U)) 
								 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								    >> 0x15U)) 
								| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								   & (IData)(vlTOPp->our__DOT__r_next))) 
							       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								  >> 0xeU)) 
							      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								 >> 0xfU)) 
							     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x10U)) 
							    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       >> 0x11U)) 
							   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							      >> 0x12U)) 
							  | ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							      >> 0x18U) 
							     & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) 
							 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							    >> 0x19U)) 
							| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							   >> 0x1aU)) 
						       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							  >> 2U)) 
						      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							 >> 6U)) 
						     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							>> 0x13U)) 
						    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						       >> 0x14U)) 
						   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						      >> 0x15U)) 
						  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						     >> 0x16U)) 
						 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						    >> 0x1aU)) 
						| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						   >> 0x1eU)) 
					       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x1fU)) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]) 
					     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						>> 1U)) 
					    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       >> 0x1bU)) 
					   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					      >> 0x1cU)) 
					  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     >> 0x1dU)) 
					 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    >> 0x1eU)) 
					| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					   >> 0x1fU)) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					 >> 1U)) | 
				     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
				      >> 3U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						 >> 2U)) 
				   | (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					>> 5U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x19U)) 
				      & (((((((((((((((((((((IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								     >> 4U)) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								       >> 0x24U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								      >> 0x26U))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								     >> 0x2aU))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								    >> 0x2bU))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								   >> 0x2cU))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								  >> 5U))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								 >> 0x25U))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								>> 0xaU))) 
						    | (((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
							& (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start)) 
						       & (0U 
							  != vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))) 
						   | (((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
						       & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start)) 
						      & (0U 
							 == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))) 
						  | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							     >> 8U))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							    >> 0xcU))) 
						| (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							   >> 0x12U))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							  >> 0x18U))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							 >> 0x1eU))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							>> 0x29U))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						       >> 0x27U))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						      >> 0x28U))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						     >> 0x2dU))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						    >> 0x2eU))))));
    // ALWAYS at encode.v:1679
    vlTOPp->our__DOT__addr0 = (0x7fU & ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					 ? 0x3cU : 
					((2U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					  ? 0x3eU : 
					 ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					   ? 0x40U : 
					  ((0x80000000U 
					    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					    ? 0x3fU
					    : ((0x40000000U 
						& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					        ? 0x3bU
					        : (
						   (0x4000000U 
						    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						    ? 0x3dU
						    : 
						   ((0x400000U 
						     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						     ? 0x39U
						     : 
						    ((0x200000U 
						      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						      ? 0x34U
						      : 
						     ((0x100000U 
						       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						       ? 0x36U
						       : 
						      ((0x80000U 
							& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						        ? 0x35U
						        : 
						       ((0x40000U 
							 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							 ? 0x33U
							 : 
							((0x20000U 
							  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							  ? 0x39U
							  : 
							 ((0x4000U 
							   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							   ? 0x35U
							   : 
							  ((0x2000U 
							    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							    ? 0x3cU
							    : 
							   ((0x1000U 
							     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							     ? 0x3bU
							     : 
							    ((0x800U 
							      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							      ? 0x1dU
							      : 
							     ((0x400U 
							       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							       ? 0x1cU
							       : 
							      ((0x200U 
								& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							        ? 0x1bU
							        : 
							       ((0x100U 
								 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								 ? 0x1aU
								 : 
								((0x80U 
								  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								  ? 0x19U
								  : 
								 ((0x40U 
								   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								   ? 0x18U
								   : 
								  ((8U 
								    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								    ? 0x38U
								    : 
								   ((4U 
								     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								     ? 0x30U
								     : 
								    ((2U 
								      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								      ? 1U
								      : 
								     ((1U 
								       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								       ? 3U
								       : 
								      ((0x80000000U 
									& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
								        ? 5U
								        : 
								       ((0x40000000U 
									 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									 ? 7U
									 : 
									((0x20000000U 
									  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									  ? 9U
									  : 
									 ((0x10000000U 
									   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									   ? 0xbU
									   : 
									  ((0x8000000U 
									    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									    ? 0xdU
									    : 
									   ((0x4000000U 
									     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									     ? 0xfU
									     : 
									    ((0x2000000U 
									      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									      ? 0x11U
									      : 
									     ((0x1000000U 
									       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									       ? 0x13U
									       : 
									      ((0x800000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									        ? 0x15U
									        : 
									       ((0x400000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x42U
										 : 
										((0x200000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x31U
										 : 
										((0x100000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x38U
										 : 
										((0x80000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x16U
										 : 
										((0x40000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x14U
										 : 
										((0x20000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x12U
										 : 
										((0x10000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x10U
										 : 
										((0x8000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xeU
										 : 
										((0x4000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xcU
										 : 
										((0x2000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xaU
										 : 
										((0x1000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 8U
										 : 
										((0x800U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 6U
										 : 
										((0x400U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 4U
										 : 
										((0x200U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 2U
										 : 
										((0x100U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0U
										 : 
										((0x80U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x37U
										 : 
										((0x40U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x36U
										 : 
										((0x20U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x29U
										 : 
										((0x10U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x28U
										 : 
										((8U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x27U
										 : 
										((4U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x26U
										 : 
										((2U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x25U
										 : 
										((1U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x24U
										 : 
										((1U 
										& ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 5U) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x19U)))
										 ? 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2eU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__dlti_addr_reg_1051)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2dU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_20_reg_1267)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2cU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_17_reg_1257)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2bU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(5U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2aU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(2U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x29U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(4U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x28U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_4_reg_1247)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x27U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_2_reg_1237)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x26U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_reg_1075)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x25U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(4U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x24U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(2U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x1eU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(5U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x18U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(4U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x12U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(3U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0xcU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(2U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0xaU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(5U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 8U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(2U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& ((IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 4U)) 
										| (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 5U))))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_6_reg_1061)
										 : 
										(((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
										& (0U 
										== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset)
										 : 
										(((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
										& (0U 
										!= vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset)
										 : 0U))))))))))))))))))))
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    // ALWAYS at encode.v:1941
    vlTOPp->our__DOT__d0 = ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
			     ? VL_EXTENDS_II(32,15, (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145))
			     : ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
				 ? vlTOPp->our__DOT__r_q0
				 : ((0x400000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
				     ? (IData)(vlTOPp->our__DOT__enc__DOT__nbl_assign_3_fu_2705_p3)
				     : ((0x200000U 
					 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					 ? vlTOPp->our__DOT__enc__DOT__plt_reg_3722
					 : ((0x100000U 
					     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					     ? vlTOPp->our__DOT__enc__DOT__rlt_reg_3728
					     : ((1U 
						 & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						     >> 0x13U) 
						    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						       >> 1U)))
						 ? vlTOPp->our__DOT__enc__DOT__reg_1019
						 : 
						((8U 
						  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						  ? 
						 (0x7ff8U 
						  & (((0xbU 
						       >= 
						       (0xfU 
							& ((IData)(9U) 
							   - (IData)(vlTOPp->our__DOT__enc__DOT__wd2_cast_reg_3712))))
						       ? 
						      ((IData)(vlTOPp->our__DOT__enc__DOT__ilb_table_q0) 
						       >> 
						       (0xfU 
							& ((IData)(9U) 
							   - (IData)(vlTOPp->our__DOT__enc__DOT__wd2_cast_reg_3712))))
						       : 0U) 
						     << 3U))
						  : 
						 ((4U 
						   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						   ? (IData)(vlTOPp->our__DOT__enc__DOT__il_assign_reg_3665)
						   : 
						  ((2U 
						    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						    ? vlTOPp->our__DOT__enc__DOT__reg_1075
						    : 
						   ((1U 
						     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						     ? vlTOPp->our__DOT__enc__DOT__reg_1026
						     : 
						    ((0x80000000U 
						      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						      ? vlTOPp->our__DOT__enc__DOT__reg_1038
						      : 
						     ((0x40000000U 
						       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						       ? vlTOPp->our__DOT__enc__DOT__reg_1050
						       : 
						      ((0x20000000U 
							& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						        ? vlTOPp->our__DOT__enc__DOT__reg_1062
						        : 
						       ((0x10000000U 
							 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							 ? vlTOPp->our__DOT__enc__DOT__buff_load_12_reg_3394
							 : 
							((0x8000000U 
							  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							  ? vlTOPp->our__DOT__enc__DOT__buff_load_14_reg_3418
							  : 
							 ((0x4000000U 
							   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							   ? vlTOPp->our__DOT__enc__DOT__buff_load_16_reg_3442
							   : 
							  ((0x2000000U 
							    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							    ? vlTOPp->our__DOT__enc__DOT__buff_load_19_reg_3466
							    : 
							   ((0x1000000U 
							     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							     ? vlTOPp->our__DOT__enc__DOT__buff_load_21_reg_3490
							     : 
							    ((0x800000U 
							      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							      ? vlTOPp->our__DOT__enc__DOT__reg_1068
							      : 
							     ((1U 
							       & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
								   >> 5U) 
								  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
								     >> 0x19U)))
							       ? 
							      ((1U 
								& (IData)(
									  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									   >> 0x2eU)))
							        ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									    >> 0x2dU)))
								 ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									     >> 0x2cU)))
								  ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									      >> 0x2bU)))
								   ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									       >> 0x28U)))
								    ? (IData)(
									      (VL_ULL(0xffffffff) 
									       & ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										>> 8U)))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x27U)))
								     ? (IData)(
									       (VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265)) 
										>> 8U)))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x26U)))
								      ? (IData)(
										(VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										>> 8U)))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 5U)))
								       ? 
								      ((IData)(
									       (VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__r_q0)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__r_q0)) 
										>> 8U))) 
								       + 
								       ((1U 
									 & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_s_reg_1113 
										>> 0x3fU)))
									 ? 0xffffff80U
									 : 0x80U))
								       : 0U))))))))
							       : 0U))))))))))))))))))));
    // ALWAYS at quantl.v:762
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_NS_fsm 
	= (((((((((1U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm) 
		  | (2U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		 | (4U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		| (8U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
	       | (0x10U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
	      | (0x20U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
	     | (0x40U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
	    | (0x80U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm))
	    ? ((1U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
	        ? ((IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start)
		    ? 2U : 1U) : ((2U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				   ? (((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2) 
				       & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_1_fu_469_p2))
				       ? 4U : 0x10000000U)
				   : ((4U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				       ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_2_reg_1292)
					   ? 8U : 0x10000000U)
				       : ((8U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
					   ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_3_reg_1296)
					       ? 0x10U
					       : 0x10000000U)
					   : ((0x10U 
					       == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
					       ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_4_reg_1300)
						   ? 0x20U
						   : 0x10000000U)
					       : ((0x20U 
						   == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						   ? 
						  ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_5_reg_1304)
						    ? 0x40U
						    : 0x10000000U)
						   : 
						  ((0x40U 
						    == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						    ? 
						   ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_6_reg_1308)
						     ? 0x80U
						     : 0x10000000U)
						    : 
						   ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_7_reg_1312)
						     ? 0x100U
						     : 0x10000000U))))))))
	    : (((((((((0x100U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm) 
		      | (0x200U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		     | (0x400U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		    | (0x800U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		   | (0x1000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		  | (0x2000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		 | (0x4000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		| (0x8000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm))
	        ? ((0x100U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
		    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_8_reg_1316)
		        ? 0x200U : 0x10000000U) : (
						   (0x200U 
						    == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						    ? 
						   ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_9_reg_1320)
						     ? 0x400U
						     : 0x10000000U)
						    : 
						   ((0x400U 
						     == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						     ? 
						    ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_s_reg_1324)
						      ? 0x800U
						      : 0x10000000U)
						     : 
						    ((0x800U 
						      == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						      ? 
						     ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_10_reg_1328)
						       ? 0x1000U
						       : 0x10000000U)
						      : 
						     ((0x1000U 
						       == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						       ? 
						      ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_11_reg_1332)
						        ? 0x2000U
						        : 0x10000000U)
						       : 
						      ((0x2000U 
							== vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						        ? 
						       ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_12_reg_1336)
							 ? 0x4000U
							 : 0x10000000U)
						        : 
						       ((0x4000U 
							 == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
							 ? 
							((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_13_reg_1340)
							  ? 0x8000U
							  : 0x10000000U)
							 : 
							((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_14_reg_1344)
							  ? 0x10000U
							  : 0x10000000U))))))))
	        : (((((((((0x10000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm) 
			  | (0x20000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
			 | (0x40000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
			| (0x80000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		       | (0x100000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		      | (0x200000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		     | (0x400000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		    | (0x800000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm))
		    ? ((0x10000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
		        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_15_reg_1348)
			    ? 0x20000U : 0x10000000U)
		        : ((0x20000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
			    ? (((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_16_reg_1352) 
				& (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_17_fu_903_p2))
			        ? 0x40000U : 0x10000000U)
			    : ((0x40000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
			        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_18_reg_1359)
				    ? 0x80000U : 0x10000000U)
			        : ((0x80000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_19_reg_1363)
				        ? 0x100000U
				        : 0x10000000U)
				    : ((0x100000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_20_reg_1367)
					    ? 0x200000U
					    : 0x10000000U)
				        : ((0x200000U 
					    == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
					    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_21_reg_1371)
					        ? 0x400000U
					        : 0x10000000U)
					    : ((0x400000U 
						== vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
					        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_22_reg_1375)
						    ? 0x800000U
						    : 0x10000000U)
					        : ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_23_reg_1379)
						    ? 0x1000000U
						    : 0x10000000U))))))))
		    : ((0x1000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
		        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_24_reg_1383)
			    ? 0x2000000U : 0x10000000U)
		        : ((0x2000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
			    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_25_reg_1387)
			        ? 0x4000000U : 0x10000000U)
			    : ((0x4000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
			        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_26_reg_1391)
				    ? 0x8000000U : 0x10000000U)
			        : ((0x8000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				    ? 0x10000000U : 
				   ((0x10000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				     ? 0x20000000U : 
				    ((0x20000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				      ? 1U : 0U)))))))));
}

void Vour::_settle__TOP__5(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__5\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at quantl.v:724
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_return 
	= ((0x20000000U & vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
	    ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ril2_phi_fu_346_p4)
	    : (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_return_preg));
    // ALWAYS at encode.v:1931
    vlTOPp->our__DOT__ce1 = (1U & (((((((((((((((((
						   (((((((((((((((((((((((((((((((((((((((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 1U) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 7U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 9U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 7U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xdU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 0xaU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 2U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 4U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 8U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xaU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xeU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x12U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 0xbU)) 
									       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 3U)) 
									      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 5U)) 
									     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 9U)) 
									    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									       >> 0xbU)) 
									   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									      >> 0xcU)) 
									  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									     >> 6U)) 
									 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									    >> 0xcU)) 
									| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									   >> 0xdU)) 
								       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									  >> 0x13U)) 
								      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									 >> 0x17U)) 
								     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									>> 0x14U)) 
								    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								       >> 0x16U)) 
								   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								      >> 0x15U)) 
								  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								     & (IData)(vlTOPp->our__DOT__r_next))) 
								 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								    >> 0xeU)) 
								| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								   >> 0xfU)) 
							       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								  >> 0x10U)) 
							      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								 >> 0x11U)) 
							     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x12U)) 
							    | ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x18U) 
							       & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) 
							   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							      >> 0x19U)) 
							  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							     >> 0x1aU)) 
							 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							    >> 2U)) 
							| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							   >> 6U)) 
						       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							  >> 0x10U)) 
						      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							 >> 0x13U)) 
						     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							>> 0x14U)) 
						    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						       >> 0x15U)) 
						   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						      >> 0x16U)) 
						  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						     >> 0x17U)) 
						 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						    >> 0x1aU)) 
						| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						   >> 0x1eU)) 
					       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x1fU)) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]) 
					     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						>> 1U)) 
					    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       >> 0x1bU)) 
					   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					      >> 0x1cU)) 
					  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     >> 0x1dU)) 
					 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    >> 0x1eU)) 
					| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					   >> 0x1fU)) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					 >> 1U)) | 
				     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
				      >> 3U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						 >> 2U)) 
				   | (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					>> 5U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x19U)) 
				      & ((((((((((((((((((((IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								    >> 4U)) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								      >> 0xbU))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								     >> 0x24U))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								    >> 0x26U))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								   >> 0x2aU))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								  >> 0x2bU))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								 >> 0x2cU))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								>> 9U))) 
						    | (IData)(
							      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							       >> 0x25U))) 
						   | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
						      & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start))) 
						  | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							     >> 3U))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							    >> 6U))) 
						| (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							   >> 0x23U))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							  >> 0x29U))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							 >> 0x11U))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							>> 0x17U))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						       >> 0x1dU))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						      >> 0x27U))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						     >> 0x28U))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						    >> 0x2dU))))));
    // ALWAYS at encode.v:2121
    if (((((((((0U == (((1U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
	       | (0U == (((2U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	      | (0U == (((4U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	     | (0U == (((8U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	    | (0U == (((0x10U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	   | (0U == (((0x20U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	  | (0U == (((0x40U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	 | (0U == (((0x80U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
	if ((0U == (((1U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
		     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
	    if (vlTOPp->our__DOT__r_next) {
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 2U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
	    } else {
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 1U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
	    }
	} else {
	    if ((0U == (((2U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 4U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
	    } else {
		if ((0U == (((4U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 8U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		} else {
		    if ((0U == (((8U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x10U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		    } else {
			if ((0U == (((0x10U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x20U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == (((0x20U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x40U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == (((0x40U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x80U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x100U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((0U == (((0x100U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
		   | (0U == (((0x200U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		  | (0U == (((0x400U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		 | (0U == (((0x800U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		| (0U == (((0x1000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	       | (0U == (((0x2000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	      | (0U == (((0x4000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
	     | (0U == (((0x8000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
		       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
	    if ((0U == (((0x100U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x200U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
	    } else {
		if ((0U == (((0x200U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x400U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		} else {
		    if ((0U == (((0x400U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x800U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		    } else {
			if ((0U == (((0x800U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x1000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == (((0x1000U ^ 
					  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x2000U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == (((0x2000U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x4000U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == (((0x4000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x8000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x10000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0U == (((0x10000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
		       | (0U == (((0x20000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		      | (0U == (((0x40000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		     | (0U == (((0x80000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		    | (0U == (((0x100000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		   | (0U == (((0x200000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		  | (0U == (((0x400000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		 | (0U == (((0x800000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
		if ((0U == (((0x10000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x20000U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		} else {
		    if ((0U == (((0x20000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x40000U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
		    } else {
			if ((0U == (((0x40000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x80000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == (((0x80000U 
					  ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x100000U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == (((0x100000U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x200000U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == (((0x200000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x400000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     (((0x400000U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x800000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x1000000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0U == (((0x1000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
			   | (0U == (((0x2000000U ^ 
				       vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			  | (0U == (((0x4000000U ^ 
				      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			 | (0U == (((0x8000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			| (0U == (((0x10000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		       | (0U == (((0x20000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		      | (0U == (((0x40000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
		     | (0U == (((0x80000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
		    if ((0U == (((0x1000000U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			if (vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x2000000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x1000000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			}
		    } else {
			if ((0U == (((0x2000000U ^ 
				      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x4000000U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == (((0x4000000U 
					  ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x8000000U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == (((0x8000000U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x10000000U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == (((0x10000000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x20000000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     (((0x20000000U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x40000000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    if ((0U 
						 == 
						 (((0x40000000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U]) 
						   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0x80000000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 1U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if (((((((((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					| (1U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
			       | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					  | (2U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			      | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					 | (4U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			     | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					| (8U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			    | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				       | (0x10U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			   | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				      | (0x20U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			  | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				     | (0x40U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			 | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				    | (0x80U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
			if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
				     | (1U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 2U;
			    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			} else {
			    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					 | (2U ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 4U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (4U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 8U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (8U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x10U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x10U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x20U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x20U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						if (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_ap_done) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x40U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x20U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						}
					    } else {
						if (
						    (0U 
						     == 
						     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       | (0x40U 
							  ^ 
							  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x80U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x100U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if (((((((((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    | (0x100U 
					       ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
				   | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					      | (0x200U 
						 ^ 
						 vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				  | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (0x400U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				 | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    | (0x800U 
					       ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				| (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					   | (0x1000U 
					      ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			       | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					  | (0x2000U 
					     ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			      | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					 | (0x4000U 
					    ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
			     | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					| (0x8000U 
					   ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
			    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					 | (0x100U 
					    ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x200U;
				vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
			    } else {
				if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (0x200U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x400U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x400U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x800U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x800U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x1000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x1000U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x2000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       | (0x2000U 
							  ^ 
							  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x4000U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							   | (0x4000U 
							      ^ 
							      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x8000U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						    } else {
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x10000U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if (((((((((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						| (0x10000U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
				       | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						  | (0x20000U 
						     ^ 
						     vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				      | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x40000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				     | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						| (0x80000U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				    | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x100000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				   | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					      | (0x200000U 
						 ^ 
						 vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				  | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (0x400000U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				 | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    | (0x800000U 
					       ^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
				if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     | (0x10000U 
						^ vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x20000U;
				    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				} else {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x20000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x40000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x40000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x80000U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x80000U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x100000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       | (0x100000U 
							  ^ 
							  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x200000U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							   | (0x200000U 
							      ^ 
							      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x400000U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       | (0x400000U 
								  ^ 
								  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x800000U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
							} else {
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x1000000U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if (((((((((0U == (
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						    | (0x1000000U 
						       ^ 
						       vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])) 
					   | (0U == 
					      ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						| (0x2000000U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
					  | (0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x4000000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
					 | (0U == (
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						    | (0x8000000U 
						       ^ 
						       vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
					| (0U == ((
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x10000000U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				       | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						  | (0x20000000U 
						     ^ 
						     vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				      | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x40000000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) 
				     | (0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						| (0x80000000U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | (0x1000000U 
						    ^ 
						    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x2000000U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | (0x2000000U 
						  ^ 
						  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
					    if (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_ap_done) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x4000000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x2000000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    }
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | (0x4000000U 
						      ^ 
						      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x8000000U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						       | (0x8000000U 
							  ^ 
							  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
						      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x10000000U;
						    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							   | (0x10000000U 
							      ^ 
							      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x20000000U;
							vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       | (0x20000000U 
								  ^ 
								  vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
							      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x40000000U;
							    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								   | (0x40000000U 
								      ^ 
								      vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])) 
								  | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]))) {
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0x80000000U;
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
							    } else {
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 1U;
							    }
							}
						    }
						}
					    }
					}
				    }
				} else {
				    if ((0U == ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						 | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						| (1U 
						   ^ 
						   vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 2U;
				    } else {
					if ((0U == 
					     ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
					      | (2U 
						 ^ 
						 vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 4U;
					} else {
					    if ((0U 
						 == 
						 ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
						   | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
						  | (4U 
						     ^ 
						     vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])))) {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 1U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    } else {
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__enc__DOT__ap_NS_fsm[2U] = 0U;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at encode.v:1801
    vlTOPp->our__DOT__addr1 = (0x7fU & ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					 ? 0x3bU : 
					((2U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					  ? 0x3dU : 
					 ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					   ? 0x3fU : 
					  ((0x80000000U 
					    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					    ? 0x30U
					    : ((0x40000000U 
						& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					        ? 0x3cU
					        : (
						   (0x4000000U 
						    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						    ? 0x3eU
						    : 
						   ((0x800000U 
						     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						     ? 0x3aU
						     : 
						    ((0x200000U 
						      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						      ? 0x33U
						      : 
						     ((0x100000U 
						       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						       ? 0x37U
						       : 
						      ((0x80000U 
							& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						        ? 0x36U
						        : 
						       ((1U 
							 & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							     >> 0x12U) 
							    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							       >> 0x16U)))
							 ? 0x32U
							 : 
							((0x10000U 
							  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							  ? 0x3aU
							  : 
							 ((0x4000U 
							   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							   ? 0x34U
							   : 
							  ((0x2000U 
							    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							    ? 0x40U
							    : 
							   ((0x1000U 
							     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							     ? 0x3fU
							     : 
							    ((0x800U 
							      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							      ? 0x23U
							      : 
							     ((0x400U 
							       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							       ? 0x22U
							       : 
							      ((0x200U 
								& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							        ? 0x21U
							        : 
							       ((0x100U 
								 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								 ? 0x20U
								 : 
								((0x80U 
								  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								  ? 0x1fU
								  : 
								 ((0x40U 
								   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								   ? 0x1eU
								   : 
								  ((8U 
								    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								    ? 0x31U
								    : 
								   ((4U 
								     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								     ? 0U
								     : 
								    ((2U 
								      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								      ? 2U
								      : 
								     ((1U 
								       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								       ? 4U
								       : 
								      ((0x80000000U 
									& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
								        ? 6U
								        : 
								       ((0x40000000U 
									 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									 ? 8U
									 : 
									((0x20000000U 
									  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									  ? 0xaU
									  : 
									 ((0x10000000U 
									   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									   ? 0xcU
									   : 
									  ((0x8000000U 
									    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									    ? 0xeU
									    : 
									   ((0x4000000U 
									     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									     ? 0x10U
									     : 
									    ((0x2000000U 
									      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									      ? 0x12U
									      : 
									     ((0x1000000U 
									       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									       ? 0x14U
									       : 
									      ((0x800000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									        ? 0x16U
									        : 
									       ((0x400000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x17U
										 : 
										((0x200000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x41U
										 : 
										((0x100000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x17U
										 : 
										((0x80000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x15U
										 : 
										((0x40000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x13U
										 : 
										((0x20000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x11U
										 : 
										((0x10000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xfU
										 : 
										((0x8000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xdU
										 : 
										((0x4000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xbU
										 : 
										((0x2000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 9U
										 : 
										((0x1000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 7U
										 : 
										((0x800U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 5U
										 : 
										((0x400U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 3U
										 : 
										((0x200U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 1U
										 : 
										((0x80U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x33U
										 : 
										((0x40U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x32U
										 : 
										((0x20U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2fU
										 : 
										((0x10U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2eU
										 : 
										((8U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2dU
										 : 
										((4U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2cU
										 : 
										((2U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2bU
										 : 
										((1U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x2aU
										 : 
										((1U 
										& ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 5U) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x19U)))
										 ? 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2dU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_21_reg_1272)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2cU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_19_reg_1262)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2bU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__dlti_addr_reg_1051)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2aU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(1U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x29U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(3U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x28U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_5_reg_1252)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x27U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_3_reg_1242)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x26U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_1_reg_1088)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x25U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(5U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x24U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(3U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x23U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_16_reg_1157)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x1dU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_14_reg_1147)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x17U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_12_reg_1118)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x11U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_10_reg_1141)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0xbU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_8_reg_1108)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 9U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(4U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 6U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(1U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 4U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(3U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 3U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(1U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(1U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset))))))
										 : 0U))))))))))))))))))))
										 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    // ALWAYS at upzero.v:824
    vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_NS_fsm 
	= (((((((((VL_ULL(1) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
		  | (VL_ULL(2) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		 | (VL_ULL(4) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		| (VL_ULL(8) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
	       | (VL_ULL(0x10) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
	      | (VL_ULL(0x20) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
	     | (VL_ULL(0x40) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
	    | (VL_ULL(0x80) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
	    ? ((VL_ULL(1) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
	        ? (((IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start) 
		    & (0U == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))
		    ? VL_ULL(0x1000000000) : (((IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start) 
					       & (0U 
						  != vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))
					       ? VL_ULL(2)
					       : VL_ULL(1)))
	        : ((VL_ULL(2) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
		    ? VL_ULL(4) : ((VL_ULL(4) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				    ? VL_ULL(8) : (
						   (VL_ULL(8) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x10)
						    : 
						   ((VL_ULL(0x10) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x20)
						     : 
						    ((VL_ULL(0x20) 
						      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						      ? VL_ULL(0x40)
						      : 
						     ((VL_ULL(0x40) 
						       == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						       ? VL_ULL(0x80)
						       : VL_ULL(0x100))))))))
	    : (((((((((VL_ULL(0x100) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
		      | (VL_ULL(0x200) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		   | (VL_ULL(0x1000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		  | (VL_ULL(0x2000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		 | (VL_ULL(0x4000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		| (VL_ULL(0x8000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
	        ? ((VL_ULL(0x100) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
		    ? VL_ULL(0x200) : ((VL_ULL(0x200) 
					== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				        ? VL_ULL(0x400)
				        : ((VL_ULL(0x400) 
					    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					    ? VL_ULL(0x800)
					    : ((VL_ULL(0x800) 
						== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					        ? VL_ULL(0x1000)
					        : (
						   (VL_ULL(0x1000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x2000)
						    : 
						   ((VL_ULL(0x2000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x4000)
						     : 
						    ((VL_ULL(0x4000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						      ? VL_ULL(0x8000)
						      : VL_ULL(0x10000))))))))
	        : (((((((((VL_ULL(0x10000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
			  | (VL_ULL(0x20000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		       | (VL_ULL(0x100000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		      | (VL_ULL(0x200000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
		    ? ((VL_ULL(0x10000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
		        ? VL_ULL(0x20000) : ((VL_ULL(0x20000) 
					      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					      ? VL_ULL(0x40000)
					      : ((VL_ULL(0x40000) 
						  == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						  ? VL_ULL(0x80000)
						  : 
						 ((VL_ULL(0x80000) 
						   == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						   ? VL_ULL(0x100000)
						   : 
						  ((VL_ULL(0x100000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x200000)
						    : 
						   ((VL_ULL(0x200000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x400000)
						     : 
						    ((VL_ULL(0x400000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						      ? VL_ULL(0x800000)
						      : VL_ULL(0x1000000))))))))
		    : (((((((((VL_ULL(0x1000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
			      | (VL_ULL(0x2000000) 
				 == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			   | (VL_ULL(0x10000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			  | (VL_ULL(0x20000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
		        ? ((VL_ULL(0x1000000) == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
			    ? VL_ULL(0x2000000) : (
						   (VL_ULL(0x2000000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000)
						    : 
						   ((VL_ULL(0x4000000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000)
						     : 
						    ((VL_ULL(0x8000000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						      ? VL_ULL(0x10000000)
						      : 
						     ((VL_ULL(0x10000000) 
						       == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						       ? VL_ULL(0x20000000)
						       : 
						      ((VL_ULL(0x20000000) 
							== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						        ? VL_ULL(0x40000000)
						        : 
						       ((VL_ULL(0x40000000) 
							 == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
							 ? VL_ULL(0x80000000)
							 : VL_ULL(0x100000000))))))))
		        : (((((((((VL_ULL(0x100000000) 
				   == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
				  | (VL_ULL(0x200000000) 
				     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
				 | (VL_ULL(0x400000000) 
				    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
				| (VL_ULL(0x800000000) 
				   == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			       | (VL_ULL(0x1000000000) 
				  == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			      | (VL_ULL(0x2000000000) 
				 == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000000) 
				== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000000) 
			       == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm))
			    ? ((VL_ULL(0x100000000) 
				== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
			        ? VL_ULL(0x200000000)
			        : ((VL_ULL(0x200000000) 
				    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				    ? VL_ULL(0x400000000)
				    : ((VL_ULL(0x400000000) 
					== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				        ? VL_ULL(0x800000000)
				        : ((VL_ULL(0x800000000) 
					    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					    ? VL_ULL(0x20000000000)
					    : ((VL_ULL(0x1000000000) 
						== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					        ? VL_ULL(0x2000000000)
					        : (
						   (VL_ULL(0x2000000000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000000)
						    : 
						   ((VL_ULL(0x4000000000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000000)
						     : VL_ULL(0x10000000000))))))))
			    : ((VL_ULL(0x10000000000) 
				== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
			        ? VL_ULL(0x800000000)
			        : ((VL_ULL(0x20000000000) 
				    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				    ? VL_ULL(0x40000000000)
				    : ((VL_ULL(0x40000000000) 
					== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
				        ? VL_ULL(0x80000000000)
				        : ((VL_ULL(0x80000000000) 
					    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					    ? VL_ULL(0x100000000000)
					    : ((VL_ULL(0x100000000000) 
						== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
					        ? VL_ULL(0x200000000000)
					        : (
						   (VL_ULL(0x200000000000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						    ? VL_ULL(0x400000000000)
						    : 
						   ((VL_ULL(0x400000000000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm)
						     ? VL_ULL(1)
						     : VL_ULL(0)))))))))))));
    // ALWAYS at encode.v:1921
    vlTOPp->our__DOT__ce0 = (1U & (((((((((((((((((
						   (((((((((((((((((((((((((((((((((((((((((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 1U) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 7U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 8U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 9U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 7U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xdU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 0xaU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x11U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 2U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 4U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 8U)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xaU)) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0xeU)) 
									       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x12U)) 
									      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 0xbU)) 
									     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
										>> 3U)) 
									    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									       >> 5U)) 
									   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									      >> 9U)) 
									  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									     >> 0xbU)) 
									 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									    >> 0xcU)) 
									| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									   >> 6U)) 
								       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
									  >> 0xcU)) 
								      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									 >> 0xdU)) 
								     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
									>> 0x13U)) 
								    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								       >> 0x17U)) 
								   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								      >> 0x14U)) 
								  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								     >> 0x16U)) 
								 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								    >> 0x15U)) 
								| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								   & (IData)(vlTOPp->our__DOT__r_next))) 
							       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								  >> 0xeU)) 
							      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								 >> 0xfU)) 
							     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
								>> 0x10U)) 
							    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							       >> 0x11U)) 
							   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							      >> 0x12U)) 
							  | ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							      >> 0x18U) 
							     & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done))) 
							 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							    >> 0x19U)) 
							| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
							   >> 0x1aU)) 
						       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							  >> 2U)) 
						      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							 >> 6U)) 
						     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
							>> 0x13U)) 
						    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						       >> 0x14U)) 
						   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						      >> 0x15U)) 
						  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						     >> 0x16U)) 
						 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						    >> 0x1aU)) 
						| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						   >> 0x1eU)) 
					       | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x1fU)) 
					      | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U]) 
					     | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						>> 1U)) 
					    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					       >> 0x1bU)) 
					   | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					      >> 0x1cU)) 
					  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					     >> 0x1dU)) 
					 | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					    >> 0x1eU)) 
					| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U] 
					   >> 0x1fU)) 
				       | vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U]) 
				      | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					 >> 1U)) | 
				     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
				      >> 3U)) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						 >> 2U)) 
				   | (((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
					>> 5U) | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						  >> 0x19U)) 
				      & (((((((((((((((((((((IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								     >> 4U)) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								       >> 0x24U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								      >> 0x26U))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								     >> 0x2aU))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								    >> 0x2bU))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								   >> 0x2cU))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								  >> 5U))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								 >> 0x25U))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
								>> 0xaU))) 
						    | (((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
							& (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start)) 
						       & (0U 
							  != vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))) 
						   | (((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
						       & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start)) 
						      & (0U 
							 == vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))) 
						  | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							     >> 8U))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							    >> 0xcU))) 
						| (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							   >> 0x12U))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							  >> 0x18U))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							 >> 0x1eU))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
							>> 0x29U))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						       >> 0x27U))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						      >> 0x28U))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						     >> 0x2dU))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
						    >> 0x2eU))))));
    // ALWAYS at encode.v:1679
    vlTOPp->our__DOT__addr0 = (0x7fU & ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					 ? 0x3cU : 
					((2U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					  ? 0x3eU : 
					 ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
					   ? 0x40U : 
					  ((0x80000000U 
					    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					    ? 0x3fU
					    : ((0x40000000U 
						& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					        ? 0x3bU
					        : (
						   (0x4000000U 
						    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						    ? 0x3dU
						    : 
						   ((0x400000U 
						     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						     ? 0x39U
						     : 
						    ((0x200000U 
						      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						      ? 0x34U
						      : 
						     ((0x100000U 
						       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						       ? 0x36U
						       : 
						      ((0x80000U 
							& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						        ? 0x35U
						        : 
						       ((0x40000U 
							 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							 ? 0x33U
							 : 
							((0x20000U 
							  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							  ? 0x39U
							  : 
							 ((0x4000U 
							   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							   ? 0x35U
							   : 
							  ((0x2000U 
							    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							    ? 0x3cU
							    : 
							   ((0x1000U 
							     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							     ? 0x3bU
							     : 
							    ((0x800U 
							      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							      ? 0x1dU
							      : 
							     ((0x400U 
							       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							       ? 0x1cU
							       : 
							      ((0x200U 
								& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
							        ? 0x1bU
							        : 
							       ((0x100U 
								 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								 ? 0x1aU
								 : 
								((0x80U 
								  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								  ? 0x19U
								  : 
								 ((0x40U 
								   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								   ? 0x18U
								   : 
								  ((8U 
								    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								    ? 0x38U
								    : 
								   ((4U 
								     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								     ? 0x30U
								     : 
								    ((2U 
								      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								      ? 1U
								      : 
								     ((1U 
								       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
								       ? 3U
								       : 
								      ((0x80000000U 
									& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
								        ? 5U
								        : 
								       ((0x40000000U 
									 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									 ? 7U
									 : 
									((0x20000000U 
									  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									  ? 9U
									  : 
									 ((0x10000000U 
									   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									   ? 0xbU
									   : 
									  ((0x8000000U 
									    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									    ? 0xdU
									    : 
									   ((0x4000000U 
									     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									     ? 0xfU
									     : 
									    ((0x2000000U 
									      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									      ? 0x11U
									      : 
									     ((0x1000000U 
									       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									       ? 0x13U
									       : 
									      ((0x800000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
									        ? 0x15U
									        : 
									       ((0x400000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x42U
										 : 
										((0x200000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x31U
										 : 
										((0x100000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x38U
										 : 
										((0x80000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x16U
										 : 
										((0x40000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x14U
										 : 
										((0x20000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x12U
										 : 
										((0x10000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x10U
										 : 
										((0x8000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xeU
										 : 
										((0x4000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xcU
										 : 
										((0x2000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0xaU
										 : 
										((0x1000U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 8U
										 : 
										((0x800U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 6U
										 : 
										((0x400U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 4U
										 : 
										((0x200U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 2U
										 : 
										((0x100U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0U
										 : 
										((0x80U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x37U
										 : 
										((0x40U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x36U
										 : 
										((0x20U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x29U
										 : 
										((0x10U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x28U
										 : 
										((8U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x27U
										 : 
										((4U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x26U
										 : 
										((2U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x25U
										 : 
										((1U 
										& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
										 ? 0x24U
										 : 
										((1U 
										& ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 5U) 
										| (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
										>> 0x19U)))
										 ? 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2eU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__dlti_addr_reg_1051)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2dU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_20_reg_1267)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2cU)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_17_reg_1257)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2bU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(5U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x2aU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(2U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x29U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(4U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x28U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_4_reg_1247)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x27U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_2_reg_1237)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x26U)))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_reg_1075)
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x25U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(4U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x24U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(2U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x1eU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(5U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x18U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(4U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x12U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(3U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0xcU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(2U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0xaU)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(5U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 8U)))
										 ? (IData)((QData)((IData)(
										(0x3fU 
										& ((IData)(2U) 
										+ (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066))))))
										 : 
										((1U 
										& ((IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 4U)) 
										| (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 5U))))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_6_reg_1061)
										 : 
										(((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
										& (0U 
										== vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset)
										 : 
										(((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm) 
										& (0U 
										!= vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt))
										 ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset)
										 : 0U))))))))))))))))))))
										 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    // ALWAYS at encode.v:1941
    vlTOPp->our__DOT__d0 = ((4U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
			     ? VL_EXTENDS_II(32,15, (IData)(vlTOPp->our__DOT__enc__DOT__apl2_assign_1_reg_4145))
			     : ((1U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U])
				 ? vlTOPp->our__DOT__r_q0
				 : ((0x400000U & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
				     ? (IData)(vlTOPp->our__DOT__enc__DOT__nbl_assign_3_fu_2705_p3)
				     : ((0x200000U 
					 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					 ? vlTOPp->our__DOT__enc__DOT__plt_reg_3722
					 : ((0x100000U 
					     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
					     ? vlTOPp->our__DOT__enc__DOT__rlt_reg_3728
					     : ((1U 
						 & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
						     >> 0x13U) 
						    | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[2U] 
						       >> 1U)))
						 ? vlTOPp->our__DOT__enc__DOT__reg_1019
						 : 
						((8U 
						  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						  ? 
						 (0x7ff8U 
						  & (((0xbU 
						       >= 
						       (0xfU 
							& ((IData)(9U) 
							   - (IData)(vlTOPp->our__DOT__enc__DOT__wd2_cast_reg_3712))))
						       ? 
						      ((IData)(vlTOPp->our__DOT__enc__DOT__ilb_table_q0) 
						       >> 
						       (0xfU 
							& ((IData)(9U) 
							   - (IData)(vlTOPp->our__DOT__enc__DOT__wd2_cast_reg_3712))))
						       : 0U) 
						     << 3U))
						  : 
						 ((4U 
						   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						   ? (IData)(vlTOPp->our__DOT__enc__DOT__il_assign_reg_3665)
						   : 
						  ((2U 
						    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						    ? vlTOPp->our__DOT__enc__DOT__reg_1075
						    : 
						   ((1U 
						     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U])
						     ? vlTOPp->our__DOT__enc__DOT__reg_1026
						     : 
						    ((0x80000000U 
						      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						      ? vlTOPp->our__DOT__enc__DOT__reg_1038
						      : 
						     ((0x40000000U 
						       & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						       ? vlTOPp->our__DOT__enc__DOT__reg_1050
						       : 
						      ((0x20000000U 
							& vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
						        ? vlTOPp->our__DOT__enc__DOT__reg_1062
						        : 
						       ((0x10000000U 
							 & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							 ? vlTOPp->our__DOT__enc__DOT__buff_load_12_reg_3394
							 : 
							((0x8000000U 
							  & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							  ? vlTOPp->our__DOT__enc__DOT__buff_load_14_reg_3418
							  : 
							 ((0x4000000U 
							   & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							   ? vlTOPp->our__DOT__enc__DOT__buff_load_16_reg_3442
							   : 
							  ((0x2000000U 
							    & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							    ? vlTOPp->our__DOT__enc__DOT__buff_load_19_reg_3466
							    : 
							   ((0x1000000U 
							     & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							     ? vlTOPp->our__DOT__enc__DOT__buff_load_21_reg_3490
							     : 
							    ((0x800000U 
							      & vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[0U])
							      ? vlTOPp->our__DOT__enc__DOT__reg_1068
							      : 
							     ((1U 
							       & ((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
								   >> 5U) 
								  | (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm[1U] 
								     >> 0x19U)))
							       ? 
							      ((1U 
								& (IData)(
									  (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									   >> 0x2eU)))
							        ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996_dlt
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									    >> 0x2dU)))
								 ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									     >> 0x2cU)))
								  ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									      >> 0x2bU)))
								   ? vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
									       >> 0x28U)))
								    ? (IData)(
									      (VL_ULL(0xffffffff) 
									       & ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										>> 8U)))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x27U)))
								     ? (IData)(
									       (VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265)) 
										>> 8U)))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 0x26U)))
								      ? (IData)(
										(VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252)) 
										>> 8U)))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm 
										>> 5U)))
								       ? 
								      ((IData)(
									       (VL_ULL(0xffffffff) 
										& ((((QData)((IData)(vlTOPp->our__DOT__r_q0)) 
										<< 8U) 
										- 
										VL_EXTENDS_QI(40,32, vlTOPp->our__DOT__r_q0)) 
										>> 8U))) 
								       + 
								       ((1U 
									 & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_s_reg_1113 
										>> 0x3fU)))
									 ? 0xffffff80U
									 : 0x80U))
								       : 0U))))))))
							       : 0U))))))))))))))))))));
    // ALWAYS at quantl.v:762
    vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_NS_fsm 
	= (((((((((1U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm) 
		  | (2U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		 | (4U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		| (8U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
	       | (0x10U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
	      | (0x20U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
	     | (0x40U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
	    | (0x80U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm))
	    ? ((1U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
	        ? ((IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start)
		    ? 2U : 1U) : ((2U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				   ? (((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2) 
				       & (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_1_fu_469_p2))
				       ? 4U : 0x10000000U)
				   : ((4U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				       ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_2_reg_1292)
					   ? 8U : 0x10000000U)
				       : ((8U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
					   ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_3_reg_1296)
					       ? 0x10U
					       : 0x10000000U)
					   : ((0x10U 
					       == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
					       ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_4_reg_1300)
						   ? 0x20U
						   : 0x10000000U)
					       : ((0x20U 
						   == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						   ? 
						  ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_5_reg_1304)
						    ? 0x40U
						    : 0x10000000U)
						   : 
						  ((0x40U 
						    == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						    ? 
						   ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_6_reg_1308)
						     ? 0x80U
						     : 0x10000000U)
						    : 
						   ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_7_reg_1312)
						     ? 0x100U
						     : 0x10000000U))))))))
	    : (((((((((0x100U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm) 
		      | (0x200U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		     | (0x400U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		    | (0x800U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		   | (0x1000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		  | (0x2000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		 | (0x4000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		| (0x8000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm))
	        ? ((0x100U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
		    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_8_reg_1316)
		        ? 0x200U : 0x10000000U) : (
						   (0x200U 
						    == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						    ? 
						   ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_9_reg_1320)
						     ? 0x400U
						     : 0x10000000U)
						    : 
						   ((0x400U 
						     == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						     ? 
						    ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_s_reg_1324)
						      ? 0x800U
						      : 0x10000000U)
						     : 
						    ((0x800U 
						      == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						      ? 
						     ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_10_reg_1328)
						       ? 0x1000U
						       : 0x10000000U)
						      : 
						     ((0x1000U 
						       == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						       ? 
						      ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_11_reg_1332)
						        ? 0x2000U
						        : 0x10000000U)
						       : 
						      ((0x2000U 
							== vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
						        ? 
						       ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_12_reg_1336)
							 ? 0x4000U
							 : 0x10000000U)
						        : 
						       ((0x4000U 
							 == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
							 ? 
							((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_13_reg_1340)
							  ? 0x8000U
							  : 0x10000000U)
							 : 
							((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_14_reg_1344)
							  ? 0x10000U
							  : 0x10000000U))))))))
	        : (((((((((0x10000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm) 
			  | (0x20000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
			 | (0x40000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
			| (0x80000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		       | (0x100000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		      | (0x200000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		     | (0x400000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)) 
		    | (0x800000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm))
		    ? ((0x10000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
		        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_15_reg_1348)
			    ? 0x20000U : 0x10000000U)
		        : ((0x20000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
			    ? (((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_16_reg_1352) 
				& (IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_17_fu_903_p2))
			        ? 0x40000U : 0x10000000U)
			    : ((0x40000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
			        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_18_reg_1359)
				    ? 0x80000U : 0x10000000U)
			        : ((0x80000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_19_reg_1363)
				        ? 0x100000U
				        : 0x10000000U)
				    : ((0x100000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_20_reg_1367)
					    ? 0x200000U
					    : 0x10000000U)
				        : ((0x200000U 
					    == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
					    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_21_reg_1371)
					        ? 0x400000U
					        : 0x10000000U)
					    : ((0x400000U 
						== vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
					        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_22_reg_1375)
						    ? 0x800000U
						    : 0x10000000U)
					        : ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_23_reg_1379)
						    ? 0x1000000U
						    : 0x10000000U))))))))
		    : ((0x1000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
		        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_24_reg_1383)
			    ? 0x2000000U : 0x10000000U)
		        : ((0x2000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
			    ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_25_reg_1387)
			        ? 0x4000000U : 0x10000000U)
			    : ((0x4000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
			        ? ((IData)(vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_26_reg_1391)
				    ? 0x8000000U : 0x10000000U)
			        : ((0x8000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				    ? 0x10000000U : 
				   ((0x10000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				     ? 0x20000000U : 
				    ((0x20000000U == vlTOPp->our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm)
				      ? 1U : 0U)))))))));
}

void Vour::_eval(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_eval\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vour::_eval_initial(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_eval_initial\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
}

void Vour::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vour::final\n"); );
    // Variables
    Vour__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vour::_eval_settle(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_eval_settle\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

VL_INLINE_OPT QData Vour::_change_request(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_change_request\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void Vour::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    read_base = VL_RAND_RESET_Q(64);
    write_base = VL_RAND_RESET_Q(64);
    num_read = VL_RAND_RESET_Q(64);
    read_size_input = VL_RAND_RESET_Q(64);
    read_ready = VL_RAND_RESET_Q(64);
    write_ready = VL_RAND_RESET_Q(64);
    read_data = VL_RAND_RESET_I(32);
    read_enable = VL_RAND_RESET_I(1);
    write_enable = VL_RAND_RESET_I(1);
    finish_read = VL_RAND_RESET_I(1);
    finish_write = VL_RAND_RESET_I(1);
    done = VL_RAND_RESET_I(1);
    read_addr = VL_RAND_RESET_Q(64);
    write_addr = VL_RAND_RESET_Q(64);
    write_size = VL_RAND_RESET_Q(64);
    read_size_output = VL_RAND_RESET_Q(64);
    write_data = VL_RAND_RESET_I(32);
    returnvalue = VL_RAND_RESET_I(32);
    our__DOT__read_cnt = VL_RAND_RESET_Q(64);
    our__DOT__write_cnt = VL_RAND_RESET_Q(64);
    our__DOT__state = VL_RAND_RESET_Q(64);
    our__DOT__r_read_enable = VL_RAND_RESET_I(1);
    our__DOT__r_write_enable = VL_RAND_RESET_I(1);
    our__DOT__r_finish_read = VL_RAND_RESET_I(1);
    our__DOT__r_finish_write = VL_RAND_RESET_I(1);
    our__DOT__r_done = VL_RAND_RESET_I(1);
    our__DOT__r_read_addr = VL_RAND_RESET_Q(64);
    our__DOT__r_write_addr = VL_RAND_RESET_Q(64);
    our__DOT__r_write_size = VL_RAND_RESET_Q(64);
    our__DOT__r_read_size_output = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
	    our__DOT__r_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    our__DOT__r_write_data = VL_RAND_RESET_I(32);
    our__DOT__r_returnvalue = VL_RAND_RESET_I(32);
    our__DOT__addr0 = VL_RAND_RESET_I(7);
    our__DOT__addr1 = VL_RAND_RESET_I(7);
    our__DOT__ce0 = VL_RAND_RESET_I(1);
    our__DOT__ce1 = VL_RAND_RESET_I(1);
    our__DOT__r_next = VL_RAND_RESET_I(1);
    our__DOT__d0 = VL_RAND_RESET_I(32);
    our__DOT__d1 = VL_RAND_RESET_I(32);
    our__DOT__r_q0 = VL_RAND_RESET_I(32);
    our__DOT__r_q1 = VL_RAND_RESET_I(32);
    our__DOT__timer = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(67,our__DOT__enc__DOT__ap_CS_fsm);
    our__DOT__enc__DOT__qq4_code4_table_s_q0 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__wl_code_table_q0 = VL_RAND_RESET_I(13);
    our__DOT__enc__DOT__ilb_table_q0 = VL_RAND_RESET_I(12);
    our__DOT__enc__DOT__reg_1019 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1026 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1032 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1038 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1044 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1050 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1056 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1062 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1068 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1075 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__reg_1081 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_61_i_reg_3183 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_61_1_i_reg_3188 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp21_reg_3244 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__zl_reg_3289 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_61_2_i_reg_3294 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_61_3_i_reg_3299 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_61_4_i_reg_3304 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__szl_reg_3331 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__pl_reg_3337 = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__tmp_58_i_reg_3354 = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__spl_reg_3371 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_11_reg_3382 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_12_reg_3394 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_13_reg_3406 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_14_reg_3418 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_15_reg_3430 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_16_reg_3442 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_18_reg_3454 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_19_reg_3466 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_20_reg_3478 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_21_reg_3490 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_22_reg_3502 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_25_reg_3520 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__xb_reg_3542 = VL_RAND_RESET_Q(39);
    our__DOT__enc__DOT__tmp_7_reg_3547 = VL_RAND_RESET_Q(41);
    our__DOT__enc__DOT__tmp_76_1_reg_3552 = VL_RAND_RESET_Q(42);
    our__DOT__enc__DOT__tmp_73_3_reg_3557 = VL_RAND_RESET_Q(42);
    our__DOT__enc__DOT__tmp_76_3_reg_3562 = VL_RAND_RESET_Q(44);
    our__DOT__enc__DOT__tmp_73_4_reg_3567 = VL_RAND_RESET_Q(44);
    our__DOT__enc__DOT__tmp_76_4_reg_3572 = VL_RAND_RESET_Q(46);
    our__DOT__enc__DOT__tmp_73_5_reg_3577 = VL_RAND_RESET_Q(46);
    our__DOT__enc__DOT__tmp_73_6_reg_3582 = VL_RAND_RESET_Q(44);
    our__DOT__enc__DOT__tmp_73_8_reg_3587 = VL_RAND_RESET_Q(43);
    our__DOT__enc__DOT__tmp_76_9_reg_3592 = VL_RAND_RESET_Q(39);
    our__DOT__enc__DOT__tmp_8_reg_3597 = VL_RAND_RESET_Q(39);
    our__DOT__enc__DOT__tmp1_reg_3602 = VL_RAND_RESET_Q(43);
    our__DOT__enc__DOT__tmp6_reg_3607 = VL_RAND_RESET_Q(39);
    our__DOT__enc__DOT__tmp13_reg_3612 = VL_RAND_RESET_Q(45);
    our__DOT__enc__DOT__tmp18_reg_3617 = VL_RAND_RESET_Q(43);
    our__DOT__enc__DOT__xl_reg_3638 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__xh_reg_3643 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__sl_reg_3648 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__buff_load_45_reg_3654 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__el_reg_3660 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_quantl_fu_1009_ap_return = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__il_assign_reg_3665 = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_quantl_fu_1009_ap_done = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__qq4_code4_table_loa_reg_3680 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__tmp_46_reg_3685 = VL_RAND_RESET_I(15);
    our__DOT__enc__DOT__tmp_50_i_reg_3690 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__dlt_reg_3695 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__nbl_assign_2_fu_1971_p3 = VL_RAND_RESET_I(15);
    our__DOT__enc__DOT__nbl_assign_2_reg_3707 = VL_RAND_RESET_I(15);
    our__DOT__enc__DOT__wd2_cast_reg_3712 = VL_RAND_RESET_I(4);
    our__DOT__enc__DOT__plt_reg_3722 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__rlt_reg_3728 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_61_i1_reg_3813 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_61_1_i1_reg_3818 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp34_reg_3875 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__zl_1_reg_3903 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_61_2_i1_reg_3908 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_61_3_i1_reg_3913 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_61_4_i1_reg_3918 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__szh_reg_3959 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__pl_3_reg_3970 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_58_i1_reg_3975 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__tmp_47_reg_3985 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__tmp_6_i_reg_3991 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__sph_reg_3996 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_19_reg_4001 = VL_RAND_RESET_Q(43);
    our__DOT__enc__DOT__apl2_reg_4006 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__apl1_reg_4012 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__sh_fu_2415_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__sh_reg_4018 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__p_ih_t_reg_4023 = VL_RAND_RESET_I(2);
    our__DOT__enc__DOT__apl2_assign_reg_4030 = VL_RAND_RESET_I(15);
    our__DOT__enc__DOT__tmp_23_reg_4036 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_59_reg_4041 = VL_RAND_RESET_I(15);
    our__DOT__enc__DOT__tmp_53_i_reg_4046 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__apl1_3_reg_4051 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__wd2_4_cast_reg_4066 = VL_RAND_RESET_I(4);
    our__DOT__enc__DOT__dh_1_reg_4076 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__ph_reg_4083 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__yh_reg_4089 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_60_reg_4122 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__tmp_6_i1_reg_4128 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__apl2_1_reg_4133 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__apl1_4_reg_4139 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__apl2_assign_1_reg_4145 = VL_RAND_RESET_I(15);
    our__DOT__enc__DOT__tmp_30_reg_4151 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__tmp_31_reg_4156 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__apl1_7_reg_4161 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_upzero_fu_996_ap_done = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_upzero_fu_996_dlt = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996_dlti_offset = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996_bli_offset = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__ap_reg_grp_upzero_fu_996_ap_start = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__ap_reg_grp_quantl_fu_1009_ap_start = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__xa_1_fu_1720_p2 = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__xb_1_fu_1795_p2 = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__tmp_i2_fu_1872_p2 = VL_RAND_RESET_Q(39);
    our__DOT__enc__DOT__p_i_fu_1926_p3 = VL_RAND_RESET_I(31);
    our__DOT__enc__DOT__eh_fu_2419_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__p_i1_fu_2500_p3 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_i8_fu_2550_p2 = VL_RAND_RESET_Q(39);
    our__DOT__enc__DOT__p_i2_fu_2613_p3 = VL_RAND_RESET_I(31);
    our__DOT__enc__DOT__wd3_0_apl1_i_fu_2653_p3 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__nbl_assign_3_fu_2705_p3 = VL_RAND_RESET_I(15);
    our__DOT__enc__DOT__p_i3_fu_2984_p3 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__wd3_0_apl1_i1_fu_3054_p3 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(67,our__DOT__enc__DOT__ap_NS_fsm);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    our__DOT__enc__DOT__qq4_code4_table_s_U__DOT__encode_qq4_code4_eOg_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    our__DOT__enc__DOT__wl_code_table_U__DOT__encode_wl_code_tafYi_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(13);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    our__DOT__enc__DOT__ilb_table_U__DOT__encode_ilb_table_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(12);
    }}
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_CS_fsm = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_252 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_259 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_265 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__reg_271 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__dlti_addr_reg_1051 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_reg_1057 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_6_reg_1061 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_11_reg_1066 = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_reg_1075 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_36_reg_1080 = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_1_reg_1088 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_reg_1093 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_8_reg_1108 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_s_reg_1113 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_12_reg_1118 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_7_reg_1123 = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_10_reg_1141 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_14_reg_1147 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_1_32_reg_1152 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_16_reg_1157 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_load_9_reg_1168 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_2_reg_1178 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_3_33_reg_1193 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_4_reg_1208 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_5_34_reg_1223 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__tmp_16_reg_1228 = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_2_reg_1237 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_3_reg_1242 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_4_reg_1247 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_5_reg_1252 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_17_reg_1257 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_19_reg_1262 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_20_reg_1267 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__bli_addr_21_reg_1272 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__ap_NS_fsm = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U5__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U7__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U7__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U8__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_upzero_fu_996__DOT__encode_mul_32s_32dEe_U10__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_CS_fsm = VL_RAND_RESET_I(30);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_q0 = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_q0 = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_17_reg_1196 = VL_RAND_RESET_I(27);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_reg_1201 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_fu_388_p3 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__n_assign_reg_1205 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__wd_cast_cast1_reg_1235 = VL_RAND_RESET_Q(33);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast9_reg_1240 = VL_RAND_RESET_Q(46);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast8_reg_1251 = VL_RAND_RESET_Q(44);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast5_reg_1263 = VL_RAND_RESET_Q(48);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast4_reg_1268 = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_cast2_reg_1275 = VL_RAND_RESET_Q(45);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_2_reg_1292 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_4_fu_421_p2 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_1_fu_469_p2 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_3_reg_1296 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_4_reg_1300 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_5_reg_1304 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_6_reg_1308 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_7_reg_1312 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_8_reg_1316 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_9_reg_1320 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_s_reg_1324 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_10_reg_1328 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_11_reg_1332 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_12_reg_1336 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_13_reg_1340 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_14_reg_1344 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_15_reg_1348 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_16_reg_1352 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_18_reg_1359 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_17_fu_903_p2 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_19_reg_1363 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_20_reg_1367 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_21_reg_1371 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_22_reg_1375 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_23_reg_1379 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_24_reg_1383 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_25_reg_1387 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_26_reg_1391 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__tmp_44_27_reg_1395 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__mil_lcssa_reg_220 = VL_RAND_RESET_I(5);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ril2_phi_fu_346_p4 = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_return_preg = VL_RAND_RESET_I(6);
    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__ap_NS_fsm = VL_RAND_RESET_I(30);
    { int __Vi0=0; for (; __Vi0<31; ++__Vi0) {
	    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_pos_U__DOT__quantl_quant26bt_bkb_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<31; ++__Vi0) {
	    our__DOT__enc__DOT__grp_quantl_fu_1009__DOT__quant26bt_neg_U__DOT__quantl_quant26bt_cud_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(6);
    }}
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U17__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U17__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U18__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U19__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U20__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32g8j_U21__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0 = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U23__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U24__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U25__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U26__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U27__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U28__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U29__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U30__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U31__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U32__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mux_42_32_1_U34__DOT__mux_2_0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32g8j_U35__DOT__encode_mul_32s_32g8j_Mul3S_1_U__DOT__buff0 = VL_RAND_RESET_Q(47);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U36__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__encode_mul_32s_32dEe_x_U37__DOT__encode_mul_32s_32dEe_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
}

void Vour::_configure_coverage(Vour__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_configure_coverage\n"); );
}
