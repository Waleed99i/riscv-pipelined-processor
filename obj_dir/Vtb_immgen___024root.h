// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_immgen.h for the primary calling header

#ifndef VERILATED_VTB_IMMGEN___024ROOT_H_
#define VERILATED_VTB_IMMGEN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_immgen__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_immgen___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_immgen__DOT__instruction;
    IData/*31:0*/ tb_immgen__DOT__immediate;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_immgen__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_immgen___024root(Vtb_immgen__Syms* symsp, const char* namep);
    ~Vtb_immgen___024root();
    VL_UNCOPYABLE(Vtb_immgen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
