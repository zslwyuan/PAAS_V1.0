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
    VL_SIG8(our__DOT__r_read_enable,0,0);
    VL_SIG8(our__DOT__r_write_enable,0,0);
    VL_SIG8(our__DOT__r_finish_read,0,0);
    VL_SIG8(our__DOT__r_finish_write,0,0);
    VL_SIG8(our__DOT__r_done,0,0);
    VL_SIG8(our__DOT__r_next,0,0);
    VL_SIG8(our__DOT__kernel__DOT__tmp_3_reg_627,0,0);
    VL_SIG8(our__DOT__kernel__DOT__tmp_13_reg_655,0,0);
    VL_SIG8(our__DOT__kernel__DOT__rev8_reg_659,0,0);
    VL_SIG8(our__DOT__kernel__DOT__i_1_fu_337_p2,6,0);
    VL_SIG8(our__DOT__kernel__DOT__or_cond_fu_396_p2,0,0);
    VL_SIG8(our__DOT__kernel__DOT__or_cond_reg_689,0,0);
    VL_SIG8(our__DOT__kernel__DOT__tmp_12_reg_693,0,0);
    VL_SIG8(our__DOT__kernel__DOT__tmp_26_fu_532_p2,0,0);
    VL_SIG8(our__DOT__kernel__DOT__i_reg_172,6,0);
    //char	__VpadToAlign123[1];
    VL_SIG16(our__DOT__addr0,11,0);
    VL_SIG16(our__DOT__addr1,11,0);
    VL_SIG16(our__DOT__kernel__DOT__ap_CS_fsm,13,0);
    VL_SIG16(our__DOT__kernel__DOT__table_addr_reg_607,11,0);
    VL_SIG16(our__DOT__kernel__DOT__tmp_34_cast_reg_617,13,0);
    VL_SIG16(our__DOT__kernel__DOT__tmp_36_cast_reg_637,13,0);
    VL_SIG16(our__DOT__kernel__DOT__table_addr_1_reg_664,11,0);
    VL_SIG16(our__DOT__kernel__DOT__table_addr_3_reg_679,11,0);
    VL_SIG16(our__DOT__kernel__DOT__table_addr_5_reg_709,11,0);
    VL_SIG16(our__DOT__kernel__DOT__tmp_37_reg_746,13,0);
    VL_SIG16(our__DOT__kernel__DOT__table_addr_9_reg_751,11,0);
    VL_SIG16(our__DOT__kernel__DOT__tmp_40_reg_765,13,0);
    VL_SIG16(our__DOT__kernel__DOT__tmp_43_reg_770,13,0);
    VL_SIG16(our__DOT__kernel__DOT__tmp_20_fu_313_p2,13,0);
    VL_SIG16(our__DOT__kernel__DOT__tmp_27_fu_361_p2,13,0);
    VL_SIG16(our__DOT__kernel__DOT__ap_NS_fsm,13,0);
    VL_SIG(our__DOT__r_write_data,31,0);
    VL_SIG(our__DOT__r_returnvalue,31,0);
    VL_SIG(our__DOT__d1,31,0);
    VL_SIG(our__DOT__ret,31,0);
    VL_SIG(our__DOT__r_q0,31,0);
    VL_SIG(our__DOT__r_q1,31,0);
    VL_SIG(our__DOT__kernel__DOT__reg_203,31,0);
    VL_SIG(our__DOT__kernel__DOT__i_cast_reg_597,31,0);
    VL_SIG(our__DOT__kernel__DOT__tmp_36_cast2_reg_632,31,0);
    VL_SIG(our__DOT__kernel__DOT__j_reg_642,31,0);
    VL_SIG(our__DOT__kernel__DOT__tmp_35_reg_698,31,0);
    VL_SIG(our__DOT__kernel__DOT__table_load_6_reg_720,31,0);
    VL_SIG(our__DOT__kernel__DOT__tmp_18_reg_735,31,0);
    VL_SIG(our__DOT__kernel__DOT__k_reg_757,31,0);
    VL_SIG(our__DOT__kernel__DOT__tmp_32_reg_785,31,0);
    VL_SIG(our__DOT__kernel__DOT__j_0_in_reg_184,31,0);
    VL_SIG(our__DOT__kernel__DOT__k_0_in_reg_194,31,0);
    VL_SIG(our__DOT__kernel__DOT__tmp_s_fu_349_p3,31,0);
    VL_SIG(our__DOT__kernel__DOT__tmp_23_fu_505_p3,31,0);
    VL_SIG(our__DOT__kernel__DOT__tmp_30_fu_577_p2,31,0);
    //char	__VpadToAlign236[4];
    VL_SIG64(our__DOT__read_cnt,63,0);
    VL_SIG64(our__DOT__write_cnt,63,0);
    VL_SIG64(our__DOT__state,63,0);
    VL_SIG64(our__DOT__r_read_addr,63,0);
    VL_SIG64(our__DOT__r_write_addr,63,0);
    VL_SIG64(our__DOT__r_write_size,63,0);
    VL_SIG64(our__DOT__r_read_size_output,63,0);
    VL_SIG64(our__DOT__timer,63,0);
    VL_SIG64(our__DOT__kernel__DOT__tmp_34_cast3_reg_612,38,0);
    VL_SIG64(our__DOT__kernel__DOT__tmp_36_fu_441_p2,38,0);
    VL_SIG64(our__DOT__kernel__DOT__tmp_36_reg_725,38,0);
    VL_SIG(our__DOT__r_data[4096],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    //char	__VpadToAlign16717[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign16724[4];
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
    static void	_initial__TOP__3(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vour__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
