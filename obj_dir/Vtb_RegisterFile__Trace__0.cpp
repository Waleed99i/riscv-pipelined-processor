// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_RegisterFile__Syms.h"


void Vtb_RegisterFile___024root__trace_chg_0_sub_0(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_RegisterFile___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_chg_0\n"); );
    // Body
    Vtb_RegisterFile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_RegisterFile___024root*>(voidSelf);
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_RegisterFile___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_RegisterFile___024root__trace_chg_0_sub_0(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_chg_0_sub_0\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_RegisterFile__DOT__rs1),5);
        bufp->chgCData(oldp+1,(vlSelfRef.tb_RegisterFile__DOT__rs2),5);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_RegisterFile__DOT__waddr_rf),5);
        bufp->chgBit(oldp+3,(vlSelfRef.tb_RegisterFile__DOT__we_rf));
        bufp->chgIData(oldp+4,(vlSelfRef.tb_RegisterFile__DOT__wd_rf),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+5,((vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf
                                [vlSelfRef.tb_RegisterFile__DOT__rs1] 
                                & (- (IData)((0U != (IData)(vlSelfRef.tb_RegisterFile__DOT__rs1)))))),32);
        bufp->chgIData(oldp+6,((vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf
                                [vlSelfRef.tb_RegisterFile__DOT__rs2] 
                                & (- (IData)((0U != (IData)(vlSelfRef.tb_RegisterFile__DOT__rs2)))))),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[31]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[30]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[29]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[28]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[27]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[26]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[25]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[24]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[23]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[22]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[21]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[20]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[18]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[17]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[16]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[15]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[14]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[13]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[12]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[11]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[10]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[9]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[8]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[7]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[6]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[5]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[4]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[3]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[2]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[1]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[0]),32);
    }
    bufp->chgBit(oldp+39,(vlSelfRef.tb_RegisterFile__DOT__clk));
}

void Vtb_RegisterFile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_cleanup\n"); );
    // Body
    Vtb_RegisterFile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_RegisterFile___024root*>(voidSelf);
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
