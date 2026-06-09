// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_INSERTION_SORT__SYMS_H_
#define VERILATED_VTB_INSERTION_SORT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_insertion_sort.h"

// INCLUDE MODULE CLASSES
#include "Vtb_insertion_sort___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_insertion_sort__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_insertion_sort* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_insertion_sort___024root   TOP;

    // CONSTRUCTORS
    Vtb_insertion_sort__Syms(VerilatedContext* contextp, const char* namep, Vtb_insertion_sort* modelp);
    ~Vtb_insertion_sort__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
