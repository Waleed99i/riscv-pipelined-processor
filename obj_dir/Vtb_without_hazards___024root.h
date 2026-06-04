// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_without_hazards.h for the primary calling header

#ifndef VERILATED_VTB_WITHOUT_HAZARDS___024ROOT_H_
#define VERILATED_VTB_WITHOUT_HAZARDS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_without_hazards__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_without_hazards___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_without_hazards__DOT__clk;
        CData/*0:0*/ tb_without_hazards__DOT__rst;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__stall;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__flush;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__we_rf_1;
        CData/*1:0*/ tb_without_hazards__DOT__dut__DOT__alu_op_1;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__mem_to_reg_1;
        CData/*1:0*/ tb_without_hazards__DOT__dut__DOT__rmask_1;
        CData/*1:0*/ tb_without_hazards__DOT__dut__DOT__wmask_1;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__mem_wen_1;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__load_unsigned_1;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__branch_1;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__jump_1;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__jump_reg_1;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__we_rf_2;
        CData/*1:0*/ tb_without_hazards__DOT__dut__DOT__alu_op_2;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__mem_to_reg_2;
        CData/*1:0*/ tb_without_hazards__DOT__dut__DOT__rmask_2;
        CData/*1:0*/ tb_without_hazards__DOT__dut__DOT__wmask_2;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__mem_wen_2;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__load_unsigned_2;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__branch_2;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__jump_2;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__jump_reg_2;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__branch_taken_2;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__we_rf_3;
        CData/*4:0*/ tb_without_hazards__DOT__dut__DOT__waddr_rf_3;
        CData/*0:0*/ tb_without_hazards__DOT__dut__DOT__mem_to_reg_3;
        CData/*3:0*/ tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation;
        CData/*7:0*/ tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val;
        CData/*6:0*/ __VdfgRegularize_hebeb780c_0_0;
        CData/*2:0*/ __VdfgRegularize_hebeb780c_0_1;
        CData/*4:0*/ __VdfgRegularize_hebeb780c_0_2;
        CData/*4:0*/ __VdfgRegularize_hebeb780c_0_3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_without_hazards__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__pc_next;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__pc;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__imm_1;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__inst_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__pc_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__imm_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__rd1_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__rd2_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__mem_rdata_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__alu_srcB_2;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__alu_out_3;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__mem_rdata_3;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result;
        IData/*31:0*/ tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<IData/*31:0*/, 1048576> tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 1048576> tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc3a9e73a__0;
    VlTriggerScheduler __VtrigSched_hc3a9e690__0;

    // INTERNAL VARIABLES
    Vtb_without_hazards__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_without_hazards___024root(Vtb_without_hazards__Syms* symsp, const char* namep);
    ~Vtb_without_hazards___024root();
    VL_UNCOPYABLE(Vtb_without_hazards___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
