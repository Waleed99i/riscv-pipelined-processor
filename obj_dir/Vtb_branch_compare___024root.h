// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_branch_compare.h for the primary calling header

#ifndef VERILATED_VTB_BRANCH_COMPARE___024ROOT_H_
#define VERILATED_VTB_BRANCH_COMPARE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_branch_compare__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_branch_compare___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ tb_branch_compare__DOT__br_cond;
    CData/*0:0*/ tb_branch_compare__DOT__branch_taken;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_branch_compare__DOT__rs1;
    IData/*31:0*/ tb_branch_compare__DOT__rs2;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_branch_compare__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_branch_compare___024root(Vtb_branch_compare__Syms* symsp, const char* namep);
    ~Vtb_branch_compare___024root();
    VL_UNCOPYABLE(Vtb_branch_compare___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
