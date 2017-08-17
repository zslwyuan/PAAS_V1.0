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
    VL_SIG8(__Vdly__our__DOT__r_next,0,0);
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v0,0,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v0,0,0);
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v1,0,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v1,0,0);
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v2,0,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v2,0,0);
    //char	__VpadToAlign11[5];
    VL_SIGW(__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage,64,0,3);
    //char	__VpadToAlign28[4];
    VL_SIGW(__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage,64,0,3);
    //char	__VpadToAlign44[4];
    VL_SIG64(__Vdly__our__DOT__state,63,0);
    VL_SIG64(__Vdly__our__DOT__read_cnt,63,0);
    VL_SIG64(__Vdly__our__DOT__write_cnt,63,0);
    VL_SIG64(__Vdly__our__DOT__r_read_addr,63,0);
    VL_SIG64(__Vdly__our__DOT__r_write_addr,63,0);
    VL_SIG64(__Vdly__our__DOT__timer,63,0);
    VL_SIG64(__Vdlyvval__our__DOT__r_data__v0,63,0);
    VL_SIG64(__Vdlyvval__our__DOT__r_data__v1,63,0);
    VL_SIG64(__Vdlyvval__our__DOT__r_data__v2,63,0);
    // Body
    __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U] 
	= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U];
    __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U] 
	= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U];
    __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U] 
	= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U];
    __Vdly__our__DOT__state = vlTOPp->our__DOT__state;
    __Vdly__our__DOT__read_cnt = vlTOPp->our__DOT__read_cnt;
    __Vdly__our__DOT__write_cnt = vlTOPp->our__DOT__write_cnt;
    __Vdly__our__DOT__timer = vlTOPp->our__DOT__timer;
    __Vdly__our__DOT__r_read_addr = vlTOPp->our__DOT__r_read_addr;
    __Vdly__our__DOT__r_write_addr = vlTOPp->our__DOT__r_write_addr;
    __Vdly__our__DOT__r_next = vlTOPp->our__DOT__r_next;
    __Vdlyvset__our__DOT__r_data__v0 = 0U;
    __Vdlyvset__our__DOT__r_data__v1 = 0U;
    __Vdlyvset__our__DOT__r_data__v2 = 0U;
    __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U] 
	= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U];
    __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U] 
	= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U];
    __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U] 
	= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U];
    // ALWAYS at float64_div_udiv_bkb.v:83
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp 
	= ((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[2U])
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp
	    : (((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[0U]))));
    // ALWAYS at float64_div_udiv_bkb.v:83
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp 
	= ((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[2U])
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp
	    : (((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[0U]))));
    // ALWAYS at roundAndPackFloat64.v:176
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_return_preg = VL_ULL(0);
    } else {
	if ((2U & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_return_preg 
		= vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_phi_fu_144_p4;
	}
    }
    // ALWAYS at float64_div_countdEe.v:33
    if ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
		& (IData)(vlTOPp->our__DOT__r_next)) 
	       | ((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
		  >> 1U)))) {
	vlTOPp->our__DOT__div__DOT__countLeadingZerosHig_q0 
	    = vlTOPp->our__DOT__div__DOT__countLeadingZerosHig_U__DOT__float64_div_countdEe_rom_U__DOT__ram
	    [(0xffU & ((2U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
		        ? ((0U == (0xffU & (vlTOPp->our__DOT__div__DOT__p_a_i_i_i1_fu_774_p3 
					    >> 0x18U)))
			    ? (vlTOPp->our__DOT__div__DOT__p_a_i_i_i1_fu_774_p3 
			       >> 0x10U) : (vlTOPp->our__DOT__div__DOT__p_a_i_i_i1_fu_774_p3 
					    >> 0x18U))
		        : ((1U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
			    ? ((0U == (0xffU & (vlTOPp->our__DOT__div__DOT__p_a_i_i_i_fu_492_p3 
						>> 0x18U)))
			        ? (vlTOPp->our__DOT__div__DOT__p_a_i_i_i_fu_492_p3 
				   >> 0x10U) : (vlTOPp->our__DOT__div__DOT__p_a_i_i_i_fu_492_p3 
						>> 0x18U))
			    : 0U)))];
    }
    // ALWAYS at float64_div.v:609
    if (((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->our__DOT__r_next)) & 
	    (0x7ffU != (0x7ffU & (IData)((vlTOPp->a 
					  >> 0x34U))))) 
	   & (0x7ffU != (0x7ffU & (IData)((vlTOPp->b 
					   >> 0x34U))))) 
	  & (0U == (0x7ffU & (IData)((vlTOPp->b >> 0x34U))))) 
	 & (VL_ULL(0) != (VL_ULL(0xfffffffffffff) & vlTOPp->b)))) {
	vlTOPp->our__DOT__div__DOT__icmp1_reg_1308 
	    = (0U == (0xffU & (vlTOPp->our__DOT__div__DOT__p_a_i_i_i_fu_492_p3 
			       >> 0x18U)));
	vlTOPp->our__DOT__div__DOT__icmp7_reg_1302 
	    = (0U == (0xffffU & (vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3 
				 >> 0x10U)));
	vlTOPp->our__DOT__div__DOT__icmp_reg_1297 = 
	    (0U == (0xfffffU & (IData)((vlTOPp->b >> 0x20U))));
    }
    // ALWAYS at float64_div.v:617
    if ((((VL_ULL(0) != vlTOPp->our__DOT__div__DOT__grp_fu_332_p0) 
	  & ((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	     >> 1U)) & (0U == (IData)(vlTOPp->our__DOT__div__DOT__aExp_reg_1254)))) {
	vlTOPp->our__DOT__div__DOT__icmp2_reg_1361 
	    = (0U == (0xfffffU & (IData)((vlTOPp->a 
					  >> 0x20U))));
	vlTOPp->our__DOT__div__DOT__icmp3_reg_1366 
	    = (0U == (0xffffU & (vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3 
				 >> 0x10U)));
	vlTOPp->our__DOT__div__DOT__icmp4_reg_1372 
	    = (0U == (0xffU & (vlTOPp->our__DOT__div__DOT__p_a_i_i_i1_fu_774_p3 
			       >> 0x18U)));
    }
    // ALWAYS at estimateDiv128To64.v:350
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_return_preg = VL_ULL(0);
    } else {
	if ((0x800U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) {
	    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_return_preg 
		= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_phi_fu_96_p4;
	}
    }
    // ALWAYS at float64_div_udiv_bkb.v:61
    if (vlTOPp->reset) {
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U] = 0U;
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U] = 0U;
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U] = 0U;
    } else {
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U] 
	    = ((0xfffffffeU & ((IData)((((QData)((IData)(
							 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])))) 
			       << 1U)) | (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__start0));
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U] 
	    = ((1U & ((IData)((((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])))) 
		      >> 0x1fU)) | (0xfffffffeU & ((IData)(
							   ((((QData)((IData)(
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U]))) 
							    >> 0x20U)) 
						   << 1U)));
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U] 
	    = (1U & ((IData)(((((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U]))) 
			      >> 0x20U)) >> 0x1fU));
    }
    // ALWAYS at estimateDiv128To64.v:376
    if (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
	  & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start)) 
	 & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_reg_92 = VL_ULL(0xffffffffffffffff);
    } else {
	if (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
	      >> 0xbU) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340))) {
	    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_reg_92 
		= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_2_fu_321_p2;
	}
    }
    // ALWAYS at roundAndPackFloat64.v:210
    if (((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	  & (0x7fcU >= (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
	 | (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	    & (((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
		  & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		 & (0x7fdU != (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		& (~ ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
		      >> 0xcU))) | ((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
				      & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
				     & (~ ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
					   >> 0xcU))) 
				    & (~ (IData)((vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
						  >> 0x3fU)))))))) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zExp_assign_1_reg_117 
	    = vlTOPp->our__DOT__div__DOT__zExp_reg_1415;
    } else {
	if ((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	      & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	     & (((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
		   & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		  & (0x7fdU != (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		 & ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
		    >> 0xcU)) | ((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
				   & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
				  & ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
				     >> 0xcU)) & (~ (IData)(
							    (vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
							     >> 0x3fU))))))) {
	    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zExp_assign_1_reg_117 = 0U;
	}
    }
    // ALWAYS at estimateDiv128To64.v:1077
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b1_reg_405 
	= (VL_ULL(0xffffffff00000000) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b1_reg_405);
    // ALWAYS at estimateDiv128To64.v:447
    if ((0x80U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b1_reg_405 
	    = ((VL_ULL(0xffffffff) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b1_reg_405) 
	       | ((QData)((IData)((IData)((VL_ULL(0xffffffff) 
					   & vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402)))) 
		  << 0x20U));
    }
    // ALWAYS at estimateDiv128To64.v:1075
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_cast_reg_351 
	= (VL_ULL(0xffffffff) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_cast_reg_351);
    // ALWAYS at estimateDiv128To64.v:1076
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_s_reg_356 
	= (VL_ULL(0xffffffff00000000) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_s_reg_356);
    // ALWAYS at float64_div_udiv_bkb.v:49
    if (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__start0) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__dividend0;
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__divisor0;
    }
    // ALWAYS at our.v:144
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
	__Vdly__our__DOT__r_next = 0U;
	__Vdly__our__DOT__timer = VL_ULL(0);
    } else {
	__Vdly__our__DOT__timer = (VL_ULL(1) + vlTOPp->our__DOT__timer);
	if ((VL_ULL(0xb) == vlTOPp->our__DOT__state)) {
	    __Vdly__our__DOT__state = VL_ULL(0);
	} else {
	    if ((VL_ULL(0) == vlTOPp->our__DOT__state)) {
		__Vdly__our__DOT__r_next = 1U;
		__Vdly__our__DOT__state = VL_ULL(9);
	    } else {
		if ((VL_ULL(2) == vlTOPp->our__DOT__state)) {
		    vlTOPp->our__DOT__r_finish_read = 0U;
		    if ((VL_ULL(1) == vlTOPp->read_ready)) {
			__Vdlyvval__our__DOT__r_data__v0 
			    = vlTOPp->read_data;
			__Vdlyvset__our__DOT__r_data__v0 = 1U;
			__Vdlyvdim0__our__DOT__r_data__v0 
			    = (1U & (IData)(vlTOPp->our__DOT__read_cnt));
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
			    __Vdly__our__DOT__r_next = 1U;
			    __Vdly__our__DOT__read_cnt = VL_ULL(0);
			    __Vdly__our__DOT__state = VL_ULL(9);
			}
		    }
		} else {
		    if ((VL_ULL(9) == vlTOPp->our__DOT__state)) {
			__Vdly__our__DOT__r_next = 0U;
			if (vlTOPp->our__DOT__ce0) {
			    if (vlTOPp->our__DOT__we0) {
				__Vdlyvval__our__DOT__r_data__v1 
				    = vlTOPp->our__DOT__d0;
				__Vdlyvset__our__DOT__r_data__v1 = 1U;
				__Vdlyvdim0__our__DOT__r_data__v1 
				    = (1U & (IData)(vlTOPp->our__DOT__addr0));
			    }
			}
			if ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
				    >> 0xcU) & (~ (
						   (((((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
							 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
							& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
						       & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
						      | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
							   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
							  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
							 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357)))) 
						     | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
							  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
							 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
							& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293)))) 
						    | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
							 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
							& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357))) 
						       & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293)))) 
						   & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_done))))))) {
			    __Vdly__our__DOT__state = VL_ULL(8);
			    vlTOPp->our__DOT__r_done = 1U;
			    vlTOPp->our__DOT__r_returnvalue 
				= ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
					   >> 0xcU) 
					  & (((((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
						  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
						 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
						& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
					       | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
						    & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
						   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
						  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357)))) 
					      | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
						   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
						  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
						 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293)))) 
					     | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
						  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
						 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357))) 
						& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293))))))
				    ? vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_return
				    : vlTOPp->our__DOT__div__DOT__p_0_reg_234);
			}
			if (vlTOPp->our__DOT__ce1) {
			    if (vlTOPp->our__DOT__we1) {
				__Vdlyvval__our__DOT__r_data__v2 
				    = vlTOPp->our__DOT__d1;
				__Vdlyvset__our__DOT__r_data__v2 = 1U;
				__Vdlyvdim0__our__DOT__r_data__v2 
				    = (1U & (IData)(vlTOPp->our__DOT__addr1));
			    }
			}
		    } else {
			if ((VL_ULL(5) == vlTOPp->our__DOT__state)) {
			    __Vdly__our__DOT__r_write_addr 
				= vlTOPp->write_base;
			    vlTOPp->our__DOT__r_write_data 
				= vlTOPp->our__DOT__r_data
				[(1U & (IData)(vlTOPp->our__DOT__write_cnt))];
			    vlTOPp->our__DOT__r_write_enable = 1U;
			    __Vdly__our__DOT__state = VL_ULL(6);
			    vlTOPp->our__DOT__r_write_size 
				= vlTOPp->read_size_input;
			    __Vdly__our__DOT__write_cnt = VL_ULL(0);
			} else {
			    if ((VL_ULL(6) == vlTOPp->our__DOT__state)) {
				vlTOPp->our__DOT__r_finish_write = 0U;
				if ((VL_ULL(1) == vlTOPp->write_ready)) {
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
					    [(1U & 
					      ((IData)(1U) 
					       + (3U 
						  & (IData)(vlTOPp->our__DOT__write_cnt))))];
					__Vdly__our__DOT__state = VL_ULL(6);
				    } else {
					vlTOPp->our__DOT__r_finish_write = 0U;
					vlTOPp->our__DOT__r_write_enable = 0U;
					__Vdly__our__DOT__state = VL_ULL(8);
					vlTOPp->our__DOT__r_done = 1U;
				    }
				}
			    } else {
				if ((VL_ULL(8) == vlTOPp->our__DOT__state)) {
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
				    __Vdly__our__DOT__r_next = 0U;
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at roundAndPackFloat64.v:186
    if ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
		>> 1U) & (((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_8_reg_597)) 
			   | ((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601)) 
			      & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_1_reg_605)))) 
			  | ((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601)) 
			     & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_6_reg_609))))))) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_reg_141 
	    = vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_50_i6_fu_557_p2;
    } else {
	if ((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	      & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	     & (((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
		 & VL_LTS_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		| (((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
		    & (0x7fdU == (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		   & (IData)((vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
			      >> 0x3fU)))))) {
	    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_reg_141 
		= ((VL_ULL(0x7ff0000000000000) | ((QData)((IData)(vlTOPp->our__DOT__div__DOT__zSign_reg_1275)) 
						  << 0x3fU)) 
		   - (QData)((IData)((0U == (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_fu_236_p3)))));
	}
    }
    // ALWAYS at float64_div_udiv_bkb.v:61
    if (vlTOPp->reset) {
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U] = 0U;
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U] = 0U;
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U] = 0U;
    } else {
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U] 
	    = ((0xfffffffeU & ((IData)((((QData)((IData)(
							 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U])) 
					 << 0x20U) 
					| (QData)((IData)(
							  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])))) 
			       << 1U)) | (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__start0));
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U] 
	    = ((1U & ((IData)((((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])))) 
		      >> 0x1fU)) | (0xfffffffeU & ((IData)(
							   ((((QData)((IData)(
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U])) 
							      << 0x20U) 
							     | (QData)((IData)(
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U]))) 
							    >> 0x20U)) 
						   << 1U)));
	__Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U] 
	    = (1U & ((IData)(((((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U]))) 
			      >> 0x20U)) >> 0x1fU));
    }
    // ALWAYS at estimateDiv128To64.v:392
    if ((1U & ((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] 
		>> 8U) & (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
				  >> 0x3fU))))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z3_reg_70 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_fu_252_p2;
    } else {
	if ((0x80U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) {
	    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z3_reg_70 
		= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40;
	}
    }
    // ALWAYS at float64_div_udiv_bkb.v:49
    if (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__start0) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__dividend0;
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__divisor0;
    }
    // ALWAYS at estimateDiv128To64.v:368
    if ((1U & ((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] 
		>> 8U) & (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
				  >> 0x3fU))))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z1_fu_258_p2;
    } else {
	if ((0x80U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) {
	    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52 
		= VL_NEGATE_Q((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__zMiddleA_reg_380 
			       << VL_ULL(0x20)));
	}
    }
    // ALWAYS at estimateDiv128To64.v:384
    if ((1U & (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] 
		 >> 8U) & (~ (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
				      >> 0x3fU)))) 
	       & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2))))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_67_reg_81 = VL_ULL(0xffffffff);
    } else {
	if ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
	       >> 0xbU) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340)) 
	     & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_reg_433))) {
	    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_67_reg_81 
		= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_315_p2;
	}
    }
    // ALWAYS at roundAndPackFloat64.v:194
    if (((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	  & (0x7fcU >= (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
	 | (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	    & (((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
		  & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		 & (0x7fdU != (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		& (~ ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
		      >> 0xcU))) | ((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
				      & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
				     & (~ ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
					   >> 0xcU))) 
				    & (~ (IData)((vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
						  >> 0x3fU)))))))) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundBits_1_reg_130 
	    = (0x3ffU & (IData)(vlTOPp->our__DOT__div__DOT__zSig_1_reg_224));
    } else {
	if ((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	      & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	     & (((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
		   & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		  & (0x7fdU != (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		 & ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
		    >> 0xcU)) | ((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
				   & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
				  & ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
				     >> 0xcU)) & (~ (IData)(
							    (vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
							     >> 0x3fU))))))) {
	    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundBits_1_reg_130 
		= (0x3ffU & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__z_2_fu_382_p3));
	}
    }
    // ALWAYS at roundAndPackFloat64.v:202
    if (((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	  & (0x7fcU >= (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
	 | (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	    & (((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
		  & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		 & (0x7fdU != (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		& (~ ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
		      >> 0xcU))) | ((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
				      & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
				     & (~ ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
					   >> 0xcU))) 
				    & (~ (IData)((vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
						  >> 0x3fU)))))))) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_14_reg_106 
	    = vlTOPp->our__DOT__div__DOT__zSig_1_reg_224;
    } else {
	if ((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	      & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	     & (((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
		   & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		  & (0x7fdU != (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
		 & ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
		    >> 0xcU)) | ((((0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
				   & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
				  & ((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415) 
				     >> 0xcU)) & (~ (IData)(
							    (vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
							     >> 0x3fU))))))) {
	    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_14_reg_106 
		= vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__z_2_fu_382_p3;
	}
    }
    vlTOPp->our__DOT__timer = __Vdly__our__DOT__timer;
    vlTOPp->our__DOT__state = __Vdly__our__DOT__state;
    vlTOPp->our__DOT__read_cnt = __Vdly__our__DOT__read_cnt;
    vlTOPp->our__DOT__write_cnt = __Vdly__our__DOT__write_cnt;
    // ALWAYSPOST at our.v:190
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
    // ALWAYS at float64_div_udiv_bkb.v:140
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__start0 
	= (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
	     & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start)) 
	    & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)) 
	   & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2));
    // ALWAYS at float64_div_udiv_bkb.v:138
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__dividend0 
	= vlTOPp->our__DOT__div__DOT__aSig_reg_1409;
    // ALWAYS at float64_div_udiv_bkb.v:139
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__divisor0 
	= (IData)((vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
		   >> 0x20U));
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
    // ALWAYS at float64_div.v:547
    if ((1U & ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
		 >> 0xcU) & (((((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
				  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
				 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
				& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
			       | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
				    & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
				   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
				  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357)))) 
			      | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
				   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
				  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
				 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293)))) 
			     | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
				  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
				 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357))) 
				& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293))))) 
	       & (~ ((((((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
			   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
			  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
			 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
			| ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
			     & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
			    & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
			   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357)))) 
		       | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
			    & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
			   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
			  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293)))) 
		      | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
			   & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
			  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357))) 
			 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293)))) 
		     & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_done))))))) {
	vlTOPp->our__DOT__div__DOT__p_0_reg_234 = vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_return;
    } else {
	if ((((VL_ULL(0) == vlTOPp->our__DOT__div__DOT__grp_fu_332_p0) 
	      & ((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
		 >> 1U)) & (0U == (IData)(vlTOPp->our__DOT__div__DOT__aExp_reg_1254)))) {
	    vlTOPp->our__DOT__div__DOT__p_0_reg_234 
		= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__zSign_reg_1275)) 
		   << 0x3fU);
	} else {
	    if ((((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
		      & (IData)(vlTOPp->our__DOT__r_next)) 
		     & (0x7ffU != (0x7ffU & (IData)(
						    (vlTOPp->a 
						     >> 0x34U))))) 
		    & (0x7ffU != (0x7ffU & (IData)(
						   (vlTOPp->b 
						    >> 0x34U))))) 
		   & (0U == (0x7ffU & (IData)((vlTOPp->b 
					       >> 0x34U))))) 
		  & (VL_ULL(0) == (VL_ULL(0xfffffffffffff) 
				   & vlTOPp->b))) & 
		 (VL_ULL(0) != vlTOPp->our__DOT__div__DOT__tmp_7_fu_569_p3))) {
		vlTOPp->our__DOT__div__DOT__p_0_reg_234 
		    = (VL_ULL(0x7ff0000000000000) | 
		       ((QData)((IData)(vlTOPp->our__DOT__div__DOT__zSign_fu_410_p2)) 
			<< 0x3fU));
	    } else {
		if ((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
			& (IData)(vlTOPp->our__DOT__r_next)) 
		       & (0x7ffU != (0x7ffU & (IData)(
						      (vlTOPp->a 
						       >> 0x34U))))) 
		      & (0x7ffU == (0x7ffU & (IData)(
						     (vlTOPp->b 
						      >> 0x34U))))) 
		     & (VL_ULL(0) == (VL_ULL(0xfffffffffffff) 
				      & vlTOPp->b)))) {
		    vlTOPp->our__DOT__div__DOT__p_0_reg_234 
			= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__zSign_fu_410_p2)) 
			   << 0x3fU);
		} else {
		    if ((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
			    & (IData)(vlTOPp->our__DOT__r_next)) 
			   & (0x7ffU == (0x7ffU & (IData)(
							  (vlTOPp->a 
							   >> 0x34U))))) 
			  & (VL_ULL(0) == vlTOPp->our__DOT__div__DOT__grp_fu_332_p0)) 
			 & (0x7ffU != (0x7ffU & (IData)(
							(vlTOPp->b 
							 >> 0x34U)))))) {
			vlTOPp->our__DOT__div__DOT__p_0_reg_234 
			    = (VL_ULL(0x7ff0000000000000) 
			       | ((QData)((IData)(vlTOPp->our__DOT__div__DOT__zSign_fu_410_p2)) 
				  << 0x3fU));
		    } else {
			if ((((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
				  & (IData)(vlTOPp->our__DOT__r_next)) 
				 & (0x7ffU == (0x7ffU 
					       & (IData)(
							 (vlTOPp->a 
							  >> 0x34U))))) 
				& (VL_ULL(0) == vlTOPp->our__DOT__div__DOT__grp_fu_332_p0)) 
			       & (0x7ffU == (0x7ffU 
					     & (IData)(
						       (vlTOPp->b 
							>> 0x34U))))) 
			      & (VL_ULL(0) == (VL_ULL(0xfffffffffffff) 
					       & vlTOPp->b))) 
			     | (((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
				     & (IData)(vlTOPp->our__DOT__r_next)) 
				    & (0x7ffU != (0x7ffU 
						  & (IData)(
							    (vlTOPp->a 
							     >> 0x34U))))) 
				   & (0x7ffU != (0x7ffU 
						 & (IData)(
							   (vlTOPp->b 
							    >> 0x34U))))) 
				  & (0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->b 
						       >> 0x34U))))) 
				 & (VL_ULL(0) == (VL_ULL(0xfffffffffffff) 
						  & vlTOPp->b))) 
				& (VL_ULL(0) == vlTOPp->our__DOT__div__DOT__tmp_7_fu_569_p3)))) {
			    vlTOPp->our__DOT__div__DOT__p_0_reg_234 = VL_ULL(0x7fffffffffffffff);
			} else {
			    if ((((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
				      & (IData)(vlTOPp->our__DOT__r_next)) 
				     & (0x7ffU != (0x7ffU 
						   & (IData)(
							     (vlTOPp->a 
							      >> 0x34U))))) 
				    & (0x7ffU == (0x7ffU 
						  & (IData)(
							    (vlTOPp->b 
							     >> 0x34U))))) 
				   & (VL_ULL(0) != 
				      (VL_ULL(0xfffffffffffff) 
				       & vlTOPp->b))) 
				  | ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
				       & (IData)(vlTOPp->our__DOT__r_next)) 
				      & (0x7ffU == 
					 (0x7ffU & (IData)(
							   (vlTOPp->a 
							    >> 0x34U))))) 
				     & (VL_ULL(0) != vlTOPp->our__DOT__div__DOT__grp_fu_332_p0))) 
				 | ((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
					& (IData)(vlTOPp->our__DOT__r_next)) 
				       & (0x7ffU == 
					  (0x7ffU & (IData)(
							    (vlTOPp->a 
							     >> 0x34U))))) 
				      & (VL_ULL(0) 
					 == vlTOPp->our__DOT__div__DOT__grp_fu_332_p0)) 
				     & (0x7ffU == (0x7ffU 
						   & (IData)(
							     (vlTOPp->b 
							      >> 0x34U))))) 
				    & (VL_ULL(0) != 
				       (VL_ULL(0xfffffffffffff) 
					& vlTOPp->b))))) {
				vlTOPp->our__DOT__div__DOT__p_0_reg_234 
				    = ((IData)(vlTOPp->our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_33_fu_144_p2)
				        ? ((IData)(vlTOPp->our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_32_fu_126_p2)
					    ? (VL_ULL(0x8000000000000) 
					       | vlTOPp->b)
					    : (VL_ULL(0x8000000000000) 
					       | vlTOPp->a))
				        : ((VL_ULL(0xffe0000000000000) 
					    < (vlTOPp->b 
					       << VL_ULL(1)))
					    ? (VL_ULL(0x8000000000000) 
					       | vlTOPp->b)
					    : (VL_ULL(0x8000000000000) 
					       | vlTOPp->a)));
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at roundAndPackFloat64.v:238
    if ((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	  & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	 & (0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)))) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601 
	    = VL_LTS_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415));
    }
    // ALWAYS at roundAndPackFloat64.v:226
    if (((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	  & (0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
	 & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)))) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_1_reg_605 
	    = (0x7fdU == (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415));
    }
    // ALWAYS at roundAndPackFloat64.v:232
    if ((((((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
	   & (0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
	  & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))) 
	 & (0x7fdU == (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)))) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_6_reg_609 
	    = (1U & (IData)((vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
			     >> 0x3fU)));
    }
    // ALWAYS at roundAndPackFloat64.v:218
    if (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start))) {
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_reg_586 
	    = vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_fu_236_p3;
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_8_reg_597 
	    = (0x7fcU < (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415));
	vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_reg_581 
	    = (0U == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode);
    }
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_fu_252_p2 
	= (VL_ULL(0xffffffff00000000) + vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z3_reg_70);
    // ALWAYS at float64_div_udiv_bkb.v:138
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__dividend0 
	= vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_1_fu_302_p3;
    // ALWAYS at float64_div_udiv_bkb.v:139
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__divisor0 
	= (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_reg_344);
    // ALWAYS at float64_div_udiv_bkb.v:140
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__start0 
	= (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] 
	     >> 8U) & (~ (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
				  >> 0x3fU)))) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z1_fu_258_p2 
	= (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b1_reg_405 
	   + vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52);
    // ALWAYS at float64_div_udiv_bkb.v:149
    if ((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U])) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_315_p2 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp;
    }
    // ALWAYS at estimateDiv128To64.v:467
    if ((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
	 & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2;
    }
    // ALWAYS at estimateDiv128To64.v:461
    if ((1U & ((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] 
		>> 8U) & (~ (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
				     >> 0x3fU)))))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_reg_433 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2;
    }
    // ALWAYS at float64_div.v:573
    if (((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	   >> 4U) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_done)) 
	 & (3U <= (0x1ffU & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return))))) {
	vlTOPp->our__DOT__div__DOT__zSig_1_reg_224 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return;
    } else {
	if ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
		    >> 0xaU) & (~ (IData)((vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206 
					   >> 0x3fU)))))) {
	    vlTOPp->our__DOT__div__DOT__zSig_1_reg_224 
		= ((VL_ULL(0xfffffffffffffffe) & vlTOPp->our__DOT__div__DOT__zSig1_reg_215) 
		   | (QData)((IData)((1U & ((IData)(vlTOPp->our__DOT__div__DOT__zSig1_reg_215) 
					    | (VL_ULL(0) 
					       != vlTOPp->our__DOT__div__DOT__a1_assign_reg_197))))));
	}
    }
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U] 
	= __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U] 
	= __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U] 
	= __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U];
    // ALWAYS at float64_div.v:625
    if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	  & (IData)(vlTOPp->our__DOT__r_next)) & (0x7ffU 
						  != 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->a 
							      >> 0x34U)))))) {
	vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285 
	    = (0x7ffU == (0x7ffU & (IData)((vlTOPp->b 
					    >> 0x34U))));
    }
    // ALWAYS at float64_div.v:637
    if ((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->our__DOT__r_next)) & 
	   (0x7ffU != (0x7ffU & (IData)((vlTOPp->a 
					 >> 0x34U))))) 
	  & (0x7ffU != (0x7ffU & (IData)((vlTOPp->b 
					  >> 0x34U))))) 
	 & (0U == (0x7ffU & (IData)((vlTOPp->b >> 0x34U)))))) {
	vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293 
	    = (VL_ULL(0) == (VL_ULL(0xfffffffffffff) 
			     & vlTOPp->b));
    }
    // ALWAYS at float64_div.v:643
    if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	  >> 1U) & (0U == (IData)(vlTOPp->our__DOT__div__DOT__aExp_reg_1254)))) {
	vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357 
	    = (VL_ULL(0) == vlTOPp->our__DOT__div__DOT__grp_fu_332_p0);
    }
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zSig_assign_2_fu_516_p2 
	= (VL_ULL(0x3fffffffffffff) & (((vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_14_reg_106 
					 + (QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_reg_586))) 
					>> 0xaU) & 
				       VL_EXTENDS_QI(54,32, 
						     (~ 
						      ((0x200U 
							== (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundBits_1_reg_130)) 
						       & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_reg_581))))));
    // ALWAYS at float64_div.v:475
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start = 0U;
    } else {
	if ((0x800U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start = 1U;
	} else {
	    if ((2U & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm))) {
		vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start = 0U;
	    }
	}
    }
    // ALWAYS at float64_div_udiv_bkb.v:82
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp 
	= ((VL_ULL(0xfffffffffffffffe) & (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
					  << 1U)) | (QData)((IData)(
								    (1U 
								     & (~ 
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[2U])))));
    // ALWAYS at estimateDiv128To64.v:360
    if (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] 
	  >> 8U) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_91_fu_244_p3))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_2_fu_282_p2;
    } else {
	if ((0x80U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) {
	    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
		= ((vlTOPp->our__DOT__div__DOT__aSig_reg_1409 
		    - (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z0_reg_385 
		       + (QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_58_i_reg_390)))) 
		   + ((VL_ULL(0) != (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__zMiddleA_reg_380 
				     << VL_ULL(0x20)))
		       ? VL_ULL(0xffffffffffffffff)
		       : VL_ULL(0)));
	}
    }
    // ALWAYS at float64_div.v:565
    if ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
		>> 0xaU) & (IData)((vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206 
				    >> 0x3fU))))) {
	vlTOPp->our__DOT__div__DOT__zSig1_reg_215 = vlTOPp->our__DOT__div__DOT__zSig_fu_1175_p2;
    } else {
	if ((0x200U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__div__DOT__zSig1_reg_215 
		= vlTOPp->our__DOT__div__DOT__zSig_3_reg_1420;
	}
    }
    // ALWAYS at float64_div.v:495
    if ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
		>> 0xaU) & (IData)((vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206 
				    >> 0x3fU))))) {
	vlTOPp->our__DOT__div__DOT__a1_assign_reg_197 
	    = vlTOPp->our__DOT__div__DOT__z1_4_fu_1181_p2;
    } else {
	if ((0x200U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__div__DOT__a1_assign_reg_197 
		= VL_NEGATE_Q(vlTOPp->our__DOT__div__DOT__z1_3_reg_1486);
	}
    }
    // ALWAYS at roundAndPackFloat64.v:168
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->reset) ? 1U : (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_NS_fsm));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
	= ((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0
	    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_91_fu_244_p3 
	= (1U & (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
			 >> 0x3fU)));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_1_fu_302_p3 
	= (((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61)) 
	    << 0x20U) | (QData)((IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52 
					 >> 0x20U))));
    // ALWAYS at estimateDiv128To64.v:453
    if ((0x40U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_58_i_reg_390 
	    = (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 
		       >> 0x20U));
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z0_reg_385 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__zMiddleA_reg_380 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0;
    }
    vlTOPp->our__DOT__div__DOT__zSig_fu_1175_p2 = (VL_ULL(0xffffffffffffffff) 
						   + vlTOPp->our__DOT__div__DOT__zSig1_reg_215);
    // ALWAYS at float64_div.v:487
    if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	  >> 0xaU) & (IData)(vlTOPp->our__DOT__div__DOT__tmp_85_fu_1167_p3))) {
	vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206 
	    = vlTOPp->our__DOT__div__DOT__rem0_1_fu_1196_p2;
    } else {
	if ((0x200U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206 
		= ((vlTOPp->our__DOT__div__DOT__aSig_reg_1409 
		    - ((VL_ULL(0x3ffffffff) & ((((QData)((IData)(vlTOPp->our__DOT__div__DOT__tmp_55_i_reg_1476)) 
						 << 0x20U) 
						| (QData)((IData)(vlTOPp->our__DOT__div__DOT__tmp_66_reg_1481))) 
					       + (QData)((IData)(vlTOPp->our__DOT__div__DOT__tmp_60_i_reg_1492)))) 
		       + vlTOPp->our__DOT__div__DOT__z0_reg_1471)) 
		   + ((VL_ULL(0) != vlTOPp->our__DOT__div__DOT__z1_3_reg_1486)
		       ? VL_ULL(0xffffffffffffffff)
		       : VL_ULL(0)));
	}
    }
    // ALWAYS at float64_div_mul_3cud.v:33
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0)));
    // ALWAYS at float64_div_mul_3cud.v:33
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0)));
    vlTOPp->our__DOT__div__DOT__tmp_85_fu_1167_p3 = 
	(1U & (IData)((vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206 
		       >> 0x3fU)));
    // ALWAYS at float64_div.v:1152
    vlTOPp->our__DOT__div__DOT__aSig_reg_1409 = (VL_ULL(0xfffffffffffffe00) 
						 & vlTOPp->our__DOT__div__DOT__aSig_reg_1409);
    // ALWAYS at float64_div.v:649
    if ((0x100U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__div__DOT__tmp_55_i_reg_1476 
	    = (vlTOPp->our__DOT__div__DOT__zMiddleA_1_fu_1074_p2 
	       < vlTOPp->our__DOT__div__DOT__zMiddleB_reg_1465);
	vlTOPp->our__DOT__div__DOT__tmp_60_i_reg_1492 
	    = (vlTOPp->our__DOT__div__DOT__z1_3_fu_1099_p2 
	       < (vlTOPp->our__DOT__div__DOT__zMiddleA_1_fu_1074_p2 
		  << VL_ULL(0x20)));
	vlTOPp->our__DOT__div__DOT__tmp_66_reg_1481 
	    = (IData)((vlTOPp->our__DOT__div__DOT__zMiddleA_1_fu_1074_p2 
		       >> 0x20U));
	vlTOPp->our__DOT__div__DOT__z1_3_reg_1486 = vlTOPp->our__DOT__div__DOT__z1_3_fu_1099_p2;
    }
    // ALWAYS at float64_div_mul_3cud.v:32
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 
	= (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
		   >> 0x20U));
    // ALWAYS at float64_div_mul_3cud.v:31
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 
	= (IData)(vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402);
    // ALWAYS at float64_div_mul_3cud.v:32
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 
	= (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
		   >> 0x20U));
    // ALWAYS at float64_div_mul_3cud.v:31
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 
	= (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_reg_344);
    // ALWAYS at float64_div.v:658
    if ((0x80U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__div__DOT__z0_reg_1471 = vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__div__DOT__z1_reg_1455 = vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__div__DOT__zMiddleA_reg_1460 
	    = vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0;
	vlTOPp->our__DOT__div__DOT__zMiddleB_reg_1465 
	    = vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0;
    }
    // ALWAYS at estimateDiv128To64.v:1078
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	= (VL_ULL(0xffffffff00000000) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
    // ALWAYS at estimateDiv128To64.v:400
    if ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
	   & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start)) 
	  & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)) 
	 & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2)))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x100000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x200000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x400000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x800000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x1000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x2000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x4000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x8000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x10000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x20000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x40000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x80000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x100000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x200000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x400000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x800000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x1000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x2000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x4000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x8000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x10000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x20000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x40000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x80000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x100000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x200000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x400000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x800000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x1000000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x2000000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x4000000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
	    = (VL_ULL(0x8000000000000000) | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40);
    } else {
	if ((8U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) {
	    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 
		= ((VL_ULL(0xffffffff) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40) 
		   | ((QData)((IData)((IData)((VL_ULL(0xffffffff) 
					       & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_141_p2)))) 
		      << 0x20U));
	}
    }
    // ALWAYS at estimateDiv128To64.v:1074
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_reg_344 
	= (VL_ULL(0xffffffff) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_reg_344);
    // ALWAYS at estimateDiv128To64.v:439
    if (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
	  & (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start)) 
	 & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2))) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_cast_reg_351 
	    = ((VL_ULL(0x100000000) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_cast_reg_351) 
	       | (IData)((IData)((vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
				  >> 0x20U))));
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_reg_344 
	    = ((VL_ULL(0xffffffff00000000) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_reg_344) 
	       | (IData)((IData)((vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
				  >> 0x20U))));
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_s_reg_356 
	    = ((VL_ULL(0xffffffff) & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_s_reg_356) 
	       | ((QData)((IData)((IData)((vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
					   >> 0x20U)))) 
		  << 0x20U));
    }
    vlTOPp->our__DOT__div__DOT__zMiddleA_1_fu_1074_p2 
	= (vlTOPp->our__DOT__div__DOT__zMiddleB_reg_1465 
	   + vlTOPp->our__DOT__div__DOT__zMiddleA_reg_1460);
    // ALWAYS at float64_div_mul_3cud.v:33
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0)));
    // ALWAYS at float64_div_mul_3cud.v:33
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0)));
    // ALWAYS at float64_div_mul_3cud.v:33
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0)));
    // ALWAYS at float64_div_mul_3cud.v:33
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0)));
    // ALWAYS at float64_div_udiv_bkb.v:149
    if ((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U])) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_141_p2 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp;
    }
    // ALWAYS at float64_div.v:463
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start = 0U;
    } else {
	if ((8U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start = 1U;
	} else {
	    if ((0x800U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) {
		vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start = 0U;
	    }
	}
    }
    // ALWAYS at float64_div_mul_3cud.v:32
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 
	= (IData)(vlTOPp->our__DOT__div__DOT__zSig_3_reg_1420);
    // ALWAYS at float64_div_mul_3cud.v:31
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 
	= (vlTOPp->our__DOT__div__DOT__tmp_79_reg_1397 
	   << 0xbU);
    // ALWAYS at float64_div_mul_3cud.v:32
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 
	= (IData)((vlTOPp->our__DOT__div__DOT__zSig_3_reg_1420 
		   >> 0x20U));
    // ALWAYS at float64_div_mul_3cud.v:31
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 
	= (vlTOPp->our__DOT__div__DOT__tmp_79_reg_1397 
	   << 0xbU);
    // ALWAYS at float64_div_mul_3cud.v:32
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 
	= (IData)((vlTOPp->our__DOT__div__DOT__zSig_3_reg_1420 
		   >> 0x20U));
    // ALWAYS at float64_div_mul_3cud.v:31
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 
	= (IData)((vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
		   >> 0x20U));
    // ALWAYS at float64_div_mul_3cud.v:31
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 
	= (IData)(vlTOPp->our__DOT__div__DOT__zSig_3_reg_1420);
    // ALWAYS at float64_div_mul_3cud.v:32
    vlTOPp->our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 
	= (IData)((vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
		   >> 0x20U));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U] 
	= __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U] 
	= __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[1U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U] 
	= __Vdly__our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[2U];
    // ALWAYS at float64_div_udiv_bkb.v:82
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp 
	= ((VL_ULL(0xfffffffffffffffe) & (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
					  << 1U)) | (QData)((IData)(
								    (1U 
								     & (~ 
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[2U])))));
    // ALWAYS at estimateDiv128To64.v:342
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] = 1U;
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U] = 0U;
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] = 0U;
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U] = 0U;
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] = 0U;
    } else {
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U];
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U] 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U];
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U];
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U] 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U];
	vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U];
    }
    // ALWAYS at float64_div.v:667
    if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	  >> 4U) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_done))) {
	vlTOPp->our__DOT__div__DOT__zSig_3_reg_1420 
	    = vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return;
    }
    // ALWAYS at float64_div.v:1150
    vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 = (VL_ULL(0xfffffffffffff800) 
						   & vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402);
    vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 = (VL_ULL(0x8000000000000000) 
						   | vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402);
    // ALWAYS at float64_div.v:593
    if ((8U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__div__DOT__aSig_reg_1409 = 
	    ((VL_ULL(0x1ff) & vlTOPp->our__DOT__div__DOT__aSig_reg_1409) 
	     | (VL_ULL(0xfffffffffffffe00) & ((IData)(vlTOPp->our__DOT__div__DOT__tmp_55_fu_953_p2)
					       ? (VL_ULL(0x4000000000000000) 
						  | (vlTOPp->our__DOT__div__DOT__aSig2_reg_179 
						     << VL_ULL(0xa)))
					       : (VL_ULL(0x7fffffffffffffff) 
						  & (VL_ULL(0x2000000000000000) 
						     | (VL_ULL(0x7ffffffffffffe00) 
							& (vlTOPp->our__DOT__div__DOT__aSig2_reg_179 
							   << 9U)))))));
	vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
	    = ((VL_ULL(0x80000000000007ff) & vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402) 
	       | (VL_ULL(0x7ffffffffffff800) & (VL_ULL(0x8000000000000000) 
						| (VL_ULL(0xfffffffffffff800) 
						   & (vlTOPp->our__DOT__div__DOT__bSig2_reg_160 
						      << 0xbU)))));
	vlTOPp->our__DOT__div__DOT__tmp_79_reg_1397 
	    = (0x1fffffU & (IData)(vlTOPp->our__DOT__div__DOT__bSig2_reg_160));
	vlTOPp->our__DOT__div__DOT__zExp_reg_1415 = 
	    (0x1fffU & (((IData)(vlTOPp->our__DOT__div__DOT__tmp_55_fu_953_p2)
			  ? 0x3fdU : 0x3feU) + (VL_EXTENDS_II(13,12, (IData)(vlTOPp->our__DOT__div__DOT__aExp2_reg_188)) 
						- (IData)(vlTOPp->our__DOT__div__DOT__bExp2_cast_reg_1348))));
    }
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
	= ((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0
	    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp);
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_5_i_fu_318_p2 
	= (vlTOPp->our__DOT__div__DOT__zSig_1_reg_224 
	   >> (QData)((IData)((0x1fffU & VL_NEGATE_I((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))))));
    vlTOPp->our__DOT__div__DOT__z1_4_fu_1181_p2 = (vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
						   + vlTOPp->our__DOT__div__DOT__a1_assign_reg_197);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2 
	= (((QData)((IData)((vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
			     >> 0x20U))) << 0x20U) 
	   > vlTOPp->our__DOT__div__DOT__aSig_reg_1409);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2 
	= (vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
	   > vlTOPp->our__DOT__div__DOT__aSig_reg_1409);
    // ALWAYS at float64_div.v:527
    if ((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->our__DOT__r_next)) & 
	   (0x7ffU != (0x7ffU & (IData)((vlTOPp->a 
					 >> 0x34U))))) 
	  & (0x7ffU != (0x7ffU & (IData)((vlTOPp->b 
					  >> 0x34U))))) 
	 & (0U != (0x7ffU & (IData)((vlTOPp->b >> 0x34U)))))) {
	vlTOPp->our__DOT__div__DOT__bSig2_reg_160 = 
	    (VL_ULL(0xfffffffffffff) & vlTOPp->b);
    } else {
	if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	      >> 1U) & (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289))) {
	    vlTOPp->our__DOT__div__DOT__bSig2_reg_160 
		= (vlTOPp->our__DOT__div__DOT__bSig_2_cast6_reg_1264 
		   << (QData)((IData)(VL_EXTENDS_II(32,7, 
						    (0x7fU 
						     & ((IData)(0x75U) 
							+ (IData)(vlTOPp->our__DOT__div__DOT__shiftCount_1_fu_667_p2)))))));
	}
    }
    // ALWAYS at float64_div.v:503
    if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	  >> 1U) & (0U != (IData)(vlTOPp->our__DOT__div__DOT__aExp_reg_1254)))) {
	vlTOPp->our__DOT__div__DOT__aExp2_reg_188 = vlTOPp->our__DOT__div__DOT__aExp_cast_reg_1259;
    } else {
	if ((4U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__div__DOT__aExp2_reg_188 
		= (0xfffU & VL_EXTENDS_II(12,7, (0x7fU 
						 & ((IData)(0xcU) 
						    - (IData)(vlTOPp->our__DOT__div__DOT__shiftCount_4_fu_874_p2)))));
	}
    }
    // ALWAYS at float64_div.v:511
    if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	  >> 1U) & (0U != (IData)(vlTOPp->our__DOT__div__DOT__aExp_reg_1254)))) {
	vlTOPp->our__DOT__div__DOT__aSig2_reg_179 = vlTOPp->our__DOT__div__DOT__aSig_3_cast8_reg_1248;
    } else {
	if ((4U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__div__DOT__aSig2_reg_179 
		= (vlTOPp->our__DOT__div__DOT__aSig_3_cast8_reg_1248 
		   << (QData)((IData)(VL_EXTENDS_II(32,7, 
						    (0x7fU 
						     & ((IData)(0x75U) 
							+ (IData)(vlTOPp->our__DOT__div__DOT__shiftCount_4_fu_874_p2)))))));
	}
    }
    // ALWAYS at float64_div.v:602
    if ((2U & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__div__DOT__bExp2_cast_reg_1348 
	    = (0x1fffU & VL_EXTENDS_II(13,12, (0xfffU 
					       & ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
						    >> 1U) 
						   & (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289))
						   ? 
						  VL_EXTENDS_II(12,7, 
								(0x7fU 
								 & ((IData)(0xcU) 
								    - (IData)(vlTOPp->our__DOT__div__DOT__shiftCount_1_fu_667_p2))))
						   : (IData)(vlTOPp->our__DOT__div__DOT__bExp2_reg_170)))));
	vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353 
	    = (0U == (IData)(vlTOPp->our__DOT__div__DOT__aExp_reg_1254));
    }
    vlTOPp->our__DOT__div__DOT__shiftCount_4_fu_874_p2 
	= (0x7fU & ((IData)(vlTOPp->our__DOT__div__DOT__countLeadingZerosHig_q0) 
		    + (((IData)(vlTOPp->our__DOT__div__DOT__icmp2_reg_1361) 
			<< 5U) | ((IData)(vlTOPp->our__DOT__div__DOT__icmp4_reg_1372)
				   ? ((IData)(vlTOPp->our__DOT__div__DOT__icmp3_reg_1366)
				       ? 0x18U : 8U)
				   : ((IData)(vlTOPp->our__DOT__div__DOT__icmp3_reg_1366)
				       ? 0x10U : 0U)))));
    // ALWAYS at float64_div.v:1149
    vlTOPp->our__DOT__div__DOT__bSig_2_cast6_reg_1264 
	= (VL_ULL(0xfffffffffffff) & vlTOPp->our__DOT__div__DOT__bSig_2_cast6_reg_1264);
    // ALWAYS at float64_div.v:1148
    vlTOPp->our__DOT__div__DOT__aExp_cast_reg_1259 
	= (0x7ffU & (IData)(vlTOPp->our__DOT__div__DOT__aExp_cast_reg_1259));
    vlTOPp->our__DOT__div__DOT__tmp_55_fu_953_p2 = 
	((VL_ULL(0x8000000000000000) | (vlTOPp->our__DOT__div__DOT__bSig2_reg_160 
					<< VL_ULL(0xb))) 
	 > (VL_ULL(0x8000000000000000) | (vlTOPp->our__DOT__div__DOT__aSig2_reg_179 
					  << 0xbU)));
    // ALWAYS at float64_div.v:1147
    vlTOPp->our__DOT__div__DOT__aSig_3_cast8_reg_1248 
	= (VL_ULL(0xfffffffffffff) & vlTOPp->our__DOT__div__DOT__aSig_3_cast8_reg_1248);
    // ALWAYS at float64_div.v:581
    if (((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->our__DOT__r_next))) {
	vlTOPp->our__DOT__div__DOT__aExp_cast_reg_1259 
	    = ((0x800U & (IData)(vlTOPp->our__DOT__div__DOT__aExp_cast_reg_1259)) 
	       | (0x7ffU & (IData)((vlTOPp->a >> 0x34U))));
	vlTOPp->our__DOT__div__DOT__zSign_reg_1275 
	    = vlTOPp->our__DOT__div__DOT__zSign_fu_410_p2;
	vlTOPp->our__DOT__div__DOT__aExp_reg_1254 = 
	    (0x7ffU & (IData)((vlTOPp->a >> 0x34U)));
	vlTOPp->our__DOT__div__DOT__aSig_3_cast8_reg_1248 
	    = ((VL_ULL(0xfff0000000000000) & vlTOPp->our__DOT__div__DOT__aSig_3_cast8_reg_1248) 
	       | (VL_ULL(0xfffffffffffff) & vlTOPp->a));
	vlTOPp->our__DOT__div__DOT__aSig_3_reg_1243 
	    = (VL_ULL(0xfffffffffffff) & vlTOPp->a);
	vlTOPp->our__DOT__div__DOT__bSig_2_cast6_reg_1264 
	    = ((VL_ULL(0xfff0000000000000) & vlTOPp->our__DOT__div__DOT__bSig_2_cast6_reg_1264) 
	       | (VL_ULL(0xfffffffffffff) & vlTOPp->b));
	vlTOPp->our__DOT__div__DOT__tmp_reg_1281 = 
	    (0x7ffU == (0x7ffU & (IData)((vlTOPp->a 
					  >> 0x34U))));
    }
    // ALWAYS at float64_div.v:519
    if ((((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->our__DOT__r_next)) & 
	   (0x7ffU != (0x7ffU & (IData)((vlTOPp->a 
					 >> 0x34U))))) 
	  & (0x7ffU != (0x7ffU & (IData)((vlTOPp->b 
					  >> 0x34U))))) 
	 & (0U != (0x7ffU & (IData)((vlTOPp->b >> 0x34U)))))) {
	vlTOPp->our__DOT__div__DOT__bExp2_reg_170 = 
	    (0x7ffU & (IData)((vlTOPp->b >> 0x34U)));
    } else {
	if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	      >> 1U) & (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289))) {
	    vlTOPp->our__DOT__div__DOT__bExp2_reg_170 
		= (0xfffU & VL_EXTENDS_II(12,7, (0x7fU 
						 & ((IData)(0xcU) 
						    - (IData)(vlTOPp->our__DOT__div__DOT__shiftCount_1_fu_667_p2)))));
	}
    }
    vlTOPp->our__DOT__div__DOT__shiftCount_1_fu_667_p2 
	= (0x7fU & ((IData)(vlTOPp->our__DOT__div__DOT__countLeadingZerosHig_q0) 
		    + (((IData)(vlTOPp->our__DOT__div__DOT__icmp_reg_1297) 
			<< 5U) | ((IData)(vlTOPp->our__DOT__div__DOT__icmp1_reg_1308)
				   ? ((IData)(vlTOPp->our__DOT__div__DOT__icmp7_reg_1302)
				       ? 0x18U : 8U)
				   : ((IData)(vlTOPp->our__DOT__div__DOT__icmp7_reg_1302)
				       ? 0x10U : 0U)))));
    // ALWAYS at float64_div.v:631
    if (((((IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->our__DOT__r_next)) & (0x7ffU 
						   != 
						   (0x7ffU 
						    & (IData)(
							      (vlTOPp->a 
							       >> 0x34U))))) 
	 & (0x7ffU != (0x7ffU & (IData)((vlTOPp->b 
					 >> 0x34U)))))) {
	vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289 
	    = (0U == (0x7ffU & (IData)((vlTOPp->b >> 0x34U))));
    }
    vlTOPp->our__DOT__r_next = __Vdly__our__DOT__r_next;
    // ALWAYS at float64_div.v:455
    vlTOPp->our__DOT__div__DOT__ap_CS_fsm = ((IData)(vlTOPp->reset)
					      ? 1U : (IData)(vlTOPp->our__DOT__div__DOT__ap_NS_fsm));
}

void Vour::_initial__TOP__2(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_initial__TOP__2\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign140[4];
    VL_SIGW(__Vtemp3,255,0,8);
    // Body
    // INITIAL at float64_div_countdEe.v:27
    __Vtemp3[0U] = 0x2e646174U;
    __Vtemp3[1U] = 0x5f726f6dU;
    __Vtemp3[2U] = 0x74644565U;
    __Vtemp3[3U] = 0x636f756eU;
    __Vtemp3[4U] = 0x6469765fU;
    __Vtemp3[5U] = 0x7436345fU;
    __Vtemp3[6U] = 0x666c6f61U;
    __Vtemp3[7U] = 0x2e2fU;
    VL_READMEM_W (true,4,256, 0,8, __Vtemp3, vlTOPp->our__DOT__div__DOT__countLeadingZerosHig_U__DOT__float64_div_countdEe_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at float64_div_udiv_bkb.v:107
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__start0 = 0U;
    // INITIAL at float64_div_udiv_bkb.v:107
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__start0 = 0U;
    // INITIAL at roundAndPackFloat64.v:162
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm = 1U;
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode = 0U;
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_return_preg = VL_ULL(0);
    // INITIAL at estimateDiv128To64.v:273
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] = 1U;
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U] = 0U;
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U] = 0U;
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U] = 0U;
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] = 0U;
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_return_preg = VL_ULL(0);
    // INITIAL at float64_div.v:339
    vlTOPp->our__DOT__div__DOT__ap_CS_fsm = 1U;
    vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start = 0U;
    vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start = 0U;
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__sel_tmp7_fu_216_p2 = 0U;
}

VL_INLINE_OPT void Vour::_combo__TOP__3(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_combo__TOP__3\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3 
	= ((0U == (0xfffffU & (IData)((vlTOPp->b >> 0x20U))))
	    ? (IData)(vlTOPp->b) : (0xfffffU & (IData)(
						       (vlTOPp->b 
							>> 0x20U))));
    vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3 
	= ((0U == (0xfffffU & (IData)((vlTOPp->a >> 0x20U))))
	    ? (IData)(vlTOPp->a) : (0xfffffU & (IData)(
						       (vlTOPp->a 
							>> 0x20U))));
    vlTOPp->our__DOT__div__DOT__tmp_7_fu_569_p3 = (
						   (VL_ULL(0xffffffffff800) 
						    & vlTOPp->a) 
						   | (QData)((IData)(
								     (0x7ffU 
								      & ((IData)(vlTOPp->a) 
									 | (IData)(
										(vlTOPp->a 
										>> 0x34U)))))));
    vlTOPp->our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_32_fu_126_p2 
	= ((VL_ULL(0x7ff0000000000000) == ((QData)((IData)(
							   (0xfffU 
							    & (IData)(
								      (vlTOPp->b 
								       >> 0x33U))))) 
					   << 0x33U)) 
	   & (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			    & vlTOPp->b)));
    vlTOPp->our__DOT__div__DOT__zSign_fu_410_p2 = (1U 
						   & ((IData)(
							      (vlTOPp->b 
							       >> 0x3fU)) 
						      ^ (IData)(
								(vlTOPp->a 
								 >> 0x3fU))));
    // ALWAYS at float64_div.v:723
    vlTOPp->our__DOT__div__DOT__grp_fu_332_p0 = (VL_ULL(0xfffffffffffff) 
						 & ((2U 
						     & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						     ? vlTOPp->our__DOT__div__DOT__aSig_3_reg_1243
						     : 
						    ((1U 
						      & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						      ? vlTOPp->a
						      : VL_ULL(0))));
}

void Vour::_settle__TOP__4(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__4\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3 
	= ((0U == (0xfffffU & (IData)((vlTOPp->b >> 0x20U))))
	    ? (IData)(vlTOPp->b) : (0xfffffU & (IData)(
						       (vlTOPp->b 
							>> 0x20U))));
    vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3 
	= ((0U == (0xfffffU & (IData)((vlTOPp->a >> 0x20U))))
	    ? (IData)(vlTOPp->a) : (0xfffffU & (IData)(
						       (vlTOPp->a 
							>> 0x20U))));
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
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_fu_252_p2 
	= (VL_ULL(0xffffffff00000000) + vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z3_reg_70);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z1_fu_258_p2 
	= (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b1_reg_405 
	   + vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52);
    vlTOPp->our__DOT__div__DOT__tmp_7_fu_569_p3 = (
						   (VL_ULL(0xffffffffff800) 
						    & vlTOPp->a) 
						   | (QData)((IData)(
								     (0x7ffU 
								      & ((IData)(vlTOPp->a) 
									 | (IData)(
										(vlTOPp->a 
										>> 0x34U)))))));
    vlTOPp->our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_32_fu_126_p2 
	= ((VL_ULL(0x7ff0000000000000) == ((QData)((IData)(
							   (0xfffU 
							    & (IData)(
								      (vlTOPp->b 
								       >> 0x33U))))) 
					   << 0x33U)) 
	   & (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			    & vlTOPp->b)));
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zSig_assign_2_fu_516_p2 
	= (VL_ULL(0x3fffffffffffff) & (((vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_14_reg_106 
					 + (QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_reg_586))) 
					>> 0xaU) & 
				       VL_EXTENDS_QI(54,32, 
						     (~ 
						      ((0x200U 
							== (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundBits_1_reg_130)) 
						       & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_reg_581))))));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
	= ((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0
	    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_91_fu_244_p3 
	= (1U & (IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
			 >> 0x3fU)));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_1_fu_302_p3 
	= (((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61)) 
	    << 0x20U) | (QData)((IData)((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52 
					 >> 0x20U))));
    vlTOPp->our__DOT__div__DOT__zSig_fu_1175_p2 = (VL_ULL(0xffffffffffffffff) 
						   + vlTOPp->our__DOT__div__DOT__zSig1_reg_215);
    vlTOPp->our__DOT__div__DOT__tmp_85_fu_1167_p3 = 
	(1U & (IData)((vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206 
		       >> 0x3fU)));
    vlTOPp->our__DOT__div__DOT__zMiddleA_1_fu_1074_p2 
	= (vlTOPp->our__DOT__div__DOT__zMiddleB_reg_1465 
	   + vlTOPp->our__DOT__div__DOT__zMiddleA_reg_1460);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
	= ((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0
	    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp);
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_5_i_fu_318_p2 
	= (vlTOPp->our__DOT__div__DOT__zSig_1_reg_224 
	   >> (QData)((IData)((0x1fffU & VL_NEGATE_I((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415))))));
    vlTOPp->our__DOT__div__DOT__z1_4_fu_1181_p2 = (vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
						   + vlTOPp->our__DOT__div__DOT__a1_assign_reg_197);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2 
	= (((QData)((IData)((vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
			     >> 0x20U))) << 0x20U) 
	   > vlTOPp->our__DOT__div__DOT__aSig_reg_1409);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2 
	= (vlTOPp->our__DOT__div__DOT__bSig_2_reg_1402 
	   > vlTOPp->our__DOT__div__DOT__aSig_reg_1409);
    vlTOPp->our__DOT__div__DOT__shiftCount_4_fu_874_p2 
	= (0x7fU & ((IData)(vlTOPp->our__DOT__div__DOT__countLeadingZerosHig_q0) 
		    + (((IData)(vlTOPp->our__DOT__div__DOT__icmp2_reg_1361) 
			<< 5U) | ((IData)(vlTOPp->our__DOT__div__DOT__icmp4_reg_1372)
				   ? ((IData)(vlTOPp->our__DOT__div__DOT__icmp3_reg_1366)
				       ? 0x18U : 8U)
				   : ((IData)(vlTOPp->our__DOT__div__DOT__icmp3_reg_1366)
				       ? 0x10U : 0U)))));
    vlTOPp->our__DOT__div__DOT__tmp_55_fu_953_p2 = 
	((VL_ULL(0x8000000000000000) | (vlTOPp->our__DOT__div__DOT__bSig2_reg_160 
					<< VL_ULL(0xb))) 
	 > (VL_ULL(0x8000000000000000) | (vlTOPp->our__DOT__div__DOT__aSig2_reg_179 
					  << 0xbU)));
    vlTOPp->our__DOT__div__DOT__zSign_fu_410_p2 = (1U 
						   & ((IData)(
							      (vlTOPp->b 
							       >> 0x3fU)) 
						      ^ (IData)(
								(vlTOPp->a 
								 >> 0x3fU))));
    vlTOPp->our__DOT__div__DOT__shiftCount_1_fu_667_p2 
	= (0x7fU & ((IData)(vlTOPp->our__DOT__div__DOT__countLeadingZerosHig_q0) 
		    + (((IData)(vlTOPp->our__DOT__div__DOT__icmp_reg_1297) 
			<< 5U) | ((IData)(vlTOPp->our__DOT__div__DOT__icmp1_reg_1308)
				   ? ((IData)(vlTOPp->our__DOT__div__DOT__icmp7_reg_1302)
				       ? 0x18U : 8U)
				   : ((IData)(vlTOPp->our__DOT__div__DOT__icmp7_reg_1302)
				       ? 0x10U : 0U)))));
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__sel_tmp7_fu_216_p2 
	= ((1U == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode) 
	   & (0U != vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_2_fu_321_p2 
	= (((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
	       >> 0xbU) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340)) 
	     & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_reg_433))
	     ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_315_p2
	     : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_67_reg_81) 
	   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z3_reg_70);
    // ALWAYS at roundAndPackFloat64.v:304
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_NS_fsm 
	= ((1U == (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm))
	    ? ((IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)
	        ? 2U : 1U) : ((2U == (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm))
			       ? 1U : 0U));
    // ALWAYS at roundAndPackFloat64.v:244
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
		  & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm)) 
		 | ((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
		    >> 1U)));
    // ALWAYS at estimateDiv128To64.v:473
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start)) 
		  & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
		 | (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
		    >> 0xbU)));
    // ALWAYS at float64_div.v:723
    vlTOPp->our__DOT__div__DOT__grp_fu_332_p0 = (VL_ULL(0xfffffffffffff) 
						 & ((2U 
						     & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						     ? vlTOPp->our__DOT__div__DOT__aSig_3_reg_1243
						     : 
						    ((1U 
						      & (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						      ? vlTOPp->a
						      : VL_ULL(0))));
    vlTOPp->our__DOT__div__DOT__p_a_i_i_i_fu_492_p3 
	= ((0U == (0xffffU & (vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3 
			      >> 0x10U))) ? (vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3 
					     << 0x10U)
	    : vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3);
    vlTOPp->our__DOT__div__DOT__p_a_i_i_i1_fu_774_p3 
	= ((0U == (0xffffU & (vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3 
			      >> 0x10U))) ? (vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3 
					     << 0x10U)
	    : vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_2_fu_282_p2 
	= (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
	   + (VL_ULL(0x1ffffffff) & ((QData)((IData)(
						     (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z1_fu_258_p2 
						      < vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52))) 
				     + vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_cast_reg_351)));
    vlTOPp->our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_33_fu_144_p2 
	= ((IData)(vlTOPp->our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_32_fu_126_p2) 
	   | ((VL_ULL(0x7ff0000000000000) == ((QData)((IData)(
							      (0xfffU 
							       & (IData)(
									 (vlTOPp->a 
									  >> 0x33U))))) 
					      << 0x33U)) 
	      & (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			       & vlTOPp->a))));
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_50_i6_fu_557_p2 
	= ((((QData)((IData)(vlTOPp->our__DOT__div__DOT__zSign_reg_1275)) 
	     << 0x3fU) | vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zSig_assign_2_fu_516_p2) 
	   + ((QData)((IData)((0xfffU & ((VL_ULL(0) 
					  == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zSig_assign_2_fu_516_p2)
					  ? 0U : (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zExp_assign_1_reg_117))))) 
	      << 0x34U));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp 
	= ((VL_ULL(0xfffffffffffffffe) & (((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])
					    ? VL_ULL(0)
					    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp) 
					  << 1U)) | (QData)((IData)(
								    (1U 
								     & (IData)(
									       (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
										>> 0x3fU))))));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2 
	= (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_s_reg_356 
	   > vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_1_fu_302_p3);
    vlTOPp->our__DOT__div__DOT__z1_3_fu_1099_p2 = (vlTOPp->our__DOT__div__DOT__z1_reg_1455 
						   + 
						   (vlTOPp->our__DOT__div__DOT__zMiddleA_1_fu_1074_p2 
						    << VL_ULL(0x20)));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp 
	= ((VL_ULL(0xfffffffffffffffe) & (((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])
					    ? VL_ULL(0)
					    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp) 
					  << 1U)) | (QData)((IData)(
								    (1U 
								     & (IData)(
									       (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
										>> 0x3fU))))));
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__z_2_fu_382_p3 
	= (VL_GTS_III(1,6,6, 1U, (0x3fU & (VL_NEGATE_I((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
					   >> 6U)))
	    ? ((VL_ULL(0xfffffffffffffffe) & vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_5_i_fu_318_p2) 
	       | (QData)((IData)((1U & ((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_5_i_fu_318_p2) 
					| (VL_ULL(0) 
					   != (vlTOPp->our__DOT__div__DOT__zSig_1_reg_224 
					       << (QData)((IData)(
								  (0x3fU 
								   & (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)))))))))))
	    : (QData)((IData)((VL_ULL(0) != vlTOPp->our__DOT__div__DOT__zSig_1_reg_224))));
    vlTOPp->our__DOT__div__DOT__rem0_1_fu_1196_p2 = 
	((QData)((IData)((vlTOPp->our__DOT__div__DOT__z1_4_fu_1181_p2 
			  < vlTOPp->our__DOT__div__DOT__a1_assign_reg_197))) 
	 + vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206);
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_fu_236_p3 
	= (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__sel_tmp7_fu_216_p2) 
	    | (0U == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode))
	    ? ((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__sel_tmp7_fu_216_p2)
	        ? 0U : 0x200U) : (((((0U == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode) 
				     | (1U == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode)) 
				    | (IData)(vlTOPp->our__DOT__div__DOT__zSign_reg_1275))
				    ? (2U != vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode)
				    : (3U != vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode))
				   ? 0x3ffU : 0U));
}

VL_INLINE_OPT void Vour::_sequent__TOP__5(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__5\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign236[4];
    VL_SIGW(__Vtemp5,95,0,3);
    //char	__VpadToAlign252[4];
    VL_SIGW(__Vtemp6,95,0,3);
    //char	__VpadToAlign268[4];
    VL_SIGW(__Vtemp7,95,0,3);
    //char	__VpadToAlign284[4];
    VL_SIGW(__Vtemp269,95,0,3);
    //char	__VpadToAlign300[4];
    VL_SIGW(__Vtemp270,95,0,3);
    //char	__VpadToAlign316[4];
    VL_SIGW(__Vtemp271,95,0,3);
    // Body
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_2_fu_321_p2 
	= (((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
	       >> 0xbU) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340)) 
	     & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_reg_433))
	     ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_315_p2
	     : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_67_reg_81) 
	   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z3_reg_70);
    // ALWAYS at roundAndPackFloat64.v:304
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_NS_fsm 
	= ((1U == (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm))
	    ? ((IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)
	        ? 2U : 1U) : ((2U == (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm))
			       ? 1U : 0U));
    // ALWAYS at roundAndPackFloat64.v:244
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start)) 
		  & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm)) 
		 | ((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
		    >> 1U)));
    // ALWAYS at estimateDiv128To64.v:473
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start)) 
		  & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
		 | (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
		    >> 0xbU)));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_2_fu_282_p2 
	= (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
	   + (VL_ULL(0x1ffffffff) & ((QData)((IData)(
						     (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z1_fu_258_p2 
						      < vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52))) 
				     + vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_cast_reg_351)));
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_50_i6_fu_557_p2 
	= ((((QData)((IData)(vlTOPp->our__DOT__div__DOT__zSign_reg_1275)) 
	     << 0x3fU) | vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zSig_assign_2_fu_516_p2) 
	   + ((QData)((IData)((0xfffU & ((VL_ULL(0) 
					  == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zSig_assign_2_fu_516_p2)
					  ? 0U : (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zExp_assign_1_reg_117))))) 
	      << 0x34U));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp 
	= ((VL_ULL(0xfffffffffffffffe) & (((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])
					    ? VL_ULL(0)
					    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp) 
					  << 1U)) | (QData)((IData)(
								    (1U 
								     & (IData)(
									       (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
										>> 0x3fU))))));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2 
	= (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_s_reg_356 
	   > vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_1_fu_302_p3);
    vlTOPp->our__DOT__div__DOT__z1_3_fu_1099_p2 = (vlTOPp->our__DOT__div__DOT__z1_reg_1455 
						   + 
						   (vlTOPp->our__DOT__div__DOT__zMiddleA_1_fu_1074_p2 
						    << VL_ULL(0x20)));
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp 
	= ((VL_ULL(0xfffffffffffffffe) & (((1U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage[0U])
					    ? VL_ULL(0)
					    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp) 
					  << 1U)) | (QData)((IData)(
								    (1U 
								     & (IData)(
									       (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux 
										>> 0x3fU))))));
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__z_2_fu_382_p3 
	= (VL_GTS_III(1,6,6, 1U, (0x3fU & (VL_NEGATE_I((IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)) 
					   >> 6U)))
	    ? ((VL_ULL(0xfffffffffffffffe) & vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_5_i_fu_318_p2) 
	       | (QData)((IData)((1U & ((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_5_i_fu_318_p2) 
					| (VL_ULL(0) 
					   != (vlTOPp->our__DOT__div__DOT__zSig_1_reg_224 
					       << (QData)((IData)(
								  (0x3fU 
								   & (IData)(vlTOPp->our__DOT__div__DOT__zExp_reg_1415)))))))))))
	    : (QData)((IData)((VL_ULL(0) != vlTOPp->our__DOT__div__DOT__zSig_1_reg_224))));
    vlTOPp->our__DOT__div__DOT__rem0_1_fu_1196_p2 = 
	((QData)((IData)((vlTOPp->our__DOT__div__DOT__z1_4_fu_1181_p2 
			  < vlTOPp->our__DOT__div__DOT__a1_assign_reg_197))) 
	 + vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206);
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_fu_236_p3 
	= (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__sel_tmp7_fu_216_p2) 
	    | (0U == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode))
	    ? ((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__sel_tmp7_fu_216_p2)
	        ? 0U : 0x200U) : (((((0U == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode) 
				     | (1U == vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode)) 
				    | (IData)(vlTOPp->our__DOT__div__DOT__zSign_reg_1275))
				    ? (2U != vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode)
				    : (3U != vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode))
				   ? 0x3ffU : 0U));
    // ALWAYS at estimateDiv128To64.v:521
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_phi_fu_96_p4 
	= (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
	     >> 0xbU) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340))
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_2_fu_321_p2
	    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_reg_92);
    // ALWAYS at roundAndPackFloat64.v:296
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_phi_fu_144_p4 
	= ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
		   >> 1U) & (((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_8_reg_597)) 
			      | ((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601)) 
				 & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_1_reg_605)))) 
			     | ((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601)) 
				& (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_6_reg_609))))))
	    ? vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_50_i6_fu_557_p2
	    : vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_reg_141);
    VL_EXTEND_WQ(65,64, __Vtemp5, vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp);
    VL_EXTEND_WI(65,32, __Vtemp6, vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0);
    VL_SUB_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[0U] 
	= __Vtemp7[0U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[1U] 
	= __Vtemp7[1U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[2U] 
	= (1U & __Vtemp7[2U]);
    // ALWAYS at estimateDiv128To64.v:537
    if (((((((((0U == (((((1U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
	       | (0U == (((((2U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	      | (0U == (((((4U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	     | (0U == (((((8U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	    | (0U == (((((0x10U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	   | (0U == (((((0x20U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	  | (0U == (((((0x40U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	 | (0U == (((((0x80U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
		     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
	if ((0U == (((((1U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
	    if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start) 
		  & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)) 
		 & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2)))) {
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x10U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
	    } else {
		if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start) 
		      & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)) 
		     & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2))) {
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 2U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		} else {
		    if (((IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start) 
			 & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x800U;
		    } else {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 1U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    }
		}
	    }
	} else {
	    if ((0U == (((((2U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 4U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
	    } else {
		if ((0U == (((((4U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 8U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		} else {
		    if ((0U == (((((8U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x10U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    } else {
			if ((0U == (((((0x10U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x20U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == (((((0x20U ^ 
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x40U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == (((((0x40U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x80U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x100U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((0U == (((((0x100U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
		   | (0U == (((((0x200U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		  | (0U == (((((0x400U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		 | (0U == (((((0x800U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		| (0U == (((((0x1000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	       | (0U == (((((0x2000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	      | (0U == (((((0x4000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	     | (0U == (((((0x8000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
	    if ((0U == (((((0x100U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x200U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
	    } else {
		if ((0U == (((((0x200U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x400U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		} else {
		    if ((0U == (((((0x400U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x800U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    } else {
			if ((0U == (((((0x800U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x1000U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == (((((0x1000U 
					    ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x2000U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == (((((0x2000U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x4000U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   (0x4000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x8000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x10000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0U == (((((0x10000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
		       | (0U == (((((0x20000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		      | (0U == (((((0x40000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		     | (0U == (((((0x80000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		    | (0U == (((((0x100000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		   | (0U == (((((0x200000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		  | (0U == (((((0x400000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		 | (0U == (((((0x800000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
		if ((0U == (((((0x10000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x20000U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		} else {
		    if ((0U == (((((0x20000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x40000U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    } else {
			if ((0U == (((((0x40000U ^ 
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x80000U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == (((((0x80000U 
					    ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x100000U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == (((((0x100000U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x200000U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   (0x200000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x400000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     (((((0x400000U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x800000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x1000000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0U == (((((0x1000000U ^ 
				       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
			   | (0U == (((((0x2000000U 
					 ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			  | (0U == (((((0x4000000U 
					^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			 | (0U == (((((0x8000000U ^ 
				       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			| (0U == (((((0x10000000U ^ 
				      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		       | (0U == (((((0x20000000U ^ 
				     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		      | (0U == (((((0x40000000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		     | (0U == (((((0x80000000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
		    if ((0U == (((((0x1000000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x2000000U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    } else {
			if ((0U == (((((0x2000000U 
					^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x4000000U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == (((((0x4000000U 
					    ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x8000000U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == (((((0x8000000U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x10000000U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   (0x10000000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x20000000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     (((((0x20000000U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x40000000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 (((((0x40000000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x80000000U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 1U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if (((((((((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					  | (1U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
			       | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					    | (2U ^ 
					       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			      | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					   | (4U ^ 
					      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			     | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					  | (8U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			    | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					 | (0x10U ^ 
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			   | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					| (0x20U ^ 
					   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			  | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
				       | (0x40U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			 | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
				      | (0x80U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
			if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
				       | (1U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 2U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					   | (2U ^ 
					      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 4U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (4U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 8U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (8U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x10U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x10U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x20U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x20U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x40U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | (0x40U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x80U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x100U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if (((((((((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					      | (0x100U 
						 ^ 
						 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
				   | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						| (0x200U 
						   ^ 
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				  | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (0x400U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				 | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					      | (0x800U 
						 ^ 
						 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				| (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					     | (0x1000U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			       | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					    | (0x2000U 
					       ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			      | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					   | (0x4000U 
					      ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			     | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					  | (0x8000U 
					     ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
			    if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					   | (0x100U 
					      ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x200U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (0x200U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x400U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x400U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x800U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x800U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x1000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x1000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x2000U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | (0x2000U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x4000U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | (0x4000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x8000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x10000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if (((((((((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | (0x10000U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
				       | (0U == (((
						   (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | (0x20000U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				      | (0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x40000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				     | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | (0x80000U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				    | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x100000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				   | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						| (0x200000U 
						   ^ 
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				  | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (0x400000U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				 | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					      | (0x800000U 
						 ^ 
						 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
				if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (0x10000U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x20000U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x20000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x40000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x40000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x80000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x80000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x100000U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | (0x100000U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x200000U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | (0x200000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x400000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | (0x400000U 
								    ^ 
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x800000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x1000000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if (((((((((0U == (
						   (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | (0x1000000U 
							 ^ 
							 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
					   | (0U == 
					      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | (0x2000000U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					  | (0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x4000000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					 | (0U == (
						   (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | (0x8000000U 
							 ^ 
							 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					| (0U == ((
						   ((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x10000000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				       | (0U == (((
						   (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | (0x20000000U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				      | (0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x40000000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				     | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | (0x80000000U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
				    if ((0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x1000000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x2000000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x2000000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x4000000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x4000000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x8000000U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | (0x8000000U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x10000000U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | (0x10000000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x20000000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | (0x20000000U 
								    ^ 
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x40000000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | (0x40000000U 
									^ 
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x80000000U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 1U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    }
							}
						    }
						}
					    }
					}
				    }
				} else {
				    if (((((((((0U 
						== 
						((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						   | (1U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
					       | (0U 
						  == 
						  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						     | (2U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					      | (0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | (4U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					     | (0U 
						== 
						((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						   | (8U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					    | (0U == 
					       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						  | (0x10U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					   | (0U == 
					      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						 | (0x20U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					  | (0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						| (0x40U 
						   ^ 
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					 | (0U == (
						   (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						     | (0x80U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						| (1U 
						   ^ 
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 2U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | (2U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 4U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (4U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 8U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (8U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x10U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x10U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x20U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | (0x20U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x40U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| (0x40U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x80U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x100U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								}
							    }
							}
						    }
						}
					    }
					}
				    } else {
					if ((((((((
						   (0U 
						    == 
						    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						       | (0x100U 
							  ^ 
							  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
						   | (0U 
						      == 
						      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							 | (0x200U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						  | (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (0x400U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						 | (0U 
						    == 
						    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						       | (0x800U 
							  ^ 
							  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						| (0U 
						   == 
						   ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						      | (0x1000U 
							 ^ 
							 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					       | (0U 
						  == 
						  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						     | (0x2000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					      | (0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | (0x4000U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					     | (0U 
						== 
						((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						   | (0x8000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | (0x100U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						if (
						    (1U 
						     & ((~ (IData)(
								   (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
								    >> 0x3fU))) 
							& (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2))))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x800U;
						} else {
						    if (
							((~ (IData)(
								    (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
								     >> 0x3fU))) 
							 & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x200U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x100U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    }
						}
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (0x200U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x400U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x400U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x800U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x800U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x1000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | (0x1000U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x2000U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| (0x2000U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x4000U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | (0x4000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x8000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x10000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    }
								}
							    }
							}
						    }
						}
					    }
					} else {
					    if ((((
						   (((((0U 
							== 
							((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							   | (0x10000U 
							      ^ 
							      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
						       | (0U 
							  == 
							  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							     | (0x20000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						      | (0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x40000U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						     | (0U 
							== 
							((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							   | (0x80000U 
							      ^ 
							      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						    | (0U 
						       == 
						       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							  | (0x100000U 
							     ^ 
							     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						   | (0U 
						      == 
						      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							 | (0x200000U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						  | (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (0x400000U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						 | (0U 
						    == 
						    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						       | (0x800000U 
							  ^ 
							  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (0x10000U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x20000U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x20000U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x40000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x40000U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x80000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | (0x80000U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x100000U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| (0x100000U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x200000U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | (0x200000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x400000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| (0x400000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x800000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x1000000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									}
								    }
								}
							    }
							}
						    }
						}
					    } else {
						if (
						    ((((((((0U 
							    == 
							    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							       | (0x1000000U 
								  ^ 
								  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
							   | (0U 
							      == 
							      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								 | (0x2000000U 
								    ^ 
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							  | (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x4000000U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							 | (0U 
							    == 
							    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							       | (0x8000000U 
								  ^ 
								  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							| (0U 
							   == 
							   ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							      | (0x10000000U 
								 ^ 
								 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						       | (0U 
							  == 
							  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							     | (0x20000000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						      | (0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x40000000U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						     | (0U 
							== 
							((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							   | (0x80000000U 
							      ^ 
							      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x1000000U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x2000000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x2000000U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x4000000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | (0x4000000U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x8000000U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| (0x8000000U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x10000000U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | (0x10000000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x20000000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| (0x20000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x40000000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| (0x40000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x80000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 1U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    }
									}
								    }
								}
							    }
							}
						    }
						} else {
						    if (
							((((((((0U 
								== 
								((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								  | (1U 
								     ^ 
								     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
							       | (0U 
								  == 
								  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								    | (2U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							      | (0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | (4U 
								      ^ 
								      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							     | (0U 
								== 
								((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								  | (8U 
								     ^ 
								     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							    | (0U 
							       == 
							       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								 | (0x10U 
								    ^ 
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							   | (0U 
							      == 
							      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								| (0x20U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							  | (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							       | (0x40U 
								  ^ 
								  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							 | (0U 
							    == 
							    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							      | (0x80U 
								 ^ 
								 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							       | (1U 
								  ^ 
								  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 2U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | (2U 
								      ^ 
								      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 4U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (4U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 8U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (8U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x10U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x10U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x20U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x20U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x40U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x40U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x80U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x100U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										}
									    }
									}
								    }
								}
							    }
							}
						    } else {
							if (
							    ((((((((0U 
								    == 
								    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								      | (0x100U 
									 ^ 
									 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
								   | (0U 
								      == 
								      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									| (0x200U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								  | (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (0x400U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								 | (0U 
								    == 
								    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								      | (0x800U 
									 ^ 
									 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								| (0U 
								   == 
								   ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								     | (0x1000U 
									^ 
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							       | (0U 
								  == 
								  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								    | (0x2000U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							      | (0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | (0x4000U 
								      ^ 
								      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							     | (0U 
								== 
								((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								  | (0x8000U 
								     ^ 
								     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | (0x100U 
								      ^ 
								      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x200U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (0x200U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x400U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x400U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x800U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x800U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x1000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x1000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x2000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x2000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x4000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x4000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x8000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x10000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										}
										}
									    }
									}
								    }
								}
							    }
							} else {
							    if (
								((((((((0U 
									== 
									((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									  | (0x10000U 
									     ^ 
									     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
								       | (0U 
									  == 
									  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									    | (0x20000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								      | (0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x40000U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								     | (0U 
									== 
									((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									  | (0x80000U 
									     ^ 
									     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								    | (0U 
								       == 
								       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									 | (0x100000U 
									    ^ 
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								   | (0U 
								      == 
								      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									| (0x200000U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								  | (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (0x400000U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								 | (0U 
								    == 
								    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								      | (0x800000U 
									 ^ 
									 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (0x10000U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x20000U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x20000U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x40000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x40000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x80000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x80000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x100000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x100000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x200000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x200000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x400000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x400000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x800000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x1000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										}
										}
										}
									    }
									}
								    }
								}
							    } else {
								if (
								    ((((((((0U 
									    == 
									    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									      | (0x1000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
									   | (0U 
									      == 
									      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x2000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
									  | (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x4000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
									 | (0U 
									    == 
									    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									      | (0x8000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
									| (0U 
									   == 
									   ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									     | (0x10000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								       | (0U 
									  == 
									  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									    | (0x20000000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								      | (0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x40000000U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								     | (0U 
									== 
									((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									  | (0x80000000U 
									     ^ 
									     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x1000000U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x2000000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x2000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x4000000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x4000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x8000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x8000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x10000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x10000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x20000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x20000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x40000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x40000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x80000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 1U;
										}
										}
										}
										}
									    }
									}
								    }
								} else {
								    if (
									((((((((0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (1U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
									       | (0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (2U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									      | (0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (4U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									     | (0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (8U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									    | (0U 
									       == 
									       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x10U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									   | (0U 
									      == 
									      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									       | (0x20U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									  | (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | (0x40U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									 | (0U 
									    == 
									    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									     | (0x80U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))))) {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | (1U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 2U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (2U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 4U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (4U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 8U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (8U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x10U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x10U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x20U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x20U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x40U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x40U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x80U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x100U;
										}
										}
										}
										}
										}
									    }
									}
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | (0x100U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x200U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x200U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x400U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x400U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x800U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x800U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 1U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
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
    VL_EXTEND_WQ(65,64, __Vtemp269, vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp);
    VL_EXTEND_WI(65,32, __Vtemp270, vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0);
    VL_SUB_W(3, __Vtemp271, __Vtemp269, __Vtemp270);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[0U] 
	= __Vtemp271[0U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[1U] 
	= __Vtemp271[1U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[2U] 
	= (1U & __Vtemp271[2U]);
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
	= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_fu_236_p3)) 
	   + vlTOPp->our__DOT__div__DOT__zSig_1_reg_224);
}

VL_INLINE_OPT void Vour::_combo__TOP__6(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_combo__TOP__6\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__div__DOT__p_a_i_i_i_fu_492_p3 
	= ((0U == (0xffffU & (vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3 
			      >> 0x10U))) ? (vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3 
					     << 0x10U)
	    : vlTOPp->our__DOT__div__DOT__a_assign_3_fu_462_p3);
    vlTOPp->our__DOT__div__DOT__p_a_i_i_i1_fu_774_p3 
	= ((0U == (0xffffU & (vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3 
			      >> 0x10U))) ? (vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3 
					     << 0x10U)
	    : vlTOPp->our__DOT__div__DOT__a_assign_8_fu_744_p3);
    vlTOPp->our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_33_fu_144_p2 
	= ((IData)(vlTOPp->our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_32_fu_126_p2) 
	   | ((VL_ULL(0x7ff0000000000000) == ((QData)((IData)(
							      (0xfffU 
							       & (IData)(
									 (vlTOPp->a 
									  >> 0x33U))))) 
					      << 0x33U)) 
	      & (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			       & vlTOPp->a))));
}

void Vour::_settle__TOP__7(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__7\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign372[4];
    VL_SIGW(__Vtemp274,95,0,3);
    //char	__VpadToAlign388[4];
    VL_SIGW(__Vtemp275,95,0,3);
    //char	__VpadToAlign404[4];
    VL_SIGW(__Vtemp276,95,0,3);
    //char	__VpadToAlign420[4];
    VL_SIGW(__Vtemp538,95,0,3);
    //char	__VpadToAlign436[4];
    VL_SIGW(__Vtemp539,95,0,3);
    //char	__VpadToAlign452[4];
    VL_SIGW(__Vtemp540,95,0,3);
    // Body
    // ALWAYS at estimateDiv128To64.v:521
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_phi_fu_96_p4 
	= (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U] 
	     >> 0xbU) & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340))
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_2_fu_321_p2
	    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_reg_92);
    // ALWAYS at roundAndPackFloat64.v:296
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_phi_fu_144_p4 
	= ((1U & (((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm) 
		   >> 1U) & (((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_8_reg_597)) 
			      | ((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601)) 
				 & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_1_reg_605)))) 
			     | ((~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601)) 
				& (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_6_reg_609))))))
	    ? vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_50_i6_fu_557_p2
	    : vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_reg_141);
    VL_EXTEND_WQ(65,64, __Vtemp274, vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp);
    VL_EXTEND_WI(65,32, __Vtemp275, vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0);
    VL_SUB_W(3, __Vtemp276, __Vtemp274, __Vtemp275);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[0U] 
	= __Vtemp276[0U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[1U] 
	= __Vtemp276[1U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[2U] 
	= (1U & __Vtemp276[2U]);
    // ALWAYS at estimateDiv128To64.v:537
    if (((((((((0U == (((((1U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
	       | (0U == (((((2U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	      | (0U == (((((4U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	     | (0U == (((((8U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	    | (0U == (((((0x10U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	   | (0U == (((((0x20U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	  | (0U == (((((0x40U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	 | (0U == (((((0x80U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
		     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
	if ((0U == (((((1U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
		      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
		     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
	    if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start) 
		  & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)) 
		 & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2)))) {
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x10U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
	    } else {
		if ((((IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start) 
		      & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)) 
		     & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2))) {
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 2U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		} else {
		    if (((IData)(vlTOPp->our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start) 
			 & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2)))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x800U;
		    } else {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 1U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    }
		}
	    }
	} else {
	    if ((0U == (((((2U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 4U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
	    } else {
		if ((0U == (((((4U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 8U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		} else {
		    if ((0U == (((((8U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x10U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    } else {
			if ((0U == (((((0x10U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x20U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == (((((0x20U ^ 
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x40U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == (((((0x40U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x80U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x100U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if (((((((((0U == (((((0x100U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
		   | (0U == (((((0x200U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		  | (0U == (((((0x400U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		 | (0U == (((((0x800U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		| (0U == (((((0x1000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	       | (0U == (((((0x2000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	      | (0U == (((((0x4000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
	     | (0U == (((((0x8000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
		       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
	    if ((0U == (((((0x100U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x200U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
	    } else {
		if ((0U == (((((0x200U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x400U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		} else {
		    if ((0U == (((((0x400U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x800U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    } else {
			if ((0U == (((((0x800U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x1000U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == (((((0x1000U 
					    ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x2000U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == (((((0x2000U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x4000U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   (0x4000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x8000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x10000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    }
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if (((((((((0U == (((((0x10000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
		       | (0U == (((((0x20000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		      | (0U == (((((0x40000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		     | (0U == (((((0x80000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		    | (0U == (((((0x100000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		   | (0U == (((((0x200000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		  | (0U == (((((0x400000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		 | (0U == (((((0x800000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
		if ((0U == (((((0x10000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
			      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
			     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x20000U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
		    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		} else {
		    if ((0U == (((((0x20000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x40000U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    } else {
			if ((0U == (((((0x40000U ^ 
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x80000U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == (((((0x80000U 
					    ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x100000U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == (((((0x100000U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x200000U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   (0x200000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x400000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     (((((0x400000U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x800000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x1000000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if (((((((((0U == (((((0x1000000U ^ 
				       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
			   | (0U == (((((0x2000000U 
					 ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			  | (0U == (((((0x4000000U 
					^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			 | (0U == (((((0x8000000U ^ 
				       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			| (0U == (((((0x10000000U ^ 
				      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		       | (0U == (((((0x20000000U ^ 
				     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		      | (0U == (((((0x40000000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
		     | (0U == (((((0x80000000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
			       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
		    if ((0U == (((((0x1000000U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x2000000U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
		    } else {
			if ((0U == (((((0x2000000U 
					^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x4000000U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == (((((0x4000000U 
					    ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x8000000U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == (((((0x8000000U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x10000000U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   (0x10000000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x20000000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     (((((0x20000000U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x40000000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 (((((0x40000000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U]) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0x80000000U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 1U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if (((((((((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					  | (1U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
			       | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					    | (2U ^ 
					       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			      | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					   | (4U ^ 
					      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			     | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					  | (8U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			    | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					 | (0x10U ^ 
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			   | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					| (0x20U ^ 
					   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			  | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
				       | (0x40U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			 | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
				      | (0x80U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
			if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
				       | (1U ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
				      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
				     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 2U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
			    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			} else {
			    if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					   | (2U ^ 
					      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 4U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (4U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 8U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (8U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x10U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x10U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x20U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x20U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x40U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | (0x40U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x80U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x100U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if (((((((((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					      | (0x100U 
						 ^ 
						 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
				   | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						| (0x200U 
						   ^ 
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				  | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (0x400U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				 | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					      | (0x800U 
						 ^ 
						 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				| (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					     | (0x1000U 
						^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			       | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					    | (0x2000U 
					       ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			      | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					   | (0x4000U 
					      ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
			     | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					  | (0x8000U 
					     ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
				       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
			    if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					   | (0x100U 
					      ^ vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x200U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
			    } else {
				if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (0x200U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x400U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x400U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x800U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x800U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x1000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x1000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x2000U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | (0x2000U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x4000U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | (0x4000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x8000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x10000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    }
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if (((((((((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | (0x10000U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
				       | (0U == (((
						   (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | (0x20000U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				      | (0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x40000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				     | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | (0x80000U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				    | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x100000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				   | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						| (0x200000U 
						   ^ 
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				  | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (0x400000U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				 | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					      | (0x800000U 
						 ^ 
						 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
				if ((0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
					       | (0x10000U 
						  ^ 
						  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x20000U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
				    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				} else {
				    if ((0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x20000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x40000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x40000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x80000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x80000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x100000U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | (0x100000U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x200000U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | (0x200000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x400000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | (0x400000U 
								    ^ 
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x800000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x1000000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if (((((((((0U == (
						   (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | (0x1000000U 
							 ^ 
							 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
					   | (0U == 
					      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | (0x2000000U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					  | (0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x4000000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					 | (0U == (
						   (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | (0x8000000U 
							 ^ 
							 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					| (0U == ((
						   ((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x10000000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				       | (0U == (((
						   (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | (0x20000000U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				      | (0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x40000000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
				     | (0U == ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | (0x80000000U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
				    if ((0U == ((((
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | (0x1000000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x2000000U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
				    } else {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | (0x2000000U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x4000000U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | (0x4000000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x8000000U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | (0x8000000U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x10000000U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | (0x10000000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x20000000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | (0x20000000U 
								    ^ 
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x40000000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | (0x40000000U 
									^ 
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U])) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0x80000000U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 1U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    }
							}
						    }
						}
					    }
					}
				    }
				} else {
				    if (((((((((0U 
						== 
						((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						   | (1U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
					       | (0U 
						  == 
						  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						     | (2U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					      | (0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | (4U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					     | (0U 
						== 
						((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						   | (8U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					    | (0U == 
					       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						  | (0x10U 
						     ^ 
						     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					   | (0U == 
					      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						 | (0x20U 
						    ^ 
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					  | (0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						| (0x40U 
						   ^ 
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					 | (0U == (
						   (((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						     | (0x80U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
					if ((0U == 
					     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						| (1U 
						   ^ 
						   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
					       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
					      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 2U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
					    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					} else {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | (2U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 4U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (4U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 8U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (8U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x10U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x10U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x20U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | (0x20U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x40U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| (0x40U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x80U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x100U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								}
							    }
							}
						    }
						}
					    }
					}
				    } else {
					if ((((((((
						   (0U 
						    == 
						    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						       | (0x100U 
							  ^ 
							  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
						   | (0U 
						      == 
						      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							 | (0x200U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						  | (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (0x400U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						 | (0U 
						    == 
						    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						       | (0x800U 
							  ^ 
							  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						| (0U 
						   == 
						   ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						      | (0x1000U 
							 ^ 
							 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					       | (0U 
						  == 
						  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						     | (0x2000U 
							^ 
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					      | (0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | (0x4000U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
					     | (0U 
						== 
						((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						   | (0x8000U 
						      ^ 
						      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
					    if ((0U 
						 == 
						 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						    | (0x100U 
						       ^ 
						       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						if (
						    (1U 
						     & ((~ (IData)(
								   (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
								    >> 0x3fU))) 
							& (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2))))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x800U;
						} else {
						    if (
							((~ (IData)(
								    (vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 
								     >> 0x3fU))) 
							 & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x200U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x100U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    }
						}
					    } else {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (0x200U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x400U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x400U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x800U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x800U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x1000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | (0x1000U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x2000U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| (0x2000U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x4000U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | (0x4000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x8000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x10000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    }
								}
							    }
							}
						    }
						}
					    }
					} else {
					    if ((((
						   (((((0U 
							== 
							((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							   | (0x10000U 
							      ^ 
							      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
						       | (0U 
							  == 
							  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							     | (0x20000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						      | (0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x40000U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						     | (0U 
							== 
							((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							   | (0x80000U 
							      ^ 
							      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						    | (0U 
						       == 
						       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							  | (0x100000U 
							     ^ 
							     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						   | (0U 
						      == 
						      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							 | (0x200000U 
							    ^ 
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						  | (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (0x400000U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						 | (0U 
						    == 
						    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
						       | (0x800000U 
							  ^ 
							  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
						if (
						    (0U 
						     == 
						     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							| (0x10000U 
							   ^ 
							   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
						       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
						      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x20000U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
						    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						} else {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x20000U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x40000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x40000U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x80000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | (0x80000U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x100000U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| (0x100000U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x200000U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | (0x200000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x400000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| (0x400000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x800000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x1000000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									}
								    }
								}
							    }
							}
						    }
						}
					    } else {
						if (
						    ((((((((0U 
							    == 
							    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							       | (0x1000000U 
								  ^ 
								  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
							   | (0U 
							      == 
							      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								 | (0x2000000U 
								    ^ 
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							  | (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x4000000U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							 | (0U 
							    == 
							    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							       | (0x8000000U 
								  ^ 
								  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							| (0U 
							   == 
							   ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							      | (0x10000000U 
								 ^ 
								 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						       | (0U 
							  == 
							  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							     | (0x20000000U 
								^ 
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						      | (0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x40000000U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
						     | (0U 
							== 
							((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							   | (0x80000000U 
							      ^ 
							      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
						    if (
							(0U 
							 == 
							 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							    | (0x1000000U 
							       ^ 
							       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x2000000U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
						    } else {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| (0x2000000U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x4000000U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | (0x4000000U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x8000000U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| (0x8000000U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x10000000U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | (0x10000000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x20000000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| (0x20000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x40000000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| (0x40000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0x80000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 1U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    }
									}
								    }
								}
							    }
							}
						    }
						} else {
						    if (
							((((((((0U 
								== 
								((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								  | (1U 
								     ^ 
								     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
							       | (0U 
								  == 
								  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								    | (2U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							      | (0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | (4U 
								      ^ 
								      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							     | (0U 
								== 
								((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								  | (8U 
								     ^ 
								     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							    | (0U 
							       == 
							       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								 | (0x10U 
								    ^ 
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							   | (0U 
							      == 
							      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								| (0x20U 
								   ^ 
								   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							  | (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							       | (0x40U 
								  ^ 
								  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							 | (0U 
							    == 
							    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
							       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							      | (0x80U 
								 ^ 
								 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
							     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
							if (
							    (0U 
							     == 
							     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
							       | (1U 
								  ^ 
								  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
							      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 2U;
							    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							} else {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | (2U 
								      ^ 
								      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 4U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (4U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 8U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (8U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x10U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x10U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x20U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x20U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x40U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x40U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x80U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x100U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										}
									    }
									}
								    }
								}
							    }
							}
						    } else {
							if (
							    ((((((((0U 
								    == 
								    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								      | (0x100U 
									 ^ 
									 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
								   | (0U 
								      == 
								      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									| (0x200U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								  | (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (0x400U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								 | (0U 
								    == 
								    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								      | (0x800U 
									 ^ 
									 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								| (0U 
								   == 
								   ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								     | (0x1000U 
									^ 
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							       | (0U 
								  == 
								  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								    | (0x2000U 
								       ^ 
								       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							      | (0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | (0x4000U 
								      ^ 
								      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
							     | (0U 
								== 
								((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								  | (0x8000U 
								     ^ 
								     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
							    if (
								(0U 
								 == 
								 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								   | (0x100U 
								      ^ 
								      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x200U;
								vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
							    } else {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (0x200U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x400U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x400U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x800U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x800U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x1000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x1000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x2000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x2000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x4000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x4000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x8000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x10000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										}
										}
									    }
									}
								    }
								}
							    }
							} else {
							    if (
								((((((((0U 
									== 
									((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									  | (0x10000U 
									     ^ 
									     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
								       | (0U 
									  == 
									  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									    | (0x20000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								      | (0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x40000U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								     | (0U 
									== 
									((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									  | (0x80000U 
									     ^ 
									     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								    | (0U 
								       == 
								       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									 | (0x100000U 
									    ^ 
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								   | (0U 
								      == 
								      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									| (0x200000U 
									   ^ 
									   vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								  | (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (0x400000U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								 | (0U 
								    == 
								    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
								       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								      | (0x800000U 
									 ^ 
									 vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
								if (
								    (0U 
								     == 
								     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
								       | (0x10000U 
									  ^ 
									  vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
								      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x20000U;
								    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								} else {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x20000U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x40000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x40000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x80000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x80000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x100000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x100000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x200000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x200000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x400000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x400000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x800000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x1000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										}
										}
										}
									    }
									}
								    }
								}
							    } else {
								if (
								    ((((((((0U 
									    == 
									    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									      | (0x1000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])) 
									   | (0U 
									      == 
									      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x2000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
									  | (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x4000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
									 | (0U 
									    == 
									    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									      | (0x8000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
									| (0U 
									   == 
									   ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									     | (0x10000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								       | (0U 
									  == 
									  ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									    | (0x20000000U 
									       ^ 
									       vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								      | (0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x40000000U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
								     | (0U 
									== 
									((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									   | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									  | (0x80000000U 
									     ^ 
									     vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									 | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
								    if (
									(0U 
									 == 
									 ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
									     | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									    | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									   | (0x1000000U 
									      ^ 
									      vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									  | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x2000000U;
									vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | (0x2000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x4000000U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x4000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x8000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x8000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x10000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x10000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x20000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x20000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x40000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| (0x40000000U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U])) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0x80000000U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 1U;
										}
										}
										}
										}
									    }
									}
								    }
								} else {
								    if (
									((((((((0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (1U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))) 
									       | (0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (2U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									      | (0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (4U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									     | (0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (8U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									    | (0U 
									       == 
									       ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x10U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									   | (0U 
									      == 
									      ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									       | (0x20U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									  | (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | (0x40U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) 
									 | (0U 
									    == 
									    ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									      | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									     | (0x80U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U]))))) {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | (1U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 2U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (2U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 4U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (4U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 8U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (8U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x10U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x10U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x20U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x20U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x40U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x40U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x80U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x100U;
										}
										}
										}
										}
										}
									    }
									}
								    } else {
									if (
									    (0U 
									     == 
									     ((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
									       | vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
									      | (0x100U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
									    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x200U;
									} else {
									    if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x200U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x400U;
									    } else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x400U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0x800U;
										} else {
										if (
										(0U 
										== 
										((((vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[0U] 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[1U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[2U]) 
										| vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[3U]) 
										| (0x800U 
										^ 
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])))) {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 1U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
										} else {
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[0U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[1U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[2U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[3U] = 0U;
										vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm[4U] = 0U;
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
    VL_EXTEND_WQ(65,64, __Vtemp538, vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp);
    VL_EXTEND_WI(65,32, __Vtemp539, vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0);
    VL_SUB_W(3, __Vtemp540, __Vtemp538, __Vtemp539);
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[0U] 
	= __Vtemp540[0U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[1U] 
	= __Vtemp540[1U];
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp[2U] 
	= (1U & __Vtemp540[2U]);
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 
	= ((QData)((IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_fu_236_p3)) 
	   + vlTOPp->our__DOT__div__DOT__zSig_1_reg_224);
    // ALWAYS at estimateDiv128To64.v:497
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return 
	= ((0x800U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_phi_fu_96_p4
	    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_return_preg);
    // ALWAYS at roundAndPackFloat64.v:268
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_return 
	= ((2U & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm))
	    ? vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_phi_fu_144_p4
	    : vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_return_preg);
}

VL_INLINE_OPT void Vour::_sequent__TOP__8(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__8\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at estimateDiv128To64.v:497
    vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return 
	= ((0x800U & vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm[4U])
	    ? vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_phi_fu_96_p4
	    : vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_return_preg);
    // ALWAYS at roundAndPackFloat64.v:268
    vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_return 
	= ((2U & (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm))
	    ? vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_phi_fu_144_p4
	    : vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_return_preg);
}

VL_INLINE_OPT void Vour::_combo__TOP__9(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_combo__TOP__9\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_div.v:741
    vlTOPp->our__DOT__div__DOT__ap_NS_fsm = (((((((
						   ((1U 
						     == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm)) 
						    | (2U 
						       == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) 
						   | (4U 
						      == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) 
						  | (8U 
						     == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) 
						 | (0x10U 
						    == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) 
						| (0x20U 
						   == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) 
					       | (0x40U 
						  == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))) 
					      | (0x80U 
						 == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm)))
					      ? ((1U 
						  == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						  ? 
						 (((IData)(vlTOPp->our__DOT__r_next) 
						   & (((0x7ffU 
							== 
							(0x7ffU 
							 & (IData)(
								   (vlTOPp->b 
								    >> 0x34U)))) 
						       | (0x7ffU 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->a 
								      >> 0x34U))))) 
						      | ((0U 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->b 
								      >> 0x34U)))) 
							 & (VL_ULL(0) 
							    == 
							    (VL_ULL(0xfffffffffffff) 
							     & vlTOPp->b)))))
						   ? 0x1000U
						   : 
						  (((IData)(vlTOPp->our__DOT__r_next) 
						    & ((((0x7ffU 
							  != 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->a 
								      >> 0x34U)))) 
							 & (0x7ffU 
							    != 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->b 
									>> 0x34U))))) 
							& (0U 
							   != 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->b 
								       >> 0x34U))))) 
						       | (((0x7ffU 
							    != 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->a 
									>> 0x34U)))) 
							   & (0x7ffU 
							      != 
							      (0x7ffU 
							       & (IData)(
									 (vlTOPp->b 
									  >> 0x34U))))) 
							  & (VL_ULL(0) 
							     != 
							     (VL_ULL(0xfffffffffffff) 
							      & vlTOPp->b)))))
						    ? 2U
						    : 1U))
						  : 
						 ((2U 
						   == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						   ? 
						  (((VL_ULL(0) 
						     == vlTOPp->our__DOT__div__DOT__grp_fu_332_p0) 
						    & (0U 
						       == (IData)(vlTOPp->our__DOT__div__DOT__aExp_reg_1254)))
						    ? 0x1000U
						    : 
						   (((VL_ULL(0) 
						      != vlTOPp->our__DOT__div__DOT__grp_fu_332_p0) 
						     & (0U 
							== (IData)(vlTOPp->our__DOT__div__DOT__aExp_reg_1254)))
						     ? 4U
						     : 8U))
						   : 
						  ((4U 
						    == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						    ? 8U
						    : 
						   ((8U 
						     == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						     ? 0x10U
						     : 
						    ((0x10U 
						      == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						      ? 
						     (((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_done) 
						       & (3U 
							  <= 
							  (0x1ffU 
							   & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return))))
						       ? 0x800U
						       : 
						      (((IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_done) 
							& (3U 
							   > 
							   (0x1ffU 
							    & (IData)(vlTOPp->our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return))))
						        ? 0x20U
						        : 0x10U))
						      : 
						     ((0x20U 
						       == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						       ? 0x40U
						       : 
						      ((0x40U 
							== (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						        ? 0x80U
						        : 0x100U)))))))
					      : ((0x100U 
						  == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						  ? 0x200U
						  : 
						 ((0x200U 
						   == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						   ? 0x400U
						   : 
						  ((0x400U 
						    == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->our__DOT__div__DOT__a0_assign_1_reg_206 
								>> 0x3fU)))
						     ? 0x400U
						     : 0x800U)
						    : 
						   ((0x800U 
						     == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						     ? 0x1000U
						     : 
						    ((0x1000U 
						      == (IData)(vlTOPp->our__DOT__div__DOT__ap_CS_fsm))
						      ? 
						     ((1U 
						       & ((((((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
								& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
							       & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
							      & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
							     | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_40_reg_1289)) 
								  & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281))) 
								 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
								& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357)))) 
							    | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
								 & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
								& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_49_reg_1353))) 
							       & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293)))) 
							   | ((((~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_reg_1281)) 
								& (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_36_reg_1285))) 
							       & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_50_reg_1357))) 
							      & (~ (IData)(vlTOPp->our__DOT__div__DOT__tmp_43_reg_1293)))) 
							  & (~ (IData)(vlTOPp->our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_done))))
						       ? 0x1000U
						       : 1U)
						      : 0U))))));
}

void Vour::_eval(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_eval\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
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
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_combo__TOP__9(vlSymsp);
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
    read_data = VL_RAND_RESET_Q(64);
    a = VL_RAND_RESET_Q(64);
    b = VL_RAND_RESET_Q(64);
    read_enable = VL_RAND_RESET_I(1);
    write_enable = VL_RAND_RESET_I(1);
    finish_read = VL_RAND_RESET_I(1);
    finish_write = VL_RAND_RESET_I(1);
    done = VL_RAND_RESET_I(1);
    read_addr = VL_RAND_RESET_Q(64);
    write_addr = VL_RAND_RESET_Q(64);
    write_size = VL_RAND_RESET_Q(64);
    read_size_output = VL_RAND_RESET_Q(64);
    write_data = VL_RAND_RESET_Q(64);
    returnvalue = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    our__DOT__r_data[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    our__DOT__r_write_data = VL_RAND_RESET_Q(64);
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
    our__DOT__r_returnvalue = VL_RAND_RESET_Q(64);
    our__DOT__addr0 = VL_RAND_RESET_I(2);
    our__DOT__addr1 = VL_RAND_RESET_I(2);
    our__DOT__ce0 = VL_RAND_RESET_I(1);
    our__DOT__we0 = VL_RAND_RESET_I(1);
    our__DOT__ce1 = VL_RAND_RESET_I(1);
    our__DOT__we1 = VL_RAND_RESET_I(1);
    our__DOT__r_next = VL_RAND_RESET_I(1);
    our__DOT__d0 = VL_RAND_RESET_Q(64);
    our__DOT__d1 = VL_RAND_RESET_Q(64);
    our__DOT__timer = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__ap_CS_fsm = VL_RAND_RESET_I(13);
    our__DOT__div__DOT__countLeadingZerosHig_q0 = VL_RAND_RESET_I(4);
    our__DOT__div__DOT__aSig_3_reg_1243 = VL_RAND_RESET_Q(52);
    our__DOT__div__DOT__aSig_3_cast8_reg_1248 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__aExp_reg_1254 = VL_RAND_RESET_I(11);
    our__DOT__div__DOT__aExp_cast_reg_1259 = VL_RAND_RESET_I(12);
    our__DOT__div__DOT__bSig_2_cast6_reg_1264 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__zSign_fu_410_p2 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__zSign_reg_1275 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__tmp_reg_1281 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__tmp_36_reg_1285 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__tmp_40_reg_1289 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__tmp_43_reg_1293 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__icmp_reg_1297 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__icmp7_reg_1302 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__icmp1_reg_1308 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__bExp2_cast_reg_1348 = VL_RAND_RESET_I(13);
    our__DOT__div__DOT__tmp_49_reg_1353 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__tmp_50_reg_1357 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__icmp2_reg_1361 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__icmp3_reg_1366 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__icmp4_reg_1372 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__tmp_79_reg_1397 = VL_RAND_RESET_I(21);
    our__DOT__div__DOT__bSig_2_reg_1402 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__aSig_reg_1409 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__zExp_reg_1415 = VL_RAND_RESET_I(13);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_return = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__zSig_3_reg_1420 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262_ap_done = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__z1_reg_1455 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__zMiddleA_reg_1460 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__zMiddleB_reg_1465 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__z0_reg_1471 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__tmp_55_i_reg_1476 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__tmp_66_reg_1481 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__z1_3_fu_1099_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__z1_3_reg_1486 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__tmp_60_i_reg_1492 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__zSig_fu_1175_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__tmp_85_fu_1167_p3 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__z1_4_fu_1181_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__rem0_1_fu_1196_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_done = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268_ap_return = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__bSig2_reg_160 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__bExp2_reg_170 = VL_RAND_RESET_I(12);
    our__DOT__div__DOT__aSig2_reg_179 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__aExp2_reg_188 = VL_RAND_RESET_I(12);
    our__DOT__div__DOT__a1_assign_reg_197 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__a0_assign_1_reg_206 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__zSig1_reg_215 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__zSig_1_reg_224 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__p_0_reg_234 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__ap_reg_grp_estimateDiv128To64_fu_262_ap_start = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__ap_reg_grp_roundAndPackFloat64_fu_268_ap_start = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_fu_332_p0 = VL_RAND_RESET_Q(52);
    our__DOT__div__DOT__a_assign_3_fu_462_p3 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__p_a_i_i_i_fu_492_p3 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__tmp_7_fu_569_p3 = VL_RAND_RESET_Q(52);
    our__DOT__div__DOT__shiftCount_1_fu_667_p2 = VL_RAND_RESET_I(7);
    our__DOT__div__DOT__a_assign_8_fu_744_p3 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__p_a_i_i_i1_fu_774_p3 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__shiftCount_4_fu_874_p2 = VL_RAND_RESET_I(7);
    our__DOT__div__DOT__tmp_55_fu_953_p2 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__zMiddleA_1_fu_1074_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__ap_NS_fsm = VL_RAND_RESET_I(13);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    our__DOT__div__DOT__countLeadingZerosHig_U__DOT__float64_div_countdEe_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(4);
    }}
    VL_RAND_RESET_W(140,our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_CS_fsm);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_fu_103_p2 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_reg_340 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_reg_344 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b0_cast_reg_351 = VL_RAND_RESET_Q(33);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_s_reg_356 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__zMiddleA_reg_380 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z0_reg_385 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_58_i_reg_390 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__b1_reg_405 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_fu_252_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_91_fu_244_p3 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z1_fu_258_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_2_fu_282_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__rem0_1_fu_302_p3 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_fu_310_p2 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_65_reg_433 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_3_reg_40 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_60_fu_135_p2 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a1_assign_reg_52 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__a0_assign_reg_61 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z3_reg_70 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_315_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__tmp_67_reg_81 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__z_2_fu_321_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_phi_fu_96_p4 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__p_0_reg_92 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__grp_fu_141_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_return_preg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(140,our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__ap_NS_fsm);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__start0 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__dividend0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__divisor0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65,our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp);
    VL_RAND_RESET_W(65,our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U1__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U2__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_mul_3cud_U3__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__start0 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__dividend0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__divisor0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__divisor0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__remd_tmp = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__dividend_tmp_mux = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__comb_tmp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65,our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__cal_tmp);
    VL_RAND_RESET_W(65,our__DOT__div__DOT__grp_estimateDiv128To64_fu_262__DOT__float64_div_udiv_bkb_U4__DOT__float64_div_udiv_bkb_div_U__DOT__float64_div_udiv_bkb_div_u_0__DOT__r_stage);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_CS_fsm = VL_RAND_RESET_I(2);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__float_rounding_mode = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_reg_581 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_fu_236_p3 = VL_RAND_RESET_I(10);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundIncrement_4_reg_586 = VL_RAND_RESET_I(10);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_8_reg_597 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_9_reg_601 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_1_reg_605 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_6_reg_609 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__z_2_fu_382_p3 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_14_reg_106 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zExp_assign_1_reg_117 = VL_RAND_RESET_I(13);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__roundBits_1_reg_130 = VL_RAND_RESET_I(10);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_phi_fu_144_p4 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__p_0_reg_141 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_50_i6_fu_557_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__sel_tmp7_fu_216_p2 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_4_fu_270_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__tmp_5_i_fu_318_p2 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__zSig_assign_2_fu_516_p2 = VL_RAND_RESET_Q(54);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_return_preg = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__grp_roundAndPackFloat64_fu_268__DOT__ap_NS_fsm = VL_RAND_RESET_I(2);
    our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_33_fu_144_p2 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__grp_propagateFloat64NaN_fu_281__DOT__tmp_32_fu_126_p2 = VL_RAND_RESET_I(1);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U14__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U15__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U16__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    our__DOT__div__DOT__float64_div_mul_3cud_x_U17__DOT__float64_div_mul_3cud_Mul3S_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
}

void Vour::_configure_coverage(Vour__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_configure_coverage\n"); );
}
