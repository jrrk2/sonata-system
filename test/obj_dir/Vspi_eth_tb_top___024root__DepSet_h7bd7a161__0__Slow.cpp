// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_eth_tb_top.h for the primary calling header

#include "Vspi_eth_tb_top__pch.h"
#include "Vspi_eth_tb_top___024root.h"

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_static__TOP(Vspi_eth_tb_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_static(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_static\n"); );
    // Body
    Vspi_eth_tb_top___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_static__TOP(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_odd = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_locked = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d0 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d1 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d2 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d3 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_initial__TOP(Vspi_eth_tb_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_initial(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_initial\n"); );
    // Body
    Vspi_eth_tb_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni__0 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni;
    vlSelf->__Vtrigprevexpr___TOP__clk_25mhz__0 = vlSelf->clk_25mhz;
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn__0 
        = vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn;
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q__0 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q;
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__ksz_chip_state__0 = 0U;
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_initial__TOP__0(Vspi_eth_tb_top___024root* vlSelf);
VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_initial__TOP__1(Vspi_eth_tb_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_initial__TOP(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_initial__TOP\n"); );
    // Body
    Vspi_eth_tb_top___024root___eval_initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vspi_eth_tb_top___024root___eval_initial__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_initial__TOP__0(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARL = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARM = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARH = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXCR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXSR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR1 = 0x800U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR2 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXMIR = 0x1800U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHSR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHBCR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXQCR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXFDPR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFDPR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_IER = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR = 0x300U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFCTR = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_CIDER = 0x8870U;
    vlSelf->spi_eth_tb_top__DOT__ksz_chip_state = 0U;
    vlSelf->spi_eth_tb_top__DOT__ksz_intrn = 1U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address = 0x20100000001ULL;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__promiscuous_mode = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_writing = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_wr_ptr = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_advance = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_reading = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_pulse_old = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = (1U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (2U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (4U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = (8U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [3U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (0x10U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (0x20U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = (0x40U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [6U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (0x80U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (0x100U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = (0x200U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [9U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (0x400U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (0x800U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (0x1000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = (0x2000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xdU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = (0x4000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xeU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = (0x8000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xfU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (0x10000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = (0x20000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x11U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = (0x40000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x12U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = (0x80000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x13U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = (0x100000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x14U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = (0x200000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x15U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (0x400000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (0x800000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = (0x1000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x18U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = (0x2000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x19U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (0x4000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = (0x8000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1bU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = (0x10000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1cU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = (0x20000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1dU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = (0x40000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1eU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = (0x80000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1fU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = (1U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [0U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = (2U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [1U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = (4U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [2U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = (8U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [3U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = (0x10U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [4U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = (0x20U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [5U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = (0x40U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [6U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = (0x80U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [7U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = (0x80U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = (0x40U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = (0x20U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = (0x10U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = (8U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = (4U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = (2U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = (1U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__j = 0x20U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20U, vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffffeU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                  [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                  >> 0x1fU));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffffdU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 0x1dU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffffbU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 0x1bU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffff7U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 0x19U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffffefU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                           >> 0x17U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffffdfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                           >> 0x15U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffffbfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                           >> 0x13U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffff7fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                           >> 0x11U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffeffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x100U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                            [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                            >> 0xfU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffdffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                            [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                            >> 0xdU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffbffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x400U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                            [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                            >> 0xbU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffff7ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                            [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                            >> 9U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffefffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x1000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                             [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                             >> 7U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffdfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                             [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                             >> 5U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffbfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x4000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                             [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                             >> 3U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffff7fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                             [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                             >> 1U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffeffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x10000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                              [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                              << 1U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffdffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                              [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                              << 3U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffbffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x40000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                              [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                              << 5U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfff7ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                              [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                              << 7U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffefffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x100000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                               [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                               << 9U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffdfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                               [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                               << 0xbU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffbfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x400000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                               [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                               << 0xdU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xff7fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                               [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                               << 0xfU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfeffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x1000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                                << 0x11U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfdffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                                << 0x13U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfbffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x4000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                                << 0x15U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xf7ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                                << 0x17U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xefffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x10000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                 [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                                 << 0x19U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xdfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                 [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                                 << 0x1bU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xbfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                 [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                                 << 0x1dU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0x7fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                  [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                  << 0x1fU));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[(0x1fU 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xfeU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 7U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xfdU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 5U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xfbU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 3U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xf7U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 1U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xefU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                           << 1U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xdfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                           << 3U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xbfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                           << 5U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0x7fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
                           << 7U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__j = 8U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[(0x1fU 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i)] 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i 
            = ((IData)(1U) + vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i);
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [0U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [0U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [0U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [0U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [0U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [0U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [0U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [0U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [0U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [0U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [0U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [0U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [0U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [0U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [0U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [0U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [0U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [0U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [0U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [0U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [0U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [0U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [0U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [0U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [0U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [0U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [0U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [0U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [0U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [0U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [0U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [0U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [0U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [0U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [0U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [0U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [0U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [0U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [0U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [0U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [1U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [1U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [1U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [1U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [1U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [1U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [1U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [1U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [1U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [1U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [1U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [1U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [1U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [1U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [1U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [1U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [1U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [1U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [1U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [1U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [1U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [1U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [1U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [1U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [1U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [1U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [1U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [1U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [1U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [1U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [1U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [1U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [1U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [1U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [1U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [1U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [1U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [1U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [1U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [1U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [2U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [2U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [2U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [2U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [2U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [2U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [2U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [2U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [2U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [2U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [2U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [2U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [2U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [2U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [2U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [2U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [2U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [2U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [2U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [2U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [2U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [2U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [2U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [2U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [2U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [2U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [2U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [2U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [2U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [2U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [2U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [2U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [2U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [2U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [2U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [2U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [2U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [2U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [2U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [2U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [3U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [3U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [3U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [3U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [3U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [3U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [3U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [3U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [3U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [3U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [3U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [3U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [3U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [3U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [3U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [3U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [3U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [3U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [3U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [3U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [3U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [3U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [3U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [3U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [3U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [3U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [3U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [3U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [3U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [3U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [3U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [3U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [3U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [3U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [3U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [3U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [3U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [3U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [3U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [3U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [4U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [4U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [4U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [4U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [4U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [4U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [4U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [4U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [4U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [4U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [4U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [4U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [4U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [4U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [4U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [4U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [4U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [4U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [4U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [4U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [4U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [4U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [4U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [4U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [4U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [4U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [4U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [4U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [4U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [4U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [4U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [4U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [4U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [4U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [4U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [4U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [4U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [4U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [4U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [4U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [5U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [5U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [5U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [5U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [5U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [5U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [5U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [5U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [5U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [5U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [5U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [5U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [5U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [5U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [5U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [5U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [5U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [5U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [5U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [5U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [5U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [5U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [5U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [5U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [5U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [5U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [5U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [5U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [5U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [5U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [5U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [5U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [5U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [5U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [5U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [5U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [5U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [5U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [5U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [5U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [6U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [6U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [6U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [6U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [6U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [6U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [6U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [6U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [6U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [6U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [6U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [6U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [6U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [6U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [6U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [6U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [6U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [6U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [6U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [6U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [6U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [6U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [6U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [6U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [6U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [6U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [6U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [6U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [6U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [6U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [6U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [6U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [6U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [6U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [6U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [6U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [6U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [6U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [6U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [6U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [7U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [7U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [7U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [7U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [7U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [7U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [7U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [7U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [7U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [7U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [7U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [7U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [7U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [7U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [7U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [7U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [7U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [7U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [7U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [7U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [7U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [7U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [7U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [7U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [7U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [7U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [7U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [7U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [7U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [7U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [7U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [7U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [7U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [7U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [7U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [7U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [7U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [7U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [7U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [7U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__j = 8U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i = 8U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = (1U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (2U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (4U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = (8U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [3U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (0x10U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (0x20U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = (0x40U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [6U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (0x80U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (0x100U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = (0x200U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [9U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (0x400U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (0x800U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (0x1000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = (0x2000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xdU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = (0x4000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xeU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = (0x8000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xfU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (0x10000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = (0x20000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x11U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = (0x40000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x12U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = (0x80000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x13U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = (0x100000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x14U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = (0x200000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x15U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (0x400000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (0x800000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = (0x1000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x18U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = (0x2000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x19U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (0x4000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = (0x8000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1bU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = (0x10000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1cU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = (0x20000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1dU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = (0x40000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1eU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = (0x80000000U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1fU]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = (1U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [0U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = (2U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [1U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = (4U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [2U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = (8U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [3U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = (0x10U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [4U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = (0x20U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [5U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = (0x40U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [6U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = (0x80U | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
           [7U]);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = (0x80U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = (0x40U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = (0x20U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = (0x10U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = (8U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = (4U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = (2U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = (1U ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [1U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [1U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [2U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [2U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [4U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [4U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [5U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [5U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [7U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [7U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [8U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [8U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xaU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xaU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xbU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xbU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0xcU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0xcU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x10U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x10U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x16U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x16U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x17U] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x17U] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
           [0x1aU] ^ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
           [0x1aU] ^ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__j = 0x20U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1fU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1fU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1eU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1eU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1dU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1dU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1cU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1cU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1bU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1bU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x1aU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x1aU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x19U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x19U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x18U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x18U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [8U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x17U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x17U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [9U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x16U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x16U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xaU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xaU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x15U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x15U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xbU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xbU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x14U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x14U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xcU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xcU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x13U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x13U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xdU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xdU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x12U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x12U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xeU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xeU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x11U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x11U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0xfU];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0xfU] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
        [0x10U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0x10U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [0U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [7U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [1U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [6U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [2U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [5U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [3U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
        [4U];
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20U, vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffffeU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                  [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                  >> 0x1fU));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffffdU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 0x1dU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffffbU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 0x1bU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffff7U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 0x19U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffffefU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                           >> 0x17U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffffdfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                           >> 0x15U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffffbfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                           >> 0x13U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffff7fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                           >> 0x11U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffeffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x100U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                            [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                            >> 0xfU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffdffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                            [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                            >> 0xdU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffffbffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x400U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                            [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                            >> 0xbU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffff7ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                            [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                            >> 9U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffefffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x1000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                             [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                             >> 7U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffdfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                             [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                             >> 5U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffffbfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x4000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                             [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                             >> 3U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffff7fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                             [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                             >> 1U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffeffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x10000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                              [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                              << 1U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffdffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                              [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                              << 3U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfffbffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x40000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                              [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                              << 5U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfff7ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                              [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                              << 7U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffefffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x100000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                               [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                               << 9U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffdfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                               [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                               << 0xbU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xffbfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x400000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                               [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                               << 0xdU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xff7fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                               [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                               << 0xfU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfeffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x1000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                                << 0x11U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfdffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                                << 0x13U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xfbffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x4000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                                << 0x15U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xf7ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                                << 0x17U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xefffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x10000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                 [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                                 << 0x19U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xdfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                 [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                                 << 0x1bU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0xbfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                 [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                                 << 0x1dU)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
            = ((0x7fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
               | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                  [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                  << 0x1fU));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[(0x1fU 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xfeU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 7U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xfdU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 5U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xfbU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 3U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xf7U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                        [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                        >> 1U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xefU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                           << 1U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xdfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                           << 3U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0xbfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                           << 5U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
            = ((0x7fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
               | (0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                           [(0x1fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
                           << 7U)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__j = 8U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[(0x1fU 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i)] 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i 
            = ((IData)(1U) + vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i);
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [0U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [0U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [0U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [0U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [0U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [0U] >> 0x17U))));
}
