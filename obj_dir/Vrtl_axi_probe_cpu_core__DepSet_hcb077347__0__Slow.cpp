// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe__Syms.h"
#include "Vrtl_axi_probe_cpu_core.h"

VL_ATTR_COLD void Vrtl_axi_probe_cpu_core___stl_sequent__TOP__rtl_axi_probe__dut__U_core__0(Vrtl_axi_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_cpu_core___stl_sequent__TOP__rtl_axi_probe__dut__U_core__0\n"); );
    // Init
    CData/*2:0*/ __PVT__id_sext_op;
    __PVT__id_sext_op = 0;
    CData/*1:0*/ __PVT__forward_a;
    __PVT__forward_a = 0;
    CData/*3:0*/ __PVT__mem_da_wen;
    __PVT__mem_da_wen = 0;
    IData/*31:0*/ __VdfgTmp_hf1e24608__0;
    __VdfgTmp_hf1e24608__0 = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__BLT;
    __PVT__U_CU__DOT__BLT = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__BLTU;
    __PVT__U_CU__DOT__BLTU = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__EXT_OP_B;
    __PVT__U_CU__DOT__EXT_OP_B = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_GE;
    __PVT__U_CU__DOT__ALU_OP_GE = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_GEU;
    __PVT__U_CU__DOT__ALU_OP_GEU = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_DIV;
    __PVT__U_CU__DOT__ALU_OP_DIV = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_DIVU;
    __PVT__U_CU__DOT__ALU_OP_DIVU = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_REM;
    __PVT__U_CU__DOT__ALU_OP_REM = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_REMU;
    __PVT__U_CU__DOT__ALU_OP_REMU = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_EQ;
    __PVT__U_CU__DOT__ALU_OP_EQ = 0;
    CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_NE;
    __PVT__U_CU__DOT__ALU_OP_NE = 0;
    CData/*0:0*/ U_CU__DOT____VdfgTmp_h69618ade__0;
    U_CU__DOT____VdfgTmp_h69618ade__0 = 0;
    CData/*0:0*/ U_CU__DOT____VdfgTmp_h960997ce__0;
    U_CU__DOT____VdfgTmp_h960997ce__0 = 0;
    CData/*0:0*/ U_CU__DOT____VdfgTmp_h9458abcf__0;
    U_CU__DOT____VdfgTmp_h9458abcf__0 = 0;
    CData/*0:0*/ U_CU__DOT____VdfgTmp_h96446c1a__0;
    U_CU__DOT____VdfgTmp_h96446c1a__0 = 0;
    CData/*0:0*/ U_CU__DOT____VdfgTmp_h44aceafa__0;
    U_CU__DOT____VdfgTmp_h44aceafa__0 = 0;
    CData/*0:0*/ U_CU__DOT____VdfgTmp_h94793535__0;
    U_CU__DOT____VdfgTmp_h94793535__0 = 0;
    CData/*0:0*/ U_CU__DOT____VdfgTmp_h698e6d20__0;
    U_CU__DOT____VdfgTmp_h698e6d20__0 = 0;
    // Body
    vlSelf->__PVT__pc_plus_4 = ((IData)(4U) + vlSelf->pc);
    vlSelf->__PVT__wb_rf_we = ((IData)(vlSelf->mem_wb_rf_we) 
                               & (IData)(vlSelf->__PVT__mem_wb_valid));
    vlSelf->__PVT__mem_da_wdata = vlSelf->__PVT__ex_mem_rd2;
    vlSelf->__VdfgTmp_hac861cd7__0 = ((IData)(vlSelf->__PVT__id_ex_rf_we) 
                                      & (0U != (IData)(vlSelf->__PVT__id_ex_rd)));
    __PVT__mem_da_wen = 0U;
    if ((1U == (IData)(vlSelf->__PVT__ex_mem_ram_wop))) {
        if ((2U & vlSelf->__PVT__ex_mem_alu_c)) {
            if ((1U & vlSelf->__PVT__ex_mem_alu_c)) {
                vlSelf->__PVT__mem_da_wdata = (vlSelf->__PVT__ex_mem_rd2 
                                               << 0x18U);
                __PVT__mem_da_wen = 8U;
            } else {
                vlSelf->__PVT__mem_da_wdata = (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__ex_mem_rd2 
                                                               >> 7U)))) 
                                                << 0x18U) 
                                               | (0xff0000U 
                                                  & (vlSelf->__PVT__ex_mem_rd2 
                                                     << 0x10U)));
                __PVT__mem_da_wen = 4U;
            }
        } else if ((1U & vlSelf->__PVT__ex_mem_alu_c)) {
            vlSelf->__PVT__mem_da_wdata = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__ex_mem_rd2 
                                                           >> 7U)))) 
                                            << 0x10U) 
                                           | (0xff00U 
                                              & (vlSelf->__PVT__ex_mem_rd2 
                                                 << 8U)));
            __PVT__mem_da_wen = 2U;
        } else {
            vlSelf->__PVT__mem_da_wdata = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__ex_mem_rd2 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->__PVT__ex_mem_rd2));
            __PVT__mem_da_wen = 1U;
        }
    } else if ((3U == (IData)(vlSelf->__PVT__ex_mem_ram_wop))) {
        if ((2U & vlSelf->__PVT__ex_mem_alu_c)) {
            if ((2U & vlSelf->__PVT__ex_mem_alu_c)) {
                vlSelf->__PVT__mem_da_wdata = (vlSelf->__PVT__ex_mem_rd2 
                                               << 0x10U);
                __PVT__mem_da_wen = 0xcU;
            }
        } else {
            vlSelf->__PVT__mem_da_wdata = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__ex_mem_rd2 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->__PVT__ex_mem_rd2));
            __PVT__mem_da_wen = 3U;
        }
    } else if ((0xfU == (IData)(vlSelf->__PVT__ex_mem_ram_wop))) {
        if ((0U == (3U & vlSelf->__PVT__ex_mem_alu_c))) {
            __PVT__mem_da_wen = vlSelf->__PVT__ex_mem_ram_wop;
        }
    }
    vlSelf->__PVT__id_alua_sel = ((0x17U == (0x7fU 
                                             & vlSelf->if_id_inst)) 
                                  | (0x37U == (0x7fU 
                                               & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__SLT = (IData)((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->if_id_inst)));
    vlSelf->__PVT__ex_is_jalr = ((IData)(vlSelf->__PVT__id_ex_valid) 
                                 & (1U == (IData)(vlSelf->__PVT__id_ex_npc_op)));
    vlSelf->__PVT__U_CU__DOT__ADDI = (IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__RAM_EXT_B = (IData)((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__RAM_EXT_BU = (IData)(
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__RAM_EXT_H = (IData)((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__RAM_EXT_HU = (IData)(
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__RAM_EXT_W = (IData)((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->if_id_inst)));
    vlSelf->ifetch_addr = vlSelf->pc;
    vlSelf->__PVT__U_CU__DOT__RAM_W_B = (IData)((0x23U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__RAM_W_H = (IData)((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__RAM_W_W = (IData)((0x2023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__XORI = (IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__ANDI = (IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__ORI = (IData)((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__SLTI = (IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__SLTIU = (IData)((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__SLLI = (IData)((0x1013U 
                                              == (0xfe00707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__NPC_OP_JALR = (IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->if_id_inst)));
    vlSelf->U_CU__DOT____VdfgTmp_h947ed5b8__0 = (IData)(
                                                        (0x33U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->if_id_inst)));
    U_CU__DOT____VdfgTmp_h96446c1a__0 = (IData)((0x3033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    U_CU__DOT____VdfgTmp_h94793535__0 = (IData)((0x1033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    U_CU__DOT____VdfgTmp_h69618ade__0 = (IData)((0x4033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    U_CU__DOT____VdfgTmp_h960997ce__0 = (IData)((0x7033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    U_CU__DOT____VdfgTmp_h9458abcf__0 = (IData)((0x6033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__mem_is_load = ((IData)(vlSelf->__PVT__ex_mem_valid) 
                                  & (0U != (IData)(vlSelf->__PVT__ex_mem_ram_rop)));
    vlSelf->__PVT__mem_is_store = ((IData)(vlSelf->__PVT__ex_mem_valid) 
                                   & (0U != (IData)(vlSelf->__PVT__ex_mem_ram_wop)));
    __PVT__U_CU__DOT__BLT = (IData)((0x4063U == (0x707fU 
                                                 & vlSelf->if_id_inst)));
    __PVT__U_CU__DOT__BLTU = (IData)((0x6063U == (0x707fU 
                                                  & vlSelf->if_id_inst)));
    __PVT__U_CU__DOT__ALU_OP_GE = (IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->if_id_inst)));
    __PVT__U_CU__DOT__ALU_OP_GEU = (IData)((0x7063U 
                                            == (0x707fU 
                                                & vlSelf->if_id_inst)));
    __PVT__U_CU__DOT__ALU_OP_EQ = (IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->if_id_inst)));
    __PVT__U_CU__DOT__ALU_OP_NE = (IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->if_id_inst)));
    vlSelf->__PVT__duplicate_mul = ((vlSelf->id_ex_pc 
                                     == vlSelf->__PVT__last_mul_pc) 
                                    & (0U != vlSelf->__PVT__last_mul_pc));
    U_CU__DOT____VdfgTmp_h698e6d20__0 = (IData)((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    U_CU__DOT____VdfgTmp_h44aceafa__0 = (IData)((0x5013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__ex_mem_fwd_data = ((0U == (IData)(vlSelf->__PVT__ex_mem_rf_wsel))
                                       ? vlSelf->__PVT__ex_mem_alu_c
                                       : ((3U == (IData)(vlSelf->__PVT__ex_mem_rf_wsel))
                                           ? vlSelf->__PVT__ex_mem_ext
                                           : vlSelf->__PVT__ex_mem_alu_c));
    __VdfgTmp_hf1e24608__0 = ((2U == (IData)(vlSelf->mem_wb_rf_wsel))
                               ? ((IData)(4U) + vlSelf->mem_wb_pc)
                               : ((3U == (IData)(vlSelf->mem_wb_rf_wsel))
                                   ? vlSelf->mem_wb_ext
                                   : 0U));
    vlSelf->__PVT__U_MEXT__DOT__aligned = ((1U == (IData)(vlSelf->__PVT__mem_wb_byte_offs))
                                            ? (vlSelf->__PVT__mem_wb_rdata 
                                               >> 8U)
                                            : ((2U 
                                                == (IData)(vlSelf->__PVT__mem_wb_byte_offs))
                                                ? (vlSelf->__PVT__mem_wb_rdata 
                                                   >> 0x10U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__PVT__mem_wb_byte_offs))
                                                    ? 
                                                   (vlSelf->__PVT__mem_wb_rdata 
                                                    >> 0x18U)
                                                    : vlSelf->__PVT__mem_wb_rdata)));
    vlSelf->U_FWD__DOT____VdfgTmp_h18378549__0 = ((IData)(vlSelf->mem_wb_rf_we) 
                                                  & (0U 
                                                     != (IData)(vlSelf->mem_wb_rd)));
    vlSelf->U_FWD__DOT____VdfgTmp_h11f87e05__0 = ((IData)(vlSelf->__PVT__ex_mem_rf_we) 
                                                  & (0U 
                                                     != (IData)(vlSelf->__PVT__ex_mem_rd)));
    vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU.op 
        = vlSelf->id_ex_alu_op;
    vlSelf->__VdfgTmp_hccde1b87__0 = ((IData)(vlSelf->__VdfgTmp_hac861cd7__0) 
                                      & ((IData)(vlSelf->__PVT__id_ex_rd) 
                                         == (0x1fU 
                                             & (vlSelf->if_id_inst 
                                                >> 0x14U))));
    vlSelf->__PVT__U_CU__DOT__WB_OP_RAM = ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_W) 
                                           | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_B) 
                                              | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_BU) 
                                                 | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_H) 
                                                    | (IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_HU)))));
    vlSelf->__PVT__U_CU__DOT__ALU_OP_SUB = ((IData)(vlSelf->U_CU__DOT____VdfgTmp_h947ed5b8__0) 
                                            & (0x20U 
                                               == (vlSelf->if_id_inst 
                                                   >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__ALU_OP_MUL = ((IData)(vlSelf->U_CU__DOT____VdfgTmp_h947ed5b8__0) 
                                            & (1U == 
                                               (vlSelf->if_id_inst 
                                                >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__SLTU = ((IData)(U_CU__DOT____VdfgTmp_h96446c1a__0) 
                                      & (0U == (vlSelf->if_id_inst 
                                                >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__ALU_OP_MULHU = ((IData)(U_CU__DOT____VdfgTmp_h96446c1a__0) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->if_id_inst 
                                                  >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__SLL = ((IData)(U_CU__DOT____VdfgTmp_h94793535__0) 
                                     & (0U == (vlSelf->if_id_inst 
                                               >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__ALU_OP_MULH = ((IData)(U_CU__DOT____VdfgTmp_h94793535__0) 
                                             & (1U 
                                                == 
                                                (vlSelf->if_id_inst 
                                                 >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__XOR = ((IData)(U_CU__DOT____VdfgTmp_h69618ade__0) 
                                     & (0U == (vlSelf->if_id_inst 
                                               >> 0x19U)));
    __PVT__U_CU__DOT__ALU_OP_DIV = ((IData)(U_CU__DOT____VdfgTmp_h69618ade__0) 
                                    & (1U == (vlSelf->if_id_inst 
                                              >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__AND = ((IData)(U_CU__DOT____VdfgTmp_h960997ce__0) 
                                     & (0U == (vlSelf->if_id_inst 
                                               >> 0x19U)));
    __PVT__U_CU__DOT__ALU_OP_REMU = ((IData)(U_CU__DOT____VdfgTmp_h960997ce__0) 
                                     & (1U == (vlSelf->if_id_inst 
                                               >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__OR = ((IData)(U_CU__DOT____VdfgTmp_h9458abcf__0) 
                                    & (0U == (vlSelf->if_id_inst 
                                              >> 0x19U)));
    __PVT__U_CU__DOT__ALU_OP_REM = ((IData)(U_CU__DOT____VdfgTmp_h9458abcf__0) 
                                    & (1U == (vlSelf->if_id_inst 
                                              >> 0x19U)));
    vlSelf->__PVT__daccess_ren = (((~ (IData)(vlSelf->__PVT__mem_req_sent)) 
                                   & (IData)(vlSelf->__PVT__mem_is_load))
                                   ? ((0U == (IData)(vlSelf->__PVT__ex_mem_ram_rop))
                                       ? 0U : 0xfU)
                                   : 0U);
    vlSelf->__PVT__daccess_wen = (((~ (IData)(vlSelf->__PVT__mem_req_sent)) 
                                   & (IData)(vlSelf->__PVT__mem_is_store))
                                   ? (IData)(__PVT__mem_da_wen)
                                   : 0U);
    vlSelf->__PVT__mem_access = ((IData)(vlSelf->__PVT__mem_is_load) 
                                 | (IData)(vlSelf->__PVT__mem_is_store));
    vlSelf->__PVT__mem_done = (((IData)(vlSelf->__PVT__mem_is_load) 
                                & (IData)(vlSymsp->TOP__rtl_axi_probe__dut.__PVT__dc2cpu_valid)) 
                               | ((IData)(vlSelf->__PVT__mem_is_store) 
                                  & (IData)(vlSymsp->TOP__rtl_axi_probe__dut.__PVT__dc2cpu_wresp)));
    __PVT__U_CU__DOT__EXT_OP_B = ((IData)(__PVT__U_CU__DOT__ALU_OP_EQ) 
                                  | ((IData)(__PVT__U_CU__DOT__ALU_OP_NE) 
                                     | ((IData)(__PVT__U_CU__DOT__BLT) 
                                        | ((IData)(__PVT__U_CU__DOT__ALU_OP_GE) 
                                           | ((IData)(__PVT__U_CU__DOT__BLTU) 
                                              | (IData)(__PVT__U_CU__DOT__ALU_OP_GEU))))));
    vlSelf->__PVT__U_CU__DOT__SRL = ((IData)(U_CU__DOT____VdfgTmp_h698e6d20__0) 
                                     & (0U == (vlSelf->if_id_inst 
                                               >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__SRA = ((IData)(U_CU__DOT____VdfgTmp_h698e6d20__0) 
                                     & (0x20U == (vlSelf->if_id_inst 
                                                  >> 0x19U)));
    __PVT__U_CU__DOT__ALU_OP_DIVU = ((IData)(U_CU__DOT____VdfgTmp_h698e6d20__0) 
                                     & (1U == (vlSelf->if_id_inst 
                                               >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__SRLI = ((IData)(U_CU__DOT____VdfgTmp_h44aceafa__0) 
                                      & (0U == (vlSelf->if_id_inst 
                                                >> 0x19U)));
    vlSelf->__PVT__U_CU__DOT__SRAI = ((IData)(U_CU__DOT____VdfgTmp_h44aceafa__0) 
                                      & (0x20U == (vlSelf->if_id_inst 
                                                   >> 0x19U)));
    vlSelf->__PVT__wb_ram_ext = ((4U & (IData)(vlSelf->__PVT__mem_wb_ram_rop))
                                  ? ((2U & (IData)(vlSelf->__PVT__mem_wb_ram_rop))
                                      ? vlSelf->__PVT__U_MEXT__DOT__aligned
                                      : ((1U & (IData)(vlSelf->__PVT__mem_wb_ram_rop))
                                          ? (0xffffU 
                                             & vlSelf->__PVT__U_MEXT__DOT__aligned)
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__U_MEXT__DOT__aligned 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->__PVT__U_MEXT__DOT__aligned))))
                                  : ((2U & (IData)(vlSelf->__PVT__mem_wb_ram_rop))
                                      ? ((1U & (IData)(vlSelf->__PVT__mem_wb_ram_rop))
                                          ? (0xffU 
                                             & vlSelf->__PVT__U_MEXT__DOT__aligned)
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__U_MEXT__DOT__aligned 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->__PVT__U_MEXT__DOT__aligned)))
                                      : vlSelf->__PVT__U_MEXT__DOT__aligned));
    vlSelf->__VdfgTmp_hcc710bce__0 = ((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h11f87e05__0) 
                                      & ((IData)(vlSelf->__PVT__ex_mem_rd) 
                                         == (0x1fU 
                                             & (vlSelf->if_id_inst 
                                                >> 0x14U))));
    __PVT__forward_a = (((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h11f87e05__0) 
                         & ((~ (IData)(vlSelf->__PVT__id_ex_alua_sel)) 
                            & ((IData)(vlSelf->__PVT__ex_mem_rd) 
                               == (IData)(vlSelf->id_ex_rs1))))
                         ? 1U : (((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h18378549__0) 
                                  & ((~ (IData)(vlSelf->__PVT__id_ex_alua_sel)) 
                                     & ((IData)(vlSelf->id_ex_rs1) 
                                        == (IData)(vlSelf->mem_wb_rd))))
                                  ? 2U : 0U));
    vlSelf->forward_b = (((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h11f87e05__0) 
                          & ((~ (IData)(vlSelf->id_ex_alub_sel)) 
                             & ((IData)(vlSelf->__PVT__ex_mem_rd) 
                                == (IData)(vlSelf->id_ex_rs2))))
                          ? 1U : (((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h18378549__0) 
                                   & ((~ (IData)(vlSelf->id_ex_alub_sel)) 
                                      & ((IData)(vlSelf->id_ex_rs2) 
                                         == (IData)(vlSelf->mem_wb_rd))))
                                   ? 2U : 0U));
    vlSelf->__PVT__id_is_mul = ((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MUL) 
                                | ((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MULH) 
                                   | (IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MULHU)));
    vlSelf->__PVT__mem_stall = ((~ (IData)(vlSelf->__PVT__mem_done)) 
                                & (IData)(vlSelf->__PVT__mem_access));
    __PVT__id_sext_op = ((1U & (- (IData)(((IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_B) 
                                           | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_H) 
                                              | (IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_W)))))) 
                         | ((2U & (- (IData)((IData)(__PVT__U_CU__DOT__EXT_OP_B)))) 
                            | ((3U & (- (IData)(((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->if_id_inst)) 
                                                 | (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->if_id_inst)))))) 
                               | (4U & (- (IData)((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->if_id_inst))))))));
    vlSelf->__PVT__id_npc_op = (3U & ((1U & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__NPC_OP_JALR)))) 
                                      | ((2U & (- (IData)((IData)(__PVT__U_CU__DOT__EXT_OP_B)))) 
                                         | (- (IData)(
                                                      (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->if_id_inst)))))));
    vlSelf->__PVT__id_is_div = ((IData)(__PVT__U_CU__DOT__ALU_OP_DIV) 
                                | ((IData)(__PVT__U_CU__DOT__ALU_OP_DIVU) 
                                   | ((IData)(__PVT__U_CU__DOT__ALU_OP_REM) 
                                      | (IData)(__PVT__U_CU__DOT__ALU_OP_REMU))));
    vlSelf->__PVT__id_alu_op = ((1U & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_SUB)))) 
                                | ((2U & (- (IData)(
                                                    ((IData)(vlSelf->__PVT__U_CU__DOT__XORI) 
                                                     | (IData)(vlSelf->__PVT__U_CU__DOT__XOR))))) 
                                   | ((4U & (- (IData)(
                                                       ((IData)(vlSelf->__PVT__U_CU__DOT__ANDI) 
                                                        | (IData)(vlSelf->__PVT__U_CU__DOT__AND))))) 
                                      | ((3U & (- (IData)(
                                                          ((IData)(vlSelf->__PVT__U_CU__DOT__ORI) 
                                                           | (IData)(vlSelf->__PVT__U_CU__DOT__OR))))) 
                                         | ((0xaU & 
                                             (- (IData)(
                                                        ((IData)(vlSelf->__PVT__U_CU__DOT__SLTI) 
                                                         | ((IData)(vlSelf->__PVT__U_CU__DOT__SLT) 
                                                            | (IData)(__PVT__U_CU__DOT__BLT)))))) 
                                            | ((0xbU 
                                                & (- (IData)(
                                                             ((IData)(vlSelf->__PVT__U_CU__DOT__SLTIU) 
                                                              | ((IData)(vlSelf->__PVT__U_CU__DOT__SLTU) 
                                                                 | (IData)(__PVT__U_CU__DOT__BLTU)))))) 
                                               | ((0x17U 
                                                   & (- (IData)((IData)(__PVT__U_CU__DOT__ALU_OP_GE)))) 
                                                  | ((0x18U 
                                                      & (- (IData)((IData)(__PVT__U_CU__DOT__ALU_OP_GEU)))) 
                                                     | ((0x10U 
                                                         & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MUL)))) 
                                                        | ((0x11U 
                                                            & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MULH)))) 
                                                           | ((0x12U 
                                                               & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MULHU)))) 
                                                              | ((0x13U 
                                                                  & (- (IData)((IData)(__PVT__U_CU__DOT__ALU_OP_DIV)))) 
                                                                 | ((0x14U 
                                                                     & (- (IData)((IData)(__PVT__U_CU__DOT__ALU_OP_DIVU)))) 
                                                                    | ((0x15U 
                                                                        & (- (IData)((IData)(__PVT__U_CU__DOT__ALU_OP_REM)))) 
                                                                       | ((0x16U 
                                                                           & (- (IData)((IData)(__PVT__U_CU__DOT__ALU_OP_REMU)))) 
                                                                          | ((5U 
                                                                              & (- (IData)(
                                                                                ((IData)(vlSelf->__PVT__U_CU__DOT__SLLI) 
                                                                                | (IData)(vlSelf->__PVT__U_CU__DOT__SLL))))) 
                                                                             | ((6U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->__PVT__U_CU__DOT__SRLI) 
                                                                                | (IData)(vlSelf->__PVT__U_CU__DOT__SRL))))) 
                                                                                | ((7U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->__PVT__U_CU__DOT__SRAI) 
                                                                                | (IData)(vlSelf->__PVT__U_CU__DOT__SRA))))) 
                                                                                | ((8U 
                                                                                & (- (IData)((IData)(__PVT__U_CU__DOT__ALU_OP_EQ)))) 
                                                                                | (9U 
                                                                                & (- (IData)((IData)(__PVT__U_CU__DOT__ALU_OP_NE)))))))))))))))))))))));
    vlSelf->__PVT__id_alub_sel = (((IData)(vlSelf->__PVT__U_CU__DOT__ADDI) 
                                   | ((IData)(vlSelf->__PVT__U_CU__DOT__ORI) 
                                      | ((IData)(vlSelf->__PVT__U_CU__DOT__XORI) 
                                         | ((IData)(vlSelf->__PVT__U_CU__DOT__ANDI) 
                                            | ((IData)(vlSelf->__PVT__U_CU__DOT__SLTI) 
                                               | ((IData)(vlSelf->__PVT__U_CU__DOT__SLTIU) 
                                                  | ((IData)(vlSelf->__PVT__U_CU__DOT__SLLI) 
                                                     | ((IData)(vlSelf->__PVT__U_CU__DOT__SRLI) 
                                                        | ((IData)(vlSelf->__PVT__U_CU__DOT__SRAI) 
                                                           | (IData)(vlSelf->__PVT__U_CU__DOT__WB_OP_RAM)))))))))) 
                                  | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_B) 
                                     | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_H) 
                                        | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_W) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->if_id_inst)) 
                                              | ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->if_id_inst)) 
                                                 | ((IData)(vlSelf->__PVT__U_CU__DOT__NPC_OP_JALR) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->if_id_inst)))))))));
    vlSelf->__PVT__wb_rf_wD = ((1U == (IData)(vlSelf->mem_wb_rf_wsel))
                                ? vlSelf->__PVT__wb_ram_ext
                                : ((0U == (IData)(vlSelf->mem_wb_rf_wsel))
                                    ? vlSelf->__PVT__mem_wb_alu_c
                                    : __VdfgTmp_hf1e24608__0));
    vlSelf->__PVT__wb_forward_data = ((0U == (IData)(vlSelf->mem_wb_rf_wsel))
                                       ? vlSelf->__PVT__mem_wb_alu_c
                                       : ((1U == (IData)(vlSelf->mem_wb_rf_wsel))
                                           ? vlSelf->__PVT__wb_ram_ext
                                           : __VdfgTmp_hf1e24608__0));
    vlSelf->__PVT__id_ext = ((4U & (IData)(__PVT__id_sext_op))
                              ? ((2U & (IData)(__PVT__id_sext_op))
                                  ? 0U : ((1U & (IData)(__PVT__id_sext_op))
                                           ? 0U : (
                                                   ((- (IData)(
                                                               (vlSelf->if_id_inst 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->if_id_inst 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->if_id_inst) 
                                                         | ((0x800U 
                                                             & (vlSelf->if_id_inst 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->if_id_inst 
                                                                  >> 0x14U))))))))
                              : ((2U & (IData)(__PVT__id_sext_op))
                                  ? ((1U & (IData)(__PVT__id_sext_op))
                                      ? (0xfffff000U 
                                         & vlSelf->if_id_inst)
                                      : (((- (IData)(
                                                     (vlSelf->if_id_inst 
                                                      >> 0x1fU))) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & (vlSelf->if_id_inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->if_id_inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->if_id_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->if_id_inst 
                                                        >> 7U)))))))
                                  : ((1U & (IData)(__PVT__id_sext_op))
                                      ? (((- (IData)(
                                                     (vlSelf->if_id_inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->if_id_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->if_id_inst 
                                                  >> 7U))))
                                      : (((- (IData)(
                                                     (vlSelf->if_id_inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->if_id_inst 
                                            >> 0x14U)))));
    vlSelf->__PVT__id_is_jal = ((IData)(vlSelf->__PVT__if_id_valid) 
                                & (3U == (IData)(vlSelf->__PVT__id_npc_op)));
    vlSelf->__PVT__load_use_stall = ((IData)(vlSelf->__PVT__id_ex_valid) 
                                     & ((IData)(vlSelf->__PVT__if_id_valid) 
                                        & ((0U != (IData)(vlSelf->__PVT__id_ex_ram_rop)) 
                                           & ((((~ (IData)(vlSelf->__PVT__id_alua_sel)) 
                                                & ((0x1fU 
                                                    & (vlSelf->if_id_inst 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->__PVT__id_ex_rd))) 
                                               | ((~ (IData)(vlSelf->__PVT__id_alub_sel)) 
                                                  & ((0x1fU 
                                                      & (vlSelf->if_id_inst 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelf->__PVT__id_ex_rd)))) 
                                              & (0U 
                                                 != (IData)(vlSelf->__PVT__id_ex_rd))))));
    vlSelf->__PVT__ex_alu_a = ((1U == (IData)(__PVT__forward_a))
                                ? vlSelf->__PVT__ex_mem_fwd_data
                                : ((2U == (IData)(__PVT__forward_a))
                                    ? vlSelf->__PVT__wb_forward_data
                                    : ((IData)(vlSelf->__PVT__id_ex_alua_sel)
                                        ? vlSelf->id_ex_pc
                                        : vlSelf->__PVT__id_ex_rd1)));
    vlSelf->ex_alu_b = ((1U == (IData)(vlSelf->forward_b))
                         ? vlSelf->__PVT__ex_mem_fwd_data
                         : ((2U == (IData)(vlSelf->forward_b))
                             ? vlSelf->__PVT__wb_forward_data
                             : ((IData)(vlSelf->id_ex_alub_sel)
                                 ? vlSelf->id_ex_ext
                                 : vlSelf->__PVT__id_ex_rd2)));
    vlSelf->__PVT__id_br_target = (vlSelf->__PVT__id_ext 
                                   + vlSelf->if_id_pc);
}

VL_ATTR_COLD void Vrtl_axi_probe_cpu_core___stl_sequent__TOP__rtl_axi_probe__dut__U_core__1(Vrtl_axi_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_cpu_core___stl_sequent__TOP__rtl_axi_probe__dut__U_core__1\n"); );
    // Body
    vlSelf->ex_br_taken = ((IData)(vlSelf->__PVT__id_ex_valid) 
                           & ((2U == (IData)(vlSelf->__PVT__id_ex_npc_op)) 
                              & (IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU.__PVT__br)));
    vlSelf->ex_alu_c = vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU.__PVT__c;
    vlSelf->ifetch_req = (1U & (~ ((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rst) 
                                   | ((IData)(vlSelf->__PVT__fetch_pending) 
                                      | (IData)(vlSelf->ifetch_valid)))));
}

VL_ATTR_COLD void Vrtl_axi_probe_cpu_core___stl_sequent__TOP__rtl_axi_probe__dut__U_core__2(Vrtl_axi_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_cpu_core___stl_sequent__TOP__rtl_axi_probe__dut__U_core__2\n"); );
    // Body
    vlSelf->__PVT__mul_div_stall = ((IData)(vlSelf->__PVT__id_ex_valid) 
                                    & (((IData)(vlSelf->__PVT__id_ex_is_div) 
                                        | (IData)(vlSelf->__PVT__id_ex_is_mul)) 
                                       & ((~ (IData)(vlSelf->__PVT__duplicate_mul)) 
                                          & ((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU.__PVT__busy) 
                                             | (IData)(vlSelf->__PVT__mul_div_entering)))));
    vlSelf->__PVT__mul_div_release = ((~ (IData)(vlSelf->__PVT__mul_div_stall)) 
                                      & (IData)(vlSelf->__PVT__mul_div_stall_d));
    vlSelf->stall_d = ((IData)(vlSelf->__PVT__mem_stall) 
                       | (IData)(vlSelf->__PVT__mul_div_stall));
    vlSelf->flush_d = ((IData)(vlSelf->ex_br_taken) 
                       | ((IData)(vlSelf->__PVT__ex_is_jalr) 
                          | ((IData)(vlSelf->__PVT__load_use_stall) 
                             | ((IData)(vlSelf->__PVT__mul_div_release) 
                                & ((IData)(vlSelf->__PVT__if_id_valid) 
                                   & (vlSelf->id_ex_pc 
                                      == vlSelf->if_id_pc))))));
    vlSelf->flush_f = ((~ (IData)(vlSelf->__PVT__mem_stall)) 
                       & ((IData)(vlSelf->__PVT__id_is_jal) 
                          | ((IData)(vlSelf->ex_br_taken) 
                             | ((IData)(vlSelf->__PVT__ex_is_jalr) 
                                | (IData)(vlSelf->__PVT__mul_div_release)))));
    vlSelf->__PVT__pc_next = ((IData)(vlSelf->__PVT__mul_div_release)
                               ? (((IData)(vlSelf->__PVT__if_id_valid) 
                                   & (vlSelf->if_id_pc 
                                      != vlSelf->id_ex_pc))
                                   ? ((IData)(4U) + vlSelf->if_id_pc)
                                   : ((IData)(4U) + vlSelf->id_ex_pc))
                               : ((IData)(vlSelf->ex_br_taken)
                                   ? vlSelf->__PVT__id_ex_br_target
                                   : ((IData)(vlSelf->__PVT__ex_is_jalr)
                                       ? (0xfffffffeU 
                                          & vlSelf->ex_alu_c)
                                       : ((IData)(vlSelf->__PVT__id_is_jal)
                                           ? vlSelf->__PVT__id_br_target
                                           : ((IData)(4U) 
                                              + vlSelf->pc)))));
    vlSelf->__PVT__stall_e = ((IData)(vlSelf->stall_d) 
                              | (IData)(vlSelf->__PVT__duplicate_mul));
    vlSelf->stall_f = ((IData)(vlSelf->__PVT__mem_stall) 
                       | ((~ (IData)(vlSelf->flush_f)) 
                          & (((~ (IData)(vlSelf->flush_f)) 
                              & (IData)(vlSelf->__PVT__load_use_stall)) 
                             | (IData)(vlSelf->__PVT__mul_div_stall))));
}
