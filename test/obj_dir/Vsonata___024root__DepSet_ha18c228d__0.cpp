// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata__Syms.h"
#include "Vsonata___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__ico(Vsonata___024root* vlSelf);
#endif  // VL_DEBUG

void Vsonata___024root___eval_triggers__ico(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (((IData)(vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__1)) 
                                     | ((IData)(vlSymsp->TOP__sonata.soclinux_dataw_sink_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__1))));
    vlSelf->__VicoTriggered.set(2U, ((IData)(vlSymsp->TOP__sonata.soclinux_datar_source_source_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__1)));
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__1 
        = vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__1 
        = vlSymsp->TOP__sonata.soclinux_dataw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__1 
        = vlSymsp->TOP__sonata.soclinux_datar_source_source_ready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
        vlSelf->__VicoTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsonata___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vsonata___024root___ico_sequent__TOP__0(Vsonata___024root* vlSelf);
void Vsonata_sonata___ico_sequent__TOP__sonata__0(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0(Vsonata_VexRiscv* vlSelf);
void Vsonata___024root___ico_sequent__TOP__1(Vsonata___024root* vlSelf);
void Vsonata_sonata___ico_sequent__TOP__sonata__1(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata___024root___ico_sequent__TOP__2(Vsonata___024root* vlSelf);
void Vsonata_sonata___ico_comb__TOP__sonata__0(Vsonata_sonata* vlSelf);
void Vsonata_sonata___ico_comb__TOP__sonata__1(Vsonata_sonata* vlSelf);

void Vsonata___024root___eval_ico(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsonata___024root___ico_sequent__TOP__0(vlSelf);
        Vsonata_sonata___ico_sequent__TOP__sonata__0((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscv___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
        Vsonata___024root___ico_sequent__TOP__1(vlSelf);
        Vsonata_sonata___ico_sequent__TOP__sonata__1((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata___024root___ico_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsonata_sonata___ico_comb__TOP__sonata__0((&vlSymsp->TOP__sonata));
    }
    if ((7ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsonata_sonata___ico_comb__TOP__sonata__1((&vlSymsp->TOP__sonata));
    }
}

VL_INLINE_OPT void Vsonata___024root___ico_sequent__TOP__0(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__sonata.user_sw2 = vlSelf->user_sw2;
    vlSymsp->TOP__sonata.user_sw1 = vlSelf->user_sw1;
    vlSelf->serial_tx = vlSymsp->TOP__sonata.serial_tx;
    vlSymsp->TOP__sonata.serial_rx = vlSelf->serial_rx;
    vlSelf->eth_rst_n = vlSymsp->TOP__sonata.eth_rst_n;
    vlSymsp->TOP__sonata.user_sw0 = vlSelf->user_sw0;
    vlSymsp->TOP__sonata.sdcard_cd = vlSelf->sdcard_cd;
    vlSelf->hyperram0_rwds = ((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl212) 
                              & (IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl222));
    vlSymsp->TOP__sonata.spi_eth_miso = vlSelf->spi_eth_miso;
    vlSymsp->TOP__sonata.jtag_tdi = vlSelf->jtag_tdi;
    vlSelf->sdcard_cmd = ((~ (IData)(vlSymsp->TOP__sonata.ODDR_12__DOT__q_reg)) 
                          & (IData)(vlSymsp->TOP__sonata.ODDR_11__DOT__q_reg));
    vlSymsp->TOP__sonata.jtag_tck = vlSelf->jtag_tck;
    vlSymsp->TOP__sonata.clk25 = vlSelf->clk25;
    vlSymsp->TOP__sonata.jtag_tms = vlSelf->jtag_tms;
    vlSymsp->TOP__sonata.hyperram0_rwds = vlSelf->hyperram0_rwds;
    vlSymsp->TOP__sonata.sdcard_cmd = vlSelf->sdcard_cmd;
}

VL_INLINE_OPT void Vsonata___024root___ico_sequent__TOP__1(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->hyperram0_clk = vlSymsp->TOP__sonata.hyperram0_clk;
    vlSelf->hyperram0_cs_n = vlSymsp->TOP__sonata.hyperram0_cs_n;
    vlSelf->hyperram0_rst_n = vlSymsp->TOP__sonata.hyperram0_rst_n;
    vlSelf->sdcard_clk = vlSymsp->TOP__sonata.sdcard_clk;
    vlSelf->spi_eth_clk = vlSymsp->TOP__sonata.spi_eth_clk;
    vlSelf->spi_eth_cs_n = vlSymsp->TOP__sonata.spi_eth_cs_n;
    vlSelf->spiflash4x_clk = vlSymsp->TOP__sonata.spiflash4x_clk;
    vlSelf->spiflash4x_cs_n = vlSymsp->TOP__sonata.spiflash4x_cs_n;
    vlSelf->spi_eth_mosi = vlSymsp->TOP__sonata.spi_eth_mosi;
    vlSelf->hyperram0_dq = (((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl42)
                              ? 0xffU : 0U) & (((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl42)
                                                 ? (IData)(vlSymsp->TOP__sonata.main_hyperramsdrphy_dq_o)
                                                 : 0U) 
                                               & ((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl42)
                                                   ? 0xffU
                                                   : 0U)));
    vlSelf->sdcard_data = (((1U & (~ (IData)(vlSymsp->TOP__sonata.ODDR_17__DOT__q_reg))) 
                            | ((2U & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_18__DOT__q_reg)) 
                                      << 1U)) | ((4U 
                                                  & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_19__DOT__q_reg)) 
                                                     << 2U)) 
                                                 | (8U 
                                                    & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_20__DOT__q_reg)) 
                                                       << 3U))))) 
                           & ((1U & ((IData)(vlSymsp->TOP__sonata.sdcard_data__out__strong__out12) 
                                     & (~ (IData)(vlSymsp->TOP__sonata.ODDR_17__DOT__q_reg)))) 
                              | ((2U & ((IData)(vlSymsp->TOP__sonata.sdcard_data__out__strong__out13) 
                                        & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_18__DOT__q_reg)) 
                                           << 1U))) 
                                 | ((4U & ((IData)(vlSymsp->TOP__sonata.sdcard_data__out__strong__out14) 
                                           & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_19__DOT__q_reg)) 
                                              << 2U))) 
                                    | (8U & ((IData)(vlSymsp->TOP__sonata.sdcard_data__out__strong__out15) 
                                             & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_20__DOT__q_reg)) 
                                                << 3U)))))));
    vlSelf->spiflash4x_dq = (((1U & (~ (IData)(vlSymsp->TOP__sonata.ODDR_7__DOT__q_reg))) 
                              | ((2U & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_8__DOT__q_reg)) 
                                        << 1U)) | (
                                                   (4U 
                                                    & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_9__DOT__q_reg)) 
                                                       << 2U)) 
                                                   | (8U 
                                                      & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_10__DOT__q_reg)) 
                                                         << 3U))))) 
                             & ((1U & ((IData)(vlSymsp->TOP__sonata.spiflash4x_dq__out__strong__out16) 
                                       & (~ (IData)(vlSymsp->TOP__sonata.ODDR_7__DOT__q_reg)))) 
                                | ((2U & ((IData)(vlSymsp->TOP__sonata.spiflash4x_dq__out__strong__out17) 
                                          & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_8__DOT__q_reg)) 
                                             << 1U))) 
                                   | ((4U & ((IData)(vlSymsp->TOP__sonata.spiflash4x_dq__out__strong__out18) 
                                             & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_9__DOT__q_reg)) 
                                                << 2U))) 
                                      | (8U & ((IData)(vlSymsp->TOP__sonata.spiflash4x_dq__out__strong__out19) 
                                               & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_10__DOT__q_reg)) 
                                                  << 3U)))))));
    vlSelf->user_led0 = vlSymsp->TOP__sonata.user_led0;
    vlSelf->user_led1 = vlSymsp->TOP__sonata.user_led1;
    vlSelf->user_led2 = vlSymsp->TOP__sonata.user_led2;
    vlSelf->user_led3 = vlSymsp->TOP__sonata.user_led3;
    vlSelf->user_led4 = vlSymsp->TOP__sonata.user_led4;
    vlSelf->user_led5 = vlSymsp->TOP__sonata.user_led5;
    vlSelf->user_led6 = vlSymsp->TOP__sonata.user_led6;
    vlSelf->user_led7 = vlSymsp->TOP__sonata.user_led7;
    vlSymsp->TOP__sonata.hyperram0_dq = vlSelf->hyperram0_dq;
    vlSymsp->TOP__sonata.sdcard_data = vlSelf->sdcard_data;
    vlSymsp->TOP__sonata.spiflash4x_dq = vlSelf->spiflash4x_dq;
}

VL_INLINE_OPT void Vsonata___024root___ico_sequent__TOP__2(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___ico_sequent__TOP__2\n"); );
    // Body
    vlSelf->jtag_tdo = vlSymsp->TOP__sonata.jtag_tdo;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__act(Vsonata___024root* vlSelf);
#endif  // VL_DEBUG

void Vsonata___024root___eval_triggers__act(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__2)) 
                                     | ((IData)(vlSymsp->TOP__sonata.soclinux_dataw_sink_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__2))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__sonata.soclinux_datar_source_source_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__2)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__sonata.sys_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__sys_clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__sonata.sys2x_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__sys2x_clk__0))));
    vlSelf->__VactTriggered.set(4U, (((~ (IData)(vlSymsp->TOP__sonata.spi_wb__DOT__rst_ni)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__spi_wb__DOT__rst_ni__0)) 
                                     | ((IData)(vlSymsp->TOP__sonata.sys_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__sys_clk__0)))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSymsp->TOP__sonata.main_crg_clkin) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__main_crg_clkin__0))));
    vlSelf->__VactTriggered.set(6U, (((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxasyncresetsynchronizerimpl0) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl0__0))) 
                                     | ((IData)(vlSymsp->TOP__sonata.sys_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__sys_clk__0)))));
    vlSelf->__VactTriggered.set(7U, (((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxasyncresetsynchronizerimpl1) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl1__0))) 
                                     | ((IData)(vlSymsp->TOP__sonata.sys2x_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__sys2x_clk__0)))));
    vlSelf->__VactTriggered.set(8U, ((~ (IData)(vlSymsp->TOP__sonata.sys_clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__sys_clk__0)));
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0))) 
                                       | ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_logic_outputReset) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_logic_outputReset__0)))));
    vlSelf->__VactTriggered.set(0xbU, (((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0))) 
                                       | ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.systemCd_logic_outputReset) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__systemCd_logic_outputReset__0)))));
    vlSelf->__VactTriggered.set(0xcU, (((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0))) 
                                       | ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_reset) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_reset__0)))));
    vlSelf->__VactTriggered.set(0xdU, (((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_dm__DOT__dmactive)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_dm__DOT__dmactive__0))));
    vlSelf->__VactTriggered.set(0xeU, ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugPort_tck__0))));
    vlSelf->__VactTriggered.set(0xfU, ((~ (IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck)) 
                                       & (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugPort_tck__0)));
    vlSelf->__VactTriggered.set(0x10U, (((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugPort_tck__0))) 
                                        | ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized__0)))));
    vlSelf->__VactTriggered.set(0x11U, (((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_logic_outputReset) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_logic_outputReset__0))) 
                                        | ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugPort_tck__0)))));
    vlSelf->__VactTriggered.set(0x12U, (((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0))) 
                                        | ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_systemReset) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_systemReset__0)))));
    vlSelf->__VactTriggered.set(0x13U, ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugCd_external_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__debugCd_external_clk__0))));
    vlSelf->__VactTriggered.set(0x14U, (((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugCd_external_clk) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__debugCd_external_clk__0))) 
                                        | ((IData)(vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.systemCd_logic_outputReset) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__systemCd_logic_outputReset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__2 
        = vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__2 
        = vlSymsp->TOP__sonata.soclinux_dataw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__2 
        = vlSymsp->TOP__sonata.soclinux_datar_source_source_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__sys_clk__0 
        = vlSymsp->TOP__sonata.sys_clk;
    vlSelf->__Vtrigprevexpr___TOP__sonata__sys2x_clk__0 
        = vlSymsp->TOP__sonata.sys2x_clk;
    vlSelf->__Vtrigprevexpr___TOP__sonata__spi_wb__DOT__rst_ni__0 
        = vlSymsp->TOP__sonata.spi_wb__DOT__rst_ni;
    vlSelf->__Vtrigprevexpr___TOP__sonata__main_crg_clkin__0 
        = vlSymsp->TOP__sonata.main_crg_clkin;
    vlSelf->__Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl0__0 
        = vlSymsp->TOP__sonata.builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->__Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl1__0 
        = vlSymsp->TOP__sonata.builder_impl_xilinxasyncresetsynchronizerimpl1;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_logic_outputReset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_logic_outputReset;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__systemCd_logic_outputReset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.systemCd_logic_outputReset;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_reset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_reset;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_dm__DOT__dmactive__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_dm__DOT__dmactive;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugPort_tck__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_systemReset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_systemReset;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__debugCd_external_clk__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugCd_external_clk;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__systemCd_logic_outputReset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.systemCd_logic_outputReset;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsonata___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vsonata___024root___eval_act(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vsonata_sonata___ico_comb__TOP__sonata__0((&vlSymsp->TOP__sonata));
    }
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vsonata_sonata___ico_comb__TOP__sonata__1((&vlSymsp->TOP__sonata));
    }
}

void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__0(Vsonata_sonata* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__1(Vsonata_sonata* vlSelf);
void Vsonata___024root___nba_sequent__TOP__0(Vsonata___024root* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__2(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__2(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__3(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__1(Vsonata_VexRiscv* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__4(Vsonata_sonata* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__5(Vsonata_sonata* vlSelf);
void Vsonata___024root___nba_sequent__TOP__1(Vsonata___024root* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__3(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__6(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__4(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__7(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__2(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__5(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__6(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__7(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__8(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__8(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__3(Vsonata_VexRiscv* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__9(Vsonata_sonata* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__10(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__9(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__11(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__10(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__12(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__11(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__12(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__13(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__14(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__4(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__15(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__13(Vsonata_sonata* vlSelf);
void Vsonata_sonata___nba_comb__TOP__sonata__0(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__16(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__5(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0(Vsonata_VexRiscv* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__14(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__17(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_comb__TOP__sonata__2(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__1(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__2(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__18(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__6(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__3(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__19(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__2(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__4(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__5(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__6(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_comb__TOP__sonata__3(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__7(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__3(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__8(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__4(Vsonata_VexRiscv* vlSelf);
void Vsonata_sonata___nba_comb__TOP__sonata__4(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__9(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__10(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__15(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__11(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__20(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_comb__TOP__sonata__5(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__12(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_sequent__TOP__sonata__16(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__13(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_comb__TOP__sonata__6(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__14(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_sonata___nba_comb__TOP__sonata__7(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__5(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__15(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__6(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__16(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__7(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__8(Vsonata_VexRiscv* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__21(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__17(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__9(Vsonata_VexRiscv* vlSelf);
void Vsonata_sonata___nba_comb__TOP__sonata__8(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__18(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__19(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);

void Vsonata___024root___eval_nba(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_nba\n"); );
    // Body
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__0((&vlSymsp->TOP__sonata));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__1((&vlSymsp->TOP__sonata));
        Vsonata___024root___nba_sequent__TOP__0(vlSelf);
        Vsonata_sonata___nba_sequent__TOP__sonata__2((&vlSymsp->TOP__sonata));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__2((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_sonata___nba_sequent__TOP__sonata__3((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__1((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__4((&vlSymsp->TOP__sonata));
        Vsonata_sonata___nba_sequent__TOP__sonata__5((&vlSymsp->TOP__sonata));
        Vsonata___024root___nba_sequent__TOP__1(vlSelf);
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__3((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_sonata___nba_sequent__TOP__sonata__6((&vlSymsp->TOP__sonata));
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__4((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__7((&vlSymsp->TOP__sonata));
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__2((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__5((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__6((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__7((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__8((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_sonata___nba_sequent__TOP__sonata__8((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__3((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__9((&vlSymsp->TOP__sonata));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__10((&vlSymsp->TOP__sonata));
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__9((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__11((&vlSymsp->TOP__sonata));
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__10((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_sonata___nba_sequent__TOP__sonata__12((&vlSymsp->TOP__sonata));
        Vsonata___024root___ico_sequent__TOP__2(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__11((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__12((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__13((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__14((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__4((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__15((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__13((&vlSymsp->TOP__sonata));
    }
    if ((0x204ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_comb__TOP__sonata__0((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___ico_comb__TOP__sonata__0((&vlSymsp->TOP__sonata));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__16((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__5((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__14((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__17((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_comb__TOP__sonata__2((&vlSymsp->TOP__sonata));
    }
    if ((0x180000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__1((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__2((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__18((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__6((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x2200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__3((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__19((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x102000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__2((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__4((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x82000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__5((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0xa00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__6((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_sonata___nba_comb__TOP__sonata__3((&vlSymsp->TOP__sonata));
    }
    if ((0x100800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__7((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__3((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x80a00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__8((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x80800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__4((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x804ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_comb__TOP__sonata__4((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__9((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x14000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__10((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__15((&vlSymsp->TOP__sonata));
    }
    if ((0x40400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__11((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__20((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x44ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_comb__TOP__sonata__5((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__12((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_sequent__TOP__sonata__16((&vlSymsp->TOP__sonata));
    }
    if ((0xa04ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__13((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_sonata___nba_comb__TOP__sonata__6((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__14((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_comb__TOP__sonata__7((&vlSymsp->TOP__sonata));
    }
    if ((0x100200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__5((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x2600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__15((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x100600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__6((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x180200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__16((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__7((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x180000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__8((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__21((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__17((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x180800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__9((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    }
    if ((0xa14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_sonata___nba_comb__TOP__sonata__8((&vlSymsp->TOP__sonata));
    }
    if ((0x2600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__18((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
    if ((0x182600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__19((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    }
}

VL_INLINE_OPT void Vsonata___024root___nba_sequent__TOP__0(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->hyperram0_rwds = ((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl212) 
                              & (IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl222));
    vlSelf->hyperram0_rst_n = vlSymsp->TOP__sonata.hyperram0_rst_n;
    vlSelf->hyperram0_cs_n = vlSymsp->TOP__sonata.hyperram0_cs_n;
    vlSelf->hyperram0_clk = vlSymsp->TOP__sonata.hyperram0_clk;
    vlSelf->hyperram0_dq = (((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl42)
                              ? 0xffU : 0U) & (((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl42)
                                                 ? (IData)(vlSymsp->TOP__sonata.main_hyperramsdrphy_dq_o)
                                                 : 0U) 
                                               & ((IData)(vlSymsp->TOP__sonata.builder_impl_xilinxmultiregimpl42)
                                                   ? 0xffU
                                                   : 0U)));
    vlSymsp->TOP__sonata.hyperram0_rwds = vlSelf->hyperram0_rwds;
    vlSymsp->TOP__sonata.hyperram0_dq = vlSelf->hyperram0_dq;
}

VL_INLINE_OPT void Vsonata___024root___nba_sequent__TOP__1(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->sdcard_cmd = ((~ (IData)(vlSymsp->TOP__sonata.ODDR_12__DOT__q_reg)) 
                          & (IData)(vlSymsp->TOP__sonata.ODDR_11__DOT__q_reg));
    vlSelf->serial_tx = vlSymsp->TOP__sonata.serial_tx;
    vlSelf->sdcard_clk = vlSymsp->TOP__sonata.sdcard_clk;
    vlSelf->spiflash4x_cs_n = vlSymsp->TOP__sonata.spiflash4x_cs_n;
    vlSelf->spi_eth_clk = vlSymsp->TOP__sonata.spi_eth_clk;
    vlSelf->spiflash4x_clk = vlSymsp->TOP__sonata.spiflash4x_clk;
    vlSelf->spi_eth_mosi = vlSymsp->TOP__sonata.spi_eth_mosi;
    vlSelf->sdcard_data = (((1U & (~ (IData)(vlSymsp->TOP__sonata.ODDR_17__DOT__q_reg))) 
                            | ((2U & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_18__DOT__q_reg)) 
                                      << 1U)) | ((4U 
                                                  & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_19__DOT__q_reg)) 
                                                     << 2U)) 
                                                 | (8U 
                                                    & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_20__DOT__q_reg)) 
                                                       << 3U))))) 
                           & ((1U & ((IData)(vlSymsp->TOP__sonata.sdcard_data__out__strong__out12) 
                                     & (~ (IData)(vlSymsp->TOP__sonata.ODDR_17__DOT__q_reg)))) 
                              | ((2U & ((IData)(vlSymsp->TOP__sonata.sdcard_data__out__strong__out13) 
                                        & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_18__DOT__q_reg)) 
                                           << 1U))) 
                                 | ((4U & ((IData)(vlSymsp->TOP__sonata.sdcard_data__out__strong__out14) 
                                           & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_19__DOT__q_reg)) 
                                              << 2U))) 
                                    | (8U & ((IData)(vlSymsp->TOP__sonata.sdcard_data__out__strong__out15) 
                                             & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_20__DOT__q_reg)) 
                                                << 3U)))))));
    vlSelf->spi_eth_cs_n = vlSymsp->TOP__sonata.spi_eth_cs_n;
    vlSelf->spiflash4x_dq = (((1U & (~ (IData)(vlSymsp->TOP__sonata.ODDR_7__DOT__q_reg))) 
                              | ((2U & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_8__DOT__q_reg)) 
                                        << 1U)) | (
                                                   (4U 
                                                    & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_9__DOT__q_reg)) 
                                                       << 2U)) 
                                                   | (8U 
                                                      & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_10__DOT__q_reg)) 
                                                         << 3U))))) 
                             & ((1U & ((IData)(vlSymsp->TOP__sonata.spiflash4x_dq__out__strong__out16) 
                                       & (~ (IData)(vlSymsp->TOP__sonata.ODDR_7__DOT__q_reg)))) 
                                | ((2U & ((IData)(vlSymsp->TOP__sonata.spiflash4x_dq__out__strong__out17) 
                                          & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_8__DOT__q_reg)) 
                                             << 1U))) 
                                   | ((4U & ((IData)(vlSymsp->TOP__sonata.spiflash4x_dq__out__strong__out18) 
                                             & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_9__DOT__q_reg)) 
                                                << 2U))) 
                                      | (8U & ((IData)(vlSymsp->TOP__sonata.spiflash4x_dq__out__strong__out19) 
                                               & ((~ (IData)(vlSymsp->TOP__sonata.ODDR_10__DOT__q_reg)) 
                                                  << 3U)))))));
    vlSelf->user_led0 = vlSymsp->TOP__sonata.user_led0;
    vlSelf->user_led1 = vlSymsp->TOP__sonata.user_led1;
    vlSelf->user_led2 = vlSymsp->TOP__sonata.user_led2;
    vlSelf->user_led3 = vlSymsp->TOP__sonata.user_led3;
    vlSelf->user_led4 = vlSymsp->TOP__sonata.user_led4;
    vlSelf->user_led5 = vlSymsp->TOP__sonata.user_led5;
    vlSelf->user_led6 = vlSymsp->TOP__sonata.user_led6;
    vlSelf->user_led7 = vlSymsp->TOP__sonata.user_led7;
    vlSymsp->TOP__sonata.sdcard_cmd = vlSelf->sdcard_cmd;
    vlSymsp->TOP__sonata.sdcard_data = vlSelf->sdcard_data;
    vlSymsp->TOP__sonata.spiflash4x_dq = vlSelf->spiflash4x_dq;
}
