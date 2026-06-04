// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dmem.h for the primary calling header

#ifndef VERILATED_VTB_DMEM___024ROOT_H_
#define VERILATED_VTB_DMEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dmem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dmem___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_dmem__DOT__clk;
    CData/*0:0*/ tb_dmem__DOT__mem_wen;
    CData/*1:0*/ tb_dmem__DOT__rmask;
    CData/*1:0*/ tb_dmem__DOT__wmask;
    CData/*0:0*/ tb_dmem__DOT__load_unsigned;
    CData/*7:0*/ tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__byte_val;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dmem__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__half_word;
    IData/*31:0*/ tb_dmem__DOT__addr;
    IData/*31:0*/ tb_dmem__DOT__mem_wdata;
    IData/*31:0*/ tb_dmem__DOT__mem_rdata;
    IData/*31:0*/ tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 1048576> tb_dmem__DOT__dut__DOT__memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc9da3785__0;

    // INTERNAL VARIABLES
    Vtb_dmem__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_dmem___024root(Vtb_dmem__Syms* symsp, const char* namep);
    ~Vtb_dmem___024root();
    VL_UNCOPYABLE(Vtb_dmem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
