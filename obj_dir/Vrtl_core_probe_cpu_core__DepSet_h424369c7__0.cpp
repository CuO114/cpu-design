// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe__Syms.h"
#include "Vrtl_core_probe_cpu_core.h"

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___ico_sequent__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___ico_sequent__TOP__rtl_core_probe__dut__0\n"); );
    // Init
    CData/*2:0*/ __PVT__id_sext_op;
    __PVT__id_sext_op = 0;
    CData/*1:0*/ __PVT__forward_a;
    __PVT__forward_a = 0;
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
    vlSelf->ifetch_addr = vlSelf->pc;
    vlSelf->__PVT__pc_plus_4 = ((IData)(4U) + vlSelf->pc);
    vlSelf->ifetch_req = (1U & (~ ((IData)(vlSymsp->TOP__rtl_core_probe.__PVT__rst) 
                                   | ((IData)(vlSelf->__PVT__fetch_pending) 
                                      | (IData)(vlSelf->ifetch_valid)))));
    vlSelf->__VdfgTmp_hccde1b87__0 = ((IData)(vlSelf->__VdfgTmp_hac861cd7__0) 
                                      & ((IData)(vlSelf->__PVT__id_ex_rd) 
                                         == (0x1fU 
                                             & (vlSelf->if_id_inst 
                                                >> 0x14U))));
    vlSelf->__VdfgTmp_hcc710bce__0 = ((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h11f87e05__0) 
                                      & ((IData)(vlSelf->__PVT__ex_mem_rd) 
                                         == (0x1fU 
                                             & (vlSelf->if_id_inst 
                                                >> 0x14U))));
    vlSelf->__PVT__id_alua_sel = ((0x17U == (0x7fU 
                                             & vlSelf->if_id_inst)) 
                                  | (0x37U == (0x7fU 
                                               & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__SLT = (IData)((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->if_id_inst)));
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
    vlSelf->__VdfgTmp_hf1e24608__0 = ((2U == (IData)(vlSelf->mem_wb_rf_wsel))
                                       ? ((IData)(4U) 
                                          + vlSelf->mem_wb_pc)
                                       : ((3U == (IData)(vlSelf->mem_wb_rf_wsel))
                                           ? vlSelf->mem_wb_ext
                                           : 0U));
    vlSelf->U_FWD__DOT____VdfgTmp_h18378549__0 = ((IData)(vlSelf->mem_wb_rf_we) 
                                                  & (0U 
                                                     != (IData)(vlSelf->mem_wb_rd)));
    vlSymsp->TOP__rtl_core_probe__dut__U_ALU.op = vlSelf->id_ex_alu_op;
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
    vlSelf->__PVT__wb_forward_data = ((0U == (IData)(vlSelf->mem_wb_rf_wsel))
                                       ? vlSelf->__PVT__mem_wb_alu_c
                                       : ((1U == (IData)(vlSelf->mem_wb_rf_wsel))
                                           ? vlSelf->__PVT__wb_ram_ext
                                           : vlSelf->__VdfgTmp_hf1e24608__0));
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
    vlSelf->__PVT__id_br_target = (vlSelf->__PVT__id_ext 
                                   + vlSelf->if_id_pc);
}

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___ico_sequent__TOP__rtl_core_probe__dut__1(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___ico_sequent__TOP__rtl_core_probe__dut__1\n"); );
    // Body
    vlSelf->ex_br_taken = ((IData)(vlSelf->__PVT__id_ex_valid) 
                           & ((2U == (IData)(vlSelf->__PVT__id_ex_npc_op)) 
                              & (IData)(vlSymsp->TOP__rtl_core_probe__dut__U_ALU.__PVT__br)));
    vlSelf->__PVT__mul_div_stall = ((IData)(vlSelf->__PVT__id_ex_valid) 
                                    & (((IData)(vlSelf->__PVT__id_ex_is_div) 
                                        | (IData)(vlSelf->__PVT__id_ex_is_mul)) 
                                       & ((~ (IData)(vlSelf->__PVT__duplicate_mul)) 
                                          & ((IData)(vlSymsp->TOP__rtl_core_probe__dut__U_ALU.__PVT__busy) 
                                             | (IData)(vlSelf->__PVT__mul_div_entering)))));
    vlSelf->ex_alu_c = vlSymsp->TOP__rtl_core_probe__dut__U_ALU.__PVT__c;
    vlSelf->stall_d = ((IData)(vlSelf->__PVT__mem_stall) 
                       | (IData)(vlSelf->__PVT__mul_div_stall));
    vlSelf->__PVT__mul_div_release = ((~ (IData)(vlSelf->__PVT__mul_div_stall)) 
                                      & (IData)(vlSelf->__PVT__mul_div_stall_d));
    vlSelf->__PVT__stall_e = ((IData)(vlSelf->stall_d) 
                              | (IData)(vlSelf->__PVT__duplicate_mul));
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
    vlSelf->stall_f = ((IData)(vlSelf->__PVT__mem_stall) 
                       | ((~ (IData)(vlSelf->flush_f)) 
                          & (((~ (IData)(vlSelf->flush_f)) 
                              & (IData)(vlSelf->__PVT__load_use_stall)) 
                             | (IData)(vlSelf->__PVT__mul_div_stall))));
}

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___act_sequent__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___act_sequent__TOP__rtl_core_probe__dut__0\n"); );
    // Body
    vlSelf->ifetch_req = (1U & (~ ((IData)(vlSymsp->TOP__rtl_core_probe.__PVT__rst) 
                                   | ((IData)(vlSelf->__PVT__fetch_pending) 
                                      | (IData)(vlSelf->ifetch_valid)))));
}

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__0\n"); );
    // Body
    vlSelf->__Vdly__discard_fetch = vlSelf->__PVT__discard_fetch;
    vlSelf->__Vdly__mem_req_sent = vlSelf->__PVT__mem_req_sent;
    vlSelf->__Vdly__fetch_pc_r = vlSelf->__PVT__fetch_pc_r;
    vlSelf->__Vdly__fetch_inst_r = vlSelf->__PVT__fetch_inst_r;
    vlSelf->__Vdly__fetch_pending = vlSelf->__PVT__fetch_pending;
    if (vlSymsp->TOP__rtl_core_probe.__PVT__rst) {
        vlSelf->__Vdly__discard_fetch = 0U;
        vlSelf->__Vdly__mem_req_sent = 0U;
        vlSelf->__PVT__id_ex_br_target = 0U;
        vlSelf->__PVT__id_ex_npc_op = 0U;
        vlSelf->__PVT__id_ex_alua_sel = 0U;
        vlSelf->id_ex_alub_sel = 0U;
        vlSelf->id_ex_alu_op = 0U;
        vlSelf->__PVT__mem_wb_byte_offs = 0U;
        vlSelf->mem_wb_ext = 0U;
        vlSelf->__PVT__id_ex_is_mul = 0U;
        vlSelf->__PVT__id_ex_is_div = 0U;
        vlSelf->__PVT__last_mul_pc = 0U;
        vlSelf->mem_wb_pc = 0U;
        vlSelf->__PVT__ex_mem_ram_wop = 0U;
        vlSelf->__PVT__mem_wb_ram_rop = 0U;
        vlSelf->id_ex_rs2 = 0U;
        vlSelf->id_ex_rs1 = 0U;
        vlSelf->__PVT__ex_mem_rd2 = 0U;
        vlSelf->__PVT__id_ex_rd1 = 0U;
        vlSelf->__PVT__mem_wb_rdata = 0U;
        vlSelf->__PVT__ex_mem_ext = 0U;
        vlSelf->__PVT__id_ex_ram_wop = 0U;
        vlSelf->__PVT__id_ex_rd2 = 0U;
        vlSelf->id_ex_ext = 0U;
    } else {
        if (vlSelf->flush_f) {
            vlSelf->__Vdly__discard_fetch = (1U & (~ (IData)(vlSelf->ifetch_valid)));
        } else if (((IData)(vlSelf->__PVT__discard_fetch) 
                    & (IData)(vlSelf->ifetch_valid))) {
            vlSelf->__Vdly__discard_fetch = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__mem_access)) 
                   | (IData)(vlSelf->__PVT__mem_done)))) {
            vlSelf->__Vdly__mem_req_sent = 0U;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__mem_req_sent)))) {
            vlSelf->__Vdly__mem_req_sent = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__mem_stall)))) {
            vlSelf->__PVT__mem_wb_byte_offs = (3U & vlSelf->__PVT__ex_mem_alu_c);
            vlSelf->mem_wb_ext = vlSelf->__PVT__ex_mem_ext;
            vlSelf->mem_wb_pc = vlSelf->ex_mem_pc;
            if (((IData)(vlSelf->__PVT__stall_e) & 
                 (~ (IData)(vlSelf->__PVT__mul_div_stall)))) {
                vlSelf->__PVT__ex_mem_ram_wop = 0U;
            } else if ((1U & (~ (IData)(vlSelf->__PVT__mul_div_stall)))) {
                vlSelf->__PVT__ex_mem_ram_wop = ((IData)(vlSelf->__PVT__id_ex_valid)
                                                  ? (IData)(vlSelf->__PVT__id_ex_ram_wop)
                                                  : 0U);
            }
            vlSelf->__PVT__mem_wb_ram_rop = vlSelf->__PVT__ex_mem_ram_rop;
            if ((1U & (~ ((IData)(vlSelf->__PVT__stall_e) 
                          & (~ (IData)(vlSelf->__PVT__mul_div_stall)))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__mul_div_stall)))) {
                    vlSelf->__PVT__ex_mem_rd2 = vlSelf->__PVT__id_ex_rd2;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->flush_d)))) {
            if ((1U & (~ (IData)(vlSelf->stall_d)))) {
                vlSelf->__PVT__id_ex_br_target = vlSelf->__PVT__id_br_target;
                vlSelf->id_ex_rs2 = (0x1fU & (vlSelf->if_id_inst 
                                              >> 0x14U));
                vlSelf->id_ex_rs1 = (0x1fU & (vlSelf->if_id_inst 
                                              >> 0xfU));
                vlSelf->__PVT__id_ex_rd1 = (((IData)(vlSelf->__VdfgTmp_hac861cd7__0) 
                                             & ((IData)(vlSelf->__PVT__id_ex_rd) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->if_id_inst 
                                                    >> 0xfU))))
                                             ? vlSelf->ex_alu_c
                                             : (((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h11f87e05__0) 
                                                 & ((IData)(vlSelf->__PVT__ex_mem_rd) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->if_id_inst 
                                                        >> 0xfU))))
                                                 ? vlSelf->__PVT__ex_mem_alu_c
                                                 : 
                                                (((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h18378549__0) 
                                                  & ((IData)(vlSelf->mem_wb_rd) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->if_id_inst 
                                                         >> 0xfU))))
                                                  ? vlSelf->__PVT__wb_forward_data
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->if_id_inst 
                                                       >> 0xfU)))
                                                   ? 0U
                                                   : 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlSelf->if_id_inst 
                                                         >> 0xfU) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->__PVT__U_RF__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelf->if_id_inst 
                                                        >> 0xfU) 
                                                       - (IData)(1U)))]
                                                    : 0U)))));
                vlSelf->__PVT__id_ex_rd2 = ((IData)(vlSelf->__VdfgTmp_hccde1b87__0)
                                             ? vlSelf->ex_alu_c
                                             : ((IData)(vlSelf->__VdfgTmp_hcc710bce__0)
                                                 ? vlSelf->__PVT__ex_mem_alu_c
                                                 : 
                                                ((IData)(vlSelf->__VdfgTmp_hccde1b87__0)
                                                  ? vlSelf->ex_alu_c
                                                  : 
                                                 ((IData)(vlSelf->__VdfgTmp_hcc710bce__0)
                                                   ? vlSelf->__PVT__ex_mem_alu_c
                                                   : 
                                                  (((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h18378549__0) 
                                                    & ((IData)(vlSelf->mem_wb_rd) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->if_id_inst 
                                                           >> 0x14U))))
                                                    ? vlSelf->__PVT__wb_forward_data
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->if_id_inst 
                                                         >> 0x14U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & ((vlSelf->if_id_inst 
                                                           >> 0x14U) 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->__PVT__U_RF__DOT__regs
                                                     [
                                                     (0x1fU 
                                                      & ((vlSelf->if_id_inst 
                                                          >> 0x14U) 
                                                         - (IData)(1U)))]
                                                      : 0U)))))));
            }
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__mem_stall)))) {
            if (((IData)(vlSelf->__PVT__mem_is_load) 
                 & (IData)(vlSymsp->TOP__rtl_core_probe.__PVT__daccess_rvalid))) {
                vlSelf->__PVT__mem_wb_rdata = vlSymsp->TOP__rtl_core_probe.__PVT__daccess_rdata;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__stall_e) 
                          & (~ (IData)(vlSelf->__PVT__mul_div_stall)))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__mul_div_stall)))) {
                    vlSelf->__PVT__ex_mem_ext = vlSelf->id_ex_ext;
                }
            }
        }
        if (vlSelf->flush_d) {
            vlSelf->__PVT__id_ex_npc_op = 0U;
            vlSelf->__PVT__id_ex_alua_sel = 0U;
            vlSelf->id_ex_alub_sel = 0U;
            vlSelf->id_ex_alu_op = 0U;
            vlSelf->__PVT__id_ex_is_mul = 0U;
            vlSelf->__PVT__id_ex_is_div = 0U;
            vlSelf->__PVT__id_ex_ram_wop = 0U;
            vlSelf->id_ex_ext = 0U;
        } else if ((1U & (~ (IData)(vlSelf->stall_d)))) {
            vlSelf->__PVT__id_ex_npc_op = vlSelf->__PVT__id_npc_op;
            vlSelf->__PVT__id_ex_alua_sel = vlSelf->__PVT__id_alua_sel;
            vlSelf->id_ex_alub_sel = vlSelf->__PVT__id_alub_sel;
            vlSelf->id_ex_alu_op = vlSelf->__PVT__id_alu_op;
            if (vlSelf->__PVT__if_id_valid) {
                vlSelf->__PVT__id_ex_is_mul = vlSelf->__PVT__id_is_mul;
                vlSelf->__PVT__id_ex_is_div = vlSelf->__PVT__id_is_div;
                vlSelf->__PVT__id_ex_ram_wop = (0xfU 
                                                & ((1U 
                                                    & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_B)))) 
                                                   | ((3U 
                                                       & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_H)))) 
                                                      | (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__RAM_W_W))))));
            } else {
                vlSelf->__PVT__id_ex_is_mul = 0U;
                vlSelf->__PVT__id_ex_is_div = 0U;
                vlSelf->__PVT__id_ex_ram_wop = 0U;
            }
            vlSelf->id_ex_ext = vlSelf->__PVT__id_ext;
        }
        if (vlSelf->__PVT__mul_div_release) {
            vlSelf->__PVT__last_mul_pc = vlSelf->id_ex_pc;
        }
    }
    vlSelf->__PVT__mul_div_stall_d = ((~ (IData)(vlSymsp->TOP__rtl_core_probe.__PVT__rst)) 
                                      & (IData)(vlSelf->__PVT__mul_div_stall));
    vlSelf->__PVT__mul_div_entering = ((~ (IData)(vlSymsp->TOP__rtl_core_probe.__PVT__rst)) 
                                       & (((~ (IData)(vlSelf->stall_f)) 
                                           & (~ (IData)(vlSelf->flush_d))) 
                                          & ((IData)(vlSelf->__PVT__id_is_div) 
                                             | (IData)(vlSelf->__PVT__id_is_mul))));
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
}

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__1(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__1\n"); );
    // Body
    vlSymsp->TOP__rtl_core_probe__dut__U_ALU.op = vlSelf->id_ex_alu_op;
}

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__3(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__3\n"); );
    // Init
    CData/*2:0*/ __PVT__id_sext_op;
    __PVT__id_sext_op = 0;
    CData/*1:0*/ __PVT__forward_a;
    __PVT__forward_a = 0;
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
    vlSelf->__PVT__mem_req_sent = vlSelf->__Vdly__mem_req_sent;
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
    vlSelf->__PVT__mem_wb_valid = ((1U & (~ (IData)(vlSymsp->TOP__rtl_core_probe.__PVT__rst))) 
                                   && ((1U & (~ (IData)(vlSelf->__PVT__mem_stall))) 
                                       && (IData)(vlSelf->__PVT__ex_mem_valid)));
    vlSelf->mem_wb_rf_we = ((1U & (~ (IData)(vlSymsp->TOP__rtl_core_probe.__PVT__rst))) 
                            && ((1U & (~ (IData)(vlSelf->__PVT__mem_stall))) 
                                && ((IData)(vlSelf->__PVT__ex_mem_valid) 
                                    & (IData)(vlSelf->__PVT__ex_mem_rf_we))));
    if (vlSymsp->TOP__rtl_core_probe.__PVT__rst) {
        vlSelf->ex_mem_pc = 0U;
        vlSelf->__PVT__ex_mem_ram_rop = 0U;
        vlSelf->__PVT__mem_wb_alu_c = 0U;
        vlSelf->mem_wb_rf_wsel = 0U;
        vlSelf->mem_wb_rd = 0U;
        vlSelf->id_ex_pc = 0U;
        vlSelf->__PVT__id_ex_ram_rop = 0U;
        vlSelf->__PVT__ex_mem_alu_c = 0U;
        vlSelf->__PVT__ex_mem_rf_wsel = 0U;
        vlSelf->__PVT__ex_mem_valid = 0U;
        vlSelf->__PVT__ex_mem_rf_we = 0U;
        vlSelf->__PVT__ex_mem_rd = 0U;
        vlSelf->__PVT__id_ex_rf_wsel = 0U;
        vlSelf->__PVT__id_ex_rf_we = 0U;
        vlSelf->__PVT__id_ex_valid = 0U;
        vlSelf->__PVT__id_ex_rd = 0U;
        vlSelf->if_id_pc = 0U;
        vlSelf->if_id_inst = 0U;
        vlSelf->__PVT__if_id_valid = 0U;
        vlSelf->__Vdly__fetch_pending = 0U;
        vlSelf->__Vdly__fetch_inst_r = 0U;
        vlSelf->__Vdly__fetch_pc_r = 0U;
        vlSelf->pc = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->__PVT__mem_stall)))) {
            if (((IData)(vlSelf->__PVT__stall_e) & 
                 (~ (IData)(vlSelf->__PVT__mul_div_stall)))) {
                vlSelf->__PVT__ex_mem_ram_rop = 0U;
                vlSelf->__PVT__ex_mem_valid = 0U;
                vlSelf->__PVT__ex_mem_rf_we = 0U;
            } else if ((1U & (~ (IData)(vlSelf->__PVT__mul_div_stall)))) {
                if (vlSelf->__PVT__id_ex_valid) {
                    vlSelf->__PVT__ex_mem_ram_rop = vlSelf->__PVT__id_ex_ram_rop;
                    vlSelf->__PVT__ex_mem_valid = 1U;
                    vlSelf->__PVT__ex_mem_rf_we = vlSelf->__PVT__id_ex_rf_we;
                } else {
                    vlSelf->__PVT__ex_mem_ram_rop = 0U;
                    vlSelf->__PVT__ex_mem_valid = 0U;
                    vlSelf->__PVT__ex_mem_rf_we = 0U;
                }
            }
            vlSelf->__PVT__mem_wb_alu_c = vlSelf->__PVT__ex_mem_alu_c;
            vlSelf->mem_wb_rf_wsel = vlSelf->__PVT__ex_mem_rf_wsel;
            vlSelf->mem_wb_rd = vlSelf->__PVT__ex_mem_rd;
            if ((1U & (~ ((IData)(vlSelf->__PVT__stall_e) 
                          & (~ (IData)(vlSelf->__PVT__mul_div_stall)))))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__mul_div_stall)))) {
                    vlSelf->ex_mem_pc = vlSelf->id_ex_pc;
                    vlSelf->__PVT__ex_mem_alu_c = vlSelf->ex_alu_c;
                    vlSelf->__PVT__ex_mem_rf_wsel = vlSelf->__PVT__id_ex_rf_wsel;
                    vlSelf->__PVT__ex_mem_rd = vlSelf->__PVT__id_ex_rd;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->flush_d)))) {
            if ((1U & (~ (IData)(vlSelf->stall_d)))) {
                vlSelf->id_ex_pc = vlSelf->if_id_pc;
                vlSelf->__PVT__id_ex_rd = (0x1fU & 
                                           (vlSelf->if_id_inst 
                                            >> 7U));
            }
        }
        if (vlSelf->flush_d) {
            vlSelf->__PVT__id_ex_ram_rop = 0U;
            vlSelf->__PVT__id_ex_rf_wsel = 0U;
            vlSelf->__PVT__id_ex_rf_we = 0U;
            vlSelf->__PVT__id_ex_valid = 0U;
        } else if ((1U & (~ (IData)(vlSelf->stall_d)))) {
            vlSelf->__PVT__id_ex_ram_rop = ((IData)(vlSelf->__PVT__if_id_valid)
                                             ? ((2U 
                                                 & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_B)))) 
                                                | ((3U 
                                                    & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_BU)))) 
                                                   | ((4U 
                                                       & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_H)))) 
                                                      | ((5U 
                                                          & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_HU)))) 
                                                         | (1U 
                                                            & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_W))))))))
                                             : 0U);
            vlSelf->__PVT__id_ex_rf_wsel = (3U & ((1U 
                                                   & (- (IData)((IData)(vlSelf->__PVT__U_CU__DOT__WB_OP_RAM)))) 
                                                  | ((2U 
                                                      & (- (IData)(
                                                                   ((0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->if_id_inst)) 
                                                                    | (IData)(vlSelf->__PVT__U_CU__DOT__NPC_OP_JALR))))) 
                                                     | (- (IData)(
                                                                  (0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->if_id_inst)))))));
            vlSelf->__PVT__id_ex_rf_we = ((IData)(vlSelf->__PVT__if_id_valid) 
                                          & ((((IData)(vlSelf->__PVT__U_CU__DOT__ADDI) 
                                               | ((IData)(vlSelf->U_CU__DOT____VdfgTmp_h947ed5b8__0) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->if_id_inst 
                                                      >> 0x19U)))) 
                                              | ((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_SUB) 
                                                 | ((IData)(vlSelf->__PVT__U_CU__DOT__ORI) 
                                                    | ((IData)(vlSelf->__PVT__U_CU__DOT__XORI) 
                                                       | ((IData)(vlSelf->__PVT__U_CU__DOT__XOR) 
                                                          | ((IData)(vlSelf->__PVT__U_CU__DOT__ANDI) 
                                                             | ((IData)(vlSelf->__PVT__U_CU__DOT__AND) 
                                                                | ((IData)(vlSelf->__PVT__U_CU__DOT__OR) 
                                                                   | ((IData)(vlSelf->__PVT__U_CU__DOT__SLTI) 
                                                                      | ((IData)(vlSelf->__PVT__U_CU__DOT__SLTIU) 
                                                                         | ((IData)(vlSelf->__PVT__U_CU__DOT__SLT) 
                                                                            | ((IData)(vlSelf->__PVT__U_CU__DOT__SLTU) 
                                                                               | ((IData)(vlSelf->__PVT__U_CU__DOT__SLLI) 
                                                                                | ((IData)(vlSelf->__PVT__U_CU__DOT__SRLI) 
                                                                                | ((IData)(vlSelf->__PVT__U_CU__DOT__SRAI) 
                                                                                | ((IData)(vlSelf->__PVT__U_CU__DOT__SLL) 
                                                                                | ((IData)(vlSelf->__PVT__U_CU__DOT__SRL) 
                                                                                | (IData)(vlSelf->__PVT__U_CU__DOT__SRA)))))))))))))))))) 
                                             | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_W) 
                                                | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_B) 
                                                   | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_BU) 
                                                      | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_H) 
                                                         | ((IData)(vlSelf->__PVT__U_CU__DOT__RAM_EXT_HU) 
                                                            | ((0x37U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->if_id_inst)) 
                                                               | ((0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->if_id_inst)) 
                                                                  | ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->if_id_inst)) 
                                                                     | ((IData)(vlSelf->__PVT__U_CU__DOT__NPC_OP_JALR) 
                                                                        | ((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MUL) 
                                                                           | ((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MULH) 
                                                                              | ((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MULHU) 
                                                                                | (IData)(vlSelf->__PVT__id_is_div)))))))))))))));
            vlSelf->__PVT__id_ex_valid = vlSelf->__PVT__if_id_valid;
        }
        if (vlSelf->flush_f) {
            vlSelf->if_id_pc = 0U;
            vlSelf->if_id_inst = 0U;
            vlSelf->__PVT__if_id_valid = 0U;
            vlSelf->__Vdly__fetch_pending = 0U;
            vlSelf->pc = vlSelf->__PVT__pc_next;
        } else {
            if ((1U & (~ (IData)(vlSelf->stall_f)))) {
                if (vlSelf->__PVT__fetch_pending) {
                    vlSelf->if_id_pc = vlSelf->__PVT__fetch_pc_r;
                    vlSelf->if_id_inst = vlSelf->__PVT__fetch_inst_r;
                    vlSelf->__PVT__if_id_valid = 1U;
                    vlSelf->__Vdly__fetch_pending = 0U;
                } else {
                    vlSelf->if_id_pc = vlSelf->pc;
                    vlSelf->if_id_inst = 0U;
                    vlSelf->__PVT__if_id_valid = 0U;
                    if (((IData)(vlSelf->ifetch_valid) 
                         & (~ (IData)(vlSelf->__PVT__discard_fetch)))) {
                        vlSelf->__Vdly__fetch_inst_r 
                            = vlSymsp->TOP__rtl_core_probe.__PVT__ifetch_inst;
                        vlSelf->__Vdly__fetch_pc_r 
                            = vlSelf->pc;
                        vlSelf->__Vdly__fetch_pending = 1U;
                    }
                }
            }
            if ((((~ (IData)(vlSelf->stall_f)) & (IData)(vlSelf->ifetch_valid)) 
                 & (~ (IData)(vlSelf->__PVT__discard_fetch)))) {
                vlSelf->pc = vlSelf->__PVT__pc_plus_4;
            }
        }
    }
    vlSelf->__VdfgTmp_hf1e24608__0 = ((2U == (IData)(vlSelf->mem_wb_rf_wsel))
                                       ? ((IData)(4U) 
                                          + vlSelf->mem_wb_pc)
                                       : ((3U == (IData)(vlSelf->mem_wb_rf_wsel))
                                           ? vlSelf->mem_wb_ext
                                           : 0U));
    vlSelf->U_FWD__DOT____VdfgTmp_h18378549__0 = ((IData)(vlSelf->mem_wb_rf_we) 
                                                  & (0U 
                                                     != (IData)(vlSelf->mem_wb_rd)));
    vlSelf->__PVT__wb_forward_data = ((0U == (IData)(vlSelf->mem_wb_rf_wsel))
                                       ? vlSelf->__PVT__mem_wb_alu_c
                                       : ((1U == (IData)(vlSelf->mem_wb_rf_wsel))
                                           ? vlSelf->__PVT__wb_ram_ext
                                           : vlSelf->__VdfgTmp_hf1e24608__0));
    vlSelf->__PVT__duplicate_mul = ((vlSelf->id_ex_pc 
                                     == vlSelf->__PVT__last_mul_pc) 
                                    & (0U != vlSelf->__PVT__last_mul_pc));
    vlSelf->__PVT__mem_da_wen = 0U;
    vlSelf->__PVT__mem_da_wdata = vlSelf->__PVT__ex_mem_rd2;
    if ((1U == (IData)(vlSelf->__PVT__ex_mem_ram_wop))) {
        if ((2U & vlSelf->__PVT__ex_mem_alu_c)) {
            if ((1U & vlSelf->__PVT__ex_mem_alu_c)) {
                vlSelf->__PVT__mem_da_wen = 8U;
                vlSelf->__PVT__mem_da_wdata = (vlSelf->__PVT__ex_mem_rd2 
                                               << 0x18U);
            } else {
                vlSelf->__PVT__mem_da_wen = 4U;
                vlSelf->__PVT__mem_da_wdata = (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->__PVT__ex_mem_rd2 
                                                               >> 7U)))) 
                                                << 0x18U) 
                                               | (0xff0000U 
                                                  & (vlSelf->__PVT__ex_mem_rd2 
                                                     << 0x10U)));
            }
        } else if ((1U & vlSelf->__PVT__ex_mem_alu_c)) {
            vlSelf->__PVT__mem_da_wen = 2U;
            vlSelf->__PVT__mem_da_wdata = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__ex_mem_rd2 
                                                           >> 7U)))) 
                                            << 0x10U) 
                                           | (0xff00U 
                                              & (vlSelf->__PVT__ex_mem_rd2 
                                                 << 8U)));
        } else {
            vlSelf->__PVT__mem_da_wen = 1U;
            vlSelf->__PVT__mem_da_wdata = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__ex_mem_rd2 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->__PVT__ex_mem_rd2));
        }
    } else if ((3U == (IData)(vlSelf->__PVT__ex_mem_ram_wop))) {
        if ((2U & vlSelf->__PVT__ex_mem_alu_c)) {
            if ((2U & vlSelf->__PVT__ex_mem_alu_c)) {
                vlSelf->__PVT__mem_da_wen = 0xcU;
                vlSelf->__PVT__mem_da_wdata = (vlSelf->__PVT__ex_mem_rd2 
                                               << 0x10U);
            }
        } else {
            vlSelf->__PVT__mem_da_wen = 3U;
            vlSelf->__PVT__mem_da_wdata = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__ex_mem_rd2 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->__PVT__ex_mem_rd2));
        }
    } else if ((0xfU == (IData)(vlSelf->__PVT__ex_mem_ram_wop))) {
        if ((0U == (3U & vlSelf->__PVT__ex_mem_alu_c))) {
            vlSelf->__PVT__mem_da_wen = vlSelf->__PVT__ex_mem_ram_wop;
        }
    }
    vlSelf->__PVT__ex_mem_fwd_data = ((0U == (IData)(vlSelf->__PVT__ex_mem_rf_wsel))
                                       ? vlSelf->__PVT__ex_mem_alu_c
                                       : ((3U == (IData)(vlSelf->__PVT__ex_mem_rf_wsel))
                                           ? vlSelf->__PVT__ex_mem_ext
                                           : vlSelf->__PVT__ex_mem_alu_c));
    vlSelf->__PVT__mem_is_store = ((IData)(vlSelf->__PVT__ex_mem_valid) 
                                   & (0U != (IData)(vlSelf->__PVT__ex_mem_ram_wop)));
    vlSelf->__PVT__mem_is_load = ((IData)(vlSelf->__PVT__ex_mem_valid) 
                                  & (0U != (IData)(vlSelf->__PVT__ex_mem_ram_rop)));
    vlSelf->U_FWD__DOT____VdfgTmp_h11f87e05__0 = ((IData)(vlSelf->__PVT__ex_mem_rf_we) 
                                                  & (0U 
                                                     != (IData)(vlSelf->__PVT__ex_mem_rd)));
    vlSelf->__PVT__mem_access = ((IData)(vlSelf->__PVT__mem_is_load) 
                                 | (IData)(vlSelf->__PVT__mem_is_store));
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
    vlSelf->__PVT__ex_is_jalr = ((IData)(vlSelf->__PVT__id_ex_valid) 
                                 & (1U == (IData)(vlSelf->__PVT__id_ex_npc_op)));
    vlSelf->__PVT__mul_div_stall = ((IData)(vlSelf->__PVT__id_ex_valid) 
                                    & (((IData)(vlSelf->__PVT__id_ex_is_div) 
                                        | (IData)(vlSelf->__PVT__id_ex_is_mul)) 
                                       & ((~ (IData)(vlSelf->__PVT__duplicate_mul)) 
                                          & ((IData)(vlSymsp->TOP__rtl_core_probe__dut__U_ALU.__PVT__busy) 
                                             | (IData)(vlSelf->__PVT__mul_div_entering)))));
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
    vlSelf->__VdfgTmp_hac861cd7__0 = ((IData)(vlSelf->__PVT__id_ex_rf_we) 
                                      & (0U != (IData)(vlSelf->__PVT__id_ex_rd)));
    vlSelf->__PVT__mul_div_release = ((~ (IData)(vlSelf->__PVT__mul_div_stall)) 
                                      & (IData)(vlSelf->__PVT__mul_div_stall_d));
    vlSelf->__PVT__fetch_inst_r = vlSelf->__Vdly__fetch_inst_r;
    vlSelf->__PVT__fetch_pc_r = vlSelf->__Vdly__fetch_pc_r;
    vlSelf->__PVT__fetch_pending = vlSelf->__Vdly__fetch_pending;
    vlSelf->__VdfgTmp_hccde1b87__0 = ((IData)(vlSelf->__VdfgTmp_hac861cd7__0) 
                                      & ((IData)(vlSelf->__PVT__id_ex_rd) 
                                         == (0x1fU 
                                             & (vlSelf->if_id_inst 
                                                >> 0x14U))));
    vlSelf->__VdfgTmp_hcc710bce__0 = ((IData)(vlSelf->U_FWD__DOT____VdfgTmp_h11f87e05__0) 
                                      & ((IData)(vlSelf->__PVT__ex_mem_rd) 
                                         == (0x1fU 
                                             & (vlSelf->if_id_inst 
                                                >> 0x14U))));
    vlSelf->__PVT__id_alua_sel = ((0x17U == (0x7fU 
                                             & vlSelf->if_id_inst)) 
                                  | (0x37U == (0x7fU 
                                               & vlSelf->if_id_inst)));
    vlSelf->__PVT__U_CU__DOT__SLT = (IData)((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->if_id_inst)));
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
    U_CU__DOT____VdfgTmp_h698e6d20__0 = (IData)((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    U_CU__DOT____VdfgTmp_h44aceafa__0 = (IData)((0x5013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->if_id_inst)));
    vlSelf->__PVT__discard_fetch = vlSelf->__Vdly__discard_fetch;
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
    vlSelf->ifetch_addr = vlSelf->pc;
    vlSelf->__PVT__pc_plus_4 = ((IData)(4U) + vlSelf->pc);
    vlSelf->__PVT__id_is_mul = ((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MUL) 
                                | ((IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MULH) 
                                   | (IData)(vlSelf->__PVT__U_CU__DOT__ALU_OP_MULHU)));
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
    vlSelf->__PVT__id_br_target = (vlSelf->__PVT__id_ext 
                                   + vlSelf->if_id_pc);
}

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__4(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__4\n"); );
    // Body
    vlSelf->ex_alu_c = vlSymsp->TOP__rtl_core_probe__dut__U_ALU.__PVT__c;
    vlSelf->ex_br_taken = ((IData)(vlSelf->__PVT__id_ex_valid) 
                           & ((2U == (IData)(vlSelf->__PVT__id_ex_npc_op)) 
                              & (IData)(vlSymsp->TOP__rtl_core_probe__dut__U_ALU.__PVT__br)));
    vlSelf->flush_d = ((IData)(vlSelf->ex_br_taken) 
                       | ((IData)(vlSelf->__PVT__ex_is_jalr) 
                          | ((IData)(vlSelf->__PVT__load_use_stall) 
                             | ((IData)(vlSelf->__PVT__mul_div_release) 
                                & ((IData)(vlSelf->__PVT__if_id_valid) 
                                   & (vlSelf->id_ex_pc 
                                      == vlSelf->if_id_pc))))));
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
}

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___nba_comb__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___nba_comb__TOP__rtl_core_probe__dut__0\n"); );
    // Body
    vlSelf->__PVT__mem_done = (((IData)(vlSelf->__PVT__mem_is_load) 
                                & (IData)(vlSymsp->TOP__rtl_core_probe.__PVT__daccess_rvalid)) 
                               | ((IData)(vlSelf->__PVT__mem_is_store) 
                                  & (IData)(vlSymsp->TOP__rtl_core_probe.__PVT__daccess_wresp)));
    vlSelf->__PVT__mem_stall = ((~ (IData)(vlSelf->__PVT__mem_done)) 
                                & (IData)(vlSelf->__PVT__mem_access));
    vlSelf->stall_d = ((IData)(vlSelf->__PVT__mem_stall) 
                       | (IData)(vlSelf->__PVT__mul_div_stall));
    vlSelf->flush_f = ((~ (IData)(vlSelf->__PVT__mem_stall)) 
                       & ((IData)(vlSelf->__PVT__id_is_jal) 
                          | ((IData)(vlSelf->ex_br_taken) 
                             | ((IData)(vlSelf->__PVT__ex_is_jalr) 
                                | (IData)(vlSelf->__PVT__mul_div_release)))));
    vlSelf->__PVT__stall_e = ((IData)(vlSelf->stall_d) 
                              | (IData)(vlSelf->__PVT__duplicate_mul));
    vlSelf->stall_f = ((IData)(vlSelf->__PVT__mem_stall) 
                       | ((~ (IData)(vlSelf->flush_f)) 
                          & (((~ (IData)(vlSelf->flush_f)) 
                              & (IData)(vlSelf->__PVT__load_use_stall)) 
                             | (IData)(vlSelf->__PVT__mul_div_stall))));
}
