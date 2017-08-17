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
    VL_SIG8(__Vdlyvval__our__DOT__r_data__v0,7,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v0,0,0);
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v1,6,0);
    VL_SIG8(__Vdlyvval__our__DOT__r_data__v1,7,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v1,0,0);
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v2,6,0);
    VL_SIG8(__Vdlyvval__our__DOT__r_data__v2,7,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v2,0,0);
    //char	__VpadToAlign13[3];
    VL_SIG(__Vdly__our__DOT__enc__DOT__l3_reg_314,31,0);
    VL_SIG(__Vdly__our__DOT__enc__DOT__l_1_reg_344,31,0);
    VL_SIG(__Vdly__our__DOT__enc__DOT__n1_reg_323,31,0);
    VL_SIG(__Vdly__our__DOT__enc__DOT__n_1_reg_353,31,0);
    VL_SIG(__Vdly__our__DOT__enc__DOT__out_0_rec_reg_333,31,0);
    VL_SIG(__Vdly__our__DOT__enc__DOT__out_1_rec_reg_363,31,0);
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
    __Vdlyvset__our__DOT__r_data__v0 = 0U;
    __Vdlyvset__our__DOT__r_data__v1 = 0U;
    __Vdlyvset__our__DOT__r_data__v2 = 0U;
    __Vdly__our__DOT__enc__DOT__out_1_rec_reg_363 = vlTOPp->our__DOT__enc__DOT__out_1_rec_reg_363;
    __Vdly__our__DOT__enc__DOT__out_0_rec_reg_333 = vlTOPp->our__DOT__enc__DOT__out_0_rec_reg_333;
    __Vdly__our__DOT__enc__DOT__n1_reg_323 = vlTOPp->our__DOT__enc__DOT__n1_reg_323;
    __Vdly__our__DOT__enc__DOT__n_1_reg_353 = vlTOPp->our__DOT__enc__DOT__n_1_reg_353;
    __Vdly__our__DOT__enc__DOT__l_1_reg_344 = vlTOPp->our__DOT__enc__DOT__l_1_reg_344;
    __Vdly__our__DOT__enc__DOT__l3_reg_314 = vlTOPp->our__DOT__enc__DOT__l3_reg_314;
    // ALWAYS at BF_encrypt.v:2835
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	= (VL_ULL(0xffffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
    // ALWAYS at BF_encrypt.v:944
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffffffe) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffffffd) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffffffb) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffffff7) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffffffef) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffffffdf) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffffffbf) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffffff7f) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffffeff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffffdff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffffbff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffff7ff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffffefff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffffdfff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffffbfff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffff7fff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffeffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffdffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffffbffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffff7ffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffefffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffdfffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffffbfffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffff7fffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffeffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffdffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffffbffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xfffffffff7ffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffefffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffdfffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffffbfffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
	    = (VL_ULL(0xffffffff7fffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
    } else {
	if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			   >> 0x21U)))) {
	    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg 
		= ((VL_ULL(0xffffffff00000000) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg) 
		   | (IData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_15_cast_fu_3792_p2)));
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:379
    if (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		  >> 6U)) & (IData)(vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843))) {
	__Vdly__our__DOT__enc__DOT__out_1_rec_reg_363 = 0U;
    } else {
	if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			   >> 0x1eU)))) {
	    __Vdly__our__DOT__enc__DOT__out_1_rec_reg_363 
		= vlTOPp->our__DOT__enc__DOT__p_rec_reg_1004;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:371
    if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			>> 6U)) & (~ (IData)(vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843))))) {
	__Vdly__our__DOT__enc__DOT__out_0_rec_reg_333 = 0U;
    } else {
	if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			   >> 0x12U)))) {
	    __Vdly__our__DOT__enc__DOT__out_0_rec_reg_333 
		= vlTOPp->our__DOT__enc__DOT__p_rec5_reg_947;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:347
    if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			>> 6U)) & (~ (IData)(vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843))))) {
	__Vdly__our__DOT__enc__DOT__n1_reg_323 = vlTOPp->our__DOT__enc__DOT__n_fu_539_p5;
    } else {
	if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			   >> 0x12U)))) {
	    __Vdly__our__DOT__enc__DOT__n1_reg_323 
		= vlTOPp->our__DOT__enc__DOT__n_4_cast_reg_981;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:355
    if (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		  >> 6U)) & (IData)(vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843))) {
	__Vdly__our__DOT__enc__DOT__n_1_reg_353 = vlTOPp->our__DOT__enc__DOT__n_fu_539_p5;
    } else {
	if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			   >> 0x1eU)))) {
	    __Vdly__our__DOT__enc__DOT__n_1_reg_353 
		= vlTOPp->our__DOT__enc__DOT__n_3_cast_reg_1039;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:339
    if (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		  >> 6U)) & (IData)(vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843))) {
	__Vdly__our__DOT__enc__DOT__l_1_reg_344 = vlTOPp->our__DOT__enc__DOT__length_fu_551_p5;
    } else {
	if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			   >> 0x1eU)))) {
	    __Vdly__our__DOT__enc__DOT__l_1_reg_344 
		= vlTOPp->our__DOT__enc__DOT__l_2_reg_996;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:331
    if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			>> 6U)) & (~ (IData)(vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843))))) {
	__Vdly__our__DOT__enc__DOT__l3_reg_314 = vlTOPp->our__DOT__enc__DOT__length_fu_551_p5;
    } else {
	if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			   >> 0x12U)))) {
	    __Vdly__our__DOT__enc__DOT__l3_reg_314 
		= vlTOPp->our__DOT__enc__DOT__l_3_reg_939;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:467
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 0x17U)))) {
	vlTOPp->our__DOT__enc__DOT__tmp_402_reg_1013 
	    = (((IData)(vlTOPp->our__DOT__enc__DOT__reg_472) 
		<< 0x18U) | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_476) 
			      << 0x10U) | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_480) 
					    << 8U) 
					   | (IData)(vlTOPp->our__DOT__enc__DOT__reg_484))));
	vlTOPp->our__DOT__enc__DOT__tmp_403_reg_1018 
	    = (((IData)(vlTOPp->our__DOT__enc__DOT__reg_488) 
		<< 0x18U) | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_492) 
			      << 0x10U) | (((IData)(vlTOPp->our__DOT__r_q0) 
					    << 8U) 
					   | (IData)(vlTOPp->our__DOT__r_q1))));
    }
    // ALWAYS at BF_cfb64_encrypt.v:481
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 0xbU)))) {
	vlTOPp->our__DOT__enc__DOT__tmp_407_reg_956 
	    = (((IData)(vlTOPp->our__DOT__enc__DOT__reg_472) 
		<< 0x18U) | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_476) 
			      << 0x10U) | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_480) 
					    << 8U) 
					   | (IData)(vlTOPp->our__DOT__enc__DOT__reg_484))));
	vlTOPp->our__DOT__enc__DOT__tmp_408_reg_961 
	    = (((IData)(vlTOPp->our__DOT__enc__DOT__reg_488) 
		<< 0x18U) | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_492) 
			      << 0x10U) | (((IData)(vlTOPp->our__DOT__r_q0) 
					    << 8U) 
					   | (IData)(vlTOPp->our__DOT__r_q1))));
    }
    // ALWAYS at BF_encrypt.v:1251
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x1cU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_350_reg_4596 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1257
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x1eU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_371_reg_4636 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1185
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 8U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_110_reg_4036 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1191
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0xaU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_reg_4092 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1197
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0xcU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_171_reg_4148 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1203
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 2U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_17_reg_3863 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1209
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0xeU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_201_reg_4204 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1215
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x10U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_224_reg_4260 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1221
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x12U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_245_reg_4316 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1227
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x14U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_266_reg_4372 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1233
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x16U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_287_reg_4428 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1239
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x18U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_308_reg_4484 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1245
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x1aU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_329_reg_4540 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1263
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 4U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_reg_3924 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:1269
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 6U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_80_reg_3980 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    // ALWAYS at BF_encrypt.v:2834
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	= (VL_ULL(0xffffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
    // ALWAYS at BF_encrypt.v:903
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffffffe) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffffffd) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffffffb) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffffff7) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffffffef) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffffffdf) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffffffbf) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffffff7f) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffffeff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffffdff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffffbff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffff7ff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffffefff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffffdfff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffffbfff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffff7fff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffeffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffdffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffffbffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffff7ffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffefffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffdfffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffffbfffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffff7fffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffeffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffdffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffffbffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xfffffffff7ffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffefffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffdfffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffffbfffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
	    = (VL_ULL(0xffffffff7fffffff) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
    } else {
	if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			   >> 0x21U)))) {
	    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg 
		= ((VL_ULL(0xffffffff00000000) & vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg) 
		   | (IData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_15_cast_reg_4686)));
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:1000
    vlTOPp->our__DOT__enc__DOT__n_4_cast_reg_981 = 
	(7U & vlTOPp->our__DOT__enc__DOT__n_4_cast_reg_981);
    // ALWAYS at BF_cfb64_encrypt.v:412
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 0xfU)))) {
	vlTOPp->our__DOT__enc__DOT__in_addr_24_reg_976 
	    = (0x7fU & (IData)(VL_EXTENDS_QI(64,8, 
					     (0xffU 
					      & ((IData)(0x50U) 
						 + vlTOPp->our__DOT__enc__DOT__n1_reg_323)))));
	vlTOPp->our__DOT__enc__DOT__n_4_cast_reg_981 
	    = ((0xfffffff8U & vlTOPp->our__DOT__enc__DOT__n_4_cast_reg_981) 
	       | (7U & ((IData)(1U) + vlTOPp->our__DOT__enc__DOT__n1_reg_323)));
    }
    // ALWAYS at BF_cfb64_encrypt.v:1001
    vlTOPp->our__DOT__enc__DOT__n_3_cast_reg_1039 = 
	(7U & vlTOPp->our__DOT__enc__DOT__n_3_cast_reg_1039);
    // ALWAYS at BF_cfb64_encrypt.v:405
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 0x1bU)))) {
	vlTOPp->our__DOT__enc__DOT__in_addr_23_reg_1033 
	    = (0x7fU & (IData)(VL_EXTENDS_QI(64,8, 
					     (0xffU 
					      & ((IData)(0x50U) 
						 + vlTOPp->our__DOT__enc__DOT__n_1_reg_353)))));
	vlTOPp->our__DOT__enc__DOT__n_3_cast_reg_1039 
	    = ((0xfffffff8U & vlTOPp->our__DOT__enc__DOT__n_3_cast_reg_1039) 
	       | (7U & ((IData)(1U) + vlTOPp->our__DOT__enc__DOT__n_1_reg_353)));
    }
    // ALWAYS at BF_cfb64_encrypt.v:387
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 0x13U)))) {
	vlTOPp->our__DOT__enc__DOT__in_addr_19_reg_986 
	    = (0x7fU & (IData)((QData)((IData)(vlTOPp->our__DOT__enc__DOT__out_1_rec_reg_363))));
	vlTOPp->our__DOT__enc__DOT__in_addr_20_reg_991 
	    = (0x7fU & (IData)(VL_EXTENDS_QI(64,8, 
					     (0xffU 
					      & ((IData)(0x28U) 
						 + vlTOPp->our__DOT__enc__DOT__out_1_rec_reg_363)))));
	vlTOPp->our__DOT__enc__DOT__l_2_reg_996 = ((IData)(0xffffffffU) 
						   + vlTOPp->our__DOT__enc__DOT__l_1_reg_344);
	vlTOPp->our__DOT__enc__DOT__p_rec_reg_1004 
	    = ((IData)(1U) + vlTOPp->our__DOT__enc__DOT__out_1_rec_reg_363);
    }
    // ALWAYS at BF_cfb64_encrypt.v:396
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 7U)))) {
	vlTOPp->our__DOT__enc__DOT__in_addr_21_reg_929 
	    = (0x7fU & (IData)((QData)((IData)(vlTOPp->our__DOT__enc__DOT__out_0_rec_reg_333))));
	vlTOPp->our__DOT__enc__DOT__in_addr_22_reg_934 
	    = (0x7fU & (IData)(VL_EXTENDS_QI(64,8, 
					     (0xffU 
					      & ((IData)(0x28U) 
						 + vlTOPp->our__DOT__enc__DOT__out_0_rec_reg_333)))));
	vlTOPp->our__DOT__enc__DOT__l_3_reg_939 = ((IData)(0xffffffffU) 
						   + vlTOPp->our__DOT__enc__DOT__l3_reg_314);
	vlTOPp->our__DOT__enc__DOT__p_rec5_reg_947 
	    = ((IData)(1U) + vlTOPp->our__DOT__enc__DOT__out_0_rec_reg_333);
    }
    // ALWAYS at BF_cfb64_encrypt.v:502
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 2U)))) {
	vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843 = 
	    (0U == (((IData)(vlTOPp->our__DOT__r_q1) 
		     << 0x18U) | (((IData)(vlTOPp->our__DOT__r_q0) 
				   << 0x10U) | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_476) 
						 << 8U) 
						| (IData)(vlTOPp->our__DOT__enc__DOT__reg_472)))));
    }
    // ALWAYS at BF_cfb64_encrypt.v:426
    if ((1U & (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			 >> 4U)) | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					    >> 9U))) 
	       | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			  >> 0x15U))))) {
	vlTOPp->our__DOT__enc__DOT__reg_480 = vlTOPp->our__DOT__r_q0;
	vlTOPp->our__DOT__enc__DOT__reg_484 = vlTOPp->our__DOT__r_q1;
    }
    // ALWAYS at BF_cfb64_encrypt.v:433
    if ((1U & (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			 >> 5U)) | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					    >> 0xaU))) 
	       | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			  >> 0x16U))))) {
	vlTOPp->our__DOT__enc__DOT__reg_488 = vlTOPp->our__DOT__r_q0;
	vlTOPp->our__DOT__enc__DOT__reg_492 = vlTOPp->our__DOT__r_q1;
    }
    // ALWAYS at BF_encrypt.v:1099
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x20U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_15_cast_reg_4686 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0) 
	       ^ (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_387_reg_4646 
		  ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_631)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_392_reg_4676 
	    = ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    }
    vlTOPp->our__DOT__enc__DOT__out_1_rec_reg_363 = __Vdly__our__DOT__enc__DOT__out_1_rec_reg_363;
    vlTOPp->our__DOT__enc__DOT__out_0_rec_reg_333 = __Vdly__our__DOT__enc__DOT__out_0_rec_reg_333;
    // ALWAYS at BF_cfb64_encrypt.v:419
    if ((1U & ((((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			  >> 1U)) | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					     >> 3U))) 
		| (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			   >> 8U))) | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					       >> 0x14U))))) {
	vlTOPp->our__DOT__enc__DOT__reg_472 = vlTOPp->our__DOT__r_q0;
	vlTOPp->our__DOT__enc__DOT__reg_476 = vlTOPp->our__DOT__r_q1;
    }
    // ALWAYS at BF_encrypt_key_S.v:39
    if ((1U & ((((((((((((((((((((((((((((((((IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						      >> 1U)) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							>> 0xbU))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						       >> 0x15U))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						      >> 0x1fU))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						     >> 3U))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						    >> 0xdU))) 
					| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						   >> 0x17U))) 
				       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						  >> 5U))) 
				      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						 >> 0xfU))) 
				     | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						>> 0x19U))) 
				    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					       >> 7U))) 
				   | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					      >> 0x11U))) 
				  | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					     >> 0x1bU))) 
				 | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					    >> 2U))) 
				| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					   >> 4U))) 
			       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					  >> 6U))) 
			      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					 >> 8U))) | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 9U))) 
			    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				       >> 0xaU))) | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 0xcU))) 
			  | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				     >> 0xeU))) | (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							   >> 0x10U))) 
			| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				   >> 0x12U))) | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							  >> 0x13U))) 
		      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				 >> 0x14U))) | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							>> 0x16U))) 
		    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			       >> 0x18U))) | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						      >> 0x1aU))) 
		  | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			     >> 0x1cU))) | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						    >> 0x1dU))) 
		| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			   >> 0x1eU))) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						  >> 0x20U))))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_U__DOT__BF_encrypt_key_S_rom_U__DOT__ram
	    [(0x3ffU & ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				       >> 0x20U))) ? 
			(0x200U | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_200_cast_reg_4666))
			 : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					   >> 0x1fU)))
			     ? (IData)((QData)((IData)(
						       (0xfffU 
							& (IData)(
								  (VL_ULL(0xfff) 
								   & (((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_reg_4571 
									^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2))) 
								       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0) 
								      >> 0x18U)))))))
			     : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					       >> 0x1eU)))
				 ? (0x200U | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_187_cast_reg_4621))
				 : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						   >> 0x1dU)))
				     ? (IData)((QData)((IData)(
							       (0xfffU 
								& (IData)(
									  (VL_ULL(0xfff) 
									   & (((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_reg_4515 
										^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2))) 
									       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0) 
									      >> 0x18U)))))))
				     : ((1U & (IData)(
						      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						       >> 0x1cU)))
					 ? (0x200U 
					    | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_174_cast_reg_4586))
					 : ((1U & (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							   >> 0x1bU)))
					     ? (IData)((QData)((IData)(
								       (0xfffU 
									& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_fu_3216_p2 
										>> 0x18U))))))
					     : ((1U 
						 & (IData)(
							   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							    >> 0x1aU)))
						 ? 
						(0x200U 
						 | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_161_cast_reg_4530))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 0x19U)))
						  ? (IData)((QData)((IData)(
									    (0xfffU 
									     & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_fu_3035_p2 
										>> 0x18U))))))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							      >> 0x18U)))
						   ? 
						  (0x200U 
						   | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_148_cast_reg_4474))
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							       >> 0x17U)))
						    ? (IData)((QData)((IData)(
									      (0xfffU 
									       & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_fu_2854_p2 
										>> 0x18U))))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								>> 0x16U)))
						     ? 
						    (0x200U 
						     | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_135_cast_reg_4418))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								 >> 0x15U)))
						      ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_fu_2673_p2 
										>> 0x18U))))))
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								  >> 0x14U)))
						       ? 
						      (0x200U 
						       | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_122_cast_reg_4357))
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								   >> 0x13U)))
						        ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_fu_2451_p2 
										>> 0x18U))))))
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								    >> 0x12U)))
							 ? 
							(0x200U 
							 | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_109_cast_reg_4306))
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								     >> 0x11U)))
							  ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_fu_2236_p2 
										>> 0x18U))))))
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								      >> 0x10U)))
							   ? 
							  (0x200U 
							   | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_96_cast_reg_4250))
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								       >> 0xfU)))
							    ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_fu_2055_p2 
										>> 0x18U))))))
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									>> 0xeU)))
							     ? 
							    (0x200U 
							     | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_83_cast_reg_4194))
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									 >> 0xdU)))
							      ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_fu_1874_p2 
										>> 0x18U))))))
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									  >> 0xcU)))
							       ? 
							      (0x200U 
							       | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_70_cast_reg_4138))
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									   >> 0xbU)))
							        ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_fu_1693_p2 
										>> 0x18U))))))
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									    >> 0xaU)))
								 ? 
								(0x200U 
								 | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_57_cast_reg_4077))
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									     >> 9U)))
								  ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_fu_1471_p2 
										>> 0x18U))))))
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									      >> 8U)))
								   ? 
								  (0x200U 
								   | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_44_cast_reg_4026))
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									       >> 7U)))
								    ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_fu_1256_p2 
										>> 0x18U))))))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 6U)))
								     ? 
								    (0x200U 
								     | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_31_cast_reg_3970))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 5U)))
								      ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_fu_1075_p2 
										>> 0x18U))))))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 4U)))
								       ? 
								      (0x200U 
								       | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_18_cast_reg_3914))
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 3U)))
								        ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_fu_894_p2 
										>> 0x18U))))))
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 2U)))
									 ? 
									(0x200U 
									 | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_5_cast_reg_3853))
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 1U)))
									  ? (IData)((QData)((IData)(
										(0xfffU 
										& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_fu_697_p2 
										>> 0x18U))))))
									  : 0U)))))))))))))))))))))))))))))))))];
    }
    // ALWAYS at BF_encrypt_key_S.v:49
    if ((1U & ((((((((((((((((((((((((((((((((IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						      >> 1U)) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							>> 0xbU))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						       >> 0x15U))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						      >> 0x1fU))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						     >> 3U))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						    >> 0xdU))) 
					| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						   >> 0x17U))) 
				       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						  >> 5U))) 
				      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						 >> 0xfU))) 
				     | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						>> 0x19U))) 
				    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					       >> 7U))) 
				   | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					      >> 0x11U))) 
				  | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					     >> 0x1bU))) 
				 | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					    >> 2U))) 
				| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					   >> 4U))) 
			       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					  >> 6U))) 
			      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					 >> 8U))) | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 9U))) 
			    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				       >> 0xaU))) | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 0xcU))) 
			  | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				     >> 0xeU))) | (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							   >> 0x10U))) 
			| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				   >> 0x12U))) | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							  >> 0x13U))) 
		      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				 >> 0x14U))) | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							>> 0x16U))) 
		    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			       >> 0x18U))) | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						      >> 0x1aU))) 
		  | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			     >> 0x1cU))) | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						    >> 0x1dU))) 
		| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			   >> 0x1eU))) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						  >> 0x20U))))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_U__DOT__BF_encrypt_key_S_rom_U__DOT__ram
	    [(0x3ffU & ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				       >> 0x20U))) ? 
			(0x300U | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_14_cast1_reg_4651))
			 : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					   >> 0x1fU)))
			     ? (IData)((QData)((IData)(
						       (0x100U 
							| (0xffU 
							   & (((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_reg_4566 
								^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2) 
							       ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)) 
							      >> 0x10U))))))
			     : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					       >> 0x1eU)))
				 ? (0x300U | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_13_cast1_reg_4606))
				 : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						   >> 0x1dU)))
				     ? (IData)((QData)((IData)(
							       (0x100U 
								| (0xffU 
								   & (((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_reg_4510 
									^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2) 
								       ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)) 
								      >> 0x10U))))))
				     : ((1U & (IData)(
						      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						       >> 0x1cU)))
					 ? (0x300U 
					    | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast1_reg_4555))
					 : ((1U & (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							   >> 0x1bU)))
					     ? (IData)((QData)((IData)(
								       (0x100U 
									| (0xffU 
									   & (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_fu_3210_p2 
									      >> 0x10U))))))
					     : ((1U 
						 & (IData)(
							   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							    >> 0x1aU)))
						 ? 
						(0x300U 
						 | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast1_reg_4499))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 0x19U)))
						  ? (IData)((QData)((IData)(
									    (0x100U 
									     | (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_fu_3029_p2 
										>> 0x10U))))))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							      >> 0x18U)))
						   ? 
						  (0x300U 
						   | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast1_reg_4443))
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							       >> 0x17U)))
						    ? (IData)((QData)((IData)(
									      (0x100U 
									       | (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_fu_2848_p2 
										>> 0x10U))))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								>> 0x16U)))
						     ? 
						    (0x300U 
						     | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast1_reg_4387))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								 >> 0x15U)))
						      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_fu_2667_p2 
										>> 0x10U))))))
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								  >> 0x14U)))
						       ? 
						      (0x300U 
						       | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast1_reg_4326))
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								   >> 0x13U)))
						        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_fu_2445_p2 
										>> 0x10U))))))
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								    >> 0x12U)))
							 ? 
							(0x300U 
							 | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast1_reg_4275))
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								     >> 0x11U)))
							  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_fu_2230_p2 
										>> 0x10U))))))
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								      >> 0x10U)))
							   ? 
							  (0x300U 
							   | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast1_reg_4219))
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								       >> 0xfU)))
							    ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_fu_2049_p2 
										>> 0x10U))))))
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									>> 0xeU)))
							     ? 
							    (0x300U 
							     | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast1_reg_4163))
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									 >> 0xdU)))
							      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_fu_1868_p2 
										>> 0x10U))))))
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									  >> 0xcU)))
							       ? 
							      (0x300U 
							       | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast1_reg_4107))
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									   >> 0xbU)))
							        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_fu_1687_p2 
										>> 0x10U))))))
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									    >> 0xaU)))
								 ? 
								(0x300U 
								 | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast1_reg_4046))
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									     >> 9U)))
								  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_fu_1465_p2 
										>> 0x10U))))))
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									      >> 8U)))
								   ? 
								  (0x300U 
								   | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast1_reg_3995))
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									       >> 7U)))
								    ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_fu_1250_p2 
										>> 0x10U))))))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 6U)))
								     ? 
								    (0x300U 
								     | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast1_reg_3939))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 5U)))
								      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_fu_1069_p2 
										>> 0x10U))))))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 4U)))
								       ? 
								      (0x300U 
								       | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast1_reg_3883))
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 3U)))
								        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_fu_888_p2 
										>> 0x10U))))))
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 2U)))
									 ? 
									(0x300U 
									 | (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast1_reg_3822))
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
										>> 1U)))
									  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_fu_691_p2 
										>> 0x10U))))))
									  : 0U)))))))))))))))))))))))))))))))))];
    }
    vlTOPp->our__DOT__enc__DOT__n_fu_539_p5 = (((IData)(vlTOPp->our__DOT__enc__DOT__reg_484) 
						<< 0x18U) 
					       | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_480) 
						   << 0x10U) 
						  | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_476) 
						      << 8U) 
						     | (IData)(vlTOPp->our__DOT__enc__DOT__reg_472))));
    // ALWAYS at our.v:118
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
		    vlTOPp->our__DOT__r_finish_read = 0U;
		    if ((VL_ULL(1) == vlTOPp->read_ready)) {
			__Vdlyvval__our__DOT__r_data__v0 
			    = vlTOPp->read_data;
			__Vdlyvset__our__DOT__r_data__v0 = 1U;
			__Vdlyvdim0__our__DOT__r_data__v0 
			    = (0x7fU & (IData)(vlTOPp->our__DOT__read_cnt));
			if (VL_LIKELY(((VL_ULL(1) + vlTOPp->our__DOT__read_cnt) 
				       < vlTOPp->num_read))) {
			    __Vdly__our__DOT__read_cnt 
				= (VL_ULL(1) + vlTOPp->our__DOT__read_cnt);
			    __Vdly__our__DOT__r_read_addr 
				= (vlTOPp->our__DOT__r_read_addr 
				   + vlTOPp->read_size_input);
			    __Vdly__our__DOT__state = VL_ULL(2);
			    vlTOPp->our__DOT__r_finish_read = 1U;
			} else {
			    VL_WRITEF("DEAL_READ\n\n");
			    vlTOPp->our__DOT__r_read_enable = 0U;
			    vlTOPp->our__DOT__r_finish_read = 0U;
			    vlTOPp->our__DOT__r_next = 1U;
			    __Vdly__our__DOT__read_cnt = VL_ULL(0);
			    __Vdly__our__DOT__state = VL_ULL(9);
			}
		    }
		} else {
		    if ((VL_ULL(9) == vlTOPp->our__DOT__state)) {
			vlTOPp->our__DOT__r_next = 0U;
			if (vlTOPp->our__DOT__ce0) {
			    if ((1U & (((((((((((((IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 0xcU)) 
						  & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done)) 
						 | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done) 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0x18U)))) 
						| (IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 0x11U))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 0x1dU))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							 >> 0x1fU))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							>> 0xdU))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						       >> 0xeU))) 
					   | ((IData)(
						      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						       >> 0xfU)) 
					      & (IData)(vlTOPp->our__DOT__enc__DOT__tmp_209_reg_952))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						     >> 0x19U))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0x1aU))) 
					| ((IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0x1bU)) 
					   & (IData)(vlTOPp->our__DOT__enc__DOT__tmp_208_reg_1009))) 
				       | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						  >> 0x20U))))) {
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
			if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					   >> 0x20U)))) {
			    __Vdly__our__DOT__state = VL_ULL(5);
			    vlTOPp->our__DOT__r_returnvalue 
				= vlTOPp->our__DOT__ret;
			}
			if (vlTOPp->our__DOT__ce1) {
			    if ((1U & (((((((((((((IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 0xcU)) 
						  & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done)) 
						 | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done) 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0x18U)))) 
						| (IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 0x1fU))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 0x12U))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							 >> 0x1eU))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							>> 0xdU))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						       >> 0xeU))) 
					   | ((IData)(
						      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						       >> 0xfU)) 
					      & (IData)(vlTOPp->our__DOT__enc__DOT__tmp_209_reg_952))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						     >> 0x19U))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0x1aU))) 
					| ((IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0x1bU)) 
					   & (IData)(vlTOPp->our__DOT__enc__DOT__tmp_208_reg_1009))) 
				       | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						  >> 0x20U))))) {
				__Vdlyvval__our__DOT__r_data__v2 
				    = (0xffU & ((1U 
						 & (IData)(
							   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							    >> 0x20U)))
						 ? (IData)(vlTOPp->our__DOT__enc__DOT__tmp_6_reg_1049)
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							     >> 0x1fU)))
						  ? 
						 (vlTOPp->our__DOT__enc__DOT__n_2_reg_374 
						  >> 8U)
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							      >> 0x1bU)))
						   ? (IData)(vlTOPp->our__DOT__enc__DOT__tmp_405_reg_1028)
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0x19U)))
						    ? (IData)(vlTOPp->our__DOT__enc__DOT__tmp_404_reg_1023)
						    : 
						   ((1U 
						     & ((IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x12U)) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x1eU))))
						     ? (IData)(vlTOPp->our__DOT__enc__DOT__reg_516)
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0xfU)))
						      ? (IData)(vlTOPp->our__DOT__enc__DOT__tmp_411_reg_971)
						      : 
						     ((1U 
						       & ((IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0xeU)) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0x1aU))))
						       ? (IData)(vlTOPp->our__DOT__enc__DOT__reg_506)
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0xdU)))
						        ? (IData)(vlTOPp->our__DOT__enc__DOT__tmp_410_reg_966)
						        : 
						       ((1U 
							 & ((IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0xcU)) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x18U))))
							 ? (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0 
								    >> 0x10U))
							 : 0U))))))))));
				__Vdlyvset__our__DOT__r_data__v2 = 1U;
				__Vdlyvdim0__our__DOT__r_data__v2 
				    = vlTOPp->our__DOT__addr1;
			    } else {
				vlTOPp->our__DOT__r_q1 
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
				vlTOPp->our__DOT__r_finish_write = 0U;
				if ((VL_ULL(1) == vlTOPp->write_ready)) {
				    if (VL_LIKELY((
						   (VL_ULL(1) 
						    + vlTOPp->our__DOT__write_cnt) 
						   < vlTOPp->num_read))) {
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
					VL_WRITEF("FINISH_WRITE\n\n");
					vlTOPp->our__DOT__i = 0U;
					vlTOPp->our__DOT__r_finish_write = 0U;
					vlTOPp->our__DOT__r_write_enable = 0U;
					__Vdly__our__DOT__state = VL_ULL(8);
					vlTOPp->our__DOT__r_done = 1U;
					while (VL_GTS_III(1,32,32, 0x64U, vlTOPp->our__DOT__i)) {
					    VL_WRITEF("%3# ",
						      8,
						      vlTOPp->our__DOT__r_data
						      [
						      (0x7fU 
						       & vlTOPp->our__DOT__i)]);
					    vlTOPp->our__DOT__i 
						= ((IData)(1U) 
						   + vlTOPp->our__DOT__i);
					}
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
				    vlTOPp->our__DOT__r_next = 0U;
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at BF_encrypt.v:1007
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x1dU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_13_cast1_reg_4606 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast1_reg_4499) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_187_cast_reg_4621 
	    = (0xffU & ((((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_reg_4505) 
			  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2) 
			 ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)) 
			>> 8U));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_395_reg_4626 
	    = (((((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_282_reg_4382 
		   ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_631)) 
		  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_reg_4494) 
		 ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_639)) 
		^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2) 
	       ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    }
    // ALWAYS at BF_encrypt.v:1091
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x1fU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_14_cast1_reg_4651 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast1_reg_4555) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_200_cast_reg_4666 
	    = (0xffU & ((((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_reg_4561) 
			  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2) 
			 ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)) 
			>> 8U));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_387_reg_4646 
	    = (((((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_294_reg_4362 
		   ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_reg_4438) 
		  ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_635)) 
		 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_reg_4550) 
		^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_643)) 
	       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2);
    }
    vlTOPp->our__DOT__timer = __Vdly__our__DOT__timer;
    vlTOPp->our__DOT__state = __Vdly__our__DOT__state;
    vlTOPp->our__DOT__read_cnt = __Vdly__our__DOT__read_cnt;
    vlTOPp->our__DOT__write_cnt = __Vdly__our__DOT__write_cnt;
    // ALWAYSPOST at our.v:161
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
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_350_reg_4596) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_371_reg_4636) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
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
    vlTOPp->our__DOT__enc__DOT__length_fu_551_p5 = 
	(((IData)(vlTOPp->our__DOT__r_q1) << 0x18U) 
	 | (((IData)(vlTOPp->our__DOT__r_q0) << 0x10U) 
	    | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_492) 
		<< 8U) | (IData)(vlTOPp->our__DOT__enc__DOT__reg_488))));
    // ALWAYS at BF_cfb64_encrypt.v:449
    if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			>> 0x11U)) | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x1dU))))) {
	vlTOPp->our__DOT__enc__DOT__reg_516 = vlTOPp->our__DOT__enc__DOT__grp_fu_465_p2;
    }
    // ALWAYS at BF_cfb64_encrypt.v:461
    if (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		  >> 7U)) & (0U != vlTOPp->our__DOT__enc__DOT__l3_reg_314))) {
	vlTOPp->our__DOT__enc__DOT__tmp_209_reg_952 
	    = (0U == vlTOPp->our__DOT__enc__DOT__n1_reg_323);
    }
    // ALWAYS at BF_cfb64_encrypt.v:455
    if (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		  >> 0x13U)) & (0U != vlTOPp->our__DOT__enc__DOT__l_1_reg_344))) {
	vlTOPp->our__DOT__enc__DOT__tmp_208_reg_1009 
	    = (0U == vlTOPp->our__DOT__enc__DOT__n_1_reg_353);
    }
    // ALWAYS at BF_cfb64_encrypt.v:474
    if (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done) 
	 & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		    >> 0x18U)))) {
	vlTOPp->our__DOT__enc__DOT__tmp_404_reg_1023 
	    = (0xffU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0));
	vlTOPp->our__DOT__enc__DOT__tmp_405_reg_1028 
	    = (0xffU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1));
    }
    // ALWAYS at BF_cfb64_encrypt.v:488
    if (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		  >> 0xcU)) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done))) {
	vlTOPp->our__DOT__enc__DOT__tmp_410_reg_966 
	    = (0xffU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0));
	vlTOPp->our__DOT__enc__DOT__tmp_411_reg_971 
	    = (0xffU & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1));
    }
    // ALWAYS at BF_cfb64_encrypt.v:440
    if ((((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		   >> 0xcU)) & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done)) 
	 | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done) 
	    & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 0x18U))))) {
	vlTOPp->our__DOT__enc__DOT__reg_496 = (0xffU 
					       & (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0 
							  >> 8U)));
	vlTOPp->our__DOT__enc__DOT__reg_501 = (0xffU 
					       & (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1 
							  >> 0x18U)));
	vlTOPp->our__DOT__enc__DOT__reg_506 = (0xffU 
					       & (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1 
							  >> 0x10U)));
	vlTOPp->our__DOT__enc__DOT__reg_511 = (0xffU 
					       & (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1 
							  >> 8U)));
    }
    // ALWAYS at BF_cfb64_encrypt.v:495
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		       >> 0x1fU)))) {
	vlTOPp->our__DOT__enc__DOT__tmp_4_reg_1044 
	    = (0xffU & (vlTOPp->our__DOT__enc__DOT__n_2_reg_374 
			>> 0x10U));
	vlTOPp->our__DOT__enc__DOT__tmp_6_reg_1049 
	    = (0xffU & (vlTOPp->our__DOT__enc__DOT__n_2_reg_374 
			>> 0x18U));
    }
    // ALWAYS at BF_encrypt.v:996
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x19U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast1_reg_4499 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast1_reg_4387) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_reg_4510 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_fu_3029_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_reg_4505 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_fu_3023_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_reg_4515 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_fu_3035_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_reg_4494 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_161_cast_reg_4530 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_fu_3023_p2) 
			>> 8U));
    }
    // ALWAYS at BF_encrypt.v:1080
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x1bU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast1_reg_4555 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast1_reg_4443) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_reg_4566 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_fu_3210_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_reg_4561 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_fu_3204_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_reg_4571 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_fu_3216_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_reg_4550 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_174_cast_reg_4586 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_fu_3204_p2) 
			>> 8U));
    }
    vlTOPp->our__DOT__enc__DOT__grp_fu_465_p2 = ((IData)(vlTOPp->our__DOT__r_q1) 
						 ^ (IData)(vlTOPp->our__DOT__r_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_308_reg_4484) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_329_reg_4540) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    // ALWAYS at BF_cfb64_encrypt.v:363
    if (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		  >> 7U)) & (0U == vlTOPp->our__DOT__enc__DOT__l3_reg_314))) {
	vlTOPp->our__DOT__enc__DOT__n_2_reg_374 = vlTOPp->our__DOT__enc__DOT__n1_reg_323;
    } else {
	if (((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
		      >> 0x13U)) & (0U == vlTOPp->our__DOT__enc__DOT__l_1_reg_344))) {
	    vlTOPp->our__DOT__enc__DOT__n_2_reg_374 
		= vlTOPp->our__DOT__enc__DOT__n_1_reg_353;
	}
    }
    // ALWAYS at BF_encrypt.v:985
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x15U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast1_reg_4387 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast1_reg_4275) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_reg_4398 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_fu_2667_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_reg_4393 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_fu_2661_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_reg_4403 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_fu_2673_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_135_cast_reg_4418 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_fu_2661_p2) 
			>> 8U));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_282_reg_4382 
	    = (((((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_181_reg_4082 
		   ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_reg_4158) 
		  ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_635)) 
		 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_reg_4270) 
		^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_643)) 
	       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2);
    }
    // ALWAYS at BF_encrypt.v:1069
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x17U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast1_reg_4443 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast1_reg_4326) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_reg_4454 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_fu_2848_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_reg_4449 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_fu_2842_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_reg_4459 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_fu_2854_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_reg_4438 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_148_cast_reg_4474 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_fu_2842_p2) 
			>> 8U));
    }
    vlTOPp->our__DOT__enc__DOT__l3_reg_314 = __Vdly__our__DOT__enc__DOT__l3_reg_314;
    vlTOPp->our__DOT__enc__DOT__n1_reg_323 = __Vdly__our__DOT__enc__DOT__n1_reg_323;
    vlTOPp->our__DOT__enc__DOT__l_1_reg_344 = __Vdly__our__DOT__enc__DOT__l_1_reg_344;
    vlTOPp->our__DOT__enc__DOT__n_1_reg_353 = __Vdly__our__DOT__enc__DOT__n_1_reg_353;
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_266_reg_4372) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_287_reg_4428) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    // ALWAYS at BF_encrypt.v:1048
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x11U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast1_reg_4275 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast1_reg_4163) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_reg_4286 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_fu_2230_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_reg_4281 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_fu_2224_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_reg_4291 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_fu_2236_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_reg_4270 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_109_cast_reg_4306 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_fu_2224_p2) 
			>> 8U));
    }
    // ALWAYS at BF_encrypt.v:1150
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0x13U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast1_reg_4326 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast1_reg_4219) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_reg_4337 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_fu_2445_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_reg_4332 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_fu_2439_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_reg_4342 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_fu_2451_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_122_cast_reg_4357 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_fu_2439_p2) 
			>> 8U));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_294_reg_4362 
	    = (((((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_164_reg_4102 
		   ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_631)) 
		  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_reg_4214) 
		 ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_639)) 
		^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2) 
	       ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    }
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_224_reg_4260) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_245_reg_4316) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    // ALWAYS at BF_encrypt.v:1037
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0xdU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast1_reg_4163 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast1_reg_4046) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_reg_4174 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_fu_1868_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_reg_4169 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_fu_1862_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_reg_4179 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_fu_1874_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_reg_4158 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_83_cast_reg_4194 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_fu_1862_p2) 
			>> 8U));
    }
    // ALWAYS at BF_encrypt.v:1139
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0xfU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast1_reg_4219 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast1_reg_4107) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_reg_4230 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_fu_2049_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_reg_4225 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_fu_2043_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_reg_4235 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_fu_2055_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_reg_4214 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_96_cast_reg_4250 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_fu_2043_p2) 
			>> 8U));
    }
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_171_reg_4148) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_201_reg_4204) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    // ALWAYS at BF_encrypt.v:1026
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 9U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast1_reg_4046 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast1_reg_3939) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_reg_4057 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_fu_1465_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_reg_4052 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_fu_1459_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_reg_4062 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_fu_1471_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_181_reg_4082 
	    = ((((((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_631) 
		   ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read) 
		  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_reg_3934) 
		 ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_639)) 
		^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2) 
	       ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_57_cast_reg_4077 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_fu_1459_p2) 
			>> 8U));
    }
    // ALWAYS at BF_encrypt.v:1128
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 0xbU)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast1_reg_4107 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast1_reg_3995) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_reg_4118 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_fu_1687_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_reg_4113 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_fu_1681_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_reg_4123 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_fu_1693_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_164_reg_4102 
	    = (((((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_reg_3878 
		   ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read) 
		  ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_635)) 
		 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_reg_3990) 
		^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_643)) 
	       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2);
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_70_cast_reg_4138 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_fu_1681_p2) 
			>> 8U));
    }
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_110_reg_4036) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_reg_4092) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    // ALWAYS at BF_encrypt.v:1173
    if ((1U & (((IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			 >> 5U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					    >> 0xfU))) 
	       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x19U))))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_639 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0;
    }
    // ALWAYS at BF_encrypt.v:1161
    if ((1U & ((((IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 1U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					     >> 0xbU))) 
		| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			   >> 0x15U))) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						  >> 0x1fU))))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_631 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0;
    }
    // ALWAYS at BF_encrypt.v:1015
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 5U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast1_reg_3939 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast1_reg_3822) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_reg_3950 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_fu_1069_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_reg_3945 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_fu_1063_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_reg_3955 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_fu_1075_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_reg_3934 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_31_cast_reg_3970 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_fu_1063_p2) 
			>> 8U));
    }
    // ALWAYS at BF_encrypt.v:1167
    if ((1U & (((IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			 >> 3U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					    >> 0xdU))) 
	       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x17U))))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_635 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0;
    }
    // ALWAYS at BF_encrypt.v:1179
    if ((1U & (((IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			 >> 7U)) | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					    >> 0x11U))) 
	       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x1bU))))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_643 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0;
    }
    // ALWAYS at BF_encrypt.v:1117
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 7U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast1_reg_3995 
	    = (0xffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast1_reg_3883) 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_reg_4006 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_fu_1250_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_reg_4001 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_fu_1244_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_reg_4011 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_fu_1256_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_reg_3990 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_44_cast_reg_4026 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_fu_1244_p2) 
			>> 8U));
    }
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_reg_3924) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_80_reg_3980) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    // ALWAYS at BF_encrypt.v:1059
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 1U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast1_reg_3822 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0) 
			^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_reg_3833 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_fu_691_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_reg_3828 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_fu_685_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_reg_3838 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_fu_697_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_5_cast_reg_3853 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_fu_685_p2) 
			>> 8U));
    }
    // ALWAYS at BF_encrypt.v:1106
    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
		       >> 3U)))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast1_reg_3883 
	    = (0xffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_reg_3894 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_fu_888_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_reg_3889 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_fu_882_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_reg_3899 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_fu_894_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_reg_3878 
	    = vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2;
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_18_cast_reg_3914 
	    = (0xffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_fu_882_p2) 
			>> 8U));
    }
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_17_reg_3863) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    // ALWAYS at BF_encrypt_key_P.v:36
    if ((1U & ((((((((((((((((((IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					>> 0x1fU)) 
			       | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					  >> 2U))) 
			      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
					 >> 4U))) | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 6U))) 
			    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				       >> 8U))) | (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							   >> 0xaU))) 
			  | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				     >> 0xcU))) | (IData)(
							  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							   >> 0xeU))) 
			| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				   >> 0x10U))) | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							  >> 0x12U))) 
		      | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
				 >> 0x14U))) | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							>> 0x16U))) 
		    | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			       >> 0x18U))) | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						      >> 0x1aU))) 
		  | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			     >> 0x1cU))) | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
						    >> 0x1eU))) 
		| (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			   >> 0x20U))) | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
					  & (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start))))) {
	vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0 
	    = ((0x11U >= (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_address0))
	        ? vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_U__DOT__BF_encrypt_key_P_rom_U__DOT__ram
	       [vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_address0]
	        : VL_ULL(0));
    }
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_15_cast_fu_3792_p2 
	= ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_395_reg_4626 
	    ^ (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
		^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_392_reg_4676) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1))) 
	   ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    // ALWAYS at BF_cfb64_encrypt.v:319
    if (vlTOPp->reset) {
	vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start = 0U;
    } else {
	if ((1U & ((IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			    >> 0xbU)) | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						 >> 0x17U))))) {
	    vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start = 1U;
	} else {
	    if ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			       >> 0x21U)))) {
		vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start = 0U;
	    }
	}
    }
    // ALWAYS at BF_encrypt.v:895
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->reset) ? VL_ULL(1) : vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_NS_fsm);
    // ALWAYS at BF_cfb64_encrypt.v:311
    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm = ((IData)(vlTOPp->reset)
					      ? VL_ULL(1)
					      : vlTOPp->our__DOT__enc__DOT__ap_NS_fsm);
}

void Vour::_initial__TOP__2(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_initial__TOP__2\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign108[4];
    VL_SIGW(__Vtemp2,223,0,7);
    //char	__VpadToAlign140[4];
    VL_SIGW(__Vtemp3,223,0,7);
    // Body
    // INITIAL at BF_encrypt_key_S.v:33
    __Vtemp2[0U] = 0x2e646174U;
    __Vtemp2[1U] = 0x5f726f6dU;
    __Vtemp2[2U] = 0x65795f53U;
    __Vtemp2[3U] = 0x70745f6bU;
    __Vtemp2[4U] = 0x6e637279U;
    __Vtemp2[5U] = 0x42465f65U;
    __Vtemp2[6U] = 0x2e2fU;
    VL_READMEM_W (true,64,1024, 0,7, __Vtemp2, vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_U__DOT__BF_encrypt_key_S_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at BF_encrypt_key_P.v:30
    __Vtemp3[0U] = 0x2e646174U;
    __Vtemp3[1U] = 0x5f726f6dU;
    __Vtemp3[2U] = 0x65795f50U;
    __Vtemp3[3U] = 0x70745f6bU;
    __Vtemp3[4U] = 0x6e637279U;
    __Vtemp3[5U] = 0x42465f65U;
    __Vtemp3[6U] = 0x2e2fU;
    VL_READMEM_W (true,64,18, 0,7, __Vtemp3, vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_U__DOT__BF_encrypt_key_P_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at BF_encrypt.v:862
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm = VL_ULL(1);
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg = VL_ULL(0);
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg = VL_ULL(0);
    // INITIAL at BF_cfb64_encrypt.v:293
    vlTOPp->our__DOT__enc__DOT__ap_CS_fsm = VL_ULL(1);
    vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start = 0U;
}

void Vour::_settle__TOP__3(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__3\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__enc__DOT__n_fu_539_p5 = (((IData)(vlTOPp->our__DOT__enc__DOT__reg_484) 
						<< 0x18U) 
					       | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_480) 
						   << 0x10U) 
						  | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_476) 
						      << 8U) 
						     | (IData)(vlTOPp->our__DOT__enc__DOT__reg_472))));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_350_reg_4596) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_371_reg_4636) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
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
    vlTOPp->our__DOT__enc__DOT__length_fu_551_p5 = 
	(((IData)(vlTOPp->our__DOT__r_q1) << 0x18U) 
	 | (((IData)(vlTOPp->our__DOT__r_q0) << 0x10U) 
	    | (((IData)(vlTOPp->our__DOT__enc__DOT__reg_492) 
		<< 8U) | (IData)(vlTOPp->our__DOT__enc__DOT__reg_488))));
    vlTOPp->our__DOT__enc__DOT__grp_fu_465_p2 = ((IData)(vlTOPp->our__DOT__r_q1) 
						 ^ (IData)(vlTOPp->our__DOT__r_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_308_reg_4484) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_329_reg_4540) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_266_reg_4372) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_287_reg_4428) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_224_reg_4260) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_245_reg_4316) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_171_reg_4148) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_201_reg_4204) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_110_reg_4036) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_reg_4092) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_reg_3924) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_80_reg_3980) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
	= (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
	    ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_17_reg_3863) 
	   + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_15_cast_fu_3792_p2 
	= ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_395_reg_4626 
	    ^ (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0) 
		^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_392_reg_4676) 
	       + (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1))) 
	   ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    // ALWAYS at BF_encrypt.v:1299
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x21U))) ? (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_15_cast_reg_4686))
	    : vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
    // ALWAYS at BF_encrypt.v:1315
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_address0 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x20U))) ? 0x10U : ((1U 
						  & (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 0x1fU)))
						  ? 0x11U
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							      >> 0x1eU)))
						   ? 0xfU
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							       >> 0x1cU)))
						    ? 0xeU
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								>> 0x1aU)))
						     ? 0xdU
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								 >> 0x18U)))
						      ? 0xcU
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								  >> 0x16U)))
						       ? 0xbU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								   >> 0x14U)))
						        ? 0xaU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								    >> 0x12U)))
							 ? 9U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								     >> 0x10U)))
							  ? 8U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								      >> 0xeU)))
							   ? 7U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								       >> 0xcU)))
							    ? 6U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									>> 0xaU)))
							     ? 5U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									 >> 8U)))
							      ? 4U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									  >> 6U)))
							       ? 3U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									   >> 4U)))
							        ? 2U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									    >> 2U)))
								 ? 1U
								 : 0U)))))))))))))))));
    // ALWAYS at BF_encrypt.v:1521
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_NS_fsm 
	= (((((((((VL_ULL(1) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
		  | (VL_ULL(2) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		 | (VL_ULL(4) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		| (VL_ULL(8) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
	       | (VL_ULL(0x10) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
	      | (VL_ULL(0x20) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
	     | (VL_ULL(0x40) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
	    | (VL_ULL(0x80) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm))
	    ? ((VL_ULL(1) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
	        ? ((IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start)
		    ? VL_ULL(2) : VL_ULL(1)) : ((VL_ULL(2) 
						 == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						 ? VL_ULL(4)
						 : 
						((VL_ULL(4) 
						  == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						  ? VL_ULL(8)
						  : 
						 ((VL_ULL(8) 
						   == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						   ? VL_ULL(0x10)
						   : 
						  ((VL_ULL(0x10) 
						    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						    ? VL_ULL(0x20)
						    : 
						   ((VL_ULL(0x20) 
						     == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						     ? VL_ULL(0x40)
						     : 
						    ((VL_ULL(0x40) 
						      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						      ? VL_ULL(0x80)
						      : VL_ULL(0x100))))))))
	    : (((((((((VL_ULL(0x100) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
		      | (VL_ULL(0x200) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		   | (VL_ULL(0x1000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		  | (VL_ULL(0x2000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		 | (VL_ULL(0x4000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		| (VL_ULL(0x8000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm))
	        ? ((VL_ULL(0x100) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
		    ? VL_ULL(0x200) : ((VL_ULL(0x200) 
					== vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
				        ? VL_ULL(0x400)
				        : ((VL_ULL(0x400) 
					    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
					    ? VL_ULL(0x800)
					    : ((VL_ULL(0x800) 
						== vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
					        ? VL_ULL(0x1000)
					        : (
						   (VL_ULL(0x1000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						    ? VL_ULL(0x2000)
						    : 
						   ((VL_ULL(0x2000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						     ? VL_ULL(0x4000)
						     : 
						    ((VL_ULL(0x4000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						      ? VL_ULL(0x8000)
						      : VL_ULL(0x10000))))))))
	        : (((((((((VL_ULL(0x10000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
			  | (VL_ULL(0x20000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		       | (VL_ULL(0x100000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		      | (VL_ULL(0x200000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm))
		    ? ((VL_ULL(0x10000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
		        ? VL_ULL(0x20000) : ((VL_ULL(0x20000) 
					      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
					      ? VL_ULL(0x40000)
					      : ((VL_ULL(0x40000) 
						  == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						  ? VL_ULL(0x80000)
						  : 
						 ((VL_ULL(0x80000) 
						   == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						   ? VL_ULL(0x100000)
						   : 
						  ((VL_ULL(0x100000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						    ? VL_ULL(0x200000)
						    : 
						   ((VL_ULL(0x200000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						     ? VL_ULL(0x400000)
						     : 
						    ((VL_ULL(0x400000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						      ? VL_ULL(0x800000)
						      : VL_ULL(0x1000000))))))))
		    : (((((((((VL_ULL(0x1000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
			      | (VL_ULL(0x2000000) 
				 == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			   | (VL_ULL(0x10000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			  | (VL_ULL(0x20000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm))
		        ? ((VL_ULL(0x1000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
			    ? VL_ULL(0x2000000) : (
						   (VL_ULL(0x2000000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000)
						    : 
						   ((VL_ULL(0x4000000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000)
						     : 
						    ((VL_ULL(0x8000000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						      ? VL_ULL(0x10000000)
						      : 
						     ((VL_ULL(0x10000000) 
						       == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						       ? VL_ULL(0x20000000)
						       : 
						      ((VL_ULL(0x20000000) 
							== vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						        ? VL_ULL(0x40000000)
						        : 
						       ((VL_ULL(0x40000000) 
							 == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
							 ? VL_ULL(0x80000000)
							 : VL_ULL(0x100000000))))))))
		        : ((VL_ULL(0x100000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
			    ? VL_ULL(0x200000000) : 
			   ((VL_ULL(0x200000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
			     ? VL_ULL(1) : VL_ULL(0)))))));
    // ALWAYS at BF_encrypt.v:1275
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start)) 
		  & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		 | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			    >> 0x21U))));
    // ALWAYS at BF_cfb64_encrypt.v:590
    vlTOPp->our__DOT__addr1 = ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x20U)))
			        ? 0x5fU : ((1U & (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 0x1fU)))
					    ? 0x5dU
					    : ((1U 
						& (IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 0x1eU)))
					        ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_20_reg_991)
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0x1cU)))
						    ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_23_reg_1033)
						    : 
						   ((1U 
						     & ((IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x12U)) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x10U))))
						     ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_24_reg_976)
						     : 
						    ((1U 
						      & ((((IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 0xaU)) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x16U))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0xfU))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 0x1bU))))
						      ? 0x57U
						      : 
						     ((1U 
						       & ((((IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 9U)) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x15U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0xeU))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0x1aU))))
						       ? 0x55U
						       : 
						      ((1U 
							& ((((IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 8U)) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0x14U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0xdU))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x19U))))
						        ? 0x53U
						        : 
						       ((1U 
							 & ((((IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0xcU)) 
							      | (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 0x18U))) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 7U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x13U))))
							 ? 0x51U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 5U)))
							  ? 0x63U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 4U)))
							   ? 0x61U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 3U)))
							    ? 0x5fU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 2U)))
							     ? 0x5dU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 1U)))
							      ? 0x5bU
							      : 
							     ((1U 
							       & (IData)(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
							       ? 0x59U
							       : 0U)))))))))))))));
    // ALWAYS at BF_cfb64_encrypt.v:552
    vlTOPp->our__DOT__addr0 = ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x20U)))
			        ? 0x5eU : ((1U & (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 0x1fU)))
					    ? 0x5cU
					    : ((1U 
						& (IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 0x1dU)))
					        ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_23_reg_1033)
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0x1cU)))
						    ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_19_reg_986)
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0x11U)))
						     ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_22_reg_934)
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x10U)))
						      ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_21_reg_929)
						      : 
						     ((1U 
						       & ((((IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0xaU)) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x16U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0xfU))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0x1bU))))
						       ? 0x56U
						       : 
						      ((1U 
							& ((((IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 9U)) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0x15U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0xeU))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x1aU))))
						        ? 0x54U
						        : 
						       ((1U 
							 & ((((IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 8U)) 
							      | (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 0x14U))) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0xdU))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x19U))))
							 ? 0x52U
							 : 
							((1U 
							  & ((((IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0xcU)) 
							       | (IData)(
									 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									  >> 0x18U))) 
							      | (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 7U))) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0x13U))))
							  ? 0x50U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 5U)))
							   ? 0x62U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 4U)))
							    ? 0x60U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 3U)))
							     ? 0x5eU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 2U)))
							      ? 0x5cU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									  >> 1U)))
							       ? 0x5aU
							       : 
							      ((1U 
								& (IData)(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
							        ? 0x58U
							        : 0U))))))))))))))));
    // ALWAYS at BF_cfb64_encrypt.v:532
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			  >> 0x18U))) ? vlTOPp->our__DOT__enc__DOT__tmp_402_reg_1013
	    : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			      >> 0xcU))) ? vlTOPp->our__DOT__enc__DOT__tmp_407_reg_956
	        : 0U));
    // ALWAYS at BF_cfb64_encrypt.v:542
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			  >> 0x18U))) ? vlTOPp->our__DOT__enc__DOT__tmp_403_reg_1018
	    : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			      >> 0xcU))) ? vlTOPp->our__DOT__enc__DOT__tmp_408_reg_961
	        : 0U));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_fu_3029_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_reg_4398 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_fu_3023_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_reg_4393) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_fu_3035_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_reg_4403 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_fu_3210_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_reg_4454 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_fu_3204_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_reg_4449) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_fu_3216_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_reg_4459 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_fu_2667_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_reg_4286 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_fu_2661_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_reg_4281) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_fu_2673_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_reg_4291 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_fu_2848_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_reg_4337 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_fu_2842_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_reg_4332) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_fu_2854_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_reg_4342 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_fu_2230_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_reg_4174 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_fu_2224_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_reg_4169) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_fu_2236_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_reg_4179 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_fu_2445_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_reg_4230 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_fu_2439_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_reg_4225) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_fu_2451_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_reg_4235 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_fu_1868_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_reg_4057 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_fu_1862_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_reg_4052) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_fu_1874_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_reg_4062 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_fu_2049_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_reg_4118 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_fu_2043_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_reg_4113) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_fu_2055_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_reg_4123 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_fu_1465_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_reg_3950 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_fu_1459_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_reg_3945) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_fu_1471_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_reg_3955 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_fu_1687_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_reg_4006 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_fu_1681_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_reg_4001) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_fu_1693_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_reg_4011 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_fu_1069_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_reg_3833 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_fu_1063_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_reg_3828) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_fu_1075_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_reg_3838 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_fu_1250_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_reg_3894 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_fu_1244_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_reg_3889) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_fu_1256_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_reg_3899 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    // ALWAYS at BF_encrypt.v:1307
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x21U))) ? (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_15_cast_fu_3792_p2))
	    : vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
}

VL_INLINE_OPT void Vour::_sequent__TOP__4(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__4\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at BF_encrypt.v:1299
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x21U))) ? (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_15_cast_reg_4686))
	    : vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg);
    // ALWAYS at BF_encrypt.v:1315
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_address0 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x20U))) ? 0x10U : ((1U 
						  & (IData)(
							    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							     >> 0x1fU)))
						  ? 0x11U
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							      >> 0x1eU)))
						   ? 0xfU
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
							       >> 0x1cU)))
						    ? 0xeU
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								>> 0x1aU)))
						     ? 0xdU
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								 >> 0x18U)))
						      ? 0xcU
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								  >> 0x16U)))
						       ? 0xbU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								   >> 0x14U)))
						        ? 0xaU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								    >> 0x12U)))
							 ? 9U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								     >> 0x10U)))
							  ? 8U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								      >> 0xeU)))
							   ? 7U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
								       >> 0xcU)))
							    ? 6U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									>> 0xaU)))
							     ? 5U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									 >> 8U)))
							      ? 4U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									  >> 6U)))
							       ? 3U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									   >> 4U)))
							        ? 2U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
									    >> 2U)))
								 ? 1U
								 : 0U)))))))))))))))));
    // ALWAYS at BF_encrypt.v:1521
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_NS_fsm 
	= (((((((((VL_ULL(1) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
		  | (VL_ULL(2) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		 | (VL_ULL(4) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		| (VL_ULL(8) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
	       | (VL_ULL(0x10) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
	      | (VL_ULL(0x20) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
	     | (VL_ULL(0x40) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
	    | (VL_ULL(0x80) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm))
	    ? ((VL_ULL(1) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
	        ? ((IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start)
		    ? VL_ULL(2) : VL_ULL(1)) : ((VL_ULL(2) 
						 == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						 ? VL_ULL(4)
						 : 
						((VL_ULL(4) 
						  == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						  ? VL_ULL(8)
						  : 
						 ((VL_ULL(8) 
						   == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						   ? VL_ULL(0x10)
						   : 
						  ((VL_ULL(0x10) 
						    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						    ? VL_ULL(0x20)
						    : 
						   ((VL_ULL(0x20) 
						     == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						     ? VL_ULL(0x40)
						     : 
						    ((VL_ULL(0x40) 
						      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						      ? VL_ULL(0x80)
						      : VL_ULL(0x100))))))))
	    : (((((((((VL_ULL(0x100) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
		      | (VL_ULL(0x200) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		   | (VL_ULL(0x1000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		  | (VL_ULL(0x2000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		 | (VL_ULL(0x4000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		| (VL_ULL(0x8000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm))
	        ? ((VL_ULL(0x100) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
		    ? VL_ULL(0x200) : ((VL_ULL(0x200) 
					== vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
				        ? VL_ULL(0x400)
				        : ((VL_ULL(0x400) 
					    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
					    ? VL_ULL(0x800)
					    : ((VL_ULL(0x800) 
						== vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
					        ? VL_ULL(0x1000)
					        : (
						   (VL_ULL(0x1000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						    ? VL_ULL(0x2000)
						    : 
						   ((VL_ULL(0x2000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						     ? VL_ULL(0x4000)
						     : 
						    ((VL_ULL(0x4000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						      ? VL_ULL(0x8000)
						      : VL_ULL(0x10000))))))))
	        : (((((((((VL_ULL(0x10000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
			  | (VL_ULL(0x20000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		       | (VL_ULL(0x100000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		      | (VL_ULL(0x200000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm))
		    ? ((VL_ULL(0x10000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
		        ? VL_ULL(0x20000) : ((VL_ULL(0x20000) 
					      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
					      ? VL_ULL(0x40000)
					      : ((VL_ULL(0x40000) 
						  == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						  ? VL_ULL(0x80000)
						  : 
						 ((VL_ULL(0x80000) 
						   == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						   ? VL_ULL(0x100000)
						   : 
						  ((VL_ULL(0x100000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						    ? VL_ULL(0x200000)
						    : 
						   ((VL_ULL(0x200000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						     ? VL_ULL(0x400000)
						     : 
						    ((VL_ULL(0x400000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						      ? VL_ULL(0x800000)
						      : VL_ULL(0x1000000))))))))
		    : (((((((((VL_ULL(0x1000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm) 
			      | (VL_ULL(0x2000000) 
				 == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			   | (VL_ULL(0x10000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			  | (VL_ULL(0x20000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm))
		        ? ((VL_ULL(0x1000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
			    ? VL_ULL(0x2000000) : (
						   (VL_ULL(0x2000000) 
						    == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000)
						    : 
						   ((VL_ULL(0x4000000) 
						     == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000)
						     : 
						    ((VL_ULL(0x8000000) 
						      == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						      ? VL_ULL(0x10000000)
						      : 
						     ((VL_ULL(0x10000000) 
						       == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						       ? VL_ULL(0x20000000)
						       : 
						      ((VL_ULL(0x20000000) 
							== vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
						        ? VL_ULL(0x40000000)
						        : 
						       ((VL_ULL(0x40000000) 
							 == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
							 ? VL_ULL(0x80000000)
							 : VL_ULL(0x100000000))))))))
		        : ((VL_ULL(0x100000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
			    ? VL_ULL(0x200000000) : 
			   ((VL_ULL(0x200000000) == vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)
			     ? VL_ULL(1) : VL_ULL(0)))))));
    // ALWAYS at BF_encrypt.v:1275
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done 
	= (1U & (((~ (IData)(vlTOPp->our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start)) 
		  & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm)) 
		 | (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			    >> 0x21U))));
    // ALWAYS at BF_cfb64_encrypt.v:590
    vlTOPp->our__DOT__addr1 = ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x20U)))
			        ? 0x5fU : ((1U & (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 0x1fU)))
					    ? 0x5dU
					    : ((1U 
						& (IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 0x1eU)))
					        ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_20_reg_991)
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0x1cU)))
						    ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_23_reg_1033)
						    : 
						   ((1U 
						     & ((IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x12U)) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x10U))))
						     ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_24_reg_976)
						     : 
						    ((1U 
						      & ((((IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 0xaU)) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x16U))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0xfU))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 0x1bU))))
						      ? 0x57U
						      : 
						     ((1U 
						       & ((((IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 9U)) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x15U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0xeU))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0x1aU))))
						       ? 0x55U
						       : 
						      ((1U 
							& ((((IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 8U)) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0x14U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0xdU))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x19U))))
						        ? 0x53U
						        : 
						       ((1U 
							 & ((((IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0xcU)) 
							      | (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 0x18U))) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 7U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x13U))))
							 ? 0x51U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 5U)))
							  ? 0x63U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 4U)))
							   ? 0x61U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 3U)))
							    ? 0x5fU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 2U)))
							     ? 0x5dU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 1U)))
							      ? 0x5bU
							      : 
							     ((1U 
							       & (IData)(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
							       ? 0x59U
							       : 0U)))))))))))))));
    // ALWAYS at BF_cfb64_encrypt.v:552
    vlTOPp->our__DOT__addr0 = ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x20U)))
			        ? 0x5eU : ((1U & (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 0x1fU)))
					    ? 0x5cU
					    : ((1U 
						& (IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 0x1dU)))
					        ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_23_reg_1033)
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0x1cU)))
						    ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_19_reg_986)
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0x11U)))
						     ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_22_reg_934)
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x10U)))
						      ? (IData)(vlTOPp->our__DOT__enc__DOT__in_addr_21_reg_929)
						      : 
						     ((1U 
						       & ((((IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0xaU)) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x16U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0xfU))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 0x1bU))))
						       ? 0x56U
						       : 
						      ((1U 
							& ((((IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 9U)) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0x15U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0xeU))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x1aU))))
						        ? 0x54U
						        : 
						       ((1U 
							 & ((((IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 8U)) 
							      | (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 0x14U))) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0xdU))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 0x19U))))
							 ? 0x52U
							 : 
							((1U 
							  & ((((IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0xcU)) 
							       | (IData)(
									 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									  >> 0x18U))) 
							      | (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 7U))) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 0x13U))))
							  ? 0x50U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 5U)))
							   ? 0x62U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 4U)))
							    ? 0x60U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 3U)))
							     ? 0x5eU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									 >> 2U)))
							      ? 0x5cU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									  >> 1U)))
							       ? 0x5aU
							       : 
							      ((1U 
								& (IData)(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
							        ? 0x58U
							        : 0U))))))))))))))));
    // ALWAYS at BF_cfb64_encrypt.v:532
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			  >> 0x18U))) ? vlTOPp->our__DOT__enc__DOT__tmp_402_reg_1013
	    : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			      >> 0xcU))) ? vlTOPp->our__DOT__enc__DOT__tmp_407_reg_956
	        : 0U));
    // ALWAYS at BF_cfb64_encrypt.v:542
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			  >> 0x18U))) ? vlTOPp->our__DOT__enc__DOT__tmp_403_reg_1018
	    : ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
			      >> 0xcU))) ? vlTOPp->our__DOT__enc__DOT__tmp_408_reg_961
	        : 0U));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_fu_3029_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_reg_4398 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_fu_3023_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_reg_4393) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_fu_3035_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_reg_4403 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_fu_3210_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_reg_4454 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_fu_3204_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_reg_4449) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_fu_3216_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_reg_4459 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_fu_2667_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_reg_4286 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_fu_2661_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_reg_4281) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_fu_2673_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_reg_4291 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_fu_2848_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_reg_4337 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_fu_2842_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_reg_4332) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_fu_2854_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_reg_4342 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_fu_2230_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_reg_4174 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_fu_2224_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_reg_4169) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_fu_2236_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_reg_4179 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_fu_2445_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_reg_4230 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_fu_2439_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_reg_4225) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_fu_2451_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_reg_4235 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_fu_1868_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_reg_4057 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_fu_1862_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_reg_4052) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_fu_1874_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_reg_4062 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_fu_2049_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_reg_4118 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_fu_2043_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_reg_4113) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_fu_2055_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_reg_4123 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_fu_1465_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_reg_3950 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_fu_1459_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_reg_3945) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_fu_1471_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_reg_3955 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_fu_1687_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_reg_4006 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_fu_1681_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_reg_4001) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_fu_1693_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_reg_4011 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_fu_1069_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_reg_3833 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_fu_1063_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_reg_3828) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_fu_1075_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_reg_3838 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_fu_1250_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_reg_3894 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_fu_1244_p2 
	= (0xffffU & (((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_reg_3889) 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_fu_1256_p2 
	= (VL_ULL(0xfffffffff) & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_reg_3899 
				   ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
    // ALWAYS at BF_encrypt.v:1307
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1 
	= ((1U & (IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm 
			  >> 0x21U))) ? (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_15_cast_fu_3792_p2))
	    : vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg);
    // ALWAYS at BF_cfb64_encrypt.v:642
    vlTOPp->our__DOT__d0 = (0xffU & ((1U & (IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0x20U)))
				      ? (IData)(vlTOPp->our__DOT__enc__DOT__tmp_4_reg_1044)
				      : ((1U & (IData)(
						       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							>> 0x1fU)))
					  ? vlTOPp->our__DOT__enc__DOT__n_2_reg_374
					  : ((1U & (IData)(
							   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							    >> 0x1dU)))
					      ? (IData)(vlTOPp->our__DOT__r_q0)
					      : ((1U 
						  & (IData)(
							    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							     >> 0x11U)))
						  ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_fu_465_p2)
						  : 
						 ((1U 
						   & ((IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0xfU)) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x1bU))))
						   ? (IData)(vlTOPp->our__DOT__enc__DOT__reg_511)
						   : 
						  ((1U 
						    & ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0xeU)) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								  >> 0x1aU))))
						    ? (IData)(vlTOPp->our__DOT__enc__DOT__reg_501)
						    : 
						   ((1U 
						     & ((IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0xdU)) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x19U))))
						     ? (IData)(vlTOPp->our__DOT__enc__DOT__reg_496)
						     : 
						    ((1U 
						      & ((IData)(
								 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								  >> 0xcU)) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 0x18U))))
						      ? (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0 
								 >> 0x18U))
						      : 0U)))))))));
    // ALWAYS at BF_cfb64_encrypt.v:626
    vlTOPp->our__DOT__ce0 = (1U & (((((((((((((((((
						   (((((((((((IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 1U)) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 3U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 8U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x14U))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 4U))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 9U))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x15U))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								  >> 5U))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0xaU))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0x16U))) 
						    | ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0xcU)) 
						       & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done))) 
						   | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done) 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x18U)))) 
						  | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							     >> 0x11U))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							    >> 0x1dU))) 
						| ((IData)(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
						   & (IData)(vlTOPp->our__DOT__r_next))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 2U))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							 >> 7U))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							>> 0xfU))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						       >> 0x13U))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						      >> 0x1bU))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						     >> 0x1fU))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0xdU))) 
					| (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						   >> 0xeU))) 
				       | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						  >> 0x10U))) 
				      | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						 >> 0x19U))) 
				     | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						>> 0x1aU))) 
				    | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					       >> 0x1cU))) 
				   | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x20U))));
    // ALWAYS at BF_cfb64_encrypt.v:634
    vlTOPp->our__DOT__ce1 = (1U & (((((((((((((((((
						   (((((((((((IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 1U)) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 3U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 8U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x14U))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 4U))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 9U))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x15U))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								  >> 5U))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0xaU))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0x16U))) 
						    | ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0xcU)) 
						       & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done))) 
						   | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done) 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x18U)))) 
						  | ((IData)(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
						     & (IData)(vlTOPp->our__DOT__r_next))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							    >> 2U))) 
						| (IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 7U))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 0xfU))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							 >> 0x13U))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							>> 0x1bU))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						       >> 0x1fU))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						      >> 0x12U))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						     >> 0x1eU))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0xdU))) 
					| (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						   >> 0xeU))) 
				       | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						  >> 0x10U))) 
				      | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						 >> 0x19U))) 
				     | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						>> 0x1aU))) 
				    | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					       >> 0x1cU))) 
				   | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x20U))));
    // ALWAYS at BF_cfb64_encrypt.v:704
    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm = (((((((
						   ((VL_ULL(1) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
						    | (VL_ULL(2) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						   | (VL_ULL(4) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						  | (VL_ULL(8) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						 | (VL_ULL(0x10) 
						    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						| (VL_ULL(0x20) 
						   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
					       | (VL_ULL(0x40) 
						  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
					      | (VL_ULL(0x80) 
						 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
					      ? ((VL_ULL(1) 
						  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						  ? 
						 ((IData)(vlTOPp->our__DOT__r_next)
						   ? VL_ULL(2)
						   : VL_ULL(1))
						  : 
						 ((VL_ULL(2) 
						   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						   ? VL_ULL(4)
						   : 
						  ((VL_ULL(4) 
						    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						    ? VL_ULL(8)
						    : 
						   ((VL_ULL(8) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? VL_ULL(0x10)
						     : 
						    ((VL_ULL(0x10) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						      ? VL_ULL(0x20)
						      : 
						     ((VL_ULL(0x20) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						       ? VL_ULL(0x40)
						       : 
						      ((VL_ULL(0x40) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						        ? 
						       ((IData)(vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843)
							 ? VL_ULL(0x80000)
							 : VL_ULL(0x80))
						        : 
						       ((0U 
							 == vlTOPp->our__DOT__enc__DOT__l3_reg_314)
							 ? VL_ULL(0x80000000)
							 : 
							(((0U 
							   != vlTOPp->our__DOT__enc__DOT__l3_reg_314) 
							  & (0U 
							     != vlTOPp->our__DOT__enc__DOT__n1_reg_323))
							  ? VL_ULL(0x8000)
							  : VL_ULL(0x100))))))))))
					      : (((
						   ((((((VL_ULL(0x100) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
							| (VL_ULL(0x200) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						       | (VL_ULL(0x400) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						      | (VL_ULL(0x800) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						     | (VL_ULL(0x1000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						    | (VL_ULL(0x2000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						   | (VL_ULL(0x4000) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						  | (VL_ULL(0x8000) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
						  ? 
						 ((VL_ULL(0x100) 
						   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						   ? VL_ULL(0x200)
						   : 
						  ((VL_ULL(0x200) 
						    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						    ? VL_ULL(0x400)
						    : 
						   ((VL_ULL(0x400) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? VL_ULL(0x800)
						     : 
						    ((VL_ULL(0x800) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						      ? VL_ULL(0x1000)
						      : 
						     ((VL_ULL(0x1000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						       ? 
						      ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done)
						        ? VL_ULL(0x2000)
						        : VL_ULL(0x1000))
						       : 
						      ((VL_ULL(0x2000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						        ? VL_ULL(0x4000)
						        : 
						       ((VL_ULL(0x4000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							 ? VL_ULL(0x8000)
							 : VL_ULL(0x10000))))))))
						  : 
						 (((((((((VL_ULL(0x10000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
							 | (VL_ULL(0x20000) 
							    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
							| (VL_ULL(0x40000) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						       | (VL_ULL(0x80000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						      | (VL_ULL(0x100000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						     | (VL_ULL(0x200000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						    | (VL_ULL(0x400000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						   | (VL_ULL(0x800000) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
						   ? 
						  ((VL_ULL(0x10000) 
						    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						    ? VL_ULL(0x20000)
						    : 
						   ((VL_ULL(0x20000) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? VL_ULL(0x40000)
						     : 
						    ((VL_ULL(0x40000) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						      ? VL_ULL(0x80)
						      : 
						     ((VL_ULL(0x80000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						       ? 
						      ((0U 
							== vlTOPp->our__DOT__enc__DOT__l_1_reg_344)
						        ? VL_ULL(0x80000000)
						        : 
						       (((0U 
							  != vlTOPp->our__DOT__enc__DOT__l_1_reg_344) 
							 & (0U 
							    != vlTOPp->our__DOT__enc__DOT__n_1_reg_353))
							 ? VL_ULL(0x8000000)
							 : VL_ULL(0x100000)))
						       : 
						      ((VL_ULL(0x100000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						        ? VL_ULL(0x200000)
						        : 
						       ((VL_ULL(0x200000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							 ? VL_ULL(0x400000)
							 : 
							((VL_ULL(0x400000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							  ? VL_ULL(0x800000)
							  : VL_ULL(0x1000000))))))))
						   : 
						  (((((((((VL_ULL(0x1000000) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
							  | (VL_ULL(0x2000000) 
							     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
							 | (VL_ULL(0x4000000) 
							    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
							| (VL_ULL(0x8000000) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						       | (VL_ULL(0x10000000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						      | (VL_ULL(0x20000000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						     | (VL_ULL(0x40000000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						    | (VL_ULL(0x80000000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
						    ? 
						   ((VL_ULL(0x1000000) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? 
						    ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done)
						      ? VL_ULL(0x2000000)
						      : VL_ULL(0x1000000))
						     : 
						    ((VL_ULL(0x2000000) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						      ? VL_ULL(0x4000000)
						      : 
						     ((VL_ULL(0x4000000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						       ? VL_ULL(0x8000000)
						       : 
						      ((VL_ULL(0x8000000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						        ? VL_ULL(0x10000000)
						        : 
						       ((VL_ULL(0x10000000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							 ? VL_ULL(0x20000000)
							 : 
							((VL_ULL(0x20000000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							  ? VL_ULL(0x40000000)
							  : 
							 ((VL_ULL(0x40000000) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							   ? VL_ULL(0x80000)
							   : VL_ULL(0x100000000))))))))
						    : 
						   ((VL_ULL(0x100000000) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? VL_ULL(1)
						     : VL_ULL(0))))));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_fu_691_p2 
	= (0xffffffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0) 
			^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_fu_685_p2 
	= (0xffffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0) 
		      ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_fu_697_p2 
	= (VL_ULL(0xfffffffff) & (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0 
				  ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read))));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_fu_888_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_fu_882_p2 
	= (0xffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_fu_894_p2 
	= (VL_ULL(0xfffffffff) & ((QData)((IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
						   ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
}

void Vour::_settle__TOP__5(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__5\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at BF_cfb64_encrypt.v:642
    vlTOPp->our__DOT__d0 = (0xffU & ((1U & (IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0x20U)))
				      ? (IData)(vlTOPp->our__DOT__enc__DOT__tmp_4_reg_1044)
				      : ((1U & (IData)(
						       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							>> 0x1fU)))
					  ? vlTOPp->our__DOT__enc__DOT__n_2_reg_374
					  : ((1U & (IData)(
							   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							    >> 0x1dU)))
					      ? (IData)(vlTOPp->our__DOT__r_q0)
					      : ((1U 
						  & (IData)(
							    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							     >> 0x11U)))
						  ? (IData)(vlTOPp->our__DOT__enc__DOT__grp_fu_465_p2)
						  : 
						 ((1U 
						   & ((IData)(
							      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							       >> 0xfU)) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x1bU))))
						   ? (IData)(vlTOPp->our__DOT__enc__DOT__reg_511)
						   : 
						  ((1U 
						    & ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0xeU)) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								  >> 0x1aU))))
						    ? (IData)(vlTOPp->our__DOT__enc__DOT__reg_501)
						    : 
						   ((1U 
						     & ((IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0xdU)) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x19U))))
						     ? (IData)(vlTOPp->our__DOT__enc__DOT__reg_496)
						     : 
						    ((1U 
						      & ((IData)(
								 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								  >> 0xcU)) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 0x18U))))
						      ? (IData)(
								(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0 
								 >> 0x18U))
						      : 0U)))))))));
    // ALWAYS at BF_cfb64_encrypt.v:626
    vlTOPp->our__DOT__ce0 = (1U & (((((((((((((((((
						   (((((((((((IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 1U)) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 3U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 8U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x14U))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 4U))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 9U))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x15U))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								  >> 5U))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0xaU))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0x16U))) 
						    | ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0xcU)) 
						       & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done))) 
						   | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done) 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x18U)))) 
						  | (IData)(
							    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							     >> 0x11U))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							    >> 0x1dU))) 
						| ((IData)(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
						   & (IData)(vlTOPp->our__DOT__r_next))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 2U))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							 >> 7U))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							>> 0xfU))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						       >> 0x13U))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						      >> 0x1bU))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						     >> 0x1fU))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0xdU))) 
					| (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						   >> 0xeU))) 
				       | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						  >> 0x10U))) 
				      | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						 >> 0x19U))) 
				     | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						>> 0x1aU))) 
				    | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					       >> 0x1cU))) 
				   | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x20U))));
    // ALWAYS at BF_cfb64_encrypt.v:634
    vlTOPp->our__DOT__ce1 = (1U & (((((((((((((((((
						   (((((((((((IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 1U)) 
							     | (IData)(
								       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
									>> 3U))) 
							    | (IData)(
								      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								       >> 8U))) 
							   | (IData)(
								     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								      >> 0x14U))) 
							  | (IData)(
								    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								     >> 4U))) 
							 | (IData)(
								   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								    >> 9U))) 
							| (IData)(
								  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								   >> 0x15U))) 
						       | (IData)(
								 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								  >> 5U))) 
						      | (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0xaU))) 
						     | (IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0x16U))) 
						    | ((IData)(
							       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								>> 0xcU)) 
						       & (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done))) 
						   | ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done) 
						      & (IData)(
								(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
								 >> 0x18U)))) 
						  | ((IData)(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
						     & (IData)(vlTOPp->our__DOT__r_next))) 
						 | (IData)(
							   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							    >> 2U))) 
						| (IData)(
							  (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							   >> 7U))) 
					       | (IData)(
							 (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							  >> 0xfU))) 
					      | (IData)(
							(vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							 >> 0x13U))) 
					     | (IData)(
						       (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
							>> 0x1bU))) 
					    | (IData)(
						      (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						       >> 0x1fU))) 
					   | (IData)(
						     (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						      >> 0x12U))) 
					  | (IData)(
						    (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						     >> 0x1eU))) 
					 | (IData)(
						   (vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						    >> 0xdU))) 
					| (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						   >> 0xeU))) 
				       | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						  >> 0x10U))) 
				      | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						 >> 0x19U))) 
				     | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
						>> 0x1aU))) 
				    | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					       >> 0x1cU))) 
				   | (IData)((vlTOPp->our__DOT__enc__DOT__ap_CS_fsm 
					      >> 0x20U))));
    // ALWAYS at BF_cfb64_encrypt.v:704
    vlTOPp->our__DOT__enc__DOT__ap_NS_fsm = (((((((
						   ((VL_ULL(1) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
						    | (VL_ULL(2) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						   | (VL_ULL(4) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						  | (VL_ULL(8) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						 | (VL_ULL(0x10) 
						    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						| (VL_ULL(0x20) 
						   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
					       | (VL_ULL(0x40) 
						  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
					      | (VL_ULL(0x80) 
						 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
					      ? ((VL_ULL(1) 
						  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						  ? 
						 ((IData)(vlTOPp->our__DOT__r_next)
						   ? VL_ULL(2)
						   : VL_ULL(1))
						  : 
						 ((VL_ULL(2) 
						   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						   ? VL_ULL(4)
						   : 
						  ((VL_ULL(4) 
						    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						    ? VL_ULL(8)
						    : 
						   ((VL_ULL(8) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? VL_ULL(0x10)
						     : 
						    ((VL_ULL(0x10) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						      ? VL_ULL(0x20)
						      : 
						     ((VL_ULL(0x20) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						       ? VL_ULL(0x40)
						       : 
						      ((VL_ULL(0x40) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						        ? 
						       ((IData)(vlTOPp->our__DOT__enc__DOT__tmp_s_reg_843)
							 ? VL_ULL(0x80000)
							 : VL_ULL(0x80))
						        : 
						       ((0U 
							 == vlTOPp->our__DOT__enc__DOT__l3_reg_314)
							 ? VL_ULL(0x80000000)
							 : 
							(((0U 
							   != vlTOPp->our__DOT__enc__DOT__l3_reg_314) 
							  & (0U 
							     != vlTOPp->our__DOT__enc__DOT__n1_reg_323))
							  ? VL_ULL(0x8000)
							  : VL_ULL(0x100))))))))))
					      : (((
						   ((((((VL_ULL(0x100) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
							| (VL_ULL(0x200) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						       | (VL_ULL(0x400) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						      | (VL_ULL(0x800) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						     | (VL_ULL(0x1000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						    | (VL_ULL(0x2000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						   | (VL_ULL(0x4000) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						  | (VL_ULL(0x8000) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
						  ? 
						 ((VL_ULL(0x100) 
						   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						   ? VL_ULL(0x200)
						   : 
						  ((VL_ULL(0x200) 
						    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						    ? VL_ULL(0x400)
						    : 
						   ((VL_ULL(0x400) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? VL_ULL(0x800)
						     : 
						    ((VL_ULL(0x800) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						      ? VL_ULL(0x1000)
						      : 
						     ((VL_ULL(0x1000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						       ? 
						      ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done)
						        ? VL_ULL(0x2000)
						        : VL_ULL(0x1000))
						       : 
						      ((VL_ULL(0x2000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						        ? VL_ULL(0x4000)
						        : 
						       ((VL_ULL(0x4000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							 ? VL_ULL(0x8000)
							 : VL_ULL(0x10000))))))))
						  : 
						 (((((((((VL_ULL(0x10000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
							 | (VL_ULL(0x20000) 
							    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
							| (VL_ULL(0x40000) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						       | (VL_ULL(0x80000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						      | (VL_ULL(0x100000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						     | (VL_ULL(0x200000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						    | (VL_ULL(0x400000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						   | (VL_ULL(0x800000) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
						   ? 
						  ((VL_ULL(0x10000) 
						    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						    ? VL_ULL(0x20000)
						    : 
						   ((VL_ULL(0x20000) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? VL_ULL(0x40000)
						     : 
						    ((VL_ULL(0x40000) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						      ? VL_ULL(0x80)
						      : 
						     ((VL_ULL(0x80000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						       ? 
						      ((0U 
							== vlTOPp->our__DOT__enc__DOT__l_1_reg_344)
						        ? VL_ULL(0x80000000)
						        : 
						       (((0U 
							  != vlTOPp->our__DOT__enc__DOT__l_1_reg_344) 
							 & (0U 
							    != vlTOPp->our__DOT__enc__DOT__n_1_reg_353))
							 ? VL_ULL(0x8000000)
							 : VL_ULL(0x100000)))
						       : 
						      ((VL_ULL(0x100000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						        ? VL_ULL(0x200000)
						        : 
						       ((VL_ULL(0x200000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							 ? VL_ULL(0x400000)
							 : 
							((VL_ULL(0x400000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							  ? VL_ULL(0x800000)
							  : VL_ULL(0x1000000))))))))
						   : 
						  (((((((((VL_ULL(0x1000000) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm) 
							  | (VL_ULL(0x2000000) 
							     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
							 | (VL_ULL(0x4000000) 
							    == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
							| (VL_ULL(0x8000000) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						       | (VL_ULL(0x10000000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						      | (VL_ULL(0x20000000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						     | (VL_ULL(0x40000000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)) 
						    | (VL_ULL(0x80000000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm))
						    ? 
						   ((VL_ULL(0x1000000) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? 
						    ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done)
						      ? VL_ULL(0x2000000)
						      : VL_ULL(0x1000000))
						     : 
						    ((VL_ULL(0x2000000) 
						      == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						      ? VL_ULL(0x4000000)
						      : 
						     ((VL_ULL(0x4000000) 
						       == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						       ? VL_ULL(0x8000000)
						       : 
						      ((VL_ULL(0x8000000) 
							== vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						        ? VL_ULL(0x10000000)
						        : 
						       ((VL_ULL(0x10000000) 
							 == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							 ? VL_ULL(0x20000000)
							 : 
							((VL_ULL(0x20000000) 
							  == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							  ? VL_ULL(0x40000000)
							  : 
							 ((VL_ULL(0x40000000) 
							   == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
							   ? VL_ULL(0x80000)
							   : VL_ULL(0x100000000))))))))
						    : 
						   ((VL_ULL(0x100000000) 
						     == vlTOPp->our__DOT__enc__DOT__ap_CS_fsm)
						     ? VL_ULL(1)
						     : VL_ULL(0))))));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_fu_691_p2 
	= (0xffffffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0) 
			^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_fu_685_p2 
	= (0xffffU & ((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0) 
		      ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_fu_697_p2 
	= (VL_ULL(0xfffffffff) & (vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0 
				  ^ (QData)((IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read))));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_fu_888_p2 
	= (0xffffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
			 ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read) 
			^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_fu_882_p2 
	= (0xffffU & ((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
		       ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read) 
		      ^ (IData)(vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0)));
    vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_fu_894_p2 
	= (VL_ULL(0xfffffffff) & ((QData)((IData)((vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 
						   ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read))) 
				  ^ vlTOPp->our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0));
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
    read_data = VL_RAND_RESET_I(8);
    read_enable = VL_RAND_RESET_I(1);
    write_enable = VL_RAND_RESET_I(1);
    finish_read = VL_RAND_RESET_I(1);
    finish_write = VL_RAND_RESET_I(1);
    done = VL_RAND_RESET_I(1);
    read_addr = VL_RAND_RESET_Q(64);
    write_addr = VL_RAND_RESET_Q(64);
    write_size = VL_RAND_RESET_Q(64);
    read_size_output = VL_RAND_RESET_Q(64);
    write_data = VL_RAND_RESET_I(8);
    returnvalue = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
	    our__DOT__r_data[__Vi0] = VL_RAND_RESET_I(8);
    }}
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
    our__DOT__r_write_data = VL_RAND_RESET_I(8);
    our__DOT__r_returnvalue = VL_RAND_RESET_I(32);
    our__DOT__addr0 = VL_RAND_RESET_I(7);
    our__DOT__addr1 = VL_RAND_RESET_I(7);
    our__DOT__ce0 = VL_RAND_RESET_I(1);
    our__DOT__ce1 = VL_RAND_RESET_I(1);
    our__DOT__r_next = VL_RAND_RESET_I(1);
    our__DOT__d0 = VL_RAND_RESET_I(8);
    our__DOT__ret = VL_RAND_RESET_I(8);
    our__DOT__r_q0 = VL_RAND_RESET_I(8);
    our__DOT__r_q1 = VL_RAND_RESET_I(8);
    our__DOT__timer = VL_RAND_RESET_Q(64);
    our__DOT__i = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__ap_CS_fsm = VL_RAND_RESET_Q(33);
    our__DOT__enc__DOT__reg_472 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_476 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_480 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_484 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_488 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_492 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_496 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_done = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__reg_501 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_506 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_511 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_fu_465_p2 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__reg_516 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__tmp_s_reg_843 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__n_fu_539_p5 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__length_fu_551_p5 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__in_addr_21_reg_929 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__in_addr_22_reg_934 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__l_3_reg_939 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__p_rec5_reg_947 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_209_reg_952 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__tmp_407_reg_956 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_408_reg_961 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_410_reg_966 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__tmp_411_reg_971 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__in_addr_24_reg_976 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__n_4_cast_reg_981 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__in_addr_19_reg_986 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__in_addr_20_reg_991 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__l_2_reg_996 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__p_rec_reg_1004 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_208_reg_1009 = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__tmp_402_reg_1013 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_403_reg_1018 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_404_reg_1023 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__tmp_405_reg_1028 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__in_addr_23_reg_1033 = VL_RAND_RESET_I(7);
    our__DOT__enc__DOT__n_3_cast_reg_1039 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__tmp_4_reg_1044 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__tmp_6_reg_1049 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_0_read = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385_data_1_read = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385_ap_return_1 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__l3_reg_314 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__n1_reg_323 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__out_0_rec_reg_333 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__l_1_reg_344 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__n_1_reg_353 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__out_1_rec_reg_363 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__n_2_reg_374 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__ap_reg_grp_BF_encrypt_fu_385_ap_start = VL_RAND_RESET_I(1);
    our__DOT__enc__DOT__ap_NS_fsm = VL_RAND_RESET_Q(33);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_CS_fsm = VL_RAND_RESET_Q(34);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_q1 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_address0 = VL_RAND_RESET_I(5);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_q0 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_631 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_635 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_639 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__reg_643 = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast1_reg_3822 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_fu_685_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast62_cast_reg_3828 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_fu_691_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast61_cast_reg_3833 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_fu_697_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_cast_reg_3838 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_5_cast_reg_3853 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_17_reg_3863 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_fu_802_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_11_cast_reg_3878 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast1_reg_3883 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_fu_882_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast59_cast_reg_3889 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_fu_888_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast58_cast_reg_3894 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_fu_894_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_1_cast_reg_3899 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_18_cast_reg_3914 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_reg_3924 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_fu_999_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_24_cast_reg_3934 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast1_reg_3939 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_fu_1063_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast56_cast_reg_3945 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_fu_1069_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast55_cast_reg_3950 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_fu_1075_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_2_cast_reg_3955 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_31_cast_reg_3970 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_80_reg_3980 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_fu_1180_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_37_cast_reg_3990 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast1_reg_3995 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_fu_1244_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast53_cast_reg_4001 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_fu_1250_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast52_cast_reg_4006 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_fu_1256_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_3_cast_reg_4011 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_44_cast_reg_4026 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_110_reg_4036 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast1_reg_4046 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_fu_1459_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast50_cast_reg_4052 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_fu_1465_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast49_cast_reg_4057 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_fu_1471_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_4_cast_reg_4062 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_57_cast_reg_4077 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_181_reg_4082 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_reg_4092 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_164_reg_4102 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast1_reg_4107 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_fu_1681_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast47_cast_reg_4113 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_fu_1687_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast46_cast_reg_4118 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_fu_1693_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_5_cast_reg_4123 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_70_cast_reg_4138 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_171_reg_4148 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_fu_1798_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_76_cast_reg_4158 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast1_reg_4163 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_fu_1862_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast44_cast_reg_4169 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_fu_1868_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast43_cast_reg_4174 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_fu_1874_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_6_cast_reg_4179 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_83_cast_reg_4194 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_201_reg_4204 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_fu_1979_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_89_cast_reg_4214 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast1_reg_4219 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_fu_2043_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast41_cast_reg_4225 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_fu_2049_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast40_cast_reg_4230 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_fu_2055_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_7_cast_reg_4235 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_96_cast_reg_4250 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_224_reg_4260 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_fu_2160_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_102_cast_reg_4270 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast1_reg_4275 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_fu_2224_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast38_cast_reg_4281 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_fu_2230_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast37_cast_reg_4286 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_fu_2236_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_8_cast_reg_4291 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_109_cast_reg_4306 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_245_reg_4316 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast1_reg_4326 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_fu_2439_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast35_cast_reg_4332 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_fu_2445_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast34_cast_reg_4337 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_fu_2451_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_9_cast_reg_4342 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_122_cast_reg_4357 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_294_reg_4362 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_266_reg_4372 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_282_reg_4382 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast1_reg_4387 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_fu_2661_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast32_cast_reg_4393 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_fu_2667_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast31_cast_reg_4398 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_fu_2673_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_10_cast_reg_4403 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_135_cast_reg_4418 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_287_reg_4428 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_fu_2778_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_141_cast_reg_4438 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast1_reg_4443 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_fu_2842_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast29_cast_reg_4449 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_fu_2848_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast28_cast_reg_4454 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_fu_2854_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_10_cast_reg_4459 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_148_cast_reg_4474 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_308_reg_4484 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_fu_2959_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_154_cast_reg_4494 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast1_reg_4499 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_fu_3023_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast26_cast_reg_4505 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_fu_3029_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast25_cast_reg_4510 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_fu_3035_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_11_cast_reg_4515 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_161_cast_reg_4530 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_329_reg_4540 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_fu_3140_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_167_cast_reg_4550 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast1_reg_4555 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_fu_3204_p2 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast23_cast_reg_4561 = VL_RAND_RESET_I(16);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_fu_3210_p2 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast22_cast_reg_4566 = VL_RAND_RESET_I(24);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_fu_3216_p2 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_12_cast_reg_4571 = VL_RAND_RESET_Q(36);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_174_cast_reg_4586 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_350_reg_4596 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_13_cast1_reg_4606 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_187_cast_reg_4621 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_395_reg_4626 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_371_reg_4636 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_387_reg_4646 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_14_cast1_reg_4651 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_200_cast_reg_4666 = VL_RAND_RESET_I(8);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_392_reg_4676 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__r_15_cast_reg_4686 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_50_cast_fu_1379_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_63_cast_fu_1605_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_115_cast_fu_2359_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_128_cast_fu_2585_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_180_cast_fu_3339_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__tmp_193_cast_fu_3565_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__l_15_cast_fu_3792_p2 = VL_RAND_RESET_I(32);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_0_preg = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_return_1_preg = VL_RAND_RESET_Q(64);
    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__ap_NS_fsm = VL_RAND_RESET_Q(34);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_S_U__DOT__BF_encrypt_key_S_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<18; ++__Vi0) {
	    our__DOT__enc__DOT__grp_BF_encrypt_fu_385__DOT__key_P_U__DOT__BF_encrypt_key_P_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
}

void Vour::_configure_coverage(Vour__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_configure_coverage\n"); );
}
