// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_RegisterFile__Syms.h"


VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_init_sub__TOP__0(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_init_sub__TOP__0\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"waddr_rf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"we_rf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"wd_rf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"we_rf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"waddr_rf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"wd_rf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "rf", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_init_dtype_sub____0(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_init_dtype____0(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_init_dtype____0\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_RegisterFile___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_init_dtype_sub____0(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_init_dtype_sub____0\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_init_top(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_init_top\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_RegisterFile___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_RegisterFile___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_RegisterFile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_register(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_register\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_RegisterFile___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_RegisterFile___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_RegisterFile___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_RegisterFile___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_const_0\n"); );
    // Body
    Vtb_RegisterFile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_RegisterFile___024root*>(voidSelf);
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_full_0_sub_0(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_full_0\n"); );
    // Body
    Vtb_RegisterFile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_RegisterFile___024root*>(voidSelf);
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_RegisterFile___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_full_0_sub_0(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root__trace_full_0_sub_0\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_RegisterFile__DOT__rs1),5);
    bufp->fullCData(oldp+1,(vlSelfRef.tb_RegisterFile__DOT__rs2),5);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_RegisterFile__DOT__waddr_rf),5);
    bufp->fullBit(oldp+3,(vlSelfRef.tb_RegisterFile__DOT__we_rf));
    bufp->fullIData(oldp+4,(vlSelfRef.tb_RegisterFile__DOT__wd_rf),32);
    bufp->fullIData(oldp+5,((vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf
                             [vlSelfRef.tb_RegisterFile__DOT__rs1] 
                             & (- (IData)((0U != (IData)(vlSelfRef.tb_RegisterFile__DOT__rs1)))))),32);
    bufp->fullIData(oldp+6,((vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf
                             [vlSelfRef.tb_RegisterFile__DOT__rs2] 
                             & (- (IData)((0U != (IData)(vlSelfRef.tb_RegisterFile__DOT__rs2)))))),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[31]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[30]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[29]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[28]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[27]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[26]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[25]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[24]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[23]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[22]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[21]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[20]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[19]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[18]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[17]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[16]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[15]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[14]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[13]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[12]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[11]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[10]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[9]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[8]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[7]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[6]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[5]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[4]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[3]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[2]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[1]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[0]),32);
    bufp->fullBit(oldp+39,(vlSelfRef.tb_RegisterFile__DOT__clk));
}
