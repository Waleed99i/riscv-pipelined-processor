// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_alu_controller.h for the primary calling header

#include "Vtb_alu_controller__pch.h"

void Vtb_alu_controller___024root___ctor_var_reset(Vtb_alu_controller___024root* vlSelf);

Vtb_alu_controller___024root::Vtb_alu_controller___024root(Vtb_alu_controller__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_alu_controller___024root___ctor_var_reset(this);
}

void Vtb_alu_controller___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_alu_controller___024root::~Vtb_alu_controller___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
