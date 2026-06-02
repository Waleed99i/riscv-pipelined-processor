// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_alu_controller.h for the primary calling header

#ifndef VERILATED_VTB_ALU_CONTROLLER___024ROOT_H_
#define VERILATED_VTB_ALU_CONTROLLER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_alu_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_alu_controller___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ tb_alu_controller__DOT__alu_op;
    CData/*2:0*/ tb_alu_controller__DOT__func3;
    CData/*6:0*/ tb_alu_controller__DOT__func7;
    CData/*3:0*/ tb_alu_controller__DOT__alu_operation;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_alu_controller__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_alu_controller___024root(Vtb_alu_controller__Syms* symsp, const char* namep);
    ~Vtb_alu_controller___024root();
    VL_UNCOPYABLE(Vtb_alu_controller___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
