// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsonata.h for the primary calling header

#ifndef VERILATED_VSONATA___024ROOT_H_
#define VERILATED_VSONATA___024ROOT_H_  // guard

#include "verilated.h"
class Vsonata_sonata;


class Vsonata__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsonata___024root final : public VerilatedModule {
  public:
    // CELLS
    Vsonata_sonata* sonata;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk25,0,0);
        VL_OUT8(eth_rst_n,0,0);
        VL_OUT8(hyperram0_clk,0,0);
        VL_OUT8(hyperram0_cs_n,0,0);
        VL_INOUT8(hyperram0_dq,7,0);
        VL_OUT8(hyperram0_rst_n,0,0);
        VL_INOUT8(hyperram0_rwds,0,0);
        VL_IN8(jtag_tck,0,0);
        VL_IN8(jtag_tdi,0,0);
        VL_OUT8(jtag_tdo,0,0);
        VL_IN8(jtag_tms,0,0);
        VL_IN8(sdcard_cd,0,0);
        VL_OUT8(sdcard_clk,0,0);
        VL_INOUT8(sdcard_cmd,0,0);
        VL_INOUT8(sdcard_data,3,0);
        VL_IN8(serial_rx,0,0);
        VL_OUT8(serial_tx,0,0);
        VL_OUT8(spi_eth_clk,0,0);
        VL_OUT8(spi_eth_cs_n,0,0);
        VL_IN8(spi_eth_miso,0,0);
        VL_OUT8(spi_eth_mosi,0,0);
        VL_OUT8(spiflash4x_clk,0,0);
        VL_OUT8(spiflash4x_cs_n,0,0);
        VL_INOUT8(spiflash4x_dq,3,0);
        VL_OUT8(user_led0,0,0);
        VL_OUT8(user_led1,0,0);
        VL_OUT8(user_led2,0,0);
        VL_OUT8(user_led3,0,0);
        VL_OUT8(user_led4,0,0);
        VL_OUT8(user_led5,0,0);
        VL_OUT8(user_led6,0,0);
        VL_OUT8(user_led7,0,0);
        VL_IN8(user_sw0,0,0);
        VL_IN8(user_sw1,0,0);
        VL_IN8(user_sw2,0,0);
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__1;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__sys_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__sys2x_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__spi_wb__DOT__rst_ni__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__main_crg_clkin__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_logic_outputReset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__systemCd_logic_outputReset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_reset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_dm__DOT__dmactive__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugPort_tck__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_systemReset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__debugCd_external_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__systemCd_logic_outputReset__0;
    };
    struct {
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<3> __VicoTriggered;
    VlTriggerVec<21> __VactTriggered;
    VlTriggerVec<21> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsonata__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsonata___024root(Vsonata__Syms* symsp, const char* v__name);
    ~Vsonata___024root();
    VL_UNCOPYABLE(Vsonata___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
