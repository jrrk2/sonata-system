// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_eth_tb_top.h for the primary calling header

#include "Vspi_eth_tb_top__pch.h"
#include "Vspi_eth_tb_top__Syms.h"
#include "Vspi_eth_tb_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__ico(Vspi_eth_tb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_eth_tb_top___024root___eval_triggers__ico(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_eth_tb_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__act(Vspi_eth_tb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_eth_tb_top___024root___eval_triggers__act(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk_25mhz) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_25mhz__0))) 
                                     | ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni__0))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn__0))) 
                                     | ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q__0)))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->clk_25mhz) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_25mhz__0))));
    vlSelf->__VactTriggered.set(5U, ((((IData)(vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn__0))) 
                                      | ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni__0))) 
                                     | ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->spi_eth_tb_top__DOT__ksz_chip_state) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__ksz_chip_state__0)));
    vlSelf->__VactTriggered.set(7U, ((((IData)(vlSelf->clk_25mhz) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_25mhz__0))) 
                                      | ((IData)(vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn__0)))) 
                                     | ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni__0 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni;
    vlSelf->__Vtrigprevexpr___TOP__clk_25mhz__0 = vlSelf->clk_25mhz;
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn__0 
        = vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn;
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q__0 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q;
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__ksz_chip_state__0 
        = vlSelf->spi_eth_tb_top__DOT__ksz_chip_state;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_eth_tb_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
