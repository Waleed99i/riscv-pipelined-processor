// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_WITH_HAZARDS__SYMS_H_
#define VERILATED_VTB_WITH_HAZARDS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_with_hazards.h"

// INCLUDE MODULE CLASSES
#include "Vtb_with_hazards___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_with_hazards__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_with_hazards* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_with_hazards___024root     TOP;

    // CONSTRUCTORS
    Vtb_with_hazards__Syms(VerilatedContext* contextp, const char* namep, Vtb_with_hazards* modelp);
    ~Vtb_with_hazards__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
