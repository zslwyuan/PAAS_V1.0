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
    VL_OUT64(read_addr,63,0);
    VL_OUT64(write_addr,63,0);
    VL_OUT64(write_size,63,0);
    VL_OUT64(read_size_output,63,0);
    VL_OUT64(write_data,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(our__DOT__r_read_enable,0,0);
    VL_SIG8(our__DOT__r_write_enable,0,0);
    VL_SIG8(our__DOT__r_finish_read,0,0);
    VL_SIG8(our__DOT__r_finish_write,0,0);
    VL_SIG8(our__DOT__r_done,0,0);
    //char	__VpadToAlign113[7];
    VL_SIG64(our__DOT__read_cnt,63,0);
    VL_SIG64(our__DOT__write_cnt,63,0);
    VL_SIG64(our__DOT__state,63,0);
    VL_SIG64(our__DOT__r_read_addr,63,0);
    VL_SIG64(our__DOT__r_write_addr,63,0);
    VL_SIG64(our__DOT__r_write_size,63,0);
    VL_SIG64(our__DOT__r_read_size_output,63,0);
    VL_SIG64(our__DOT__r_write_data,63,0);
    VL_SIG64(our__DOT__tmp[202],63,0);
    VL_SIG64(our__DOT__ans[202],63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign3422[2];
    VL_SIG64(our__DOT____Vlvbound1,63,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign3436[4];
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
    void	_ctor_var_reset();
  public:
    static void	_eval(Vour__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vour__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vour__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vour__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vour__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
