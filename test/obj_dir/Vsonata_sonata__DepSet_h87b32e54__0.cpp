// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata__Syms.h"
#include "Vsonata_sonata.h"

VL_INLINE_OPT void Vsonata_sonata___ico_sequent__TOP__sonata__0(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___ico_sequent__TOP__sonata__0\n"); );
    // Init
    CData/*0:0*/ __VdfgExtracted_h12075b80__0;
    __VdfgExtracted_h12075b80__0 = 0;
    CData/*1:0*/ __VdfgExtracted_ha249474d__0;
    __VdfgExtracted_ha249474d__0 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_11_2;
    __VdfgRegularize_h278c091a_11_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_11_6;
    __VdfgRegularize_h278c091a_11_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_11_10;
    __VdfgRegularize_h278c091a_11_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_11_12;
    __VdfgRegularize_h278c091a_11_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_69_0;
    __VdfgRegularize_h278c091a_69_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_133_2;
    __VdfgRegularize_h278c091a_133_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_133_6;
    __VdfgRegularize_h278c091a_133_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_133_10;
    __VdfgRegularize_h278c091a_133_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_133_12;
    __VdfgRegularize_h278c091a_133_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_0;
    __VdfgRegularize_h278c091a_138_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_1;
    __VdfgRegularize_h278c091a_138_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_3;
    __VdfgRegularize_h278c091a_138_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_4;
    __VdfgRegularize_h278c091a_138_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_5;
    __VdfgRegularize_h278c091a_138_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_6;
    __VdfgRegularize_h278c091a_138_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_7;
    __VdfgRegularize_h278c091a_138_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_8;
    __VdfgRegularize_h278c091a_138_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_9;
    __VdfgRegularize_h278c091a_138_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_10;
    __VdfgRegularize_h278c091a_138_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_11;
    __VdfgRegularize_h278c091a_138_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_138_12;
    __VdfgRegularize_h278c091a_138_12 = 0;
    CData/*1:0*/ __VdfgRegularize_h278c091a_138_13;
    __VdfgRegularize_h278c091a_138_13 = 0;
    // Body
    vlSelf->main_soclinux_tx_enable = 0U;
    vlSelf->main_soclinux_rx_enable = 0U;
    vlSelf->main_hyperramsdrphy_ios_cs_n = 0U;
    vlSelf->main_soclinux_mmap_wait = 0U;
    vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value_ce0 = 0U;
    vlSelf->soclinux_cmdr_timeout_builder_sdphycmdr_next_value_ce0 = 0U;
    vlSelf->soclinux_dataw_source_source_ready = 0U;
    vlSelf->PLLE2_ADV__DOT__PWRDWN = vlSelf->main_crg_power_down;
    vlSelf->ODDR__DOT__D1 = vlSelf->main_soclinux_clk;
    vlSelf->ODDR__DOT__D2 = vlSelf->main_soclinux_clk;
    vlSelf->IOBUF__DOT__I = vlSelf->ODDR_3__DOT__q_reg;
    vlSelf->IOBUF__DOT__T = vlSelf->ODDR_7__DOT__q_reg;
    vlSelf->IOBUF_1__DOT__I = vlSelf->ODDR_4__DOT__q_reg;
    vlSelf->IOBUF_1__DOT__T = vlSelf->ODDR_8__DOT__q_reg;
    vlSelf->IOBUF_2__DOT__I = vlSelf->ODDR_5__DOT__q_reg;
    vlSelf->IOBUF_2__DOT__T = vlSelf->ODDR_9__DOT__q_reg;
    vlSelf->IOBUF_3__DOT__I = vlSelf->ODDR_6__DOT__q_reg;
    vlSelf->IOBUF_3__DOT__T = vlSelf->ODDR_10__DOT__q_reg;
    vlSelf->IOBUF_5__DOT__I = vlSelf->ODDR_13__DOT__q_reg;
    vlSelf->IOBUF_5__DOT__T = vlSelf->ODDR_17__DOT__q_reg;
    vlSelf->IOBUF_6__DOT__I = vlSelf->ODDR_14__DOT__q_reg;
    vlSelf->IOBUF_6__DOT__T = vlSelf->ODDR_18__DOT__q_reg;
    vlSelf->IOBUF_7__DOT__I = vlSelf->ODDR_15__DOT__q_reg;
    vlSelf->IOBUF_7__DOT__T = vlSelf->ODDR_19__DOT__q_reg;
    vlSelf->IOBUF_8__DOT__I = vlSelf->ODDR_16__DOT__q_reg;
    vlSelf->IOBUF_8__DOT__T = vlSelf->ODDR_20__DOT__q_reg;
    vlSelf->ODDR_7__DOT__D1 = (1U & (~ ((IData)(vlSelf->main_soclinux_dq_oe) 
                                        >> 0U)));
    vlSelf->ODDR_7__DOT__D2 = (1U & (~ ((IData)(vlSelf->main_soclinux_dq_oe) 
                                        >> 0U)));
    vlSelf->ODDR_8__DOT__D1 = (1U & (~ ((IData)(vlSelf->main_soclinux_dq_oe) 
                                        >> 1U)));
    vlSelf->ODDR_8__DOT__D2 = (1U & (~ ((IData)(vlSelf->main_soclinux_dq_oe) 
                                        >> 1U)));
    vlSelf->ODDR_9__DOT__D1 = (1U & (~ ((IData)(vlSelf->main_soclinux_dq_oe) 
                                        >> 2U)));
    vlSelf->ODDR_9__DOT__D2 = (1U & (~ ((IData)(vlSelf->main_soclinux_dq_oe) 
                                        >> 2U)));
    vlSelf->ODDR_10__DOT__D1 = (1U & (~ ((IData)(vlSelf->main_soclinux_dq_oe) 
                                         >> 3U)));
    vlSelf->ODDR_10__DOT__D2 = (1U & (~ ((IData)(vlSelf->main_soclinux_dq_oe) 
                                         >> 3U)));
    vlSelf->ODDR_2__DOT__Q = vlSelf->ODDR_2__DOT__q_reg;
    vlSelf->spi_wb__DOT__spi_clk_o = vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__spi_clk_o 
        = vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_q;
    vlSelf->spi_wb__DOT__spi_cs_o = vlSelf->spi_wb__DOT__cs_reg;
    vlSelf->ODDR__DOT__Q = vlSelf->ODDR__DOT__q_reg;
    vlSelf->ODDR_1__DOT__Q = vlSelf->ODDR_1__DOT__q_reg;
    vlSelf->main_hyperramsdrphy_rwds_oe = vlSelf->builder_impl_xilinxmultiregimpl212;
    vlSelf->main_hyperramsdrphy_rwds_o = vlSelf->builder_impl_xilinxmultiregimpl222;
    vlSelf->main_syncfifo0_rdport_adr = vlSelf->main_syncfifo0_consume;
    vlSelf->main_tx_cdc_cdc_produce_rdomain = vlSelf->builder_impl_xilinxmultiregimpl241;
    vlSelf->main_tx_cdc_cdc_consume_wdomain = vlSelf->builder_impl_xilinxmultiregimpl251;
    vlSelf->main_rx_cdc_cdc_produce_rdomain = vlSelf->builder_impl_xilinxmultiregimpl261;
    vlSelf->main_rx_cdc_cdc_consume_wdomain = vlSelf->builder_impl_xilinxmultiregimpl271;
    vlSelf->soclinux_cmdr_cmdr_converter_converter_source_valid 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_strobe_all;
    vlSelf->soclinux_cmdr_cmdr_converter_converter_sink_payload_data 
        = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_sink_valid 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_strobe_all;
    vlSelf->soclinux_dataw_crc_converter_converter_source_valid 
        = vlSelf->soclinux_dataw_crc_converter_converter_strobe_all;
    vlSelf->soclinux_dataw_crc_converter_converter_sink_payload_data 
        = vlSelf->IDDR_5__DOT__q1_reg;
    vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_ready 
        = vlSelf->soclinux_dataw_crc_source_ready;
    vlSelf->soclinux_dataw_crc_buf_pipe_valid_sink_valid 
        = vlSelf->soclinux_dataw_crc_converter_converter_strobe_all;
    vlSelf->soclinux_datar_datar_1x_converter_converter_source_valid 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_strobe_all;
    vlSelf->soclinux_datar_datar_1x_converter_converter_sink_payload_data 
        = vlSelf->IDDR_5__DOT__q1_reg;
    vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_sink_valid 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_strobe_all;
    vlSelf->soclinux_datar_datar_4x_converter_converter_source_valid 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_strobe_all;
    vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_sink_valid 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_strobe_all;
    vlSelf->soclinux_clk_i = vlSelf->builder_impl_xilinxmultiregimpl28_xilinxmultiregimpl28;
    vlSelf->soclinux_sdpads_cmd_i = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_init_pads_in_payload_cmd_i = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_cmdw_pads_in_payload_cmd_i = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_cmdr_pads_in_pads_in_payload_cmd_i 
        = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_dataw_pads_in_pads_in_payload_cmd_i 
        = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_datar_pads_in_pads_in_payload_cmd_i 
        = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_cmdr_cmdr_pads_in_payload_cmd_i 
        = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_cmdr_cmdr_converter_source_source_valid 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_strobe_all;
    vlSelf->soclinux_cmdr_cmdr_buf_sink_sink_valid 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_strobe_all;
    vlSelf->soclinux_cmdr_cmdr_buf_source_source_valid 
        = vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_valid;
    vlSelf->soclinux_dataw_crc_pads_in_payload_cmd_i 
        = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_dataw_crc_converter_source_source_valid 
        = vlSelf->soclinux_dataw_crc_converter_converter_strobe_all;
    vlSelf->soclinux_dataw_crc_buf_sink_sink_valid 
        = vlSelf->soclinux_dataw_crc_converter_converter_strobe_all;
    vlSelf->soclinux_dataw_crc_buf_source_source_valid 
        = vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_valid;
    vlSelf->soclinux_dataw_crc_buf_source_source_ready 
        = vlSelf->soclinux_dataw_crc_source_ready;
    vlSelf->soclinux_datar_datar_1x_pads_in_payload_cmd_i 
        = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_datar_datar_4x_pads_in_payload_cmd_i 
        = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->soclinux_datar_crc16_crc0_din = vlSelf->IDDR_5__DOT__q1_reg;
    vlSelf->soclinux_datar_crc16_crc1_din = vlSelf->IDDR_6__DOT__q1_reg;
    vlSelf->soclinux_datar_crc16_crc2_din = vlSelf->IDDR_7__DOT__q1_reg;
    vlSelf->soclinux_datar_crc16_crc3_din = vlSelf->IDDR_8__DOT__q1_reg;
    vlSelf->soclinux_datar_crc16_crc0_crc = vlSelf->soclinux_datar_crc16_crc00;
    vlSelf->soclinux_datar_crc16_crc1_crc = vlSelf->soclinux_datar_crc16_crc10;
    vlSelf->soclinux_datar_crc16_crc2_crc = vlSelf->soclinux_datar_crc16_crc20;
    vlSelf->soclinux_datar_crc16_crc3_crc = vlSelf->soclinux_datar_crc16_crc30;
    vlSelf->soclinux_datar_datar_1x_converter_source_source_valid 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_strobe_all;
    vlSelf->soclinux_datar_datar_1x_buf_sink_sink_valid 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_strobe_all;
    vlSelf->soclinux_datar_datar_1x_buf_source_source_valid 
        = vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_valid;
    vlSelf->soclinux_datar_datar_4x_converter_source_source_valid 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_strobe_all;
    vlSelf->soclinux_datar_datar_4x_buf_sink_sink_valid 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_strobe_all;
    vlSelf->soclinux_datar_datar_4x_buf_source_source_valid 
        = vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_valid;
    vlSelf->IDDR_4__DOT__Q1 = vlSelf->IDDR_4__DOT__q1_reg;
    vlSelf->IDDR_5__DOT__Q1 = vlSelf->IDDR_5__DOT__q1_reg;
    vlSelf->IDDR_6__DOT__Q1 = vlSelf->IDDR_6__DOT__q1_reg;
    vlSelf->IDDR_7__DOT__Q1 = vlSelf->IDDR_7__DOT__q1_reg;
    vlSelf->IDDR_8__DOT__Q1 = vlSelf->IDDR_8__DOT__q1_reg;
    vlSelf->builder_csr_bankarray_csrbank5_in_w = vlSelf->builder_impl_xilinxmultiregimpl29_xilinxmultiregimpl291;
    vlSelf->main_hyperramsdrphy_dq_oe = vlSelf->builder_impl_xilinxmultiregimpl42;
    vlSelf->main_soclinux_adapted_interface_err = vlSelf->main_soclinux_mmap_bus_err;
    vlSelf->main_bus_bus_err = vlSelf->main_core_bus_err;
    vlSelf->soclinux_mem2block_source_source_valid 
        = vlSelf->soclinux_mem2block_fifo_readable;
    vlSelf->soclinux_mem2block_fifo_source_valid = vlSelf->soclinux_mem2block_fifo_readable;
    vlSelf->soclinux_mem2block_dma_fifo_rdport_adr 
        = vlSelf->soclinux_mem2block_dma_fifo_consume;
    vlSelf->spi_wb__DOT__wb_ack_o = vlSelf->spi_wb__DOT__ack_q;
    vlSelf->soclinux_mem2block_dma_fifo_fifo_in_first 
        = vlSelf->soclinux_mem2block_dma_fifo_sink_first;
    vlSelf->main_soclinux_uart_tx_fifo_fifo_in_last 
        = vlSelf->main_soclinux_uart_tx_fifo_sink_last;
    vlSelf->main_soclinux_uart_tx_fifo_fifo_in_first 
        = vlSelf->main_soclinux_uart_tx_fifo_sink_first;
    vlSelf->main_soclinux_master_source_valid = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_valid;
    vlSelf->main_soclinux_port_master_user_port_sink_valid 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_valid;
    vlSelf->main_soclinux_port_master_internal_port_sink_valid 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_valid;
    vlSelf->main_soclinux_master_tx_fifo_source_source_valid 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_valid;
    vlSelf->main_soclinux_master_rx_fifo_source_source_valid 
        = vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_valid;
    vlSelf->main_soclinux_master_rx_ready = vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_valid;
    vlSelf->main_core_dat_rx_conv_source_source_first 
        = vlSelf->main_core_dat_rx_conv_converter_source_first;
    vlSelf->main_core_dat_rx_conv_source_first = vlSelf->main_core_dat_rx_conv_converter_source_first;
    vlSelf->main_core_dat_rx_conv_source_source_last 
        = vlSelf->main_core_dat_rx_conv_converter_source_last;
    vlSelf->main_core_dat_rx_conv_source_last = vlSelf->main_core_dat_rx_conv_converter_source_last;
    vlSelf->main_core_dat_rx_conv_converter_source_ready 
        = vlSelf->main_core_dat_rx_conv_source_ready;
    vlSelf->main_core_dat_rx_conv_converter_source_valid 
        = vlSelf->main_core_dat_rx_conv_converter_strobe_all;
    vlSelf->main_core_dat_rx_conv_source_source_valid 
        = vlSelf->main_core_dat_rx_conv_converter_strobe_all;
    vlSelf->main_core_dat_rx_conv_source_source_ready 
        = vlSelf->main_core_dat_rx_conv_source_ready;
    vlSelf->main_core_dat_tx_conv_converter_sink_first 
        = vlSelf->main_core_dat_tx_conv_sink_first;
    vlSelf->main_core_dat_tx_conv_converter_sink_last 
        = vlSelf->main_core_dat_tx_conv_sink_last;
    vlSelf->main_core_reg_rx_conv_source_source_first 
        = vlSelf->main_core_reg_rx_conv_converter_source_first;
    vlSelf->main_core_reg_rx_conv_source_first = vlSelf->main_core_reg_rx_conv_converter_source_first;
    vlSelf->main_core_reg_rx_conv_source_source_last 
        = vlSelf->main_core_reg_rx_conv_converter_source_last;
    vlSelf->main_core_reg_rx_conv_source_last = vlSelf->main_core_reg_rx_conv_converter_source_last;
    vlSelf->main_core_reg_rx_conv_converter_source_ready 
        = vlSelf->main_core_reg_rx_conv_source_ready;
    vlSelf->main_core_reg_rx_conv_converter_source_valid 
        = vlSelf->main_core_reg_rx_conv_converter_strobe_all;
    vlSelf->main_core_reg_rx_conv_source_source_valid 
        = vlSelf->main_core_reg_rx_conv_converter_strobe_all;
    vlSelf->main_core_reg_rx_conv_source_source_ready 
        = vlSelf->main_core_reg_rx_conv_source_ready;
    vlSelf->main_core_reg_tx_conv_converter_last = vlSelf->main_core_reg_tx_conv_converter_mux;
    vlSelf->main_core_reg_tx_conv_converter_sink_first 
        = vlSelf->main_core_reg_tx_conv_sink_first;
    vlSelf->main_core_reg_tx_conv_converter_sink_last 
        = vlSelf->main_core_reg_tx_conv_sink_last;
    vlSelf->main_core_reg_tx_conv_converter_source_payload_valid_token_count 
        = vlSelf->main_core_reg_tx_conv_converter_mux;
    vlSelf->builder_csr_bankarray_csrbank1_config0_w 
        = vlSelf->main_hyperram_config_storage;
    vlSelf->builder_csr_bankarray_csrbank1_reg_control0_w 
        = vlSelf->main_hyperram_reg_control_storage;
    vlSelf->builder_csr_bankarray_csrbank1_reg_rdata_w 
        = vlSelf->main_hyperram_reg_rdata_status;
    vlSelf->builder_csr_bankarray_csrbank1_reg_wdata0_w 
        = vlSelf->main_hyperram_reg_wdata_storage;
    vlSelf->main_syncfifo1_fifo_in_first = vlSelf->main_hyperramsdrphy_source_first;
    vlSelf->main_syncfifo1_sink_first = vlSelf->main_hyperramsdrphy_source_first;
    vlSelf->builder_csr_bankarray_csrbank2_out0_w = vlSelf->main_leds_storage;
    vlSelf->main_rx_cdc_cdc_wrport_adr = (3U & (IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q_binary));
    vlSelf->builder_csr_bankarray_csrbank0_bus_errors_w 
        = vlSelf->main_soclinux_bus_errors;
    vlSelf->main_soclinux_bus_errors_status = vlSelf->main_soclinux_bus_errors;
    vlSelf->builder_csr_bankarray_csrbank4_master_cs0_w 
        = vlSelf->main_soclinux_master_cs_storage;
    vlSelf->main_soclinux_port_master_request = vlSelf->main_soclinux_master_cs_storage;
    vlSelf->builder_csr_bankarray_csrbank4_master_phyconfig0_w 
        = vlSelf->main_soclinux_master_phyconfig_storage;
    vlSelf->main_soclinux_master_len = (0xffU & vlSelf->main_soclinux_master_phyconfig_storage);
    vlSelf->main_soclinux_master_rx_fifo_source_source_first 
        = vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_first;
    vlSelf->main_soclinux_master_rx_fifo_source_source_last 
        = vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_last;
    vlSelf->main_soclinux_master_rxtx_w = vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_payload_data;
    vlSelf->main_soclinux_master_rx_fifo_source_source_payload_data 
        = vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_payload_data;
    vlSelf->main_soclinux_master_source_first = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_first;
    vlSelf->main_soclinux_port_master_user_port_sink_first 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_first;
    vlSelf->main_soclinux_port_master_internal_port_sink_first 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_first;
    vlSelf->main_soclinux_master_tx_fifo_source_source_first 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_first;
    vlSelf->main_soclinux_master_source_last = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_last;
    vlSelf->main_soclinux_port_master_user_port_sink_last 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_last;
    vlSelf->main_soclinux_port_master_internal_port_sink_last 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_last;
    vlSelf->main_soclinux_master_tx_fifo_source_source_last 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_last;
    vlSelf->main_soclinux_master_source_payload_data 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_data;
    vlSelf->main_soclinux_port_master_user_port_sink_payload_data 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_data;
    vlSelf->main_soclinux_port_master_internal_port_sink_payload_data 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_data;
    vlSelf->main_soclinux_master_tx_fifo_source_source_payload_data 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_data;
    vlSelf->main_soclinux_master_source_payload_len 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_len;
    vlSelf->main_soclinux_port_master_user_port_sink_payload_len 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_len;
    vlSelf->main_soclinux_port_master_internal_port_sink_payload_len 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_len;
    vlSelf->main_soclinux_master_tx_fifo_source_source_payload_len 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_len;
    vlSelf->main_soclinux_master_source_payload_mask 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_mask;
    vlSelf->main_soclinux_port_master_user_port_sink_payload_mask 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_mask;
    vlSelf->main_soclinux_port_master_internal_port_sink_payload_mask 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_mask;
    vlSelf->main_soclinux_master_tx_fifo_source_source_payload_mask 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_mask;
    vlSelf->main_soclinux_master_source_payload_width 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_width;
    vlSelf->main_soclinux_port_master_user_port_sink_payload_width 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_width;
    vlSelf->main_soclinux_port_master_internal_port_sink_payload_width 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_width;
    vlSelf->main_soclinux_master_tx_fifo_source_source_payload_width 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_width;
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_first 
        = vlSelf->main_soclinux_master_tx_fifo_sink_sink_first;
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_last 
        = vlSelf->main_soclinux_master_tx_fifo_sink_sink_last;
    vlSelf->main_soclinux_port_mmap_user_port_sink_first 
        = vlSelf->main_soclinux_mmap_source_first;
    vlSelf->main_soclinux_port_mmap_internal_port_sink_first 
        = vlSelf->main_soclinux_mmap_source_first;
    vlSelf->main_soclinux_port_mmap_user_port_sink_last 
        = vlSelf->main_soclinux_mmap_source_last;
    vlSelf->main_soclinux_port_mmap_internal_port_sink_last 
        = vlSelf->main_soclinux_mmap_source_last;
    vlSelf->builder_csr_bankarray_csrbank4_mmap_dummy_bits0_w 
        = vlSelf->main_soclinux_mmap_storage;
    vlSelf->main_soclinux_mmap_spi_dummy_bits = vlSelf->main_soclinux_mmap_storage;
    vlSelf->builder_csr_bankarray_csrbank0_reset0_w 
        = vlSelf->main_soclinux_reset_storage;
    vlSelf->main_soclinux_uart_uart_sink_first = vlSelf->main_soclinux_rx_source_first;
    vlSelf->main_soclinux_uart_uart_sink_last = vlSelf->main_soclinux_rx_source_last;
    vlSelf->main_soclinux_uart_rx_fifo_sink_first = vlSelf->main_soclinux_rx_source_first;
    vlSelf->main_soclinux_uart_rx_fifo_sink_last = vlSelf->main_soclinux_rx_source_last;
    vlSelf->main_soclinux_uart_rx_fifo_fifo_in_last 
        = vlSelf->main_soclinux_rx_source_last;
    vlSelf->main_soclinux_uart_rx_fifo_fifo_in_first 
        = vlSelf->main_soclinux_rx_source_first;
    vlSelf->main_soclinux_uart_uart_source_valid = vlSelf->main_soclinux_uart_tx_fifo_readable;
    vlSelf->main_soclinux_uart_tx_fifo_source_valid 
        = vlSelf->main_soclinux_uart_tx_fifo_readable;
    vlSelf->main_soclinux_uart_rx_fifo_source_valid 
        = vlSelf->main_soclinux_uart_rx_fifo_readable;
    vlSelf->main_soclinux_uart_rx_trigger = vlSelf->main_soclinux_uart_rx_fifo_readable;
    vlSelf->main_soclinux_uart_rx_status = vlSelf->main_soclinux_uart_rx_fifo_readable;
    vlSelf->main_soclinux_uart_rx0 = vlSelf->main_soclinux_uart_rx_fifo_readable;
    vlSelf->main_soclinux_uart_rx_pending = vlSelf->main_soclinux_uart_rx_fifo_readable;
    vlSelf->main_soclinux_uart_rx1 = vlSelf->main_soclinux_uart_rx_fifo_readable;
    vlSelf->builder_csr_bankarray_csrbank0_scratch0_w 
        = vlSelf->main_soclinux_scratch_storage;
    vlSelf->main_soclinux_crossbar_sink_first = vlSelf->main_soclinux_source_first;
    vlSelf->main_soclinux_crossbar_sink_last = vlSelf->main_soclinux_source_last;
    vlSelf->main_soclinux_source_payload_data = vlSelf->main_soclinux_sr_in;
    vlSelf->main_soclinux_crossbar_sink_payload_data 
        = vlSelf->main_soclinux_sr_in;
    vlSelf->main_soclinux_spi_clk_divisor = vlSelf->main_soclinux_storage;
    vlSelf->builder_csr_bankarray_csrbank4_phy_clk_divisor0_w 
        = vlSelf->main_soclinux_storage;
    vlSelf->builder_csr_bankarray_csrbank6_en0_w = vlSelf->main_soclinux_timer_en_storage;
    vlSelf->builder_csr_bankarray_csrbank6_ev_pending_w 
        = vlSelf->main_soclinux_timer_zero_pending;
    vlSelf->builder_csr_bankarray_csrbank6_ev_enable0_w 
        = vlSelf->main_soclinux_timer_enable_storage;
    vlSelf->main_soclinux_timer_zero1 = vlSelf->main_soclinux_timer_zero_pending;
    vlSelf->main_soclinux_timer_pending_status = vlSelf->main_soclinux_timer_zero_pending;
    vlSelf->main_soclinux_timer_zero2 = vlSelf->main_soclinux_timer_enable_storage;
    vlSelf->builder_csr_bankarray_csrbank6_load0_w 
        = vlSelf->main_soclinux_timer_load_storage;
    vlSelf->builder_csr_bankarray_csrbank6_reload0_w 
        = vlSelf->main_soclinux_timer_reload_storage;
    vlSelf->builder_csr_bankarray_csrbank6_update_value0_w 
        = vlSelf->main_soclinux_timer_update_value_storage;
    vlSelf->builder_csr_bankarray_csrbank6_value_w 
        = vlSelf->main_soclinux_timer_value_status;
    vlSelf->builder_csr_bankarray_csrbank7_ev_enable0_w 
        = vlSelf->main_soclinux_uart_enable_storage;
    vlSelf->main_soclinux_uart_rx_fifo_rdport_adr = vlSelf->main_soclinux_uart_rx_fifo_consume;
    vlSelf->main_soclinux_uart_tx_fifo_rdport_adr = vlSelf->main_soclinux_uart_tx_fifo_consume;
    vlSelf->main_syncfifo1_rdport_adr = vlSelf->main_syncfifo1_consume;
    vlSelf->main_tx_cdc_cdc_wrport_adr = (3U & (IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q_binary));
    vlSelf->soclinux_block2mem_source_source_first 
        = vlSelf->soclinux_block2mem_converter_source_first;
    vlSelf->soclinux_block2mem_wishbonedmawriter_sink_first 
        = vlSelf->soclinux_block2mem_converter_source_first;
    vlSelf->soclinux_block2mem_source_source_last = vlSelf->soclinux_block2mem_converter_source_last;
    vlSelf->soclinux_block2mem_source_source_payload_data 
        = vlSelf->soclinux_block2mem_converter_source_payload_data;
    vlSelf->soclinux_block2mem_converter_source_valid 
        = vlSelf->soclinux_block2mem_converter_strobe_all;
    vlSelf->soclinux_block2mem_converter_sink_valid 
        = vlSelf->soclinux_block2mem_fifo_readable;
    vlSelf->soclinux_block2mem_fifo_source_valid = vlSelf->soclinux_block2mem_fifo_readable;
    vlSelf->soclinux_block2mem_source_source_valid 
        = vlSelf->soclinux_block2mem_converter_strobe_all;
    vlSelf->soclinux_core_csrfield_done1 = vlSelf->soclinux_core_data_done;
    vlSelf->soclinux_data_done_trigger = vlSelf->soclinux_core_data_done;
    vlSelf->soclinux_core_csrfield_error1 = vlSelf->soclinux_core_data_error;
    vlSelf->soclinux_core_csrfield_timeout1 = vlSelf->soclinux_core_data_timeout;
    vlSelf->soclinux_core_csrfield_crc2 = vlSelf->soclinux_core_data_crc;
    vlSelf->soclinux_eventmanager_card_detect0 = vlSelf->soclinux_card_detect_status1;
    vlSelf->soclinux_eventmanager_card_detect1 = vlSelf->soclinux_card_detect_pending;
    vlSelf->soclinux_eventmanager_block2mem_dma0 = vlSelf->soclinux_block2mem_dma_status;
    vlSelf->soclinux_eventmanager_block2mem_dma1 = vlSelf->soclinux_block2mem_dma_pending;
    vlSelf->soclinux_eventmanager_mem2block_dma0 = vlSelf->soclinux_mem2block_dma_status;
    vlSelf->soclinux_eventmanager_mem2block_dma1 = vlSelf->soclinux_mem2block_dma_pending;
    vlSelf->soclinux_data_done_status = vlSelf->soclinux_core_data_done;
    vlSelf->soclinux_eventmanager_data_done0 = vlSelf->soclinux_core_data_done;
    vlSelf->soclinux_data_done_pending = vlSelf->soclinux_core_data_done;
    vlSelf->soclinux_eventmanager_data_done1 = vlSelf->soclinux_core_data_done;
    vlSelf->soclinux_block2mem_fifo_rdport_adr = vlSelf->soclinux_block2mem_fifo_consume;
    vlSelf->soclinux_block2mem_dma_trigger = vlSelf->soclinux_block2mem_irq;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base1_w 
        = (IData)((vlSelf->soclinux_block2mem_wishbonedmawriter_base_storage 
                   >> 0x20U));
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base0_w 
        = (IData)(vlSelf->soclinux_block2mem_wishbonedmawriter_base_storage);
    vlSelf->soclinux_block2mem_wishbonedmawriter_base0 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_base_storage;
    vlSelf->soclinux_block2mem_wishbonedmawriter_reset 
        = (1U & (~ (IData)(vlSelf->soclinux_block2mem_wishbonedmawriter_enable_storage)));
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_w 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_enable_storage;
    vlSelf->soclinux_block2mem_wishbonedmawriter_enable 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_enable_storage;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_length0_w 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_length_storage;
    vlSelf->soclinux_block2mem_wishbonedmawriter_length0 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_length_storage;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_loop0_w 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_loop_storage;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_offset_w 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_offset1;
    vlSelf->soclinux_block2mem_wishbonedmawriter_offset0 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_offset1;
    vlSelf->soclinux_block2mem_wishbonedmawriter_offset_status 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_offset1;
    vlSelf->soclinux_card_detect_trigger = vlSelf->soclinux_card_detect_irq;
    vlSelf->soclinux_clocker_half = (0x1ffU & (((IData)(1U) 
                                                + (IData)(vlSelf->soclinux_clocker_storage)) 
                                               >> 1U));
    vlSelf->builder_csr_bankarray_csrbank3_phy_clocker_divider0_w 
        = vlSelf->soclinux_clocker_storage;
    vlSelf->soclinux_cmdr_cmdr_buf_source_source_first 
        = vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_first;
    vlSelf->soclinux_cmdr_cmdr_source_first = vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_first;
    vlSelf->soclinux_cmdr_cmdr_buf_source_source_last 
        = vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_last;
    vlSelf->soclinux_cmdr_cmdr_source_last = vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_last;
    vlSelf->soclinux_cmdr_cmdr_buf_source_source_payload_data 
        = vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_payload_data;
    vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_sink_first 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_first;
    vlSelf->soclinux_cmdr_cmdr_converter_source_source_first 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_first;
    vlSelf->soclinux_cmdr_cmdr_buf_sink_sink_first 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_first;
    vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_sink_last 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_last;
    vlSelf->soclinux_cmdr_cmdr_converter_source_source_last 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_last;
    vlSelf->soclinux_cmdr_cmdr_buf_sink_sink_last = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_last;
    vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_sink_payload_data 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_payload_data;
    vlSelf->soclinux_cmdr_cmdr_converter_source_source_payload_data 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_payload_data;
    vlSelf->soclinux_cmdr_cmdr_buf_sink_sink_payload_data 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_payload_data;
    vlSelf->soclinux_cmdr_pads_in_pads_in_ready = vlSelf->soclinux_cmdr_cmdr_pads_in_ready;
    vlSelf->soclinux_cmdr_cmdr_pads_in_first = vlSelf->soclinux_cmdr_pads_in_pads_in_first;
    vlSelf->soclinux_cmdr_cmdr_pads_in_last = vlSelf->soclinux_cmdr_pads_in_pads_in_last;
    vlSelf->soclinux_cmdr_cmdr_pads_in_payload_clk 
        = vlSelf->soclinux_cmdr_pads_in_pads_in_payload_clk;
    vlSelf->soclinux_cmdr_cmdr_pads_in_payload_cmd_o 
        = vlSelf->soclinux_cmdr_pads_in_pads_in_payload_cmd_o;
    vlSelf->soclinux_cmdr_cmdr_pads_in_payload_cmd_oe 
        = vlSelf->soclinux_cmdr_pads_in_pads_in_payload_cmd_oe;
    vlSelf->soclinux_cmdr_cmdr_pads_in_payload_data_i_ce 
        = vlSelf->soclinux_cmdr_pads_in_pads_in_payload_data_i_ce;
    vlSelf->soclinux_cmdr_cmdr_pads_in_payload_data_o 
        = vlSelf->soclinux_cmdr_pads_in_pads_in_payload_data_o;
    vlSelf->soclinux_cmdr_cmdr_pads_in_payload_data_oe 
        = vlSelf->soclinux_cmdr_pads_in_pads_in_payload_data_oe;
    vlSelf->soclinux_dataw_crc16_crc0_crc = vlSelf->soclinux_dataw_crc16_crc00;
    vlSelf->soclinux_dataw_crc16_crc1_crc = vlSelf->soclinux_dataw_crc16_crc10;
    vlSelf->soclinux_dataw_crc16_crc2_crc = vlSelf->soclinux_dataw_crc16_crc20;
    vlSelf->soclinux_dataw_crc16_crc3_crc = vlSelf->soclinux_dataw_crc16_crc30;
    vlSelf->builder_csr_bankarray_csrbank3_phy_cmdr_timeout0_w 
        = vlSelf->soclinux_cmdr_timeout_storage;
    vlSelf->builder_csr_bankarray_csrbank3_core_block_count0_w 
        = vlSelf->soclinux_core_block_count_storage;
    vlSelf->builder_csr_bankarray_csrbank3_core_block_length0_w 
        = vlSelf->soclinux_core_block_length_storage;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_argument0_w 
        = vlSelf->soclinux_core_cmd_argument_storage;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_command0_w 
        = vlSelf->soclinux_core_cmd_command_storage;
    vlSelf->soclinux_cmd_done_trigger = vlSelf->soclinux_core_cmd_done;
    vlSelf->soclinux_cmd_done_status = vlSelf->soclinux_core_cmd_done;
    vlSelf->soclinux_cmd_done_pending = vlSelf->soclinux_core_cmd_done;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response3_w 
        = vlSelf->soclinux_core_cmd_response_status[3U];
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response2_w 
        = vlSelf->soclinux_core_cmd_response_status[2U];
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response1_w 
        = vlSelf->soclinux_core_cmd_response_status[1U];
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response0_w 
        = vlSelf->soclinux_core_cmd_response_status[0U];
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_send0_w 
        = vlSelf->soclinux_core_cmd_send_storage;
    vlSelf->soclinux_datar_datar_1x_buf_source_source_first 
        = vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_first;
    vlSelf->soclinux_datar_datar_1x_buf_source_source_last 
        = vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_last;
    vlSelf->soclinux_datar_datar_1x_buf_source_source_payload_data 
        = vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_payload_data;
    vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_sink_first 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_first;
    vlSelf->soclinux_datar_datar_1x_converter_source_source_first 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_first;
    vlSelf->soclinux_datar_datar_1x_buf_sink_sink_first 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_first;
    vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_sink_last 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_last;
    vlSelf->soclinux_datar_datar_1x_converter_source_source_last 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_last;
    vlSelf->soclinux_datar_datar_1x_buf_sink_sink_last 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_last;
    vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_sink_payload_data 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_payload_data;
    vlSelf->soclinux_datar_datar_1x_converter_source_source_payload_data 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_payload_data;
    vlSelf->soclinux_datar_datar_1x_buf_sink_sink_payload_data 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_payload_data;
    vlSelf->soclinux_datar_datar_4x_buf_source_source_first 
        = vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_first;
    vlSelf->soclinux_datar_datar_4x_buf_source_source_last 
        = vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_last;
    vlSelf->soclinux_datar_datar_4x_buf_source_source_payload_data 
        = vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_payload_data;
    vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_sink_first 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_first;
    vlSelf->soclinux_datar_datar_4x_converter_source_source_first 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_first;
    vlSelf->soclinux_datar_datar_4x_buf_sink_sink_first 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_first;
    vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_sink_last 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_last;
    vlSelf->soclinux_datar_datar_4x_converter_source_source_last 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_last;
    vlSelf->soclinux_datar_datar_4x_buf_sink_sink_last 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_last;
    vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_sink_payload_data 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_payload_data;
    vlSelf->soclinux_datar_datar_4x_converter_source_source_payload_data 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_payload_data;
    vlSelf->soclinux_datar_datar_4x_buf_sink_sink_payload_data 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_payload_data;
    vlSelf->soclinux_datar_crc16_reset = vlSelf->soclinux_datar_datar_reset;
    vlSelf->soclinux_datar_crc16_crc0_reset = vlSelf->soclinux_datar_datar_reset;
    vlSelf->soclinux_datar_crc16_crc1_reset = vlSelf->soclinux_datar_datar_reset;
    vlSelf->soclinux_datar_crc16_crc2_reset = vlSelf->soclinux_datar_datar_reset;
    vlSelf->soclinux_datar_crc16_crc3_reset = vlSelf->soclinux_datar_datar_reset;
    vlSelf->soclinux_datar_datar_1x_reset = vlSelf->soclinux_datar_datar_reset;
    vlSelf->soclinux_datar_datar_4x_reset = vlSelf->soclinux_datar_datar_reset;
    vlSelf->soclinux_datar_datar_1x_pads_in_first = vlSelf->soclinux_datar_pads_in_pads_in_first;
    vlSelf->soclinux_datar_datar_4x_pads_in_first = vlSelf->soclinux_datar_pads_in_pads_in_first;
    vlSelf->soclinux_datar_datar_1x_pads_in_last = vlSelf->soclinux_datar_pads_in_pads_in_last;
    vlSelf->soclinux_datar_datar_4x_pads_in_last = vlSelf->soclinux_datar_pads_in_pads_in_last;
    vlSelf->soclinux_datar_datar_1x_pads_in_payload_clk 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_clk;
    vlSelf->soclinux_datar_datar_4x_pads_in_payload_clk 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_clk;
    vlSelf->soclinux_datar_datar_1x_pads_in_payload_cmd_o 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_cmd_o;
    vlSelf->soclinux_datar_datar_4x_pads_in_payload_cmd_o 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_cmd_o;
    vlSelf->soclinux_datar_datar_1x_pads_in_payload_cmd_oe 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_cmd_oe;
    vlSelf->soclinux_datar_datar_4x_pads_in_payload_cmd_oe 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_cmd_oe;
    vlSelf->soclinux_datar_datar_1x_pads_in_payload_data_i_ce 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_data_i_ce;
    vlSelf->soclinux_datar_datar_4x_pads_in_payload_data_i_ce 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_data_i_ce;
    vlSelf->soclinux_datar_datar_1x_pads_in_payload_data_o 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_data_o;
    vlSelf->soclinux_datar_datar_4x_pads_in_payload_data_o 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_data_o;
    vlSelf->soclinux_datar_datar_1x_pads_in_payload_data_oe 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_data_oe;
    vlSelf->soclinux_datar_datar_4x_pads_in_payload_data_oe 
        = vlSelf->soclinux_datar_pads_in_pads_in_payload_data_oe;
    vlSelf->builder_csr_bankarray_csrbank3_phy_datar_timeout0_w 
        = vlSelf->soclinux_datar_timeout_storage;
    vlSelf->soclinux_dataw_accepted0 = vlSelf->soclinux_dataw_accepted1;
    vlSelf->soclinux_dataw_crc_error0 = vlSelf->soclinux_dataw_crc_error1;
    vlSelf->soclinux_dataw_write_error0 = vlSelf->soclinux_dataw_write_error1;
    vlSelf->soclinux_dataw_crc_buf_source_source_first 
        = vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_first;
    vlSelf->soclinux_dataw_crc_source_first = vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_first;
    vlSelf->soclinux_dataw_crc_buf_source_source_last 
        = vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_last;
    vlSelf->soclinux_dataw_crc_source_last = vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_last;
    vlSelf->soclinux_dataw_crc_buf_source_source_payload_data 
        = vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_payload_data;
    vlSelf->soclinux_dataw_crc_buf_pipe_valid_sink_first 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_first;
    vlSelf->soclinux_dataw_crc_converter_source_source_first 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_first;
    vlSelf->soclinux_dataw_crc_buf_sink_sink_first 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_first;
    vlSelf->soclinux_dataw_crc_buf_pipe_valid_sink_last 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_last;
    vlSelf->soclinux_dataw_crc_converter_source_source_last 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_last;
    vlSelf->soclinux_dataw_crc_buf_sink_sink_last = vlSelf->soclinux_dataw_crc_converter_converter_source_last;
    vlSelf->soclinux_dataw_crc_buf_pipe_valid_sink_payload_data 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_payload_data;
    vlSelf->soclinux_dataw_crc_converter_source_source_payload_data 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_payload_data;
    vlSelf->soclinux_dataw_crc_buf_sink_sink_payload_data 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_payload_data;
    vlSelf->soclinux_dataw_crc_pads_in_first = vlSelf->soclinux_dataw_pads_in_pads_in_first;
    vlSelf->soclinux_dataw_crc_pads_in_last = vlSelf->soclinux_dataw_pads_in_pads_in_last;
    vlSelf->soclinux_dataw_crc_pads_in_payload_clk 
        = vlSelf->soclinux_dataw_pads_in_pads_in_payload_clk;
    vlSelf->soclinux_dataw_crc_pads_in_payload_cmd_o 
        = vlSelf->soclinux_dataw_pads_in_pads_in_payload_cmd_o;
    vlSelf->soclinux_dataw_crc_pads_in_payload_cmd_oe 
        = vlSelf->soclinux_dataw_pads_in_pads_in_payload_cmd_oe;
    vlSelf->soclinux_dataw_crc_pads_in_payload_data_i_ce 
        = vlSelf->soclinux_dataw_pads_in_pads_in_payload_data_i_ce;
    vlSelf->soclinux_dataw_crc_pads_in_payload_data_o 
        = vlSelf->soclinux_dataw_pads_in_pads_in_payload_data_o;
    vlSelf->soclinux_dataw_crc_pads_in_payload_data_oe 
        = vlSelf->soclinux_dataw_pads_in_pads_in_payload_data_oe;
    vlSelf->soclinux_dataw_crc_pads_in_ready = vlSelf->soclinux_dataw_pads_in_pads_in_ready;
    vlSelf->builder_csr_bankarray_csrbank5_edge0_w 
        = vlSelf->soclinux_edge_storage;
    vlSelf->builder_csr_bankarray_csrbank5_ev_enable0_w 
        = vlSelf->soclinux_enable_storage;
    vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_w 
        = vlSelf->soclinux_eventmanager_enable_storage;
    vlSelf->soclinux_i01 = vlSelf->soclinux_eventsourcepulse0_pending;
    vlSelf->soclinux_i11 = vlSelf->soclinux_eventsourcepulse1_pending;
    vlSelf->soclinux_i21 = vlSelf->soclinux_eventsourcepulse2_pending;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base1_w 
        = (IData)((vlSelf->soclinux_mem2block_dma_base_storage 
                   >> 0x20U));
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base0_w 
        = (IData)(vlSelf->soclinux_mem2block_dma_base_storage);
    vlSelf->soclinux_mem2block_dma_base0 = vlSelf->soclinux_mem2block_dma_base_storage;
    vlSelf->soclinux_mem2block_dma_reset = (1U & (~ (IData)(vlSelf->soclinux_mem2block_dma_enable_storage)));
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_enable0_w 
        = vlSelf->soclinux_mem2block_dma_enable_storage;
    vlSelf->soclinux_mem2block_dma_enable = vlSelf->soclinux_mem2block_dma_enable_storage;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_length0_w 
        = vlSelf->soclinux_mem2block_dma_length_storage;
    vlSelf->soclinux_mem2block_dma_length0 = vlSelf->soclinux_mem2block_dma_length_storage;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_loop0_w 
        = vlSelf->soclinux_mem2block_dma_loop_storage;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_offset_w 
        = vlSelf->soclinux_mem2block_dma_offset1;
    vlSelf->soclinux_mem2block_dma_offset0 = vlSelf->soclinux_mem2block_dma_offset1;
    vlSelf->soclinux_mem2block_dma_offset_status = vlSelf->soclinux_mem2block_dma_offset1;
    vlSelf->soclinux_mem2block_fifo_rdport_adr = vlSelf->soclinux_mem2block_fifo_consume;
    vlSelf->soclinux_mem2block_dma_trigger = vlSelf->soclinux_mem2block_irq;
    vlSelf->builder_csr_bankarray_csrbank5_mode0_w 
        = vlSelf->soclinux_mode_storage;
    vlSelf->builder_csr_bankarray_csrbank3_phy_settings0_w 
        = vlSelf->soclinux_settings_storage;
    vlSelf->soclinux_data_width1 = vlSelf->soclinux_settings_storage;
    vlSelf->main_soclinux_soclinux_dat_r = vlSelf->rom_dat0;
    vlSelf->spi_wb__DOT__tx_cpu_rdata = vlSelf->spi_wb__DOT__u_tx_ram__DOT__a_rdata_o;
    vlSelf->spi_wb__DOT__rx_cpu_rdata = vlSelf->spi_wb__DOT__u_rx_ram__DOT__a_rdata_o;
    vlSelf->main_soclinux_uart_tx_fifo_syncfifo_dout 
        = vlSelf->storage_dat1;
    vlSelf->main_soclinux_uart_tx_fifo_rdport_dat_r 
        = vlSelf->storage_dat1;
    vlSelf->main_rx_cdc_cdc_asyncfifo_dout = vlSelf->storage_5_dat1;
    vlSelf->main_rx_cdc_cdc_rdport_dat_r = vlSelf->storage_5_dat1;
    vlSelf->soclinux_mem2block_fifo_syncfifo_dout = vlSelf->storage_8_dat1;
    vlSelf->soclinux_mem2block_fifo_rdport_dat_r = vlSelf->storage_8_dat1;
    vlSelf->soclinux_i00 = vlSelf->soclinux_eventsourcepulse0_status;
    vlSelf->soclinux_i10 = vlSelf->soclinux_eventsourcepulse1_status;
    vlSelf->soclinux_i20 = vlSelf->soclinux_eventsourcepulse2_status;
    vlSelf->IDDR__DOT__Q1 = vlSelf->IDDR__DOT__q1_reg;
    vlSelf->IDDR_1__DOT__Q1 = vlSelf->IDDR_1__DOT__q1_reg;
    vlSelf->IDDR_2__DOT__Q1 = vlSelf->IDDR_2__DOT__q1_reg;
    vlSelf->IDDR_3__DOT__Q1 = vlSelf->IDDR_3__DOT__q1_reg;
    vlSelf->soclinux_block2mem_fifo_syncfifo_dout = vlSelf->storage_6_dat1;
    vlSelf->soclinux_block2mem_fifo_rdport_dat_r = vlSelf->storage_6_dat1;
    vlSelf->main_soclinux_uart_rx_fifo_syncfifo_dout 
        = vlSelf->storage_1_dat1;
    vlSelf->main_soclinux_uart_rx_fifo_rdport_dat_r 
        = vlSelf->storage_1_dat1;
    vlSelf->sys2x_rst = vlSelf->FDPE_3__DOT__Q;
    vlSelf->main_soclinux_uart_tx_fifo_wrport_dat_r 
        = vlSelf->storage_dat0;
    vlSelf->main_soclinux_uart_rx_fifo_wrport_dat_r 
        = vlSelf->storage_1_dat0;
    vlSelf->main_syncfifo0_wrport_dat_w = vlSelf->storage_4_dat1;
    vlSelf->main_syncfifo0_syncfifo0_din = vlSelf->storage_4_dat1;
    vlSelf->main_tx_cdc_cdc_asyncfifo_dout = vlSelf->storage_4_dat1;
    vlSelf->main_tx_cdc_cdc_rdport_dat_r = vlSelf->storage_4_dat1;
    vlSelf->main_syncfifo0_wrport_dat_r = vlSelf->storage_2_dat0;
    vlSelf->main_syncfifo1_wrport_dat_r = vlSelf->storage_3_dat0;
    vlSelf->main_tx_cdc_cdc_wrport_dat_r = vlSelf->storage_4_dat0;
    vlSelf->main_rx_cdc_cdc_wrport_dat_r = vlSelf->storage_5_dat0;
    vlSelf->soclinux_block2mem_fifo_wrport_dat_r = vlSelf->storage_6_dat0;
    vlSelf->soclinux_mem2block_dma_fifo_wrport_dat_r 
        = vlSelf->storage_7_dat0;
    vlSelf->soclinux_mem2block_fifo_wrport_dat_r = vlSelf->storage_8_dat0;
    vlSelf->ODDR_11__DOT__Q = vlSelf->ODDR_11__DOT__q_reg;
    vlSelf->ODDR_12__DOT__Q = vlSelf->ODDR_12__DOT__q_reg;
    vlSelf->ODDR_13__DOT__Q = vlSelf->ODDR_13__DOT__q_reg;
    vlSelf->ODDR_14__DOT__Q = vlSelf->ODDR_14__DOT__q_reg;
    vlSelf->ODDR_15__DOT__Q = vlSelf->ODDR_15__DOT__q_reg;
    vlSelf->ODDR_16__DOT__Q = vlSelf->ODDR_16__DOT__q_reg;
    vlSelf->ODDR_17__DOT__Q = vlSelf->ODDR_17__DOT__q_reg;
    vlSelf->ODDR_18__DOT__Q = vlSelf->ODDR_18__DOT__q_reg;
    vlSelf->ODDR_19__DOT__Q = vlSelf->ODDR_19__DOT__q_reg;
    vlSelf->ODDR_20__DOT__Q = vlSelf->ODDR_20__DOT__q_reg;
    vlSelf->ODDR_3__DOT__Q = vlSelf->ODDR_3__DOT__q_reg;
    vlSelf->ODDR_4__DOT__Q = vlSelf->ODDR_4__DOT__q_reg;
    vlSelf->ODDR_5__DOT__Q = vlSelf->ODDR_5__DOT__q_reg;
    vlSelf->ODDR_6__DOT__Q = vlSelf->ODDR_6__DOT__q_reg;
    vlSelf->ODDR_7__DOT__Q = vlSelf->ODDR_7__DOT__q_reg;
    vlSelf->ODDR_8__DOT__Q = vlSelf->ODDR_8__DOT__q_reg;
    vlSelf->ODDR_9__DOT__Q = vlSelf->ODDR_9__DOT__q_reg;
    vlSelf->ODDR_10__DOT__Q = vlSelf->ODDR_10__DOT__q_reg;
    vlSelf->main_crg_locked = vlSelf->PLLE2_ADV__DOT__locked_reg;
    vlSelf->PLLE2_ADV__DOT__LOCKED = vlSelf->PLLE2_ADV__DOT__locked_reg;
    vlSelf->IDDR__DOT__Q2 = vlSelf->IDDR__DOT__q2_reg;
    vlSelf->IDDR_1__DOT__Q2 = vlSelf->IDDR_1__DOT__q2_reg;
    vlSelf->IDDR_2__DOT__Q2 = vlSelf->IDDR_2__DOT__q2_reg;
    vlSelf->IDDR_3__DOT__Q2 = vlSelf->IDDR_3__DOT__q2_reg;
    vlSelf->IDDR_5__DOT__Q2 = vlSelf->IDDR_5__DOT__q2_reg;
    vlSelf->IDDR_6__DOT__Q2 = vlSelf->IDDR_6__DOT__q2_reg;
    vlSelf->IDDR_7__DOT__Q2 = vlSelf->IDDR_7__DOT__q2_reg;
    vlSelf->IDDR_8__DOT__Q2 = vlSelf->IDDR_8__DOT__q2_reg;
    vlSelf->spi_wb__DOT__buf_byte_lane = (3U & (IData)(vlSelf->spi_wb__DOT__buf_byte_addr));
    vlSelf->spi_wb__DOT__spi_data_out_valid = vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_o 
        = vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_q;
    vlSelf->spi_wb__DOT__rx_bram_unused_rdata = vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_rdata_o;
    vlSelf->spi_wb__DOT__unused_rx_bram = (0U != vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_rdata_o);
    vlSelf->IDDR_4__DOT__Q2 = vlSelf->IDDR_4__DOT__q2_reg;
    vlSelf->builder_impl1 = vlSelf->IDDR_4__DOT__q2_reg;
    vlSelf->main_soclinux_uart_tx_clear = 0U;
    if (((IData)(vlSelf->main_soclinux_uart_pending_re) 
         & (IData)(vlSelf->main_soclinux_uart_pending_r))) {
        vlSelf->main_soclinux_uart_tx_clear = 1U;
    }
    vlSelf->main_soclinux_tx_count_builder_rs232phytx_next_value_ce0 = 0U;
    vlSelf->main_soclinux_rx_count_builder_rs232phyrx_next_value_ce0 = 0U;
    vlSelf->main_soclinux_rx_data_builder_rs232phyrx_next_value_ce1 = 0U;
    vlSelf->main_soclinux_uart_tx_fifo_wrport_adr = 0U;
    vlSelf->main_soclinux_uart_tx_fifo_wrport_adr = 
        (0xfU & ((IData)(vlSelf->main_soclinux_uart_tx_fifo_replace)
                  ? ((IData)(vlSelf->main_soclinux_uart_tx_fifo_produce) 
                     - (IData)(1U)) : (IData)(vlSelf->main_soclinux_uart_tx_fifo_produce)));
    vlSelf->main_soclinux_uart_rx_fifo_wrport_adr = 0U;
    vlSelf->main_soclinux_uart_rx_fifo_wrport_adr = 
        (0xfU & ((IData)(vlSelf->main_soclinux_uart_rx_fifo_replace)
                  ? ((IData)(vlSelf->main_soclinux_uart_rx_fifo_produce) 
                     - (IData)(1U)) : (IData)(vlSelf->main_soclinux_uart_rx_fifo_produce)));
    vlSelf->main_soclinux_timer_zero_clear = 0U;
    if (((IData)(vlSelf->main_soclinux_timer_pending_re) 
         & (IData)(vlSelf->main_soclinux_timer_pending_r))) {
        vlSelf->main_soclinux_timer_zero_clear = 1U;
    }
    vlSelf->main_syncfifo0_wrport_adr = 0U;
    vlSelf->main_syncfifo0_wrport_adr = (3U & ((IData)(vlSelf->main_syncfifo0_replace)
                                                ? ((IData)(vlSelf->main_syncfifo0_produce) 
                                                   - (IData)(1U))
                                                : (IData)(vlSelf->main_syncfifo0_produce)));
    vlSelf->main_syncfifo1_wrport_adr = 0U;
    vlSelf->main_syncfifo1_wrport_adr = (3U & ((IData)(vlSelf->main_syncfifo1_replace)
                                                ? ((IData)(vlSelf->main_syncfifo1_produce) 
                                                   - (IData)(1U))
                                                : (IData)(vlSelf->main_syncfifo1_produce)));
    vlSelf->main_core_latency_x2_main_next_value_ce0 = 0U;
    vlSelf->main_core_latency_x2_main_next_value0 = 0U;
    vlSelf->soclinux_datar_pads_in_pads_in_ready = 0U;
    vlSelf->soclinux_datar_pads_in_pads_in_ready = vlSelf->soclinux_datar_datar_1x_pads_in_ready;
    vlSelf->soclinux_datar_pads_in_pads_in_ready = vlSelf->soclinux_datar_datar_4x_pads_in_ready;
    vlSelf->soclinux_core_data_done_builder_sdcore_next_value_ce1 = 0U;
    vlSelf->soclinux_core_data_done_builder_sdcore_next_value1 = 0U;
    vlSelf->soclinux_core_cmd_error_builder_sdcore_next_value4 = 0U;
    vlSelf->soclinux_core_cmd_error_builder_sdcore_next_value_ce4 = 0U;
    vlSelf->soclinux_block2mem_fifo_wrport_adr = 0U;
    vlSelf->soclinux_block2mem_fifo_wrport_adr = (0x1ffU 
                                                  & ((IData)(vlSelf->soclinux_block2mem_fifo_replace)
                                                      ? 
                                                     ((IData)(vlSelf->soclinux_block2mem_fifo_produce) 
                                                      - (IData)(1U))
                                                      : (IData)(vlSelf->soclinux_block2mem_fifo_produce)));
    vlSelf->soclinux_mem2block_dma_fifo_wrport_adr = 0U;
    vlSelf->soclinux_mem2block_dma_fifo_wrport_adr 
        = (0xfU & ((IData)(vlSelf->soclinux_mem2block_dma_fifo_replace)
                    ? ((IData)(vlSelf->soclinux_mem2block_dma_fifo_produce) 
                       - (IData)(1U)) : (IData)(vlSelf->soclinux_mem2block_dma_fifo_produce)));
    vlSelf->soclinux_mem2block_fifo_wrport_adr = 0U;
    vlSelf->soclinux_mem2block_fifo_wrport_adr = (0x1ffU 
                                                  & ((IData)(vlSelf->soclinux_mem2block_fifo_replace)
                                                      ? 
                                                     ((IData)(vlSelf->soclinux_mem2block_fifo_produce) 
                                                      - (IData)(1U))
                                                      : (IData)(vlSelf->soclinux_mem2block_fifo_produce)));
    vlSelf->soclinux_card_detect_clear = 0U;
    if (((IData)(vlSelf->soclinux_eventmanager_pending_re) 
         & (IData)(vlSelf->soclinux_eventmanager_pending_r))) {
        vlSelf->soclinux_card_detect_clear = 1U;
    }
    vlSelf->soclinux_block2mem_dma_clear = 0U;
    if (((IData)(vlSelf->soclinux_eventmanager_pending_re) 
         & ((IData)(vlSelf->soclinux_eventmanager_pending_r) 
            >> 1U))) {
        vlSelf->soclinux_block2mem_dma_clear = 1U;
    }
    vlSelf->soclinux_mem2block_dma_clear = 0U;
    if (((IData)(vlSelf->soclinux_eventmanager_pending_re) 
         & ((IData)(vlSelf->soclinux_eventmanager_pending_r) 
            >> 2U))) {
        vlSelf->soclinux_mem2block_dma_clear = 1U;
    }
    vlSelf->soclinux_data_done_clear = 0U;
    if (((IData)(vlSelf->soclinux_eventmanager_pending_re) 
         & ((IData)(vlSelf->soclinux_eventmanager_pending_r) 
            >> 3U))) {
        vlSelf->soclinux_data_done_clear = 1U;
    }
    vlSelf->soclinux_cmd_done_clear = 0U;
    if (((IData)(vlSelf->soclinux_eventmanager_pending_re) 
         & ((IData)(vlSelf->soclinux_eventmanager_pending_r) 
            >> 4U))) {
        vlSelf->soclinux_cmd_done_clear = 1U;
    }
    vlSelf->soclinux_eventsourcepulse0_clear = 0U;
    if (((IData)(vlSelf->soclinux_pending_re) & (IData)(vlSelf->soclinux_pending_r))) {
        vlSelf->soclinux_eventsourcepulse0_clear = 1U;
    }
    vlSelf->soclinux_eventsourcepulse1_clear = 0U;
    if (((IData)(vlSelf->soclinux_pending_re) & ((IData)(vlSelf->soclinux_pending_r) 
                                                 >> 1U))) {
        vlSelf->soclinux_eventsourcepulse1_clear = 1U;
    }
    vlSelf->soclinux_eventsourcepulse2_clear = 0U;
    if (((IData)(vlSelf->soclinux_pending_re) & ((IData)(vlSelf->soclinux_pending_r) 
                                                 >> 2U))) {
        vlSelf->soclinux_eventsourcepulse2_clear = 1U;
    }
    vlSelf->main_syncfifo0_syncfifo0_dout = vlSelf->storage_2
        [vlSelf->main_syncfifo0_consume];
    vlSelf->main_syncfifo0_rdport_dat_r = vlSelf->storage_2
        [vlSelf->main_syncfifo0_consume];
    vlSelf->soclinux_mem2block_dma_fifo_syncfifo_dout 
        = vlSelf->storage_7[vlSelf->soclinux_mem2block_dma_fifo_consume];
    vlSelf->soclinux_mem2block_dma_fifo_rdport_dat_r 
        = vlSelf->storage_7[vlSelf->soclinux_mem2block_dma_fifo_consume];
    vlSelf->soclinux_mem2block_fifo_level1 = (0x3ffU 
                                              & ((IData)(vlSelf->soclinux_mem2block_fifo_level0) 
                                                 + (IData)(vlSelf->soclinux_mem2block_fifo_readable)));
    vlSelf->main_soclinux_uart_tx_fifo_level1 = (0x1fU 
                                                 & ((IData)(vlSelf->main_soclinux_uart_tx_fifo_level0) 
                                                    + (IData)(vlSelf->main_soclinux_uart_tx_fifo_readable)));
    vlSelf->main_soclinux_uart_rx_fifo_level1 = (0x1fU 
                                                 & ((IData)(vlSelf->main_soclinux_uart_rx_fifo_level0) 
                                                    + (IData)(vlSelf->main_soclinux_uart_rx_fifo_readable)));
    vlSelf->main_rx_cdc_cdc_wrport_dat_w = vlSelf->storage_3
        [vlSelf->main_syncfifo1_consume];
    vlSelf->main_syncfifo1_syncfifo1_dout = vlSelf->storage_3
        [vlSelf->main_syncfifo1_consume];
    vlSelf->main_syncfifo1_rdport_dat_r = vlSelf->storage_3
        [vlSelf->main_syncfifo1_consume];
    vlSelf->main_rx_cdc_cdc_asyncfifo_din = vlSelf->storage_3
        [vlSelf->main_syncfifo1_consume];
    vlSelf->soclinux_block2mem_fifo_level1 = (0x3ffU 
                                              & ((IData)(vlSelf->soclinux_block2mem_fifo_level0) 
                                                 + (IData)(vlSelf->soclinux_block2mem_fifo_readable)));
    vlSelf->main_soclinux_tx_count_builder_rs232phytx_next_value0 = 0U;
    vlSelf->main_soclinux_rx_count_builder_rs232phyrx_next_value0 = 0U;
    vlSelf->soclinux_cmdr_timeout_builder_sdphycmdr_next_value0 = 0U;
    vlSelf->spi_wb__DOT__rst_ni = (1U & (~ (IData)(vlSelf->FDPE_1__DOT__Q)));
    vlSelf->spi_wb__DOT__rx_b_be = 0U;
    vlSelf->hyperram0_clk = vlSelf->builder_impl_xilinxmultiregimpl3_xilinxmultiregimpl32;
    vlSelf->hyperram0_cs_n = vlSelf->builder_impl_xilinxmultiregimpl1;
    vlSelf->hyperram0_rst_n = vlSelf->builder_impl_xilinxmultiregimpl2;
    vlSelf->sdcard_clk = vlSelf->ODDR_2__DOT__q_reg;
    vlSelf->spi_eth_clk = vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_q;
    vlSelf->spi_eth_cs_n = vlSelf->spi_wb__DOT__cs_reg;
    vlSelf->spiflash4x_clk = vlSelf->ODDR__DOT__q_reg;
    vlSelf->spiflash4x_cs_n = vlSelf->ODDR_1__DOT__q_reg;
    vlSelf->soclinux_datar_datar_1x_start = (1U & (~ (IData)(vlSelf->IDDR_5__DOT__q1_reg)));
    vlSelf->main_leds_done = (0U == vlSelf->main_leds_count);
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_len 
        = (0x3fU & vlSelf->main_soclinux_master_phyconfig_storage);
    vlSelf->sys_rst = vlSelf->FDPE_1__DOT__Q;
    vlSelf->main_soclinux_dq_i = (((IData)(vlSelf->IDDR_3__DOT__q1_reg) 
                                   << 3U) | (((IData)(vlSelf->IDDR_2__DOT__q1_reg) 
                                              << 2U) 
                                             | (((IData)(vlSelf->IDDR_1__DOT__q1_reg) 
                                                 << 1U) 
                                                | (IData)(vlSelf->IDDR__DOT__q1_reg))));
    vlSelf->main_soclinux_uart_rx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSelf->storage_1_dat1) >> 9U));
    vlSelf->main_soclinux_uart_rx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSelf->storage_1_dat1) >> 8U));
    vlSelf->builder_impl_xilinxsdrtristateimpl1___05Fo 
        = vlSelf->ODDR_11__DOT__q_reg;
    vlSelf->builder_impl_xilinxsdrtristateimpl1_oe_n 
        = vlSelf->ODDR_12__DOT__q_reg;
    vlSelf->builder_impl_xilinxsdrtristateimpl2___05Fo 
        = (((IData)(vlSelf->ODDR_16__DOT__q_reg) << 3U) 
           | (((IData)(vlSelf->ODDR_15__DOT__q_reg) 
               << 2U) | (((IData)(vlSelf->ODDR_14__DOT__q_reg) 
                          << 1U) | (IData)(vlSelf->ODDR_13__DOT__q_reg))));
    vlSelf->builder_impl_xilinxsdrtristateimpl2_oe_n 
        = (((IData)(vlSelf->ODDR_20__DOT__q_reg) << 3U) 
           | (((IData)(vlSelf->ODDR_19__DOT__q_reg) 
               << 2U) | (((IData)(vlSelf->ODDR_18__DOT__q_reg) 
                          << 1U) | (IData)(vlSelf->ODDR_17__DOT__q_reg))));
    vlSelf->builder_impl_xilinxsdrtristateimpl0___05Fo 
        = (((IData)(vlSelf->ODDR_6__DOT__q_reg) << 3U) 
           | (((IData)(vlSelf->ODDR_5__DOT__q_reg) 
               << 2U) | (((IData)(vlSelf->ODDR_4__DOT__q_reg) 
                          << 1U) | (IData)(vlSelf->ODDR_3__DOT__q_reg))));
    vlSelf->builder_impl_xilinxsdrtristateimpl0_oe_n 
        = (((IData)(vlSelf->ODDR_10__DOT__q_reg) << 3U) 
           | (((IData)(vlSelf->ODDR_9__DOT__q_reg) 
               << 2U) | (((IData)(vlSelf->ODDR_8__DOT__q_reg) 
                          << 1U) | (IData)(vlSelf->ODDR_7__DOT__q_reg))));
    vlSelf->builder_impl0 = (((IData)(vlSelf->IDDR_3__DOT__q2_reg) 
                              << 3U) | (((IData)(vlSelf->IDDR_2__DOT__q2_reg) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->IDDR_1__DOT__q2_reg) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->IDDR__DOT__q2_reg))));
    vlSelf->builder_impl2 = (((IData)(vlSelf->IDDR_8__DOT__q2_reg) 
                              << 3U) | (((IData)(vlSelf->IDDR_7__DOT__q2_reg) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->IDDR_6__DOT__q2_reg) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->IDDR_5__DOT__q2_reg))));
    vlSelf->spi_wb__DOT__tx_word_addr = (0x1ffU & ((IData)(vlSelf->spi_wb__DOT__buf_byte_addr) 
                                                   >> 2U));
    vlSelf->spi_wb__DOT__tx_b_req = vlSelf->spi_wb__DOT__tx_fetch_pending;
    vlSelf->spi_wb__DOT__rx_b_req = vlSelf->spi_wb__DOT__rx_wr_pending;
    vlSelf->spi_wb__DOT__rx_b_addr = (0x1ffU & ((IData)(vlSelf->spi_wb__DOT__rx_byte_addr) 
                                                >> 2U));
    vlSelf->builder_soclinux_reset0 = vlSelf->FDCE__DOT__Q;
    vlSelf->builder_soclinux_reset1 = vlSelf->FDCE_1__DOT__Q;
    vlSelf->builder_soclinux_reset2 = vlSelf->FDCE_2__DOT__Q;
    vlSelf->builder_soclinux_reset3 = vlSelf->FDCE_3__DOT__Q;
    vlSelf->builder_soclinux_reset4 = vlSelf->FDCE_4__DOT__Q;
    vlSelf->builder_soclinux_reset5 = vlSelf->FDCE_5__DOT__Q;
    vlSelf->builder_soclinux_reset6 = vlSelf->FDCE_6__DOT__Q;
    vlSelf->builder_soclinux_reset7 = vlSelf->FDCE_7__DOT__Q;
    vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0_rst_meta 
        = vlSelf->FDPE__DOT__Q;
    vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1_rst_meta 
        = vlSelf->FDPE_2__DOT__Q;
    vlSelf->hyperram_clk = 0U;
    vlSelf->hyperram_clk = (1U & ((2U & (IData)(vlSelf->main_hyperramsdrphy_phase))
                                   ? (~ (IData)(vlSelf->main_hyperramsdrphy_phase))
                                   : (IData)(vlSelf->main_hyperramsdrphy_phase)));
    vlSelf->main_hyperram_status_status = 4U;
    vlSelf->main_hyperram_status_status = (((IData)(vlSelf->main_hyperram_clk_ratio) 
                                            << 1U) 
                                           | (IData)(vlSelf->main_hyperram_latency_mode));
    vlSelf->spi_wb__DOT__rx_b_wdata = 0U;
    if ((2U & (IData)(vlSelf->spi_wb__DOT__rx_byte_addr))) {
        if ((1U & (IData)(vlSelf->spi_wb__DOT__rx_byte_addr))) {
            vlSelf->spi_wb__DOT__rx_b_be = 8U;
            vlSelf->spi_wb__DOT__rx_b_wdata = ((IData)(vlSelf->spi_wb__DOT__rx_byte_data) 
                                               << 0x18U);
        } else {
            vlSelf->spi_wb__DOT__rx_b_be = 4U;
            vlSelf->spi_wb__DOT__rx_b_wdata = ((IData)(vlSelf->spi_wb__DOT__rx_byte_data) 
                                               << 0x10U);
        }
    } else if ((1U & (IData)(vlSelf->spi_wb__DOT__rx_byte_addr))) {
        vlSelf->spi_wb__DOT__rx_b_be = 2U;
        vlSelf->spi_wb__DOT__rx_b_wdata = ((IData)(vlSelf->spi_wb__DOT__rx_byte_data) 
                                           << 8U);
    } else {
        vlSelf->spi_wb__DOT__rx_b_be = 1U;
        vlSelf->spi_wb__DOT__rx_b_wdata = vlSelf->spi_wb__DOT__rx_byte_data;
    }
    vlSelf->soclinux_dataw_status = 0U;
    vlSelf->soclinux_dataw_status = (((IData)(vlSelf->soclinux_dataw_write_error1) 
                                      << 2U) | (((IData)(vlSelf->soclinux_dataw_crc_error1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->soclinux_dataw_accepted1)));
    vlSelf->soclinux_status_status = 0U;
    vlSelf->soclinux_status_status = (((IData)(vlSelf->soclinux_eventsourcepulse2_status) 
                                       << 2U) | (((IData)(vlSelf->soclinux_eventsourcepulse1_status) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->soclinux_eventsourcepulse0_status)));
    __VdfgRegularize_h278c091a_11_2 = ((IData)(vlSelf->IDDR_5__DOT__q1_reg) 
                                       ^ ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                          >> 0xfU));
    __VdfgRegularize_h278c091a_11_6 = ((IData)(vlSelf->IDDR_6__DOT__q1_reg) 
                                       ^ ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                          >> 0xfU));
    __VdfgRegularize_h278c091a_11_10 = ((IData)(vlSelf->IDDR_7__DOT__q1_reg) 
                                        ^ ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                           >> 0xfU));
    __VdfgRegularize_h278c091a_11_12 = ((IData)(vlSelf->IDDR_8__DOT__q1_reg) 
                                        ^ ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                           >> 0xfU));
    vlSelf->main_soclinux_mmap_done = (0U == (IData)(vlSelf->main_soclinux_mmap_count));
    vlSelf->soclinux_datar_datar_1x_source_first = vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_first;
    vlSelf->soclinux_datar_datar_1x_source_last = vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_last;
    vlSelf->soclinux_datar_datar_4x_source_first = vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_first;
    vlSelf->soclinux_datar_datar_4x_source_last = vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_last;
    vlSelf->main_hyperram_done = 0U;
    vlSelf->soclinux_block2mem_wishbonedmawriter_done = 0U;
    if ((1U != (IData)(vlSelf->builder_soclinux_sdblock2memdma_state))) {
        if ((2U == (IData)(vlSelf->builder_soclinux_sdblock2memdma_state))) {
            vlSelf->soclinux_block2mem_wishbonedmawriter_done = 1U;
        }
    }
    vlSelf->soclinux_mem2block_dma_done = 0U;
    if ((1U != (IData)(vlSelf->builder_soclinux_sdmem2blockdma_state))) {
        if ((2U == (IData)(vlSelf->builder_soclinux_sdmem2blockdma_state))) {
            vlSelf->soclinux_mem2block_dma_done = 1U;
        }
    }
    vlSelf->soclinux_core_data_event_status = 0U;
    vlSelf->soclinux_core_data_event_status = (((IData)(vlSelf->soclinux_core_data_crc) 
                                                << 3U) 
                                               | (((IData)(vlSelf->soclinux_core_data_timeout) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->soclinux_core_data_error) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->soclinux_core_data_done))));
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_width 
        = (0xfU & (vlSelf->main_soclinux_master_phyconfig_storage 
                   >> 8U));
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_mask 
        = (0xffU & (vlSelf->main_soclinux_master_phyconfig_storage 
                    >> 0x10U));
    vlSelf->soclinux_block2mem_converter_sink_last 
        = (1U & ((IData)(vlSelf->storage_6_dat1) >> 9U));
    vlSelf->soclinux_block2mem_converter_sink_first 
        = (1U & ((IData)(vlSelf->storage_6_dat1) >> 8U));
    vlSelf->soclinux_block2mem_converter_sink_payload_data 
        = (0xffU & (IData)(vlSelf->storage_6_dat1));
    vlSelf->main_soclinux_uart_rxtx_w = (0xffU & (IData)(vlSelf->storage_1_dat1));
    vlSelf->main_hyperram_rst = 0U;
    if (vlSelf->main_hyperram_config_re) {
        vlSelf->main_hyperram_rst = (1U & (IData)(vlSelf->main_hyperram_config_storage));
    }
    vlSelf->main_hyperram_write = 0U;
    vlSelf->main_hyperram_read = 0U;
    if (vlSelf->main_hyperram_reg_control_re) {
        vlSelf->main_hyperram_write = (1U & (IData)(vlSelf->main_hyperram_reg_control_storage));
        vlSelf->main_hyperram_read = (1U & ((IData)(vlSelf->main_hyperram_reg_control_storage) 
                                            >> 1U));
    }
    vlSelf->main_hyperramsdrphy_sink_last = (1U & (
                                                   vlSelf->storage_2
                                                   [vlSelf->main_syncfifo0_consume] 
                                                   >> 0xfU));
    vlSelf->main_hyperramsdrphy_sink_first = (1U & 
                                              (vlSelf->storage_2
                                               [vlSelf->main_syncfifo0_consume] 
                                               >> 0xeU));
    vlSelf->main_hyperramsdrphy_sink_payload_dat_w 
        = (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
                 >> 1U));
    vlSelf->main_hyperramsdrphy_sink_payload_cmd = 
        (1U & vlSelf->storage_2[vlSelf->main_syncfifo0_consume]);
    vlSelf->main_core_cmd_tx_conv_converter_first = 
        (0U == (IData)(vlSelf->main_core_cmd_tx_conv_converter_mux));
    vlSelf->spi_eth_mosi = (1U & ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                                  >> 7U));
    vlSelf->soclinux_cmdr_cmdr_start = (1U & (~ (IData)(vlSelf->IDDR_4__DOT__q1_reg)));
    vlSelf->soclinux_core_csrfield_done0 = vlSelf->soclinux_core_cmd_done;
    vlSelf->soclinux_core_csrfield_error0 = vlSelf->soclinux_core_cmd_error;
    vlSelf->soclinux_core_csrfield_timeout0 = vlSelf->soclinux_core_cmd_timeout;
    vlSelf->main_soclinux_tx_sink_first = (1U & ((IData)(vlSelf->storage_dat1) 
                                                 >> 8U));
    vlSelf->main_soclinux_tx_sink_last = (1U & ((IData)(vlSelf->storage_dat1) 
                                                >> 9U));
    vlSelf->soclinux_mem2block_converter_converter_sink_payload_data 
        = (IData)(vlSelf->storage_7[vlSelf->soclinux_mem2block_dma_fifo_consume]);
    vlSelf->soclinux_eventmanager_cmd_done0 = vlSelf->soclinux_core_cmd_done;
    vlSelf->main_soclinux_cpu_rst = (1U & ((IData)(vlSelf->main_soclinux_reset_storage) 
                                           >> 1U));
    vlSelf->builder_soclinux_tx_mux_endpoint1_sink_first 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_first;
    vlSelf->builder_soclinux_tx_mux_endpoint1_sink_last 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_last;
    vlSelf->builder_soclinux_tx_mux_endpoint1_sink_payload_data 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_data;
    vlSelf->builder_soclinux_tx_mux_endpoint0_sink_first 
        = vlSelf->main_soclinux_mmap_source_first;
    vlSelf->builder_soclinux_tx_mux_endpoint0_sink_last 
        = vlSelf->main_soclinux_mmap_source_last;
    vlSelf->soclinux_dataw_crc16_reset = 0U;
    vlSelf->main_hyperramsdrphy_sink_payload_dq_oe 
        = (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
                 >> 0xbU));
    vlSelf->main_hyperramsdrphy_sink_payload_rwds = 
        (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
               >> 0xcU));
    vlSelf->main_hyperramsdrphy_sink_payload_rwds_oe 
        = (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
                 >> 0xdU));
    vlSelf->builder_csr_bankarray_csrbank6_ev_status_w 
        = (0U == vlSelf->main_soclinux_timer_value);
    vlSelf->main_syncfifo0_fifo_in_last = (1U & ((IData)(vlSelf->storage_4_dat1) 
                                                 >> 0xfU));
    vlSelf->main_syncfifo0_fifo_in_first = (1U & ((IData)(vlSelf->storage_4_dat1) 
                                                  >> 0xeU));
    vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe 
        = (1U & ((IData)(vlSelf->storage_4_dat1) >> 0xdU));
    vlSelf->main_syncfifo0_fifo_in_payload_rwds = (1U 
                                                   & ((IData)(vlSelf->storage_4_dat1) 
                                                      >> 0xcU));
    vlSelf->main_syncfifo0_fifo_in_payload_dq_oe = 
        (1U & ((IData)(vlSelf->storage_4_dat1) >> 0xbU));
    vlSelf->main_syncfifo0_fifo_in_payload_dq = (0xffU 
                                                 & ((IData)(vlSelf->storage_4_dat1) 
                                                    >> 3U));
    vlSelf->main_syncfifo0_fifo_in_payload_dat_r = 
        (1U & ((IData)(vlSelf->storage_4_dat1) >> 2U));
    vlSelf->main_syncfifo0_fifo_in_payload_dat_w = 
        (1U & ((IData)(vlSelf->storage_4_dat1) >> 1U));
    vlSelf->main_syncfifo0_fifo_in_payload_cmd = (1U 
                                                  & (IData)(vlSelf->storage_4_dat1));
    vlSelf->spi_wb__DOT__spi_cpol = (vlSelf->spi_wb__DOT__cfg_reg 
                                     >> 0x1fU);
    vlSelf->soclinux_init_pads_out_payload_cmd_o = 0U;
    vlSelf->soclinux_init_pads_out_payload_cmd_oe = 0U;
    vlSelf->soclinux_cmdr_pads_out_payload_cmd_oe = 0U;
    vlSelf->soclinux_cmdr_pads_out_payload_cmd_o = 0U;
    vlSelf->soclinux_dataw_pads_out_payload_cmd_oe = 0U;
    vlSelf->soclinux_dataw_pads_out_payload_cmd_o = 0U;
    vlSelf->main_core_reg_rx_conv_source_source_payload_data 
        = vlSelf->main_core_reg_rx_conv_converter_source_payload_data;
    vlSelf->main_rx_cdc_cdc_fifo_in_last = (1U & (vlSelf->storage_3
                                                  [vlSelf->main_syncfifo1_consume] 
                                                  >> 9U));
    vlSelf->main_rx_cdc_cdc_fifo_in_first = (1U & (
                                                   vlSelf->storage_3
                                                   [vlSelf->main_syncfifo1_consume] 
                                                   >> 8U));
    vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq = (0xffU 
                                                  & vlSelf->storage_3
                                                  [vlSelf->main_syncfifo1_consume]);
    vlSelf->soclinux_core_sink_first = (1U & ((IData)(vlSelf->storage_8_dat1) 
                                              >> 8U));
    vlSelf->main_hyperramsdrphy_source_last = 0U;
    vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0 
        = (1U & (~ (IData)(vlSelf->PLLE2_ADV__DOT__locked_reg)));
    vlSelf->builder_csr_bankarray_csrbank7_rxempty_w 
        = (1U & (~ (IData)(vlSelf->main_soclinux_uart_rx_fifo_readable)));
    vlSelf->builder_csr_bankarray_csrbank7_txempty_w 
        = (1U & (~ (IData)(vlSelf->main_soclinux_uart_tx_fifo_readable)));
    vlSelf->main_hyperramsdrphy_fall = (1U == (IData)(vlSelf->main_hyperramsdrphy_phase));
    vlSelf->builder_soclinux_tx_mux_endpoint1_sink_payload_mask 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_mask;
    vlSelf->main_soclinux_tx_sink_payload_data = (0xffU 
                                                  & (IData)(vlSelf->storage_dat1));
    vlSelf->main_hyperramsdrphy_source_ready = (4U 
                                                != (IData)(vlSelf->main_syncfifo1_level));
    vlSelf->soclinux_dataw_crc_converter_converter_source_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_valid)) 
                 | (IData)(vlSelf->soclinux_dataw_crc_source_ready)));
    vlSelf->soclinux_status = vlSelf->builder_impl_xilinxmultiregimpl29_xilinxmultiregimpl291;
    vlSelf->main_soclinux_uart_rx_clear = 0U;
    if (((IData)(vlSelf->main_soclinux_uart_pending_re) 
         & ((IData)(vlSelf->main_soclinux_uart_pending_r) 
            >> 1U))) {
        vlSelf->main_soclinux_uart_rx_clear = 1U;
    }
    vlSelf->soclinux_mem2block_converter_converter_source_payload_data = 0U;
    vlSelf->soclinux_mem2block_converter_converter_source_payload_data 
        = (0xffU & ((0U == (IData)(vlSelf->soclinux_mem2block_converter_converter_mux))
                     ? (IData)((vlSelf->storage_7[vlSelf->soclinux_mem2block_dma_fifo_consume] 
                                >> 0x18U)) : ((1U == (IData)(vlSelf->soclinux_mem2block_converter_converter_mux))
                                               ? (IData)(
                                                         (vlSelf->storage_7
                                                          [vlSelf->soclinux_mem2block_dma_fifo_consume] 
                                                          >> 0x10U))
                                               : ((2U 
                                                   == (IData)(vlSelf->soclinux_mem2block_converter_converter_mux))
                                                   ? (IData)(
                                                             (vlSelf->storage_7
                                                              [vlSelf->soclinux_mem2block_dma_fifo_consume] 
                                                              >> 8U))
                                                   : (IData)(
                                                             vlSelf->storage_7
                                                             [vlSelf->soclinux_mem2block_dma_fifo_consume])))));
    vlSelf->soclinux_mem2block_fifo_syncfifo_readable 
        = (0U != (IData)(vlSelf->soclinux_mem2block_fifo_level0));
    vlSelf->main_soclinux_uart_tx_fifo_syncfifo_readable 
        = (0U != (IData)(vlSelf->main_soclinux_uart_tx_fifo_level0));
    vlSelf->main_soclinux_uart_rx_fifo_syncfifo_readable 
        = (0U != (IData)(vlSelf->main_soclinux_uart_rx_fifo_level0));
    vlSelf->soclinux_block2mem_fifo_syncfifo_readable 
        = (0U != (IData)(vlSelf->soclinux_block2mem_fifo_level0));
    vlSelf->main_soclinux_rx_source_payload_data = 0U;
    vlSelf->main_soclinux_uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSelf->main_soclinux_uart_rx_fifo_level0));
    vlSelf->main_soclinux_soc_rst = 0U;
    if (vlSelf->main_soclinux_reset_re) {
        vlSelf->main_soclinux_soc_rst = (1U & (IData)(vlSelf->main_soclinux_reset_storage));
    }
    vlSelf->soclinux_mem2block_converter_converter_first 
        = (0U == (IData)(vlSelf->soclinux_mem2block_converter_converter_mux));
    vlSelf->main_soclinux_master_cs = vlSelf->main_soclinux_master_cs_storage;
    vlSelf->main_hyperramsdrphy_rise = (3U == (IData)(vlSelf->main_hyperramsdrphy_phase));
    vlSelf->main_soclinux_tx_sink_ready = 0U;
    vlSelf->main_core_source_source_payload_dq_oe = 0U;
    vlSelf->main_core_source_source_payload_dat_w = 0U;
    vlSelf->main_core_source_source_payload_dat_r = 0U;
    vlSelf->main_core_source_source_payload_cmd = 0U;
    vlSelf->main_core_source_source_payload_rwds_oe = 0U;
    vlSelf->main_soclinux_mmap_source_payload_mask = 0U;
    vlSelf->builder_socbushandler_shared_err = ((IData)(vlSelf->main_soclinux_clintbus_err) 
                                                | ((IData)(vlSelf->main_soclinux_plicbus_err) 
                                                   | ((IData)(vlSelf->main_soclinux_ram_bus_ram_bus_err) 
                                                      | ((IData)(vlSelf->main_soclinux_soclinux_ram_bus_err) 
                                                         | ((IData)(vlSelf->main_core_bus_err) 
                                                            | ((IData)(vlSelf->main_soclinux_mmap_bus_err) 
                                                               | ((IData)(vlSelf->builder_soclinux_interface0_err) 
                                                                  | (IData)(vlSelf->main_spihost_bus_err))))))));
    vlSelf->main_core_sink_sink_first = (1U & ((IData)(vlSelf->storage_5_dat1) 
                                               >> 8U));
    vlSelf->main_core_sink_sink_last = (1U & ((IData)(vlSelf->storage_5_dat1) 
                                              >> 9U));
    vlSelf->main_core_sink_sink_payload_dq = (0xffU 
                                              & (IData)(vlSelf->storage_5_dat1));
    vlSelf->soclinux_datar_crc16_data_pads_out = 0U;
    if (((((((((0U == (IData)(vlSelf->soclinux_datar_crc_count)) 
               | (1U == (IData)(vlSelf->soclinux_datar_crc_count))) 
              | (2U == (IData)(vlSelf->soclinux_datar_crc_count))) 
             | (3U == (IData)(vlSelf->soclinux_datar_crc_count))) 
            | (4U == (IData)(vlSelf->soclinux_datar_crc_count))) 
           | (5U == (IData)(vlSelf->soclinux_datar_crc_count))) 
          | (6U == (IData)(vlSelf->soclinux_datar_crc_count))) 
         | (7U == (IData)(vlSelf->soclinux_datar_crc_count)))) {
        vlSelf->soclinux_datar_crc16_data_pads_out 
            = ((0U == (IData)(vlSelf->soclinux_datar_crc_count))
                ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                          >> 0xcU)) | ((4U & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                              >> 0xdU)) 
                                       | ((2U & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                 >> 0xeU)) 
                                          | (1U & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                   >> 0xfU)))))
                : ((1U == (IData)(vlSelf->soclinux_datar_crc_count))
                    ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                              >> 0xbU)) | ((4U & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                  >> 0xcU)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                >> 0xdU)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                    >> 0xeU)))))
                    : ((2U == (IData)(vlSelf->soclinux_datar_crc_count))
                        ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                  >> 0xaU)) | ((4U 
                                                & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                   >> 0xbU)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                        >> 0xdU)))))
                        : ((3U == (IData)(vlSelf->soclinux_datar_crc_count))
                            ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                      >> 9U)) | ((4U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                     >> 0xaU)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                        >> 0xbU)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                          >> 0xcU)))))
                            : ((4U == (IData)(vlSelf->soclinux_datar_crc_count))
                                ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                          >> 8U)) | 
                                   ((4U & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                           >> 9U)) 
                                    | ((2U & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                              >> 0xaU)) 
                                       | (1U & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                >> 0xbU)))))
                                : ((5U == (IData)(vlSelf->soclinux_datar_crc_count))
                                    ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                              >> 7U)) 
                                       | ((4U & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                 >> 8U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                   >> 0xaU)))))
                                    : ((6U == (IData)(vlSelf->soclinux_datar_crc_count))
                                        ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                                  >> 6U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                >> 7U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                       >> 9U)))))
                                        : ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                                  >> 5U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                >> 6U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                     >> 7U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                       >> 8U))))))))))));
    } else if (((((((((8U == (IData)(vlSelf->soclinux_datar_crc_count)) 
                      | (9U == (IData)(vlSelf->soclinux_datar_crc_count))) 
                     | (0xaU == (IData)(vlSelf->soclinux_datar_crc_count))) 
                    | (0xbU == (IData)(vlSelf->soclinux_datar_crc_count))) 
                   | (0xcU == (IData)(vlSelf->soclinux_datar_crc_count))) 
                  | (0xdU == (IData)(vlSelf->soclinux_datar_crc_count))) 
                 | (0xeU == (IData)(vlSelf->soclinux_datar_crc_count))) 
                | (0xfU == (IData)(vlSelf->soclinux_datar_crc_count)))) {
        vlSelf->soclinux_datar_crc16_data_pads_out 
            = ((8U == (IData)(vlSelf->soclinux_datar_crc_count))
                ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                          >> 4U)) | ((4U & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                            >> 5U)) 
                                     | ((2U & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                               >> 6U)) 
                                        | (1U & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                 >> 7U)))))
                : ((9U == (IData)(vlSelf->soclinux_datar_crc_count))
                    ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                              >> 3U)) | ((4U & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                >> 4U)) 
                                         | ((2U & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                >> 6U)))))
                    : ((0xaU == (IData)(vlSelf->soclinux_datar_crc_count))
                        ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                  >> 2U)) | ((4U & 
                                              ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                               >> 3U)) 
                                             | ((2U 
                                                 & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                    >> 4U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                      >> 5U)))))
                        : ((0xbU == (IData)(vlSelf->soclinux_datar_crc_count))
                            ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                      >> 1U)) | ((4U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                     >> 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                          >> 4U)))))
                            : ((0xcU == (IData)(vlSelf->soclinux_datar_crc_count))
                                ? ((8U & (IData)(vlSelf->soclinux_datar_crc16_crc30)) 
                                   | ((4U & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                             >> 1U)) 
                                      | ((2U & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                >> 2U)) 
                                         | (1U & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                  >> 3U)))))
                                : ((0xdU == (IData)(vlSelf->soclinux_datar_crc_count))
                                    ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                              << 1U)) 
                                       | ((4U & (IData)(vlSelf->soclinux_datar_crc16_crc20)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                               >> 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                   >> 2U)))))
                                    : ((0xeU == (IData)(vlSelf->soclinux_datar_crc_count))
                                        ? ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                                  << 2U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                << 1U)) 
                                              | ((2U 
                                                  & (IData)(vlSelf->soclinux_datar_crc16_crc10)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                       >> 1U)))))
                                        : ((8U & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->soclinux_datar_crc16_crc00))))))))))));
    }
    vlSelf->main_hyperramsdrphy_ios_dq_i = 0U;
    vlSelf->main_hyperramsdrphy_ios_dq_i = ((0xf0U 
                                             & (IData)(vlSelf->main_hyperramsdrphy_ios_dq_i)) 
                                            | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl12_xilinxmultiregimpl12) 
                                                << 3U) 
                                               | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl10_xilinxmultiregimpl10) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl8_xilinxmultiregimpl8) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->builder_impl_xilinxmultiregimpl6_xilinxmultiregimpl6)))));
    vlSelf->main_hyperramsdrphy_ios_dq_i = ((0xfU & (IData)(vlSelf->main_hyperramsdrphy_ios_dq_i)) 
                                            | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl20_xilinxmultiregimpl20) 
                                                << 7U) 
                                               | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl18_xilinxmultiregimpl18) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl16_xilinxmultiregimpl16) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->builder_impl_xilinxmultiregimpl14_xilinxmultiregimpl14) 
                                                        << 4U)))));
    vlSelf->soclinux_mem2block_dma_length1 = VL_SHIFTR_III(32,32,32, vlSelf->soclinux_mem2block_dma_length_storage, 2U);
    vlSelf->soclinux_mem2block_dma_loop = vlSelf->soclinux_mem2block_dma_loop_storage;
    vlSelf->soclinux_init_pads_out_payload_clk = 0U;
    vlSelf->soclinux_cmdr_pads_out_payload_clk = 0U;
    vlSelf->soclinux_dataw_pads_out_payload_clk = 0U;
    vlSelf->builder_soclinux_tx_mux_endpoint1_sink_payload_len 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_len;
    vlSelf->main_soclinux_tx_sink_valid = vlSelf->main_soclinux_uart_tx_fifo_readable;
    vlSelf->main_soclinux_mmap_sink_ready = 0U;
    vlSelf->main_rx_cdc_cdc_asyncfifo_we = (0U != (IData)(vlSelf->main_syncfifo1_level));
    vlSelf->soclinux_mem2block_converter_converter_source_valid 
        = (0U != (IData)(vlSelf->soclinux_mem2block_dma_fifo_level));
    vlSelf->spi_wb__DOT__tx_bram_rdata = vlSelf->spi_wb__DOT__u_tx_ram__DOT__b_rdata_o;
    vlSelf->soclinux_init_pads_out_payload_data_o = 0U;
    vlSelf->soclinux_init_pads_out_payload_data_oe = 0U;
    vlSelf->soclinux_dataw_pads_out_payload_data_oe = 0U;
    vlSelf->main_syncfifo0_syncfifo0_writable = (4U 
                                                 != (IData)(vlSelf->main_syncfifo0_level));
    vlSelf->main_rx_cdc_cdc_asyncfifo_writable = ((
                                                   (1U 
                                                    & ((IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q) 
                                                       >> 2U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->builder_impl_xilinxmultiregimpl271) 
                                                       >> 2U))) 
                                                  | (((1U 
                                                       & ((IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q) 
                                                          >> 1U)) 
                                                      == 
                                                      (1U 
                                                       & ((IData)(vlSelf->builder_impl_xilinxmultiregimpl271) 
                                                          >> 1U))) 
                                                     | ((1U 
                                                         & (IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q)) 
                                                        != 
                                                        (1U 
                                                         & (IData)(vlSelf->builder_impl_xilinxmultiregimpl271)))));
    vlSelf->soclinux_mem2block_converter_converter_source_ready 
        = (0x200U != (IData)(vlSelf->soclinux_mem2block_fifo_level0));
    vlSelf->soclinux_mem2block_converter_converter_sink_first 
        = (1U & (IData)((vlSelf->storage_7[vlSelf->soclinux_mem2block_dma_fifo_consume] 
                         >> 0x20U)));
    vlSelf->soclinux_mem2block_converter_converter_sink_last 
        = (1U & (IData)((vlSelf->storage_7[vlSelf->soclinux_mem2block_dma_fifo_consume] 
                         >> 0x21U)));
    vlSelf->main_syncfifo0_syncfifo0_we = ((IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q) 
                                           != (IData)(vlSelf->builder_impl_xilinxmultiregimpl241));
    vlSelf->builder_soclinux_rx_demux_sink_first = vlSelf->main_soclinux_source_first;
    vlSelf->builder_soclinux_rx_demux_sink_last = vlSelf->main_soclinux_source_last;
    vlSelf->main_soclinux_rx_rx = vlSelf->builder_impl_xilinxmultiregimpl01;
    vlSelf->main_core_cmd_tx_conv_converter_sink_valid = 0U;
    vlSelf->main_core_reg_tx_conv_source_last = ((IData)(vlSelf->main_core_reg_tx_conv_converter_mux) 
                                                 & (IData)(vlSelf->main_core_reg_tx_conv_sink_last));
    vlSelf->main_hyperramsdrphy_sink_payload_dq = (0xffU 
                                                   & (vlSelf->storage_2
                                                      [vlSelf->main_syncfifo0_consume] 
                                                      >> 3U));
    vlSelf->soclinux_datar_datar_1x_source_payload_data 
        = vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_payload_data;
    vlSelf->soclinux_datar_datar_4x_source_payload_data 
        = vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_payload_data;
    vlSelf->spi_wb__DOT__spi_msb_first = (1U & (vlSelf->spi_wb__DOT__cfg_reg 
                                                >> 0x1dU));
    vlSelf->main_hyperramsdrphy_ios_rwds_i = vlSelf->builder_impl_xilinxmultiregimpl23;
    vlSelf->main_core_dat_rx_conv_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->main_core_dat_rx_conv_converter_strobe_all)) 
                 | (IData)(vlSelf->main_core_dat_rx_conv_source_ready)));
    vlSelf->main_core_reg_rx_conv_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->main_core_reg_rx_conv_converter_strobe_all)) 
                 | (IData)(vlSelf->main_core_reg_rx_conv_source_ready)));
    vlSelf->main_soclinux_mmap_source_payload_len = 0U;
    vlSelf->main_soclinux_en = 0U;
    vlSelf->main_core_dat_tx_conv_converter_first = 
        (0U == (IData)(vlSelf->main_core_dat_tx_conv_converter_mux));
    vlSelf->main_core_reg_tx_conv_converter_first = 
        (1U & (~ (IData)(vlSelf->main_core_reg_tx_conv_converter_mux)));
    __VdfgRegularize_h278c091a_69_0 = ((IData)(vlSelf->main_soclinux_cnt) 
                                       == (IData)(vlSelf->main_soclinux_div));
    vlSelf->main_core_reg_tx_conv_sink_valid = 0U;
    vlSelf->main_core_dat_tx_conv_sink_valid = 0U;
    vlSelf->main_hyperramsdrphy_dq_o = 0U;
    vlSelf->main_hyperramsdrphy_dq_o = ((0xf0U & (IData)(vlSelf->main_hyperramsdrphy_dq_o)) 
                                        | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl11_xilinxmultiregimpl112) 
                                            << 3U) 
                                           | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl9_xilinxmultiregimpl92) 
                                               << 2U) 
                                              | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl7_xilinxmultiregimpl72) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->builder_impl_xilinxmultiregimpl5_xilinxmultiregimpl52)))));
    vlSelf->main_hyperramsdrphy_dq_o = ((0xfU & (IData)(vlSelf->main_hyperramsdrphy_dq_o)) 
                                        | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl19_xilinxmultiregimpl192) 
                                            << 7U) 
                                           | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl17_xilinxmultiregimpl172) 
                                               << 6U) 
                                              | (((IData)(vlSelf->builder_impl_xilinxmultiregimpl15_xilinxmultiregimpl152) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->builder_impl_xilinxmultiregimpl13_xilinxmultiregimpl132) 
                                                    << 4U)))));
    vlSelf->soclinux_mem2block_converter_converter_last 
        = (3U == (IData)(vlSelf->soclinux_mem2block_converter_converter_mux));
    vlSelf->soclinux_datar_data_done = (0U == (IData)(vlSelf->soclinux_datar_data_count));
    vlSelf->spi_wb__DOT__spi_cpha = (1U & (vlSelf->spi_wb__DOT__cfg_reg 
                                           >> 0x1eU));
    vlSelf->main_hyperramsdrphy_sink_payload_dat_r 
        = (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
                 >> 2U));
    vlSelf->main_core_sink_sink_valid = ((IData)(vlSelf->main_rx_cdc_cdc_graycounter1_q) 
                                         != (IData)(vlSelf->builder_impl_xilinxmultiregimpl261));
    vlSelf->soclinux_block2mem_wishbonedmawriter_sink_last 
        = vlSelf->soclinux_block2mem_converter_source_last;
    vlSelf->soclinux_block2mem_wishbonedmawriter_length1 
        = VL_SHIFTR_III(32,32,32, vlSelf->soclinux_block2mem_wishbonedmawriter_length_storage, 2U);
    vlSelf->soclinux_block2mem_wishbonedmawriter_loop 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_loop_storage;
    vlSelf->main_soclinux_soclinux_ram_bus_dat_r = vlSelf->rom_dat0;
    vlSelf->main_leds_leds = 0U;
    vlSelf->main_leds_leds = ((IData)(vlSelf->main_leds_mode)
                               ? (IData)(vlSelf->main_leds_storage)
                               : (IData)(vlSelf->main_leds_chaser));
    vlSelf->main_hyperram_addr = (3U & ((IData)(vlSelf->main_hyperram_reg_control_storage) 
                                        >> 8U));
    vlSelf->main_soclinux_ram_bus_ram_bus_dat_r = (
                                                   (0x5ffU 
                                                    >= (IData)(vlSelf->sram_adr0))
                                                    ? 
                                                   vlSelf->sram
                                                   [vlSelf->sram_adr0]
                                                    : 0U);
    vlSelf->sdcard_data__out__strong__out12 = ((0xeU 
                                                & (IData)(vlSelf->sdcard_data__out__strong__out12)) 
                                               | ((~ (IData)(vlSelf->ODDR_17__DOT__q_reg)) 
                                                  & (IData)(vlSelf->ODDR_13__DOT__q_reg)));
    vlSelf->sdcard_data__out__strong__out13 = ((0xdU 
                                                & (IData)(vlSelf->sdcard_data__out__strong__out13)) 
                                               | (((~ (IData)(vlSelf->ODDR_18__DOT__q_reg)) 
                                                   & (IData)(vlSelf->ODDR_14__DOT__q_reg)) 
                                                  << 1U));
    vlSelf->sdcard_data__out__strong__out14 = ((0xbU 
                                                & (IData)(vlSelf->sdcard_data__out__strong__out14)) 
                                               | (((~ (IData)(vlSelf->ODDR_19__DOT__q_reg)) 
                                                   & (IData)(vlSelf->ODDR_15__DOT__q_reg)) 
                                                  << 2U));
    vlSelf->sdcard_data__out__strong__out15 = ((7U 
                                                & (IData)(vlSelf->sdcard_data__out__strong__out15)) 
                                               | (((~ (IData)(vlSelf->ODDR_20__DOT__q_reg)) 
                                                   & (IData)(vlSelf->ODDR_16__DOT__q_reg)) 
                                                  << 3U));
    vlSelf->spiflash4x_dq__out__strong__out16 = ((0xeU 
                                                  & (IData)(vlSelf->spiflash4x_dq__out__strong__out16)) 
                                                 | ((~ (IData)(vlSelf->ODDR_7__DOT__q_reg)) 
                                                    & (IData)(vlSelf->ODDR_3__DOT__q_reg)));
    vlSelf->spiflash4x_dq__out__strong__out17 = ((0xdU 
                                                  & (IData)(vlSelf->spiflash4x_dq__out__strong__out17)) 
                                                 | (((~ (IData)(vlSelf->ODDR_8__DOT__q_reg)) 
                                                     & (IData)(vlSelf->ODDR_4__DOT__q_reg)) 
                                                    << 1U));
    vlSelf->spiflash4x_dq__out__strong__out18 = ((0xbU 
                                                  & (IData)(vlSelf->spiflash4x_dq__out__strong__out18)) 
                                                 | (((~ (IData)(vlSelf->ODDR_9__DOT__q_reg)) 
                                                     & (IData)(vlSelf->ODDR_5__DOT__q_reg)) 
                                                    << 2U));
    vlSelf->spiflash4x_dq__out__strong__out19 = ((7U 
                                                  & (IData)(vlSelf->spiflash4x_dq__out__strong__out19)) 
                                                 | (((~ (IData)(vlSelf->ODDR_10__DOT__q_reg)) 
                                                     & (IData)(vlSelf->ODDR_6__DOT__q_reg)) 
                                                    << 3U));
    vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data 
        = (((IData)(vlSelf->IDDR_8__DOT__q1_reg) << 3U) 
           | (((IData)(vlSelf->IDDR_7__DOT__q1_reg) 
               << 2U) | (((IData)(vlSelf->IDDR_6__DOT__q1_reg) 
                          << 1U) | (IData)(vlSelf->IDDR_5__DOT__q1_reg))));
    vlSelf->main_spihost_bus_dat_r = ((IData)(vlSelf->spi_wb__DOT__is_reg_q)
                                       ? vlSelf->spi_wb__DOT__reg_rdata_q
                                       : ((IData)(vlSelf->spi_wb__DOT__is_tx_q)
                                           ? vlSelf->spi_wb__DOT__u_tx_ram__DOT__a_rdata_o
                                           : vlSelf->spi_wb__DOT__u_rx_ram__DOT__a_rdata_o));
    vlSelf->main_core_dat_rx_conv_source_source_payload_data 
        = vlSelf->main_core_dat_rx_conv_converter_source_payload_data;
    vlSelf->builder_soclinux_tx_mux_endpoint1_sink_valid 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_valid;
    vlSelf->main_soclinux_done = (0U == (IData)(vlSelf->main_soclinux_count));
    vlSelf->builder_csr_bankarray_dat_r = ((0x1dU >= (IData)(vlSelf->mem_adr0))
                                            ? vlSelf->mem
                                           [vlSelf->mem_adr0]
                                            : 0U);
    vlSelf->main_core_dat_tx_conv_sink_payload_dq = 0U;
    vlSelf->main_core_dat_tx_conv_sink_payload_rwds = 0U;
    vlSelf->main_soclinux_mmap_source_valid = 0U;
    vlSelf->soclinux_dataw_crc_source_payload_data 
        = vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_payload_data;
    vlSelf->main_core_reg_dat_w = 0U;
    vlSelf->soclinux_dataw_crc16_data_pads_out = 0U;
    if (((((((((0U == (IData)(vlSelf->soclinux_dataw_count)) 
               | (1U == (IData)(vlSelf->soclinux_dataw_count))) 
              | (2U == (IData)(vlSelf->soclinux_dataw_count))) 
             | (3U == (IData)(vlSelf->soclinux_dataw_count))) 
            | (4U == (IData)(vlSelf->soclinux_dataw_count))) 
           | (5U == (IData)(vlSelf->soclinux_dataw_count))) 
          | (6U == (IData)(vlSelf->soclinux_dataw_count))) 
         | (7U == (IData)(vlSelf->soclinux_dataw_count)))) {
        vlSelf->soclinux_dataw_crc16_data_pads_out 
            = ((0U == (IData)(vlSelf->soclinux_dataw_count))
                ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                          >> 0xcU)) | ((4U & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                              >> 0xdU)) 
                                       | ((2U & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                 >> 0xeU)) 
                                          | (1U & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                   >> 0xfU)))))
                : ((1U == (IData)(vlSelf->soclinux_dataw_count))
                    ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                              >> 0xbU)) | ((4U & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                  >> 0xcU)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                >> 0xdU)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                    >> 0xeU)))))
                    : ((2U == (IData)(vlSelf->soclinux_dataw_count))
                        ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                  >> 0xaU)) | ((4U 
                                                & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                   >> 0xbU)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                        >> 0xdU)))))
                        : ((3U == (IData)(vlSelf->soclinux_dataw_count))
                            ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                      >> 9U)) | ((4U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                     >> 0xaU)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                        >> 0xbU)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                          >> 0xcU)))))
                            : ((4U == (IData)(vlSelf->soclinux_dataw_count))
                                ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                          >> 8U)) | 
                                   ((4U & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                           >> 9U)) 
                                    | ((2U & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                              >> 0xaU)) 
                                       | (1U & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                >> 0xbU)))))
                                : ((5U == (IData)(vlSelf->soclinux_dataw_count))
                                    ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                              >> 7U)) 
                                       | ((4U & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                 >> 8U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                               >> 9U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                   >> 0xaU)))))
                                    : ((6U == (IData)(vlSelf->soclinux_dataw_count))
                                        ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                                  >> 6U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                >> 7U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                     >> 8U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                       >> 9U)))))
                                        : ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                                  >> 5U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                >> 6U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                     >> 7U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                       >> 8U))))))))))));
    } else if (((((((((8U == (IData)(vlSelf->soclinux_dataw_count)) 
                      | (9U == (IData)(vlSelf->soclinux_dataw_count))) 
                     | (0xaU == (IData)(vlSelf->soclinux_dataw_count))) 
                    | (0xbU == (IData)(vlSelf->soclinux_dataw_count))) 
                   | (0xcU == (IData)(vlSelf->soclinux_dataw_count))) 
                  | (0xdU == (IData)(vlSelf->soclinux_dataw_count))) 
                 | (0xeU == (IData)(vlSelf->soclinux_dataw_count))) 
                | (0xfU == (IData)(vlSelf->soclinux_dataw_count)))) {
        vlSelf->soclinux_dataw_crc16_data_pads_out 
            = ((8U == (IData)(vlSelf->soclinux_dataw_count))
                ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                          >> 4U)) | ((4U & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                            >> 5U)) 
                                     | ((2U & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                               >> 6U)) 
                                        | (1U & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                 >> 7U)))))
                : ((9U == (IData)(vlSelf->soclinux_dataw_count))
                    ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                              >> 3U)) | ((4U & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                >> 4U)) 
                                         | ((2U & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                >> 6U)))))
                    : ((0xaU == (IData)(vlSelf->soclinux_dataw_count))
                        ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                  >> 2U)) | ((4U & 
                                              ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                               >> 3U)) 
                                             | ((2U 
                                                 & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                    >> 4U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                      >> 5U)))))
                        : ((0xbU == (IData)(vlSelf->soclinux_dataw_count))
                            ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                      >> 1U)) | ((4U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                     >> 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                        >> 3U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                          >> 4U)))))
                            : ((0xcU == (IData)(vlSelf->soclinux_dataw_count))
                                ? ((8U & (IData)(vlSelf->soclinux_dataw_crc16_crc30)) 
                                   | ((4U & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                             >> 1U)) 
                                      | ((2U & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                >> 2U)) 
                                         | (1U & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                  >> 3U)))))
                                : ((0xdU == (IData)(vlSelf->soclinux_dataw_count))
                                    ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                              << 1U)) 
                                       | ((4U & (IData)(vlSelf->soclinux_dataw_crc16_crc20)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                               >> 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                   >> 2U)))))
                                    : ((0xeU == (IData)(vlSelf->soclinux_dataw_count))
                                        ? ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                                  << 2U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                << 1U)) 
                                              | ((2U 
                                                  & (IData)(vlSelf->soclinux_dataw_crc16_crc10)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                       >> 1U)))))
                                        : ((8U & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->soclinux_dataw_crc16_crc00))))))))))));
    }
    vlSelf->builder_soclinux_rx_demux_sink_payload_data 
        = vlSelf->main_soclinux_sr_in;
    vlSelf->soclinux_core_sink_payload_data = (0xffU 
                                               & (IData)(vlSelf->storage_8_dat1));
    vlSelf->spi_wb__DOT____VdfgRegularize_h25f3cb13_1_2 
        = (1U & ((~ (IData)(vlSelf->spi_wb__DOT__ack_q)) 
                 & (~ (IData)(vlSelf->spi_wb__DOT__buf_rd_pending))));
    vlSelf->main_soclinux_posedge_reg2 = (1U & (IData)(vlSelf->main_soclinux_posedge_reg));
    vlSelf->main_soclinux_timer_irq = ((IData)(vlSelf->main_soclinux_timer_enable_storage) 
                                       & (IData)(vlSelf->main_soclinux_timer_zero_pending));
    vlSelf->main_spihost_irq = ((IData)(vlSelf->spi_wb__DOT__intr_complete) 
                                & (IData)(vlSelf->spi_wb__DOT__intr_enable_complete));
    vlSelf->main_soclinux_uart_tx2 = (1U & (IData)(vlSelf->main_soclinux_uart_enable_storage));
    vlSelf->main_soclinux_uart_rx2 = (1U & ((IData)(vlSelf->main_soclinux_uart_enable_storage) 
                                            >> 1U));
    vlSelf->soclinux_i02 = (1U & (IData)(vlSelf->soclinux_enable_storage));
    vlSelf->soclinux_i12 = (1U & ((IData)(vlSelf->soclinux_enable_storage) 
                                  >> 1U));
    vlSelf->soclinux_i22 = (1U & ((IData)(vlSelf->soclinux_enable_storage) 
                                  >> 2U));
    vlSelf->soclinux_eventmanager_card_detect2 = (1U 
                                                  & (IData)(vlSelf->soclinux_eventmanager_enable_storage));
    vlSelf->soclinux_eventmanager_block2mem_dma2 = 
        (1U & ((IData)(vlSelf->soclinux_eventmanager_enable_storage) 
               >> 1U));
    vlSelf->soclinux_eventmanager_mem2block_dma2 = 
        (1U & ((IData)(vlSelf->soclinux_eventmanager_enable_storage) 
               >> 2U));
    vlSelf->soclinux_eventmanager_data_done2 = (1U 
                                                & ((IData)(vlSelf->soclinux_eventmanager_enable_storage) 
                                                   >> 3U));
    vlSelf->soclinux_eventmanager_cmd_done2 = (1U & 
                                               ((IData)(vlSelf->soclinux_eventmanager_enable_storage) 
                                                >> 4U));
    vlSelf->soclinux_pending_status = 0U;
    vlSelf->soclinux_pending_status = (((IData)(vlSelf->soclinux_eventsourcepulse2_pending) 
                                        << 2U) | (((IData)(vlSelf->soclinux_eventsourcepulse1_pending) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->soclinux_eventsourcepulse0_pending)));
    vlSelf->soclinux_dataw_crc_source_valid = vlSelf->soclinux_dataw_crc_buf_pipe_valid_source_valid;
    vlSelf->soclinux_eventmanager_cmd_done1 = vlSelf->soclinux_core_cmd_done;
    vlSelf->main_hyperramsdrphy_sink_valid = (0U != (IData)(vlSelf->main_syncfifo0_level));
    vlSelf->spi_wb__DOT__spi_data_in_valid = vlSelf->spi_wb__DOT__tx_data_valid;
    vlSelf->builder_soclinux_tx_mux_endpoint1_sink_payload_width 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_payload_width;
    vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSelf->main_soclinux_uart_tx_fifo_level0));
    vlSelf->main_soclinux_mmap_source_payload_width = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                    vlSelf->main_soclinux_mmap_source_payload_mask = 0U;
                    vlSelf->main_soclinux_mmap_source_payload_len = 0x20U;
                    vlSelf->main_soclinux_mmap_source_valid = 1U;
                    vlSelf->main_soclinux_mmap_source_payload_width = 4U;
                }
            } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                vlSelf->main_soclinux_mmap_source_payload_mask = 0U;
                vlSelf->main_soclinux_mmap_source_payload_len 
                    = (0x3fU & (IData)(vlSelf->main_soclinux_mmap_storage));
                vlSelf->main_soclinux_mmap_source_valid = 1U;
                vlSelf->main_soclinux_mmap_source_payload_width = 1U;
            }
        } else if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                vlSelf->main_soclinux_mmap_source_payload_mask = 1U;
                vlSelf->main_soclinux_mmap_source_payload_len = 0x18U;
                vlSelf->main_soclinux_mmap_source_valid = 1U;
                vlSelf->main_soclinux_mmap_source_payload_width = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_source_payload_mask = 1U;
            vlSelf->main_soclinux_mmap_source_payload_len = 8U;
            vlSelf->main_soclinux_mmap_source_valid = 1U;
            vlSelf->main_soclinux_mmap_source_payload_width = 1U;
        }
    }
    vlSelf->builder_soclinux_interface0_ack = 0U;
    vlSelf->main_spihost_bus_ack = vlSelf->spi_wb__DOT__ack_q;
    vlSelf->soclinux_core_sink_valid = vlSelf->soclinux_mem2block_fifo_readable;
    vlSelf->spi_wb__DOT__spi_idle = (0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q));
    vlSelf->soclinux_mem2block_source_source_last = 
        (1U & ((IData)(vlSelf->storage_8_dat1) >> 9U));
    vlSelf->soclinux_block2mem_fifo_sink_ready = (0x200U 
                                                  != (IData)(vlSelf->soclinux_block2mem_fifo_level0));
    vlSelf->soclinux_core_crc7_inserter_crc_crc = vlSelf->soclinux_core_crc7_inserter_crc0;
    vlSelf->soclinux_core_cmd_crc_en = (1U & ((IData)(vlSelf->soclinux_core_cmd_command_storage) 
                                              >> 2U));
    vlSelf->main_core_cmd_tx_conv_converter_last = 
        (5U == (IData)(vlSelf->main_core_cmd_tx_conv_converter_mux));
    vlSelf->main_core_latency = (0xffU & ((IData)(vlSelf->main_hyperram_config_storage) 
                                          >> 8U));
    vlSelf->builder_socbushandler_done = (0U == vlSelf->builder_socbushandler_count);
    vlSelf->main_core_reg_rx_conv_source_valid = vlSelf->main_core_reg_rx_conv_converter_strobe_all;
    vlSelf->main_soclinux_source_valid = 0U;
    vlSelf->main_core_dat_tx_conv_converter_last = 
        (3U == (IData)(vlSelf->main_core_dat_tx_conv_converter_mux));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__active = 
        (2U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q));
    vlSelf->main_core_dat_rx_conv_source_valid = vlSelf->main_core_dat_rx_conv_converter_strobe_all;
    vlSelf->soclinux_datar_source_source_first = 0U;
    vlSelf->spi_wb__DOT__spi_half_clk_period = (0xffffU 
                                                & vlSelf->spi_wb__DOT__cfg_reg);
    vlSelf->builder_soclinux_tx_mux_sel = vlSelf->builder_soclinux_grant;
    vlSelf->main_core_reg_we = 0U;
    vlSelf->main_core_reg_stb = 0U;
    vlSelf->builder_soclinux_rx_demux_sel = vlSelf->builder_soclinux_grant;
    vlSelf->soclinux_block2mem_wishbonedmawriter_sink_payload_data 
        = vlSelf->soclinux_block2mem_converter_source_payload_data;
    vlSelf->soclinux_datar_source_source_payload_status = 0U;
    vlSelf->main_core_source_source_ready = (((1U & 
                                               ((IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q) 
                                                >> 2U)) 
                                              == (1U 
                                                  & ((IData)(vlSelf->builder_impl_xilinxmultiregimpl251) 
                                                     >> 2U))) 
                                             | (((1U 
                                                  & ((IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlSelf->builder_impl_xilinxmultiregimpl251) 
                                                     >> 1U))) 
                                                | ((1U 
                                                    & (IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q)) 
                                                   != 
                                                   (1U 
                                                    & (IData)(vlSelf->builder_impl_xilinxmultiregimpl251)))));
    vlSelf->soclinux_datar_sink_last = 0U;
    vlSelf->soclinux_datar_datar_4x_source_valid = vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_valid;
    vlSelf->soclinux_datar_datar_1x_source_valid = vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_valid;
    vlSelf->soclinux_core_cmd = (0x3fU & ((IData)(vlSelf->soclinux_core_cmd_command_storage) 
                                          >> 8U));
    vlSelf->soclinux_datar_sink_valid = 0U;
    vlSelf->soclinux_cmdr_cmdr_source_payload_data 
        = vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_payload_data;
    vlSelf->soclinux_cmdr_sink_valid = 0U;
    vlSelf->soclinux_cmdr_source_source_ready = 0U;
    vlSelf->soclinux_cmdr_cmdr_source_valid = vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_valid;
    vlSelf->soclinux_datar_sink_payload_block_length = 0U;
    vlSelf->soclinux_cmdw_sink_valid = 0U;
    vlSelf->soclinux_core_data_type = (3U & ((IData)(vlSelf->soclinux_core_cmd_command_storage) 
                                             >> 5U));
    vlSelf->soclinux_cmdr_cmdr_pads_in_valid = ((~ (IData)(vlSelf->soclinux_clk_i_d)) 
                                                & (IData)(vlSelf->builder_impl_xilinxmultiregimpl28_xilinxmultiregimpl28));
    vlSelf->soclinux_data_width0 = vlSelf->soclinux_settings_storage;
    vlSelf->soclinux_core_cmd_type = (3U & (IData)(vlSelf->soclinux_core_cmd_command_storage));
    vlSelf->soclinux_cmdr_pads_out_ready = ((~ (IData)(vlSelf->soclinux_clocker_clk_d)) 
                                            & (IData)(vlSelf->soclinux_clocker_clk1));
    vlSelf->soclinux_block2mem_wishbonedmawriter_base1 
        = (IData)((vlSelf->soclinux_block2mem_wishbonedmawriter_base_storage 
                   >> 2U));
    vlSelf->soclinux_mem2block_dma_base1 = (IData)(
                                                   (vlSelf->soclinux_mem2block_dma_base_storage 
                                                    >> 2U));
    vlSelf->soclinux_mem2block_dma_sink_sink_valid = 0U;
    vlSelf->soclinux_block2mem_wishbonedmawriter_sink_valid 
        = vlSelf->soclinux_block2mem_converter_strobe_all;
    vlSelf->soclinux_mem2block_dma_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSelf->soclinux_mem2block_dma_fifo_level));
    vlSelf->builder_impl_xilinxmultiregimpl29 = vlSelf->user_sw0;
    vlSelf->soclinux_card_detect_status0 = vlSelf->sdcard_cd;
    vlSelf->builder_csr_bankarray_csrbank3_phy_card_detect_w 
        = vlSelf->sdcard_cd;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__cipo_shift_d 
        = ((0xfeU & ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__cipo_shift_q) 
                     << 1U)) | (IData)(vlSelf->spi_eth_miso));
    vlSelf->spi_wb__DOT__spi_cipo_i = vlSelf->spi_eth_miso;
    vlSelf->main_soclinux_jtag_tdi = vlSelf->jtag_tdi;
    vlSelf->BUFG_2__DOT__I = vlSelf->jtag_tck;
    vlSelf->main_jtag_tck_bufg = vlSelf->jtag_tck;
    vlSelf->BUFG_2__DOT__O = vlSelf->jtag_tck;
    vlSelf->main_soclinux_jtag_clk = vlSelf->jtag_tck;
    vlSelf->main_crg_clkout_buf0 = vlSelf->clk25;
    vlSelf->main_crg_clkout_buf1 = vlSelf->clk25;
    vlSelf->BUFG__DOT__O = vlSelf->clk25;
    vlSelf->BUFG_1__DOT__O = vlSelf->clk25;
    vlSelf->PLLE2_ADV__DOT__CLKOUT0 = vlSelf->clk25;
    vlSelf->PLLE2_ADV__DOT__CLKOUT1 = vlSelf->clk25;
    vlSelf->PLLE2_ADV__DOT__CLKFBOUT = vlSelf->clk25;
    vlSelf->main_crg_clkout0 = vlSelf->clk25;
    vlSelf->main_crg_clkout1 = vlSelf->clk25;
    vlSelf->builder_soclinux_pll_fb = vlSelf->clk25;
    vlSelf->sys2x_clk = vlSelf->clk25;
    vlSelf->main_crg_clkin = vlSelf->clk25;
    vlSelf->sys_clk = vlSelf->clk25;
    vlSelf->main_soclinux_jtag_tms = vlSelf->jtag_tms;
    vlSelf->main_hyperramsdrphy_rwds_i = vlSelf->hyperram0_rwds;
    vlSelf->IOBUF_4__DOT__IO = vlSelf->sdcard_cmd;
    vlSelf->IOBUF_4__DOT__O = vlSelf->sdcard_cmd;
    vlSelf->builder_impl_xilinxsdrtristateimpl1___05Fi 
        = vlSelf->sdcard_cmd;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__rst_ni = vlSelf->spi_wb__DOT__rst_ni;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_be_i = vlSelf->spi_wb__DOT__rx_b_be;
    vlSelf->soclinux_dataw_crc_start = vlSelf->soclinux_datar_datar_1x_start;
    vlSelf->main_leds_wait = (1U & (~ (IData)(vlSelf->main_leds_done)));
    vlSelf->main_soclinux_master_tx_fifo_sink_sink_payload_len 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_len;
    vlSelf->spi_wb__DOT__rst_i = vlSelf->sys_rst;
    vlSelf->main_soclinux_uart_rx_fifo_source_last 
        = vlSelf->main_soclinux_uart_rx_fifo_fifo_out_last;
    vlSelf->main_soclinux_uart_rx_fifo_source_first 
        = vlSelf->main_soclinux_uart_rx_fifo_fifo_out_first;
    vlSelf->IOBUF_4__DOT__I = vlSelf->builder_impl_xilinxsdrtristateimpl1___05Fo;
    vlSelf->IOBUF_4__DOT__T = vlSelf->builder_impl_xilinxsdrtristateimpl1_oe_n;
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__b_addr_i = vlSelf->spi_wb__DOT__tx_word_addr;
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__b_req_i = vlSelf->spi_wb__DOT__tx_b_req;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_req_i = vlSelf->spi_wb__DOT__rx_b_req;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_addr_i = vlSelf->spi_wb__DOT__rx_b_addr;
    vlSelf->FDCE_1__DOT__D = vlSelf->builder_soclinux_reset0;
    vlSelf->FDCE_2__DOT__D = vlSelf->builder_soclinux_reset1;
    vlSelf->FDCE_3__DOT__D = vlSelf->builder_soclinux_reset2;
    vlSelf->FDCE_4__DOT__D = vlSelf->builder_soclinux_reset3;
    vlSelf->FDCE_5__DOT__D = vlSelf->builder_soclinux_reset4;
    vlSelf->FDCE_6__DOT__D = vlSelf->builder_soclinux_reset5;
    vlSelf->FDCE_7__DOT__D = vlSelf->builder_soclinux_reset6;
    vlSelf->PLLE2_ADV__DOT__RST = vlSelf->builder_soclinux_reset7;
    vlSelf->FDPE_1__DOT__D = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0_rst_meta;
    vlSelf->FDPE_3__DOT__D = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1_rst_meta;
    vlSelf->builder_csr_bankarray_csrbank1_status_w 
        = vlSelf->main_hyperram_status_status;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_wdata_i = vlSelf->spi_wb__DOT__rx_b_wdata;
    vlSelf->builder_csr_bankarray_csrbank3_phy_dataw_status_w 
        = vlSelf->soclinux_dataw_status;
    vlSelf->builder_csr_bankarray_csrbank5_ev_status_w 
        = vlSelf->soclinux_status_status;
    vlSelf->soclinux_datar_crc16_crc01 = ((0xe000U 
                                           & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                              << 1U)) 
                                          | ((0x1000U 
                                              & ((0xfffff000U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                     << 1U)) 
                                                 ^ 
                                                 ((IData)(__VdfgRegularize_h278c091a_11_2) 
                                                  << 0xcU))) 
                                             | ((0xfc0U 
                                                 & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                    << 1U)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                           << 1U)) 
                                                       ^ 
                                                       ((IData)(__VdfgRegularize_h278c091a_11_2) 
                                                        << 5U))) 
                                                   | ((0x1eU 
                                                       & ((IData)(vlSelf->soclinux_datar_crc16_crc00) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_11_2))))));
    vlSelf->soclinux_datar_crc16_crc11 = ((0xe000U 
                                           & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                              << 1U)) 
                                          | ((0x1000U 
                                              & ((0xfffff000U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                     << 1U)) 
                                                 ^ 
                                                 ((IData)(__VdfgRegularize_h278c091a_11_6) 
                                                  << 0xcU))) 
                                             | ((0xfc0U 
                                                 & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                    << 1U)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                           << 1U)) 
                                                       ^ 
                                                       ((IData)(__VdfgRegularize_h278c091a_11_6) 
                                                        << 5U))) 
                                                   | ((0x1eU 
                                                       & ((IData)(vlSelf->soclinux_datar_crc16_crc10) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_11_6))))));
    vlSelf->soclinux_datar_crc16_crc21 = ((0xe000U 
                                           & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                              << 1U)) 
                                          | ((0x1000U 
                                              & ((0xfffff000U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                     << 1U)) 
                                                 ^ 
                                                 ((IData)(__VdfgRegularize_h278c091a_11_10) 
                                                  << 0xcU))) 
                                             | ((0xfc0U 
                                                 & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                    << 1U)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                           << 1U)) 
                                                       ^ 
                                                       ((IData)(__VdfgRegularize_h278c091a_11_10) 
                                                        << 5U))) 
                                                   | ((0x1eU 
                                                       & ((IData)(vlSelf->soclinux_datar_crc16_crc20) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_11_10))))));
    vlSelf->soclinux_datar_crc16_crc31 = ((0xe000U 
                                           & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                              << 1U)) 
                                          | ((0x1000U 
                                              & ((0xfffff000U 
                                                  & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                                     << 1U)) 
                                                 ^ 
                                                 ((IData)(__VdfgRegularize_h278c091a_11_12) 
                                                  << 0xcU))) 
                                             | ((0xfc0U 
                                                 & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                                    << 1U)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                                           << 1U)) 
                                                       ^ 
                                                       ((IData)(__VdfgRegularize_h278c091a_11_12) 
                                                        << 5U))) 
                                                   | ((0x1eU 
                                                       & ((IData)(vlSelf->soclinux_datar_crc16_crc30) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_11_12))))));
    vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value0 = 0U;
    if ((1U != (IData)(vlSelf->builder_soclinux_fsm_state))) {
        if ((2U != (IData)(vlSelf->builder_soclinux_fsm_state))) {
            vlSelf->main_hyperram_done = 1U;
        }
    }
    vlSelf->builder_csr_bankarray_csrbank1_reg_status_w 
        = vlSelf->main_hyperram_done;
    vlSelf->main_hyperram_reg_status_status = vlSelf->main_hyperram_done;
    vlSelf->soclinux_block2mem_wishbonedmawriter_done_status 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_done;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_done_w 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_done;
    vlSelf->soclinux_mem2block_dma_done_status = vlSelf->soclinux_mem2block_dma_done;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_done_w 
        = vlSelf->soclinux_mem2block_dma_done;
    vlSelf->builder_csr_bankarray_csrbank3_core_data_event_w 
        = vlSelf->soclinux_core_data_event_status;
    vlSelf->main_soclinux_master_width = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_width;
    vlSelf->main_soclinux_master_tx_fifo_sink_sink_payload_width 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_width;
    vlSelf->main_soclinux_master_mask = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_mask;
    vlSelf->main_soclinux_master_tx_fifo_sink_sink_payload_mask 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_mask;
    vlSelf->soclinux_block2mem_fifo_source_last = vlSelf->soclinux_block2mem_converter_sink_last;
    vlSelf->soclinux_block2mem_fifo_fifo_out_last = vlSelf->soclinux_block2mem_converter_sink_last;
    vlSelf->soclinux_block2mem_fifo_source_first = vlSelf->soclinux_block2mem_converter_sink_first;
    vlSelf->soclinux_block2mem_fifo_fifo_out_first 
        = vlSelf->soclinux_block2mem_converter_sink_first;
    vlSelf->soclinux_block2mem_fifo_source_payload_data 
        = vlSelf->soclinux_block2mem_converter_sink_payload_data;
    vlSelf->soclinux_block2mem_fifo_fifo_out_payload_data 
        = vlSelf->soclinux_block2mem_converter_sink_payload_data;
    vlSelf->main_soclinux_uart_rx_fifo_source_payload_data 
        = vlSelf->main_soclinux_uart_rxtx_w;
    vlSelf->main_soclinux_uart_rx_fifo_fifo_out_payload_data 
        = vlSelf->main_soclinux_uart_rxtx_w;
    vlSelf->main_hyperramsdrphy_ios_rst_n = (1U & (~ (IData)(vlSelf->main_hyperram_rst)));
    vlSelf->main_core_rst = vlSelf->main_hyperram_rst;
    vlSelf->main_syncfifo0_fifo_out_last = vlSelf->main_hyperramsdrphy_sink_last;
    vlSelf->main_syncfifo0_source_last = vlSelf->main_hyperramsdrphy_sink_last;
    vlSelf->main_syncfifo0_fifo_out_first = vlSelf->main_hyperramsdrphy_sink_first;
    vlSelf->main_syncfifo0_source_first = vlSelf->main_hyperramsdrphy_sink_first;
    vlSelf->main_syncfifo0_fifo_out_payload_dat_w = vlSelf->main_hyperramsdrphy_sink_payload_dat_w;
    vlSelf->main_syncfifo0_source_payload_dat_w = vlSelf->main_hyperramsdrphy_sink_payload_dat_w;
    vlSelf->main_syncfifo0_fifo_out_payload_cmd = vlSelf->main_hyperramsdrphy_sink_payload_cmd;
    vlSelf->main_syncfifo0_source_payload_cmd = vlSelf->main_hyperramsdrphy_sink_payload_cmd;
    vlSelf->main_core_cmd_tx_conv_converter_source_first 
        = ((IData)(vlSelf->main_core_cmd_tx_conv_converter_sink_first) 
           & (IData)(vlSelf->main_core_cmd_tx_conv_converter_first));
    vlSelf->spi_wb__DOT__spi_copi_o = vlSelf->spi_eth_mosi;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__spi_copi_o 
        = vlSelf->spi_eth_mosi;
    vlSelf->soclinux_core_cmd_event_status = 0U;
    vlSelf->soclinux_core_cmd_event_status = (((IData)(vlSelf->soclinux_core_csrfield_crc1) 
                                               << 3U) 
                                              | (((IData)(vlSelf->soclinux_core_csrfield_timeout0) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->soclinux_core_csrfield_error0) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->soclinux_core_csrfield_done0))));
    vlSelf->main_soclinux_uart_uart_source_first = vlSelf->main_soclinux_tx_sink_first;
    vlSelf->main_soclinux_uart_tx_fifo_source_first 
        = vlSelf->main_soclinux_tx_sink_first;
    vlSelf->main_soclinux_uart_tx_fifo_fifo_out_first 
        = vlSelf->main_soclinux_tx_sink_first;
    vlSelf->main_soclinux_uart_uart_source_last = vlSelf->main_soclinux_tx_sink_last;
    vlSelf->main_soclinux_uart_tx_fifo_source_last 
        = vlSelf->main_soclinux_tx_sink_last;
    vlSelf->main_soclinux_uart_tx_fifo_fifo_out_last 
        = vlSelf->main_soclinux_tx_sink_last;
    vlSelf->soclinux_mem2block_dma_source_source_payload_data 
        = vlSelf->soclinux_mem2block_converter_converter_sink_payload_data;
    vlSelf->soclinux_mem2block_dma_fifo_source_payload_data 
        = vlSelf->soclinux_mem2block_converter_converter_sink_payload_data;
    vlSelf->soclinux_mem2block_dma_fifo_fifo_out_payload_data 
        = vlSelf->soclinux_mem2block_converter_converter_sink_payload_data;
    vlSelf->soclinux_eventmanager_status_status = 0U;
    vlSelf->soclinux_eventmanager_status_status = (
                                                   ((IData)(vlSelf->soclinux_eventmanager_cmd_done0) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->soclinux_core_data_done) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->soclinux_mem2block_dma_status) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->soclinux_block2mem_dma_status) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->soclinux_card_detect_status1)))));
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    vlSelf->soclinux_dataw_crc16_reset = 1U;
                }
            }
        }
    }
    vlSelf->soclinux_dataw_crc16_crc0_reset = vlSelf->soclinux_dataw_crc16_reset;
    vlSelf->soclinux_dataw_crc16_crc1_reset = vlSelf->soclinux_dataw_crc16_reset;
    vlSelf->soclinux_dataw_crc16_crc2_reset = vlSelf->soclinux_dataw_crc16_reset;
    vlSelf->soclinux_dataw_crc16_crc3_reset = vlSelf->soclinux_dataw_crc16_reset;
    vlSelf->main_syncfifo0_fifo_out_payload_dq_oe = vlSelf->main_hyperramsdrphy_sink_payload_dq_oe;
    vlSelf->main_syncfifo0_source_payload_dq_oe = vlSelf->main_hyperramsdrphy_sink_payload_dq_oe;
    vlSelf->main_syncfifo0_fifo_out_payload_rwds = vlSelf->main_hyperramsdrphy_sink_payload_rwds;
    vlSelf->main_syncfifo0_source_payload_rwds = vlSelf->main_hyperramsdrphy_sink_payload_rwds;
    vlSelf->main_syncfifo0_fifo_out_payload_rwds_oe 
        = vlSelf->main_hyperramsdrphy_sink_payload_rwds_oe;
    vlSelf->main_syncfifo0_source_payload_rwds_oe = vlSelf->main_hyperramsdrphy_sink_payload_rwds_oe;
    vlSelf->main_soclinux_timer_zero_trigger = vlSelf->builder_csr_bankarray_csrbank6_ev_status_w;
    vlSelf->main_soclinux_timer_zero_status = vlSelf->builder_csr_bankarray_csrbank6_ev_status_w;
    vlSelf->main_soclinux_timer_zero0 = vlSelf->builder_csr_bankarray_csrbank6_ev_status_w;
    vlSelf->main_soclinux_timer_status_status = vlSelf->builder_csr_bankarray_csrbank6_ev_status_w;
    vlSelf->main_syncfifo0_sink_last = vlSelf->main_syncfifo0_fifo_in_last;
    vlSelf->main_tx_cdc_cdc_source_last = vlSelf->main_syncfifo0_fifo_in_last;
    vlSelf->main_tx_cdc_source_source_last = vlSelf->main_syncfifo0_fifo_in_last;
    vlSelf->main_tx_cdc_cdc_fifo_out_last = vlSelf->main_syncfifo0_fifo_in_last;
    vlSelf->main_syncfifo0_sink_first = vlSelf->main_syncfifo0_fifo_in_first;
    vlSelf->main_tx_cdc_cdc_source_first = vlSelf->main_syncfifo0_fifo_in_first;
    vlSelf->main_tx_cdc_source_source_first = vlSelf->main_syncfifo0_fifo_in_first;
    if ((1U != (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
        if ((2U != (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
            vlSelf->main_hyperramsdrphy_ios_cs_n = 1U;
        }
        vlSelf->main_tx_cdc_cdc_fifo_out_first = vlSelf->main_syncfifo0_fifo_in_first;
        vlSelf->main_syncfifo0_sink_payload_rwds_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
        vlSelf->main_tx_cdc_cdc_source_payload_rwds_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
        vlSelf->main_tx_cdc_source_source_payload_rwds_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_rwds_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
        vlSelf->main_syncfifo0_sink_payload_rwds = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
        vlSelf->main_tx_cdc_cdc_source_payload_rwds 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
        vlSelf->main_tx_cdc_source_source_payload_rwds 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_rwds 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
        vlSelf->main_syncfifo0_sink_payload_dq_oe = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
        vlSelf->main_tx_cdc_cdc_source_payload_dq_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
        vlSelf->main_tx_cdc_source_source_payload_dq_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_dq_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
        vlSelf->main_syncfifo0_sink_payload_dq = vlSelf->main_syncfifo0_fifo_in_payload_dq;
        vlSelf->main_tx_cdc_cdc_source_payload_dq = vlSelf->main_syncfifo0_fifo_in_payload_dq;
        vlSelf->main_tx_cdc_source_source_payload_dq 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_dq 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq;
        vlSelf->main_syncfifo0_sink_payload_dat_r = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
        vlSelf->main_tx_cdc_cdc_source_payload_dat_r 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
        vlSelf->main_tx_cdc_source_source_payload_dat_r 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_dat_r 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
        vlSelf->main_syncfifo0_sink_payload_dat_w = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
        vlSelf->main_tx_cdc_cdc_source_payload_dat_w 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
        vlSelf->main_tx_cdc_source_source_payload_dat_w 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_dat_w 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
        vlSelf->main_syncfifo0_sink_payload_cmd = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
        vlSelf->main_tx_cdc_cdc_source_payload_cmd 
            = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
        vlSelf->main_tx_cdc_source_source_payload_cmd 
            = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_cmd 
            = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
        vlSelf->spi_wb__DOT__u_spi_core__DOT__cpol_i 
            = vlSelf->spi_wb__DOT__spi_cpol;
        vlSelf->main_core_reg_rx_conv_source_payload_dq = 0U;
        vlSelf->main_core_reg_rx_conv_source_payload_dq 
            = vlSelf->main_core_reg_rx_conv_source_source_payload_data;
        vlSelf->main_syncfifo1_fifo_out_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
        vlSelf->main_syncfifo1_source_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
        vlSelf->main_rx_cdc_sink_sink_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
        vlSelf->main_rx_cdc_cdc_sink_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
        vlSelf->main_syncfifo1_fifo_out_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
        vlSelf->main_syncfifo1_source_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
        vlSelf->main_rx_cdc_sink_sink_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
        vlSelf->main_rx_cdc_cdc_sink_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
        vlSelf->main_syncfifo1_fifo_out_payload_dq 
            = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
        vlSelf->main_syncfifo1_source_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
        vlSelf->main_rx_cdc_sink_sink_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
        vlSelf->main_rx_cdc_cdc_sink_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
        vlSelf->soclinux_mem2block_source_source_first 
            = vlSelf->soclinux_core_sink_first;
        vlSelf->soclinux_mem2block_fifo_source_first 
            = vlSelf->soclinux_core_sink_first;
        vlSelf->soclinux_mem2block_fifo_fifo_out_first 
            = vlSelf->soclinux_core_sink_first;
        vlSelf->soclinux_dataw_sink_first = 0U;
        if ((2U == (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
            vlSelf->main_hyperramsdrphy_source_last = 1U;
        }
    } else {
        vlSelf->main_tx_cdc_cdc_fifo_out_first = vlSelf->main_syncfifo0_fifo_in_first;
        vlSelf->main_syncfifo0_sink_payload_rwds_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
        vlSelf->main_tx_cdc_cdc_source_payload_rwds_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
        vlSelf->main_tx_cdc_source_source_payload_rwds_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_rwds_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
        vlSelf->main_syncfifo0_sink_payload_rwds = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
        vlSelf->main_tx_cdc_cdc_source_payload_rwds 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
        vlSelf->main_tx_cdc_source_source_payload_rwds 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_rwds 
            = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
        vlSelf->main_syncfifo0_sink_payload_dq_oe = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
        vlSelf->main_tx_cdc_cdc_source_payload_dq_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
        vlSelf->main_tx_cdc_source_source_payload_dq_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_dq_oe 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
        vlSelf->main_syncfifo0_sink_payload_dq = vlSelf->main_syncfifo0_fifo_in_payload_dq;
        vlSelf->main_tx_cdc_cdc_source_payload_dq = vlSelf->main_syncfifo0_fifo_in_payload_dq;
        vlSelf->main_tx_cdc_source_source_payload_dq 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_dq 
            = vlSelf->main_syncfifo0_fifo_in_payload_dq;
        vlSelf->main_syncfifo0_sink_payload_dat_r = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
        vlSelf->main_tx_cdc_cdc_source_payload_dat_r 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
        vlSelf->main_tx_cdc_source_source_payload_dat_r 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_dat_r 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
        vlSelf->main_syncfifo0_sink_payload_dat_w = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
        vlSelf->main_tx_cdc_cdc_source_payload_dat_w 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
        vlSelf->main_tx_cdc_source_source_payload_dat_w 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_dat_w 
            = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
        vlSelf->main_syncfifo0_sink_payload_cmd = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
        vlSelf->main_tx_cdc_cdc_source_payload_cmd 
            = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
        vlSelf->main_tx_cdc_source_source_payload_cmd 
            = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
        vlSelf->main_tx_cdc_cdc_fifo_out_payload_cmd 
            = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
        vlSelf->spi_wb__DOT__u_spi_core__DOT__cpol_i 
            = vlSelf->spi_wb__DOT__spi_cpol;
        vlSelf->main_core_reg_rx_conv_source_payload_dq = 0U;
        vlSelf->main_core_reg_rx_conv_source_payload_dq 
            = vlSelf->main_core_reg_rx_conv_source_source_payload_data;
        vlSelf->main_syncfifo1_fifo_out_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
        vlSelf->main_syncfifo1_source_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
        vlSelf->main_rx_cdc_sink_sink_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
        vlSelf->main_rx_cdc_cdc_sink_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
        vlSelf->main_syncfifo1_fifo_out_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
        vlSelf->main_syncfifo1_source_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
        vlSelf->main_rx_cdc_sink_sink_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
        vlSelf->main_rx_cdc_cdc_sink_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
        vlSelf->main_syncfifo1_fifo_out_payload_dq 
            = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
        vlSelf->main_syncfifo1_source_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
        vlSelf->main_rx_cdc_sink_sink_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
        vlSelf->main_rx_cdc_cdc_sink_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
        vlSelf->soclinux_mem2block_source_source_first 
            = vlSelf->soclinux_core_sink_first;
        vlSelf->soclinux_mem2block_fifo_source_first 
            = vlSelf->soclinux_core_sink_first;
        vlSelf->soclinux_mem2block_fifo_fifo_out_first 
            = vlSelf->soclinux_core_sink_first;
        vlSelf->soclinux_dataw_sink_first = 0U;
    }
    vlSelf->main_syncfifo1_fifo_in_last = vlSelf->main_hyperramsdrphy_source_last;
    vlSelf->main_syncfifo1_sink_last = vlSelf->main_hyperramsdrphy_source_last;
    vlSelf->FDPE__DOT__PRE = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->FDPE_1__DOT__PRE = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1 
        = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->main_soclinux_uart_rxempty_status = vlSelf->builder_csr_bankarray_csrbank7_rxempty_w;
    vlSelf->main_soclinux_uart_txempty_status = vlSelf->builder_csr_bankarray_csrbank7_txempty_w;
    vlSelf->main_soclinux_uart_uart_source_payload_data 
        = vlSelf->main_soclinux_tx_sink_payload_data;
    vlSelf->main_soclinux_uart_tx_fifo_source_payload_data 
        = vlSelf->main_soclinux_tx_sink_payload_data;
    vlSelf->main_soclinux_uart_tx_fifo_fifo_out_payload_data 
        = vlSelf->main_soclinux_tx_sink_payload_data;
    vlSelf->main_syncfifo1_syncfifo1_writable = vlSelf->main_hyperramsdrphy_source_ready;
    vlSelf->main_syncfifo1_sink_ready = vlSelf->main_hyperramsdrphy_source_ready;
    vlSelf->soclinux_dataw_crc_buf_sink_sink_ready 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_ready;
    vlSelf->soclinux_dataw_crc_converter_source_source_ready 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_ready;
    vlSelf->soclinux_dataw_crc_buf_pipe_valid_sink_ready 
        = vlSelf->soclinux_dataw_crc_converter_converter_source_ready;
    vlSelf->soclinux_dataw_crc_converter_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_dataw_crc_converter_converter_strobe_all)) 
                 | (IData)(vlSelf->soclinux_dataw_crc_converter_converter_source_ready)));
    vlSelf->soclinux_eventsourcepulse0_trigger = 0U;
    vlSelf->soclinux_eventsourcepulse0_trigger = (1U 
                                                  & ((1U 
                                                      & (IData)(vlSelf->soclinux_mode_storage))
                                                      ? 
                                                     ((IData)(vlSelf->soclinux_status) 
                                                      ^ (IData)(vlSelf->soclinux_in_pads_n_d))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->soclinux_edge_storage))
                                                       ? 
                                                      ((~ (IData)(vlSelf->soclinux_status)) 
                                                       & (IData)(vlSelf->soclinux_in_pads_n_d))
                                                       : 
                                                      ((IData)(vlSelf->soclinux_status) 
                                                       & (~ (IData)(vlSelf->soclinux_in_pads_n_d))))));
    vlSelf->soclinux_eventsourcepulse1_trigger = 0U;
    vlSelf->soclinux_eventsourcepulse1_trigger = (1U 
                                                  & ((2U 
                                                      & (IData)(vlSelf->soclinux_mode_storage))
                                                      ? 
                                                     (((IData)(vlSelf->soclinux_status) 
                                                       ^ (IData)(vlSelf->soclinux_in_pads_n_d)) 
                                                      >> 1U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->soclinux_edge_storage))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->soclinux_status) 
                                                         >> 1U)) 
                                                       & ((IData)(vlSelf->soclinux_in_pads_n_d) 
                                                          >> 1U))
                                                       : 
                                                      (((IData)(vlSelf->soclinux_status) 
                                                        >> 1U) 
                                                       & (~ 
                                                          ((IData)(vlSelf->soclinux_in_pads_n_d) 
                                                           >> 1U))))));
    vlSelf->soclinux_eventsourcepulse2_trigger = 0U;
    vlSelf->soclinux_eventsourcepulse2_trigger = (1U 
                                                  & ((4U 
                                                      & (IData)(vlSelf->soclinux_mode_storage))
                                                      ? 
                                                     (((IData)(vlSelf->soclinux_status) 
                                                       ^ (IData)(vlSelf->soclinux_in_pads_n_d)) 
                                                      >> 2U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soclinux_edge_storage))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->soclinux_status) 
                                                         >> 2U)) 
                                                       & ((IData)(vlSelf->soclinux_in_pads_n_d) 
                                                          >> 2U))
                                                       : 
                                                      (((IData)(vlSelf->soclinux_status) 
                                                        >> 2U) 
                                                       & (~ 
                                                          ((IData)(vlSelf->soclinux_in_pads_n_d) 
                                                           >> 2U))))));
    vlSelf->main_soclinux_uart_rx_fifo_re = vlSelf->main_soclinux_uart_rx_clear;
    vlSelf->main_soclinux_uart_rx_fifo_source_ready 
        = vlSelf->main_soclinux_uart_rx_clear;
    vlSelf->soclinux_mem2block_converter_source_source_payload_data 
        = vlSelf->soclinux_mem2block_converter_converter_source_payload_data;
    vlSelf->soclinux_mem2block_fifo_sink_payload_data 
        = vlSelf->soclinux_mem2block_converter_converter_source_payload_data;
    vlSelf->soclinux_mem2block_fifo_fifo_in_payload_data 
        = vlSelf->soclinux_mem2block_converter_converter_source_payload_data;
    vlSelf->main_soclinux_uart_rx_fifo_syncfifo_re 
        = ((IData)(vlSelf->main_soclinux_uart_rx_fifo_syncfifo_readable) 
           & ((IData)(vlSelf->builder_csr_bankarray_csrbank7_rxempty_w) 
              | (IData)(vlSelf->main_soclinux_uart_rx_clear)));
    if (vlSelf->builder_soclinux_rs232phyrx_state) {
        vlSelf->main_soclinux_rx_enable = 1U;
        if (vlSelf->main_soclinux_rx_tick) {
            vlSelf->main_soclinux_rx_count_builder_rs232phyrx_next_value_ce0 = 1U;
            vlSelf->main_soclinux_rx_data_builder_rs232phyrx_next_value_ce1 = 1U;
            vlSelf->main_soclinux_rx_count_builder_rs232phyrx_next_value0 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->main_soclinux_rx_count)));
            if ((9U == (IData)(vlSelf->main_soclinux_rx_count))) {
                vlSelf->main_soclinux_rx_source_payload_data 
                    = vlSelf->main_soclinux_rx_data;
            }
        }
    } else {
        vlSelf->main_soclinux_rx_count_builder_rs232phyrx_next_value_ce0 = 1U;
        vlSelf->main_soclinux_rx_count_builder_rs232phyrx_next_value0 = 0U;
    }
    vlSelf->main_soclinux_uart_uart_sink_payload_data 
        = vlSelf->main_soclinux_rx_source_payload_data;
    vlSelf->main_soclinux_uart_rx_fifo_sink_payload_data 
        = vlSelf->main_soclinux_rx_source_payload_data;
    vlSelf->main_soclinux_uart_rx_fifo_fifo_in_payload_data 
        = vlSelf->main_soclinux_rx_source_payload_data;
    vlSelf->main_soclinux_uart_rx_fifo_wrport_dat_w 
        = (((IData)(vlSelf->main_soclinux_rx_source_last) 
            << 9U) | (((IData)(vlSelf->main_soclinux_rx_source_first) 
                       << 8U) | (IData)(vlSelf->main_soclinux_rx_source_payload_data)));
    vlSelf->main_soclinux_uart_uart_sink_ready = vlSelf->main_soclinux_uart_rx_fifo_syncfifo_writable;
    vlSelf->main_soclinux_rx_source_ready = vlSelf->main_soclinux_uart_rx_fifo_syncfifo_writable;
    vlSelf->main_soclinux_uart_rx_fifo_sink_ready = vlSelf->main_soclinux_uart_rx_fifo_syncfifo_writable;
    vlSelf->builder_csr_bankarray_csrbank7_rxfull_w 
        = (1U & (~ (IData)(vlSelf->main_soclinux_uart_rx_fifo_syncfifo_writable)));
    vlSelf->main_crg_rst = 0U;
    if (vlSelf->main_soclinux_soc_rst) {
        vlSelf->main_crg_rst = 1U;
    }
    vlSelf->main_soclinux_reset = ((IData)(vlSelf->main_soclinux_soc_rst) 
                                   | (IData)(vlSelf->main_soclinux_cpu_rst));
    if (vlSelf->builder_soclinux_rs232phytx_state) {
        vlSelf->main_soclinux_tx_enable = 1U;
        if (vlSelf->main_soclinux_tx_tick) {
            vlSelf->main_soclinux_tx_count_builder_rs232phytx_next_value_ce0 = 1U;
            vlSelf->main_soclinux_tx_count_builder_rs232phytx_next_value0 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->main_soclinux_tx_count)));
            if ((9U == (IData)(vlSelf->main_soclinux_tx_count))) {
                vlSelf->main_soclinux_tx_sink_ready = 1U;
            }
        }
    } else {
        vlSelf->main_soclinux_tx_count_builder_rs232phytx_next_value_ce0 = 1U;
        vlSelf->main_soclinux_tx_count_builder_rs232phytx_next_value0 = 0U;
    }
    vlSelf->main_soclinux_uart_tx_fifo_re = vlSelf->main_soclinux_tx_sink_ready;
    vlSelf->main_soclinux_uart_uart_source_ready = vlSelf->main_soclinux_tx_sink_ready;
    vlSelf->main_soclinux_uart_tx_fifo_source_ready 
        = vlSelf->main_soclinux_tx_sink_ready;
    vlSelf->main_soclinux_uart_tx_fifo_syncfifo_re 
        = ((IData)(vlSelf->main_soclinux_uart_tx_fifo_syncfifo_readable) 
           & ((IData)(vlSelf->builder_csr_bankarray_csrbank7_txempty_w) 
              | (IData)(vlSelf->main_soclinux_tx_sink_ready)));
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_payload_dq_oe = 1U;
                vlSelf->main_core_source_source_payload_dat_w = 1U;
            }
        }
        vlSelf->main_tx_cdc_sink_sink_payload_dq_oe 
            = vlSelf->main_core_source_source_payload_dq_oe;
        vlSelf->main_tx_cdc_cdc_sink_payload_dq_oe 
            = vlSelf->main_core_source_source_payload_dq_oe;
        vlSelf->main_tx_cdc_cdc_fifo_in_payload_dq_oe 
            = vlSelf->main_core_source_source_payload_dq_oe;
        vlSelf->main_tx_cdc_sink_sink_payload_dat_w 
            = vlSelf->main_core_source_source_payload_dat_w;
        vlSelf->main_tx_cdc_cdc_sink_payload_dat_w 
            = vlSelf->main_core_source_source_payload_dat_w;
        vlSelf->main_tx_cdc_cdc_fifo_in_payload_dat_w 
            = vlSelf->main_core_source_source_payload_dat_w;
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
                vlSelf->main_core_source_source_payload_dat_r = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
            vlSelf->main_core_source_source_payload_dat_r = 1U;
        }
    } else {
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_payload_dq_oe = 1U;
                vlSelf->main_core_source_source_payload_dat_w = 1U;
            }
        } else if ((1U & (IData)(vlSelf->main_core_state))) {
            vlSelf->main_core_source_source_payload_dq_oe = 1U;
        }
        vlSelf->main_tx_cdc_sink_sink_payload_dq_oe 
            = vlSelf->main_core_source_source_payload_dq_oe;
        vlSelf->main_tx_cdc_cdc_sink_payload_dq_oe 
            = vlSelf->main_core_source_source_payload_dq_oe;
        vlSelf->main_tx_cdc_cdc_fifo_in_payload_dq_oe 
            = vlSelf->main_core_source_source_payload_dq_oe;
        vlSelf->main_tx_cdc_sink_sink_payload_dat_w 
            = vlSelf->main_core_source_source_payload_dat_w;
        vlSelf->main_tx_cdc_cdc_sink_payload_dat_w 
            = vlSelf->main_core_source_source_payload_dat_w;
        vlSelf->main_tx_cdc_cdc_fifo_in_payload_dat_w 
            = vlSelf->main_core_source_source_payload_dat_w;
    }
    vlSelf->main_tx_cdc_sink_sink_payload_dat_r = vlSelf->main_core_source_source_payload_dat_r;
    vlSelf->main_tx_cdc_cdc_sink_payload_dat_r = vlSelf->main_core_source_source_payload_dat_r;
    vlSelf->main_tx_cdc_cdc_fifo_in_payload_dat_r = vlSelf->main_core_source_source_payload_dat_r;
    if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
                if ((0U == (IData)(vlSelf->main_core_cycles))) {
                    vlSelf->main_core_latency_x2_main_next_value_ce0 = 1U;
                    vlSelf->main_core_latency_x2_main_next_value0 = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_payload_cmd = 1U;
            }
        }
    }
    vlSelf->main_tx_cdc_sink_sink_payload_cmd = vlSelf->main_core_source_source_payload_cmd;
    vlSelf->main_tx_cdc_cdc_sink_payload_cmd = vlSelf->main_core_source_source_payload_cmd;
    vlSelf->main_tx_cdc_cdc_fifo_in_payload_cmd = vlSelf->main_core_source_source_payload_cmd;
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_payload_rwds_oe = 1U;
            }
        }
    }
    vlSelf->main_tx_cdc_sink_sink_payload_rwds_oe = vlSelf->main_core_source_source_payload_rwds_oe;
    vlSelf->main_tx_cdc_cdc_sink_payload_rwds_oe = vlSelf->main_core_source_source_payload_rwds_oe;
    vlSelf->main_tx_cdc_cdc_fifo_in_payload_rwds_oe 
        = vlSelf->main_core_source_source_payload_rwds_oe;
    vlSelf->main_soclinux_port_mmap_user_port_sink_payload_mask 
        = vlSelf->main_soclinux_mmap_source_payload_mask;
    vlSelf->main_soclinux_port_mmap_internal_port_sink_payload_mask 
        = vlSelf->main_soclinux_mmap_source_payload_mask;
    vlSelf->builder_soclinux_tx_mux_endpoint0_sink_payload_mask 
        = vlSelf->main_soclinux_mmap_source_payload_mask;
    vlSelf->soclinux_interface0_bus_err = ((IData)(vlSelf->builder_socbushandler_shared_err) 
                                           & (1U == (IData)(vlSelf->builder_socbushandler_grant)));
    vlSelf->soclinux_interface1_bus_err = ((IData)(vlSelf->builder_socbushandler_shared_err) 
                                           & (2U == (IData)(vlSelf->builder_socbushandler_grant)));
    vlSelf->main_soclinux_pbus_err = ((IData)(vlSelf->builder_socbushandler_shared_err) 
                                      & (0U == (IData)(vlSelf->builder_socbushandler_grant)));
    vlSelf->main_rx_cdc_cdc_source_first = vlSelf->main_core_sink_sink_first;
    vlSelf->main_rx_cdc_source_source_first = vlSelf->main_core_sink_sink_first;
    vlSelf->main_rx_cdc_cdc_fifo_out_first = vlSelf->main_core_sink_sink_first;
    vlSelf->main_rx_cdc_cdc_source_last = vlSelf->main_core_sink_sink_last;
    vlSelf->main_rx_cdc_source_source_last = vlSelf->main_core_sink_sink_last;
    vlSelf->main_rx_cdc_cdc_fifo_out_last = vlSelf->main_core_sink_sink_last;
    vlSelf->main_rx_cdc_cdc_source_payload_dq = vlSelf->main_core_sink_sink_payload_dq;
    vlSelf->main_rx_cdc_source_source_payload_dq = vlSelf->main_core_sink_sink_payload_dq;
    vlSelf->main_rx_cdc_cdc_fifo_out_payload_dq = vlSelf->main_core_sink_sink_payload_dq;
    vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value_ce1 = 0U;
    vlSelf->main_soclinux_tx_data_builder_rs232phytx_next_value_ce2 = 0U;
    vlSelf->builder_soclinux_rs232phytx_next_state = 0U;
    if (vlSelf->builder_soclinux_rs232phytx_state) {
        vlSelf->builder_soclinux_rs232phytx_next_state = 1U;
        vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value1 = 0U;
        vlSelf->main_soclinux_tx_data_builder_rs232phytx_next_value2 = 0U;
        if (vlSelf->main_soclinux_tx_tick) {
            vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value_ce1 = 1U;
            vlSelf->main_soclinux_tx_data_builder_rs232phytx_next_value_ce2 = 1U;
            if ((9U == (IData)(vlSelf->main_soclinux_tx_count))) {
                vlSelf->builder_soclinux_rs232phytx_next_state = 0U;
            }
            vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value1 
                = (1U & (IData)(vlSelf->main_soclinux_tx_data));
            vlSelf->main_soclinux_tx_data_builder_rs232phytx_next_value2 
                = (0x80U | (0x7fU & ((IData)(vlSelf->main_soclinux_tx_data) 
                                     >> 1U)));
        }
    } else {
        vlSelf->builder_soclinux_rs232phytx_next_state = 0U;
        vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value1 = 0U;
        vlSelf->main_soclinux_tx_data_builder_rs232phytx_next_value2 = 0U;
        vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value_ce1 = 1U;
        vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value1 = 1U;
        if (vlSelf->main_soclinux_tx_sink_valid) {
            vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value_ce1 = 1U;
            vlSelf->main_soclinux_tx_data_builder_rs232phytx_next_value_ce2 = 1U;
            vlSelf->builder_soclinux_rs232phytx_next_state = 1U;
            vlSelf->main_soclinux_serial_tx_builder_rs232phytx_next_value1 = 0U;
            vlSelf->main_soclinux_tx_data_builder_rs232phytx_next_value2 
                = vlSelf->main_soclinux_tx_sink_payload_data;
        }
    }
    if ((8U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
        if ((4U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_wait = 1U;
            vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value_ce0 = 1U;
        } else if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_wait = 1U;
            vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value_ce0 = 1U;
        } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_wait = 1U;
            vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value_ce0 = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                    vlSelf->main_soclinux_mmap_sink_ready = 1U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                    vlSelf->main_soclinux_mmap_wait = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                    vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value_ce0 = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value_ce0 = 1U;
            }
        }
        if ((4U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                    vlSelf->main_soclinux_mmap_sink_ready = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                vlSelf->main_soclinux_mmap_sink_ready = 1U;
            }
        } else if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                vlSelf->main_soclinux_mmap_sink_ready = 1U;
            }
        }
    }
    vlSelf->main_soclinux_port_mmap_user_port_source_ready 
        = vlSelf->main_soclinux_mmap_sink_ready;
    vlSelf->main_soclinux_port_mmap_internal_port_source_ready 
        = vlSelf->main_soclinux_mmap_sink_ready;
    vlSelf->builder_soclinux_rx_demux_endpoint0_source_ready 
        = vlSelf->main_soclinux_mmap_sink_ready;
    vlSelf->main_syncfifo1_syncfifo1_readable = vlSelf->main_rx_cdc_cdc_asyncfifo_we;
    vlSelf->main_syncfifo1_source_valid = vlSelf->main_rx_cdc_cdc_asyncfifo_we;
    vlSelf->main_rx_cdc_sink_sink_valid = vlSelf->main_rx_cdc_cdc_asyncfifo_we;
    vlSelf->main_rx_cdc_cdc_sink_valid = vlSelf->main_rx_cdc_cdc_asyncfifo_we;
    vlSelf->soclinux_mem2block_fifo_syncfifo_we = vlSelf->soclinux_mem2block_converter_converter_source_valid;
    vlSelf->soclinux_mem2block_dma_source_source_valid 
        = vlSelf->soclinux_mem2block_converter_converter_source_valid;
    vlSelf->soclinux_mem2block_converter_converter_sink_valid 
        = vlSelf->soclinux_mem2block_converter_converter_source_valid;
    vlSelf->soclinux_mem2block_converter_source_source_valid 
        = vlSelf->soclinux_mem2block_converter_converter_source_valid;
    vlSelf->soclinux_mem2block_fifo_sink_valid = vlSelf->soclinux_mem2block_converter_converter_source_valid;
    vlSelf->soclinux_mem2block_dma_fifo_source_valid 
        = vlSelf->soclinux_mem2block_converter_converter_source_valid;
    vlSelf->soclinux_mem2block_dma_fifo_syncfifo_readable 
        = vlSelf->soclinux_mem2block_converter_converter_source_valid;
    vlSelf->spi_wb__DOT__tx_byte_from_buf = (0xffU 
                                             & ((2U 
                                                 & (IData)(vlSelf->spi_wb__DOT__tx_byte_lane_q))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->spi_wb__DOT__tx_byte_lane_q))
                                                  ? 
                                                 (vlSelf->spi_wb__DOT__tx_bram_rdata 
                                                  >> 0x18U)
                                                  : 
                                                 (vlSelf->spi_wb__DOT__tx_bram_rdata 
                                                  >> 0x10U))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->spi_wb__DOT__tx_byte_lane_q))
                                                  ? 
                                                 (vlSelf->spi_wb__DOT__tx_bram_rdata 
                                                  >> 8U)
                                                  : vlSelf->spi_wb__DOT__tx_bram_rdata)));
    if (vlSelf->builder_soclinux_sdphyinit_state) {
        vlSelf->soclinux_init_pads_out_payload_cmd_o = 1U;
        vlSelf->soclinux_init_pads_out_payload_cmd_oe = 1U;
        vlSelf->soclinux_init_pads_out_payload_clk = 1U;
        vlSelf->soclinux_init_pads_out_payload_data_o = 0xfU;
        vlSelf->soclinux_init_pads_out_payload_data_oe = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    vlSelf->soclinux_dataw_pads_out_payload_cmd_oe = 1U;
                    vlSelf->soclinux_dataw_pads_out_payload_cmd_o = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                          >> 1U)))) {
                vlSelf->soclinux_dataw_pads_out_payload_data_oe = 1U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    vlSelf->soclinux_dataw_pads_out_payload_cmd_oe = 1U;
                    vlSelf->soclinux_dataw_pads_out_payload_cmd_o = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                vlSelf->soclinux_dataw_pads_out_payload_data_oe = 1U;
            }
        }
    }
    vlSelf->soclinux_sdpads_data_oe = ((IData)(vlSelf->soclinux_init_pads_out_payload_data_oe) 
                                       | ((IData)(vlSelf->soclinux_cmdr_pads_out_payload_data_oe) 
                                          | ((IData)(vlSelf->soclinux_cmdw_pads_out_payload_data_oe) 
                                             | ((IData)(vlSelf->soclinux_datar_pads_out_payload_data_oe) 
                                                | (IData)(vlSelf->soclinux_dataw_pads_out_payload_data_oe)))));
    vlSelf->main_syncfifo0_sink_ready = vlSelf->main_syncfifo0_syncfifo0_writable;
    vlSelf->main_tx_cdc_source_source_ready = vlSelf->main_syncfifo0_syncfifo0_writable;
    vlSelf->main_tx_cdc_cdc_source_ready = vlSelf->main_syncfifo0_syncfifo0_writable;
    vlSelf->main_tx_cdc_cdc_asyncfifo_re = vlSelf->main_syncfifo0_syncfifo0_writable;
    vlSelf->main_syncfifo1_source_ready = vlSelf->main_rx_cdc_cdc_asyncfifo_writable;
    vlSelf->main_syncfifo1_syncfifo1_re = vlSelf->main_rx_cdc_cdc_asyncfifo_writable;
    vlSelf->main_rx_cdc_cdc_sink_ready = vlSelf->main_rx_cdc_cdc_asyncfifo_writable;
    vlSelf->main_rx_cdc_sink_sink_ready = vlSelf->main_rx_cdc_cdc_asyncfifo_writable;
    vlSelf->main_syncfifo1_do_read = ((IData)(vlSelf->main_rx_cdc_cdc_asyncfifo_we) 
                                      & (IData)(vlSelf->main_rx_cdc_cdc_asyncfifo_writable));
    vlSelf->main_rx_cdc_cdc_graycounter0_ce = ((IData)(vlSelf->main_rx_cdc_cdc_asyncfifo_writable) 
                                               & (IData)(vlSelf->main_rx_cdc_cdc_asyncfifo_we));
    vlSelf->soclinux_mem2block_fifo_syncfifo_writable 
        = vlSelf->soclinux_mem2block_converter_converter_source_ready;
    vlSelf->soclinux_mem2block_fifo_sink_ready = vlSelf->soclinux_mem2block_converter_converter_source_ready;
    vlSelf->soclinux_mem2block_converter_source_source_ready 
        = vlSelf->soclinux_mem2block_converter_converter_source_ready;
    vlSelf->soclinux_mem2block_fifo_wrport_we = ((IData)(vlSelf->soclinux_mem2block_converter_converter_source_valid) 
                                                 & ((IData)(vlSelf->soclinux_mem2block_converter_converter_source_ready) 
                                                    | (IData)(vlSelf->soclinux_mem2block_fifo_replace)));
    vlSelf->soclinux_mem2block_dma_source_source_first 
        = vlSelf->soclinux_mem2block_converter_converter_sink_first;
    vlSelf->soclinux_mem2block_dma_fifo_source_first 
        = vlSelf->soclinux_mem2block_converter_converter_sink_first;
    vlSelf->soclinux_mem2block_dma_fifo_fifo_out_first 
        = vlSelf->soclinux_mem2block_converter_converter_sink_first;
    vlSelf->soclinux_mem2block_converter_converter_source_first 
        = ((IData)(vlSelf->soclinux_mem2block_converter_converter_sink_first) 
           & (IData)(vlSelf->soclinux_mem2block_converter_converter_first));
    vlSelf->soclinux_mem2block_dma_source_source_last 
        = vlSelf->soclinux_mem2block_converter_converter_sink_last;
    vlSelf->soclinux_mem2block_dma_fifo_source_last 
        = vlSelf->soclinux_mem2block_converter_converter_sink_last;
    vlSelf->soclinux_mem2block_dma_fifo_fifo_out_last 
        = vlSelf->soclinux_mem2block_converter_converter_sink_last;
    vlSelf->main_syncfifo0_sink_valid = vlSelf->main_syncfifo0_syncfifo0_we;
    vlSelf->main_tx_cdc_cdc_source_valid = vlSelf->main_syncfifo0_syncfifo0_we;
    vlSelf->main_tx_cdc_source_source_valid = vlSelf->main_syncfifo0_syncfifo0_we;
    vlSelf->main_tx_cdc_cdc_asyncfifo_readable = vlSelf->main_syncfifo0_syncfifo0_we;
    vlSelf->main_syncfifo0_wrport_we = ((IData)(vlSelf->main_syncfifo0_syncfifo0_we) 
                                        & ((IData)(vlSelf->main_syncfifo0_syncfifo0_writable) 
                                           | (IData)(vlSelf->main_syncfifo0_replace)));
    vlSelf->main_tx_cdc_cdc_graycounter1_ce = ((IData)(vlSelf->main_syncfifo0_syncfifo0_we) 
                                               & (IData)(vlSelf->main_syncfifo0_syncfifo0_writable));
    vlSelf->main_soclinux_rx_data_builder_rs232phyrx_next_value1 = 0U;
    vlSelf->builder_soclinux_rs232phyrx_next_state = 0U;
    if (vlSelf->builder_soclinux_rs232phyrx_state) {
        vlSelf->builder_soclinux_rs232phyrx_next_state = 1U;
        vlSelf->main_soclinux_rx_source_valid = 0U;
        if (vlSelf->main_soclinux_rx_tick) {
            vlSelf->main_soclinux_rx_data_builder_rs232phyrx_next_value1 
                = (((IData)(vlSelf->main_soclinux_rx_rx) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->main_soclinux_rx_data) 
                                       >> 1U)));
            if ((9U == (IData)(vlSelf->main_soclinux_rx_count))) {
                vlSelf->builder_soclinux_rs232phyrx_next_state = 0U;
                vlSelf->main_soclinux_rx_source_valid 
                    = vlSelf->main_soclinux_rx_rx;
            }
        }
    } else {
        vlSelf->builder_soclinux_rs232phyrx_next_state = 0U;
        vlSelf->main_soclinux_rx_source_valid = 0U;
        if (((~ (IData)(vlSelf->main_soclinux_rx_rx)) 
             & (IData)(vlSelf->main_soclinux_rx_rx_d))) {
            vlSelf->builder_soclinux_rs232phyrx_next_state = 1U;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_cmd_tx_conv_converter_sink_valid = 1U;
            }
        }
        vlSelf->main_core_cmd_tx_conv_converter_source_valid 
            = vlSelf->main_core_cmd_tx_conv_converter_sink_valid;
        vlSelf->main_core_cmd_tx_conv_source_source_valid 
            = vlSelf->main_core_cmd_tx_conv_converter_sink_valid;
        vlSelf->main_core_reg_tx_conv_source_source_last 
            = vlSelf->main_core_reg_tx_conv_source_last;
        vlSelf->main_core_reg_tx_conv_converter_source_last 
            = vlSelf->main_core_reg_tx_conv_source_last;
        vlSelf->main_syncfifo0_fifo_out_payload_dq 
            = vlSelf->main_hyperramsdrphy_sink_payload_dq;
        vlSelf->main_syncfifo0_source_payload_dq = vlSelf->main_hyperramsdrphy_sink_payload_dq;
        vlSelf->spi_wb__DOT__u_spi_core__DOT__msb_first_i 
            = vlSelf->spi_wb__DOT__spi_msb_first;
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_reg_tx_conv_sink_valid = 1U;
            }
        }
    } else {
        vlSelf->main_core_cmd_tx_conv_converter_source_valid 
            = vlSelf->main_core_cmd_tx_conv_converter_sink_valid;
        vlSelf->main_core_cmd_tx_conv_source_source_valid 
            = vlSelf->main_core_cmd_tx_conv_converter_sink_valid;
        vlSelf->main_core_reg_tx_conv_source_source_last 
            = vlSelf->main_core_reg_tx_conv_source_last;
        vlSelf->main_core_reg_tx_conv_converter_source_last 
            = vlSelf->main_core_reg_tx_conv_source_last;
        vlSelf->main_syncfifo0_fifo_out_payload_dq 
            = vlSelf->main_hyperramsdrphy_sink_payload_dq;
        vlSelf->main_syncfifo0_source_payload_dq = vlSelf->main_hyperramsdrphy_sink_payload_dq;
        vlSelf->spi_wb__DOT__u_spi_core__DOT__msb_first_i 
            = vlSelf->spi_wb__DOT__spi_msb_first;
    }
    if ((1U == (IData)(vlSelf->builder_soclinux_sdmem2blockdma_state))) {
        vlSelf->soclinux_mem2block_dma_sink_sink_valid = 1U;
    }
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydatar_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydatar_state)))) {
                vlSelf->soclinux_datar_source_source_first 
                    = (0U == (IData)(vlSelf->soclinux_datar_count));
            }
        }
    }
    if ((8U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    vlSelf->soclinux_dataw_pads_out_payload_clk = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        vlSelf->soclinux_dataw_pads_out_payload_clk = 1U;
    } else if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        vlSelf->soclinux_dataw_pads_out_payload_clk = 1U;
    } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        vlSelf->soclinux_dataw_pads_out_payload_clk = 1U;
    }
    if ((4U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydatar_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydatar_state)))) {
                vlSelf->soclinux_datar_source_source_payload_status = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
        if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydatar_state)))) {
            vlSelf->soclinux_datar_source_source_payload_status 
                = ((IData)(vlSelf->soclinux_datar_crc_error)
                    ? 5U : 0U);
        }
    }
    if (vlSelf->builder_soclinux_state) {
        vlSelf->builder_soclinux_interface0_ack = 1U;
    }
    if ((4U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
            vlSelf->soclinux_cmdr_timeout_builder_sdphycmdr_next_value_ce0 = 1U;
            vlSelf->soclinux_cmdr_timeout_builder_sdphycmdr_next_value0 
                = vlSelf->soclinux_cmdr_timeout_storage;
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphycmdr_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphycmdr_state)))) {
                vlSelf->soclinux_cmdr_pads_out_payload_cmd_oe = 1U;
                vlSelf->soclinux_cmdr_pads_out_payload_cmd_o = 1U;
                vlSelf->soclinux_cmdr_pads_out_payload_clk = 1U;
            }
        }
    } else {
        vlSelf->soclinux_cmdr_timeout_builder_sdphycmdr_next_value_ce0 = 1U;
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
            vlSelf->soclinux_cmdr_timeout_builder_sdphycmdr_next_value0 
                = ((1U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))
                    ? (vlSelf->soclinux_cmdr_timeout 
                       - (IData)(1U)) : (vlSelf->soclinux_cmdr_timeout 
                                         - (IData)(1U)));
            vlSelf->soclinux_cmdr_pads_out_payload_clk = 1U;
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
            vlSelf->soclinux_cmdr_timeout_builder_sdphycmdr_next_value0 
                = (vlSelf->soclinux_cmdr_timeout - (IData)(1U));
            vlSelf->soclinux_cmdr_pads_out_payload_clk = 1U;
        } else {
            vlSelf->soclinux_cmdr_timeout_builder_sdphycmdr_next_value0 
                = vlSelf->soclinux_cmdr_timeout_storage;
        }
    }
    if ((1U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
        vlSelf->main_soclinux_en = 1U;
    }
    if ((1U != (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
        if ((2U != (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
            if ((3U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
                vlSelf->main_soclinux_source_valid = 1U;
            }
        }
    }
    if ((8U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
        if ((4U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value0 
                = ((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                   & (~ (IData)(vlSelf->main_soclinux_mmap_done)));
        } else if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value0 
                = ((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                   & (~ (IData)(vlSelf->main_soclinux_mmap_done)));
        } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value0 
                = ((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                   & (~ (IData)(vlSelf->main_soclinux_mmap_done)));
        }
    } else if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value0 = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
            vlSelf->main_soclinux_mmap_burst_cs_builder_litespimmap_next_value0 
                = ((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                   & (~ (IData)(vlSelf->main_soclinux_mmap_done)));
        }
    }
    if ((1U == (IData)(vlSelf->builder_soclinux_fsm_state))) {
        vlSelf->main_core_reg_dat_w = vlSelf->main_hyperram_reg_wdata_storage;
        vlSelf->main_core_reg_we = 1U;
        vlSelf->main_core_reg_stb = 1U;
    } else if ((2U == (IData)(vlSelf->builder_soclinux_fsm_state))) {
        vlSelf->main_core_reg_we = 0U;
        vlSelf->main_core_reg_stb = 1U;
    }
    if ((4U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_data_done_builder_sdcore_next_value_ce1 = 1U;
            vlSelf->soclinux_core_data_done_builder_sdcore_next_value1 = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_data_done_builder_sdcore_next_value_ce1 = 1U;
                vlSelf->soclinux_core_data_done_builder_sdcore_next_value1 = 0U;
                vlSelf->soclinux_core_cmd_error_builder_sdcore_next_value4 = 0U;
                vlSelf->soclinux_core_cmd_error_builder_sdcore_next_value_ce4 = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_data_done_builder_sdcore_next_value_ce1 = 1U;
            vlSelf->soclinux_core_data_done_builder_sdcore_next_value1 = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_data_done_builder_sdcore_next_value_ce1 = 1U;
                vlSelf->soclinux_core_data_done_builder_sdcore_next_value1 = 0U;
                vlSelf->soclinux_core_cmd_error_builder_sdcore_next_value4 = 0U;
                vlSelf->soclinux_core_cmd_error_builder_sdcore_next_value_ce4 = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
                vlSelf->soclinux_datar_sink_last = 
                    (vlSelf->soclinux_core_data_count 
                     == (vlSelf->soclinux_core_block_count_storage 
                         - (IData)(1U)));
                vlSelf->soclinux_datar_sink_valid = 1U;
                vlSelf->soclinux_datar_sink_payload_block_length 
                    = vlSelf->soclinux_core_block_length_storage;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
            vlSelf->soclinux_core_data_done_builder_sdcore_next_value_ce1 = 1U;
            vlSelf->soclinux_core_data_done_builder_sdcore_next_value1 = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_data_done_builder_sdcore_next_value_ce1 = 1U;
                vlSelf->soclinux_core_data_done_builder_sdcore_next_value1 = 0U;
                vlSelf->soclinux_core_cmd_error_builder_sdcore_next_value4 = 0U;
                vlSelf->soclinux_core_cmd_error_builder_sdcore_next_value_ce4 = 1U;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
                vlSelf->soclinux_dataw_source_source_ready = 1U;
                vlSelf->soclinux_dataw_sink_first = vlSelf->soclinux_core_sink_first;
            }
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
                vlSelf->soclinux_cmdr_sink_valid = 1U;
                vlSelf->soclinux_cmdr_source_source_ready = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
                vlSelf->soclinux_cmdw_sink_valid = 1U;
            }
        }
    }
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_dat_tx_conv_sink_valid = 1U;
                vlSelf->main_core_dat_tx_conv_sink_payload_dq 
                    = vlSelf->main_core_bus_dat_w1;
                vlSelf->main_core_dat_tx_conv_sink_payload_rwds 
                    = (0xfU & (~ (IData)(vlSelf->main_core_bus_sel1)));
            }
        }
    }
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_o 
        = ((IData)(vlSelf->spi_wb__DOT__spi_msb_first)
            ? (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__cipo_shift_q)
            : ([&]() {
                vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in 
                    = vlSelf->spi_wb__DOT__u_spi_core__DOT__cipo_shift_q;
                vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out 
                    = ((0xf8U & (IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out)) 
                       | ((4U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                 >> 3U)) | ((2U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                >> 7U)))));
                vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out 
                    = ((0xc7U & (IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out)) 
                       | ((0x20U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                    << 3U)) | ((0x10U 
                                                & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                   << 1U)) 
                                               | (8U 
                                                  & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                     >> 1U)))));
                vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out 
                    = ((0x3fU & (IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out)) 
                       | ((0x80U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                    << 7U)) | (0x40U 
                                               & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                  << 5U))));
                vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__Vfuncout 
                    = vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out;
            }(), (IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__Vfuncout)));
    vlSelf->main_core_dat_rx_conv_sink_ready = vlSelf->main_core_dat_rx_conv_converter_sink_ready;
    vlSelf->main_core_reg_rx_conv_sink_ready = vlSelf->main_core_reg_rx_conv_converter_sink_ready;
    vlSelf->main_soclinux_port_mmap_user_port_sink_payload_len 
        = vlSelf->main_soclinux_mmap_source_payload_len;
    vlSelf->main_soclinux_port_mmap_internal_port_sink_payload_len 
        = vlSelf->main_soclinux_mmap_source_payload_len;
    vlSelf->builder_soclinux_tx_mux_endpoint0_sink_payload_len 
        = vlSelf->main_soclinux_mmap_source_payload_len;
    vlSelf->main_core_dat_tx_conv_source_first = ((IData)(vlSelf->main_core_dat_tx_conv_sink_first) 
                                                  & (IData)(vlSelf->main_core_dat_tx_conv_converter_first));
    vlSelf->main_core_reg_tx_conv_source_first = ((IData)(vlSelf->main_core_reg_tx_conv_converter_first) 
                                                  & (IData)(vlSelf->main_core_reg_tx_conv_sink_first));
    vlSelf->main_soclinux_posedge = ((IData)(vlSelf->main_soclinux_en) 
                                     & ((~ (IData)(vlSelf->main_soclinux_clk)) 
                                        & (IData)(__VdfgRegularize_h278c091a_69_0)));
    vlSelf->main_soclinux_negedge = ((IData)(vlSelf->main_soclinux_en) 
                                     & ((IData)(vlSelf->main_soclinux_clk) 
                                        & (IData)(__VdfgRegularize_h278c091a_69_0)));
    vlSelf->main_core_reg_tx_conv_converter_source_valid 
        = vlSelf->main_core_reg_tx_conv_sink_valid;
    vlSelf->main_core_reg_tx_conv_converter_sink_valid 
        = vlSelf->main_core_reg_tx_conv_sink_valid;
    vlSelf->main_core_reg_tx_conv_source_source_valid 
        = vlSelf->main_core_reg_tx_conv_sink_valid;
    vlSelf->main_core_reg_tx_conv_source_valid = vlSelf->main_core_reg_tx_conv_sink_valid;
    vlSelf->main_core_dat_tx_conv_converter_source_valid 
        = vlSelf->main_core_dat_tx_conv_sink_valid;
    vlSelf->main_core_dat_tx_conv_converter_sink_valid 
        = vlSelf->main_core_dat_tx_conv_sink_valid;
    vlSelf->main_core_dat_tx_conv_source_source_valid 
        = vlSelf->main_core_dat_tx_conv_sink_valid;
    vlSelf->main_core_dat_tx_conv_source_valid = vlSelf->main_core_dat_tx_conv_sink_valid;
    vlSelf->soclinux_mem2block_converter_converter_source_payload_valid_token_count 
        = vlSelf->soclinux_mem2block_converter_converter_last;
    vlSelf->soclinux_mem2block_converter_converter_sink_ready 
        = ((IData)(vlSelf->soclinux_mem2block_converter_converter_last) 
           & (IData)(vlSelf->soclinux_mem2block_converter_converter_source_ready));
    vlSelf->soclinux_mem2block_converter_converter_source_last 
        = ((IData)(vlSelf->soclinux_mem2block_converter_converter_sink_last) 
           & (IData)(vlSelf->soclinux_mem2block_converter_converter_last));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__cpha_i = vlSelf->spi_wb__DOT__spi_cpha;
    vlSelf->main_syncfifo0_fifo_out_payload_dat_r = vlSelf->main_hyperramsdrphy_sink_payload_dat_r;
    vlSelf->main_syncfifo0_source_payload_dat_r = vlSelf->main_hyperramsdrphy_sink_payload_dat_r;
    vlSelf->main_rx_cdc_cdc_source_valid = vlSelf->main_core_sink_sink_valid;
    vlSelf->main_rx_cdc_source_source_valid = vlSelf->main_core_sink_sink_valid;
    vlSelf->main_rx_cdc_cdc_asyncfifo_readable = vlSelf->main_core_sink_sink_valid;
    vlSelf->user_led0 = (1U & (IData)(vlSelf->main_leds_leds));
    vlSelf->user_led1 = (1U & ((IData)(vlSelf->main_leds_leds) 
                               >> 1U));
    vlSelf->user_led2 = (1U & ((IData)(vlSelf->main_leds_leds) 
                               >> 2U));
    vlSelf->user_led3 = (1U & ((IData)(vlSelf->main_leds_leds) 
                               >> 3U));
    vlSelf->user_led4 = (1U & ((IData)(vlSelf->main_leds_leds) 
                               >> 4U));
    vlSelf->user_led5 = (1U & ((IData)(vlSelf->main_leds_leds) 
                               >> 5U));
    vlSelf->user_led6 = (1U & ((IData)(vlSelf->main_leds_leds) 
                               >> 6U));
    vlSelf->user_led7 = (1U & ((IData)(vlSelf->main_leds_leds) 
                               >> 7U));
    vlSelf->main_core_reg_adr = 0U;
    vlSelf->main_soclinux_ram_dat_r = vlSelf->main_soclinux_ram_bus_ram_bus_dat_r;
    vlSelf->soclinux_datar_datar_4x_start = (0U == (IData)(vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data));
    vlSelf->soclinux_sdpads_data_i = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_init_pads_in_payload_data_i = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_cmdw_pads_in_payload_data_i = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_cmdr_pads_in_pads_in_payload_data_i 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_dataw_pads_in_pads_in_payload_data_i 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_cmdr_cmdr_pads_in_payload_data_i 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_dataw_crc_pads_in_payload_data_i 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_datar_datar_1x_pads_in_payload_data_i 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_datar_datar_4x_pads_in_payload_data_i 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->soclinux_datar_pads_in_pads_in_payload_data_i 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_payload_data;
    vlSelf->spi_wb__DOT__wb_dat_o = vlSelf->main_spihost_bus_dat_r;
    vlSelf->spi_wb__DOT__wb_dat_o_mux = vlSelf->main_spihost_bus_dat_r;
    vlSelf->main_core_dat_rx_conv_source_payload_dq = 0U;
    vlSelf->main_core_dat_rx_conv_source_payload_dq 
        = vlSelf->main_core_dat_rx_conv_source_source_payload_data;
    vlSelf->main_soclinux_enable = vlSelf->main_soclinux_done;
    vlSelf->builder_csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->builder_csr_bankarray_sel_r) {
        vlSelf->builder_csr_bankarray_sram_bus_dat_r 
            = vlSelf->builder_csr_bankarray_dat_r;
    }
    vlSelf->main_core_dat_tx_conv_converter_sink_payload_data = 0ULL;
    vlSelf->main_core_dat_tx_conv_converter_sink_payload_data 
        = ((0xffffe0000ULL & vlSelf->main_core_dat_tx_conv_converter_sink_payload_data) 
           | (IData)((IData)(((0x1fe00U & (vlSelf->main_core_dat_tx_conv_sink_payload_dq 
                                           << 1U)) 
                              | ((0x100U & ((IData)(vlSelf->main_core_dat_tx_conv_sink_payload_rwds) 
                                            << 8U)) 
                                 | (0xffU & vlSelf->main_core_dat_tx_conv_sink_payload_dq))))));
    vlSelf->main_core_dat_tx_conv_converter_sink_payload_data 
        = ((0xff801ffffULL & vlSelf->main_core_dat_tx_conv_converter_sink_payload_data) 
           | ((QData)((IData)(((0x200U & ((IData)(vlSelf->main_core_dat_tx_conv_sink_payload_rwds) 
                                          << 7U)) | 
                               ((0x1feU & (vlSelf->main_core_dat_tx_conv_sink_payload_dq 
                                           >> 0xfU)) 
                                | (1U & ((IData)(vlSelf->main_core_dat_tx_conv_sink_payload_rwds) 
                                         >> 1U)))))) 
              << 0x11U));
    vlSelf->main_core_dat_tx_conv_converter_sink_payload_data 
        = ((0x7ffffffULL & vlSelf->main_core_dat_tx_conv_converter_sink_payload_data) 
           | ((QData)((IData)(((0x100U & ((IData)(vlSelf->main_core_dat_tx_conv_sink_payload_rwds) 
                                          << 5U)) | 
                               (vlSelf->main_core_dat_tx_conv_sink_payload_dq 
                                >> 0x18U)))) << 0x1bU));
    vlSelf->main_soclinux_port_mmap_user_port_sink_valid 
        = vlSelf->main_soclinux_mmap_source_valid;
    vlSelf->main_soclinux_port_mmap_internal_port_sink_valid 
        = vlSelf->main_soclinux_mmap_source_valid;
    vlSelf->builder_soclinux_tx_mux_endpoint0_sink_valid 
        = vlSelf->main_soclinux_mmap_source_valid;
    vlSelf->main_core_reg_tx_conv_sink_payload_dq = 0U;
    vlSelf->soclinux_mem2block_source_source_payload_data 
        = vlSelf->soclinux_core_sink_payload_data;
    vlSelf->soclinux_mem2block_fifo_source_payload_data 
        = vlSelf->soclinux_core_sink_payload_data;
    vlSelf->soclinux_mem2block_fifo_fifo_out_payload_data 
        = vlSelf->soclinux_core_sink_payload_data;
    vlSelf->soclinux_dataw_sink_payload_data = 0U;
    vlSelf->main_soclinux_sr_in_shift = 0U;
    vlSelf->spi_wb__DOT__irq_o = vlSelf->main_spihost_irq;
    vlSelf->builder_csr_bankarray_csrbank5_ev_pending_w 
        = vlSelf->soclinux_pending_status;
    vlSelf->soclinux_irq = (((IData)(vlSelf->soclinux_pending_status) 
                             & (IData)(vlSelf->soclinux_i02)) 
                            | ((((IData)(vlSelf->soclinux_pending_status) 
                                 >> 1U) & (IData)(vlSelf->soclinux_i12)) 
                               | (((IData)(vlSelf->soclinux_pending_status) 
                                   >> 2U) & (IData)(vlSelf->soclinux_i22))));
    vlSelf->soclinux_dataw_source_source_valid = 0U;
    vlSelf->soclinux_dataw_source_source_payload_status = 0U;
    vlSelf->soclinux_eventmanager_pending_status = 0U;
    vlSelf->soclinux_eventmanager_pending_status = 
        (((IData)(vlSelf->soclinux_eventmanager_cmd_done1) 
          << 4U) | (((IData)(vlSelf->soclinux_core_data_done) 
                     << 3U) | (((IData)(vlSelf->soclinux_mem2block_dma_pending) 
                                << 2U) | (((IData)(vlSelf->soclinux_block2mem_dma_pending) 
                                           << 1U) | (IData)(vlSelf->soclinux_card_detect_pending)))));
    vlSelf->main_syncfifo0_syncfifo0_readable = vlSelf->main_hyperramsdrphy_sink_valid;
    vlSelf->main_syncfifo0_source_valid = vlSelf->main_hyperramsdrphy_sink_valid;
    vlSelf->main_hyperramsdrphy_ios_rwds_oe = 0U;
    vlSelf->main_hyperramsdrphy_ios_rwds_o = 0U;
    vlSelf->main_hyperramsdrphy_ios_dq_oe = 0U;
    vlSelf->builder_soclinux_clockdomainsrenamer_next_state = 0U;
    vlSelf->builder_soclinux_clockdomainsrenamer_next_state 
        = vlSelf->builder_soclinux_clockdomainsrenamer_state;
    vlSelf->main_hyperramsdrphy_ios_clk = 0U;
    vlSelf->main_hyperramsdrphy_sink_ready = 0U;
    vlSelf->main_hyperramsdrphy_ios_dq_o = 0U;
    if ((1U == (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
        if (vlSelf->main_hyperramsdrphy_sink_valid) {
            vlSelf->main_hyperramsdrphy_ios_rwds_oe 
                = vlSelf->main_hyperramsdrphy_sink_payload_rwds_oe;
            vlSelf->main_hyperramsdrphy_ios_rwds_o 
                = vlSelf->main_hyperramsdrphy_sink_payload_rwds;
            vlSelf->main_hyperramsdrphy_ios_dq_oe = vlSelf->main_hyperramsdrphy_sink_payload_dq_oe;
            vlSelf->main_hyperramsdrphy_ios_clk = 1U;
            if (((IData)(vlSelf->main_hyperramsdrphy_rise) 
                 | (IData)(vlSelf->main_hyperramsdrphy_fall))) {
                vlSelf->main_hyperramsdrphy_sink_ready = 1U;
            }
            vlSelf->main_hyperramsdrphy_ios_dq_o = vlSelf->main_hyperramsdrphy_sink_payload_dq;
        }
        if ((1U & (~ (IData)(vlSelf->main_hyperramsdrphy_sink_valid)))) {
            vlSelf->builder_soclinux_clockdomainsrenamer_next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
        if (vlSelf->main_hyperramsdrphy_source_ready) {
            vlSelf->builder_soclinux_clockdomainsrenamer_next_state = 0U;
        }
    } else if (((IData)(vlSelf->main_hyperramsdrphy_sink_valid) 
                & (IData)(vlSelf->main_hyperramsdrphy_rise))) {
        vlSelf->builder_soclinux_clockdomainsrenamer_next_state = 1U;
    }
    __VdfgExtracted_h12075b80__0 = ((IData)(vlSelf->main_hyperramsdrphy_sink_valid) 
                                    & (IData)(vlSelf->main_hyperramsdrphy_sink_payload_dat_r));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_in_valid_i 
        = vlSelf->spi_wb__DOT__spi_data_in_valid;
    vlSelf->main_soclinux_uart_tx_fifo_sink_ready = vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable;
    vlSelf->main_soclinux_uart_tx_trigger = vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable;
    vlSelf->main_soclinux_uart_tx_status = vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable;
    vlSelf->main_soclinux_uart_tx0 = vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable;
    vlSelf->main_soclinux_uart_tx_pending = vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable;
    vlSelf->main_soclinux_uart_tx1 = vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable;
    vlSelf->builder_csr_bankarray_csrbank7_txfull_w 
        = (1U & (~ (IData)(vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable)));
    __VdfgExtracted_ha249474d__0 = (((IData)(vlSelf->main_soclinux_uart_rx_fifo_readable) 
                                     << 1U) | (IData)(vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable));
    vlSelf->main_soclinux_port_mmap_user_port_sink_payload_width 
        = vlSelf->main_soclinux_mmap_source_payload_width;
    vlSelf->main_soclinux_port_mmap_internal_port_sink_payload_width 
        = vlSelf->main_soclinux_mmap_source_payload_width;
    vlSelf->builder_soclinux_tx_mux_endpoint0_sink_payload_width 
        = vlSelf->main_soclinux_mmap_source_payload_width;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__idle_o = vlSelf->spi_wb__DOT__spi_idle;
    vlSelf->spi_wb__DOT__event_complete = ((~ (IData)(vlSelf->spi_wb__DOT__spi_idle_q)) 
                                           & (IData)(vlSelf->spi_wb__DOT__spi_idle));
    vlSelf->spi_wb__DOT__spi_data_out_ready = (1U & 
                                               (~ (IData)(vlSelf->spi_wb__DOT__spi_idle)));
    vlSelf->soclinux_mem2block_fifo_source_last = vlSelf->soclinux_mem2block_source_source_last;
    vlSelf->soclinux_mem2block_fifo_fifo_out_last = vlSelf->soclinux_mem2block_source_source_last;
    vlSelf->soclinux_core_sink_last = 0U;
    vlSelf->soclinux_core_sink_last = vlSelf->soclinux_mem2block_source_source_last;
    if (((IData)(vlSelf->soclinux_core_count) == (0x3ffU 
                                                  & ((IData)(vlSelf->soclinux_core_block_length_storage) 
                                                     - (IData)(1U))))) {
        vlSelf->soclinux_core_sink_last = 1U;
    }
    vlSelf->soclinux_block2mem_fifo_syncfifo_writable 
        = vlSelf->soclinux_block2mem_fifo_sink_ready;
    vlSelf->soclinux_core_csrfield_crc0 = vlSelf->soclinux_core_cmd_crc_en;
    vlSelf->main_core_cmd_tx_conv_converter_source_payload_valid_token_count 
        = vlSelf->main_core_cmd_tx_conv_converter_last;
    vlSelf->main_core_cmd_tx_conv_converter_source_last 
        = ((IData)(vlSelf->main_core_cmd_tx_conv_converter_sink_last) 
           & (IData)(vlSelf->main_core_cmd_tx_conv_converter_last));
    vlSelf->main_hyperram_latency = vlSelf->main_core_latency;
    vlSelf->builder_socbushandler_error = 0U;
    if (vlSelf->builder_socbushandler_done) {
        vlSelf->builder_socbushandler_error = 1U;
    }
    vlSelf->main_soclinux_crossbar_sink_valid = vlSelf->main_soclinux_source_valid;
    vlSelf->builder_soclinux_rx_demux_sink_valid = vlSelf->main_soclinux_source_valid;
    vlSelf->main_core_dat_tx_conv_converter_source_payload_valid_token_count 
        = vlSelf->main_core_dat_tx_conv_converter_last;
    vlSelf->main_core_dat_tx_conv_source_last = ((IData)(vlSelf->main_core_dat_tx_conv_sink_last) 
                                                 & (IData)(vlSelf->main_core_dat_tx_conv_converter_last));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__half_clk_period_i 
        = vlSelf->spi_wb__DOT__spi_half_clk_period;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__finish_edge = 0U;
    vlSelf->builder_soclinux_tx_mux_source_first = 0U;
    vlSelf->builder_soclinux_tx_mux_source_last = 0U;
    vlSelf->main_core_dat_rx_conv_sink_first = 0U;
    vlSelf->main_core_dat_rx_conv_sink_last = 0U;
    vlSelf->main_core_dat_rx_conv_sink_payload_dq = 0U;
    vlSelf->main_core_reg_rx_conv_sink_first = 0U;
    vlSelf->main_core_reg_rx_conv_sink_last = 0U;
    vlSelf->main_core_reg_rx_conv_sink_payload_dq = 0U;
    vlSelf->main_core_dat_rx_conv_sink_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->main_core_reg_stb) 
                  & (~ (IData)(vlSelf->main_core_reg_we)))))) {
        vlSelf->main_core_dat_rx_conv_sink_first = vlSelf->main_core_sink_sink_first;
        vlSelf->main_core_dat_rx_conv_sink_last = vlSelf->main_core_sink_sink_last;
        vlSelf->main_core_dat_rx_conv_sink_payload_dq 
            = vlSelf->main_core_sink_sink_payload_dq;
        vlSelf->main_core_dat_rx_conv_sink_valid = vlSelf->main_core_sink_sink_valid;
    }
    vlSelf->main_core_reg_rx_conv_sink_valid = 0U;
    vlSelf->builder_soclinux_rx_demux_endpoint0_source_first = 0U;
    vlSelf->builder_soclinux_rx_demux_endpoint0_source_last = 0U;
    vlSelf->builder_soclinux_rx_demux_endpoint1_source_first = 0U;
    vlSelf->builder_soclinux_rx_demux_endpoint1_source_last = 0U;
    vlSelf->builder_soclinux_rx_demux_endpoint1_source_payload_data = 0U;
    vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data = 0U;
    vlSelf->soclinux_block2mem_sink_sink_payload_data1 = 0U;
    vlSelf->main_tx_cdc_cdc_sink_ready = vlSelf->main_core_source_source_ready;
    vlSelf->main_tx_cdc_sink_sink_ready = vlSelf->main_core_source_source_ready;
    vlSelf->main_tx_cdc_cdc_asyncfifo_writable = vlSelf->main_core_source_source_ready;
    vlSelf->main_core_cycles_main_next_value_ce1 = 0U;
    vlSelf->main_core_cycles_main_next_value1 = 0U;
    vlSelf->main_core_cmd_tx_conv_source_source_ready = 0U;
    vlSelf->main_core_dat_tx_conv_source_ready = 0U;
    vlSelf->main_core_reg_tx_conv_source_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_reg_tx_conv_sink_payload_dq 
                    = vlSelf->main_core_reg_dat_w;
                vlSelf->main_core_reg_tx_conv_source_ready 
                    = vlSelf->main_core_source_source_ready;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_cmd_tx_conv_source_source_ready 
                    = vlSelf->main_core_source_source_ready;
            }
        }
    }
    vlSelf->soclinux_core_csrfield_cmd = vlSelf->soclinux_core_cmd;
    vlSelf->soclinux_cmdr_cmdr_source_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphycmdr_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphycmdr_state)))) {
                if (((IData)(vlSelf->soclinux_cmdr_cmdr_source_valid) 
                     & (IData)(vlSelf->soclinux_cmdr_source_source_ready))) {
                    vlSelf->soclinux_cmdr_cmdr_source_ready = 1U;
                }
            }
        }
    }
    vlSelf->soclinux_datar_source_source_payload_drop = 0U;
    vlSelf->soclinux_cmdw_pads_out_payload_cmd_oe = 0U;
    vlSelf->soclinux_cmdw_pads_out_payload_clk = 0U;
    vlSelf->soclinux_core_csrfield_data_type = vlSelf->soclinux_core_data_type;
    vlSelf->soclinux_cmdr_sink_payload_data_type = 0U;
    vlSelf->soclinux_dataw_crc_pads_in_valid = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->soclinux_datar_datar_1x_pads_in_valid = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->soclinux_datar_datar_4x_pads_in_valid = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->soclinux_sdpads_data_i_ce = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->soclinux_init_pads_in_valid = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->soclinux_cmdw_pads_in_valid = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->soclinux_cmdr_pads_in_pads_in_valid = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->soclinux_dataw_pads_in_pads_in_valid = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->soclinux_dataw_crc_converter_converter_sink_valid 
        = ((IData)(vlSelf->soclinux_cmdr_cmdr_pads_in_valid) 
           & (IData)(vlSelf->soclinux_dataw_crc_run));
    vlSelf->soclinux_cmdr_cmdr_converter_converter_sink_valid 
        = ((IData)(vlSelf->soclinux_cmdr_cmdr_pads_in_valid) 
           & ((IData)(vlSelf->soclinux_cmdr_cmdr_start) 
              | (IData)(vlSelf->soclinux_cmdr_cmdr_run)));
    vlSelf->soclinux_datar_datar_4x_converter_converter_sink_valid 
        = ((IData)(vlSelf->soclinux_cmdr_cmdr_pads_in_valid) 
           & (IData)(vlSelf->soclinux_datar_datar_4x_run));
    vlSelf->soclinux_datar_datar_1x_converter_converter_sink_valid 
        = ((IData)(vlSelf->soclinux_cmdr_cmdr_pads_in_valid) 
           & (IData)(vlSelf->soclinux_datar_datar_1x_run));
    vlSelf->soclinux_datar_pads_in_pads_in_valid = vlSelf->soclinux_cmdr_cmdr_pads_in_valid;
    vlSelf->__VdfgExtracted_h00d219e4__0 = ((IData)(vlSelf->soclinux_cmdr_cmdr_pads_in_valid) 
                                            & (IData)(vlSelf->IDDR_5__DOT__q1_reg));
    vlSelf->soclinux_datar_data_len = 0U;
    vlSelf->soclinux_datar_datar_source_first = 0U;
    vlSelf->soclinux_datar_datar_source_last = 0U;
    vlSelf->soclinux_datar_datar_source_payload_data = 0U;
    vlSelf->soclinux_datar_crc_len = 0U;
    vlSelf->soclinux_datar_datar_source_valid = 0U;
    vlSelf->soclinux_core_csrfield_cmd_type = vlSelf->soclinux_core_cmd_type;
    vlSelf->soclinux_cmdw_sink_payload_cmd_type = 0U;
    vlSelf->soclinux_cmdr_sink_payload_length = 0U;
    vlSelf->soclinux_cmdr_sink_payload_cmd_type = 0U;
    vlSelf->soclinux_clocker_ce = vlSelf->soclinux_cmdr_pads_out_ready;
    vlSelf->soclinux_init_pads_out_ready = vlSelf->soclinux_cmdr_pads_out_ready;
    vlSelf->soclinux_dataw_pads_out_ready = vlSelf->soclinux_cmdr_pads_out_ready;
    vlSelf->soclinux_datar_pads_out_ready = vlSelf->soclinux_cmdr_pads_out_ready;
    vlSelf->soclinux_cmdw_pads_out_ready = vlSelf->soclinux_cmdr_pads_out_ready;
    vlSelf->soclinux_block2mem_sink_sink_payload_address = 0U;
    vlSelf->soclinux_mem2block_dma_sink_sink_payload_address = 0U;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdmem2blockdma_state))) {
        vlSelf->soclinux_mem2block_dma_sink_sink_payload_address 
            = (vlSelf->soclinux_mem2block_dma_base1 
               + vlSelf->soclinux_mem2block_dma_offset1);
    }
    vlSelf->soclinux_block2mem_sink_sink_valid1 = 0U;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdblock2memdma_state))) {
        vlSelf->soclinux_block2mem_sink_sink_payload_data1 
            = vlSelf->soclinux_block2mem_wishbonedmawriter_sink_payload_data;
        vlSelf->soclinux_block2mem_sink_sink_payload_address 
            = (vlSelf->soclinux_block2mem_wishbonedmawriter_base1 
               + vlSelf->soclinux_block2mem_wishbonedmawriter_offset1);
        vlSelf->soclinux_block2mem_sink_sink_valid1 
            = vlSelf->soclinux_block2mem_wishbonedmawriter_sink_valid;
    }
    vlSelf->soclinux_mem2block_dma_fifo_sink_ready 
        = vlSelf->soclinux_mem2block_dma_fifo_syncfifo_writable;
    vlSelf->soclinux_interface1_bus_cyc = ((IData)(vlSelf->soclinux_mem2block_dma_sink_sink_valid) 
                                           & (IData)(vlSelf->soclinux_mem2block_dma_fifo_syncfifo_writable));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__spi_cipo_i 
        = vlSelf->spi_wb__DOT__spi_cipo_i;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tdi 
        = vlSelf->main_soclinux_jtag_tdi;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck 
        = vlSelf->main_soclinux_jtag_clk;
    vlSelf->BUFG__DOT__I = vlSelf->main_crg_clkout0;
    vlSelf->BUFG_1__DOT__I = vlSelf->main_crg_clkout1;
    vlSelf->PLLE2_ADV__DOT__CLKFBIN = vlSelf->builder_soclinux_pll_fb;
    vlSelf->FDPE_2__DOT__C = vlSelf->sys2x_clk;
    vlSelf->FDPE_3__DOT__C = vlSelf->sys2x_clk;
    vlSelf->FDCE__DOT__C = vlSelf->main_crg_clkin;
    vlSelf->FDCE_1__DOT__C = vlSelf->main_crg_clkin;
    vlSelf->FDCE_2__DOT__C = vlSelf->main_crg_clkin;
    vlSelf->FDCE_3__DOT__C = vlSelf->main_crg_clkin;
    vlSelf->FDCE_4__DOT__C = vlSelf->main_crg_clkin;
    vlSelf->FDCE_5__DOT__C = vlSelf->main_crg_clkin;
    vlSelf->FDCE_6__DOT__C = vlSelf->main_crg_clkin;
    vlSelf->FDCE_7__DOT__C = vlSelf->main_crg_clkin;
    vlSelf->PLLE2_ADV__DOT__CLKIN1 = vlSelf->main_crg_clkin;
    vlSelf->FDPE__DOT__C = vlSelf->sys_clk;
    vlSelf->FDPE_1__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_1__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_2__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_3__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_4__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_5__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_6__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_7__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_8__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_9__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_10__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR_1__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR_2__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR_3__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_11__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_12__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR_4__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_13__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_14__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_15__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_16__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_17__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_18__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_19__DOT__C = vlSelf->sys_clk;
    vlSelf->ODDR_20__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR_5__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR_6__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR_7__DOT__C = vlSelf->sys_clk;
    vlSelf->IDDR_8__DOT__C = vlSelf->sys_clk;
    vlSelf->spi_wb__DOT__clk_i = vlSelf->sys_clk;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk 
        = vlSelf->sys_clk;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tms 
        = vlSelf->main_soclinux_jtag_tms;
    vlSelf->IDDR_4__DOT__D = vlSelf->builder_impl_xilinxsdrtristateimpl1___05Fi;
    vlSelf->main_core_cmd_tx_conv_source_source_first 
        = vlSelf->main_core_cmd_tx_conv_converter_source_first;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_event_w 
        = vlSelf->soclinux_core_cmd_event_status;
    vlSelf->builder_csr_bankarray_csrbank3_ev_status_w 
        = vlSelf->soclinux_eventmanager_status_status;
    vlSelf->main_core_reg_dat_r = 0U;
    vlSelf->FDPE_2__DOT__PRE = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1;
    vlSelf->FDPE_3__DOT__PRE = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1;
    vlSelf->main_soclinux_uart_rx_fifo_do_read = ((IData)(vlSelf->main_soclinux_uart_rx_fifo_syncfifo_readable) 
                                                  & (IData)(vlSelf->main_soclinux_uart_rx_fifo_syncfifo_re));
    vlSelf->main_soclinux_uart_rx_fifo_syncfifo_din 
        = vlSelf->main_soclinux_uart_rx_fifo_wrport_dat_w;
    vlSelf->main_soclinux_uart_rxfull_status = vlSelf->builder_csr_bankarray_csrbank7_rxfull_w;
    vlSelf->main_crg_reset = vlSelf->main_crg_rst;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_reset 
        = ((IData)(vlSelf->FDPE_1__DOT__Q) | (IData)(vlSelf->main_soclinux_reset));
    vlSelf->main_soclinux_uart_tx_fifo_do_read = ((IData)(vlSelf->main_soclinux_uart_tx_fifo_syncfifo_readable) 
                                                  & (IData)(vlSelf->main_soclinux_uart_tx_fifo_syncfifo_re));
    vlSelf->builder_soclinux_tx_mux_source_payload_mask = 0U;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_ERR 
        = vlSelf->main_soclinux_pbus_err;
    vlSelf->spi_wb__DOT__spi_data_in = vlSelf->spi_wb__DOT__tx_byte_from_buf;
    vlSelf->ODDR_17__DOT__D1 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_data_oe)));
    vlSelf->ODDR_17__DOT__D2 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_data_oe)));
    vlSelf->ODDR_18__DOT__D1 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_data_oe)));
    vlSelf->ODDR_18__DOT__D2 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_data_oe)));
    vlSelf->ODDR_19__DOT__D1 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_data_oe)));
    vlSelf->ODDR_19__DOT__D2 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_data_oe)));
    vlSelf->ODDR_20__DOT__D1 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_data_oe)));
    vlSelf->ODDR_20__DOT__D2 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_data_oe)));
    if (vlSelf->main_rx_cdc_cdc_graycounter0_ce) {
        vlSelf->main_rx_cdc_cdc_wrport_we = 1U;
        vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary = 0U;
        vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary 
            = (7U & ((IData)(1U) + (IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q_binary)));
    } else {
        vlSelf->main_rx_cdc_cdc_wrport_we = 0U;
        vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary = 0U;
        vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary 
            = (7U & (IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q_binary));
    }
    vlSelf->soclinux_mem2block_converter_source_source_first 
        = vlSelf->soclinux_mem2block_converter_converter_source_first;
    vlSelf->soclinux_mem2block_fifo_sink_first = vlSelf->soclinux_mem2block_converter_converter_source_first;
    vlSelf->soclinux_mem2block_fifo_fifo_in_first = vlSelf->soclinux_mem2block_converter_converter_source_first;
    vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary = 0U;
    vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary 
        = (7U & ((IData)(vlSelf->main_tx_cdc_cdc_graycounter1_ce)
                  ? ((IData)(1U) + (IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_binary))
                  : (IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_binary)));
    vlSelf->main_soclinux_uart_rx_fifo_syncfifo_we 
        = vlSelf->main_soclinux_rx_source_valid;
    vlSelf->main_soclinux_uart_uart_sink_valid = vlSelf->main_soclinux_rx_source_valid;
    vlSelf->main_soclinux_uart_rx_fifo_sink_valid = vlSelf->main_soclinux_rx_source_valid;
    vlSelf->main_soclinux_uart_rx_fifo_wrport_we = 
        ((IData)(vlSelf->main_soclinux_rx_source_valid) 
         & ((IData)(vlSelf->main_soclinux_uart_rx_fifo_syncfifo_writable) 
            | (IData)(vlSelf->main_soclinux_uart_rx_fifo_replace)));
    vlSelf->spi_wb__DOT__spi_data_out = vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_o;
    vlSelf->main_core_sink_sink_ready = 0U;
    if (((IData)(vlSelf->main_core_reg_stb) & (~ (IData)(vlSelf->main_core_reg_we)))) {
        vlSelf->main_core_reg_rx_conv_sink_first = vlSelf->main_core_sink_sink_first;
        vlSelf->main_core_reg_rx_conv_sink_last = vlSelf->main_core_sink_sink_last;
        vlSelf->main_core_reg_rx_conv_sink_payload_dq 
            = vlSelf->main_core_sink_sink_payload_dq;
        vlSelf->main_core_reg_rx_conv_sink_valid = vlSelf->main_core_sink_sink_valid;
        vlSelf->main_core_sink_sink_ready = vlSelf->main_core_reg_rx_conv_sink_ready;
    } else {
        vlSelf->main_core_sink_sink_ready = vlSelf->main_core_dat_rx_conv_sink_ready;
    }
    vlSelf->builder_soclinux_tx_mux_source_payload_len = 0U;
    vlSelf->main_core_dat_tx_conv_source_source_first 
        = vlSelf->main_core_dat_tx_conv_source_first;
    vlSelf->main_core_dat_tx_conv_converter_source_first 
        = vlSelf->main_core_dat_tx_conv_source_first;
    vlSelf->main_core_reg_tx_conv_source_source_first 
        = vlSelf->main_core_reg_tx_conv_source_first;
    vlSelf->main_core_reg_tx_conv_converter_source_first 
        = vlSelf->main_core_reg_tx_conv_source_first;
    vlSelf->main_core_source_source_first = 0U;
    vlSelf->main_soclinux_sr_out_shift = 0U;
    vlSelf->main_core_source_source_valid = 0U;
    vlSelf->soclinux_mem2block_dma_source_source_ready 
        = vlSelf->soclinux_mem2block_converter_converter_sink_ready;
    vlSelf->soclinux_mem2block_dma_fifo_source_ready 
        = vlSelf->soclinux_mem2block_converter_converter_sink_ready;
    vlSelf->soclinux_mem2block_dma_fifo_syncfifo_re 
        = vlSelf->soclinux_mem2block_converter_converter_sink_ready;
    vlSelf->soclinux_mem2block_dma_fifo_do_read = ((IData)(vlSelf->soclinux_mem2block_converter_converter_source_valid) 
                                                   & (IData)(vlSelf->soclinux_mem2block_converter_converter_sink_ready));
    vlSelf->soclinux_mem2block_converter_source_source_last 
        = vlSelf->soclinux_mem2block_converter_converter_source_last;
    vlSelf->soclinux_mem2block_fifo_sink_last = vlSelf->soclinux_mem2block_converter_converter_source_last;
    vlSelf->soclinux_mem2block_fifo_fifo_in_last = vlSelf->soclinux_mem2block_converter_converter_source_last;
    vlSelf->soclinux_mem2block_fifo_wrport_dat_w = 
        (((IData)(vlSelf->soclinux_mem2block_converter_converter_source_last) 
          << 9U) | (((IData)(vlSelf->soclinux_mem2block_converter_converter_source_first) 
                     << 8U) | (IData)(vlSelf->soclinux_mem2block_converter_converter_source_payload_data)));
    vlSelf->soclinux_datar_crc_correct = 0U;
    vlSelf->main_core_bus_dat_r = 0U;
    vlSelf->builder_soclinux_interface1_dat_r = (vlSelf->builder_csr_bankarray_interface0_bank_bus_dat_r 
                                                 | (vlSelf->builder_csr_bankarray_interface1_bank_bus_dat_r 
                                                    | (vlSelf->builder_csr_bankarray_interface2_bank_bus_dat_r 
                                                       | (vlSelf->builder_csr_bankarray_interface3_bank_bus_dat_r 
                                                          | (vlSelf->builder_csr_bankarray_interface4_bank_bus_dat_r 
                                                             | (vlSelf->builder_csr_bankarray_interface5_bank_bus_dat_r 
                                                                | (vlSelf->builder_csr_bankarray_interface6_bank_bus_dat_r 
                                                                   | (vlSelf->builder_csr_bankarray_interface7_bank_bus_dat_r 
                                                                      | vlSelf->builder_csr_bankarray_sram_bus_dat_r))))))));
    vlSelf->main_core_dat_tx_conv_converter_source_payload_data = 0U;
    vlSelf->main_core_dat_tx_conv_converter_source_payload_data 
        = (0x1ffU & ((0U == (IData)(vlSelf->main_core_dat_tx_conv_converter_mux))
                      ? (IData)((vlSelf->main_core_dat_tx_conv_converter_sink_payload_data 
                                 >> 0x1bU)) : ((1U 
                                                == (IData)(vlSelf->main_core_dat_tx_conv_converter_mux))
                                                ? (IData)(
                                                          (vlSelf->main_core_dat_tx_conv_converter_sink_payload_data 
                                                           >> 0x12U))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->main_core_dat_tx_conv_converter_mux))
                                                    ? (IData)(
                                                              (vlSelf->main_core_dat_tx_conv_converter_sink_payload_data 
                                                               >> 9U))
                                                    : (IData)(vlSelf->main_core_dat_tx_conv_converter_sink_payload_data)))));
    vlSelf->builder_soclinux_tx_mux_source_valid = 0U;
    vlSelf->main_core_reg_tx_conv_converter_sink_payload_data = 0U;
    vlSelf->main_core_reg_tx_conv_converter_sink_payload_data 
        = ((0x20000U & vlSelf->main_core_reg_tx_conv_converter_sink_payload_data) 
           | ((0x1fe00U & ((IData)(vlSelf->main_core_reg_tx_conv_sink_payload_dq) 
                           << 1U)) | ((0x100U & ((IData)(vlSelf->main_core_reg_tx_conv_sink_payload_rwds) 
                                                 << 8U)) 
                                      | (0xffU & (IData)(vlSelf->main_core_reg_tx_conv_sink_payload_dq)))));
    vlSelf->main_core_reg_tx_conv_converter_sink_payload_data 
        = ((0x1ffffU & vlSelf->main_core_reg_tx_conv_converter_sink_payload_data) 
           | (0x20000U & ((IData)(vlSelf->main_core_reg_tx_conv_sink_payload_rwds) 
                          << 0x10U)));
    vlSelf->soclinux_dataw_pads_out_payload_data_o = 0U;
    vlSelf->soclinux_core_data_error_builder_sdcore_next_value_ce7 = 0U;
    vlSelf->soclinux_core_data_error_builder_sdcore_next_value7 = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    if (vlSelf->soclinux_dataw_crc_source_valid) {
                        vlSelf->soclinux_dataw_source_source_valid = 1U;
                        if ((2U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                          >> 5U)))) {
                            vlSelf->soclinux_dataw_source_source_payload_status = 2U;
                        } else if ((5U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                                 >> 5U)))) {
                            vlSelf->soclinux_dataw_source_source_payload_status = 5U;
                        } else if ((6U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                                 >> 5U)))) {
                            vlSelf->soclinux_dataw_source_source_payload_status = 6U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->builder_csr_bankarray_csrbank3_ev_pending_w 
        = vlSelf->soclinux_eventmanager_pending_status;
    vlSelf->soclinux_ev_irq = (((IData)(vlSelf->soclinux_eventmanager_pending_status) 
                                & (IData)(vlSelf->soclinux_eventmanager_card_detect2)) 
                               | ((((IData)(vlSelf->soclinux_eventmanager_pending_status) 
                                    >> 1U) & (IData)(vlSelf->soclinux_eventmanager_block2mem_dma2)) 
                                  | ((((IData)(vlSelf->soclinux_eventmanager_pending_status) 
                                       >> 2U) & (IData)(vlSelf->soclinux_eventmanager_mem2block_dma2)) 
                                     | ((((IData)(vlSelf->soclinux_eventmanager_pending_status) 
                                          >> 3U) & (IData)(vlSelf->soclinux_eventmanager_data_done2)) 
                                        | (((IData)(vlSelf->soclinux_eventmanager_pending_status) 
                                            >> 4U) 
                                           & (IData)(vlSelf->soclinux_eventmanager_cmd_done2))))));
    vlSelf->builder_impl_xilinxmultiregimpl3 = ((IData)(vlSelf->hyperram_clk) 
                                                & (IData)(vlSelf->main_hyperramsdrphy_ios_clk));
    vlSelf->main_syncfifo0_source_ready = vlSelf->main_hyperramsdrphy_sink_ready;
    vlSelf->main_syncfifo0_syncfifo0_re = vlSelf->main_hyperramsdrphy_sink_ready;
    vlSelf->main_syncfifo0_do_read = ((IData)(vlSelf->main_hyperramsdrphy_sink_valid) 
                                      & (IData)(vlSelf->main_hyperramsdrphy_sink_ready));
    vlSelf->builder_impl_xilinxmultiregimpl5 = (1U 
                                                & (IData)(vlSelf->main_hyperramsdrphy_ios_dq_o));
    vlSelf->builder_impl_xilinxmultiregimpl7 = (1U 
                                                & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                                                   >> 1U));
    vlSelf->builder_impl_xilinxmultiregimpl9 = (1U 
                                                & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                                                   >> 2U));
    vlSelf->builder_impl_xilinxmultiregimpl11 = (1U 
                                                 & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                                                    >> 3U));
    vlSelf->builder_impl_xilinxmultiregimpl13 = (1U 
                                                 & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                                                    >> 4U));
    vlSelf->builder_impl_xilinxmultiregimpl15 = (1U 
                                                 & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                                                    >> 5U));
    vlSelf->builder_impl_xilinxmultiregimpl17 = (1U 
                                                 & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                                                    >> 6U));
    vlSelf->builder_impl_xilinxmultiregimpl19 = (1U 
                                                 & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                                                    >> 7U));
    vlSelf->main_hyperramsdrphy_source_valid = 0U;
    if (__VdfgExtracted_h12075b80__0) {
        if (((IData)(vlSelf->main_hyperramsdrphy_ios_rwds_i) 
             ^ (IData)(vlSelf->main_hyperramsdrphy_rwds_i_d))) {
            vlSelf->main_hyperramsdrphy_source_valid = 1U;
        }
    }
    if ((1U != (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
        if ((2U == (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
            vlSelf->main_hyperramsdrphy_source_valid = 1U;
        }
    }
    vlSelf->main_hyperramsdrphy_source_payload_dq = 0U;
    if (__VdfgExtracted_h12075b80__0) {
        if (((IData)(vlSelf->main_hyperramsdrphy_ios_rwds_i) 
             ^ (IData)(vlSelf->main_hyperramsdrphy_rwds_i_d))) {
            vlSelf->main_hyperramsdrphy_source_payload_dq 
                = vlSelf->main_hyperramsdrphy_ios_dq_i;
        }
    }
    vlSelf->main_soclinux_uart_txfull_status = vlSelf->builder_csr_bankarray_csrbank7_txfull_w;
    vlSelf->main_soclinux_uart_status_status = 0U;
    vlSelf->main_soclinux_uart_status_status = __VdfgExtracted_ha249474d__0;
    vlSelf->main_soclinux_uart_pending_status = 0U;
    vlSelf->main_soclinux_uart_pending_status = __VdfgExtracted_ha249474d__0;
    vlSelf->builder_soclinux_tx_mux_source_payload_width = 0U;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_ready_i 
        = vlSelf->spi_wb__DOT__spi_data_out_ready;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_running = 0U;
    if (vlSelf->spi_wb__DOT__u_spi_core__DOT__active) {
        if ((0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q))) {
            if (((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_q) 
                 >= (IData)(vlSelf->spi_wb__DOT__spi_half_clk_period))) {
                if (vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_q) {
                    if ((1U >= (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_q))) {
                        vlSelf->spi_wb__DOT__u_spi_core__DOT__finish_edge = 1U;
                    }
                }
            }
        }
        vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_running 
            = ((0U != (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q)) 
               || (((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_q) 
                    < (IData)(vlSelf->spi_wb__DOT__spi_half_clk_period)) 
                   || ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_q)
                        ? ((1U < (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_q)) 
                           && (IData)(vlSelf->spi_wb__DOT__spi_data_in_valid))
                        : (IData)(vlSelf->spi_wb__DOT__spi_data_out_ready))));
    }
    vlSelf->main_core_cmd_tx_conv_source_source_last 
        = vlSelf->main_core_cmd_tx_conv_converter_source_last;
    vlSelf->main_soclinux_bus_error = vlSelf->builder_socbushandler_error;
    vlSelf->builder_soclinux_rx_demux_endpoint1_source_valid = 0U;
    if (vlSelf->builder_soclinux_rx_demux_sel) {
        if (vlSelf->builder_soclinux_rx_demux_sel) {
            vlSelf->builder_soclinux_rx_demux_endpoint1_source_first 
                = vlSelf->builder_soclinux_rx_demux_sink_first;
            vlSelf->builder_soclinux_rx_demux_endpoint1_source_last 
                = vlSelf->builder_soclinux_rx_demux_sink_last;
            vlSelf->builder_soclinux_rx_demux_endpoint1_source_payload_data 
                = vlSelf->builder_soclinux_rx_demux_sink_payload_data;
            vlSelf->builder_soclinux_rx_demux_endpoint1_source_valid 
                = vlSelf->builder_soclinux_rx_demux_sink_valid;
        }
    }
    vlSelf->builder_soclinux_rx_demux_endpoint0_source_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->builder_soclinux_rx_demux_sel)))) {
        vlSelf->builder_soclinux_rx_demux_endpoint0_source_first 
            = vlSelf->builder_soclinux_rx_demux_sink_first;
        vlSelf->builder_soclinux_rx_demux_endpoint0_source_last 
            = vlSelf->builder_soclinux_rx_demux_sink_last;
        vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data 
            = vlSelf->builder_soclinux_rx_demux_sink_payload_data;
        vlSelf->builder_soclinux_rx_demux_endpoint0_source_valid 
            = vlSelf->builder_soclinux_rx_demux_sink_valid;
    }
    vlSelf->main_core_dat_tx_conv_source_source_last 
        = vlSelf->main_core_dat_tx_conv_source_last;
    vlSelf->main_core_dat_tx_conv_converter_source_last 
        = vlSelf->main_core_dat_tx_conv_source_last;
    vlSelf->main_core_source_source_last = 0U;
    if (vlSelf->builder_soclinux_tx_mux_sel) {
        if (vlSelf->builder_soclinux_tx_mux_sel) {
            vlSelf->builder_soclinux_tx_mux_source_first 
                = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_first;
            vlSelf->builder_soclinux_tx_mux_source_last 
                = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_last;
        }
        vlSelf->main_soclinux_crossbar_source_first 
            = vlSelf->builder_soclinux_tx_mux_source_first;
        vlSelf->main_soclinux_sink_first = vlSelf->builder_soclinux_tx_mux_source_first;
    } else {
        vlSelf->builder_soclinux_tx_mux_source_first 
            = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_first;
        vlSelf->main_soclinux_crossbar_source_first 
            = vlSelf->builder_soclinux_tx_mux_source_first;
        vlSelf->main_soclinux_sink_first = vlSelf->builder_soclinux_tx_mux_source_first;
        vlSelf->builder_soclinux_tx_mux_source_last 
            = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_last;
    }
    vlSelf->main_soclinux_crossbar_source_last = vlSelf->builder_soclinux_tx_mux_source_last;
    vlSelf->main_soclinux_sink_last = vlSelf->builder_soclinux_tx_mux_source_last;
    vlSelf->main_core_dat_rx_conv_converter_sink_first 
        = vlSelf->main_core_dat_rx_conv_sink_first;
    vlSelf->main_core_dat_rx_conv_converter_sink_last 
        = vlSelf->main_core_dat_rx_conv_sink_last;
    vlSelf->main_core_dat_rx_conv_converter_sink_payload_data 
        = vlSelf->main_core_dat_rx_conv_sink_payload_dq;
    vlSelf->main_core_reg_rx_conv_converter_sink_first 
        = vlSelf->main_core_reg_rx_conv_sink_first;
    vlSelf->main_core_reg_rx_conv_converter_sink_last 
        = vlSelf->main_core_reg_rx_conv_sink_last;
    vlSelf->main_core_reg_rx_conv_converter_sink_payload_data 
        = vlSelf->main_core_reg_rx_conv_sink_payload_dq;
    vlSelf->main_core_dat_rx_conv_converter_sink_valid 
        = vlSelf->main_core_dat_rx_conv_sink_valid;
    vlSelf->main_core_dat_rx_conv_converter_load_part 
        = ((IData)(vlSelf->main_core_dat_rx_conv_sink_valid) 
           & (IData)(vlSelf->main_core_dat_rx_conv_converter_sink_ready));
    vlSelf->main_core_reg_rx_conv_converter_sink_valid 
        = vlSelf->main_core_reg_rx_conv_sink_valid;
    vlSelf->main_core_reg_rx_conv_converter_load_part 
        = ((IData)(vlSelf->main_core_reg_rx_conv_sink_valid) 
           & (IData)(vlSelf->main_core_reg_rx_conv_converter_sink_ready));
    vlSelf->main_soclinux_port_mmap_user_port_source_first 
        = vlSelf->builder_soclinux_rx_demux_endpoint0_source_first;
    vlSelf->main_soclinux_mmap_sink_first = vlSelf->builder_soclinux_rx_demux_endpoint0_source_first;
    vlSelf->main_soclinux_port_mmap_internal_port_source_first 
        = vlSelf->builder_soclinux_rx_demux_endpoint0_source_first;
    vlSelf->main_soclinux_port_mmap_user_port_source_last 
        = vlSelf->builder_soclinux_rx_demux_endpoint0_source_last;
    vlSelf->main_soclinux_mmap_sink_last = vlSelf->builder_soclinux_rx_demux_endpoint0_source_last;
    vlSelf->main_soclinux_port_mmap_internal_port_source_last 
        = vlSelf->builder_soclinux_rx_demux_endpoint0_source_last;
    vlSelf->main_soclinux_master_rx_fifo_pipe_valid_sink_first 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_first;
    vlSelf->main_soclinux_port_master_user_port_source_first 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_first;
    vlSelf->main_soclinux_master_sink_first = vlSelf->builder_soclinux_rx_demux_endpoint1_source_first;
    vlSelf->main_soclinux_port_master_internal_port_source_first 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_first;
    vlSelf->main_soclinux_master_rx_fifo_sink_sink_first 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_first;
    vlSelf->main_soclinux_master_rx_fifo_pipe_valid_sink_last 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_last;
    vlSelf->main_soclinux_port_master_user_port_source_last 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_last;
    vlSelf->main_soclinux_master_sink_last = vlSelf->builder_soclinux_rx_demux_endpoint1_source_last;
    vlSelf->main_soclinux_port_master_internal_port_source_last 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_last;
    vlSelf->main_soclinux_master_rx_fifo_sink_sink_last 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_last;
    vlSelf->main_soclinux_master_rx_fifo_pipe_valid_sink_payload_data 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_payload_data;
    vlSelf->main_soclinux_port_master_user_port_source_payload_data 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_payload_data;
    vlSelf->main_soclinux_master_sink_payload_data 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_payload_data;
    vlSelf->main_soclinux_port_master_internal_port_source_payload_data 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_payload_data;
    vlSelf->main_soclinux_master_rx_fifo_sink_sink_payload_data 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_payload_data;
    vlSelf->main_soclinux_port_mmap_user_port_source_payload_data 
        = vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data;
    vlSelf->main_soclinux_mmap_sink_payload_data = vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data;
    vlSelf->main_soclinux_port_mmap_internal_port_source_payload_data 
        = vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data;
    vlSelf->main_soclinux_mmap_bus_dat_r = 0U;
    vlSelf->soclinux_interface0_bus_dat_w = ((vlSelf->soclinux_block2mem_sink_sink_payload_data1 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & (vlSelf->soclinux_block2mem_sink_sink_payload_data1 
                                                    << 8U)) 
                                                | ((0xff00U 
                                                    & (vlSelf->soclinux_block2mem_sink_sink_payload_data1 
                                                       >> 8U)) 
                                                   | (vlSelf->soclinux_block2mem_sink_sink_payload_data1 
                                                      >> 0x18U))));
    vlSelf->main_core_cmd_tx_conv_converter_source_ready 
        = vlSelf->main_core_cmd_tx_conv_source_source_ready;
    vlSelf->main_core_cmd_tx_conv_converter_sink_ready 
        = ((IData)(vlSelf->main_core_cmd_tx_conv_converter_last) 
           & (IData)(vlSelf->main_core_cmd_tx_conv_source_source_ready));
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_cycles_main_next_value_ce1 = 1U;
                vlSelf->main_core_cycles_main_next_value1 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->main_core_cycles)));
            }
        }
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_dat_tx_conv_source_ready 
                    = vlSelf->main_core_source_source_ready;
            }
        }
    } else if ((2U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
            if (vlSelf->main_core_source_source_ready) {
                vlSelf->main_core_cycles_main_next_value_ce1 = 1U;
                vlSelf->main_core_cycles_main_next_value1 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->main_core_cycles)));
            }
        }
    }
    vlSelf->main_core_dat_tx_conv_converter_source_ready 
        = vlSelf->main_core_dat_tx_conv_source_ready;
    vlSelf->main_core_dat_tx_conv_source_source_ready 
        = vlSelf->main_core_dat_tx_conv_source_ready;
    vlSelf->main_core_dat_tx_conv_sink_ready = ((IData)(vlSelf->main_core_dat_tx_conv_converter_last) 
                                                & (IData)(vlSelf->main_core_dat_tx_conv_source_ready));
    vlSelf->main_core_reg_tx_conv_converter_source_ready 
        = vlSelf->main_core_reg_tx_conv_source_ready;
    vlSelf->main_core_reg_tx_conv_source_source_ready 
        = vlSelf->main_core_reg_tx_conv_source_ready;
    vlSelf->main_core_reg_tx_conv_sink_ready = ((IData)(vlSelf->main_core_reg_tx_conv_converter_mux) 
                                                & (IData)(vlSelf->main_core_reg_tx_conv_source_ready));
    vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_ready 
        = vlSelf->soclinux_cmdr_cmdr_source_ready;
    vlSelf->soclinux_cmdr_cmdr_buf_source_source_ready 
        = vlSelf->soclinux_cmdr_cmdr_source_ready;
    vlSelf->soclinux_cmdr_cmdr_converter_converter_source_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_source_valid)) 
                 | (IData)(vlSelf->soclinux_cmdr_cmdr_source_ready)));
    if ((1U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_sink_valid) {
            vlSelf->soclinux_cmdw_pads_out_payload_cmd_oe = 1U;
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        vlSelf->soclinux_cmdw_pads_out_payload_cmd_oe = 1U;
    }
    vlSelf->soclinux_sdpads_cmd_oe = ((IData)(vlSelf->soclinux_init_pads_out_payload_cmd_oe) 
                                      | ((IData)(vlSelf->soclinux_cmdr_pads_out_payload_cmd_oe) 
                                         | ((IData)(vlSelf->soclinux_cmdw_pads_out_payload_cmd_oe) 
                                            | ((IData)(vlSelf->soclinux_datar_pads_out_payload_cmd_oe) 
                                               | (IData)(vlSelf->soclinux_dataw_pads_out_payload_cmd_oe)))));
    vlSelf->soclinux_dataw_crc_converter_converter_load_part 
        = ((IData)(vlSelf->soclinux_dataw_crc_converter_converter_sink_valid) 
           & (IData)(vlSelf->soclinux_dataw_crc_converter_converter_sink_ready));
    vlSelf->soclinux_datar_datar_valid = 0U;
    if ((1U == (IData)(vlSelf->soclinux_data_width0))) {
        vlSelf->soclinux_datar_data_len = 4U;
        vlSelf->soclinux_datar_datar_source_first = vlSelf->soclinux_datar_datar_4x_source_first;
        vlSelf->soclinux_datar_datar_source_last = vlSelf->soclinux_datar_datar_4x_source_last;
        vlSelf->soclinux_datar_datar_source_payload_data 
            = vlSelf->soclinux_datar_datar_4x_source_payload_data;
        vlSelf->soclinux_datar_crc_len = 8U;
        vlSelf->soclinux_datar_datar_source_valid = vlSelf->soclinux_datar_datar_4x_source_valid;
        vlSelf->soclinux_datar_crc_correct = ((IData)(vlSelf->soclinux_datar_crc16_data_pads_out) 
                                              == (IData)(vlSelf->soclinux_datar_pads_in_pads_in_payload_data_i));
        vlSelf->soclinux_datar_datar_valid = vlSelf->soclinux_datar_datar_4x_converter_converter_sink_valid;
    } else {
        vlSelf->soclinux_datar_data_len = 1U;
        vlSelf->soclinux_datar_datar_source_first = vlSelf->soclinux_datar_datar_1x_source_first;
        vlSelf->soclinux_datar_datar_source_last = vlSelf->soclinux_datar_datar_1x_source_last;
        vlSelf->soclinux_datar_datar_source_payload_data 
            = vlSelf->soclinux_datar_datar_1x_source_payload_data;
        vlSelf->soclinux_datar_crc_len = 2U;
        vlSelf->soclinux_datar_datar_source_valid = vlSelf->soclinux_datar_datar_1x_source_valid;
        vlSelf->soclinux_datar_crc_correct = ((1U & (IData)(vlSelf->soclinux_datar_crc16_data_pads_out)) 
                                              == (1U 
                                                  & (IData)(vlSelf->soclinux_datar_pads_in_pads_in_payload_data_i)));
        vlSelf->soclinux_datar_datar_valid = vlSelf->soclinux_datar_datar_1x_converter_converter_sink_valid;
    }
    vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value1 = 0U;
    vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value_ce1 = 0U;
    vlSelf->soclinux_datar_source_source_payload_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydatar_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydatar_state)))) {
                vlSelf->soclinux_datar_source_source_payload_drop 
                    = ((IData)(vlSelf->soclinux_datar_count) 
                       > (0x3ffU & ((IData)(vlSelf->soclinux_datar_sink_payload_block_length) 
                                    - (IData)(1U))));
                vlSelf->soclinux_datar_source_source_payload_data 
                    = vlSelf->soclinux_datar_datar_source_payload_data;
            }
        }
    }
    vlSelf->soclinux_cmdr_source_source_payload_status = 0U;
    vlSelf->soclinux_init_count_builder_sdphyinit_next_value_ce = 0U;
    vlSelf->soclinux_init_count_builder_sdphyinit_next_value = 0U;
    if (vlSelf->builder_soclinux_sdphyinit_state) {
        if (vlSelf->soclinux_init_pads_out_ready) {
            vlSelf->soclinux_init_count_builder_sdphyinit_next_value_ce = 1U;
            vlSelf->soclinux_init_count_builder_sdphyinit_next_value 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->soclinux_init_count)));
        }
    } else {
        vlSelf->soclinux_init_count_builder_sdphyinit_next_value_ce = 1U;
        vlSelf->soclinux_init_count_builder_sdphyinit_next_value = 0U;
    }
    vlSelf->soclinux_dataw_crc_reset = 0U;
    vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 = 0U;
    vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 0U;
    if ((8U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 = 0U;
        vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
    } else if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if (vlSelf->soclinux_dataw_pads_out_ready) {
                    vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->soclinux_dataw_count)));
                    vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
                    if ((7U == (IData)(vlSelf->soclinux_dataw_count))) {
                        vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 = 0U;
                        vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
            if (vlSelf->soclinux_dataw_pads_out_ready) {
                vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->soclinux_dataw_count)));
                vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
                if ((0xfU == (IData)(vlSelf->soclinux_dataw_count))) {
                    vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 = 0U;
                    vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if ((1U == (IData)(vlSelf->soclinux_data_width0))) {
                if (vlSelf->soclinux_dataw_pads_out_ready) {
                    vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 
                        = ((1U == (IData)(vlSelf->soclinux_dataw_count))
                            ? 0U : (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->soclinux_dataw_count))));
                    vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
                }
            } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 
                    = ((7U == (IData)(vlSelf->soclinux_dataw_count))
                        ? 0U : (0xffU & ((IData)(1U) 
                                         + (IData)(vlSelf->soclinux_dataw_count))));
                vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        if (vlSelf->soclinux_dataw_pads_out_ready) {
            vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->soclinux_dataw_count)));
            vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
            if ((1U == (IData)(vlSelf->soclinux_dataw_count))) {
                vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 = 0U;
                vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
            }
        }
    } else {
        vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value0 = 0U;
        vlSelf->soclinux_dataw_count_builder_sdphydataw_next_value_ce0 = 1U;
    }
    vlSelf->soclinux_dataw_crc16_enable = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
                vlSelf->soclinux_dataw_sink_payload_data 
                    = vlSelf->soclinux_core_sink_payload_data;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    vlSelf->soclinux_dataw_pads_out_payload_data_o = 0xfU;
                    if (vlSelf->soclinux_dataw_pads_out_ready) {
                        vlSelf->soclinux_dataw_crc_reset = 1U;
                    }
                } else {
                    vlSelf->soclinux_dataw_pads_out_payload_data_o 
                        = vlSelf->soclinux_dataw_crc16_data_pads_out;
                }
            }
        } else if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U == (IData)(vlSelf->soclinux_data_width0))) {
                    if ((0U == (IData)(vlSelf->soclinux_dataw_count))) {
                        vlSelf->soclinux_dataw_pads_out_payload_data_o 
                            = (0xfU & ((IData)(vlSelf->soclinux_dataw_sink_payload_data) 
                                       >> 4U));
                    } else if ((1U == (IData)(vlSelf->soclinux_dataw_count))) {
                        vlSelf->soclinux_dataw_pads_out_payload_data_o 
                            = (0xfU & (IData)(vlSelf->soclinux_dataw_sink_payload_data));
                    }
                } else if (((((((((0U == (IData)(vlSelf->soclinux_dataw_count)) 
                                  | (1U == (IData)(vlSelf->soclinux_dataw_count))) 
                                 | (2U == (IData)(vlSelf->soclinux_dataw_count))) 
                                | (3U == (IData)(vlSelf->soclinux_dataw_count))) 
                               | (4U == (IData)(vlSelf->soclinux_dataw_count))) 
                              | (5U == (IData)(vlSelf->soclinux_dataw_count))) 
                             | (6U == (IData)(vlSelf->soclinux_dataw_count))) 
                            | (7U == (IData)(vlSelf->soclinux_dataw_count)))) {
                    vlSelf->soclinux_dataw_pads_out_payload_data_o 
                        = ((0xeU & (IData)(vlSelf->soclinux_dataw_pads_out_payload_data_o)) 
                           | (1U & ((0U == (IData)(vlSelf->soclinux_dataw_count))
                                     ? ((IData)(vlSelf->soclinux_dataw_sink_payload_data) 
                                        >> 7U) : ((1U 
                                                   == (IData)(vlSelf->soclinux_dataw_count))
                                                   ? 
                                                  ((IData)(vlSelf->soclinux_dataw_sink_payload_data) 
                                                   >> 6U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->soclinux_dataw_count))
                                                    ? 
                                                   ((IData)(vlSelf->soclinux_dataw_sink_payload_data) 
                                                    >> 5U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->soclinux_dataw_count))
                                                     ? 
                                                    ((IData)(vlSelf->soclinux_dataw_sink_payload_data) 
                                                     >> 4U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->soclinux_dataw_count))
                                                      ? 
                                                     ((IData)(vlSelf->soclinux_dataw_sink_payload_data) 
                                                      >> 3U)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->soclinux_dataw_count))
                                                       ? 
                                                      ((IData)(vlSelf->soclinux_dataw_sink_payload_data) 
                                                       >> 2U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->soclinux_dataw_count))
                                                        ? 
                                                       ((IData)(vlSelf->soclinux_dataw_sink_payload_data) 
                                                        >> 1U)
                                                        : (IData)(vlSelf->soclinux_dataw_sink_payload_data))))))))));
                }
            } else {
                vlSelf->soclinux_dataw_pads_out_payload_data_o = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    vlSelf->soclinux_dataw_crc16_enable 
                        = vlSelf->soclinux_dataw_pads_out_ready;
                }
            }
        }
    }
    vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value_ce2 = 0U;
    vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value4 = 0U;
    vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value_ce4 = 0U;
    vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value2 = 0U;
    vlSelf->soclinux_datar_pads_out_payload_clk = 0U;
    vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value = 0U;
    vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value_ce = 0U;
    vlSelf->soclinux_cmdw_done = 0U;
    if ((1U != (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if ((2U != (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
            if ((1U & (~ ((IData)(vlSelf->soclinux_cmdw_sink_valid) 
                          & (IData)(vlSelf->soclinux_cmdw_pads_out_ready))))) {
                vlSelf->soclinux_cmdw_done = 1U;
            }
        }
    }
    vlSelf->soclinux_interface0_bus_adr = vlSelf->soclinux_block2mem_sink_sink_payload_address;
    vlSelf->soclinux_interface1_bus_adr = vlSelf->soclinux_mem2block_dma_sink_sink_payload_address;
    vlSelf->soclinux_interface0_bus_cyc = vlSelf->soclinux_block2mem_sink_sink_valid1;
    vlSelf->soclinux_interface0_bus_stb = vlSelf->soclinux_block2mem_sink_sink_valid1;
    vlSelf->soclinux_interface1_bus_stb = vlSelf->soclinux_interface1_bus_cyc;
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__clk_i = vlSelf->spi_wb__DOT__clk_i;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__clk_i = vlSelf->spi_wb__DOT__clk_i;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_i = vlSelf->spi_wb__DOT__clk_i;
    vlSelf->main_soclinux_uart_rx_fifo_rdport_re = vlSelf->main_soclinux_uart_rx_fifo_do_read;
    vlSelf->FDCE__DOT__D = vlSelf->main_crg_reset;
    vlSelf->main_soclinux_uart_tx_fifo_rdport_re = vlSelf->main_soclinux_uart_tx_fifo_do_read;
    if (vlSelf->builder_soclinux_tx_mux_sel) {
        if (vlSelf->builder_soclinux_tx_mux_sel) {
            vlSelf->builder_soclinux_tx_mux_source_payload_mask 
                = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_payload_mask;
        }
    } else {
        vlSelf->builder_soclinux_tx_mux_source_payload_mask 
            = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_payload_mask;
    }
    vlSelf->main_soclinux_crossbar_source_payload_mask 
        = vlSelf->builder_soclinux_tx_mux_source_payload_mask;
    vlSelf->main_soclinux_sink_payload_mask = vlSelf->builder_soclinux_tx_mux_source_payload_mask;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_in_i 
        = vlSelf->spi_wb__DOT__spi_data_in;
    vlSelf->main_rx_cdc_cdc_graycounter0_q_next = (7U 
                                                   & ((IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary) 
                                                      ^ 
                                                      VL_SHIFTR_III(3,3,32, (IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary), 1U)));
    vlSelf->main_tx_cdc_cdc_graycounter1_q_next = (7U 
                                                   & ((IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary) 
                                                      ^ 
                                                      VL_SHIFTR_III(3,3,32, (IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary), 1U)));
    vlSelf->main_tx_cdc_cdc_rdport_adr = (3U & (IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary));
    vlSelf->main_rx_cdc_source_source_ready = vlSelf->main_core_sink_sink_ready;
    vlSelf->main_rx_cdc_cdc_source_ready = vlSelf->main_core_sink_sink_ready;
    vlSelf->main_rx_cdc_cdc_asyncfifo_re = vlSelf->main_core_sink_sink_ready;
    vlSelf->main_rx_cdc_cdc_graycounter1_ce = ((IData)(vlSelf->main_core_sink_sink_valid) 
                                               & (IData)(vlSelf->main_core_sink_sink_ready));
    if (vlSelf->builder_soclinux_tx_mux_sel) {
        if (vlSelf->builder_soclinux_tx_mux_sel) {
            vlSelf->builder_soclinux_tx_mux_source_payload_len 
                = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_payload_len;
        }
    } else {
        vlSelf->builder_soclinux_tx_mux_source_payload_len 
            = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_payload_len;
    }
    vlSelf->main_soclinux_crossbar_source_payload_len 
        = vlSelf->builder_soclinux_tx_mux_source_payload_len;
    vlSelf->main_soclinux_sink_payload_len = vlSelf->builder_soclinux_tx_mux_source_payload_len;
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
                if (vlSelf->main_core_reg_rx_conv_source_valid) {
                    vlSelf->main_core_reg_dat_r = vlSelf->main_core_reg_rx_conv_source_payload_dq;
                }
            }
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_first 
                    = vlSelf->main_core_dat_tx_conv_source_first;
            }
        }
        vlSelf->main_tx_cdc_sink_sink_first = vlSelf->main_core_source_source_first;
        vlSelf->main_tx_cdc_cdc_sink_first = vlSelf->main_core_source_source_first;
        vlSelf->main_tx_cdc_cdc_fifo_in_first = vlSelf->main_core_source_source_first;
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
                vlSelf->main_core_source_source_valid = 1U;
            }
        } else {
            vlSelf->main_core_source_source_valid = 
                ((1U & (~ (IData)(vlSelf->main_core_state))) 
                 || (IData)(vlSelf->main_core_dat_tx_conv_source_valid));
        }
    } else {
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_first 
                    = vlSelf->main_core_reg_tx_conv_source_first;
            }
            vlSelf->main_core_source_source_valid = 
                ((1U & (~ (IData)(vlSelf->main_core_state))) 
                 || (IData)(vlSelf->main_core_reg_tx_conv_source_valid));
        } else if ((1U & (IData)(vlSelf->main_core_state))) {
            vlSelf->main_core_source_source_valid = vlSelf->main_core_cmd_tx_conv_source_source_valid;
        }
        vlSelf->main_tx_cdc_sink_sink_first = vlSelf->main_core_source_source_first;
        vlSelf->main_tx_cdc_cdc_sink_first = vlSelf->main_core_source_source_first;
        vlSelf->main_tx_cdc_cdc_fifo_in_first = vlSelf->main_core_source_source_first;
    }
    vlSelf->main_tx_cdc_sink_sink_valid = vlSelf->main_core_source_source_valid;
    vlSelf->main_tx_cdc_cdc_sink_valid = vlSelf->main_core_source_source_valid;
    vlSelf->main_tx_cdc_cdc_asyncfifo_we = vlSelf->main_core_source_source_valid;
    vlSelf->main_tx_cdc_cdc_graycounter0_ce = ((IData)(vlSelf->main_core_source_source_ready) 
                                               & (IData)(vlSelf->main_core_source_source_valid));
    vlSelf->soclinux_mem2block_fifo_syncfifo_din = vlSelf->soclinux_mem2block_fifo_wrport_dat_w;
    vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value3 = 0U;
    vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value_ce3 = 0U;
    if ((4U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
            vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value1 = 0U;
            vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value_ce1 = 1U;
            if (((IData)(vlSelf->soclinux_datar_sink_valid) 
                 & (IData)(vlSelf->soclinux_datar_pads_out_ready))) {
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value_ce2 = 1U;
                vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value4 = 1U;
                vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value_ce4 = 1U;
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value2 
                    = vlSelf->soclinux_datar_timeout_storage;
                vlSelf->soclinux_datar_pads_out_payload_clk = 1U;
                vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value3 = 0U;
                vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value_ce3 = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
            vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value1 = 0U;
            vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value_ce1 = 1U;
            if (((IData)(vlSelf->soclinux_datar_sink_valid) 
                 & (IData)(vlSelf->soclinux_datar_pads_out_ready))) {
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value_ce2 = 1U;
                vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value4 = 1U;
                vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value_ce4 = 1U;
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value2 
                    = vlSelf->soclinux_datar_timeout_storage;
                vlSelf->soclinux_datar_pads_out_payload_clk = 1U;
                vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value3 = 0U;
                vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value_ce3 = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydatar_state)))) {
                if ((((IData)(vlSelf->soclinux_datar_pads_in_pads_in_valid) 
                      & (IData)(vlSelf->soclinux_datar_data_done)) 
                     & (0x10U > (IData)(vlSelf->soclinux_datar_crc_count)))) {
                    vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value1 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->soclinux_datar_crc_count)));
                    vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value_ce1 = 1U;
                    if ((1U & (~ (IData)(vlSelf->soclinux_datar_crc_correct)))) {
                        vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value3 = 1U;
                        vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value_ce3 = 1U;
                    }
                }
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value_ce2 = 1U;
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value2 
                    = (vlSelf->soclinux_datar_timeout 
                       - (IData)(1U));
            }
            vlSelf->soclinux_datar_pads_out_payload_clk = 1U;
        } else {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydatar_state)))) {
                vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value1 = 0U;
                vlSelf->soclinux_datar_crc_count_builder_sdphydatar_next_value_ce1 = 1U;
                if (((IData)(vlSelf->soclinux_datar_sink_valid) 
                     & (IData)(vlSelf->soclinux_datar_pads_out_ready))) {
                    vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value3 = 0U;
                    vlSelf->soclinux_datar_crc_error_builder_sdphydatar_next_value_ce3 = 1U;
                }
            }
            if ((1U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value_ce2 = 1U;
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value2 
                    = (vlSelf->soclinux_datar_timeout 
                       - (IData)(1U));
                vlSelf->soclinux_datar_pads_out_payload_clk = 1U;
            } else if (((IData)(vlSelf->soclinux_datar_sink_valid) 
                        & (IData)(vlSelf->soclinux_datar_pads_out_ready))) {
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value_ce2 = 1U;
                vlSelf->soclinux_datar_timeout_builder_sdphydatar_next_value2 
                    = vlSelf->soclinux_datar_timeout_storage;
                vlSelf->soclinux_datar_pads_out_payload_clk = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydatar_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
                vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value4 = 0U;
                vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value_ce4 = 1U;
            } else if (((IData)(vlSelf->soclinux_datar_sink_valid) 
                        & (IData)(vlSelf->soclinux_datar_pads_out_ready))) {
                vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value4 = 1U;
                vlSelf->soclinux_datar_datar_reset_builder_sdphydatar_next_value_ce4 = 1U;
            }
        }
    }
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
                if (vlSelf->main_core_dat_rx_conv_source_valid) {
                    vlSelf->main_core_bus_dat_r = vlSelf->main_core_dat_rx_conv_source_payload_dq;
                }
            }
        }
    }
    vlSelf->main_bus_bus_dat_r = vlSelf->main_core_bus_dat_r;
    vlSelf->builder_csr_interconnect_dat_r = vlSelf->builder_soclinux_interface1_dat_r;
    vlSelf->builder_soclinux_interface0_dat_r = 0U;
    if (vlSelf->builder_soclinux_state) {
        vlSelf->builder_soclinux_interface0_dat_r = vlSelf->builder_soclinux_interface1_dat_r;
    }
    vlSelf->main_core_dat_tx_conv_source_source_payload_data 
        = vlSelf->main_core_dat_tx_conv_converter_source_payload_data;
    vlSelf->main_core_dat_tx_conv_source_payload_rwds 
        = (1U & ((IData)(vlSelf->main_core_dat_tx_conv_converter_source_payload_data) 
                 >> 8U));
    if ((1U == (IData)(vlSelf->builder_soclinux_fsm_state))) {
        vlSelf->main_core_reg_adr = vlSelf->main_hyperram_addr;
    } else if ((2U == (IData)(vlSelf->builder_soclinux_fsm_state))) {
        vlSelf->main_core_reg_adr = vlSelf->main_hyperram_addr;
    }
    vlSelf->main_core_dat_tx_conv_source_payload_dq 
        = (0xffU & (IData)(vlSelf->main_core_dat_tx_conv_converter_source_payload_data));
    if (vlSelf->builder_soclinux_tx_mux_sel) {
        if (vlSelf->builder_soclinux_tx_mux_sel) {
            vlSelf->builder_soclinux_tx_mux_source_valid 
                = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_valid;
        }
    } else {
        vlSelf->builder_soclinux_tx_mux_source_valid 
            = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_valid;
    }
    vlSelf->main_soclinux_crossbar_source_valid = vlSelf->builder_soclinux_tx_mux_source_valid;
    vlSelf->main_soclinux_sink_valid = vlSelf->builder_soclinux_tx_mux_source_valid;
    vlSelf->__VdfgExtracted_h1ff7b299__0 = ((IData)(vlSelf->main_soclinux_done) 
                                            & (IData)(vlSelf->builder_soclinux_tx_mux_source_valid));
    vlSelf->main_core_reg_tx_conv_converter_source_payload_data = 0U;
    vlSelf->main_core_reg_tx_conv_converter_source_payload_data 
        = (0x1ffU & ((IData)(vlSelf->main_core_reg_tx_conv_converter_mux)
                      ? vlSelf->main_core_reg_tx_conv_converter_sink_payload_data
                      : (vlSelf->main_core_reg_tx_conv_converter_sink_payload_data 
                         >> 9U)));
    vlSelf->soclinux_dataw_crc16_crc0_din = (1U & (IData)(vlSelf->soclinux_dataw_pads_out_payload_data_o));
    vlSelf->soclinux_dataw_crc16_crc1_din = (1U & ((IData)(vlSelf->soclinux_dataw_pads_out_payload_data_o) 
                                                   >> 1U));
    vlSelf->soclinux_dataw_crc16_crc2_din = (1U & ((IData)(vlSelf->soclinux_dataw_pads_out_payload_data_o) 
                                                   >> 2U));
    vlSelf->soclinux_dataw_crc16_crc3_din = (1U & ((IData)(vlSelf->soclinux_dataw_pads_out_payload_data_o) 
                                                   >> 3U));
    vlSelf->soclinux_sdpads_data_o = ((IData)(vlSelf->soclinux_init_pads_out_payload_data_o) 
                                      | ((IData)(vlSelf->soclinux_cmdr_pads_out_payload_data_o) 
                                         | ((IData)(vlSelf->soclinux_cmdw_pads_out_payload_data_o) 
                                            | ((IData)(vlSelf->soclinux_datar_pads_out_payload_data_o) 
                                               | (IData)(vlSelf->soclinux_dataw_pads_out_payload_data_o)))));
    vlSelf->main_syncfifo1_syncfifo1_we = vlSelf->main_hyperramsdrphy_source_valid;
    vlSelf->main_syncfifo1_sink_valid = vlSelf->main_hyperramsdrphy_source_valid;
    vlSelf->main_syncfifo1_wrport_we = ((IData)(vlSelf->main_hyperramsdrphy_source_valid) 
                                        & ((IData)(vlSelf->main_hyperramsdrphy_source_ready) 
                                           | (IData)(vlSelf->main_syncfifo1_replace)));
    vlSelf->main_syncfifo1_fifo_in_payload_dq = vlSelf->main_hyperramsdrphy_source_payload_dq;
    vlSelf->main_syncfifo1_sink_payload_dq = vlSelf->main_hyperramsdrphy_source_payload_dq;
    vlSelf->main_syncfifo1_wrport_dat_w = (((IData)(vlSelf->main_hyperramsdrphy_source_last) 
                                            << 9U) 
                                           | (((IData)(vlSelf->main_hyperramsdrphy_source_first) 
                                               << 8U) 
                                              | (IData)(vlSelf->main_hyperramsdrphy_source_payload_dq)));
    vlSelf->builder_csr_bankarray_csrbank7_ev_status_w 
        = vlSelf->main_soclinux_uart_status_status;
    vlSelf->builder_csr_bankarray_csrbank7_ev_pending_w 
        = vlSelf->main_soclinux_uart_pending_status;
    vlSelf->main_soclinux_uart_irq = (((IData)(vlSelf->main_soclinux_uart_pending_status) 
                                       & (IData)(vlSelf->main_soclinux_uart_tx2)) 
                                      | (((IData)(vlSelf->main_soclinux_uart_pending_status) 
                                          >> 1U) & (IData)(vlSelf->main_soclinux_uart_rx2)));
    if (vlSelf->builder_soclinux_tx_mux_sel) {
        if (vlSelf->builder_soclinux_tx_mux_sel) {
            vlSelf->builder_soclinux_tx_mux_source_payload_width 
                = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_payload_width;
        }
    } else {
        vlSelf->builder_soclinux_tx_mux_source_payload_width 
            = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_payload_width;
    }
    vlSelf->main_soclinux_crossbar_source_payload_width 
        = vlSelf->builder_soclinux_tx_mux_source_payload_width;
    vlSelf->main_soclinux_sink_payload_width = vlSelf->builder_soclinux_tx_mux_source_payload_width;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_d 
        = vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_d = vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_d 
        = vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_edge = 0U;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__output_edge = 0U;
    if (vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_running) {
        if (((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_q) 
             == (IData)(vlSelf->spi_wb__DOT__spi_half_clk_period))) {
            vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_d = 0U;
            vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_d 
                = (1U & (~ (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_q)));
            if ((1U & (~ (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_q)))) {
                vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_d = 1U;
                vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_edge = 1U;
            } else {
                vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_d = 0U;
            }
            if (vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_q) {
                vlSelf->spi_wb__DOT__u_spi_core__DOT__output_edge 
                    = (1U & (~ (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__finish_edge)));
            }
        } else {
            vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_d 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_q)));
        }
    } else if ((1U & ((~ (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__active)) 
                      | (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__finish_edge)))) {
        vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_counter_d = 0U;
        vlSelf->spi_wb__DOT__u_spi_core__DOT__clk_d 
            = vlSelf->spi_wb__DOT__spi_cpol;
        vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_phase_d 
            = vlSelf->spi_wb__DOT__spi_cpha;
    }
    vlSelf->main_soclinux_master_rx_fifo_pipe_valid_sink_valid 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_valid;
    vlSelf->main_soclinux_port_master_user_port_source_valid 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_valid;
    vlSelf->main_soclinux_master_sink_valid = vlSelf->builder_soclinux_rx_demux_endpoint1_source_valid;
    vlSelf->main_soclinux_port_master_internal_port_source_valid 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_valid;
    vlSelf->main_soclinux_master_rx_fifo_sink_sink_valid 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_valid;
    vlSelf->main_soclinux_port_mmap_user_port_source_valid 
        = vlSelf->builder_soclinux_rx_demux_endpoint0_source_valid;
    vlSelf->main_soclinux_port_mmap_internal_port_source_valid 
        = vlSelf->builder_soclinux_rx_demux_endpoint0_source_valid;
    vlSelf->main_soclinux_mmap_sink_valid = vlSelf->builder_soclinux_rx_demux_endpoint0_source_valid;
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_last 
                    = vlSelf->main_core_dat_tx_conv_source_last;
            }
        }
    } else if ((2U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (IData)(vlSelf->main_core_state))) {
            vlSelf->main_core_source_source_last = vlSelf->main_core_reg_tx_conv_source_last;
        }
    }
    vlSelf->main_tx_cdc_sink_sink_last = vlSelf->main_core_source_source_last;
    vlSelf->main_tx_cdc_cdc_sink_last = vlSelf->main_core_source_source_last;
    vlSelf->main_tx_cdc_cdc_fifo_in_last = vlSelf->main_core_source_source_last;
    if ((8U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                    vlSelf->main_soclinux_mmap_bus_dat_r 
                        = ((vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data 
                            << 0x18U) | ((0xff0000U 
                                          & (vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data 
                                             << 8U)) 
                                         | ((0xff00U 
                                             & (vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data 
                                                >> 8U)) 
                                            | (vlSelf->builder_soclinux_rx_demux_endpoint0_source_payload_data 
                                               >> 0x18U))));
                }
            }
        }
    }
    vlSelf->main_soclinux_adapted_interface_dat_r = vlSelf->main_soclinux_mmap_bus_dat_r;
    vlSelf->main_core_dat_tx_conv_converter_sink_ready 
        = vlSelf->main_core_dat_tx_conv_sink_ready;
    vlSelf->main_core_reg_tx_conv_converter_sink_ready 
        = vlSelf->main_core_reg_tx_conv_sink_ready;
    vlSelf->main_core_reg_ack = 0U;
    vlSelf->soclinux_cmdr_cmdr_buf_sink_sink_ready 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_ready;
    vlSelf->soclinux_cmdr_cmdr_converter_source_source_ready 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_ready;
    vlSelf->soclinux_cmdr_cmdr_buf_pipe_valid_sink_ready 
        = vlSelf->soclinux_cmdr_cmdr_converter_converter_source_ready;
    vlSelf->soclinux_cmdr_cmdr_converter_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_cmdr_cmdr_converter_converter_strobe_all)) 
                 | (IData)(vlSelf->soclinux_cmdr_cmdr_converter_converter_source_ready)));
    vlSelf->ODDR_12__DOT__D1 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_cmd_oe)));
    vlSelf->ODDR_12__DOT__D2 = (1U & (~ (IData)(vlSelf->soclinux_sdpads_cmd_oe)));
    vlSelf->soclinux_datar_crc16_crc0_enable = ((~ (IData)(vlSelf->soclinux_datar_data_done)) 
                                                & (IData)(vlSelf->soclinux_datar_datar_valid));
    vlSelf->soclinux_dataw_crc16_crc0_enable = vlSelf->soclinux_dataw_crc16_enable;
    vlSelf->soclinux_dataw_crc16_crc1_enable = vlSelf->soclinux_dataw_crc16_enable;
    vlSelf->soclinux_dataw_crc16_crc2_enable = vlSelf->soclinux_dataw_crc16_enable;
    vlSelf->soclinux_dataw_crc16_crc3_enable = vlSelf->soclinux_dataw_crc16_enable;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_sink_valid) {
            vlSelf->soclinux_cmdw_pads_out_payload_clk = 1U;
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        vlSelf->soclinux_cmdw_pads_out_payload_clk = 1U;
    }
    vlSelf->soclinux_clocker_clk_en = ((IData)(vlSelf->soclinux_init_pads_out_payload_clk) 
                                       | ((IData)(vlSelf->soclinux_cmdr_pads_out_payload_clk) 
                                          | ((IData)(vlSelf->soclinux_cmdw_pads_out_payload_clk) 
                                             | ((IData)(vlSelf->soclinux_datar_pads_out_payload_clk) 
                                                | (IData)(vlSelf->soclinux_dataw_pads_out_payload_clk)))));
    vlSelf->soclinux_cmdr_cmdr_reset_builder_sdphycmdr_next_value_ce2 = 0U;
    vlSelf->soclinux_cmdr_cmdr_reset_builder_sdphycmdr_next_value2 = 0U;
    vlSelf->builder_soclinux_sdphycmdr_next_state = 0U;
    vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value1 = 0U;
    vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value_ce1 = 0U;
    vlSelf->soclinux_cmdr_last_data_builder_sdphycmdr_next_value3 = 0U;
    vlSelf->soclinux_cmdr_last_data_builder_sdphycmdr_next_value_ce3 = 0U;
    vlSelf->soclinux_cmdr_sink_ready = 0U;
    vlSelf->soclinux_cmdr_source_source_last = 0U;
    vlSelf->soclinux_cmdr_source_source_payload_data = 0U;
    vlSelf->soclinux_cmdr_source_source_valid = 0U;
    vlSelf->builder_soclinux_sdphycmdr_next_state = vlSelf->builder_soclinux_sdphycmdr_state;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
                vlSelf->soclinux_cmdr_sink_payload_data_type 
                    = vlSelf->soclinux_core_data_type;
                vlSelf->soclinux_cmdr_sink_payload_length 
                    = ((2U == (IData)(vlSelf->soclinux_core_cmd_type))
                        ? 0x11U : 6U);
                vlSelf->soclinux_cmdr_sink_payload_cmd_type 
                    = vlSelf->soclinux_core_cmd_type;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
                vlSelf->soclinux_cmdw_sink_payload_cmd_type 
                    = vlSelf->soclinux_core_cmd_type;
            }
        }
    }
    if ((4U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphycmdr_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
                vlSelf->soclinux_cmdr_source_source_payload_status = 1U;
            } else if (vlSelf->soclinux_cmdr_pads_out_ready) {
                if ((7U == (IData)(vlSelf->soclinux_cmdr_count))) {
                    if ((3U != (IData)(vlSelf->soclinux_cmdr_sink_payload_cmd_type))) {
                        vlSelf->soclinux_cmdr_source_source_payload_status = 0U;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
            if ((((IData)(vlSelf->soclinux_cmdr_sink_valid) 
                  & (IData)(vlSelf->soclinux_cmdr_pads_out_ready)) 
                 & (IData)(vlSelf->soclinux_cmdw_done))) {
                vlSelf->soclinux_cmdr_cmdr_reset_builder_sdphycmdr_next_value_ce2 = 1U;
                vlSelf->soclinux_cmdr_cmdr_reset_builder_sdphycmdr_next_value2 = 1U;
                vlSelf->builder_soclinux_sdphycmdr_next_state = 1U;
            }
            vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value1 = 0U;
            vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value_ce1 = 1U;
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
            vlSelf->soclinux_cmdr_sink_ready = 1U;
            vlSelf->soclinux_cmdr_source_source_valid = 1U;
            vlSelf->soclinux_cmdr_source_source_last = 1U;
            if (vlSelf->soclinux_cmdr_source_source_ready) {
                vlSelf->builder_soclinux_sdphycmdr_next_state = 0U;
            }
        } else if (vlSelf->soclinux_cmdr_pads_out_ready) {
            vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value1 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->soclinux_cmdr_count)));
            vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value_ce1 = 1U;
            if ((7U == (IData)(vlSelf->soclinux_cmdr_count))) {
                vlSelf->soclinux_cmdr_sink_ready = 1U;
                if ((3U == (IData)(vlSelf->soclinux_cmdr_sink_payload_cmd_type))) {
                    vlSelf->builder_soclinux_sdphycmdr_next_state = 3U;
                } else {
                    vlSelf->soclinux_cmdr_source_source_valid = 1U;
                    vlSelf->soclinux_cmdr_source_source_last = 1U;
                    vlSelf->soclinux_cmdr_source_source_payload_data 
                        = vlSelf->soclinux_cmdr_last_data;
                    vlSelf->builder_soclinux_sdphycmdr_next_state = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
                if (vlSelf->__VdfgExtracted_h00d219e4__0) {
                    vlSelf->soclinux_cmdr_source_source_payload_status = 0U;
                    vlSelf->soclinux_cmdr_source_source_valid = 1U;
                    vlSelf->soclinux_cmdr_source_source_last = 1U;
                    vlSelf->soclinux_cmdr_source_source_payload_data 
                        = vlSelf->soclinux_cmdr_last_data;
                    vlSelf->builder_soclinux_sdphycmdr_next_state = 0U;
                }
                if ((0U == vlSelf->soclinux_cmdr_timeout)) {
                    vlSelf->builder_soclinux_sdphycmdr_next_state = 5U;
                }
            } else {
                vlSelf->soclinux_cmdr_source_source_payload_status = 0U;
                vlSelf->soclinux_cmdr_source_source_valid 
                    = vlSelf->soclinux_cmdr_cmdr_source_valid;
                vlSelf->soclinux_cmdr_source_source_last 
                    = ((IData)(vlSelf->soclinux_cmdr_count) 
                       == (0xffU & ((IData)(vlSelf->soclinux_cmdr_sink_payload_length) 
                                    - (IData)(1U))));
                vlSelf->soclinux_cmdr_source_source_payload_data 
                    = vlSelf->soclinux_cmdr_cmdr_source_payload_data;
                if (((IData)(vlSelf->soclinux_cmdr_cmdr_source_valid) 
                     & (IData)(vlSelf->soclinux_cmdr_source_source_ready))) {
                    vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value1 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->soclinux_cmdr_count)));
                    vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value_ce1 = 1U;
                    if (vlSelf->soclinux_cmdr_source_source_last) {
                        if (((3U == (IData)(vlSelf->soclinux_cmdr_sink_payload_cmd_type)) 
                             | (0U == (IData)(vlSelf->soclinux_cmdr_sink_payload_data_type)))) {
                            vlSelf->soclinux_cmdr_source_source_valid = 0U;
                            vlSelf->soclinux_cmdr_last_data_builder_sdphycmdr_next_value3 
                                = vlSelf->soclinux_cmdr_source_source_payload_data;
                            vlSelf->soclinux_cmdr_last_data_builder_sdphycmdr_next_value_ce3 = 1U;
                            vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value1 = 0U;
                            vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value_ce1 = 1U;
                            vlSelf->builder_soclinux_sdphycmdr_next_state = 4U;
                        } else {
                            vlSelf->soclinux_cmdr_sink_ready = 1U;
                            vlSelf->builder_soclinux_sdphycmdr_next_state = 0U;
                        }
                    }
                }
                if ((0U == vlSelf->soclinux_cmdr_timeout)) {
                    vlSelf->builder_soclinux_sdphycmdr_next_state = 5U;
                }
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
            if (vlSelf->soclinux_cmdr_cmdr_source_valid) {
                vlSelf->builder_soclinux_sdphycmdr_next_state = 2U;
            }
            if ((0U == vlSelf->soclinux_cmdr_timeout)) {
                vlSelf->builder_soclinux_sdphycmdr_next_state = 5U;
            }
        } else {
            vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value1 = 0U;
            vlSelf->soclinux_cmdr_count_builder_sdphycmdr_next_value_ce1 = 1U;
            if ((((IData)(vlSelf->soclinux_cmdr_sink_valid) 
                  & (IData)(vlSelf->soclinux_cmdr_pads_out_ready)) 
                 & (IData)(vlSelf->soclinux_cmdw_done))) {
                vlSelf->builder_soclinux_sdphycmdr_next_state = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphycmdr_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdphycmdr_state))) {
                vlSelf->soclinux_cmdr_cmdr_reset_builder_sdphycmdr_next_value_ce2 = 1U;
                vlSelf->soclinux_cmdr_cmdr_reset_builder_sdphycmdr_next_value2 = 0U;
            } else if ((((IData)(vlSelf->soclinux_cmdr_sink_valid) 
                         & (IData)(vlSelf->soclinux_cmdr_pads_out_ready)) 
                        & (IData)(vlSelf->soclinux_cmdw_done))) {
                vlSelf->soclinux_cmdr_cmdr_reset_builder_sdphycmdr_next_value_ce2 = 1U;
                vlSelf->soclinux_cmdr_cmdr_reset_builder_sdphycmdr_next_value2 = 1U;
            }
        }
    }
    vlSelf->main_rx_cdc_cdc_graycounter1_q_next_binary = 0U;
    vlSelf->main_rx_cdc_cdc_graycounter1_q_next_binary 
        = (7U & ((IData)(vlSelf->main_rx_cdc_cdc_graycounter1_ce)
                  ? ((IData)(1U) + (IData)(vlSelf->main_rx_cdc_cdc_graycounter1_q_binary))
                  : (IData)(vlSelf->main_rx_cdc_cdc_graycounter1_q_binary)));
    if (vlSelf->main_tx_cdc_cdc_graycounter0_ce) {
        vlSelf->main_tx_cdc_cdc_wrport_we = 1U;
        vlSelf->main_tx_cdc_cdc_graycounter0_q_next_binary = 0U;
        vlSelf->main_tx_cdc_cdc_graycounter0_q_next_binary 
            = (7U & ((IData)(1U) + (IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q_binary)));
    } else {
        vlSelf->main_tx_cdc_cdc_wrport_we = 0U;
        vlSelf->main_tx_cdc_cdc_graycounter0_q_next_binary = 0U;
        vlSelf->main_tx_cdc_cdc_graycounter0_q_next_binary 
            = (7U & (IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q_binary));
    }
    vlSelf->main_soclinux_sr_out_load = 0U;
    vlSelf->main_soclinux_dq_oe_builder_litespiphy_next_value_ce2 = 0U;
    vlSelf->main_soclinux_sr_out_cnt_builder_litespiphy_next_value_ce0 = 0U;
    vlSelf->main_soclinux_dq_oe_builder_litespiphy_next_value2 = 0U;
    vlSelf->main_soclinux_sr_in_cnt_builder_litespiphy_next_value_ce1 = 0U;
    vlSelf->main_core_reg_tx_conv_source_source_payload_data 
        = vlSelf->main_core_reg_tx_conv_converter_source_payload_data;
    vlSelf->main_core_reg_tx_conv_source_payload_rwds 
        = (1U & ((IData)(vlSelf->main_core_reg_tx_conv_converter_source_payload_data) 
                 >> 8U));
    vlSelf->main_core_reg_tx_conv_source_payload_dq 
        = (0xffU & (IData)(vlSelf->main_core_reg_tx_conv_converter_source_payload_data));
    __VdfgRegularize_h278c091a_133_2 = ((IData)(vlSelf->soclinux_dataw_crc16_crc0_din) 
                                        ^ ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                           >> 0xfU));
    __VdfgRegularize_h278c091a_133_6 = ((IData)(vlSelf->soclinux_dataw_crc16_crc1_din) 
                                        ^ ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                           >> 0xfU));
    __VdfgRegularize_h278c091a_133_10 = ((IData)(vlSelf->soclinux_dataw_crc16_crc2_din) 
                                         ^ ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                            >> 0xfU));
    __VdfgRegularize_h278c091a_133_12 = ((IData)(vlSelf->soclinux_dataw_crc16_crc3_din) 
                                         ^ ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                            >> 0xfU));
    vlSelf->ODDR_13__DOT__D1 = (1U & ((IData)(vlSelf->soclinux_sdpads_data_o) 
                                      >> 0U));
    vlSelf->ODDR_13__DOT__D2 = (1U & ((IData)(vlSelf->soclinux_sdpads_data_o) 
                                      >> 0U));
    vlSelf->ODDR_14__DOT__D1 = (1U & ((IData)(vlSelf->soclinux_sdpads_data_o) 
                                      >> 1U));
    vlSelf->ODDR_14__DOT__D2 = (1U & ((IData)(vlSelf->soclinux_sdpads_data_o) 
                                      >> 1U));
    vlSelf->ODDR_15__DOT__D1 = (1U & ((IData)(vlSelf->soclinux_sdpads_data_o) 
                                      >> 2U));
    vlSelf->ODDR_15__DOT__D2 = (1U & ((IData)(vlSelf->soclinux_sdpads_data_o) 
                                      >> 2U));
    vlSelf->ODDR_16__DOT__D1 = (1U & ((IData)(vlSelf->soclinux_sdpads_data_o) 
                                      >> 3U));
    vlSelf->ODDR_16__DOT__D2 = (1U & ((IData)(vlSelf->soclinux_sdpads_data_o) 
                                      >> 3U));
    vlSelf->main_syncfifo1_syncfifo1_din = vlSelf->main_syncfifo1_wrport_dat_w;
    vlSelf->main_soclinux_interrupt = 0U;
    vlSelf->main_soclinux_interrupt = ((0xffffffc3U 
                                        & vlSelf->main_soclinux_interrupt) 
                                       | (((IData)(vlSelf->soclinux_irq) 
                                           << 5U) | 
                                          (((IData)(vlSelf->soclinux_ev_irq) 
                                            << 4U) 
                                           | (((IData)(vlSelf->main_spihost_irq) 
                                               << 3U) 
                                              | ((IData)(vlSelf->main_soclinux_timer_irq) 
                                                 << 2U)))));
    vlSelf->main_soclinux_interrupt = ((0xfffffffdU 
                                        & vlSelf->main_soclinux_interrupt) 
                                       | ((IData)(vlSelf->main_soclinux_uart_irq) 
                                          << 1U));
    vlSelf->main_soclinux_sr_in_cnt_builder_litespiphy_next_value1 = 0U;
    vlSelf->main_soclinux_sr_out_cnt_builder_litespiphy_next_value0 = 0U;
    if ((1U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
        if (vlSelf->main_soclinux_posedge_reg2) {
            vlSelf->main_soclinux_sr_in_shift = 1U;
            vlSelf->main_soclinux_sr_in_cnt_builder_litespiphy_next_value_ce1 = 1U;
            vlSelf->main_soclinux_sr_in_cnt_builder_litespiphy_next_value1 
                = (0x3fU & ((IData)(vlSelf->main_soclinux_sr_in_cnt) 
                            - (IData)(vlSelf->main_soclinux_sink_payload_width)));
        }
        if (vlSelf->main_soclinux_negedge) {
            vlSelf->main_soclinux_sr_out_shift = 1U;
            vlSelf->main_soclinux_sr_out_cnt_builder_litespiphy_next_value_ce0 = 1U;
            vlSelf->main_soclinux_sr_out_cnt_builder_litespiphy_next_value0 
                = (0x3fU & ((IData)(vlSelf->main_soclinux_sr_out_cnt) 
                            - (IData)(vlSelf->main_soclinux_sink_payload_width)));
        }
    } else {
        if ((2U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
            if ((0U != (IData)(vlSelf->main_soclinux_sr_in_cnt))) {
                if (vlSelf->main_soclinux_posedge_reg2) {
                    vlSelf->main_soclinux_sr_in_shift = 1U;
                    vlSelf->main_soclinux_sr_in_cnt_builder_litespiphy_next_value_ce1 = 1U;
                    vlSelf->main_soclinux_sr_in_cnt_builder_litespiphy_next_value1 
                        = (0x3fU & ((IData)(vlSelf->main_soclinux_sr_in_cnt) 
                                    - (IData)(vlSelf->main_soclinux_sink_payload_width)));
                } else {
                    vlSelf->main_soclinux_sr_in_shift = 0U;
                }
            }
        } else if ((3U != (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
            if (vlSelf->__VdfgExtracted_h1ff7b299__0) {
                vlSelf->main_soclinux_sr_in_cnt_builder_litespiphy_next_value_ce1 = 1U;
                vlSelf->main_soclinux_sr_in_cnt_builder_litespiphy_next_value1 
                    = vlSelf->main_soclinux_sink_payload_len;
            }
        }
        if ((2U != (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
            if ((3U != (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
                if (vlSelf->__VdfgExtracted_h1ff7b299__0) {
                    vlSelf->main_soclinux_sr_out_cnt_builder_litespiphy_next_value_ce0 = 1U;
                    vlSelf->main_soclinux_sr_out_cnt_builder_litespiphy_next_value0 
                        = (0x3fU & ((IData)(vlSelf->builder_soclinux_tx_mux_source_payload_len) 
                                    - (IData)(vlSelf->builder_soclinux_tx_mux_source_payload_width)));
                }
            }
        }
    }
    vlSelf->main_soclinux_dq_o = 0U;
    if ((1U == (IData)(vlSelf->main_soclinux_sink_payload_width))) {
        vlSelf->main_soclinux_dq_o = (vlSelf->main_soclinux_sr_out 
                                      >> 0x1fU);
    } else if ((2U == (IData)(vlSelf->main_soclinux_sink_payload_width))) {
        vlSelf->main_soclinux_dq_o = (vlSelf->main_soclinux_sr_out 
                                      >> 0x1eU);
    } else if ((4U == (IData)(vlSelf->main_soclinux_sink_payload_width))) {
        vlSelf->main_soclinux_dq_o = (vlSelf->main_soclinux_sr_out 
                                      >> 0x1cU);
    } else if ((8U == (IData)(vlSelf->main_soclinux_sink_payload_width))) {
        vlSelf->main_soclinux_dq_o = (0xfU & (vlSelf->main_soclinux_sr_out 
                                              >> 0x18U));
    }
    vlSelf->main_soclinux_sink_ready = 0U;
    if ((1U != (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
        if ((2U != (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
            if ((3U != (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
                if (vlSelf->__VdfgExtracted_h1ff7b299__0) {
                    vlSelf->main_soclinux_sr_out_load = 1U;
                }
            }
            if ((3U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
                vlSelf->main_soclinux_dq_oe_builder_litespiphy_next_value_ce2 = 1U;
                vlSelf->main_soclinux_dq_oe_builder_litespiphy_next_value2 = 0U;
            } else if (vlSelf->__VdfgExtracted_h1ff7b299__0) {
                vlSelf->main_soclinux_dq_oe_builder_litespiphy_next_value_ce2 = 1U;
                vlSelf->main_soclinux_dq_oe_builder_litespiphy_next_value2 
                    = (0xfU & (IData)(vlSelf->builder_soclinux_tx_mux_source_payload_mask));
            }
        }
        if ((2U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
            if ((0U == (IData)(vlSelf->main_soclinux_sr_in_cnt))) {
                vlSelf->main_soclinux_sink_ready = 1U;
            } else if (vlSelf->main_soclinux_posedge_reg2) {
                if (((IData)(vlSelf->main_soclinux_sr_in_cnt) 
                     == (IData)(vlSelf->main_soclinux_sink_payload_width))) {
                    vlSelf->main_soclinux_sink_ready = 1U;
                }
            }
        }
    }
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_d 
        = ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_edge) 
           & (0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q)));
    vlSelf->main_soclinux_mmap_burst_adr_builder_litespimmap_next_value_ce2 = 0U;
    vlSelf->main_soclinux_mmap_bus_ack = 0U;
    if ((8U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                    if (vlSelf->main_soclinux_mmap_sink_valid) {
                        vlSelf->main_soclinux_mmap_burst_adr_builder_litespimmap_next_value_ce2 = 1U;
                        vlSelf->main_soclinux_mmap_bus_ack = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                vlSelf->main_soclinux_mmap_burst_adr_builder_litespimmap_next_value_ce2 = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_burst_adr_builder_litespimmap_next_value_ce2 = 1U;
        }
    }
    vlSelf->main_hyperram_reg_rdata_status_builder_next_value_ce = 0U;
    vlSelf->main_hyperram_reg_rdata_status_builder_next_value = 0U;
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
                if (vlSelf->main_core_reg_rx_conv_source_valid) {
                    vlSelf->main_core_reg_ack = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (IData)(vlSelf->main_core_state))) {
            if (vlSelf->main_core_reg_tx_conv_sink_ready) {
                vlSelf->main_core_reg_ack = 1U;
            }
        }
    }
    if ((1U != (IData)(vlSelf->builder_soclinux_fsm_state))) {
        if ((2U == (IData)(vlSelf->builder_soclinux_fsm_state))) {
            if (vlSelf->main_core_reg_ack) {
                vlSelf->main_hyperram_reg_rdata_status_builder_next_value_ce = 1U;
                vlSelf->main_hyperram_reg_rdata_status_builder_next_value 
                    = vlSelf->main_core_reg_dat_r;
            }
        }
    }
    vlSelf->builder_soclinux_fsm_next_state = 0U;
    vlSelf->builder_soclinux_fsm_next_state = vlSelf->builder_soclinux_fsm_state;
    if ((1U == (IData)(vlSelf->builder_soclinux_fsm_state))) {
        if (vlSelf->main_core_reg_ack) {
            vlSelf->builder_soclinux_fsm_next_state = 0U;
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_fsm_state))) {
        if (vlSelf->main_core_reg_ack) {
            vlSelf->builder_soclinux_fsm_next_state = 0U;
        }
    } else if (vlSelf->main_hyperram_write) {
        vlSelf->builder_soclinux_fsm_next_state = 1U;
    } else if (vlSelf->main_hyperram_read) {
        vlSelf->builder_soclinux_fsm_next_state = 2U;
    }
    vlSelf->soclinux_cmdr_cmdr_converter_converter_load_part 
        = ((IData)(vlSelf->soclinux_cmdr_cmdr_converter_converter_sink_valid) 
           & (IData)(vlSelf->soclinux_cmdr_cmdr_converter_converter_sink_ready));
    vlSelf->soclinux_datar_crc16_enable = vlSelf->soclinux_datar_crc16_crc0_enable;
    vlSelf->soclinux_datar_crc16_crc1_enable = vlSelf->soclinux_datar_crc16_crc0_enable;
    vlSelf->soclinux_datar_crc16_crc2_enable = vlSelf->soclinux_datar_crc16_crc0_enable;
    vlSelf->soclinux_datar_crc16_crc3_enable = vlSelf->soclinux_datar_crc16_crc0_enable;
    vlSelf->soclinux_sdpads_clk = vlSelf->soclinux_clocker_clk_en;
    vlSelf->soclinux_clocker_ce_latched = 0U;
    vlSelf->soclinux_clocker_ce_latched = ((IData)(vlSelf->soclinux_clocker_clk_d)
                                            ? (IData)(vlSelf->soclinux_clocker_clk_en)
                                            : (IData)(vlSelf->soclinux_clocker_ce_delayed));
    vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value5 = 0U;
    vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value_ce5 = 0U;
    vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 0U;
    vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 0U;
    vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value_ce10 = 0U;
    vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[0U] = 0U;
    vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[1U] = 0U;
    vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[2U] = 0U;
    vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[3U] = 0U;
    vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value6 = 0U;
    vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value_ce6 = 0U;
    if ((4U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
            vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_data_error_builder_sdcore_next_value_ce7 = 1U;
                vlSelf->soclinux_core_data_error_builder_sdcore_next_value7 = 0U;
                vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value5 = 0U;
                vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value_ce5 = 1U;
                vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
                vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 0U;
                vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value6 = 0U;
                vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value_ce6 = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
            vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_data_error_builder_sdcore_next_value_ce7 = 1U;
                vlSelf->soclinux_core_data_error_builder_sdcore_next_value7 = 0U;
                vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value5 = 0U;
                vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value_ce5 = 1U;
                vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
                vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 0U;
                vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value6 = 0U;
                vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value_ce6 = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if (vlSelf->soclinux_dataw_source_source_valid) {
                if ((5U != (IData)(vlSelf->soclinux_dataw_source_source_payload_status))) {
                    if ((2U != (IData)(vlSelf->soclinux_dataw_source_source_payload_status))) {
                        vlSelf->soclinux_core_data_error_builder_sdcore_next_value_ce7 = 1U;
                        vlSelf->soclinux_core_data_error_builder_sdcore_next_value7 = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
            if (vlSelf->soclinux_cmdr_source_source_valid) {
                if ((1U == (IData)(vlSelf->soclinux_cmdr_source_source_payload_status))) {
                    vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value5 = 1U;
                    vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value_ce5 = 1U;
                }
                if ((1U != (IData)(vlSelf->soclinux_cmdr_source_source_payload_status))) {
                    if (vlSelf->soclinux_cmdr_source_source_last) {
                        vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
                        vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 1U;
                        if (((IData)(vlSelf->soclinux_core_cmd_crc_en) 
                             & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc_crc) 
                                != (0x7fU & ((IData)(vlSelf->soclinux_cmdr_source_source_payload_data) 
                                             >> 1U))))) {
                            vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value6 = 1U;
                            vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value_ce6 = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
        vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
        vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 1U;
        if (vlSelf->soclinux_core_cmd_send_re) {
            vlSelf->soclinux_core_data_error_builder_sdcore_next_value_ce7 = 1U;
            vlSelf->soclinux_core_data_error_builder_sdcore_next_value7 = 0U;
            vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value5 = 0U;
            vlSelf->soclinux_core_cmd_timeout_builder_sdcore_next_value_ce5 = 1U;
            vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
            vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 0U;
            vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value6 = 0U;
            vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value_ce6 = 1U;
        }
    }
    vlSelf->soclinux_cmdw_sink_payload_data = 0U;
    vlSelf->soclinux_core_crc7_inserter_crc_din = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
                if (vlSelf->soclinux_cmdr_source_source_valid) {
                    if ((1U != (IData)(vlSelf->soclinux_cmdr_source_source_payload_status))) {
                        if (vlSelf->soclinux_cmdr_source_source_last) {
                            if ((2U == (IData)(vlSelf->soclinux_core_cmd_type))) {
                                vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value_ce10 = 1U;
                                vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[0U] 
                                    = ((vlSelf->soclinux_core_cmd_response_status[0U] 
                                        << 8U) | (IData)(vlSelf->soclinux_cmdr_source_source_payload_data));
                                vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[1U] 
                                    = ((vlSelf->soclinux_core_cmd_response_status[0U] 
                                        >> 0x18U) | 
                                       (vlSelf->soclinux_core_cmd_response_status[1U] 
                                        << 8U));
                                vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[2U] 
                                    = ((vlSelf->soclinux_core_cmd_response_status[1U] 
                                        >> 0x18U) | 
                                       (vlSelf->soclinux_core_cmd_response_status[2U] 
                                        << 8U));
                                vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[3U] 
                                    = ((vlSelf->soclinux_core_cmd_response_status[2U] 
                                        >> 0x18U) | 
                                       (vlSelf->soclinux_core_cmd_response_status[3U] 
                                        << 8U));
                            }
                        } else {
                            vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value_ce10 = 1U;
                            vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[0U] 
                                = ((vlSelf->soclinux_core_cmd_response_status[0U] 
                                    << 8U) | (IData)(vlSelf->soclinux_cmdr_source_source_payload_data));
                            vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[1U] 
                                = ((vlSelf->soclinux_core_cmd_response_status[0U] 
                                    >> 0x18U) | (vlSelf->soclinux_core_cmd_response_status[1U] 
                                                 << 8U));
                            vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[2U] 
                                = ((vlSelf->soclinux_core_cmd_response_status[1U] 
                                    >> 0x18U) | (vlSelf->soclinux_core_cmd_response_status[2U] 
                                                 << 8U));
                            vlSelf->soclinux_core_cmd_response_status_builder_sdcore_next_value10[3U] 
                                = ((vlSelf->soclinux_core_cmd_response_status[2U] 
                                    >> 0x18U) | (vlSelf->soclinux_core_cmd_response_status[3U] 
                                                 << 8U));
                        }
                    }
                }
                vlSelf->soclinux_core_crc7_inserter_crc_din 
                    = vlSelf->soclinux_cmdr_source_source_payload_data;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if ((0U == (IData)(vlSelf->soclinux_core_cmd_count))) {
                vlSelf->soclinux_cmdw_sink_payload_data 
                    = (0x40U | (IData)(vlSelf->soclinux_core_cmd));
            } else if ((1U == (IData)(vlSelf->soclinux_core_cmd_count))) {
                vlSelf->soclinux_cmdw_sink_payload_data 
                    = (vlSelf->soclinux_core_cmd_argument_storage 
                       >> 0x18U);
            } else if ((2U == (IData)(vlSelf->soclinux_core_cmd_count))) {
                vlSelf->soclinux_cmdw_sink_payload_data 
                    = (0xffU & (vlSelf->soclinux_core_cmd_argument_storage 
                                >> 0x10U));
            } else if ((3U == (IData)(vlSelf->soclinux_core_cmd_count))) {
                vlSelf->soclinux_cmdw_sink_payload_data 
                    = (0xffU & (vlSelf->soclinux_core_cmd_argument_storage 
                                >> 8U));
            } else if ((4U == (IData)(vlSelf->soclinux_core_cmd_count))) {
                vlSelf->soclinux_cmdw_sink_payload_data 
                    = (0xffU & vlSelf->soclinux_core_cmd_argument_storage);
            } else if ((5U == (IData)(vlSelf->soclinux_core_cmd_count))) {
                vlSelf->soclinux_cmdw_sink_payload_data 
                    = (1U | ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                             << 1U));
            }
            vlSelf->soclinux_core_crc7_inserter_crc_din 
                = vlSelf->soclinux_cmdw_sink_payload_data;
        }
    }
    vlSelf->main_rx_cdc_cdc_graycounter1_q_next = (7U 
                                                   & ((IData)(vlSelf->main_rx_cdc_cdc_graycounter1_q_next_binary) 
                                                      ^ 
                                                      VL_SHIFTR_III(3,3,32, (IData)(vlSelf->main_rx_cdc_cdc_graycounter1_q_next_binary), 1U)));
    vlSelf->main_rx_cdc_cdc_rdport_adr = (3U & (IData)(vlSelf->main_rx_cdc_cdc_graycounter1_q_next_binary));
    vlSelf->main_tx_cdc_cdc_graycounter0_q_next = (7U 
                                                   & ((IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q_next_binary) 
                                                      ^ 
                                                      VL_SHIFTR_III(3,3,32, (IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q_next_binary), 1U)));
    vlSelf->main_core_source_source_payload_rwds = 0U;
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_payload_rwds 
                    = vlSelf->main_core_dat_tx_conv_source_payload_rwds;
            }
        }
    } else if ((2U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (IData)(vlSelf->main_core_state))) {
            vlSelf->main_core_source_source_payload_rwds 
                = vlSelf->main_core_reg_tx_conv_source_payload_rwds;
        }
    }
    vlSelf->soclinux_dataw_crc16_crc01 = ((0xe000U 
                                           & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                              << 1U)) 
                                          | ((0x1000U 
                                              & ((0xfffff000U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                     << 1U)) 
                                                 ^ 
                                                 ((IData)(__VdfgRegularize_h278c091a_133_2) 
                                                  << 0xcU))) 
                                             | ((0xfc0U 
                                                 & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                    << 1U)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                           << 1U)) 
                                                       ^ 
                                                       ((IData)(__VdfgRegularize_h278c091a_133_2) 
                                                        << 5U))) 
                                                   | ((0x1eU 
                                                       & ((IData)(vlSelf->soclinux_dataw_crc16_crc00) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_133_2))))));
    vlSelf->soclinux_dataw_crc16_crc11 = ((0xe000U 
                                           & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                              << 1U)) 
                                          | ((0x1000U 
                                              & ((0xfffff000U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                     << 1U)) 
                                                 ^ 
                                                 ((IData)(__VdfgRegularize_h278c091a_133_6) 
                                                  << 0xcU))) 
                                             | ((0xfc0U 
                                                 & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                    << 1U)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                           << 1U)) 
                                                       ^ 
                                                       ((IData)(__VdfgRegularize_h278c091a_133_6) 
                                                        << 5U))) 
                                                   | ((0x1eU 
                                                       & ((IData)(vlSelf->soclinux_dataw_crc16_crc10) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_133_6))))));
    vlSelf->soclinux_dataw_crc16_crc21 = ((0xe000U 
                                           & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                              << 1U)) 
                                          | ((0x1000U 
                                              & ((0xfffff000U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                     << 1U)) 
                                                 ^ 
                                                 ((IData)(__VdfgRegularize_h278c091a_133_10) 
                                                  << 0xcU))) 
                                             | ((0xfc0U 
                                                 & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                    << 1U)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                           << 1U)) 
                                                       ^ 
                                                       ((IData)(__VdfgRegularize_h278c091a_133_10) 
                                                        << 5U))) 
                                                   | ((0x1eU 
                                                       & ((IData)(vlSelf->soclinux_dataw_crc16_crc20) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_133_10))))));
    vlSelf->soclinux_dataw_crc16_crc31 = ((0xe000U 
                                           & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                              << 1U)) 
                                          | ((0x1000U 
                                              & ((0xfffff000U 
                                                  & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                                     << 1U)) 
                                                 ^ 
                                                 ((IData)(__VdfgRegularize_h278c091a_133_12) 
                                                  << 0xcU))) 
                                             | ((0xfc0U 
                                                 & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                                    << 1U)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                                           << 1U)) 
                                                       ^ 
                                                       ((IData)(__VdfgRegularize_h278c091a_133_12) 
                                                        << 5U))) 
                                                   | ((0x1eU 
                                                       & ((IData)(vlSelf->soclinux_dataw_crc16_crc30) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_133_12))))));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.interrupts 
        = vlSelf->main_soclinux_interrupt;
    vlSelf->ODDR_3__DOT__D1 = (1U & ((IData)(vlSelf->main_soclinux_dq_o) 
                                     >> 0U));
    vlSelf->ODDR_3__DOT__D2 = (1U & ((IData)(vlSelf->main_soclinux_dq_o) 
                                     >> 0U));
    vlSelf->ODDR_4__DOT__D1 = (1U & ((IData)(vlSelf->main_soclinux_dq_o) 
                                     >> 1U));
    vlSelf->ODDR_4__DOT__D2 = (1U & ((IData)(vlSelf->main_soclinux_dq_o) 
                                     >> 1U));
    vlSelf->ODDR_5__DOT__D1 = (1U & ((IData)(vlSelf->main_soclinux_dq_o) 
                                     >> 2U));
    vlSelf->ODDR_5__DOT__D2 = (1U & ((IData)(vlSelf->main_soclinux_dq_o) 
                                     >> 2U));
    vlSelf->ODDR_6__DOT__D1 = (1U & ((IData)(vlSelf->main_soclinux_dq_o) 
                                     >> 3U));
    vlSelf->ODDR_6__DOT__D2 = (1U & ((IData)(vlSelf->main_soclinux_dq_o) 
                                     >> 3U));
    vlSelf->main_soclinux_crossbar_source_ready = vlSelf->main_soclinux_sink_ready;
    vlSelf->builder_soclinux_tx_mux_source_ready = vlSelf->main_soclinux_sink_ready;
    vlSelf->main_soclinux_adapted_interface_ack = vlSelf->main_soclinux_mmap_bus_ack;
    vlSelf->soclinux_clocker_clk0 = ((~ (IData)(vlSelf->soclinux_clocker_clk1)) 
                                     & (IData)(vlSelf->soclinux_clocker_ce_latched));
    vlSelf->soclinux_cmdw_pads_out_payload_cmd_o = 0U;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_sink_valid) {
            if (vlSelf->soclinux_cmdw_pads_out_ready) {
                vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->soclinux_cmdw_count)));
                vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value_ce = 1U;
                if ((7U == (IData)(vlSelf->soclinux_cmdw_count))) {
                    vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value = 0U;
                    vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value_ce = 1U;
                }
            }
            if (((((((((0U == (IData)(vlSelf->soclinux_cmdw_count)) 
                       | (1U == (IData)(vlSelf->soclinux_cmdw_count))) 
                      | (2U == (IData)(vlSelf->soclinux_cmdw_count))) 
                     | (3U == (IData)(vlSelf->soclinux_cmdw_count))) 
                    | (4U == (IData)(vlSelf->soclinux_cmdw_count))) 
                   | (5U == (IData)(vlSelf->soclinux_cmdw_count))) 
                  | (6U == (IData)(vlSelf->soclinux_cmdw_count))) 
                 | (7U == (IData)(vlSelf->soclinux_cmdw_count)))) {
                vlSelf->soclinux_cmdw_pads_out_payload_cmd_o 
                    = (1U & ((0U == (IData)(vlSelf->soclinux_cmdw_count))
                              ? ((IData)(vlSelf->soclinux_cmdw_sink_payload_data) 
                                 >> 7U) : ((1U == (IData)(vlSelf->soclinux_cmdw_count))
                                            ? ((IData)(vlSelf->soclinux_cmdw_sink_payload_data) 
                                               >> 6U)
                                            : ((2U 
                                                == (IData)(vlSelf->soclinux_cmdw_count))
                                                ? ((IData)(vlSelf->soclinux_cmdw_sink_payload_data) 
                                                   >> 5U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->soclinux_cmdw_count))
                                                    ? 
                                                   ((IData)(vlSelf->soclinux_cmdw_sink_payload_data) 
                                                    >> 4U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->soclinux_cmdw_count))
                                                     ? 
                                                    ((IData)(vlSelf->soclinux_cmdw_sink_payload_data) 
                                                     >> 3U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->soclinux_cmdw_count))
                                                      ? 
                                                     ((IData)(vlSelf->soclinux_cmdw_sink_payload_data) 
                                                      >> 2U)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->soclinux_cmdw_count))
                                                       ? 
                                                      ((IData)(vlSelf->soclinux_cmdw_sink_payload_data) 
                                                       >> 1U)
                                                       : (IData)(vlSelf->soclinux_cmdw_sink_payload_data)))))))));
            }
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_pads_out_ready) {
            vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->soclinux_cmdw_count)));
            vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value_ce = 1U;
        }
        vlSelf->soclinux_cmdw_pads_out_payload_cmd_o = 1U;
    } else {
        vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value = 0U;
        vlSelf->soclinux_cmdw_count_builder_sdphycmdw_next_value_ce = 1U;
    }
    __VdfgRegularize_h278c091a_138_7 = (1U & (((IData)(vlSelf->soclinux_core_crc7_inserter_crc_din) 
                                               >> 4U) 
                                              ^ ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                                 >> 3U)));
    __VdfgRegularize_h278c091a_138_5 = (1U & (((IData)(vlSelf->soclinux_core_crc7_inserter_crc_din) 
                                               >> 5U) 
                                              ^ ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                                 >> 4U)));
    __VdfgRegularize_h278c091a_138_3 = (1U & (((IData)(vlSelf->soclinux_core_crc7_inserter_crc_din) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                                 >> 5U)));
    __VdfgRegularize_h278c091a_138_0 = (IData)((((IData)(vlSelf->soclinux_core_crc7_inserter_crc_din) 
                                                 >> 7U) 
                                                ^ ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                                   >> 6U)));
    vlSelf->main_tx_cdc_sink_sink_payload_rwds = vlSelf->main_core_source_source_payload_rwds;
    vlSelf->main_tx_cdc_cdc_sink_payload_rwds = vlSelf->main_core_source_source_payload_rwds;
    vlSelf->main_tx_cdc_cdc_fifo_in_payload_rwds = vlSelf->main_core_source_source_payload_rwds;
    vlSelf->builder_soclinux_tx_mux_endpoint0_sink_ready = 0U;
    if ((1U & (~ (IData)(vlSelf->builder_soclinux_tx_mux_sel)))) {
        vlSelf->builder_soclinux_tx_mux_endpoint0_sink_ready 
            = vlSelf->builder_soclinux_tx_mux_source_ready;
    }
    vlSelf->builder_soclinux_tx_mux_endpoint1_sink_ready = 0U;
    if (vlSelf->builder_soclinux_tx_mux_sel) {
        if (vlSelf->builder_soclinux_tx_mux_sel) {
            vlSelf->builder_soclinux_tx_mux_endpoint1_sink_ready 
                = vlSelf->builder_soclinux_tx_mux_source_ready;
        }
    }
    vlSelf->builder_impl_xilinxmultiregimpl28 = (1U 
                                                 & (~ (IData)(vlSelf->soclinux_clocker_clk0)));
    vlSelf->soclinux_sdpads_cmd_o = ((IData)(vlSelf->soclinux_init_pads_out_payload_cmd_o) 
                                     | ((IData)(vlSelf->soclinux_cmdr_pads_out_payload_cmd_o) 
                                        | ((IData)(vlSelf->soclinux_cmdw_pads_out_payload_cmd_o) 
                                           | ((IData)(vlSelf->soclinux_datar_pads_out_payload_cmd_o) 
                                              | (IData)(vlSelf->soclinux_dataw_pads_out_payload_cmd_o)))));
    __VdfgRegularize_h278c091a_138_6 = (1U & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                              ^ (IData)(__VdfgRegularize_h278c091a_138_5)));
    __VdfgRegularize_h278c091a_138_4 = (1U & (((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                               >> 1U) 
                                              ^ (IData)(__VdfgRegularize_h278c091a_138_3)));
    __VdfgRegularize_h278c091a_138_8 = ((IData)(__VdfgRegularize_h278c091a_138_0) 
                                        ^ (IData)(__VdfgRegularize_h278c091a_138_7));
    __VdfgRegularize_h278c091a_138_1 = (1U & (((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                               >> 2U) 
                                              ^ (IData)(__VdfgRegularize_h278c091a_138_0)));
    vlSelf->main_soclinux_port_mmap_user_port_sink_ready 
        = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_ready;
    vlSelf->main_soclinux_port_mmap_internal_port_sink_ready 
        = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_ready;
    vlSelf->main_soclinux_mmap_source_ready = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_ready;
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_ready 
        = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_ready;
    vlSelf->main_soclinux_port_master_user_port_sink_ready 
        = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_ready;
    vlSelf->main_soclinux_master_source_ready = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_ready;
    vlSelf->main_soclinux_port_master_internal_port_sink_ready 
        = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_ready;
    vlSelf->main_soclinux_master_tx_fifo_source_source_ready 
        = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_ready;
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_ready 
        = (1U & ((~ (IData)(vlSelf->main_soclinux_master_tx_fifo_pipe_valid_source_valid)) 
                 | (IData)(vlSelf->builder_soclinux_tx_mux_endpoint1_sink_ready)));
    vlSelf->ODDR_2__DOT__D1 = vlSelf->builder_impl_xilinxmultiregimpl28;
    vlSelf->ODDR_2__DOT__D2 = vlSelf->builder_impl_xilinxmultiregimpl28;
    vlSelf->ODDR_11__DOT__D1 = vlSelf->soclinux_sdpads_cmd_o;
    vlSelf->ODDR_11__DOT__D2 = vlSelf->soclinux_sdpads_cmd_o;
    __VdfgRegularize_h278c091a_138_11 = (1U & (((IData)(vlSelf->soclinux_core_crc7_inserter_crc_din) 
                                                >> 1U) 
                                               ^ (IData)(__VdfgRegularize_h278c091a_138_6)));
    __VdfgRegularize_h278c091a_138_10 = (1U & (((IData)(vlSelf->soclinux_core_crc7_inserter_crc_din) 
                                                >> 2U) 
                                               ^ (IData)(__VdfgRegularize_h278c091a_138_4)));
    __VdfgRegularize_h278c091a_138_12 = (1U & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc_din) 
                                               ^ (IData)(__VdfgRegularize_h278c091a_138_8)));
    vlSelf->soclinux_core_crc7_inserter_crc1 = ((0x70U 
                                                 & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                                    << 1U)) 
                                                | (((IData)(__VdfgRegularize_h278c091a_138_1) 
                                                    << 3U) 
                                                   | ((6U 
                                                       & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                                          << 1U)) 
                                                      | (IData)(__VdfgRegularize_h278c091a_138_0))));
    __VdfgRegularize_h278c091a_138_9 = (1U & (((IData)(vlSelf->soclinux_core_crc7_inserter_crc_din) 
                                               >> 3U) 
                                              ^ (IData)(__VdfgRegularize_h278c091a_138_1)));
    vlSelf->main_soclinux_master_tx_fifo_sink_sink_ready 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_ready;
    vlSelf->main_soclinux_master_tx_ready = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_ready;
    vlSelf->main_soclinux_master_status_status = 0U;
    vlSelf->main_soclinux_master_status_status = (((IData)(vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_ready));
    vlSelf->soclinux_core_crc7_inserter_crc2 = ((0x70U 
                                                 & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc1) 
                                                    << 1U)) 
                                                | (((IData)(__VdfgRegularize_h278c091a_138_4) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc0) 
                                                          << 2U)) 
                                                      | (((IData)(__VdfgRegularize_h278c091a_138_0) 
                                                          << 1U) 
                                                         | (IData)(__VdfgRegularize_h278c091a_138_3)))));
    __VdfgRegularize_h278c091a_138_13 = (((IData)(__VdfgRegularize_h278c091a_138_9) 
                                          << 1U) | (IData)(__VdfgRegularize_h278c091a_138_10));
    vlSelf->builder_csr_bankarray_csrbank4_master_status_w 
        = vlSelf->main_soclinux_master_status_status;
    vlSelf->soclinux_core_crc7_inserter_crc3 = ((0x70U 
                                                 & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc2) 
                                                    << 1U)) 
                                                | (((IData)(__VdfgRegularize_h278c091a_138_6) 
                                                    << 3U) 
                                                   | (((IData)(__VdfgRegularize_h278c091a_138_0) 
                                                       << 2U) 
                                                      | (((IData)(__VdfgRegularize_h278c091a_138_3) 
                                                          << 1U) 
                                                         | (IData)(__VdfgRegularize_h278c091a_138_5)))));
    vlSelf->soclinux_core_crc7_inserter_crc4 = ((0x70U 
                                                 & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc3) 
                                                    << 1U)) 
                                                | (((IData)(__VdfgRegularize_h278c091a_138_8) 
                                                    << 3U) 
                                                   | (((IData)(__VdfgRegularize_h278c091a_138_3) 
                                                       << 2U) 
                                                      | (((IData)(__VdfgRegularize_h278c091a_138_5) 
                                                          << 1U) 
                                                         | (IData)(__VdfgRegularize_h278c091a_138_7)))));
    vlSelf->soclinux_core_crc7_inserter_crc5 = ((0x70U 
                                                 & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc4) 
                                                    << 1U)) 
                                                | ((((IData)(__VdfgRegularize_h278c091a_138_3) 
                                                     ^ (IData)(__VdfgRegularize_h278c091a_138_9)) 
                                                    << 3U) 
                                                   | (((IData)(__VdfgRegularize_h278c091a_138_5) 
                                                       << 2U) 
                                                      | (((IData)(__VdfgRegularize_h278c091a_138_7) 
                                                          << 1U) 
                                                         | (IData)(__VdfgRegularize_h278c091a_138_9)))));
    vlSelf->soclinux_core_crc7_inserter_crc6 = ((0x70U 
                                                 & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc5) 
                                                    << 1U)) 
                                                | ((((IData)(__VdfgRegularize_h278c091a_138_5) 
                                                     ^ (IData)(__VdfgRegularize_h278c091a_138_10)) 
                                                    << 3U) 
                                                   | (((IData)(__VdfgRegularize_h278c091a_138_7) 
                                                       << 2U) 
                                                      | (IData)(__VdfgRegularize_h278c091a_138_13))));
    vlSelf->soclinux_core_crc7_inserter_crc7 = ((0x70U 
                                                 & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc6) 
                                                    << 1U)) 
                                                | ((((IData)(__VdfgRegularize_h278c091a_138_7) 
                                                     ^ (IData)(__VdfgRegularize_h278c091a_138_11)) 
                                                    << 3U) 
                                                   | (((IData)(__VdfgRegularize_h278c091a_138_13) 
                                                       << 1U) 
                                                      | (IData)(__VdfgRegularize_h278c091a_138_11))));
    vlSelf->soclinux_core_crc7_inserter_crc8 = ((0x70U 
                                                 & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc7) 
                                                    << 1U)) 
                                                | ((((IData)(__VdfgRegularize_h278c091a_138_9) 
                                                     ^ (IData)(__VdfgRegularize_h278c091a_138_12)) 
                                                    << 3U) 
                                                   | (((IData)(__VdfgRegularize_h278c091a_138_10) 
                                                       << 2U) 
                                                      | (((IData)(__VdfgRegularize_h278c091a_138_11) 
                                                          << 1U) 
                                                         | (IData)(__VdfgRegularize_h278c091a_138_12)))));
}

VL_INLINE_OPT void Vsonata_sonata___ico_sequent__TOP__sonata__1(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___ico_sequent__TOP__sonata__1\n"); );
    // Init
    CData/*0:0*/ __VdfgExtracted_hb2fc4e16__0;
    __VdfgExtracted_hb2fc4e16__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h3cdd3448__0;
    __VdfgExtracted_h3cdd3448__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h331e7ac7__0;
    __VdfgExtracted_h331e7ac7__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb0a81212__0;
    __VdfgExtracted_hb0a81212__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb0a8249d__0;
    __VdfgExtracted_hb0a8249d__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb0a7b42e__0;
    __VdfgExtracted_hb0a7b42e__0 = 0;
    CData/*0:0*/ __VdfgExtracted_ha61d8069__0;
    __VdfgExtracted_ha61d8069__0 = 0;
    CData/*0:0*/ __VdfgExtracted_ha61da596__0;
    __VdfgExtracted_ha61da596__0 = 0;
    CData/*0:0*/ __VdfgExtracted_ha61da165__0;
    __VdfgExtracted_ha61da165__0 = 0;
    CData/*0:0*/ __VdfgExtracted_ha246c7a6__0;
    __VdfgExtracted_ha246c7a6__0 = 0;
    CData/*0:0*/ __VdfgExtracted_ha246b56c__0;
    __VdfgExtracted_ha246b56c__0 = 0;
    CData/*0:0*/ __VdfgExtracted_ha247c00e__0;
    __VdfgExtracted_ha247c00e__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0b739e8f__0;
    __VdfgExtracted_h0b739e8f__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27f2134d__0;
    __VdfgExtracted_h27f2134d__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27f26518__0;
    __VdfgExtracted_h27f26518__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27f3f367__0;
    __VdfgExtracted_h27f3f367__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271a8daa__0;
    __VdfgExtracted_h271a8daa__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271b4644__0;
    __VdfgExtracted_h271b4644__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e9a1b2__0;
    __VdfgExtracted_h27e9a1b2__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e9d021__0;
    __VdfgExtracted_h27e9d021__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e98114__0;
    __VdfgExtracted_h27e98114__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e9ae47__0;
    __VdfgExtracted_h27e9ae47__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e9dffe__0;
    __VdfgExtracted_h27e9dffe__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27f76228__0;
    __VdfgExtracted_h27f76228__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271c1c54__0;
    __VdfgExtracted_h271c1c54__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e8c543__0;
    __VdfgExtracted_h27e8c543__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e91cb8__0;
    __VdfgExtracted_h27e91cb8__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271b4a2e__0;
    __VdfgExtracted_h271b4a2e__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e8fd17__0;
    __VdfgExtracted_h27e8fd17__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e93144__0;
    __VdfgExtracted_h27e93144__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27e95d31__0;
    __VdfgExtracted_h27e95d31__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271a8a22__0;
    __VdfgExtracted_h271a8a22__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27ea53af__0;
    __VdfgExtracted_h27ea53af__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h27ea423f__0;
    __VdfgExtracted_h27ea423f__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271cd963__0;
    __VdfgExtracted_h271cd963__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271ca254__0;
    __VdfgExtracted_h271ca254__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271cf8c1__0;
    __VdfgExtracted_h271cf8c1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271d473e__0;
    __VdfgExtracted_h271d473e__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271a18e7__0;
    __VdfgExtracted_h271a18e7__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271cd26f__0;
    __VdfgExtracted_h271cd26f__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271b2239__0;
    __VdfgExtracted_h271b2239__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271c8772__0;
    __VdfgExtracted_h271c8772__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271e3a6d__0;
    __VdfgExtracted_h271e3a6d__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271ccd2d__0;
    __VdfgExtracted_h271ccd2d__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271c5cbc__0;
    __VdfgExtracted_h271c5cbc__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271cec43__0;
    __VdfgExtracted_h271cec43__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271d79e6__0;
    __VdfgExtracted_h271d79e6__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h271c0c55__0;
    __VdfgExtracted_h271c0c55__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h02682fb1__0;
    __VdfgExtracted_h02682fb1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h02681e7e__0;
    __VdfgExtracted_h02681e7e__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h026b4d8d__0;
    __VdfgExtracted_h026b4d8d__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h031fa14a__0;
    __VdfgExtracted_h031fa14a__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h031df0b4__0;
    __VdfgExtracted_h031df0b4__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h031e8d36__0;
    __VdfgExtracted_h031e8d36__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0319dcf1__0;
    __VdfgExtracted_h0319dcf1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0319cca4__0;
    __VdfgExtracted_h0319cca4__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0319ba95__0;
    __VdfgExtracted_h0319ba95__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0314b0c4__0;
    __VdfgExtracted_h0314b0c4__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0314bdee__0;
    __VdfgExtracted_h0314bdee__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h03239bcc__0;
    __VdfgExtracted_h03239bcc__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb2abf48a__0;
    __VdfgExtracted_hb2abf48a__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb2ac02c7__0;
    __VdfgExtracted_hb2ac02c7__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb2ae92f8__0;
    __VdfgExtracted_hb2ae92f8__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb2a59d31__0;
    __VdfgExtracted_hb2a59d31__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb2a58f97__0;
    __VdfgExtracted_hb2a58f97__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb2a6480d__0;
    __VdfgExtracted_hb2a6480d__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb298f8de__0;
    __VdfgExtracted_hb298f8de__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hb298e883__0;
    __VdfgExtracted_hb298e883__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0862eea6__0;
    __VdfgExtracted_h0862eea6__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h08626117__0;
    __VdfgExtracted_h08626117__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0862d088__0;
    __VdfgExtracted_h0862d088__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0857f3ed__0;
    __VdfgExtracted_h0857f3ed__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h0857c5a7__0;
    __VdfgExtracted_h0857c5a7__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h08588ba9__0;
    __VdfgExtracted_h08588ba9__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h085b1a7a__0;
    __VdfgExtracted_h085b1a7a__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h085b6b53__0;
    __VdfgExtracted_h085b6b53__0 = 0;
    CData/*0:0*/ __VdfgRegularize_h278c091a_14_6;
    __VdfgRegularize_h278c091a_14_6 = 0;
    // Body
    vlSelf->main_soclinux_jtag_tdo = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tdo;
    vlSelf->main_soclinux_pbus_bte = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_BTE;
    vlSelf->main_soclinux_clintbus_dat_r = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.clintWishbone_DAT_MISO;
    vlSelf->main_soclinux_plicbus_dat_r = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.plicWishbone_DAT_MISO;
    vlSelf->main_soclinux_pbus_dat_w = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_DAT_MOSI;
    vlSelf->main_soclinux_pbus_sel = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_SEL;
    vlSelf->main_soclinux_pbus_we = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_WE;
    vlSelf->main_soclinux_pbus_cyc = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_CYC;
    vlSelf->main_soclinux_pbus_stb = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_STB;
    vlSelf->main_soclinux_clintbus_ack = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.clintWishbone_ACK;
    vlSelf->main_soclinux_plicbus_ack = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.plicWishbone_ACK;
    vlSelf->main_soclinux_pbus_cti = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_CTI;
    vlSelf->main_soclinux_pbus_adr = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_ADR;
    vlSelf->main_hyperramsdrphy_dq_i = vlSelf->hyperram0_dq;
    vlSelf->builder_impl_xilinxmultiregimpl6 = (1U 
                                                & (IData)(vlSelf->hyperram0_dq));
    vlSelf->builder_impl_xilinxmultiregimpl8 = (1U 
                                                & ((IData)(vlSelf->hyperram0_dq) 
                                                   >> 1U));
    vlSelf->builder_impl_xilinxmultiregimpl10 = (1U 
                                                 & ((IData)(vlSelf->hyperram0_dq) 
                                                    >> 2U));
    vlSelf->builder_impl_xilinxmultiregimpl12 = (1U 
                                                 & ((IData)(vlSelf->hyperram0_dq) 
                                                    >> 3U));
    vlSelf->builder_impl_xilinxmultiregimpl14 = (1U 
                                                 & ((IData)(vlSelf->hyperram0_dq) 
                                                    >> 4U));
    vlSelf->builder_impl_xilinxmultiregimpl16 = (1U 
                                                 & ((IData)(vlSelf->hyperram0_dq) 
                                                    >> 5U));
    vlSelf->builder_impl_xilinxmultiregimpl18 = (1U 
                                                 & ((IData)(vlSelf->hyperram0_dq) 
                                                    >> 6U));
    vlSelf->builder_impl_xilinxmultiregimpl20 = (1U 
                                                 & ((IData)(vlSelf->hyperram0_dq) 
                                                    >> 7U));
    vlSelf->builder_impl_xilinxsdrtristateimpl2___05Fi 
        = vlSelf->sdcard_data;
    vlSelf->IOBUF_5__DOT__O = (1U & (IData)(vlSelf->sdcard_data));
    vlSelf->IOBUF_6__DOT__O = (1U & ((IData)(vlSelf->sdcard_data) 
                                     >> 1U));
    vlSelf->IOBUF_7__DOT__O = (1U & ((IData)(vlSelf->sdcard_data) 
                                     >> 2U));
    vlSelf->IOBUF_8__DOT__O = (1U & ((IData)(vlSelf->sdcard_data) 
                                     >> 3U));
    vlSelf->builder_impl_xilinxsdrtristateimpl0___05Fi 
        = vlSelf->spiflash4x_dq;
    vlSelf->IOBUF__DOT__O = (1U & (IData)(vlSelf->spiflash4x_dq));
    vlSelf->IOBUF_1__DOT__O = (1U & ((IData)(vlSelf->spiflash4x_dq) 
                                     >> 1U));
    vlSelf->IOBUF_2__DOT__O = (1U & ((IData)(vlSelf->spiflash4x_dq) 
                                     >> 2U));
    vlSelf->IOBUF_3__DOT__O = (1U & ((IData)(vlSelf->spiflash4x_dq) 
                                     >> 3U));
    vlSelf->jtag_tdo = vlSelf->main_soclinux_jtag_tdo;
    vlSelf->builder_self7 = 0U;
    vlSelf->builder_socbushandler_shared_dat_r = 0U;
    vlSelf->builder_socbushandler_shared_dat_r = ((
                                                   (((((((- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->builder_socbushandler_slave_sel_r)))) 
                                                         & vlSelf->main_soclinux_plicbus_dat_r) 
                                                        | ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->builder_socbushandler_slave_sel_r) 
                                                                          >> 1U)))) 
                                                           & vlSelf->main_soclinux_clintbus_dat_r)) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->builder_socbushandler_slave_sel_r) 
                                                                         >> 2U)))) 
                                                          & vlSelf->main_soclinux_soclinux_ram_bus_dat_r)) 
                                                      | ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->builder_socbushandler_slave_sel_r) 
                                                                        >> 3U)))) 
                                                         & vlSelf->main_soclinux_ram_bus_ram_bus_dat_r)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->builder_socbushandler_slave_sel_r) 
                                                                       >> 4U)))) 
                                                        & vlSelf->main_bus_bus_dat_r)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->builder_socbushandler_slave_sel_r) 
                                                                      >> 5U)))) 
                                                       & vlSelf->main_soclinux_adapted_interface_dat_r)) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->builder_socbushandler_slave_sel_r) 
                                                                     >> 6U)))) 
                                                      & vlSelf->main_spihost_bus_dat_r)) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->builder_socbushandler_slave_sel_r) 
                                                                    >> 7U)))) 
                                                     & vlSelf->builder_soclinux_interface0_dat_r));
    vlSelf->builder_self1 = 0U;
    vlSelf->builder_self2 = 0U;
    vlSelf->builder_self5 = 0U;
    vlSelf->builder_socbushandler_request = (((IData)(vlSelf->soclinux_interface1_bus_cyc) 
                                              << 2U) 
                                             | (((IData)(vlSelf->soclinux_block2mem_sink_sink_valid1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->main_soclinux_pbus_cyc)));
    vlSelf->builder_self3 = 0U;
    vlSelf->builder_self4 = 0U;
    vlSelf->builder_self6 = 0U;
    vlSelf->builder_self0 = 0U;
    if ((0U == (IData)(vlSelf->builder_socbushandler_grant))) {
        vlSelf->builder_self7 = vlSelf->main_soclinux_pbus_bte;
        vlSelf->builder_self1 = vlSelf->main_soclinux_pbus_dat_w;
        vlSelf->builder_self2 = vlSelf->main_soclinux_pbus_sel;
        vlSelf->builder_self5 = vlSelf->main_soclinux_pbus_we;
        vlSelf->builder_self3 = vlSelf->main_soclinux_pbus_cyc;
        vlSelf->builder_self4 = vlSelf->main_soclinux_pbus_stb;
        vlSelf->builder_self6 = vlSelf->main_soclinux_pbus_cti;
        vlSelf->builder_self0 = vlSelf->main_soclinux_pbus_adr;
    } else if ((1U == (IData)(vlSelf->builder_socbushandler_grant))) {
        vlSelf->builder_self7 = vlSelf->soclinux_interface0_bus_bte;
        vlSelf->builder_self1 = vlSelf->soclinux_interface0_bus_dat_w;
        vlSelf->builder_self2 = vlSelf->soclinux_interface0_bus_sel;
        vlSelf->builder_self5 = vlSelf->soclinux_interface0_bus_we;
        vlSelf->builder_self3 = vlSelf->soclinux_interface0_bus_cyc;
        vlSelf->builder_self4 = vlSelf->soclinux_interface0_bus_stb;
        vlSelf->builder_self6 = vlSelf->soclinux_interface0_bus_cti;
        vlSelf->builder_self0 = vlSelf->soclinux_interface0_bus_adr;
    } else {
        vlSelf->builder_self7 = vlSelf->soclinux_interface1_bus_bte;
        vlSelf->builder_self1 = vlSelf->soclinux_interface1_bus_dat_w;
        vlSelf->builder_self2 = vlSelf->soclinux_interface1_bus_sel;
        vlSelf->builder_self5 = vlSelf->soclinux_interface1_bus_we;
        vlSelf->builder_self3 = vlSelf->soclinux_interface1_bus_cyc;
        vlSelf->builder_self4 = vlSelf->soclinux_interface1_bus_stb;
        vlSelf->builder_self6 = vlSelf->soclinux_interface1_bus_cti;
        vlSelf->builder_self0 = vlSelf->soclinux_interface1_bus_adr;
    }
    vlSelf->IOBUF_5__DOT__IO = vlSelf->IOBUF_5__DOT__O;
    vlSelf->IDDR_5__DOT__D = vlSelf->IOBUF_5__DOT__O;
    vlSelf->IOBUF_6__DOT__IO = vlSelf->IOBUF_6__DOT__O;
    vlSelf->IDDR_6__DOT__D = vlSelf->IOBUF_6__DOT__O;
    vlSelf->IOBUF_7__DOT__IO = vlSelf->IOBUF_7__DOT__O;
    vlSelf->IDDR_7__DOT__D = vlSelf->IOBUF_7__DOT__O;
    vlSelf->IOBUF_8__DOT__IO = vlSelf->IOBUF_8__DOT__O;
    vlSelf->IDDR_8__DOT__D = vlSelf->IOBUF_8__DOT__O;
    vlSelf->IOBUF__DOT__IO = vlSelf->IOBUF__DOT__O;
    vlSelf->IDDR__DOT__D = vlSelf->IOBUF__DOT__O;
    vlSelf->IOBUF_1__DOT__IO = vlSelf->IOBUF_1__DOT__O;
    vlSelf->IDDR_1__DOT__D = vlSelf->IOBUF_1__DOT__O;
    vlSelf->IOBUF_2__DOT__IO = vlSelf->IOBUF_2__DOT__O;
    vlSelf->IDDR_2__DOT__D = vlSelf->IOBUF_2__DOT__O;
    vlSelf->IOBUF_3__DOT__IO = vlSelf->IOBUF_3__DOT__O;
    vlSelf->IDDR_3__DOT__D = vlSelf->IOBUF_3__DOT__O;
    vlSelf->main_soclinux_adapted_interface_bte = vlSelf->builder_self7;
    vlSelf->main_soclinux_mmap_bus_bte = vlSelf->builder_self7;
    vlSelf->builder_socbushandler_shared_bte = vlSelf->builder_self7;
    vlSelf->main_soclinux_plicbus_bte = vlSelf->builder_self7;
    vlSelf->main_soclinux_clintbus_bte = vlSelf->builder_self7;
    vlSelf->main_soclinux_soclinux_ram_bus_bte = vlSelf->builder_self7;
    vlSelf->main_soclinux_ram_bus_ram_bus_bte = vlSelf->builder_self7;
    vlSelf->main_bus_bus_bte = vlSelf->builder_self7;
    vlSelf->main_spihost_bus_bte = vlSelf->builder_self7;
    vlSelf->builder_soclinux_interface0_bte = vlSelf->builder_self7;
    vlSelf->main_core_bus_bte = vlSelf->builder_self7;
    if (vlSelf->builder_socbushandler_done) {
        vlSelf->builder_socbushandler_shared_dat_r = 0xffffffffU;
    }
    vlSelf->soclinux_interface0_bus_dat_r = vlSelf->builder_socbushandler_shared_dat_r;
    vlSelf->soclinux_interface1_bus_dat_r = vlSelf->builder_socbushandler_shared_dat_r;
    vlSelf->soclinux_mem2block_dma_fifo_fifo_in_payload_data 
        = ((vlSelf->builder_socbushandler_shared_dat_r 
            << 0x18U) | ((0xff0000U & (vlSelf->builder_socbushandler_shared_dat_r 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->builder_socbushandler_shared_dat_r 
                                                      >> 8U)) 
                                                  | (vlSelf->builder_socbushandler_shared_dat_r 
                                                     >> 0x18U))));
    vlSelf->main_soclinux_pbus_dat_r = vlSelf->builder_socbushandler_shared_dat_r;
    vlSelf->main_core_bus_dat_w0 = vlSelf->builder_self1;
    vlSelf->main_soclinux_ram_dat_w = vlSelf->builder_self1;
    vlSelf->main_soclinux_adapted_interface_dat_w = vlSelf->builder_self1;
    vlSelf->main_soclinux_mmap_bus_dat_w = vlSelf->builder_self1;
    vlSelf->builder_socbushandler_shared_dat_w = vlSelf->builder_self1;
    vlSelf->main_soclinux_soclinux_ram_bus_dat_w = vlSelf->builder_self1;
    vlSelf->main_soclinux_ram_bus_ram_bus_dat_w = vlSelf->builder_self1;
    vlSelf->main_bus_bus_dat_w = vlSelf->builder_self1;
    vlSelf->main_spihost_bus_dat_w = vlSelf->builder_self1;
    vlSelf->spi_wb__DOT__tx_cpu_wdata = vlSelf->builder_self1;
    vlSelf->spi_wb__DOT__rx_cpu_wdata = vlSelf->builder_self1;
    vlSelf->spi_wb__DOT__spi_byte_count = (0x7ffU & vlSelf->builder_self1);
    vlSelf->main_soclinux_clintbus_dat_w = vlSelf->builder_self1;
    vlSelf->main_soclinux_plicbus_dat_w = vlSelf->builder_self1;
    vlSelf->builder_soclinux_interface0_dat_w = vlSelf->builder_self1;
    vlSelf->main_core_bus_sel0 = vlSelf->builder_self2;
    vlSelf->main_soclinux_adapted_interface_sel = vlSelf->builder_self2;
    vlSelf->main_soclinux_mmap_bus_sel = vlSelf->builder_self2;
    vlSelf->builder_socbushandler_shared_sel = vlSelf->builder_self2;
    vlSelf->main_soclinux_plicbus_sel = vlSelf->builder_self2;
    vlSelf->main_soclinux_clintbus_sel = vlSelf->builder_self2;
    vlSelf->main_soclinux_soclinux_ram_bus_sel = vlSelf->builder_self2;
    vlSelf->main_soclinux_ram_bus_ram_bus_sel = vlSelf->builder_self2;
    vlSelf->main_bus_bus_sel = vlSelf->builder_self2;
    vlSelf->builder_soclinux_interface0_sel = vlSelf->builder_self2;
    vlSelf->main_spihost_bus_sel = vlSelf->builder_self2;
    vlSelf->spi_wb__DOT__tx_cpu_be = vlSelf->builder_self2;
    vlSelf->spi_wb__DOT__rx_cpu_be = vlSelf->builder_self2;
    vlSelf->main_soclinux_adapted_interface_we = vlSelf->builder_self5;
    vlSelf->main_soclinux_mmap_bus_we = vlSelf->builder_self5;
    vlSelf->builder_socbushandler_shared_we = vlSelf->builder_self5;
    vlSelf->main_soclinux_soclinux_ram_bus_we = vlSelf->builder_self5;
    vlSelf->main_soclinux_ram_bus_ram_bus_we = vlSelf->builder_self5;
    vlSelf->main_bus_bus_we = vlSelf->builder_self5;
    vlSelf->builder_soclinux_interface0_we = vlSelf->builder_self5;
    vlSelf->main_spihost_bus_we = vlSelf->builder_self5;
    vlSelf->spi_wb__DOT__tx_cpu_we = vlSelf->builder_self5;
    vlSelf->spi_wb__DOT__rx_cpu_we = vlSelf->builder_self5;
    vlSelf->main_soclinux_clintbus_we = vlSelf->builder_self5;
    vlSelf->main_soclinux_plicbus_we = vlSelf->builder_self5;
    vlSelf->main_core_bus_we0 = vlSelf->builder_self5;
    vlSelf->builder_socbushandler_shared_cyc = vlSelf->builder_self3;
    vlSelf->main_soclinux_soclinux_ram_bus_stb = vlSelf->builder_self4;
    vlSelf->main_soclinux_ram_bus_ram_bus_stb = vlSelf->builder_self4;
    vlSelf->main_soclinux_adapted_interface_stb = vlSelf->builder_self4;
    vlSelf->main_soclinux_mmap_bus_stb = vlSelf->builder_self4;
    vlSelf->builder_socbushandler_shared_stb = vlSelf->builder_self4;
    vlSelf->main_bus_bus_stb = vlSelf->builder_self4;
    vlSelf->builder_soclinux_interface0_stb = vlSelf->builder_self4;
    vlSelf->main_spihost_bus_stb = vlSelf->builder_self4;
    vlSelf->main_soclinux_clintbus_stb = vlSelf->builder_self4;
    vlSelf->main_soclinux_plicbus_stb = vlSelf->builder_self4;
    vlSelf->main_core_bus_stb = vlSelf->builder_self4;
    vlSelf->main_soclinux_adapted_interface_cti = vlSelf->builder_self6;
    vlSelf->main_soclinux_mmap_bus_cti = vlSelf->builder_self6;
    vlSelf->builder_socbushandler_shared_cti = vlSelf->builder_self6;
    vlSelf->main_soclinux_plicbus_cti = vlSelf->builder_self6;
    vlSelf->main_soclinux_clintbus_cti = vlSelf->builder_self6;
    vlSelf->main_soclinux_soclinux_ram_bus_cti = vlSelf->builder_self6;
    vlSelf->main_soclinux_ram_bus_ram_bus_cti = vlSelf->builder_self6;
    vlSelf->main_bus_bus_cti = vlSelf->builder_self6;
    vlSelf->main_spihost_bus_cti = vlSelf->builder_self6;
    vlSelf->builder_soclinux_interface0_cti = vlSelf->builder_self6;
    vlSelf->main_core_bus_cti0 = vlSelf->builder_self6;
    vlSelf->builder_socbushandler_shared_adr = vlSelf->builder_self0;
    vlSelf->main_soclinux_ram_adr = (0x7ffU & vlSelf->builder_self0);
    vlSelf->spi_wb__DOT__is_tx = (IData)((0x400U == 
                                          (0x600U & vlSelf->builder_self0)));
    vlSelf->spi_wb__DOT__is_rx = (IData)((0x600U == 
                                          (0x600U & vlSelf->builder_self0)));
    vlSelf->spi_wb__DOT__tx_cpu_addr = (0x1ffU & vlSelf->builder_self0);
    vlSelf->main_core_cmd = 0ULL;
    if (vlSelf->main_core_reg_stb) {
        vlSelf->main_core_cmd = ((0x1fffffffffffULL 
                                  & vlSelf->main_core_cmd) 
                                 | ((QData)((IData)(
                                                    (3U 
                                                     | (4U 
                                                        & ((~ (IData)(vlSelf->main_core_reg_we)) 
                                                           << 2U))))) 
                                    << 0x2dU));
        if ((0U == (IData)(vlSelf->main_core_reg_adr))) {
            vlSelf->main_core_cmd = (0xff0000000000ULL 
                                     & vlSelf->main_core_cmd);
        } else if ((1U == (IData)(vlSelf->main_core_reg_adr))) {
            vlSelf->main_core_cmd = (1ULL | (0xff0000000000ULL 
                                             & vlSelf->main_core_cmd));
        } else if ((2U == (IData)(vlSelf->main_core_reg_adr))) {
            vlSelf->main_core_cmd = (0x1000000ULL | 
                                     (0xff0000000000ULL 
                                      & vlSelf->main_core_cmd));
        } else if ((3U == (IData)(vlSelf->main_core_reg_adr))) {
            vlSelf->main_core_cmd = (0x1000001ULL | 
                                     (0xff0000000000ULL 
                                      & vlSelf->main_core_cmd));
        }
    } else {
        vlSelf->main_core_cmd = ((0xffffULL & vlSelf->main_core_cmd) 
                                 | ((QData)((IData)(
                                                    (0x20000000U 
                                                     | (((~ (IData)(vlSelf->builder_self5)) 
                                                         << 0x1fU) 
                                                        | (0xfffffffU 
                                                           & (vlSelf->builder_self0 
                                                              >> 2U)))))) 
                                    << 0x10U));
        vlSelf->main_core_cmd = ((0xfffffffffff9ULL 
                                  & vlSelf->main_core_cmd) 
                                 | ((QData)((IData)(
                                                    (3U 
                                                     & vlSelf->builder_self0))) 
                                    << 1U));
    }
    vlSelf->spi_wb__DOT__is_reg = (1U & (~ (vlSelf->builder_self0 
                                            >> 0xaU)));
    vlSelf->spi_wb__DOT__reg_addr = (0x3fU & vlSelf->builder_self0);
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.plicWishbone_ADR 
        = (0xfffffU & vlSelf->builder_self0);
    vlSelf->main_core_bus_adr0 = (0x3fffffffU & vlSelf->builder_self0);
    vlSelf->main_soclinux_soclinux_adr = (0x3fffU & vlSelf->builder_self0);
    vlSelf->builder_socbushandler_slave_sel = 0U;
    vlSelf->builder_socbushandler_slave_sel = ((((0xf000U 
                                                  == 
                                                  (vlSelf->builder_self0 
                                                   >> 0xeU)) 
                                                 << 7U) 
                                                | ((0x40181U 
                                                    == 
                                                    (vlSelf->builder_self0 
                                                     >> 0xbU)) 
                                                   << 6U)) 
                                               | ((((1U 
                                                     == 
                                                     (vlSelf->builder_self0 
                                                      >> 0x17U)) 
                                                    << 5U) 
                                                   | ((0x80U 
                                                       == 
                                                       (vlSelf->builder_self0 
                                                        >> 0x15U)) 
                                                      << 4U)) 
                                                  | ((((0x8000U 
                                                        == 
                                                        (vlSelf->builder_self0 
                                                         >> 0xbU)) 
                                                       << 3U) 
                                                      | ((0U 
                                                          == 
                                                          (vlSelf->builder_self0 
                                                           >> 0xeU)) 
                                                         << 2U)) 
                                                     | (((0xf001U 
                                                          == 
                                                          (vlSelf->builder_self0 
                                                           >> 0xeU)) 
                                                         << 1U) 
                                                        | (0x3c3U 
                                                           == 
                                                           (vlSelf->builder_self0 
                                                            >> 0x14U))))));
    vlSelf->soclinux_mem2block_dma_fifo_sink_payload_data 
        = vlSelf->soclinux_mem2block_dma_fifo_fifo_in_payload_data;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_DAT_MISO 
        = vlSelf->main_soclinux_pbus_dat_r;
    vlSelf->spi_wb__DOT__wb_dat_i = vlSelf->main_spihost_bus_dat_w;
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__a_wdata_i = vlSelf->spi_wb__DOT__tx_cpu_wdata;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__a_wdata_i = vlSelf->spi_wb__DOT__rx_cpu_wdata;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_i 
        = vlSelf->spi_wb__DOT__spi_byte_count;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.clintWishbone_DAT_MOSI 
        = vlSelf->main_soclinux_clintbus_dat_w;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.plicWishbone_DAT_MOSI 
        = vlSelf->main_soclinux_plicbus_dat_w;
    vlSelf->builder_soclinux_interface1_dat_w = 0U;
    vlSelf->spi_wb__DOT__wb_sel_i = vlSelf->main_spihost_bus_sel;
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__a_be_i = vlSelf->spi_wb__DOT__tx_cpu_be;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__a_be_i = vlSelf->spi_wb__DOT__rx_cpu_be;
    vlSelf->spi_wb__DOT__wb_we_i = vlSelf->main_spihost_bus_we;
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__a_we_i = vlSelf->spi_wb__DOT__tx_cpu_we;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__a_we_i = vlSelf->spi_wb__DOT__rx_cpu_we;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.clintWishbone_WE 
        = vlSelf->main_soclinux_clintbus_we;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.plicWishbone_WE 
        = vlSelf->main_soclinux_plicbus_we;
    vlSelf->main_core_burst_r_first_main_next_value2 = 0U;
    vlSelf->main_core_burst_r_first_main_next_value_ce2 = 0U;
    vlSelf->spi_wb__DOT__wb_stb_i = vlSelf->main_spihost_bus_stb;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.clintWishbone_STB 
        = vlSelf->main_soclinux_clintbus_stb;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.plicWishbone_STB 
        = vlSelf->main_soclinux_plicbus_stb;
    vlSelf->main_spihost_bus_adr = vlSelf->main_soclinux_ram_adr;
    vlSelf->spi_wb__DOT__wb_adr_i = (((IData)(vlSelf->main_soclinux_ram_adr) 
                                      << 2U) | (IData)(vlSelf->main_spihost));
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__a_addr_i = vlSelf->spi_wb__DOT__tx_cpu_addr;
    vlSelf->spi_wb__DOT__rx_cpu_addr = vlSelf->spi_wb__DOT__tx_cpu_addr;
    vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data 
                    = vlSelf->main_core_cmd;
            }
        }
    }
    vlSelf->spi_wb__DOT__reg_rdata = 0U;
    vlSelf->spi_wb__DOT__reg_rdata = ((0x20U & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                       ? 0U : ((0x10U 
                                                & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                       ? 0U
                                                       : (IData)(vlSelf->spi_wb__DOT__cs_reg))
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                       ? 
                                                      ((IData)(vlSelf->spi_wb__DOT__spi_idle) 
                                                       << 0x1aU)
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                       ? vlSelf->spi_wb__DOT__cfg_reg
                                                       : 0U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_wb__DOT__reg_addr))
                                                       ? 
                                                      ((IData)(vlSelf->spi_wb__DOT__intr_enable_complete) 
                                                       << 4U)
                                                       : 
                                                      ((IData)(vlSelf->spi_wb__DOT__intr_complete) 
                                                       << 4U)))))));
    vlSelf->main_soclinux_plicbus_adr = vlSelf->main_core_bus_adr0;
    vlSelf->main_soclinux_clintbus_adr = vlSelf->main_core_bus_adr0;
    vlSelf->main_soclinux_soclinux_ram_bus_adr = vlSelf->main_core_bus_adr0;
    vlSelf->main_soclinux_ram_bus_ram_bus_adr = vlSelf->main_core_bus_adr0;
    vlSelf->main_bus_bus_adr = vlSelf->main_core_bus_adr0;
    vlSelf->builder_soclinux_interface0_adr = vlSelf->main_core_bus_adr0;
    vlSelf->main_soclinux_adapted_interface_adr = vlSelf->main_core_bus_adr0;
    vlSelf->main_core_burst_r = ((2U == (IData)(vlSelf->main_core_bus_cti1)) 
                                 | (((IData)(vlSelf->builder_self5) 
                                     == (IData)(vlSelf->main_core_bus_we1)) 
                                    & (vlSelf->main_core_bus_adr0 
                                       == ((IData)(1U) 
                                           + vlSelf->main_core_bus_adr1))));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.clintWishbone_ADR 
        = vlSelf->main_soclinux_soclinux_adr;
    vlSelf->main_soclinux_soclinux_ram_bus_cyc = ((IData)(vlSelf->builder_self3) 
                                                  & ((IData)(vlSelf->builder_socbushandler_slave_sel) 
                                                     >> 2U));
    vlSelf->main_soclinux_ram_bus_ram_bus_cyc = ((IData)(vlSelf->builder_self3) 
                                                 & ((IData)(vlSelf->builder_socbushandler_slave_sel) 
                                                    >> 3U));
    vlSelf->main_soclinux_clintbus_cyc = ((IData)(vlSelf->builder_self3) 
                                          & ((IData)(vlSelf->builder_socbushandler_slave_sel) 
                                             >> 1U));
    vlSelf->main_soclinux_adapted_interface_cyc = ((IData)(vlSelf->builder_self3) 
                                                   & ((IData)(vlSelf->builder_socbushandler_slave_sel) 
                                                      >> 5U));
    vlSelf->main_spihost_bus_cyc = ((IData)(vlSelf->builder_self3) 
                                    & ((IData)(vlSelf->builder_socbushandler_slave_sel) 
                                       >> 6U));
    vlSelf->main_soclinux_plicbus_cyc = ((IData)(vlSelf->builder_self3) 
                                         & (IData)(vlSelf->builder_socbushandler_slave_sel));
    vlSelf->main_core_bus_cyc = ((IData)(vlSelf->builder_self3) 
                                 & ((IData)(vlSelf->builder_socbushandler_slave_sel) 
                                    >> 4U));
    vlSelf->builder_soclinux_interface0_cyc = ((IData)(vlSelf->builder_self3) 
                                               & ((IData)(vlSelf->builder_socbushandler_slave_sel) 
                                                  >> 7U));
    if ((1U & (~ (IData)(vlSelf->builder_soclinux_state)))) {
        vlSelf->builder_soclinux_interface1_dat_w = vlSelf->builder_soclinux_interface0_dat_w;
    }
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_payload_data 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank0_scratch0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_phy_clocker_divider0_r 
        = (0x1ffU & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank3_phy_cmdr_timeout0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_phy_datar_timeout0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_argument0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_command0_r 
        = (0x3fffU & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank3_core_block_count0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base1_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_length0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base1_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_length0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank4_master_phyconfig0_r 
        = (0xffffffU & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank6_load0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank6_reload0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->main_soclinux_master_rxtx_r = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->main_soclinux_master_tx_fifo_sink_sink_payload_data 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_interface0_bank_bus_dat_w 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank0_bus_errors_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_interface1_bank_bus_dat_w 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_interface2_bank_bus_dat_w 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_interface3_bank_bus_dat_w 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response3_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response2_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response1_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response0_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_offset_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_offset_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_interface4_bank_bus_dat_w 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_interface5_bank_bus_dat_w 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_interface6_bank_bus_dat_w 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank6_value_r 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_interface7_bank_bus_dat_w 
        = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_interconnect_dat_w = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_sram_bus_dat_w = vlSelf->builder_soclinux_interface1_dat_w;
    vlSelf->builder_csr_bankarray_csrbank1_reg_control0_r 
        = (0x3ffU & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_event_r 
        = (0xfU & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank1_config0_r 
        = (0xffffU & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_r 
        = (0x1fU & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank0_reset0_r 
        = (3U & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank5_edge0_r 
        = (7U & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank2_out0_r = 
        (0xffU & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r 
        = (1U & vlSelf->builder_soclinux_interface1_dat_w);
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__a_addr_i = vlSelf->spi_wb__DOT__rx_cpu_addr;
    vlSelf->main_core_cmd_tx_conv_converter_source_payload_data = 0U;
    vlSelf->main_core_cmd_tx_conv_converter_source_payload_data 
        = (0xffU & ((4U & (IData)(vlSelf->main_core_cmd_tx_conv_converter_mux))
                     ? ((2U & (IData)(vlSelf->main_core_cmd_tx_conv_converter_mux))
                         ? (IData)(vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data)
                         : ((1U & (IData)(vlSelf->main_core_cmd_tx_conv_converter_mux))
                             ? (IData)(vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data)
                             : (IData)((vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data 
                                        >> 8U)))) : 
                    ((2U & (IData)(vlSelf->main_core_cmd_tx_conv_converter_mux))
                      ? ((1U & (IData)(vlSelf->main_core_cmd_tx_conv_converter_mux))
                          ? (IData)((vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data 
                                     >> 0x10U)) : (IData)(
                                                          (vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data 
                                                           >> 0x18U)))
                      : ((1U & (IData)(vlSelf->main_core_cmd_tx_conv_converter_mux))
                          ? (IData)((vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data 
                                     >> 0x20U)) : (IData)(
                                                          (vlSelf->main_core_cmd_tx_conv_converter_sink_payload_data 
                                                           >> 0x28U))))));
    vlSelf->main_soclinux_mmap_bus_adr = 0U;
    vlSelf->main_soclinux_mmap_bus_adr = vlSelf->main_soclinux_adapted_interface_adr;
    vlSelf->main_soclinux_mmap_bus_adr = (0x3fffffffU 
                                          & (vlSelf->main_core_bus_adr0 
                                             - (IData)(0x800000U)));
    vlSelf->main_core_burst_w = vlSelf->main_core_burst_r;
    __VdfgRegularize_h278c091a_14_6 = ((IData)(vlSelf->main_soclinux_ram_bus_ram_bus_cyc) 
                                       & ((IData)(vlSelf->builder_self4) 
                                          & (IData)(vlSelf->builder_self5)));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.clintWishbone_CYC 
        = vlSelf->main_soclinux_clintbus_cyc;
    vlSelf->main_soclinux_mmap_bus_cyc = vlSelf->main_soclinux_adapted_interface_cyc;
    __VdfgExtracted_hb2fc4e16__0 = ((IData)(vlSelf->main_soclinux_adapted_interface_cyc) 
                                    & (IData)(vlSelf->builder_self4));
    vlSelf->spi_wb__DOT__wb_cyc_i = vlSelf->main_spihost_bus_cyc;
    vlSelf->spi_wb__DOT__wb_req = ((IData)(vlSelf->main_spihost_bus_cyc) 
                                   & (IData)(vlSelf->builder_self4));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.plicWishbone_CYC 
        = vlSelf->main_soclinux_plicbus_cyc;
    vlSelf->main_bus_bus_cyc = vlSelf->main_core_bus_cyc;
    vlSelf->main_core_bus_ack = 0U;
    vlSelf->main_core_bus_latch = 0U;
    vlSelf->main_core_next_state = 0U;
    vlSelf->main_core_next_state = vlSelf->main_core_state;
    __VdfgExtracted_h331e7ac7__0 = ((IData)(vlSelf->builder_soclinux_interface0_cyc) 
                                    & (IData)(vlSelf->builder_self4));
    vlSelf->builder_csr_bankarray_csrbank3_core_block_length0_r 
        = vlSelf->builder_csr_bankarray_csrbank1_reg_control0_r;
    vlSelf->builder_csr_bankarray_csrbank3_core_data_event_r 
        = vlSelf->builder_csr_bankarray_csrbank3_core_cmd_event_r;
    vlSelf->builder_csr_bankarray_csrbank1_reg_wdata0_r 
        = vlSelf->builder_csr_bankarray_csrbank1_config0_r;
    vlSelf->builder_csr_bankarray_csrbank1_reg_rdata_r 
        = vlSelf->builder_csr_bankarray_csrbank1_config0_r;
    vlSelf->builder_csr_bankarray_csrbank3_ev_pending_r 
        = vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank1_status_r 
        = vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank3_ev_status_r 
        = vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank3_phy_settings0_r 
        = vlSelf->builder_csr_bankarray_csrbank0_reset0_r;
    vlSelf->builder_csr_bankarray_csrbank7_ev_pending_r 
        = vlSelf->builder_csr_bankarray_csrbank0_reset0_r;
    vlSelf->builder_csr_bankarray_csrbank7_ev_enable0_r 
        = vlSelf->builder_csr_bankarray_csrbank0_reset0_r;
    vlSelf->builder_csr_bankarray_csrbank4_master_status_r 
        = vlSelf->builder_csr_bankarray_csrbank0_reset0_r;
    vlSelf->builder_csr_bankarray_csrbank7_ev_status_r 
        = vlSelf->builder_csr_bankarray_csrbank0_reset0_r;
    vlSelf->builder_csr_bankarray_csrbank5_mode0_r 
        = vlSelf->builder_csr_bankarray_csrbank5_edge0_r;
    vlSelf->builder_csr_bankarray_csrbank5_ev_pending_r 
        = vlSelf->builder_csr_bankarray_csrbank5_edge0_r;
    vlSelf->builder_csr_bankarray_csrbank5_ev_enable0_r 
        = vlSelf->builder_csr_bankarray_csrbank5_edge0_r;
    vlSelf->builder_csr_bankarray_csrbank3_phy_dataw_status_r 
        = vlSelf->builder_csr_bankarray_csrbank5_edge0_r;
    vlSelf->builder_csr_bankarray_csrbank5_in_r = vlSelf->builder_csr_bankarray_csrbank5_edge0_r;
    vlSelf->builder_csr_bankarray_csrbank5_ev_status_r 
        = vlSelf->builder_csr_bankarray_csrbank5_edge0_r;
    vlSelf->builder_csr_bankarray_csrbank4_phy_clk_divisor0_r 
        = vlSelf->builder_csr_bankarray_csrbank2_out0_r;
    vlSelf->builder_csr_bankarray_csrbank4_mmap_dummy_bits0_r 
        = vlSelf->builder_csr_bankarray_csrbank2_out0_r;
    vlSelf->main_soclinux_uart_rxtx_r = vlSelf->builder_csr_bankarray_csrbank2_out0_r;
    vlSelf->main_soclinux_uart_tx_fifo_sink_payload_data 
        = vlSelf->builder_csr_bankarray_csrbank2_out0_r;
    vlSelf->main_soclinux_uart_tx_fifo_fifo_in_payload_data 
        = vlSelf->builder_csr_bankarray_csrbank2_out0_r;
    vlSelf->main_soclinux_uart_tx_fifo_wrport_dat_w 
        = (((IData)(vlSelf->main_soclinux_uart_tx_fifo_sink_last) 
            << 9U) | (((IData)(vlSelf->main_soclinux_uart_tx_fifo_sink_first) 
                       << 8U) | (IData)(vlSelf->builder_csr_bankarray_csrbank2_out0_r)));
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_send0_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_loop0_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_enable0_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_loop0_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank4_master_cs0_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank6_en0_r = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank6_update_value0_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank6_ev_pending_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank6_ev_enable0_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank1_reg_status_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank3_phy_card_detect_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->soclinux_init_initialize_r = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_done_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_done_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank6_ev_status_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank7_txfull_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank7_rxempty_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank7_txempty_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->builder_csr_bankarray_csrbank7_rxfull_r 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_r;
    vlSelf->main_core_cmd_tx_conv_source_source_payload_data 
        = vlSelf->main_core_cmd_tx_conv_converter_source_payload_data;
    vlSelf->main_soclinux_mmap_burst_adr_builder_litespimmap_next_value2 = 0U;
    vlSelf->main_soclinux_mmap_source_payload_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                    vlSelf->main_soclinux_mmap_source_payload_data 
                        = vlSelf->main_soclinux_mmap_dummy;
                }
            }
        } else if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                vlSelf->main_soclinux_mmap_source_payload_data 
                    = ((vlSelf->main_soclinux_mmap_bus_adr 
                        << 2U) | (IData)(vlSelf->main_soclinux_mmap_byte_count));
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_source_payload_data = 0x6bU;
        }
    }
    vlSelf->main_soclinux_ram_we = 0U;
    vlSelf->main_soclinux_ram_we = ((0xfffffff8U & 
                                     (((IData)(__VdfgRegularize_h278c091a_14_6) 
                                       << 3U) & (IData)(vlSelf->builder_self2))) 
                                    | ((0xfffffffcU 
                                        & (((IData)(__VdfgRegularize_h278c091a_14_6) 
                                            << 2U) 
                                           & (IData)(vlSelf->builder_self2))) 
                                       | (3U & ((- (IData)((IData)(__VdfgRegularize_h278c091a_14_6))) 
                                                & (IData)(vlSelf->builder_self2)))));
    vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value1 = 0U;
    vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value_ce1 = 0U;
    vlSelf->builder_soclinux_litespimmap_next_state = 0U;
    vlSelf->builder_soclinux_litespimmap_next_state 
        = vlSelf->builder_soclinux_litespimmap_state;
    vlSelf->main_soclinux_mmap_request = 0U;
    if ((8U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                    if (vlSelf->main_soclinux_mmap_sink_valid) {
                        vlSelf->main_soclinux_mmap_burst_adr_builder_litespimmap_next_value2 
                            = (0x3fffffffU & ((IData)(1U) 
                                              + vlSelf->main_soclinux_mmap_burst_adr));
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_request = vlSelf->main_soclinux_mmap_burst_cs;
            if (__VdfgExtracted_hb2fc4e16__0) {
                vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value1 = 0U;
                vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value_ce1 = 1U;
                if ((1U & (~ (IData)(vlSelf->builder_self5)))) {
                    vlSelf->builder_soclinux_litespimmap_next_state 
                        = (((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                            & (vlSelf->main_soclinux_mmap_bus_adr 
                               == vlSelf->main_soclinux_mmap_burst_adr))
                            ? 7U : 1U);
                    if ((1U & (~ ((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                                  & (vlSelf->main_soclinux_mmap_bus_adr 
                                     == vlSelf->main_soclinux_mmap_burst_adr))))) {
                        vlSelf->main_soclinux_mmap_request = 0U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_request = vlSelf->main_soclinux_mmap_burst_cs;
            if (__VdfgExtracted_hb2fc4e16__0) {
                vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value1 = 0U;
                vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value_ce1 = 1U;
                if ((1U & (~ (IData)(vlSelf->builder_self5)))) {
                    vlSelf->builder_soclinux_litespimmap_next_state 
                        = (((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                            & (vlSelf->main_soclinux_mmap_bus_adr 
                               == vlSelf->main_soclinux_mmap_burst_adr))
                            ? 7U : 1U);
                    if ((1U & (~ ((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                                  & (vlSelf->main_soclinux_mmap_bus_adr 
                                     == vlSelf->main_soclinux_mmap_burst_adr))))) {
                        vlSelf->main_soclinux_mmap_request = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            vlSelf->main_soclinux_mmap_request = vlSelf->main_soclinux_mmap_burst_cs;
            if (__VdfgExtracted_hb2fc4e16__0) {
                vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value1 = 0U;
                vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value_ce1 = 1U;
                if ((1U & (~ (IData)(vlSelf->builder_self5)))) {
                    vlSelf->builder_soclinux_litespimmap_next_state 
                        = (((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                            & (vlSelf->main_soclinux_mmap_bus_adr 
                               == vlSelf->main_soclinux_mmap_burst_adr))
                            ? 7U : 1U);
                    if ((1U & (~ ((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                                  & (vlSelf->main_soclinux_mmap_bus_adr 
                                     == vlSelf->main_soclinux_mmap_burst_adr))))) {
                        vlSelf->main_soclinux_mmap_request = 0U;
                    }
                }
            }
        } else {
            if (vlSelf->main_soclinux_mmap_sink_valid) {
                vlSelf->builder_soclinux_litespimmap_next_state = 0U;
            }
            vlSelf->main_soclinux_mmap_request = 1U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                    vlSelf->main_soclinux_mmap_burst_adr_builder_litespimmap_next_value2 
                        = vlSelf->main_soclinux_mmap_bus_adr;
                }
            } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                vlSelf->main_soclinux_mmap_burst_adr_builder_litespimmap_next_value2 
                    = vlSelf->main_soclinux_mmap_bus_adr;
            }
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_litespimmap_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_litespimmap_state)))) {
                    if (__VdfgExtracted_hb2fc4e16__0) {
                        vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value1 = 0U;
                        vlSelf->main_soclinux_mmap_byte_count_builder_litespimmap_next_value_ce1 = 1U;
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                    if (vlSelf->main_soclinux_mmap_source_ready) {
                        vlSelf->builder_soclinux_litespimmap_next_state = 8U;
                    }
                } else if (vlSelf->main_soclinux_mmap_sink_valid) {
                    vlSelf->builder_soclinux_litespimmap_next_state = 7U;
                }
            } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                if (vlSelf->main_soclinux_mmap_source_ready) {
                    vlSelf->builder_soclinux_litespimmap_next_state = 6U;
                }
            } else if (vlSelf->main_soclinux_mmap_sink_valid) {
                vlSelf->builder_soclinux_litespimmap_next_state 
                    = ((0U == (IData)(vlSelf->main_soclinux_mmap_storage))
                        ? 7U : 5U);
            }
            vlSelf->main_soclinux_mmap_request = 1U;
        } else if ((2U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
                if (vlSelf->main_soclinux_mmap_source_ready) {
                    vlSelf->builder_soclinux_litespimmap_next_state = 4U;
                }
            } else if (vlSelf->main_soclinux_mmap_sink_valid) {
                vlSelf->builder_soclinux_litespimmap_next_state = 3U;
            }
            vlSelf->main_soclinux_mmap_request = 1U;
        } else if ((1U & (IData)(vlSelf->builder_soclinux_litespimmap_state))) {
            if (vlSelf->main_soclinux_mmap_source_ready) {
                vlSelf->builder_soclinux_litespimmap_next_state = 2U;
            }
            vlSelf->main_soclinux_mmap_request = 1U;
        } else {
            vlSelf->main_soclinux_mmap_request = vlSelf->main_soclinux_mmap_burst_cs;
            if (__VdfgExtracted_hb2fc4e16__0) {
                if ((1U & (~ (IData)(vlSelf->builder_self5)))) {
                    vlSelf->builder_soclinux_litespimmap_next_state 
                        = (((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                            & (vlSelf->main_soclinux_mmap_bus_adr 
                               == vlSelf->main_soclinux_mmap_burst_adr))
                            ? 7U : 1U);
                    if ((1U & (~ ((IData)(vlSelf->main_soclinux_mmap_burst_cs) 
                                  & (vlSelf->main_soclinux_mmap_bus_adr 
                                     == vlSelf->main_soclinux_mmap_burst_adr))))) {
                        vlSelf->main_soclinux_mmap_request = 0U;
                    }
                }
            }
        }
    }
    vlSelf->spi_wb__DOT__tx_cpu_req = ((IData)(vlSelf->spi_wb__DOT__wb_req) 
                                       & ((IData)(vlSelf->spi_wb__DOT__is_tx) 
                                          & (IData)(vlSelf->spi_wb__DOT____VdfgRegularize_h25f3cb13_1_2)));
    vlSelf->spi_wb__DOT__rx_cpu_req = ((IData)(vlSelf->spi_wb__DOT__wb_req) 
                                       & ((IData)(vlSelf->spi_wb__DOT__is_rx) 
                                          & (IData)(vlSelf->spi_wb__DOT____VdfgRegularize_h25f3cb13_1_2)));
    vlSelf->spi_wb__DOT__reg_wr = ((IData)(vlSelf->spi_wb__DOT__wb_req) 
                                   & ((IData)(vlSelf->spi_wb__DOT__is_reg) 
                                      & ((IData)(vlSelf->builder_self5) 
                                         & (IData)(vlSelf->spi_wb__DOT____VdfgRegularize_h25f3cb13_1_2))));
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((2U & (IData)(vlSelf->main_core_state))) {
            if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
                if (vlSelf->main_core_dat_rx_conv_source_valid) {
                    vlSelf->main_core_burst_r_first_main_next_value2 = 0U;
                    vlSelf->main_core_burst_r_first_main_next_value_ce2 = 1U;
                }
            }
            if ((1U & (IData)(vlSelf->main_core_state))) {
                if ((8U == (IData)(vlSelf->main_core_cycles))) {
                    vlSelf->main_core_next_state = 0U;
                }
            } else if (vlSelf->main_core_dat_rx_conv_source_valid) {
                vlSelf->main_core_bus_ack = ((IData)(vlSelf->main_core_burst_r_first) 
                                             | (((IData)(vlSelf->main_core_bus_cyc) 
                                                 & (IData)(vlSelf->main_core_bus_stb)) 
                                                & (IData)(vlSelf->main_core_burst_r)));
                if (vlSelf->main_core_bus_ack) {
                    vlSelf->main_core_bus_latch = 1U;
                    vlSelf->main_core_next_state = 6U;
                } else {
                    vlSelf->main_core_next_state = 7U;
                }
            }
        } else if ((1U & (IData)(vlSelf->main_core_state))) {
            if (vlSelf->main_core_dat_tx_conv_sink_ready) {
                vlSelf->main_core_bus_ack = ((IData)(vlSelf->main_core_bus_cyc) 
                                             & ((IData)(vlSelf->builder_self4) 
                                                & (IData)(vlSelf->main_core_burst_r)));
                if (vlSelf->main_core_bus_ack) {
                    vlSelf->main_core_bus_latch = 1U;
                    vlSelf->main_core_next_state = 5U;
                } else {
                    vlSelf->main_core_next_state = 7U;
                }
            }
        } else if (vlSelf->main_core_reg_rx_conv_source_valid) {
            vlSelf->main_core_next_state = 7U;
        }
    } else if ((2U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ (IData)(vlSelf->main_core_state)))) {
            if (vlSelf->main_core_source_source_ready) {
                if (((IData)(vlSelf->main_core_cycles) 
                     == (0xffU & (VL_SHIFTL_III(8,8,32, 
                                                (((0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->main_core_latency_x2))) 
                                                  * (IData)(vlSelf->main_core_latency)) 
                                                 - (IData)(1U)), 1U) 
                                  - (IData)(1U))))) {
                    if ((1U & (~ ((IData)(vlSelf->main_core_reg_stb) 
                                  & (~ (IData)(vlSelf->main_core_reg_we)))))) {
                        if ((1U & (~ (IData)(vlSelf->main_core_bus_we0)))) {
                            vlSelf->main_core_burst_r_first_main_next_value2 = 1U;
                            vlSelf->main_core_burst_r_first_main_next_value_ce2 = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (IData)(vlSelf->main_core_state))) {
            if (vlSelf->main_core_reg_tx_conv_sink_ready) {
                vlSelf->main_core_next_state = 7U;
            }
        } else if (vlSelf->main_core_source_source_ready) {
            if (((IData)(vlSelf->main_core_cycles) 
                 == (0xffU & (VL_SHIFTL_III(8,8,32, 
                                            (((0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->main_core_latency_x2))) 
                                              * (IData)(vlSelf->main_core_latency)) 
                                             - (IData)(1U)), 1U) 
                              - (IData)(1U))))) {
                if (((IData)(vlSelf->main_core_reg_stb) 
                     & (~ (IData)(vlSelf->main_core_reg_we)))) {
                    vlSelf->main_core_next_state = 4U;
                } else {
                    vlSelf->main_core_bus_latch = 1U;
                    if (vlSelf->main_core_bus_we0) {
                        vlSelf->main_core_bus_ack = 1U;
                        vlSelf->main_core_next_state = 5U;
                    } else {
                        vlSelf->main_core_next_state = 6U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->main_core_state))) {
        if (vlSelf->main_core_cmd_tx_conv_converter_sink_ready) {
            vlSelf->main_core_next_state = (((IData)(vlSelf->main_core_reg_stb) 
                                             & (IData)(vlSelf->main_core_reg_we))
                                             ? 3U : 2U);
        }
    } else if ((((IData)(vlSelf->main_core_bus_cyc) 
                 & (IData)(vlSelf->main_core_bus_stb)) 
                | (IData)(vlSelf->main_core_reg_stb))) {
        vlSelf->main_core_next_state = 1U;
    }
    vlSelf->main_bus_bus_ack = vlSelf->main_core_bus_ack;
    vlSelf->builder_soclinux_next_state = 0U;
    if (vlSelf->builder_soclinux_state) {
        vlSelf->builder_soclinux_next_state = 1U;
        vlSelf->builder_soclinux_next_state = 0U;
    } else {
        vlSelf->builder_soclinux_next_state = 0U;
        if (__VdfgExtracted_h331e7ac7__0) {
            vlSelf->builder_soclinux_next_state = 1U;
        }
    }
    vlSelf->builder_soclinux_interface1_we = 0U;
    vlSelf->builder_soclinux_interface1_re = 0U;
    vlSelf->builder_soclinux_interface1_adr = 0U;
    if ((1U & (~ (IData)(vlSelf->builder_soclinux_state)))) {
        if (__VdfgExtracted_h331e7ac7__0) {
            vlSelf->builder_soclinux_interface1_we 
                = ((IData)(vlSelf->builder_self5) & 
                   (0U != (IData)(vlSelf->builder_self2)));
            vlSelf->builder_soclinux_interface1_re 
                = ((~ (IData)(vlSelf->builder_self5)) 
                   & (0U != (IData)(vlSelf->builder_self2)));
            vlSelf->builder_soclinux_interface1_adr 
                = vlSelf->main_soclinux_soclinux_adr;
        }
    }
    vlSelf->main_soclinux_uart_tx_fifo_syncfifo_din 
        = vlSelf->main_soclinux_uart_tx_fifo_wrport_dat_w;
    vlSelf->main_core_source_source_payload_dq = 0U;
    if ((4U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (~ ((IData)(vlSelf->main_core_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->main_core_state))) {
                vlSelf->main_core_source_source_payload_dq 
                    = vlSelf->main_core_dat_tx_conv_source_payload_dq;
            }
        }
    } else if ((2U & (IData)(vlSelf->main_core_state))) {
        if ((1U & (IData)(vlSelf->main_core_state))) {
            vlSelf->main_core_source_source_payload_dq 
                = vlSelf->main_core_reg_tx_conv_source_payload_dq;
        }
    } else if ((1U & (IData)(vlSelf->main_core_state))) {
        vlSelf->main_core_source_source_payload_dq 
            = vlSelf->main_core_cmd_tx_conv_source_source_payload_data;
    }
    vlSelf->main_soclinux_port_mmap_user_port_sink_payload_data 
        = vlSelf->main_soclinux_mmap_source_payload_data;
    vlSelf->main_soclinux_port_mmap_internal_port_sink_payload_data 
        = vlSelf->main_soclinux_mmap_source_payload_data;
    vlSelf->builder_soclinux_tx_mux_endpoint0_sink_payload_data 
        = vlSelf->main_soclinux_mmap_source_payload_data;
    vlSelf->builder_soclinux_request = (((IData)(vlSelf->main_soclinux_master_cs_storage) 
                                         << 1U) | (IData)(vlSelf->main_soclinux_mmap_request));
    vlSelf->main_soclinux_mmap_cs = 0U;
    if (vlSelf->main_soclinux_mmap_request) {
        vlSelf->main_soclinux_mmap_cs = 1U;
    }
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__a_req_i = vlSelf->spi_wb__DOT__tx_cpu_req;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__a_req_i = vlSelf->spi_wb__DOT__rx_cpu_req;
    vlSelf->spi_wb__DOT__w1c_complete = ((IData)(vlSelf->spi_wb__DOT__reg_wr) 
                                         & ((0U == (IData)(vlSelf->spi_wb__DOT__reg_addr)) 
                                            & (vlSelf->builder_self1 
                                               >> 4U)));
    vlSelf->spi_wb__DOT__sw_reset = ((IData)(vlSelf->spi_wb__DOT__reg_wr) 
                                     & ((4U == (IData)(vlSelf->spi_wb__DOT__reg_addr)) 
                                        & (vlSelf->builder_self1 
                                           >> 0x1fU)));
    vlSelf->spi_wb__DOT__spi_start = ((IData)(vlSelf->spi_wb__DOT__reg_wr) 
                                      & ((6U == (IData)(vlSelf->spi_wb__DOT__reg_addr)) 
                                         & (IData)(vlSelf->spi_wb__DOT__spi_idle)));
    vlSelf->builder_socbushandler_shared_ack = 0U;
    vlSelf->builder_socbushandler_shared_ack = ((((
                                                   ((((IData)(vlSelf->main_soclinux_plicbus_ack) 
                                                      | (IData)(vlSelf->main_soclinux_clintbus_ack)) 
                                                     | (IData)(vlSelf->main_soclinux_soclinux_ram_bus_ack)) 
                                                    | (IData)(vlSelf->main_soclinux_ram_bus_ram_bus_ack)) 
                                                   | (IData)(vlSelf->main_bus_bus_ack)) 
                                                  | (IData)(vlSelf->main_soclinux_adapted_interface_ack)) 
                                                 | (IData)(vlSelf->main_spihost_bus_ack)) 
                                                | (IData)(vlSelf->builder_soclinux_interface0_ack));
    if (vlSelf->builder_socbushandler_done) {
        vlSelf->builder_socbushandler_shared_ack = 1U;
    }
    vlSelf->builder_csr_interconnect_we = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_sram_bus_we = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_interface2_bank_bus_we 
        = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_interface0_bank_bus_we 
        = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_interface1_bank_bus_we 
        = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_interface5_bank_bus_we 
        = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_interface4_bank_bus_we 
        = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_interface6_bank_bus_we 
        = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_interface7_bank_bus_we 
        = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_bankarray_interface3_bank_bus_we 
        = vlSelf->builder_soclinux_interface1_we;
    vlSelf->builder_csr_interconnect_re = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_sram_bus_re = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface2_bank_bus_re 
        = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface0_bank_bus_re 
        = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface1_bank_bus_re 
        = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface5_bank_bus_re 
        = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface6_bank_bus_re 
        = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface7_bank_bus_re 
        = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface4_bank_bus_re 
        = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface3_bank_bus_re 
        = vlSelf->builder_soclinux_interface1_re;
    vlSelf->builder_csr_bankarray_interface0_bank_bus_adr 
        = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_interface1_bank_bus_adr 
        = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_sel = (4U == (0x1fU 
                                                & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                   >> 9U)));
    vlSelf->builder_csr_bankarray_interface2_bank_bus_adr 
        = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_interface3_bank_bus_adr 
        = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_interface4_bank_bus_adr 
        = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_interface5_bank_bus_adr 
        = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_interface6_bank_bus_adr 
        = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_interface7_bank_bus_adr 
        = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_adr = (0x1fU & (IData)(vlSelf->builder_soclinux_interface1_adr));
    vlSelf->builder_csr_bankarray_sram_bus_adr = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_interconnect_adr = vlSelf->builder_soclinux_interface1_adr;
    vlSelf->builder_csr_bankarray_csrbank2_sel = (5U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                      >> 9U)));
    vlSelf->builder_csr_bankarray_csrbank0_sel = (0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                      >> 9U)));
    vlSelf->builder_csr_bankarray_csrbank1_sel = (1U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                      >> 9U)));
    vlSelf->builder_csr_bankarray_csrbank5_sel = (8U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                      >> 9U)));
    vlSelf->builder_csr_bankarray_csrbank6_sel = (3U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                      >> 9U)));
    vlSelf->builder_csr_bankarray_csrbank7_sel = (2U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                      >> 9U)));
    vlSelf->builder_csr_bankarray_csrbank4_sel = (7U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                      >> 9U)));
    vlSelf->builder_csr_bankarray_csrbank3_sel = (6U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->builder_soclinux_interface1_adr) 
                                                      >> 9U)));
    vlSelf->main_tx_cdc_sink_sink_payload_dq = vlSelf->main_core_source_source_payload_dq;
    vlSelf->main_tx_cdc_cdc_sink_payload_dq = vlSelf->main_core_source_source_payload_dq;
    vlSelf->main_tx_cdc_cdc_fifo_in_payload_dq = vlSelf->main_core_source_source_payload_dq;
    vlSelf->main_tx_cdc_cdc_wrport_dat_w = (((IData)(vlSelf->main_core_source_source_last) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->main_core_source_source_first) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->main_core_source_source_payload_rwds_oe) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->main_core_source_source_payload_rwds) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->main_core_source_source_payload_dq_oe) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->main_core_source_source_payload_dq) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->main_core_source_source_payload_dat_r) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->main_core_source_source_payload_dat_w) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->main_core_source_source_payload_cmd)))))))));
    vlSelf->builder_soclinux_tx_mux_source_payload_data = 0U;
    if (vlSelf->builder_soclinux_tx_mux_sel) {
        if (vlSelf->builder_soclinux_tx_mux_sel) {
            vlSelf->builder_soclinux_tx_mux_source_payload_data 
                = vlSelf->builder_soclinux_tx_mux_endpoint1_sink_payload_data;
        }
    } else {
        vlSelf->builder_soclinux_tx_mux_source_payload_data 
            = vlSelf->builder_soclinux_tx_mux_endpoint0_sink_payload_data;
    }
    vlSelf->main_soclinux_crossbar_cs = 0U;
    if (vlSelf->builder_soclinux_grant) {
        if (vlSelf->builder_soclinux_grant) {
            vlSelf->main_soclinux_crossbar_cs = vlSelf->main_soclinux_master_cs;
        }
    } else {
        vlSelf->main_soclinux_crossbar_cs = vlSelf->main_soclinux_mmap_cs;
    }
    vlSelf->spi_wb__DOT__u_spi_core__DOT__sw_reset_i 
        = vlSelf->spi_wb__DOT__sw_reset;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__start_i = vlSelf->spi_wb__DOT__spi_start;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__state_d = vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_d 
        = vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_d 
        = vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__start_edge = 0U;
    if ((0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q))) {
        if (vlSelf->spi_wb__DOT__spi_start) {
            if (vlSelf->spi_wb__DOT__spi_data_in_valid) {
                vlSelf->spi_wb__DOT__u_spi_core__DOT__state_d = 2U;
                vlSelf->spi_wb__DOT__u_spi_core__DOT__start_edge 
                    = (1U & (~ (IData)(vlSelf->spi_wb__DOT__spi_cpha)));
            } else {
                vlSelf->spi_wb__DOT__u_spi_core__DOT__state_d = 1U;
            }
            vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_d 
                = ((IData)(vlSelf->spi_wb__DOT__spi_cpha)
                    ? 8U : 7U);
            vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_d 
                = vlSelf->spi_wb__DOT__spi_byte_count;
        }
    } else {
        if ((1U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if (vlSelf->spi_wb__DOT__spi_data_in_valid) {
                vlSelf->spi_wb__DOT__u_spi_core__DOT__state_d = 2U;
                vlSelf->spi_wb__DOT__u_spi_core__DOT__start_edge 
                    = (1U & (~ (IData)(vlSelf->spi_wb__DOT__spi_cpha)));
            }
        } else if ((2U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if (((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__output_edge) 
                 | (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__finish_edge))) {
                if ((0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q))) {
                    if ((1U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_q))) {
                        vlSelf->spi_wb__DOT__u_spi_core__DOT__state_d = 0U;
                    }
                }
            }
        }
        if ((1U != (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q))) {
                if (((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__output_edge) 
                     | (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__finish_edge))) {
                    if ((0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q))) {
                        if ((1U != (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_q))) {
                            vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_d = 7U;
                            vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_d 
                                = (0x7ffU & ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__byte_count_q) 
                                             - (IData)(1U)));
                        }
                    } else {
                        vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_d 
                            = (0xfU & ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q) 
                                       - (IData)(1U)));
                    }
                }
            }
        }
    }
    vlSelf->builder_socbushandler_wait = ((IData)(vlSelf->builder_self4) 
                                          & ((~ (IData)(vlSelf->builder_socbushandler_shared_ack)) 
                                             & (IData)(vlSelf->builder_self3)));
    vlSelf->main_soclinux_pbus_ack = ((IData)(vlSelf->builder_socbushandler_shared_ack) 
                                      & (0U == (IData)(vlSelf->builder_socbushandler_grant)));
    vlSelf->soclinux_interface1_bus_ack = ((IData)(vlSelf->builder_socbushandler_shared_ack) 
                                           & (2U == (IData)(vlSelf->builder_socbushandler_grant)));
    vlSelf->soclinux_block2mem_sink_sink_ready1 = ((IData)(vlSelf->builder_socbushandler_shared_ack) 
                                                   & (1U 
                                                      == (IData)(vlSelf->builder_socbushandler_grant)));
    __VdfgExtracted_h0b739e8f__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank2_sel) 
                                    & (0U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb0a81212__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank0_sel) 
                                    & (0U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb0a8249d__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank0_sel) 
                                    & (1U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb0a7b42e__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank0_sel) 
                                    & (2U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_ha61d8069__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank1_sel) 
                                    & (0U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_ha61da165__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank1_sel) 
                                    & (2U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_ha246b56c__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank1_sel) 
                                    & (4U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_ha61da596__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank1_sel) 
                                    & (1U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_ha246c7a6__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank1_sel) 
                                    & (3U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_ha247c00e__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank1_sel) 
                                    & (5U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0319cca4__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank5_sel) 
                                    & (1U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0319ba95__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank5_sel) 
                                    & (2U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h03239bcc__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank5_sel) 
                                    & (5U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0319dcf1__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank5_sel) 
                                    & (0U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0314b0c4__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank5_sel) 
                                    & (3U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0314bdee__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank5_sel) 
                                    & (4U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb2abf48a__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank6_sel) 
                                    & (0U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb2ac02c7__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank6_sel) 
                                    & (1U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb2ae92f8__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank6_sel) 
                                    & (2U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb2a59d31__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank6_sel) 
                                    & (3U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb298e883__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank6_sel) 
                                    & (7U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb2a58f97__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank6_sel) 
                                    & (4U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb2a6480d__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank6_sel) 
                                    & (5U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_hb298f8de__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank6_sel) 
                                    & (6U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h08588ba9__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank7_sel) 
                                    & (5U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h08626117__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank7_sel) 
                                    & (1U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0862d088__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank7_sel) 
                                    & (2U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0857f3ed__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank7_sel) 
                                    & (3U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0857c5a7__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank7_sel) 
                                    & (4U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h085b1a7a__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank7_sel) 
                                    & (6U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h085b6b53__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank7_sel) 
                                    & (7U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h0862eea6__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank7_sel) 
                                    & (0U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h02682fb1__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank4_sel) 
                                    & (0U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h02681e7e__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank4_sel) 
                                    & (1U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h026b4d8d__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank4_sel) 
                                    & (2U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h031fa14a__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank4_sel) 
                                    & (3U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h031e8d36__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank4_sel) 
                                    & (5U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h031df0b4__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank4_sel) 
                                    & (4U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27f26518__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (1U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271a8daa__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (3U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e9a1b2__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (5U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e9d021__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (6U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e98114__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (7U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e9ae47__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (8U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e9dffe__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (9U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27f76228__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0xaU == (0x1ffU 
                                                & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271c1c54__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0xbU == (0x1ffU 
                                                & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e8c543__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0xcU == (0x1ffU 
                                                & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e93144__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x10U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e95d31__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x11U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271a8a22__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x12U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27ea53af__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x13U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27ea423f__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x14U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271cd963__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x15U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271cf8c1__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x17U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271a18e7__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x19U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271cd26f__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x1aU == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271b2239__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x1bU == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271c8772__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x1cU == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271ccd2d__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x1eU == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271c0c55__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x22U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27f2134d__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271b4644__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (4U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e91cb8__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0xdU == (0x1ffU 
                                                & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271b4a2e__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0xeU == (0x1ffU 
                                                & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27e8fd17__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0xfU == (0x1ffU 
                                                & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271ca254__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x16U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271d473e__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x18U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271e3a6d__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x1dU == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271c5cbc__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x1fU == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271cec43__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x20U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h271d79e6__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (0x21U == (0x1ffU 
                                                 & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    __VdfgExtracted_h27f3f367__0 = ((IData)(vlSelf->builder_csr_bankarray_csrbank3_sel) 
                                    & (2U == (0x1ffU 
                                              & (IData)(vlSelf->builder_soclinux_interface1_adr))));
    vlSelf->main_tx_cdc_cdc_asyncfifo_din = vlSelf->main_tx_cdc_cdc_wrport_dat_w;
    vlSelf->main_soclinux_sink_payload_data = vlSelf->builder_soclinux_tx_mux_source_payload_data;
    vlSelf->main_soclinux_crossbar_source_payload_data 
        = vlSelf->builder_soclinux_tx_mux_source_payload_data;
    vlSelf->main_soclinux_wait = vlSelf->main_soclinux_crossbar_cs;
    vlSelf->main_soclinux_cs = vlSelf->main_soclinux_crossbar_cs;
    vlSelf->main_soclinux_cs_n = (1U & (~ ((IData)(vlSelf->main_soclinux_done) 
                                           & (IData)(vlSelf->main_soclinux_crossbar_cs))));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
        = vlSelf->spi_wb__DOT__u_spi_core__DOT__copi_shift_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_in_ready_o = 0U;
    if (((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__output_edge) 
         | (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__start_edge))) {
        if ((((0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q)) 
              | (8U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q))) 
             | (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__start_edge))) {
            vlSelf->spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
                = ((IData)(vlSelf->spi_wb__DOT__spi_msb_first)
                    ? (IData)(vlSelf->spi_wb__DOT__spi_data_in)
                    : ([&]() {
                        vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in 
                            = vlSelf->spi_wb__DOT__spi_data_in;
                        vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                            = ((0xf8U & (IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                               | ((4U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                         >> 3U)) | 
                                  ((2U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                          >> 5U)) | 
                                   (1U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                          >> 7U)))));
                        vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                            = ((0xc7U & (IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                               | ((0x20U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                            << 3U)) 
                                  | ((0x10U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                               << 1U)) 
                                     | (8U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                              >> 1U)))));
                        vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                            = ((0x3fU & (IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                               | ((0x80U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                            << 7U)) 
                                  | (0x40U & ((IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                              << 5U))));
                        vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__Vfuncout 
                            = vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out;
                    }(), (IData)(vlSelf->__Vfunc_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__Vfuncout)));
            vlSelf->spi_wb__DOT__u_spi_core__DOT__data_in_ready_o = 1U;
        } else {
            vlSelf->spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
                = (0xfeU & ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                            << 1U));
        }
    } else if (vlSelf->spi_wb__DOT__u_spi_core__DOT__finish_edge) {
        vlSelf->spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
            = (0xfeU & ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                        << 1U));
    }
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.peripheral_ACK 
        = vlSelf->main_soclinux_pbus_ack;
    __VdfgExtracted_h3cdd3448__0 = ((IData)(vlSelf->soclinux_interface1_bus_cyc) 
                                    & (IData)(vlSelf->soclinux_interface1_bus_ack));
    vlSelf->soclinux_interface0_bus_ack = vlSelf->soclinux_block2mem_sink_sink_ready1;
    vlSelf->builder_soclinux_sdblock2memdma_next_state = 0U;
    vlSelf->soclinux_block2mem_sink_sink_last1 = 0U;
    vlSelf->soclinux_block2mem_wishbonedmawriter_offset1_builder_sdblock2memdma_next_value = 0U;
    vlSelf->soclinux_block2mem_wishbonedmawriter_offset1_builder_sdblock2memdma_next_value_ce = 0U;
    vlSelf->soclinux_block2mem_wishbonedmawriter_sink_ready = 0U;
    vlSelf->builder_soclinux_sdblock2memdma_next_state 
        = vlSelf->builder_soclinux_sdblock2memdma_state;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdblock2memdma_state))) {
        vlSelf->soclinux_block2mem_sink_sink_last1 
            = ((IData)(vlSelf->soclinux_block2mem_wishbonedmawriter_sink_last) 
               | (((IData)(1U) + vlSelf->soclinux_block2mem_wishbonedmawriter_offset1) 
                  == vlSelf->soclinux_block2mem_wishbonedmawriter_length1));
        vlSelf->soclinux_block2mem_wishbonedmawriter_sink_ready 
            = vlSelf->soclinux_block2mem_sink_sink_ready1;
        if (((IData)(vlSelf->soclinux_block2mem_wishbonedmawriter_sink_valid) 
             & (IData)(vlSelf->soclinux_block2mem_wishbonedmawriter_sink_ready))) {
            vlSelf->soclinux_block2mem_wishbonedmawriter_offset1_builder_sdblock2memdma_next_value 
                = ((IData)(1U) + vlSelf->soclinux_block2mem_wishbonedmawriter_offset1);
            vlSelf->soclinux_block2mem_wishbonedmawriter_offset1_builder_sdblock2memdma_next_value_ce = 1U;
            if (vlSelf->soclinux_block2mem_sink_sink_last1) {
                if (vlSelf->soclinux_block2mem_wishbonedmawriter_loop) {
                    vlSelf->soclinux_block2mem_wishbonedmawriter_offset1_builder_sdblock2memdma_next_value = 0U;
                    vlSelf->soclinux_block2mem_wishbonedmawriter_offset1_builder_sdblock2memdma_next_value_ce = 1U;
                } else {
                    vlSelf->builder_soclinux_sdblock2memdma_next_state = 2U;
                }
            }
        }
    } else if ((2U != (IData)(vlSelf->builder_soclinux_sdblock2memdma_state))) {
        vlSelf->soclinux_block2mem_wishbonedmawriter_sink_ready = 1U;
        vlSelf->soclinux_block2mem_wishbonedmawriter_offset1_builder_sdblock2memdma_next_value = 0U;
        vlSelf->soclinux_block2mem_wishbonedmawriter_offset1_builder_sdblock2memdma_next_value_ce = 1U;
        vlSelf->builder_soclinux_sdblock2memdma_next_state = 1U;
    }
    vlSelf->builder_csr_bankarray_csrbank2_out0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank2_out0_we = 0U;
    if (__VdfgExtracted_h0b739e8f__0) {
        vlSelf->builder_csr_bankarray_csrbank2_out0_re 
            = vlSelf->builder_csr_bankarray_interface2_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank2_out0_we 
            = vlSelf->builder_csr_bankarray_interface2_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank0_reset0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank0_reset0_we = 0U;
    if (__VdfgExtracted_hb0a81212__0) {
        vlSelf->builder_csr_bankarray_csrbank0_reset0_re 
            = vlSelf->builder_csr_bankarray_interface0_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank0_reset0_we 
            = vlSelf->builder_csr_bankarray_interface0_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank0_scratch0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank0_scratch0_we = 0U;
    if (__VdfgExtracted_hb0a8249d__0) {
        vlSelf->builder_csr_bankarray_csrbank0_scratch0_re 
            = vlSelf->builder_csr_bankarray_interface0_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank0_scratch0_we 
            = vlSelf->builder_csr_bankarray_interface0_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank0_bus_errors_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank0_bus_errors_we = 0U;
    if (__VdfgExtracted_hb0a7b42e__0) {
        vlSelf->builder_csr_bankarray_csrbank0_bus_errors_re 
            = vlSelf->builder_csr_bankarray_interface0_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank0_bus_errors_we 
            = vlSelf->builder_csr_bankarray_interface0_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank1_config0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank1_config0_we = 0U;
    if (__VdfgExtracted_ha61d8069__0) {
        vlSelf->builder_csr_bankarray_csrbank1_config0_re 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank1_config0_we 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank1_reg_control0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank1_reg_control0_we = 0U;
    if (__VdfgExtracted_ha61da165__0) {
        vlSelf->builder_csr_bankarray_csrbank1_reg_control0_re 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank1_reg_control0_we 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank1_reg_wdata0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank1_reg_wdata0_we = 0U;
    if (__VdfgExtracted_ha246b56c__0) {
        vlSelf->builder_csr_bankarray_csrbank1_reg_wdata0_re 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank1_reg_wdata0_we 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank1_status_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank1_status_we = 0U;
    if (__VdfgExtracted_ha61da596__0) {
        vlSelf->builder_csr_bankarray_csrbank1_status_re 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank1_status_we 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank1_reg_status_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank1_reg_status_we = 0U;
    if (__VdfgExtracted_ha246c7a6__0) {
        vlSelf->builder_csr_bankarray_csrbank1_reg_status_re 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank1_reg_status_we 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank1_reg_rdata_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank1_reg_rdata_we = 0U;
    if (__VdfgExtracted_ha247c00e__0) {
        vlSelf->builder_csr_bankarray_csrbank1_reg_rdata_re 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank1_reg_rdata_we 
            = vlSelf->builder_csr_bankarray_interface1_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank5_mode0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank5_mode0_we = 0U;
    if (__VdfgExtracted_h0319cca4__0) {
        vlSelf->builder_csr_bankarray_csrbank5_mode0_re 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank5_mode0_we 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank5_edge0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank5_edge0_we = 0U;
    if (__VdfgExtracted_h0319ba95__0) {
        vlSelf->builder_csr_bankarray_csrbank5_edge0_re 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank5_edge0_we 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank5_ev_enable0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank5_ev_enable0_we = 0U;
    if (__VdfgExtracted_h03239bcc__0) {
        vlSelf->builder_csr_bankarray_csrbank5_ev_enable0_re 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank5_ev_enable0_we 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank5_in_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank5_in_we = 0U;
    if (__VdfgExtracted_h0319dcf1__0) {
        vlSelf->builder_csr_bankarray_csrbank5_in_re 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank5_in_we 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank5_ev_status_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank5_ev_status_we = 0U;
    if (__VdfgExtracted_h0314b0c4__0) {
        vlSelf->builder_csr_bankarray_csrbank5_ev_status_re 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank5_ev_status_we 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank5_ev_pending_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank5_ev_pending_we = 0U;
    if (__VdfgExtracted_h0314bdee__0) {
        vlSelf->builder_csr_bankarray_csrbank5_ev_pending_re 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank5_ev_pending_we 
            = vlSelf->builder_csr_bankarray_interface5_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank6_load0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank6_load0_we = 0U;
    if (__VdfgExtracted_hb2abf48a__0) {
        vlSelf->builder_csr_bankarray_csrbank6_load0_re 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank6_load0_we 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank6_reload0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank6_reload0_we = 0U;
    if (__VdfgExtracted_hb2ac02c7__0) {
        vlSelf->builder_csr_bankarray_csrbank6_reload0_re 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank6_reload0_we 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank6_en0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank6_en0_we = 0U;
    if (__VdfgExtracted_hb2ae92f8__0) {
        vlSelf->builder_csr_bankarray_csrbank6_en0_re 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank6_en0_we 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank6_update_value0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank6_update_value0_we = 0U;
    if (__VdfgExtracted_hb2a59d31__0) {
        vlSelf->builder_csr_bankarray_csrbank6_update_value0_re 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank6_update_value0_we 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank6_ev_enable0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank6_ev_enable0_we = 0U;
    if (__VdfgExtracted_hb298e883__0) {
        vlSelf->builder_csr_bankarray_csrbank6_ev_enable0_re 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank6_ev_enable0_we 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank6_value_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank6_value_we = 0U;
    if (__VdfgExtracted_hb2a58f97__0) {
        vlSelf->builder_csr_bankarray_csrbank6_value_re 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank6_value_we 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank6_ev_status_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank6_ev_status_we = 0U;
    if (__VdfgExtracted_hb2a6480d__0) {
        vlSelf->builder_csr_bankarray_csrbank6_ev_status_re 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank6_ev_status_we 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank6_ev_pending_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank6_ev_pending_we = 0U;
    if (__VdfgExtracted_hb298f8de__0) {
        vlSelf->builder_csr_bankarray_csrbank6_ev_pending_re 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank6_ev_pending_we 
            = vlSelf->builder_csr_bankarray_interface6_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank7_ev_enable0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank7_ev_enable0_we = 0U;
    if (__VdfgExtracted_h08588ba9__0) {
        vlSelf->builder_csr_bankarray_csrbank7_ev_enable0_re 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank7_ev_enable0_we 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank7_txfull_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank7_txfull_we = 0U;
    if (__VdfgExtracted_h08626117__0) {
        vlSelf->builder_csr_bankarray_csrbank7_txfull_re 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank7_txfull_we 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank7_rxempty_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank7_rxempty_we = 0U;
    if (__VdfgExtracted_h0862d088__0) {
        vlSelf->builder_csr_bankarray_csrbank7_rxempty_re 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank7_rxempty_we 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank7_ev_status_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank7_ev_status_we = 0U;
    if (__VdfgExtracted_h0857f3ed__0) {
        vlSelf->builder_csr_bankarray_csrbank7_ev_status_re 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank7_ev_status_we 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank7_ev_pending_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank7_ev_pending_we = 0U;
    if (__VdfgExtracted_h0857c5a7__0) {
        vlSelf->builder_csr_bankarray_csrbank7_ev_pending_re 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank7_ev_pending_we 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank7_txempty_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank7_txempty_we = 0U;
    if (__VdfgExtracted_h085b1a7a__0) {
        vlSelf->builder_csr_bankarray_csrbank7_txempty_re 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank7_txempty_we 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank7_rxfull_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank7_rxfull_we = 0U;
    if (__VdfgExtracted_h085b6b53__0) {
        vlSelf->builder_csr_bankarray_csrbank7_rxfull_re 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank7_rxfull_we 
            = vlSelf->builder_csr_bankarray_interface7_bank_bus_re;
    }
    vlSelf->main_soclinux_uart_rxtx_we = 0U;
    vlSelf->main_soclinux_uart_rxtx_re = 0U;
    if (__VdfgExtracted_h0862eea6__0) {
        vlSelf->main_soclinux_uart_rxtx_we = vlSelf->builder_csr_bankarray_interface7_bank_bus_re;
        vlSelf->main_soclinux_uart_rxtx_re = vlSelf->builder_csr_bankarray_interface7_bank_bus_we;
    }
    vlSelf->builder_csr_bankarray_csrbank4_phy_clk_divisor0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank4_phy_clk_divisor0_we = 0U;
    if (__VdfgExtracted_h02682fb1__0) {
        vlSelf->builder_csr_bankarray_csrbank4_phy_clk_divisor0_re 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank4_phy_clk_divisor0_we 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank4_mmap_dummy_bits0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank4_mmap_dummy_bits0_we = 0U;
    if (__VdfgExtracted_h02681e7e__0) {
        vlSelf->builder_csr_bankarray_csrbank4_mmap_dummy_bits0_re 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank4_mmap_dummy_bits0_we 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank4_master_cs0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank4_master_cs0_we = 0U;
    if (__VdfgExtracted_h026b4d8d__0) {
        vlSelf->builder_csr_bankarray_csrbank4_master_cs0_re 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank4_master_cs0_we 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank4_master_phyconfig0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank4_master_phyconfig0_we = 0U;
    if (__VdfgExtracted_h031fa14a__0) {
        vlSelf->builder_csr_bankarray_csrbank4_master_phyconfig0_re 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank4_master_phyconfig0_we 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank4_master_status_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank4_master_status_we = 0U;
    if (__VdfgExtracted_h031e8d36__0) {
        vlSelf->builder_csr_bankarray_csrbank4_master_status_re 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank4_master_status_we 
            = vlSelf->builder_csr_bankarray_interface4_bank_bus_re;
    }
    vlSelf->main_soclinux_master_rxtx_re = 0U;
    vlSelf->main_soclinux_master_rxtx_we = 0U;
    if (__VdfgExtracted_h031df0b4__0) {
        vlSelf->main_soclinux_master_rxtx_re = vlSelf->builder_csr_bankarray_interface4_bank_bus_we;
        vlSelf->main_soclinux_master_rxtx_we = vlSelf->builder_csr_bankarray_interface4_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_phy_clocker_divider0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_phy_clocker_divider0_we = 0U;
    if (__VdfgExtracted_h27f26518__0) {
        vlSelf->builder_csr_bankarray_csrbank3_phy_clocker_divider0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_phy_clocker_divider0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_phy_cmdr_timeout0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_phy_cmdr_timeout0_we = 0U;
    if (__VdfgExtracted_h271a8daa__0) {
        vlSelf->builder_csr_bankarray_csrbank3_phy_cmdr_timeout0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_phy_cmdr_timeout0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_phy_datar_timeout0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_phy_datar_timeout0_we = 0U;
    if (__VdfgExtracted_h27e9a1b2__0) {
        vlSelf->builder_csr_bankarray_csrbank3_phy_datar_timeout0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_phy_datar_timeout0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_phy_settings0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_phy_settings0_we = 0U;
    if (__VdfgExtracted_h27e9d021__0) {
        vlSelf->builder_csr_bankarray_csrbank3_phy_settings0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_phy_settings0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_argument0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_argument0_we = 0U;
    if (__VdfgExtracted_h27e98114__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_argument0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_argument0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_command0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_command0_we = 0U;
    if (__VdfgExtracted_h27e9ae47__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_command0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_command0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_send0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_send0_we = 0U;
    if (__VdfgExtracted_h27e9dffe__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_send0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_send0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response3_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response3_we = 0U;
    if (__VdfgExtracted_h27f76228__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response3_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response3_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response2_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response2_we = 0U;
    if (__VdfgExtracted_h271c1c54__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response2_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response2_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response1_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response1_we = 0U;
    if (__VdfgExtracted_h27e8c543__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response1_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response1_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_block_length0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_block_length0_we = 0U;
    if (__VdfgExtracted_h27e93144__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_block_length0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_block_length0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_block_count0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_block_count0_we = 0U;
    if (__VdfgExtracted_h27e95d31__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_block_count0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_block_count0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base1_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base1_we = 0U;
    if (__VdfgExtracted_h271a8a22__0) {
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base1_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base1_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base0_we = 0U;
    if (__VdfgExtracted_h27ea53af__0) {
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_base0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_length0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_length0_we = 0U;
    if (__VdfgExtracted_h27ea423f__0) {
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_length0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_length0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_we = 0U;
    if (__VdfgExtracted_h271cd963__0) {
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_enable0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_loop0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_loop0_we = 0U;
    if (__VdfgExtracted_h271cf8c1__0) {
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_loop0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_loop0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base1_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base1_we = 0U;
    if (__VdfgExtracted_h271a18e7__0) {
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base1_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base1_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base0_we = 0U;
    if (__VdfgExtracted_h271cd26f__0) {
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_base0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_length0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_length0_we = 0U;
    if (__VdfgExtracted_h271b2239__0) {
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_length0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_length0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_enable0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_enable0_we = 0U;
    if (__VdfgExtracted_h271c8772__0) {
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_enable0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_enable0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_loop0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_loop0_we = 0U;
    if (__VdfgExtracted_h271ccd2d__0) {
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_loop0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_loop0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_we = 0U;
    if (__VdfgExtracted_h271c0c55__0) {
        vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_ev_enable0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_phy_card_detect_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_phy_card_detect_we = 0U;
    if (__VdfgExtracted_h27f2134d__0) {
        vlSelf->builder_csr_bankarray_csrbank3_phy_card_detect_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_phy_card_detect_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_phy_dataw_status_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_phy_dataw_status_we = 0U;
    if (__VdfgExtracted_h271b4644__0) {
        vlSelf->builder_csr_bankarray_csrbank3_phy_dataw_status_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_phy_dataw_status_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response0_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response0_we = 0U;
    if (__VdfgExtracted_h27e91cb8__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response0_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response0_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_event_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_cmd_event_we = 0U;
    if (__VdfgExtracted_h271b4a2e__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_event_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_cmd_event_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_core_data_event_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_core_data_event_we = 0U;
    if (__VdfgExtracted_h27e8fd17__0) {
        vlSelf->builder_csr_bankarray_csrbank3_core_data_event_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_core_data_event_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_done_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_done_we = 0U;
    if (__VdfgExtracted_h271ca254__0) {
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_done_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_done_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_offset_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_offset_we = 0U;
    if (__VdfgExtracted_h271d473e__0) {
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_offset_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_offset_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_done_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_done_we = 0U;
    if (__VdfgExtracted_h271e3a6d__0) {
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_done_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_done_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_offset_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_offset_we = 0U;
    if (__VdfgExtracted_h271c5cbc__0) {
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_offset_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_offset_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_ev_status_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_ev_status_we = 0U;
    if (__VdfgExtracted_h271cec43__0) {
        vlSelf->builder_csr_bankarray_csrbank3_ev_status_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_ev_status_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->builder_csr_bankarray_csrbank3_ev_pending_re = 0U;
    vlSelf->builder_csr_bankarray_csrbank3_ev_pending_we = 0U;
    if (__VdfgExtracted_h271d79e6__0) {
        vlSelf->builder_csr_bankarray_csrbank3_ev_pending_re 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
        vlSelf->builder_csr_bankarray_csrbank3_ev_pending_we 
            = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
    }
    vlSelf->soclinux_init_initialize_we = 0U;
    vlSelf->soclinux_init_initialize_re = 0U;
    if (__VdfgExtracted_h27f3f367__0) {
        vlSelf->soclinux_init_initialize_we = vlSelf->builder_csr_bankarray_interface3_bank_bus_re;
        vlSelf->soclinux_init_initialize_re = vlSelf->builder_csr_bankarray_interface3_bank_bus_we;
    }
    vlSelf->ODDR_1__DOT__D1 = vlSelf->main_soclinux_cs_n;
    vlSelf->ODDR_1__DOT__D2 = vlSelf->main_soclinux_cs_n;
    vlSelf->spi_wb__DOT__spi_data_in_ready = vlSelf->spi_wb__DOT__u_spi_core__DOT__data_in_ready_o;
    vlSelf->soclinux_mem2block_dma_fifo_sink_valid = 0U;
    vlSelf->soclinux_mem2block_dma_sink_sink_ready = 0U;
    if (__VdfgExtracted_h3cdd3448__0) {
        vlSelf->soclinux_mem2block_dma_fifo_sink_valid = 1U;
        vlSelf->soclinux_mem2block_dma_sink_sink_ready = 1U;
    }
    vlSelf->soclinux_block2mem_converter_source_ready 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_sink_ready;
    vlSelf->soclinux_block2mem_source_source_ready 
        = vlSelf->soclinux_block2mem_wishbonedmawriter_sink_ready;
    vlSelf->soclinux_block2mem_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_block2mem_converter_strobe_all)) 
                 | (IData)(vlSelf->soclinux_block2mem_wishbonedmawriter_sink_ready)));
    vlSelf->main_soclinux_bus_errors_we = vlSelf->builder_csr_bankarray_csrbank0_bus_errors_we;
    vlSelf->main_hyperram_status_we = vlSelf->builder_csr_bankarray_csrbank1_status_we;
    vlSelf->main_hyperram_reg_status_we = vlSelf->builder_csr_bankarray_csrbank1_reg_status_we;
    vlSelf->main_hyperram_reg_rdata_we = vlSelf->builder_csr_bankarray_csrbank1_reg_rdata_we;
    vlSelf->soclinux_we = vlSelf->builder_csr_bankarray_csrbank5_in_we;
    vlSelf->soclinux_status_we = vlSelf->builder_csr_bankarray_csrbank5_ev_status_we;
    vlSelf->soclinux_pending_we = vlSelf->builder_csr_bankarray_csrbank5_ev_pending_we;
    vlSelf->main_soclinux_timer_value_we = vlSelf->builder_csr_bankarray_csrbank6_value_we;
    vlSelf->main_soclinux_timer_status_we = vlSelf->builder_csr_bankarray_csrbank6_ev_status_we;
    vlSelf->main_soclinux_timer_pending_we = vlSelf->builder_csr_bankarray_csrbank6_ev_pending_we;
    vlSelf->main_soclinux_uart_txfull_we = vlSelf->builder_csr_bankarray_csrbank7_txfull_we;
    vlSelf->main_soclinux_uart_rxempty_we = vlSelf->builder_csr_bankarray_csrbank7_rxempty_we;
    vlSelf->main_soclinux_uart_status_we = vlSelf->builder_csr_bankarray_csrbank7_ev_status_we;
    vlSelf->main_soclinux_uart_pending_we = vlSelf->builder_csr_bankarray_csrbank7_ev_pending_we;
    vlSelf->main_soclinux_uart_txempty_we = vlSelf->builder_csr_bankarray_csrbank7_txempty_we;
    vlSelf->main_soclinux_uart_rxfull_we = vlSelf->builder_csr_bankarray_csrbank7_rxfull_we;
    vlSelf->main_soclinux_uart_tx_fifo_syncfifo_we 
        = vlSelf->main_soclinux_uart_rxtx_re;
    vlSelf->main_soclinux_uart_tx_fifo_sink_valid = vlSelf->main_soclinux_uart_rxtx_re;
    vlSelf->main_soclinux_uart_tx_fifo_wrport_we = 
        ((IData)(vlSelf->main_soclinux_uart_rxtx_re) 
         & ((IData)(vlSelf->main_soclinux_uart_tx_fifo_syncfifo_writable) 
            | (IData)(vlSelf->main_soclinux_uart_tx_fifo_replace)));
    vlSelf->main_soclinux_master_status_we = vlSelf->builder_csr_bankarray_csrbank4_master_status_we;
    vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_valid 
        = vlSelf->main_soclinux_master_rxtx_re;
    vlSelf->main_soclinux_master_tx_fifo_sink_sink_valid 
        = vlSelf->main_soclinux_master_rxtx_re;
    vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_ready 
        = vlSelf->main_soclinux_master_rxtx_we;
    vlSelf->main_soclinux_master_rx_fifo_source_source_ready 
        = vlSelf->main_soclinux_master_rxtx_we;
    vlSelf->builder_soclinux_rx_demux_endpoint1_source_ready 
        = (1U & ((~ (IData)(vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_valid)) 
                 | (IData)(vlSelf->main_soclinux_master_rxtx_we)));
    vlSelf->soclinux_card_detect_we = vlSelf->builder_csr_bankarray_csrbank3_phy_card_detect_we;
    vlSelf->soclinux_dataw_we = vlSelf->builder_csr_bankarray_csrbank3_phy_dataw_status_we;
    vlSelf->soclinux_core_cmd_response_we = vlSelf->builder_csr_bankarray_csrbank3_core_cmd_response0_we;
    vlSelf->soclinux_core_cmd_event_we = vlSelf->builder_csr_bankarray_csrbank3_core_cmd_event_we;
    vlSelf->soclinux_core_data_event_we = vlSelf->builder_csr_bankarray_csrbank3_core_data_event_we;
    vlSelf->soclinux_block2mem_wishbonedmawriter_done_we 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_done_we;
    vlSelf->soclinux_block2mem_wishbonedmawriter_offset_we 
        = vlSelf->builder_csr_bankarray_csrbank3_block2mem_dma_offset_we;
    vlSelf->soclinux_mem2block_dma_done_we = vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_done_we;
    vlSelf->soclinux_mem2block_dma_offset_we = vlSelf->builder_csr_bankarray_csrbank3_mem2block_dma_offset_we;
    vlSelf->soclinux_eventmanager_status_we = vlSelf->builder_csr_bankarray_csrbank3_ev_status_we;
    vlSelf->soclinux_eventmanager_pending_we = vlSelf->builder_csr_bankarray_csrbank3_ev_pending_we;
    vlSelf->builder_soclinux_sdphyinit_next_state = 0U;
    if (vlSelf->builder_soclinux_sdphyinit_state) {
        vlSelf->builder_soclinux_sdphyinit_next_state = 1U;
        if (vlSelf->soclinux_init_pads_out_ready) {
            if ((0x4fU == (IData)(vlSelf->soclinux_init_count))) {
                vlSelf->builder_soclinux_sdphyinit_next_state = 0U;
            }
        }
    } else {
        vlSelf->builder_soclinux_sdphyinit_next_state = 0U;
        if (vlSelf->soclinux_init_initialize_re) {
            vlSelf->builder_soclinux_sdphyinit_next_state = 1U;
        }
    }
    vlSelf->soclinux_mem2block_dma_fifo_syncfifo_we 
        = vlSelf->soclinux_mem2block_dma_fifo_sink_valid;
    vlSelf->soclinux_mem2block_dma_fifo_wrport_we = 
        ((IData)(vlSelf->soclinux_mem2block_dma_fifo_sink_valid) 
         & ((IData)(vlSelf->soclinux_mem2block_dma_fifo_syncfifo_writable) 
            | (IData)(vlSelf->soclinux_mem2block_dma_fifo_replace)));
    vlSelf->builder_soclinux_sdmem2blockdma_next_state = 0U;
    vlSelf->soclinux_mem2block_dma_offset1_builder_sdmem2blockdma_next_value = 0U;
    vlSelf->soclinux_mem2block_dma_offset1_builder_sdmem2blockdma_next_value_ce = 0U;
    vlSelf->soclinux_mem2block_dma_sink_sink_last = 0U;
    vlSelf->builder_soclinux_sdmem2blockdma_next_state 
        = vlSelf->builder_soclinux_sdmem2blockdma_state;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdmem2blockdma_state))) {
        vlSelf->soclinux_mem2block_dma_sink_sink_last 
            = (vlSelf->soclinux_mem2block_dma_offset1 
               == (vlSelf->soclinux_mem2block_dma_length1 
                   - (IData)(1U)));
        if (vlSelf->soclinux_mem2block_dma_sink_sink_ready) {
            vlSelf->soclinux_mem2block_dma_offset1_builder_sdmem2blockdma_next_value 
                = ((IData)(1U) + vlSelf->soclinux_mem2block_dma_offset1);
            vlSelf->soclinux_mem2block_dma_offset1_builder_sdmem2blockdma_next_value_ce = 1U;
            if (vlSelf->soclinux_mem2block_dma_sink_sink_last) {
                if (vlSelf->soclinux_mem2block_dma_loop) {
                    vlSelf->soclinux_mem2block_dma_offset1_builder_sdmem2blockdma_next_value = 0U;
                    vlSelf->soclinux_mem2block_dma_offset1_builder_sdmem2blockdma_next_value_ce = 1U;
                } else {
                    vlSelf->builder_soclinux_sdmem2blockdma_next_state = 2U;
                }
            }
        }
    } else if ((2U != (IData)(vlSelf->builder_soclinux_sdmem2blockdma_state))) {
        vlSelf->soclinux_mem2block_dma_offset1_builder_sdmem2blockdma_next_value = 0U;
        vlSelf->soclinux_mem2block_dma_offset1_builder_sdmem2blockdma_next_value_ce = 1U;
        vlSelf->builder_soclinux_sdmem2blockdma_next_state = 1U;
    }
    vlSelf->soclinux_block2mem_fifo_re = vlSelf->soclinux_block2mem_converter_sink_ready;
    vlSelf->soclinux_block2mem_fifo_source_ready = vlSelf->soclinux_block2mem_converter_sink_ready;
    vlSelf->soclinux_block2mem_converter_load_part 
        = ((IData)(vlSelf->soclinux_block2mem_fifo_readable) 
           & (IData)(vlSelf->soclinux_block2mem_converter_sink_ready));
    vlSelf->soclinux_block2mem_fifo_syncfifo_re = ((IData)(vlSelf->soclinux_block2mem_fifo_syncfifo_readable) 
                                                   & ((~ (IData)(vlSelf->soclinux_block2mem_fifo_readable)) 
                                                      | (IData)(vlSelf->soclinux_block2mem_converter_sink_ready)));
    vlSelf->main_soclinux_master_sink_ready = vlSelf->builder_soclinux_rx_demux_endpoint1_source_ready;
    vlSelf->main_soclinux_port_master_user_port_source_ready 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_ready;
    vlSelf->main_soclinux_port_master_internal_port_source_ready 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_ready;
    vlSelf->main_soclinux_master_rx_fifo_sink_sink_ready 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_ready;
    vlSelf->main_soclinux_master_rx_fifo_pipe_valid_sink_ready 
        = vlSelf->builder_soclinux_rx_demux_endpoint1_source_ready;
    vlSelf->builder_soclinux_rx_demux_sink_ready = 0U;
    if (vlSelf->builder_soclinux_rx_demux_sel) {
        if (vlSelf->builder_soclinux_rx_demux_sel) {
            vlSelf->builder_soclinux_rx_demux_sink_ready 
                = vlSelf->builder_soclinux_rx_demux_endpoint1_source_ready;
        }
    } else {
        vlSelf->builder_soclinux_rx_demux_sink_ready 
            = vlSelf->builder_soclinux_rx_demux_endpoint0_source_ready;
    }
    vlSelf->soclinux_mem2block_dma_fifo_sink_last = vlSelf->soclinux_mem2block_dma_sink_sink_last;
    vlSelf->soclinux_mem2block_dma_fifo_fifo_in_last 
        = vlSelf->soclinux_mem2block_dma_sink_sink_last;
    vlSelf->soclinux_mem2block_dma_fifo_wrport_dat_w 
        = (((QData)((IData)(vlSelf->soclinux_mem2block_dma_sink_sink_last)) 
            << 0x21U) | (((QData)((IData)(vlSelf->soclinux_mem2block_dma_fifo_sink_first)) 
                          << 0x20U) | (QData)((IData)(vlSelf->soclinux_mem2block_dma_fifo_fifo_in_payload_data))));
    vlSelf->soclinux_block2mem_fifo_do_read = ((IData)(vlSelf->soclinux_block2mem_fifo_syncfifo_readable) 
                                               & (IData)(vlSelf->soclinux_block2mem_fifo_syncfifo_re));
    vlSelf->main_soclinux_crossbar_sink_ready = vlSelf->builder_soclinux_rx_demux_sink_ready;
    vlSelf->main_soclinux_source_ready = vlSelf->builder_soclinux_rx_demux_sink_ready;
    vlSelf->soclinux_mem2block_dma_fifo_syncfifo_din 
        = vlSelf->soclinux_mem2block_dma_fifo_wrport_dat_w;
    vlSelf->soclinux_block2mem_fifo_rdport_re = vlSelf->soclinux_block2mem_fifo_do_read;
    vlSelf->builder_soclinux_litespiphy_next_state = 0U;
    vlSelf->builder_soclinux_litespiphy_next_state 
        = vlSelf->builder_soclinux_litespiphy_state;
    if ((1U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
        if (vlSelf->main_soclinux_negedge) {
            if ((0U == (IData)(vlSelf->main_soclinux_sr_out_cnt))) {
                vlSelf->builder_soclinux_litespiphy_next_state = 2U;
            }
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
        if ((0U == (IData)(vlSelf->main_soclinux_sr_in_cnt))) {
            vlSelf->builder_soclinux_litespiphy_next_state = 3U;
        } else if (vlSelf->main_soclinux_posedge_reg2) {
            if (((IData)(vlSelf->main_soclinux_sr_in_cnt) 
                 == (IData)(vlSelf->main_soclinux_sink_payload_width))) {
                vlSelf->builder_soclinux_litespiphy_next_state = 3U;
            }
        }
    } else if ((3U == (IData)(vlSelf->builder_soclinux_litespiphy_state))) {
        if (vlSelf->main_soclinux_source_ready) {
            vlSelf->builder_soclinux_litespiphy_next_state = 0U;
        }
    } else if (vlSelf->__VdfgExtracted_h1ff7b299__0) {
        vlSelf->builder_soclinux_litespiphy_next_state = 1U;
    }
}
