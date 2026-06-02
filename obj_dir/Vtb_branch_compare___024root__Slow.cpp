// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_branch_compare.h for the primary calling header

#include "Vtb_branch_compare__pch.h"

void Vtb_branch_compare___024root___ctor_var_reset(Vtb_branch_compare___024root* vlSelf);

Vtb_branch_compare___024root::Vtb_branch_compare___024root(Vtb_branch_compare__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_branch_compare___024root___ctor_var_reset(this);
}

void Vtb_branch_compare___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_branch_compare___024root::~Vtb_branch_compare___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
