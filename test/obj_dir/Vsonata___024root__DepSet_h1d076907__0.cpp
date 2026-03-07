// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata___024root.h"

void Vsonata___024root___eval_triggers__ico(Vsonata___024root* vlSelf);
void Vsonata___024root___eval_ico(Vsonata___024root* vlSelf);

bool Vsonata___024root___eval_phase__ico(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsonata___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vsonata___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsonata___024root___eval_triggers__act(Vsonata___024root* vlSelf);
void Vsonata___024root___eval_act(Vsonata___024root* vlSelf);

bool Vsonata___024root___eval_phase__act(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<21> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsonata___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsonata___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vsonata___024root___eval_nba(Vsonata___024root* vlSelf);

bool Vsonata___024root___eval_phase__nba(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsonata___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__ico(Vsonata___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__nba(Vsonata___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__act(Vsonata___024root* vlSelf);
#endif  // VL_DEBUG

void Vsonata___024root___eval(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vsonata___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/jonathan/sonata-linux/linux-on-litex-vexriscv/build/sonata/gateware/sonata.v", 21, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsonata___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsonata___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/jonathan/sonata-linux/linux-on-litex-vexriscv/build/sonata/gateware/sonata.v", 21, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsonata___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/jonathan/sonata-linux/linux-on-litex-vexriscv/build/sonata/gateware/sonata.v", 21, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsonata___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsonata___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsonata___024root___eval_debug_assertions(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk25 & 0xfeU))) {
        Verilated::overWidthError("clk25");}
    if (VL_UNLIKELY((vlSelf->hyperram0_rwds & 0xfeU))) {
        Verilated::overWidthError("hyperram0_rwds");}
    if (VL_UNLIKELY((vlSelf->jtag_tck & 0xfeU))) {
        Verilated::overWidthError("jtag_tck");}
    if (VL_UNLIKELY((vlSelf->jtag_tdi & 0xfeU))) {
        Verilated::overWidthError("jtag_tdi");}
    if (VL_UNLIKELY((vlSelf->jtag_tms & 0xfeU))) {
        Verilated::overWidthError("jtag_tms");}
    if (VL_UNLIKELY((vlSelf->sdcard_cd & 0xfeU))) {
        Verilated::overWidthError("sdcard_cd");}
    if (VL_UNLIKELY((vlSelf->sdcard_cmd & 0xfeU))) {
        Verilated::overWidthError("sdcard_cmd");}
    if (VL_UNLIKELY((vlSelf->sdcard_data & 0xf0U))) {
        Verilated::overWidthError("sdcard_data");}
    if (VL_UNLIKELY((vlSelf->serial_rx & 0xfeU))) {
        Verilated::overWidthError("serial_rx");}
    if (VL_UNLIKELY((vlSelf->spi_eth_miso & 0xfeU))) {
        Verilated::overWidthError("spi_eth_miso");}
    if (VL_UNLIKELY((vlSelf->spiflash4x_dq & 0xf0U))) {
        Verilated::overWidthError("spiflash4x_dq");}
    if (VL_UNLIKELY((vlSelf->user_sw0 & 0xfeU))) {
        Verilated::overWidthError("user_sw0");}
    if (VL_UNLIKELY((vlSelf->user_sw1 & 0xfeU))) {
        Verilated::overWidthError("user_sw1");}
    if (VL_UNLIKELY((vlSelf->user_sw2 & 0xfeU))) {
        Verilated::overWidthError("user_sw2");}
}
#endif  // VL_DEBUG
