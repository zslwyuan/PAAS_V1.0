// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "Vour.h"              // For This
#include "Vour__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vour::__Vtable1_our__DOT__dec__DOT__ap_NS_fsm[128],5,0);

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
    VL_SIG8(__Vdlyvdim0__our__DOT__r_data__v0,2,0);
    VL_SIG8(__Vdlyvset__our__DOT__r_data__v0,0,0);
    VL_SIG8(__Vdly__our__DOT__dec__DOT__tmp_reg_411,0,0);
    //char	__VpadToAlign7[1];
    VL_SIG(__Vdlyvval__our__DOT__r_data__v0,31,0);
    //char	__VpadToAlign12[4];
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
    __Vdlyvset__our__DOT__r_data__v0 = 0U;
    __Vdly__our__DOT__r_read_addr = vlTOPp->our__DOT__r_read_addr;
    __Vdly__our__DOT__r_write_addr = vlTOPp->our__DOT__r_write_addr;
    __Vdly__our__DOT__dec__DOT__tmp_reg_411 = vlTOPp->our__DOT__dec__DOT__tmp_reg_411;
    // ALWAYS at decode_motion_vector.v:194
    if ((1U & (((IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm) 
		>> 4U) & (~ (IData)(vlTOPp->our__DOT__dec__DOT__sel_tmp2_reg_490))))) {
	vlTOPp->our__DOT__dec__DOT__sel_tmp7_reg_500 
	    = ((IData)(vlTOPp->our__DOT__dec__DOT__tmp_3_reg_464) 
	       & (IData)(vlTOPp->our__DOT__dec__DOT__tmp_9_fu_280_p2));
	vlTOPp->our__DOT__dec__DOT__vec_7_reg_495 = 
	    (((VL_LTS_III(1,32,32, vlTOPp->our__DOT__dec__DOT__vec_4_reg_478, vlTOPp->our__DOT__dec__DOT__tmp_10_reg_485) 
	       & (~ (IData)(vlTOPp->our__DOT__dec__DOT__tmp_3_reg_464))) 
	      & (IData)(vlTOPp->our__DOT__dec__DOT__tmp_17_reg_453))
	      ? (vlTOPp->our__DOT__dec__DOT__vec_4_reg_478 
		 + (vlTOPp->our__DOT__dec__DOT__lim_reg_458 
		    << 1U)) : (((IData)(vlTOPp->our__DOT__dec__DOT__tmp_3_reg_464) 
				& (~ (IData)(vlTOPp->our__DOT__dec__DOT__tmp_9_fu_280_p2)))
			        ? (vlTOPp->our__DOT__dec__DOT__vec_1_reg_471 
				   - (vlTOPp->our__DOT__dec__DOT__lim_reg_458 
				      << 1U)) : vlTOPp->our__DOT__dec__DOT__vec_4_reg_478));
    }
    // ALWAYS at decode_motion_vector.v:183
    if ((8U & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__dec__DOT__lim_reg_458 = (
						   (0x1fU 
						    >= vlTOPp->our__DOT__dec__DOT__r_size_reg_422)
						    ? 
						   ((IData)(0x10U) 
						    << vlTOPp->our__DOT__dec__DOT__r_size_reg_422)
						    : 0U);
	vlTOPp->our__DOT__dec__DOT__sel_tmp2_reg_490 
	    = (0U == vlTOPp->our__DOT__dec__DOT__buff_load_3_reg_436);
	vlTOPp->our__DOT__dec__DOT__tmp_10_reg_485 
	    = VL_NEGATE_I(((0x1fU >= vlTOPp->our__DOT__dec__DOT__r_size_reg_422)
			    ? ((IData)(0x10U) << vlTOPp->our__DOT__dec__DOT__r_size_reg_422)
			    : 0U));
	vlTOPp->our__DOT__dec__DOT__tmp_3_reg_464 = 
	    VL_LTS_III(1,32,32, 0U, vlTOPp->our__DOT__dec__DOT__buff_load_3_reg_436);
	vlTOPp->our__DOT__dec__DOT__vec_1_reg_471 = 
	    ((IData)(1U) + (vlTOPp->our__DOT__dec__DOT__vec_reg_429 
			    + (vlTOPp->our__DOT__r_q0 
			       + ((0x1fU >= vlTOPp->our__DOT__dec__DOT__r_size_reg_422)
				   ? (vlTOPp->our__DOT__dec__DOT__tmp_4_reg_443 
				      << vlTOPp->our__DOT__dec__DOT__r_size_reg_422)
				   : 0U))));
	vlTOPp->our__DOT__dec__DOT__vec_4_reg_478 = 
	    ((((IData)(0xffffffffU) + vlTOPp->our__DOT__dec__DOT__vec_reg_429) 
	      - ((0x1fU >= vlTOPp->our__DOT__dec__DOT__r_size_reg_422)
		  ? ((~ vlTOPp->our__DOT__dec__DOT__buff_load_3_reg_436) 
		     << vlTOPp->our__DOT__dec__DOT__r_size_reg_422)
		  : 0U)) - vlTOPp->our__DOT__r_q0);
    }
    vlTOPp->our__DOT__dec__DOT__tmp_9_fu_280_p2 = VL_LTS_III(1,32,32, vlTOPp->our__DOT__dec__DOT__vec_1_reg_471, vlTOPp->our__DOT__dec__DOT__lim_reg_458);
    // ALWAYS at decode_motion_vector.v:173
    if ((4U & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__dec__DOT__buff_load_3_reg_436 
	    = vlTOPp->our__DOT__r_q1;
	vlTOPp->our__DOT__dec__DOT__r_size_reg_422 
	    = ((IData)(vlTOPp->our__DOT__dec__DOT__tmp_2_reg_396)
	        ? VL_NEGATE_I((0x1fU & VL_NEGATE_I((IData)(vlTOPp->our__DOT__dec__DOT__tmp_13_reg_406))))
	        : (IData)(vlTOPp->our__DOT__dec__DOT__tmp_6_reg_401));
	vlTOPp->our__DOT__dec__DOT__tmp_17_reg_453 
	    = (1U & (vlTOPp->our__DOT__r_q1 >> 0x1fU));
	vlTOPp->our__DOT__dec__DOT__tmp_4_reg_443 = 
	    ((IData)(0xffffffffU) + vlTOPp->our__DOT__r_q1);
	vlTOPp->our__DOT__dec__DOT__vec_reg_429 = ((IData)(vlTOPp->our__DOT__dec__DOT__tmp_reg_411)
						    ? vlTOPp->our__DOT__r_q0
						    : 
						   VL_EXTENDS_II(32,31, 
								 (0x7fffffffU 
								  & (vlTOPp->our__DOT__r_q0 
								     >> 1U))));
    }
    // ALWAYS at decode_motion_vector.v:201
    if ((2U & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))) {
	vlTOPp->our__DOT__dec__DOT__tmp_13_reg_406 
	    = (0x1fU & vlTOPp->our__DOT__r_q0);
	vlTOPp->our__DOT__dec__DOT__tmp_2_reg_396 = 
	    (1U & (vlTOPp->our__DOT__r_q0 >> 0x1fU));
	vlTOPp->our__DOT__dec__DOT__tmp_6_reg_401 = 
	    (0x1fU & vlTOPp->our__DOT__r_q0);
	__Vdly__our__DOT__dec__DOT__tmp_reg_411 = (0U 
						   == vlTOPp->our__DOT__r_q1);
    }
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
		    vlTOPp->our__DOT__r_finish_read = 0U;
		    if ((VL_ULL(1) == vlTOPp->read_ready)) {
			__Vdlyvval__our__DOT__r_data__v0 
			    = vlTOPp->read_data;
			__Vdlyvset__our__DOT__r_data__v0 = 1U;
			__Vdlyvdim0__our__DOT__r_data__v0 
			    = (7U & (IData)(vlTOPp->our__DOT__read_cnt));
			__Vdly__our__DOT__state = VL_ULL(3);
		    }
		} else {
		    if ((VL_ULL(3) == vlTOPp->our__DOT__state)) {
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
			if ((VL_ULL(0xc) != vlTOPp->our__DOT__state)) {
			    if ((VL_ULL(9) == vlTOPp->our__DOT__state)) {
				vlTOPp->our__DOT__r_next = 0U;
				if (vlTOPp->our__DOT__ce0) {
				    vlTOPp->our__DOT__r_q0 
					= vlTOPp->our__DOT__r_data
					[((4U & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))
					   ? 3U : (
						   (2U 
						    & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((1U 
						     & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))
						     ? 1U
						     : 0U)))];
				}
				if ((0x20U & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))) {
				    __Vdly__our__DOT__state = VL_ULL(5);
				    vlTOPp->our__DOT__r_returnvalue 
					= ((IData)(vlTOPp->our__DOT__dec__DOT__tmp_reg_411)
					    ? vlTOPp->our__DOT__dec__DOT__vec_3_fu_355_p3
					    : (vlTOPp->our__DOT__dec__DOT__vec_3_fu_355_p3 
					       << 1U));
				}
				if (vlTOPp->our__DOT__ce1) {
				    vlTOPp->our__DOT__r_q1 
					= vlTOPp->our__DOT__r_data
					[((2U & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))
					   ? 2U : (
						   (1U 
						    & (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm))
						    ? 4U
						    : 0U))];
				}
			    } else {
				if ((VL_ULL(5) == vlTOPp->our__DOT__state)) {
				    __Vdly__our__DOT__r_write_addr 
					= vlTOPp->write_base;
				    vlTOPp->our__DOT__r_write_data 
					= vlTOPp->our__DOT__r_data
					[(7U & (IData)(vlTOPp->our__DOT__write_cnt))];
				    vlTOPp->our__DOT__r_write_enable = 1U;
				    __Vdly__our__DOT__state = VL_ULL(6);
				    vlTOPp->our__DOT__r_write_size 
					= vlTOPp->read_size_input;
				    __Vdly__our__DOT__write_cnt = VL_ULL(0);
				} else {
				    if ((VL_ULL(6) 
					 == vlTOPp->our__DOT__state)) {
					vlTOPp->our__DOT__r_finish_write = 0U;
					if ((VL_ULL(1) 
					     == vlTOPp->write_ready)) {
					    __Vdly__our__DOT__state = VL_ULL(7);
					}
				    } else {
					if ((VL_ULL(7) 
					     == vlTOPp->our__DOT__state)) {
					    if (((VL_ULL(1) 
						  + vlTOPp->our__DOT__write_cnt) 
						 < vlTOPp->num_read)) {
						__Vdly__our__DOT__write_cnt 
						    = 
						    (VL_ULL(1) 
						     + vlTOPp->our__DOT__write_cnt);
						__Vdly__our__DOT__r_write_addr 
						    = 
						    (vlTOPp->our__DOT__r_write_addr 
						     + vlTOPp->write_size);
						vlTOPp->our__DOT__r_finish_write = 1U;
						vlTOPp->our__DOT__r_write_data 
						    = 
						    vlTOPp->our__DOT__r_data
						    [
						    (7U 
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
	}
    }
    vlTOPp->our__DOT__timer = __Vdly__our__DOT__timer;
    vlTOPp->our__DOT__state = __Vdly__our__DOT__state;
    vlTOPp->our__DOT__read_cnt = __Vdly__our__DOT__read_cnt;
    vlTOPp->our__DOT__write_cnt = __Vdly__our__DOT__write_cnt;
    vlTOPp->our__DOT__dec__DOT__tmp_reg_411 = __Vdly__our__DOT__dec__DOT__tmp_reg_411;
    // ALWAYSPOST at our.v:158
    if (__Vdlyvset__our__DOT__r_data__v0) {
	vlTOPp->our__DOT__r_data[__Vdlyvdim0__our__DOT__r_data__v0] 
	    = __Vdlyvval__our__DOT__r_data__v0;
    }
    vlTOPp->our__DOT__r_read_addr = __Vdly__our__DOT__r_read_addr;
    vlTOPp->our__DOT__r_write_addr = __Vdly__our__DOT__r_write_addr;
    vlTOPp->our__DOT__dec__DOT__vec_3_fu_355_p3 = ((IData)(vlTOPp->our__DOT__dec__DOT__sel_tmp2_reg_490)
						    ? vlTOPp->our__DOT__dec__DOT__vec_reg_429
						    : 
						   ((IData)(vlTOPp->our__DOT__dec__DOT__sel_tmp7_reg_500)
						     ? vlTOPp->our__DOT__dec__DOT__vec_1_reg_471
						     : vlTOPp->our__DOT__dec__DOT__vec_7_reg_495));
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
    // ALWAYS at decode_motion_vector.v:165
    vlTOPp->our__DOT__dec__DOT__ap_CS_fsm = ((IData)(vlTOPp->reset)
					      ? 1U : (IData)(vlTOPp->our__DOT__dec__DOT__ap_NS_fsm));
}

void Vour::_settle__TOP__2(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_settle__TOP__2\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->our__DOT__dec__DOT__tmp_9_fu_280_p2 = VL_LTS_III(1,32,32, vlTOPp->our__DOT__dec__DOT__vec_1_reg_471, vlTOPp->our__DOT__dec__DOT__lim_reg_458);
    vlTOPp->our__DOT__dec__DOT__vec_3_fu_355_p3 = ((IData)(vlTOPp->our__DOT__dec__DOT__sel_tmp2_reg_490)
						    ? vlTOPp->our__DOT__dec__DOT__vec_reg_429
						    : 
						   ((IData)(vlTOPp->our__DOT__dec__DOT__sel_tmp7_reg_500)
						     ? vlTOPp->our__DOT__dec__DOT__vec_1_reg_471
						     : vlTOPp->our__DOT__dec__DOT__vec_7_reg_495));
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
}

void Vour::_initial__TOP__3(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_initial__TOP__3\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at decode_motion_vector.v:89
    vlTOPp->our__DOT__dec__DOT__ap_CS_fsm = 1U;
}

VL_INLINE_OPT void Vour::_sequent__TOP__4(Vour__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_sequent__TOP__4\n"); );
    Vour* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at decode_motion_vector.v:304
    vlTOPp->our__DOT__ce0 = (1U & ((((IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm) 
				     & (IData)(vlTOPp->our__DOT__r_next)) 
				    | ((IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm) 
				       >> 1U)) | ((IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm) 
						  >> 2U)));
    // ALWAYS at decode_motion_vector.v:312
    vlTOPp->our__DOT__ce1 = (1U & (((IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm) 
				    & (IData)(vlTOPp->our__DOT__r_next)) 
				   | ((IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm) 
				      >> 1U)));
    // ALWAYS at decode_motion_vector.v:327
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->our__DOT__r_next) 
			     << 6U) | (IData)(vlTOPp->our__DOT__dec__DOT__ap_CS_fsm));
    vlTOPp->our__DOT__dec__DOT__ap_NS_fsm = vlTOPp->__Vtable1_our__DOT__dec__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
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
    vlTOPp->_initial__TOP__3(vlSymsp);
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
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_sequent__TOP__4(vlSymsp);
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
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    our__DOT__r_data[__Vi0] = VL_RAND_RESET_I(32);
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
    our__DOT__r_write_data = VL_RAND_RESET_I(32);
    our__DOT__r_returnvalue = VL_RAND_RESET_I(32);
    our__DOT__ce0 = VL_RAND_RESET_I(1);
    our__DOT__ce1 = VL_RAND_RESET_I(1);
    our__DOT__r_next = VL_RAND_RESET_I(1);
    our__DOT__r_q0 = VL_RAND_RESET_I(32);
    our__DOT__r_q1 = VL_RAND_RESET_I(32);
    our__DOT__timer = VL_RAND_RESET_Q(64);
    our__DOT__dec__DOT__ap_CS_fsm = VL_RAND_RESET_I(6);
    our__DOT__dec__DOT__tmp_2_reg_396 = VL_RAND_RESET_I(1);
    our__DOT__dec__DOT__tmp_6_reg_401 = VL_RAND_RESET_I(5);
    our__DOT__dec__DOT__tmp_13_reg_406 = VL_RAND_RESET_I(5);
    our__DOT__dec__DOT__tmp_reg_411 = VL_RAND_RESET_I(1);
    our__DOT__dec__DOT__r_size_reg_422 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__vec_reg_429 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__buff_load_3_reg_436 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__tmp_4_reg_443 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__tmp_17_reg_453 = VL_RAND_RESET_I(1);
    our__DOT__dec__DOT__lim_reg_458 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__tmp_3_reg_464 = VL_RAND_RESET_I(1);
    our__DOT__dec__DOT__vec_1_reg_471 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__vec_4_reg_478 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__tmp_10_reg_485 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__sel_tmp2_reg_490 = VL_RAND_RESET_I(1);
    our__DOT__dec__DOT__vec_7_reg_495 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__sel_tmp7_reg_500 = VL_RAND_RESET_I(1);
    our__DOT__dec__DOT__tmp_9_fu_280_p2 = VL_RAND_RESET_I(1);
    our__DOT__dec__DOT__vec_3_fu_355_p3 = VL_RAND_RESET_I(32);
    our__DOT__dec__DOT__ap_NS_fsm = VL_RAND_RESET_I(6);
    __Vtableidx1 = VL_RAND_RESET_I(7);
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[0] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[1] = 1U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[2] = 4U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[3] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[4] = 8U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[5] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[6] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[7] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[8] = 0x10U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[9] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[10] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[11] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[12] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[13] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[14] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[15] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[16] = 0x20U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[17] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[18] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[19] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[20] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[21] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[22] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[23] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[24] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[25] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[26] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[27] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[28] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[29] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[30] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[31] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[32] = 1U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[33] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[34] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[35] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[36] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[37] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[38] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[39] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[40] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[41] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[42] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[43] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[44] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[45] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[46] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[47] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[48] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[49] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[50] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[51] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[52] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[53] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[54] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[55] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[56] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[57] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[58] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[59] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[60] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[61] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[62] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[63] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[64] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[65] = 2U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[66] = 4U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[67] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[68] = 8U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[69] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[70] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[71] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[72] = 0x10U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[73] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[74] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[75] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[76] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[77] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[78] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[79] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[80] = 0x20U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[81] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[82] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[83] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[84] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[85] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[86] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[87] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[88] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[89] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[90] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[91] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[92] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[93] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[94] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[95] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[96] = 1U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[97] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[98] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[99] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[100] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[101] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[102] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[103] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[104] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[105] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[106] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[107] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[108] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[109] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[110] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[111] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[112] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[113] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[114] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[115] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[116] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[117] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[118] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[119] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[120] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[121] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[122] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[123] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[124] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[125] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[126] = 0U;
    __Vtable1_our__DOT__dec__DOT__ap_NS_fsm[127] = 0U;
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
}

void Vour::_configure_coverage(Vour__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vour::_configure_coverage\n"); );
}
