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
    VL_SIG(__Vdly__our__DOT__kernel__DOT__k_0_in_reg_194,31,0);
    // Body
    __Vdly__our__DOT__kernel__DOT__k_0_in_reg_194 = vlTOPp->our__DOT__kernel__DOT__k_0_in_reg_194;
    vlTOPp->__Vdly__our__DOT__kernel__DOT__i_cast_reg_597 
	= vlTOPp->our__DOT__kernel__DOT__i_cast_reg_597;
    vlTOPp->__Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632 
	= vlTOPp->our__DOT__kernel__DOT__tmp_36_cast2_reg_632;
    vlTOPp->__Vdly__our__DOT__r_we1 = vlTOPp->our__DOT__r_we1;
    vlTOPp->__Vdly__our__DOT__kernel__DOT__j_0_in_reg_184 
	= vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184;
    vlTOPp->__Vdly__our__DOT__r_d1 = vlTOPp->our__DOT__r_d1;
    vlTOPp->__Vdly__our__DOT__saddr0 = vlTOPp->our__DOT__saddr0;
    vlTOPp->__Vdly__our__DOT__r_d0 = vlTOPp->our__DOT__r_d0;
    vlTOPp->__Vdly__our__DOT__saddr1 = vlTOPp->our__DOT__saddr1;
    // ALWAYS at kernel_nussinov.v:252
    if ((0x2000U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	__Vdly__our__DOT__kernel__DOT__k_0_in_reg_194 
	    = vlTOPp->our__DOT__kernel__DOT__k_reg_757;
    } else {
	if ((0x200U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	    __Vdly__our__DOT__kernel__DOT__k_0_in_reg_194 
		= vlTOPp->our__DOT__kernel__DOT__i_cast_reg_597;
	}
    }
    // ALWAYS at kernel_nussinov.v:268
    if ((2U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->__Vdly__our__DOT__kernel__DOT__i_cast_reg_597 
	    = VL_EXTENDS_II(32,7, (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172));
    }
    // ALWAYS at kernel_nussinov.v:739
    vlTOPp->__Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632 
	= (0xffffffc0U & vlTOPp->__Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632);
    vlTOPp->__Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632 
	= (0x1fffU & vlTOPp->__Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632);
    // ALWAYS at kernel_nussinov.v:736
    vlTOPp->our__DOT__kernel__DOT__tmp_34_cast3_reg_612 
	= (VL_ULL(0x7fffffffc0) & vlTOPp->our__DOT__kernel__DOT__tmp_34_cast3_reg_612);
    vlTOPp->our__DOT__kernel__DOT__tmp_34_cast3_reg_612 
	= (VL_ULL(0x3fffffffff) & vlTOPp->our__DOT__kernel__DOT__tmp_34_cast3_reg_612);
    // ALWAYS at our.v:139
    vlTOPp->__Vdly__our__DOT__r_we1 = (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					>> 5U) & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_3_reg_627));
    // ALWAYS at kernel_nussinov.v:244
    if ((1U & (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
		>> 0xaU) & (~ (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_26_fu_532_p2))))) {
	vlTOPp->__Vdly__our__DOT__kernel__DOT__j_0_in_reg_184 
	    = vlTOPp->our__DOT__kernel__DOT__j_reg_642;
    } else {
	if ((1U & (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
		    >> 1U) & (~ ((IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172) 
				 >> 6U))))) {
	    vlTOPp->__Vdly__our__DOT__kernel__DOT__j_0_in_reg_184 
		= VL_EXTENDS_II(32,7, (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172));
	}
    }
    // ALWAYS at our.v:140
    vlTOPp->__Vdly__our__DOT__r_d1 = (VL_LTS_III(1,32,32, vlTOPp->our__DOT__r_q1, vlTOPp->our__DOT__r_q0)
				       ? vlTOPp->our__DOT__r_q0
				       : vlTOPp->our__DOT__r_q1);
    // ALWAYS at our.v:144
    vlTOPp->__Vdly__our__DOT__saddr0 = (0xfffU & ((0x2000U 
						   & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						   ? (IData)(vlTOPp->our__DOT__kernel__DOT__table_addr_9_reg_751)
						   : 
						  ((0x800U 
						    & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						    ? (IData)(
							      VL_EXTENDS_QI(64,14, (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_40_reg_765)))
						    : 
						   ((0x200U 
						     & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						     ? (IData)(vlTOPp->our__DOT__kernel__DOT__table_addr_5_reg_709)
						     : 
						    ((1U 
						      & (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
							  >> 7U) 
							 & (~ (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693))))
						      ? (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_36_fu_441_p2)
						      : 
						     ((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
							>> 7U) 
						       & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693))
						       ? (IData)(
								 VL_EXTENDS_QI(64,14, 
									       (0x3fffU 
										& ((IData)(0xfc0U) 
										+ vlTOPp->our__DOT__kernel__DOT__j_reg_642))))
						       : 
						      ((0x40U 
							& (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						        ? (IData)((QData)((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_35_reg_698)))
						        : 
						       ((0x10U 
							 & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
							 ? (IData)(
								   VL_EXTENDS_QI(64,14, 
										(0x3fffU 
										& ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_36_cast_reg_637) 
										+ vlTOPp->our__DOT__kernel__DOT__j_reg_642))))
							 : 
							((8U 
							  & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
							  ? (IData)(vlTOPp->our__DOT__kernel__DOT__table_addr_1_reg_664)
							  : 
							 ((4U 
							   & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
							   ? (IData)(
								     VL_EXTENDS_QI(64,14, (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_20_fu_313_p2)))
							   : 0U))))))))));
    // ALWAYS at our.v:141
    vlTOPp->__Vdly__our__DOT__r_d0 = ((0x2000U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
				       ? vlTOPp->our__DOT__kernel__DOT__tmp_32_reg_785
				       : ((0x200U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
					   ? ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693)
					       ? (VL_LTS_III(1,32,32, vlTOPp->our__DOT__r_q1, vlTOPp->our__DOT__kernel__DOT__tmp_18_reg_735)
						   ? vlTOPp->our__DOT__kernel__DOT__tmp_18_reg_735
						   : vlTOPp->our__DOT__r_q1)
					       : vlTOPp->our__DOT__r_q1)
					   : ((8U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
					       ? (VL_LTS_III(1,32,32, vlTOPp->our__DOT__r_q0, vlTOPp->our__DOT__r_q1)
						   ? vlTOPp->our__DOT__r_q1
						   : vlTOPp->our__DOT__r_q0)
					       : 0U)));
    // ALWAYS at our.v:145
    vlTOPp->__Vdly__our__DOT__saddr1 = (0xfffU & ((0x800U 
						   & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						   ? (IData)(
							     VL_EXTENDS_QI(64,14, (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_43_reg_770)))
						   : 
						  ((0x400U 
						    & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						    ? (IData)(vlTOPp->our__DOT__kernel__DOT__table_addr_9_reg_751)
						    : 
						   ((1U 
						     & ((~ (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693)) 
							& ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
							   >> 8U)))
						     ? (IData)(
							       (VL_LTS_III(1,32,32, vlTOPp->our__DOT__r_q0, vlTOPp->our__DOT__kernel__DOT__reg_203)
								 ? (QData)((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_35_reg_698))
								 : vlTOPp->our__DOT__kernel__DOT__tmp_36_reg_725))
						     : 
						    (((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693) 
						      & ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
							 >> 8U))
						      ? (IData)(vlTOPp->our__DOT__kernel__DOT__table_addr_5_reg_709)
						      : 
						     ((0x40U 
						       & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						       ? (IData)(vlTOPp->our__DOT__kernel__DOT__table_addr_reg_607)
						       : 
						      ((0x20U 
							& (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						        ? (IData)(vlTOPp->our__DOT__kernel__DOT__table_addr_3_reg_679)
						        : 
						       ((0x10U 
							 & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
							 ? (IData)(
								   VL_EXTENDS_QI(64,14, (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_27_fu_361_p2)))
							 : 
							((4U 
							  & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
							  ? (IData)((QData)((IData)(
										(0x3fffU 
										& ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617) 
										+ vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184)))))
							  : 0U)))))))));
    // ALWAYS at kernel_nussinov.v:280
    if ((0x400U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__kernel__DOT__k_reg_757 = 
	    ((IData)(1U) + vlTOPp->our__DOT__kernel__DOT__k_0_in_reg_194);
    }
    // ALWAYS at kernel_nussinov.v:299
    if (((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
	   >> 2U) & (0x3eU != vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184)) 
	 & (~ (vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184 
	       >> 0x1fU)))) {
	vlTOPp->our__DOT__kernel__DOT__table_addr_1_reg_664 
	    = (0xfffU & (IData)(VL_EXTENDS_QI(64,14, (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_20_fu_313_p2))));
    }
    // ALWAYS at kernel_nussinov.v:741
    vlTOPp->our__DOT__kernel__DOT__tmp_36_cast_reg_637 
	= (0x3fc0U & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_36_cast_reg_637));
    vlTOPp->our__DOT__kernel__DOT__tmp_36_cast_reg_637 
	= (0x1fffU & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_36_cast_reg_637));
    // ALWAYS at kernel_nussinov.v:354
    if ((0x1000U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__kernel__DOT__tmp_32_reg_785 
	    = (VL_LTS_III(1,32,32, vlTOPp->our__DOT__kernel__DOT__reg_203, vlTOPp->our__DOT__kernel__DOT__tmp_30_fu_577_p2)
	        ? vlTOPp->our__DOT__kernel__DOT__tmp_30_fu_577_p2
	        : vlTOPp->our__DOT__kernel__DOT__reg_203);
    }
    // ALWAYS at kernel_nussinov.v:348
    if (((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693) 
	 & ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
	    >> 8U))) {
	vlTOPp->our__DOT__kernel__DOT__tmp_18_reg_735 
	    = ((3U == (vlTOPp->our__DOT__r_q0 + vlTOPp->our__DOT__kernel__DOT__table_load_6_reg_720)) 
	       + vlTOPp->our__DOT__kernel__DOT__reg_203);
    }
    // ALWAYS at kernel_nussinov.v:305
    if ((0x10U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__kernel__DOT__table_addr_3_reg_679 
	    = (0xfffU & (IData)(VL_EXTENDS_QI(64,14, (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_27_fu_361_p2))));
    }
    // ALWAYS at kernel_nussinov.v:360
    if ((1U & (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
		>> 7U) & (~ (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693))))) {
	vlTOPp->our__DOT__kernel__DOT__tmp_36_reg_725 
	    = vlTOPp->our__DOT__kernel__DOT__tmp_36_fu_441_p2;
    }
    // ALWAYS at kernel_nussinov.v:311
    if ((0x80U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__kernel__DOT__table_addr_5_reg_709 
	    = (0xfffU & (IData)(VL_EXTENDS_QI(64,14, 
					      (0x3fffU 
					       & ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617) 
						  + vlTOPp->our__DOT__kernel__DOT__j_reg_642)))));
    }
    // ALWAYS at kernel_nussinov.v:366
    if ((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
	  >> 0xaU) & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_26_fu_532_p2))) {
	vlTOPp->our__DOT__kernel__DOT__tmp_40_reg_765 
	    = (0x3fffU & ((IData)(1U) + ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617) 
					 + vlTOPp->our__DOT__kernel__DOT__k_0_in_reg_194)));
	vlTOPp->our__DOT__kernel__DOT__tmp_43_reg_770 
	    = (0x3fffU & ((0x3fc0U & (((IData)(2U) 
				       + vlTOPp->our__DOT__kernel__DOT__k_0_in_reg_194) 
				      << 6U)) + (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_37_reg_746)));
    }
    vlTOPp->our__DOT__kernel__DOT__k_0_in_reg_194 = __Vdly__our__DOT__kernel__DOT__k_0_in_reg_194;
    // ALWAYS at kernel_nussinov.v:335
    if ((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
	  >> 7U) & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693))) {
	vlTOPp->our__DOT__kernel__DOT__table_load_6_reg_720 
	    = vlTOPp->our__DOT__r_q1;
    }
    // ALWAYS at kernel_nussinov.v:260
    if ((0x800U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__kernel__DOT__reg_203 = vlTOPp->our__DOT__r_q1;
    } else {
	if ((0x80U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	    vlTOPp->our__DOT__kernel__DOT__reg_203 
		= vlTOPp->our__DOT__r_q0;
	}
    }
    // ALWAYS at kernel_nussinov.v:317
    if ((0x200U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__kernel__DOT__table_addr_9_reg_751 
	    = (0xfffU & (IData)(VL_EXTENDS_QI(64,14, 
					      (0x3fffU 
					       & ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617) 
						  + vlTOPp->our__DOT__kernel__DOT__j_reg_642)))));
	vlTOPp->our__DOT__kernel__DOT__tmp_37_reg_746 
	    = (0x3fffU & vlTOPp->our__DOT__kernel__DOT__j_reg_642);
    }
    // ALWAYS at kernel_nussinov.v:274
    if ((4U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__kernel__DOT__j_reg_642 = 
	    ((IData)(1U) + vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184);
    }
    // ALWAYS at kernel_nussinov.v:738
    vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617 
	= (0x3fc0U & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617));
    // ALWAYS at kernel_nussinov.v:324
    if ((1U & (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
		>> 1U) & (~ ((IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172) 
			     >> 6U))))) {
	vlTOPp->our__DOT__kernel__DOT__table_addr_reg_607 
	    = (0xfffU & VL_EXTENDS_II(12,7, (0x40U 
					     ^ (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172))));
	vlTOPp->our__DOT__kernel__DOT__tmp_34_cast3_reg_612 
	    = ((VL_ULL(0x400000003f) & vlTOPp->our__DOT__kernel__DOT__tmp_34_cast3_reg_612) 
	       | ((QData)((IData)((IData)((VL_ULL(0xffffffff) 
					   & (VL_EXTENDS_QI(38,13, 
							    ((IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172) 
							     << 6U)) 
					      >> 6U))))) 
		  << 6U));
	vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617 
	    = ((0x3fU & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617)) 
	       | (0x3fc0U & VL_EXTENDS_II(32,13, ((IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172) 
						  << 6U))));
	vlTOPp->__Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632 
	    = ((0xffffe03fU & vlTOPp->__Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632) 
	       | (0x1fc0U & (((IData)(1U) + (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172)) 
			     << 6U)));
	vlTOPp->our__DOT__kernel__DOT__tmp_36_cast_reg_637 
	    = ((0x203fU & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_36_cast_reg_637)) 
	       | (0x1fc0U & (((IData)(1U) + (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172)) 
			     << 6U)));
	vlTOPp->our__DOT__kernel__DOT__tmp_3_reg_627 
	    = (0x3fU != (0x7fU & ((IData)(1U) + (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172))));
    }
    vlTOPp->our__DOT__kernel__DOT__tmp_26_fu_532_p2 
	= VL_LTS_III(1,32,32, ((IData)(1U) + vlTOPp->our__DOT__kernel__DOT__k_0_in_reg_194), vlTOPp->our__DOT__kernel__DOT__j_reg_642);
    vlTOPp->our__DOT__kernel__DOT__tmp_36_fu_441_p2 
	= (VL_ULL(0x7fffffffff) & (vlTOPp->our__DOT__kernel__DOT__tmp_34_cast3_reg_612 
				   + (QData)((IData)(vlTOPp->our__DOT__kernel__DOT__j_reg_642))));
    vlTOPp->our__DOT__kernel__DOT__tmp_27_fu_361_p2 
	= (0x3fffU & ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617) 
		      + vlTOPp->our__DOT__kernel__DOT__j_reg_642));
    // ALWAYS at kernel_nussinov.v:236
    if (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->our__DOT__r_next))) {
	vlTOPp->our__DOT__kernel__DOT__i_reg_172 = 0x3eU;
    } else {
	if ((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
	      >> 2U) & (0x3eU == vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184))) {
	    vlTOPp->our__DOT__kernel__DOT__i_reg_172 
		= vlTOPp->our__DOT__kernel__DOT__i_1_fu_337_p2;
	}
    }
    vlTOPp->our__DOT__kernel__DOT__i_1_fu_337_p2 = 
	(0x7fU & ((IData)(0x7fU) + (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172)));
}

VL_INLINE_OPT void Vour::_sequent__TOP__2(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__2\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__our__DOT__r_mod_clk,0,0);
    VL_SIG8(__Vdly__our__DOT__r_read_enable,0,0);
    VL_SIG8(__Vdly__our__DOT__r_write_enable,0,0);
    //char	__VpadToAlign31[1];
    VL_SIG64(__Vdly__our__DOT__state,63,0);
    VL_SIG64(__Vdly__our__DOT__timer,63,0);
    VL_SIG64(__Vdly__our__DOT__access_timer,63,0);
    // Body
    __Vdly__our__DOT__r_mod_clk = vlTOPp->our__DOT__r_mod_clk;
    __Vdly__our__DOT__state = vlTOPp->our__DOT__state;
    __Vdly__our__DOT__timer = vlTOPp->our__DOT__timer;
    __Vdly__our__DOT__access_timer = vlTOPp->our__DOT__access_timer;
    __Vdly__our__DOT__r_read_enable = vlTOPp->our__DOT__r_read_enable;
    __Vdly__our__DOT__r_write_enable = vlTOPp->our__DOT__r_write_enable;
    // ALWAYS at our.v:153
    if (vlTOPp->reset) {
	__Vdly__our__DOT__r_mod_clk = 0U;
	__Vdly__our__DOT__state = VL_ULL(0xb);
	__Vdly__our__DOT__r_read_enable = 0U;
	__Vdly__our__DOT__r_write_enable = 0U;
	vlTOPp->our__DOT__r_finish_read = 0U;
	vlTOPp->our__DOT__r_finish_write = 0U;
	vlTOPp->our__DOT__r_read_addr = VL_ULL(0);
	vlTOPp->our__DOT__r_write_addr = VL_ULL(0);
	vlTOPp->our__DOT__r_write_size = VL_ULL(0);
	vlTOPp->our__DOT__r_read_size_output = VL_ULL(0);
	vlTOPp->our__DOT__r_done = 0U;
	vlTOPp->our__DOT__r_next = 1U;
	__Vdly__our__DOT__timer = VL_ULL(0);
	__Vdly__our__DOT__access_timer = VL_ULL(0);
    } else {
	vlTOPp->our__DOT__r_next = 1U;
	if (((VL_ULL(0xb) == vlTOPp->our__DOT__state) 
	     | (VL_ULL(0xc8) == vlTOPp->our__DOT__state))) {
	    __Vdly__our__DOT__timer = (VL_ULL(1) + vlTOPp->our__DOT__timer);
	    __Vdly__our__DOT__r_mod_clk = 0U;
	    if (vlTOPp->our__DOT__r_ce0) {
		if (vlTOPp->our__DOT__r_we0) {
		    __Vdly__our__DOT__state = VL_ULL(6);
		    vlTOPp->our__DOT__r_write_addr 
			= (vlTOPp->write_base + ((QData)((IData)(vlTOPp->our__DOT__saddr0)) 
						 << 2U));
		    vlTOPp->our__DOT__r_write_data 
			= vlTOPp->our__DOT__r_d0;
		    __Vdly__our__DOT__r_write_enable = 1U;
		    vlTOPp->our__DOT__r_write_size 
			= vlTOPp->read_size_input;
		} else {
		    __Vdly__our__DOT__state = VL_ULL(2);
		    vlTOPp->our__DOT__r_read_addr = 
			(vlTOPp->read_base + ((QData)((IData)(vlTOPp->our__DOT__saddr0)) 
					      << 2U));
		    __Vdly__our__DOT__r_read_enable = 1U;
		    vlTOPp->our__DOT__r_read_size_output 
			= vlTOPp->read_size_input;
		}
	    } else {
		if (vlTOPp->our__DOT__r_ce1) {
		    if (vlTOPp->our__DOT__r_we1) {
			__Vdly__our__DOT__state = VL_ULL(0x6a);
			vlTOPp->our__DOT__r_write_addr 
			    = (vlTOPp->write_base + 
			       ((QData)((IData)(vlTOPp->our__DOT__saddr1)) 
				<< 2U));
			vlTOPp->our__DOT__r_write_data 
			    = vlTOPp->our__DOT__r_d1;
			__Vdly__our__DOT__r_write_enable = 1U;
			vlTOPp->our__DOT__r_write_size 
			    = vlTOPp->read_size_input;
		    } else {
			__Vdly__our__DOT__state = VL_ULL(0x66);
			vlTOPp->our__DOT__r_read_addr 
			    = (vlTOPp->read_base + 
			       ((QData)((IData)(vlTOPp->our__DOT__saddr1)) 
				<< 2U));
			__Vdly__our__DOT__r_read_enable = 1U;
			vlTOPp->our__DOT__r_read_size_output 
			    = vlTOPp->read_size_input;
		    }
		} else {
		    if (VL_UNLIKELY(vlTOPp->our__DOT__next_out)) {
			VL_WRITEF("access amount:%20#\n",
				  64,(vlTOPp->our__DOT__timer 
				      - vlTOPp->our__DOT__access_timer));
			__Vdly__our__DOT__state = VL_ULL(8);
			vlTOPp->our__DOT__r_done = 1U;
			vlTOPp->our__DOT__r_returnvalue 
			    = vlTOPp->our__DOT__ret;
		    } else {
			__Vdly__our__DOT__state = VL_ULL(0xc9);
		    }
		}
	    }
	} else {
	    if (((VL_ULL(0xc9) == vlTOPp->our__DOT__state) 
		 | (VL_ULL(0xca) == vlTOPp->our__DOT__state))) {
		__Vdly__our__DOT__r_mod_clk = (1U & 
					       (~ (IData)(vlTOPp->our__DOT__r_mod_clk)));
		if (((1U & (~ (IData)(vlTOPp->our__DOT__r_mod_clk))) 
		     < (IData)(vlTOPp->our__DOT__r_mod_clk))) {
		    if (VL_UNLIKELY(vlTOPp->our__DOT__next_out)) {
			VL_WRITEF("access amount:%20#\n",
				  64,(vlTOPp->our__DOT__timer 
				      - vlTOPp->our__DOT__access_timer));
			__Vdly__our__DOT__state = VL_ULL(8);
			vlTOPp->our__DOT__r_done = 1U;
			vlTOPp->our__DOT__r_returnvalue 
			    = vlTOPp->our__DOT__ret;
		    } else {
			__Vdly__our__DOT__state = VL_ULL(0xc8);
		    }
		    __Vdly__our__DOT__access_timer 
			= (VL_ULL(1) + vlTOPp->our__DOT__access_timer);
		}
	    } else {
		__Vdly__our__DOT__r_mod_clk = 0U;
		if ((VL_ULL(2) == vlTOPp->our__DOT__state)) {
		    vlTOPp->our__DOT__r_finish_read = 0U;
		    __Vdly__our__DOT__r_read_enable = 0U;
		    if ((VL_ULL(1) == vlTOPp->read_ready)) {
			vlTOPp->our__DOT__r_q0 = vlTOPp->read_data;
			if (vlTOPp->our__DOT__r_ce1) {
			    if (vlTOPp->our__DOT__r_we1) {
				__Vdly__our__DOT__state = VL_ULL(0x6a);
				vlTOPp->our__DOT__r_write_addr 
				    = (vlTOPp->write_base 
				       + ((QData)((IData)(vlTOPp->our__DOT__saddr1)) 
					  << 2U));
				vlTOPp->our__DOT__r_write_data 
				    = vlTOPp->our__DOT__r_d1;
				__Vdly__our__DOT__r_write_enable = 1U;
				__Vdly__our__DOT__r_read_enable = 0U;
				vlTOPp->our__DOT__r_write_size 
				    = vlTOPp->read_size_input;
			    } else {
				__Vdly__our__DOT__state = VL_ULL(0x66);
				vlTOPp->our__DOT__r_read_addr 
				    = (vlTOPp->read_base 
				       + ((QData)((IData)(vlTOPp->our__DOT__saddr1)) 
					  << 2U));
				if (vlTOPp->our__DOT__r_read_enable) {
				    vlTOPp->our__DOT__r_finish_read = 1U;
				}
				vlTOPp->our__DOT__r_read_size_output 
				    = vlTOPp->read_size_input;
				__Vdly__our__DOT__r_read_enable = 1U;
			    }
			} else {
			    __Vdly__our__DOT__r_read_enable = 0U;
			    if (VL_UNLIKELY(((IData)(vlTOPp->our__DOT__next_out) 
					     & (VL_ULL(8) 
						!= vlTOPp->our__DOT__state)))) {
				VL_WRITEF("access amount:%20#\n",
					  64,(vlTOPp->our__DOT__timer 
					      - vlTOPp->our__DOT__access_timer));
				__Vdly__our__DOT__state = VL_ULL(8);
				vlTOPp->our__DOT__r_done = 1U;
				vlTOPp->our__DOT__r_returnvalue 
				    = vlTOPp->our__DOT__ret;
			    } else {
				__Vdly__our__DOT__state = VL_ULL(0xca);
			    }
			}
		    }
		} else {
		    if ((VL_ULL(0x66) == vlTOPp->our__DOT__state)) {
			__Vdly__our__DOT__r_read_enable = 0U;
			vlTOPp->our__DOT__r_finish_read = 0U;
			if ((VL_ULL(1) == vlTOPp->read_ready)) {
			    vlTOPp->our__DOT__r_q1 
				= vlTOPp->read_data;
			    if (VL_UNLIKELY(((IData)(vlTOPp->our__DOT__next_out) 
					     & (VL_ULL(8) 
						!= vlTOPp->our__DOT__state)))) {
				VL_WRITEF("access amount:%20#\n",
					  64,(vlTOPp->our__DOT__timer 
					      - vlTOPp->our__DOT__access_timer));
				__Vdly__our__DOT__state = VL_ULL(8);
				vlTOPp->our__DOT__r_done = 1U;
				vlTOPp->our__DOT__r_returnvalue 
				    = vlTOPp->our__DOT__ret;
			    } else {
				__Vdly__our__DOT__state = VL_ULL(0xca);
			    }
			}
		    } else {
			if ((VL_ULL(6) == vlTOPp->our__DOT__state)) {
			    vlTOPp->our__DOT__r_finish_write = 0U;
			    __Vdly__our__DOT__r_write_enable = 0U;
			    if ((VL_ULL(1) == vlTOPp->write_ready)) {
				if (vlTOPp->our__DOT__r_ce1) {
				    if (vlTOPp->our__DOT__r_we1) {
					__Vdly__our__DOT__state = VL_ULL(0x6a);
					vlTOPp->our__DOT__r_write_addr 
					    = (vlTOPp->write_base 
					       + ((QData)((IData)(vlTOPp->our__DOT__saddr1)) 
						  << 2U));
					vlTOPp->our__DOT__r_write_data 
					    = vlTOPp->our__DOT__r_d1;
					if (vlTOPp->our__DOT__r_write_enable) {
					    vlTOPp->our__DOT__r_finish_write = 1U;
					}
					vlTOPp->our__DOT__r_write_size 
					    = vlTOPp->read_size_input;
					__Vdly__our__DOT__r_write_enable = 1U;
				    } else {
					__Vdly__our__DOT__r_read_enable = 1U;
					__Vdly__our__DOT__state = VL_ULL(0x66);
					vlTOPp->our__DOT__r_read_addr 
					    = (vlTOPp->read_base 
					       + ((QData)((IData)(vlTOPp->our__DOT__saddr1)) 
						  << 2U));
					vlTOPp->our__DOT__r_read_size_output 
					    = vlTOPp->read_size_input;
				    }
				} else {
				    if (VL_UNLIKELY(
						    ((IData)(vlTOPp->our__DOT__next_out) 
						     & (VL_ULL(8) 
							!= vlTOPp->our__DOT__state)))) {
					VL_WRITEF("access amount:%20#\n",
						  64,
						  (vlTOPp->our__DOT__timer 
						   - vlTOPp->our__DOT__access_timer));
					__Vdly__our__DOT__state = VL_ULL(8);
					vlTOPp->our__DOT__r_done = 1U;
					vlTOPp->our__DOT__r_returnvalue 
					    = vlTOPp->our__DOT__ret;
				    } else {
					__Vdly__our__DOT__state = VL_ULL(0xca);
				    }
				}
			    }
			} else {
			    if ((VL_ULL(0x6a) == vlTOPp->our__DOT__state)) {
				__Vdly__our__DOT__r_write_enable = 0U;
				vlTOPp->our__DOT__r_finish_write = 0U;
				if ((VL_ULL(1) == vlTOPp->write_ready)) {
				    if (VL_UNLIKELY(
						    ((IData)(vlTOPp->our__DOT__next_out) 
						     & (VL_ULL(8) 
							!= vlTOPp->our__DOT__state)))) {
					VL_WRITEF("access amount:%20#\n",
						  64,
						  (vlTOPp->our__DOT__timer 
						   - vlTOPp->our__DOT__access_timer));
					__Vdly__our__DOT__state = VL_ULL(8);
					vlTOPp->our__DOT__r_done = 1U;
					vlTOPp->our__DOT__r_returnvalue 
					    = vlTOPp->our__DOT__ret;
				    } else {
					__Vdly__our__DOT__state = VL_ULL(0xca);
				    }
				}
			    } else {
				if ((VL_ULL(8) == vlTOPp->our__DOT__state)) {
				    __Vdly__our__DOT__r_read_enable = 0U;
				    __Vdly__our__DOT__r_write_enable = 0U;
				    vlTOPp->our__DOT__r_finish_read = 0U;
				    vlTOPp->our__DOT__r_finish_write = 0U;
				    vlTOPp->our__DOT__r_read_addr = VL_ULL(0);
				    vlTOPp->our__DOT__r_write_addr = VL_ULL(0);
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
    vlTOPp->our__DOT__r_mod_clk = __Vdly__our__DOT__r_mod_clk;
    vlTOPp->our__DOT__state = __Vdly__our__DOT__state;
    vlTOPp->our__DOT__timer = __Vdly__our__DOT__timer;
    vlTOPp->our__DOT__access_timer = __Vdly__our__DOT__access_timer;
    vlTOPp->our__DOT__r_read_enable = __Vdly__our__DOT__r_read_enable;
    vlTOPp->our__DOT__r_write_enable = __Vdly__our__DOT__r_write_enable;
    vlTOPp->read_enable = vlTOPp->our__DOT__r_read_enable;
    vlTOPp->write_enable = vlTOPp->our__DOT__r_write_enable;
    vlTOPp->finish_read = vlTOPp->our__DOT__r_finish_read;
    vlTOPp->finish_write = vlTOPp->our__DOT__r_finish_write;
    vlTOPp->read_addr = vlTOPp->our__DOT__r_read_addr;
    vlTOPp->write_addr = vlTOPp->our__DOT__r_write_addr;
    vlTOPp->write_size = vlTOPp->our__DOT__r_write_size;
    vlTOPp->read_size_output = vlTOPp->our__DOT__r_read_size_output;
    vlTOPp->done = vlTOPp->our__DOT__r_done;
    vlTOPp->write_data = vlTOPp->our__DOT__r_write_data;
    vlTOPp->returnvalue = vlTOPp->our__DOT__r_returnvalue;
    vlTOPp->our__DOT__kernel__DOT__tmp_30_fu_577_p2 
	= (vlTOPp->our__DOT__r_q0 + vlTOPp->our__DOT__r_q1);
}

void Vour::_settle__TOP__3(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__3\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__kernel__DOT__tmp_26_fu_532_p2 
	= VL_LTS_III(1,32,32, ((IData)(1U) + vlTOPp->our__DOT__kernel__DOT__k_0_in_reg_194), vlTOPp->our__DOT__kernel__DOT__j_reg_642);
    vlTOPp->our__DOT__kernel__DOT__tmp_36_fu_441_p2 
	= (VL_ULL(0x7fffffffff) & (vlTOPp->our__DOT__kernel__DOT__tmp_34_cast3_reg_612 
				   + (QData)((IData)(vlTOPp->our__DOT__kernel__DOT__j_reg_642))));
    vlTOPp->our__DOT__kernel__DOT__tmp_27_fu_361_p2 
	= (0x3fffU & ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617) 
		      + vlTOPp->our__DOT__kernel__DOT__j_reg_642));
    vlTOPp->our__DOT__kernel__DOT__i_1_fu_337_p2 = 
	(0x7fU & ((IData)(0x7fU) + (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172)));
    vlTOPp->read_enable = vlTOPp->our__DOT__r_read_enable;
    vlTOPp->write_enable = vlTOPp->our__DOT__r_write_enable;
    vlTOPp->finish_read = vlTOPp->our__DOT__r_finish_read;
    vlTOPp->finish_write = vlTOPp->our__DOT__r_finish_write;
    vlTOPp->read_addr = vlTOPp->our__DOT__r_read_addr;
    vlTOPp->write_addr = vlTOPp->our__DOT__r_write_addr;
    vlTOPp->write_size = vlTOPp->our__DOT__r_write_size;
    vlTOPp->read_size_output = vlTOPp->our__DOT__r_read_size_output;
    vlTOPp->done = vlTOPp->our__DOT__r_done;
    vlTOPp->write_data = vlTOPp->our__DOT__r_write_data;
    vlTOPp->returnvalue = vlTOPp->our__DOT__r_returnvalue;
    vlTOPp->our__DOT__kernel__DOT__tmp_30_fu_577_p2 
	= (vlTOPp->our__DOT__r_q0 + vlTOPp->our__DOT__r_q1);
}

VL_INLINE_OPT void Vour::_sequent__TOP__4(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__4\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__saddr0 = vlTOPp->__Vdly__our__DOT__saddr0;
    vlTOPp->our__DOT__r_d0 = vlTOPp->__Vdly__our__DOT__r_d0;
    vlTOPp->our__DOT__r_we1 = vlTOPp->__Vdly__our__DOT__r_we1;
    vlTOPp->our__DOT__saddr1 = vlTOPp->__Vdly__our__DOT__saddr1;
    vlTOPp->our__DOT__r_d1 = vlTOPp->__Vdly__our__DOT__r_d1;
    // ALWAYS at our.v:136
    vlTOPp->our__DOT__r_ce0 = (1U & ((((((((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					     >> 0xbU) 
					    | ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					       >> 2U)) 
					   | ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					      >> 4U)) 
					  | ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					     >> 6U)) 
					 | (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					     >> 7U) 
					    & (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693))) 
					| (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					    >> 7U) 
					   & (~ (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693)))) 
				       | ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					  >> 9U)) | 
				      ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
				       >> 0xdU)) | 
				     ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
				      >> 3U)));
    // ALWAYS at our.v:138
    vlTOPp->our__DOT__r_ce1 = (1U & (((((((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					    >> 0xbU) 
					   | ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					      >> 2U)) 
					  | ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					     >> 4U)) 
					 | ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					    >> 5U)) 
					| ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					   >> 6U)) 
				       | ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693) 
					  & ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					     >> 8U))) 
				      | ((~ (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693)) 
					 & ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					    >> 8U))) 
				     | ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					>> 0xaU)));
    // ALWAYS at our.v:137
    vlTOPp->our__DOT__r_we0 = (1U & ((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
				       >> 0xdU) | (
						   ((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
						    >> 3U) 
						   & (~ (IData)(vlTOPp->our__DOT__kernel__DOT__tmp_13_reg_655)))) 
				     | (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					 >> 9U) & (IData)(vlTOPp->our__DOT__kernel__DOT__or_cond_reg_689))));
    // ALWAYS at kernel_nussinov.v:341
    if ((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
	  >> 5U) & (IData)(vlTOPp->our__DOT__kernel__DOT__or_cond_fu_396_p2))) {
	vlTOPp->our__DOT__kernel__DOT__tmp_12_reg_693 
	    = VL_LTS_III(1,32,32, vlTOPp->our__DOT__kernel__DOT__i_cast_reg_597, vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184);
	vlTOPp->our__DOT__kernel__DOT__tmp_35_reg_698 
	    = (vlTOPp->our__DOT__kernel__DOT__tmp_36_cast2_reg_632 
	       + vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184);
    }
    // ALWAYS at kernel_nussinov.v:286
    if ((0x20U & (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__kernel__DOT__or_cond_reg_689 
	    = vlTOPp->our__DOT__kernel__DOT__or_cond_fu_396_p2;
    }
    // ALWAYS at kernel_nussinov.v:292
    if ((((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
	  >> 2U) & (0x3eU != vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184))) {
	vlTOPp->our__DOT__kernel__DOT__rev8_reg_659 
	    = (1U & (~ (vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184 
			>> 0x1fU)));
	vlTOPp->our__DOT__kernel__DOT__tmp_13_reg_655 
	    = (1U & (vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184 
		     >> 0x1fU));
    }
    vlTOPp->our__DOT__kernel__DOT__tmp_36_cast2_reg_632 
	= vlTOPp->__Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632;
    vlTOPp->our__DOT__kernel__DOT__i_cast_reg_597 = vlTOPp->__Vdly__our__DOT__kernel__DOT__i_cast_reg_597;
    vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184 = vlTOPp->__Vdly__our__DOT__kernel__DOT__j_0_in_reg_184;
    vlTOPp->our__DOT__kernel__DOT__tmp_20_fu_313_p2 
	= (0x3fffU & ((IData)(1U) + ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617) 
				     + vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184)));
    vlTOPp->our__DOT__kernel__DOT__or_cond_fu_396_p2 
	= ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_3_reg_627) 
	   & (IData)(vlTOPp->our__DOT__kernel__DOT__rev8_reg_659));
    // ALWAYS at kernel_nussinov.v:228
    vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm = ((IData)(vlTOPp->reset)
						 ? 1U
						 : (IData)(vlTOPp->our__DOT__kernel__DOT__ap_NS_fsm));
}

void Vour::_initial__TOP__5(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_initial__TOP__5\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at our.v:148
    vlTOPp->our__DOT__r_mod_clk = 0U;
    // INITIAL at kernel_nussinov.v:224
    vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm = 1U;
}

void Vour::_settle__TOP__6(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__6\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__kernel__DOT__tmp_20_fu_313_p2 
	= (0x3fffU & ((IData)(1U) + ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_34_cast_reg_617) 
				     + vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184)));
    vlTOPp->our__DOT__kernel__DOT__or_cond_fu_396_p2 
	= ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_3_reg_627) 
	   & (IData)(vlTOPp->our__DOT__kernel__DOT__rev8_reg_659));
    // ALWAYS at kernel_nussinov.v:373
    vlTOPp->our__DOT__next_out = (1U & (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					 >> 1U) & ((IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172) 
						   >> 6U)));
    // ALWAYS at kernel_nussinov.v:487
    vlTOPp->our__DOT__kernel__DOT__ap_NS_fsm = ((((
						   (((((1U 
							== (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm)) 
						       | (2U 
							  == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						      | (4U 
							 == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						     | (8U 
							== (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						    | (0x10U 
						       == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						   | (0x20U 
						      == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						  | (0x40U 
						     == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						 | (0x80U 
						    == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm)))
						 ? 
						((1U 
						  == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						  ? 
						 ((IData)(vlTOPp->our__DOT__r_next)
						   ? 2U
						   : 1U)
						  : 
						 ((2U 
						   == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						   ? 
						  ((0x40U 
						    & (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172))
						    ? 1U
						    : 4U)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						    ? 
						   ((0x3eU 
						     == vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184)
						     ? 2U
						     : 8U)
						    : 
						   ((8U 
						     == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						     ? 
						    ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_3_reg_627)
						      ? 0x10U
						      : 0x20U)
						     : 
						    ((0x10U 
						      == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						      ? 0x20U
						      : 
						     ((0x20U 
						       == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						       ? 
						      ((IData)(vlTOPp->our__DOT__kernel__DOT__or_cond_fu_396_p2)
						        ? 0x40U
						        : 0x200U)
						       : 
						      ((0x40U 
							== (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						        ? 0x80U
						        : 0x100U)))))))
						 : 
						((0x100U 
						  == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						  ? 0x200U
						  : 
						 ((0x200U 
						   == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						   ? 0x400U
						   : 
						  ((0x400U 
						    == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						    ? 
						   ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_26_fu_532_p2)
						     ? 0x800U
						     : 4U)
						    : 
						   ((0x800U 
						     == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						     ? 0x1000U
						     : 
						    ((0x1000U 
						      == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						      ? 0x2000U
						      : 
						     ((0x2000U 
						       == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						       ? 0x400U
						       : 0U)))))));
}

VL_INLINE_OPT void Vour::_sequent__TOP__7(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__7\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at kernel_nussinov.v:373
    vlTOPp->our__DOT__next_out = (1U & (((IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm) 
					 >> 1U) & ((IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172) 
						   >> 6U)));
}

VL_INLINE_OPT void Vour::_multiclk__TOP__8(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_multiclk__TOP__8\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at kernel_nussinov.v:487
    vlTOPp->our__DOT__kernel__DOT__ap_NS_fsm = ((((
						   (((((1U 
							== (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm)) 
						       | (2U 
							  == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						      | (4U 
							 == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						     | (8U 
							== (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						    | (0x10U 
						       == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						   | (0x20U 
						      == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						  | (0x40U 
						     == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))) 
						 | (0x80U 
						    == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm)))
						 ? 
						((1U 
						  == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						  ? 
						 ((IData)(vlTOPp->our__DOT__r_next)
						   ? 2U
						   : 1U)
						  : 
						 ((2U 
						   == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						   ? 
						  ((0x40U 
						    & (IData)(vlTOPp->our__DOT__kernel__DOT__i_reg_172))
						    ? 1U
						    : 4U)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						    ? 
						   ((0x3eU 
						     == vlTOPp->our__DOT__kernel__DOT__j_0_in_reg_184)
						     ? 2U
						     : 8U)
						    : 
						   ((8U 
						     == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						     ? 
						    ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_3_reg_627)
						      ? 0x10U
						      : 0x20U)
						     : 
						    ((0x10U 
						      == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						      ? 0x20U
						      : 
						     ((0x20U 
						       == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						       ? 
						      ((IData)(vlTOPp->our__DOT__kernel__DOT__or_cond_fu_396_p2)
						        ? 0x40U
						        : 0x200U)
						       : 
						      ((0x40U 
							== (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						        ? 0x80U
						        : 0x100U)))))))
						 : 
						((0x100U 
						  == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						  ? 0x200U
						  : 
						 ((0x200U 
						   == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						   ? 0x400U
						   : 
						  ((0x400U 
						    == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						    ? 
						   ((IData)(vlTOPp->our__DOT__kernel__DOT__tmp_26_fu_532_p2)
						     ? 0x800U
						     : 4U)
						    : 
						   ((0x800U 
						     == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						     ? 0x1000U
						     : 
						    ((0x1000U 
						      == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						      ? 0x2000U
						      : 
						     ((0x2000U 
						       == (IData)(vlTOPp->our__DOT__kernel__DOT__ap_CS_fsm))
						       ? 0x400U
						       : 0U)))))));
}

void Vour::_eval(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_eval\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->__VinpClk__TOP__our__DOT__r_mod_clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__our__DOT__r_mod_clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__our__DOT__r_mod_clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__our__DOT__r_mod_clk)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__our__DOT__r_mod_clk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__our__DOT__r_mod_clk))))) {
	vlTOPp->_multiclk__TOP__8(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__our__DOT__r_mod_clk 
	= vlTOPp->__VinpClk__TOP__our__DOT__r_mod_clk;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__VinpClk__TOP__our__DOT__r_mod_clk = vlTOPp->our__DOT__r_mod_clk;
}

void Vour::_eval_initial(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_eval_initial\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__5(vlSymsp);
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
    vlTOPp->_settle__TOP__6(vlSymsp);
}

VL_INLINE_OPT QData Vour::_change_request(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_change_request\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->our__DOT__r_mod_clk ^ vlTOPp->__Vchglast__TOP__our__DOT__r_mod_clk));
    VL_DEBUG_IF( if(__req && ((vlTOPp->our__DOT__r_mod_clk ^ vlTOPp->__Vchglast__TOP__our__DOT__r_mod_clk))) VL_PRINTF("	CHANGE: our.v:97: our.r_mod_clk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__our__DOT__r_mod_clk = vlTOPp->our__DOT__r_mod_clk;
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
    our__DOT__r_write_data = VL_RAND_RESET_I(32);
    our__DOT__r_returnvalue = VL_RAND_RESET_I(32);
    our__DOT__saddr0 = VL_RAND_RESET_I(12);
    our__DOT__saddr1 = VL_RAND_RESET_I(12);
    our__DOT__r_next = VL_RAND_RESET_I(1);
    our__DOT__r_mod_clk = VL_RAND_RESET_I(1);
    our__DOT__next_out = VL_RAND_RESET_I(1);
    our__DOT__ret = VL_RAND_RESET_I(32);
    our__DOT__r_q0 = VL_RAND_RESET_I(32);
    our__DOT__r_q1 = VL_RAND_RESET_I(32);
    our__DOT__r_d0 = VL_RAND_RESET_I(32);
    our__DOT__r_d1 = VL_RAND_RESET_I(32);
    our__DOT__timer = VL_RAND_RESET_Q(64);
    our__DOT__access_timer = VL_RAND_RESET_Q(64);
    our__DOT__r_ce0 = VL_RAND_RESET_I(1);
    our__DOT__r_we0 = VL_RAND_RESET_I(1);
    our__DOT__r_ce1 = VL_RAND_RESET_I(1);
    our__DOT__r_we1 = VL_RAND_RESET_I(1);
    our__DOT__kernel__DOT__ap_CS_fsm = VL_RAND_RESET_I(14);
    our__DOT__kernel__DOT__reg_203 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__i_cast_reg_597 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__table_addr_reg_607 = VL_RAND_RESET_I(12);
    our__DOT__kernel__DOT__tmp_34_cast3_reg_612 = VL_RAND_RESET_Q(39);
    our__DOT__kernel__DOT__tmp_34_cast_reg_617 = VL_RAND_RESET_I(14);
    our__DOT__kernel__DOT__tmp_3_reg_627 = VL_RAND_RESET_I(1);
    our__DOT__kernel__DOT__tmp_36_cast2_reg_632 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__tmp_36_cast_reg_637 = VL_RAND_RESET_I(14);
    our__DOT__kernel__DOT__j_reg_642 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__tmp_13_reg_655 = VL_RAND_RESET_I(1);
    our__DOT__kernel__DOT__rev8_reg_659 = VL_RAND_RESET_I(1);
    our__DOT__kernel__DOT__table_addr_1_reg_664 = VL_RAND_RESET_I(12);
    our__DOT__kernel__DOT__i_1_fu_337_p2 = VL_RAND_RESET_I(7);
    our__DOT__kernel__DOT__table_addr_3_reg_679 = VL_RAND_RESET_I(12);
    our__DOT__kernel__DOT__or_cond_fu_396_p2 = VL_RAND_RESET_I(1);
    our__DOT__kernel__DOT__or_cond_reg_689 = VL_RAND_RESET_I(1);
    our__DOT__kernel__DOT__tmp_12_reg_693 = VL_RAND_RESET_I(1);
    our__DOT__kernel__DOT__tmp_35_reg_698 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__table_addr_5_reg_709 = VL_RAND_RESET_I(12);
    our__DOT__kernel__DOT__table_load_6_reg_720 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__tmp_36_fu_441_p2 = VL_RAND_RESET_Q(39);
    our__DOT__kernel__DOT__tmp_36_reg_725 = VL_RAND_RESET_Q(39);
    our__DOT__kernel__DOT__tmp_18_reg_735 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__tmp_37_reg_746 = VL_RAND_RESET_I(14);
    our__DOT__kernel__DOT__table_addr_9_reg_751 = VL_RAND_RESET_I(12);
    our__DOT__kernel__DOT__k_reg_757 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__tmp_40_reg_765 = VL_RAND_RESET_I(14);
    our__DOT__kernel__DOT__tmp_26_fu_532_p2 = VL_RAND_RESET_I(1);
    our__DOT__kernel__DOT__tmp_43_reg_770 = VL_RAND_RESET_I(14);
    our__DOT__kernel__DOT__tmp_32_reg_785 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__i_reg_172 = VL_RAND_RESET_I(7);
    our__DOT__kernel__DOT__j_0_in_reg_184 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__k_0_in_reg_194 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__tmp_20_fu_313_p2 = VL_RAND_RESET_I(14);
    our__DOT__kernel__DOT__tmp_27_fu_361_p2 = VL_RAND_RESET_I(14);
    our__DOT__kernel__DOT__tmp_30_fu_577_p2 = VL_RAND_RESET_I(32);
    our__DOT__kernel__DOT__ap_NS_fsm = VL_RAND_RESET_I(14);
    __Vdly__our__DOT__r_we1 = VL_RAND_RESET_I(1);
    __Vdly__our__DOT__r_d1 = VL_RAND_RESET_I(32);
    __Vdly__our__DOT__r_d0 = VL_RAND_RESET_I(32);
    __Vdly__our__DOT__saddr0 = VL_RAND_RESET_I(12);
    __Vdly__our__DOT__saddr1 = VL_RAND_RESET_I(12);
    __Vdly__our__DOT__kernel__DOT__j_0_in_reg_184 = VL_RAND_RESET_I(32);
    __Vdly__our__DOT__kernel__DOT__i_cast_reg_597 = VL_RAND_RESET_I(32);
    __Vdly__our__DOT__kernel__DOT__tmp_36_cast2_reg_632 = VL_RAND_RESET_I(32);
    __VinpClk__TOP__our__DOT__r_mod_clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__our__DOT__r_mod_clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__our__DOT__r_mod_clk = VL_RAND_RESET_I(1);
}

void Vour::_configure_coverage(Vour__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_configure_coverage\n"); );
}
