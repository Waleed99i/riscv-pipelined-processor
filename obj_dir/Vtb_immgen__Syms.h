// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_IMMGEN__SYMS_H_
#define VERILATED_VTB_IMMGEN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_immgen.h"

// INCLUDE MODULE CLASSES
#include "Vtb_immgen___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_immgen__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_immgen* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_immgen___024root           TOP;

    // CONSTRUCTORS
    Vtb_immgen__Syms(VerilatedContext* contextp, const char* namep, Vtb_immgen* modelp);
    ~Vtb_immgen__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
