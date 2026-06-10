// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_RegisterFile.h for the primary calling header

#ifndef VERILATED_VTB_REGISTERFILE___024ROOT_H_
#define VERILATED_VTB_REGISTERFILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_RegisterFile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_RegisterFile___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_RegisterFile__DOT__clk;
    CData/*4:0*/ tb_RegisterFile__DOT__rs1;
    CData/*4:0*/ tb_RegisterFile__DOT__rs2;
    CData/*4:0*/ tb_RegisterFile__DOT__waddr_rf;
    CData/*0:0*/ tb_RegisterFile__DOT__we_rf;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_RegisterFile__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_RegisterFile__DOT__wd_rf;
    IData/*31:0*/ tb_RegisterFile__DOT__dut__DOT__rd1;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 32> tb_RegisterFile__DOT__dut__DOT__rf;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd8ad563f__0;

    // INTERNAL VARIABLES
    Vtb_RegisterFile__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_RegisterFile___024root(Vtb_RegisterFile__Syms* symsp, const char* namep);
    ~Vtb_RegisterFile___024root();
    VL_UNCOPYABLE(Vtb_RegisterFile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
