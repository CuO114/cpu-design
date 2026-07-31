// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe__Syms.h"
#include "Vrtl_core_probe_rtl_core_probe.h"

extern const VlWide<12>/*383:0*/ Vrtl_core_probe__ConstPool__CONST_h04410833_0;

VL_INLINE_OPT VlCoroutine Vrtl_core_probe_rtl_core_probe___eval_initial__TOP__rtl_core_probe__Vtiming__0(Vrtl_core_probe_rtl_core_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_core_probe_rtl_core_probe___eval_initial__TOP__rtl_core_probe__Vtiming__0\n"); );
    // Body
    VL_READMEM_N(false, 32, 38400, 0, VL_CVT_PACK_STR_NW(12, Vrtl_core_probe__ConstPool__CONST_h04410833_0)
                 ,  &(vlSelf->__PVT__mem), 0, ~0ULL);
    vlSelf->__PVT__mem[0x3450U] = 0xaU;
    VL_WRITEF("SEED4_INIT=%08x\nINIT[0]=%08x\nINIT[1]=%08x\nINIT[2]=%08x\nINIT[3]=%08x\nINIT[4]=%08x\nINIT[5]=%08x\nINIT[6]=%08x\nINIT[7]=%08x\nINIT[8]=%08x\nINIT[9]=%08x\nINIT[10]=%08x\nINIT[11]=%08x\nINIT[12]=%08x\nINIT[13]=%08x\nINIT[14]=%08x\nINIT[15]=%08x\nINIT[16]=%08x\nINIT[17]=%08x\nINIT[18]=%08x\nINIT[19]=%08x\nINIT[20]=%08x\nINIT[21]=%08x\nINIT[22]=%08x\nINIT[23]=%08x\nINIT[24]=%08x\nINIT[25]=%08x\nINIT[26]=%08x\nINIT[27]=%08x\nINIT[28]=%08x\nINIT[29]=%08x\nINIT[30]=%08x\nINIT[31]=%08x\nINIT[32]=%08x\nINIT[33]=%08x\nINIT[34]=%08x\n",
              32,vlSelf->__PVT__mem[0x3450U],32,vlSelf->__PVT__mem
              [0U],32,vlSelf->__PVT__mem[1U],32,vlSelf->__PVT__mem
              [2U],32,vlSelf->__PVT__mem[3U],32,vlSelf->__PVT__mem
              [4U],32,vlSelf->__PVT__mem[5U],32,vlSelf->__PVT__mem
              [6U],32,vlSelf->__PVT__mem[7U],32,vlSelf->__PVT__mem
              [8U],32,vlSelf->__PVT__mem[9U],32,vlSelf->__PVT__mem
              [0xaU],32,vlSelf->__PVT__mem[0xbU],32,
              vlSelf->__PVT__mem[0xcU],32,vlSelf->__PVT__mem
              [0xdU],32,vlSelf->__PVT__mem[0xeU],32,
              vlSelf->__PVT__mem[0xfU],32,vlSelf->__PVT__mem
              [0x10U],32,vlSelf->__PVT__mem[0x11U],
              32,vlSelf->__PVT__mem[0x12U],32,vlSelf->__PVT__mem
              [0x13U],32,vlSelf->__PVT__mem[0x14U],
              32,vlSelf->__PVT__mem[0x15U],32,vlSelf->__PVT__mem
              [0x16U],32,vlSelf->__PVT__mem[0x17U],
              32,vlSelf->__PVT__mem[0x18U],32,vlSelf->__PVT__mem
              [0x19U],32,vlSelf->__PVT__mem[0x1aU],
              32,vlSelf->__PVT__mem[0x1bU],32,vlSelf->__PVT__mem
              [0x1cU],32,vlSelf->__PVT__mem[0x1dU],
              32,vlSelf->__PVT__mem[0x1eU],32,vlSelf->__PVT__mem
              [0x1fU],32,vlSelf->__PVT__mem[0x20U],
              32,vlSelf->__PVT__mem[0x21U],32,vlSelf->__PVT__mem
              [0x22U]);
    VL_WRITEF("INIT[35]=%08x\nINIT[36]=%08x\nINIT[37]=%08x\nINIT[38]=%08x\nINIT[39]=%08x\n",
              32,vlSelf->__PVT__mem[0x23U],32,vlSelf->__PVT__mem
              [0x24U],32,vlSelf->__PVT__mem[0x25U],
              32,vlSelf->__PVT__mem[0x26U],32,vlSelf->__PVT__mem
              [0x27U]);
    co_await vlSymsp->TOP.__VdlySched.delay(0x186a0ULL, 
                                            nullptr, 
                                            "rtl_core_probe.sv", 
                                            44);
    vlSelf->__PVT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vrtl_core_probe_rtl_core_probe___eval_initial__TOP__rtl_core_probe__Vtiming__1(Vrtl_core_probe_rtl_core_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_core_probe_rtl_core_probe___eval_initial__TOP__rtl_core_probe__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x1388ULL, 
                                                nullptr, 
                                                "rtl_core_probe.sv", 
                                                7);
        vlSelf->__PVT__clk = (1U & (~ (IData)(vlSelf->__PVT__clk)));
    }
}

VL_INLINE_OPT void Vrtl_core_probe_rtl_core_probe___nba_sequent__TOP__rtl_core_probe__0(Vrtl_core_probe_rtl_core_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_core_probe_rtl_core_probe___nba_sequent__TOP__rtl_core_probe__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__ifetch_valid;
    __Vdly__ifetch_valid = 0;
    QData/*63:0*/ __Vdly__timer;
    __Vdly__timer = 0;
    IData/*31:0*/ __Vdly__cycle;
    __Vdly__cycle = 0;
    SData/*15:0*/ __Vdlyvdim0__mem__v0;
    __Vdlyvdim0__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__mem__v0;
    __Vdlyvlsb__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v0;
    __Vdlyvval__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    __Vdlyvset__mem__v0 = 0;
    SData/*15:0*/ __Vdlyvdim0__mem__v1;
    __Vdlyvdim0__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__mem__v1;
    __Vdlyvlsb__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    __Vdlyvval__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v1;
    __Vdlyvset__mem__v1 = 0;
    SData/*15:0*/ __Vdlyvdim0__mem__v2;
    __Vdlyvdim0__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__mem__v2;
    __Vdlyvlsb__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    __Vdlyvval__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v2;
    __Vdlyvset__mem__v2 = 0;
    SData/*15:0*/ __Vdlyvdim0__mem__v3;
    __Vdlyvdim0__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__mem__v3;
    __Vdlyvlsb__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    __Vdlyvval__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v3;
    __Vdlyvset__mem__v3 = 0;
    // Body
    __Vdly__cycle = vlSelf->__PVT__cycle;
    __Vdly__timer = vlSelf->__PVT__timer;
    vlSelf->__Vdly__ifetch_inst = vlSelf->__PVT__ifetch_inst;
    __Vdly__ifetch_valid = vlSelf->__PVT__ifetch_valid;
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    if (vlSelf->__PVT__rst) {
        __Vdly__ifetch_valid = 0U;
        vlSelf->__Vdly__ifetch_inst = 0U;
        vlSelf->__PVT__daccess_rvalid = 0U;
        vlSelf->__PVT__daccess_rdata = 0U;
        vlSelf->__PVT__daccess_wresp = 0U;
        __Vdly__timer = 0ULL;
        __Vdly__cycle = 0U;
    } else {
        __Vdly__cycle = ((IData)(1U) + vlSelf->__PVT__cycle);
        __Vdly__timer = (1ULL + vlSelf->__PVT__timer);
        vlSelf->__PVT__daccess_rvalid = (0U != (((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                                                 & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_load))
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_ram_rop))
                                                  ? 0U
                                                  : 0xfU)
                                                 : 0U));
        vlSelf->__PVT__daccess_wresp = (0U != (((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                                                & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_store))
                                                ? (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wen)
                                                : 0U));
        vlSelf->__Vdly__ifetch_inst = ((IData)(vlSymsp->TOP__rtl_core_probe__dut.ifetch_req)
                                        ? ((0x95ffU 
                                            >= (0xffffU 
                                                & (vlSymsp->TOP__rtl_core_probe__dut.ifetch_addr 
                                                   >> 2U)))
                                            ? vlSelf->__PVT__mem
                                           [(0xffffU 
                                             & (vlSymsp->TOP__rtl_core_probe__dut.ifetch_addr 
                                                >> 2U))]
                                            : 0U) : 0U);
        vlSelf->__PVT__daccess_rdata = 0U;
        if ((0U != (((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                     & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_load))
                     ? ((0U == (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_ram_rop))
                         ? 0U : 0xfU) : 0U))) {
            vlSelf->__PVT__daccess_rdata = ((0xffff4000U 
                                             == vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c)
                                             ? (IData)(vlSelf->__PVT__timer)
                                             : ((0xffff4008U 
                                                 == vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c)
                                                 ? (IData)(
                                                           (vlSelf->__PVT__timer 
                                                            >> 0x20U))
                                                 : 
                                                ((0xffff3008U 
                                                  == vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c)
                                                  ? 0U
                                                  : 
                                                 ((0xffffU 
                                                   == 
                                                   (vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  ((0x95ffU 
                                                    >= 
                                                    (0xffffU 
                                                     & (vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->__PVT__mem
                                                   [
                                                   (0xffffU 
                                                    & (vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c 
                                                       >> 2U))]
                                                    : 0U)))));
        }
        if ((0U != (((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                     & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_store))
                     ? (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wen)
                     : 0U))) {
            if (VL_UNLIKELY((0xffffU == (vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c 
                                         >> 0x10U)))) {
                if (VL_UNLIKELY((0xffff3004U == vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c))) {
                    VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wdata));
                }
                VL_WRITEF("STORE cycle=%0d addr=%08x wen=%x data=%08x\n",
                          32,vlSelf->__PVT__cycle,32,
                          vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c,
                          4,(((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                              & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_store))
                              ? (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wen)
                              : 0U),32,vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wdata);
            } else {
                vlSelf->__PVT__idx = (0xffffU & (vlSymsp->TOP__rtl_core_probe__dut.__PVT__ex_mem_alu_c 
                                                 >> 2U));
                if ((((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                      & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_store))
                      ? (1U & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wen))
                      : 0U)) {
                    vlSelf->__Vlvbound_h77e98a54__0 
                        = (0xffU & vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wdata);
                    if ((0x95ffU >= (0xffffU & vlSelf->__PVT__idx))) {
                        __Vdlyvval__mem__v0 = vlSelf->__Vlvbound_h77e98a54__0;
                        __Vdlyvset__mem__v0 = 1U;
                        __Vdlyvlsb__mem__v0 = 0U;
                        __Vdlyvdim0__mem__v0 = (0xffffU 
                                                & vlSelf->__PVT__idx);
                    }
                }
                if ((((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                      & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_store))
                      ? (2U & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wen))
                      : 0U)) {
                    vlSelf->__Vlvbound_h767fac4c__0 
                        = (0xffU & (vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wdata 
                                    >> 8U));
                    if ((0x95ffU >= (0xffffU & vlSelf->__PVT__idx))) {
                        __Vdlyvval__mem__v1 = vlSelf->__Vlvbound_h767fac4c__0;
                        __Vdlyvset__mem__v1 = 1U;
                        __Vdlyvlsb__mem__v1 = 8U;
                        __Vdlyvdim0__mem__v1 = (0xffffU 
                                                & vlSelf->__PVT__idx);
                    }
                }
                if ((((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                      & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_store))
                      ? (4U & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wen))
                      : 0U)) {
                    vlSelf->__Vlvbound_h767fe5f1__0 
                        = (0xffU & (vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wdata 
                                    >> 0x10U));
                    if ((0x95ffU >= (0xffffU & vlSelf->__PVT__idx))) {
                        __Vdlyvval__mem__v2 = vlSelf->__Vlvbound_h767fe5f1__0;
                        __Vdlyvset__mem__v2 = 1U;
                        __Vdlyvlsb__mem__v2 = 0x10U;
                        __Vdlyvdim0__mem__v2 = (0xffffU 
                                                & vlSelf->__PVT__idx);
                    }
                }
                if ((((~ (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_req_sent)) 
                      & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_is_store))
                      ? (8U & (IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wen))
                      : 0U)) {
                    vlSelf->__Vlvbound_h7800dfdd__0 
                        = (vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_da_wdata 
                           >> 0x18U);
                    if ((0x95ffU >= (0xffffU & vlSelf->__PVT__idx))) {
                        __Vdlyvval__mem__v3 = vlSelf->__Vlvbound_h7800dfdd__0;
                        __Vdlyvset__mem__v3 = 1U;
                        __Vdlyvlsb__mem__v3 = 0x18U;
                        __Vdlyvdim0__mem__v3 = (0xffffU 
                                                & vlSelf->__PVT__idx);
                    }
                }
            }
        }
        if (VL_UNLIKELY((((0x70f8U == vlSymsp->TOP__rtl_core_probe__dut.pc) 
                          | (0x7100U == vlSymsp->TOP__rtl_core_probe__dut.pc)) 
                         | (0x18U == vlSymsp->TOP__rtl_core_probe__dut.pc)))) {
            VL_WRITEF("PC cycle=%0d pc=%08x ifv=%b inst=%08x memstall=%b\n",
                      32,vlSelf->__PVT__cycle,32,vlSymsp->TOP__rtl_core_probe__dut.pc,
                      1,(IData)(vlSelf->__PVT__ifetch_valid),
                      32,vlSelf->__PVT__ifetch_inst,
                      1,(IData)(vlSymsp->TOP__rtl_core_probe__dut.__PVT__mem_stall));
        }
        if (VL_UNLIKELY(((0x989680U == vlSelf->__PVT__cycle) 
                         | (0x2faf080U == vlSelf->__PVT__cycle)))) {
            VL_WRITEF("PROBE cycle=%0d pc=%08x if_id=%08x ex_mem=%08x x16=%08x x17=%08x x18=%08x x20=%08x x21=%08x x22=%08x\n",
                      32,vlSelf->__PVT__cycle,32,vlSymsp->TOP__rtl_core_probe__dut.pc,
                      32,vlSymsp->TOP__rtl_core_probe__dut.if_id_inst,
                      32,vlSymsp->TOP__rtl_core_probe__dut.ex_mem_pc,
                      32,vlSymsp->TOP__rtl_core_probe__dut.__PVT__U_RF__DOT__regs
                      [0xfU],32,vlSymsp->TOP__rtl_core_probe__dut.__PVT__U_RF__DOT__regs
                      [0x10U],32,vlSymsp->TOP__rtl_core_probe__dut.__PVT__U_RF__DOT__regs
                      [0x11U],32,vlSymsp->TOP__rtl_core_probe__dut.__PVT__U_RF__DOT__regs
                      [0x13U],32,vlSymsp->TOP__rtl_core_probe__dut.__PVT__U_RF__DOT__regs
                      [0x14U],32,vlSymsp->TOP__rtl_core_probe__dut.__PVT__U_RF__DOT__regs
                      [0x15U]);
        }
        if (VL_UNLIKELY((0x2faf080U == vlSelf->__PVT__cycle))) {
            VL_WRITEF("TIMEOUT pc=%08x if_id=%08x ex_mem=%08x\n",
                      32,vlSymsp->TOP__rtl_core_probe__dut.pc,
                      32,vlSymsp->TOP__rtl_core_probe__dut.if_id_inst,
                      32,vlSymsp->TOP__rtl_core_probe__dut.ex_mem_pc);
            VL_FINISH_MT("rtl_core_probe.sv", 104, "");
        }
        __Vdly__ifetch_valid = vlSymsp->TOP__rtl_core_probe__dut.ifetch_req;
    }
    vlSelf->__PVT__timer = __Vdly__timer;
    vlSelf->__PVT__cycle = __Vdly__cycle;
    vlSelf->__PVT__ifetch_valid = __Vdly__ifetch_valid;
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = 
            (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v0))) 
              & vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0]) 
             | (0xffffffffULL & ((IData)(__Vdlyvval__mem__v0) 
                                 << (IData)(__Vdlyvlsb__mem__v0))));
    }
    if (__Vdlyvset__mem__v1) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v1] = 
            (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v1))) 
              & vlSelf->__PVT__mem[__Vdlyvdim0__mem__v1]) 
             | (0xffffffffULL & ((IData)(__Vdlyvval__mem__v1) 
                                 << (IData)(__Vdlyvlsb__mem__v1))));
    }
    if (__Vdlyvset__mem__v2) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v2] = 
            (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v2))) 
              & vlSelf->__PVT__mem[__Vdlyvdim0__mem__v2]) 
             | (0xffffffffULL & ((IData)(__Vdlyvval__mem__v2) 
                                 << (IData)(__Vdlyvlsb__mem__v2))));
    }
    if (__Vdlyvset__mem__v3) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v3] = 
            (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v3))) 
              & vlSelf->__PVT__mem[__Vdlyvdim0__mem__v3]) 
             | (0xffffffffULL & ((IData)(__Vdlyvval__mem__v3) 
                                 << (IData)(__Vdlyvlsb__mem__v3))));
    }
}

VL_INLINE_OPT void Vrtl_core_probe_rtl_core_probe___nba_sequent__TOP__rtl_core_probe__1(Vrtl_core_probe_rtl_core_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_core_probe_rtl_core_probe___nba_sequent__TOP__rtl_core_probe__1\n"); );
    // Body
    vlSelf->__PVT__ifetch_inst = vlSelf->__Vdly__ifetch_inst;
    vlSymsp->TOP__rtl_core_probe__dut.ifetch_valid 
        = vlSelf->__PVT__ifetch_valid;
}
