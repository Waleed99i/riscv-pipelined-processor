// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_alu_controller__Syms.h"


void Vtb_alu_controller___024root__trace_chg_0_sub_0(Vtb_alu_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_alu_controller___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_chg_0\n"); );
    // Body
    Vtb_alu_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu_controller___024root*>(voidSelf);
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_alu_controller___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_alu_controller___024root__trace_chg_0_sub_0(Vtb_alu_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_chg_0_sub_0\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgCData(oldp+0,(vlSelfRef.tb_alu_controller__DOT__alu_op),2);
    bufp->chgCData(oldp+1,(vlSelfRef.tb_alu_controller__DOT__func3),3);
    bufp->chgCData(oldp+2,(vlSelfRef.tb_alu_controller__DOT__func7),7);
    bufp->chgCData(oldp+3,(((2U & (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op))
                             ? ((4U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                 ? ((2U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                     ? (1U & (- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_alu_controller__DOT__func3))))))
                                     : ((1U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                         ? ((0x20U 
                                             == (IData)(vlSelfRef.tb_alu_controller__DOT__func7))
                                             ? 7U : 5U)
                                         : 3U)) : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                                     ? 9U
                                                     : 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                                     ? 4U
                                                     : 
                                                    (((0x20U 
                                                       == (IData)(vlSelfRef.tb_alu_controller__DOT__func7)) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op)))
                                                      ? 6U
                                                      : 2U))))
                             : ((1U & (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op))
                                 ? 6U : 2U))),4);
}

void Vtb_alu_controller___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtb_alu_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu_controller___024root*>(voidSelf);
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
