// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_alu__Syms.h"


void Vtb_alu___024root__trace_chg_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_alu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_chg_0\n"); );
    // Body
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_alu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_alu___024root__trace_chg_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_chg_0_sub_0\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_alu__DOT__opA),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_alu__DOT__opB),32);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_alu__DOT__alu_operation),4);
        bufp->chgIData(oldp+3,(((8U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                 ? ((- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                    >> 1U))))) 
                                    & (((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                         ? (1U & (- (IData)(
                                                            (vlSelfRef.tb_alu__DOT__opA 
                                                             < vlSelfRef.tb_alu__DOT__opB))))
                                         : (1U & (- (IData)(
                                                            VL_LTS_III(32, vlSelfRef.tb_alu__DOT__opA, vlSelfRef.tb_alu__DOT__opB))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                         >> 2U)))))))
                                 : ((4U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                     ? ((2U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                         ? ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                             ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_alu__DOT__opA, 
                                                              (0x0000001fU 
                                                               & vlSelfRef.tb_alu__DOT__opB))
                                             : (vlSelfRef.tb_alu__DOT__opA 
                                                - vlSelfRef.tb_alu__DOT__opB))
                                         : ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                             ? (vlSelfRef.tb_alu__DOT__opA 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.tb_alu__DOT__opB))
                                             : (vlSelfRef.tb_alu__DOT__opA 
                                                << 
                                                (0x0000001fU 
                                                 & vlSelfRef.tb_alu__DOT__opB))))
                                     : ((2U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                         ? ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                             ? (vlSelfRef.tb_alu__DOT__opA 
                                                ^ vlSelfRef.tb_alu__DOT__opB)
                                             : (vlSelfRef.tb_alu__DOT__opA 
                                                + vlSelfRef.tb_alu__DOT__opB))
                                         : ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                             ? (vlSelfRef.tb_alu__DOT__opA 
                                                | vlSelfRef.tb_alu__DOT__opB)
                                             : (vlSelfRef.tb_alu__DOT__opA 
                                                & vlSelfRef.tb_alu__DOT__opB)))))),32);
        bufp->chgBit(oldp+4,((0U == ((8U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                      ? ((- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                         >> 1U))))) 
                                         & (((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                              ? (1U 
                                                 & (- (IData)(
                                                              (vlSelfRef.tb_alu__DOT__opA 
                                                               < vlSelfRef.tb_alu__DOT__opB))))
                                              : (1U 
                                                 & (- (IData)(
                                                              VL_LTS_III(32, vlSelfRef.tb_alu__DOT__opA, vlSelfRef.tb_alu__DOT__opB))))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                              >> 2U)))))))
                                      : ((4U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                          ? ((2U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_alu__DOT__opA, 
                                                                (0x0000001fU 
                                                                 & vlSelfRef.tb_alu__DOT__opB))
                                                  : 
                                                 (vlSelfRef.tb_alu__DOT__opA 
                                                  - vlSelfRef.tb_alu__DOT__opB))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                  ? 
                                                 (vlSelfRef.tb_alu__DOT__opA 
                                                  >> 
                                                  (0x0000001fU 
                                                   & vlSelfRef.tb_alu__DOT__opB))
                                                  : 
                                                 (vlSelfRef.tb_alu__DOT__opA 
                                                  << 
                                                  (0x0000001fU 
                                                   & vlSelfRef.tb_alu__DOT__opB))))
                                          : ((2U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                  ? 
                                                 (vlSelfRef.tb_alu__DOT__opA 
                                                  ^ vlSelfRef.tb_alu__DOT__opB)
                                                  : 
                                                 (vlSelfRef.tb_alu__DOT__opA 
                                                  + vlSelfRef.tb_alu__DOT__opB))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                  ? 
                                                 (vlSelfRef.tb_alu__DOT__opA 
                                                  | vlSelfRef.tb_alu__DOT__opB)
                                                  : 
                                                 (vlSelfRef.tb_alu__DOT__opA 
                                                  & vlSelfRef.tb_alu__DOT__opB))))))));
    }
}

void Vtb_alu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_cleanup\n"); );
    // Body
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
