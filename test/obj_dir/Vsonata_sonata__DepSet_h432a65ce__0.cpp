// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata_sonata.h"

VL_INLINE_OPT void Vsonata_sonata___ico_comb__TOP__sonata__0(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___ico_comb__TOP__sonata__0\n"); );
    // Body
    vlSelf->builder_soclinux_sdphydatar_next_state = 0U;
    vlSelf->soclinux_datar_count_builder_sdphydatar_next_value0 = 0U;
    vlSelf->soclinux_datar_count_builder_sdphydatar_next_value_ce0 = 0U;
    vlSelf->soclinux_datar_datar_source_ready = 0U;
    vlSelf->soclinux_datar_sink_ready = 0U;
    vlSelf->soclinux_datar_source_source_last = 0U;
    vlSelf->soclinux_datar_source_source_valid = 0U;
    vlSelf->soclinux_datar_stop = 0U;
    vlSelf->builder_soclinux_sdphydatar_next_state 
        = vlSelf->builder_soclinux_sdphydatar_state;
    if ((4U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
            vlSelf->soclinux_datar_count_builder_sdphydatar_next_value0 = 0U;
            vlSelf->soclinux_datar_count_builder_sdphydatar_next_value_ce0 = 1U;
            if (((IData)(vlSelf->soclinux_datar_sink_valid) 
                 & (IData)(vlSelf->soclinux_datar_pads_out_ready))) {
                vlSelf->builder_soclinux_sdphydatar_next_state = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
            vlSelf->soclinux_datar_count_builder_sdphydatar_next_value0 = 0U;
            vlSelf->soclinux_datar_count_builder_sdphydatar_next_value_ce0 = 1U;
            if (((IData)(vlSelf->soclinux_datar_sink_valid) 
                 & (IData)(vlSelf->soclinux_datar_pads_out_ready))) {
                vlSelf->builder_soclinux_sdphydatar_next_state = 1U;
            }
        } else {
            vlSelf->soclinux_datar_source_source_valid = 1U;
            vlSelf->soclinux_datar_source_source_last = 1U;
            if (vlSelf->soclinux_datar_source_source_ready) {
                vlSelf->builder_soclinux_sdphydatar_next_state = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
        if ((1U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
            if (vlSelf->soclinux_datar_pads_out_ready) {
                vlSelf->soclinux_datar_count_builder_sdphydatar_next_value0 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->soclinux_datar_count)));
                vlSelf->soclinux_datar_count_builder_sdphydatar_next_value_ce0 = 1U;
                if ((7U == (IData)(vlSelf->soclinux_datar_count))) {
                    vlSelf->builder_soclinux_sdphydatar_next_state = 0U;
                }
            }
        } else {
            vlSelf->soclinux_datar_source_source_valid 
                = vlSelf->soclinux_datar_datar_source_valid;
            vlSelf->soclinux_datar_source_source_last 
                = ((IData)(vlSelf->soclinux_datar_count) 
                   == (0x3ffU & (((IData)(vlSelf->soclinux_datar_sink_payload_block_length) 
                                  + (IData)(vlSelf->soclinux_datar_crc_len)) 
                                 - (IData)(1U))));
            if (vlSelf->soclinux_datar_source_source_valid) {
                if (vlSelf->soclinux_datar_source_source_ready) {
                    vlSelf->soclinux_datar_datar_source_ready = 1U;
                    vlSelf->soclinux_datar_count_builder_sdphydatar_next_value0 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->soclinux_datar_count)));
                    vlSelf->soclinux_datar_count_builder_sdphydatar_next_value_ce0 = 1U;
                    if (vlSelf->soclinux_datar_source_source_last) {
                        vlSelf->soclinux_datar_sink_ready = 1U;
                        if (vlSelf->soclinux_datar_sink_last) {
                            vlSelf->soclinux_datar_count_builder_sdphydatar_next_value0 = 0U;
                            vlSelf->soclinux_datar_count_builder_sdphydatar_next_value_ce0 = 1U;
                            vlSelf->builder_soclinux_sdphydatar_next_state = 3U;
                        } else {
                            vlSelf->builder_soclinux_sdphydatar_next_state = 0U;
                        }
                    }
                } else {
                    vlSelf->soclinux_datar_stop = 1U;
                }
            }
            if ((0U == vlSelf->soclinux_datar_timeout)) {
                vlSelf->soclinux_datar_sink_ready = 1U;
                vlSelf->builder_soclinux_sdphydatar_next_state = 4U;
            }
        }
    } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydatar_state))) {
        if (vlSelf->soclinux_datar_datar_source_valid) {
            vlSelf->builder_soclinux_sdphydatar_next_state = 2U;
        }
        if ((0U == vlSelf->soclinux_datar_timeout)) {
            vlSelf->soclinux_datar_sink_ready = 1U;
            vlSelf->builder_soclinux_sdphydatar_next_state = 4U;
        }
    } else {
        vlSelf->soclinux_datar_count_builder_sdphydatar_next_value0 = 0U;
        vlSelf->soclinux_datar_count_builder_sdphydatar_next_value_ce0 = 1U;
        if (((IData)(vlSelf->soclinux_datar_sink_valid) 
             & (IData)(vlSelf->soclinux_datar_pads_out_ready))) {
            vlSelf->builder_soclinux_sdphydatar_next_state = 1U;
        }
    }
    vlSelf->soclinux_datar_datar_1x_source_ready = 0U;
    if ((1U != (IData)(vlSelf->soclinux_data_width0))) {
        vlSelf->soclinux_datar_datar_1x_source_ready 
            = vlSelf->soclinux_datar_datar_source_ready;
    }
    vlSelf->soclinux_datar_datar_4x_source_ready = 0U;
    if ((1U == (IData)(vlSelf->soclinux_data_width0))) {
        vlSelf->soclinux_datar_datar_4x_source_ready 
            = vlSelf->soclinux_datar_datar_source_ready;
    }
    vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value_ce8 = 0U;
    vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value8 = 0U;
    vlSelf->soclinux_core_data_crc_builder_sdcore_next_value9 = 0U;
    vlSelf->soclinux_core_data_crc_builder_sdcore_next_value_ce9 = 0U;
    vlSelf->soclinux_core_source_payload_data = 0U;
    vlSelf->soclinux_core_source_last = 0U;
    vlSelf->soclinux_core_source_valid = 0U;
    vlSelf->soclinux_core_source_first = 0U;
    if ((4U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value_ce8 = 1U;
                vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value8 = 0U;
                vlSelf->soclinux_core_data_crc_builder_sdcore_next_value9 = 0U;
                vlSelf->soclinux_core_data_crc_builder_sdcore_next_value_ce9 = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value_ce8 = 1U;
                vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value8 = 0U;
                vlSelf->soclinux_core_data_crc_builder_sdcore_next_value9 = 0U;
                vlSelf->soclinux_core_data_crc_builder_sdcore_next_value_ce9 = 1U;
            }
        } else if (vlSelf->soclinux_datar_source_source_valid) {
            if ((1U & (~ ((0U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)) 
                          | (5U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)))))) {
                if ((1U == (IData)(vlSelf->soclinux_datar_source_source_payload_status))) {
                    vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value_ce8 = 1U;
                    vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value8 = 1U;
                }
            }
            if (((0U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)) 
                 | (5U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)))) {
                if ((5U == (IData)(vlSelf->soclinux_dataw_source_source_payload_status))) {
                    vlSelf->soclinux_core_data_crc_builder_sdcore_next_value9 = 1U;
                    vlSelf->soclinux_core_data_crc_builder_sdcore_next_value_ce9 = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
                if (vlSelf->soclinux_datar_source_source_valid) {
                    if (((0U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)) 
                         | (5U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)))) {
                        if ((1U & (~ (IData)(vlSelf->soclinux_datar_source_source_payload_drop)))) {
                            vlSelf->soclinux_core_source_payload_data 
                                = vlSelf->soclinux_datar_source_source_payload_data;
                            vlSelf->soclinux_core_source_last 
                                = vlSelf->soclinux_datar_source_source_last;
                            vlSelf->soclinux_core_source_valid 
                                = vlSelf->soclinux_datar_source_source_valid;
                            vlSelf->soclinux_core_source_first 
                                = vlSelf->soclinux_datar_source_source_first;
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
                if (vlSelf->soclinux_core_cmd_send_re) {
                    vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value_ce8 = 1U;
                    vlSelf->soclinux_core_data_timeout_builder_sdcore_next_value8 = 0U;
                }
            }
        }
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
                if (vlSelf->soclinux_dataw_source_source_valid) {
                    if ((5U == (IData)(vlSelf->soclinux_dataw_source_source_payload_status))) {
                        vlSelf->soclinux_core_data_crc_builder_sdcore_next_value9 = 1U;
                        vlSelf->soclinux_core_data_crc_builder_sdcore_next_value_ce9 = 1U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_data_crc_builder_sdcore_next_value9 = 0U;
                vlSelf->soclinux_core_data_crc_builder_sdcore_next_value_ce9 = 1U;
            }
        }
    }
    vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_ready 
        = vlSelf->soclinux_datar_datar_1x_source_ready;
    vlSelf->soclinux_datar_datar_1x_buf_source_source_ready 
        = vlSelf->soclinux_datar_datar_1x_source_ready;
    vlSelf->soclinux_datar_datar_1x_converter_converter_source_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_source_valid)) 
                 | (IData)(vlSelf->soclinux_datar_datar_1x_source_ready)));
    vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_ready 
        = vlSelf->soclinux_datar_datar_4x_source_ready;
    vlSelf->soclinux_datar_datar_4x_buf_source_source_ready 
        = vlSelf->soclinux_datar_datar_4x_source_ready;
    vlSelf->soclinux_datar_datar_4x_converter_converter_source_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_source_valid)) 
                 | (IData)(vlSelf->soclinux_datar_datar_4x_source_ready)));
    vlSelf->soclinux_block2mem_sink_sink_payload_data0 
        = vlSelf->soclinux_core_source_payload_data;
    vlSelf->soclinux_block2mem_sink_sink_last0 = vlSelf->soclinux_core_source_last;
    vlSelf->soclinux_block2mem_sink_sink_valid0 = vlSelf->soclinux_core_source_valid;
    vlSelf->soclinux_block2mem_sink_sink_first = vlSelf->soclinux_core_source_first;
    vlSelf->soclinux_block2mem_start = ((IData)(vlSelf->soclinux_core_source_first) 
                                        & (IData)(vlSelf->soclinux_core_source_valid));
    vlSelf->soclinux_datar_datar_1x_buf_sink_sink_ready 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_ready;
    vlSelf->soclinux_datar_datar_1x_converter_source_source_ready 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_ready;
    vlSelf->soclinux_datar_datar_1x_buf_pipe_valid_sink_ready 
        = vlSelf->soclinux_datar_datar_1x_converter_converter_source_ready;
    vlSelf->soclinux_datar_datar_1x_converter_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_datar_datar_1x_converter_converter_strobe_all)) 
                 | (IData)(vlSelf->soclinux_datar_datar_1x_converter_converter_source_ready)));
    vlSelf->soclinux_datar_datar_4x_buf_sink_sink_ready 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_ready;
    vlSelf->soclinux_datar_datar_4x_converter_source_source_ready 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_ready;
    vlSelf->soclinux_datar_datar_4x_buf_pipe_valid_sink_ready 
        = vlSelf->soclinux_datar_datar_4x_converter_converter_source_ready;
    vlSelf->soclinux_datar_datar_4x_converter_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->soclinux_datar_datar_4x_converter_converter_strobe_all)) 
                 | (IData)(vlSelf->soclinux_datar_datar_4x_converter_converter_source_ready)));
    vlSelf->soclinux_block2mem_fifo_sink_valid = 0U;
    vlSelf->soclinux_block2mem_fifo_sink_first = 0U;
    vlSelf->soclinux_block2mem_fifo_sink_last = 0U;
    vlSelf->soclinux_block2mem_fifo_sink_payload_data = 0U;
    if (((IData)(vlSelf->soclinux_block2mem_wishbonedmawriter_enable_storage) 
         & ((IData)(vlSelf->soclinux_block2mem_start) 
            | (IData)(vlSelf->soclinux_block2mem_connect)))) {
        vlSelf->soclinux_block2mem_fifo_sink_valid 
            = vlSelf->soclinux_block2mem_sink_sink_valid0;
        vlSelf->soclinux_block2mem_fifo_sink_first 
            = vlSelf->soclinux_block2mem_sink_sink_first;
        vlSelf->soclinux_block2mem_fifo_sink_last = vlSelf->soclinux_block2mem_sink_sink_last0;
        vlSelf->soclinux_block2mem_fifo_sink_payload_data 
            = vlSelf->soclinux_block2mem_sink_sink_payload_data0;
    }
    vlSelf->soclinux_block2mem_sink_sink_ready0 = 0U;
    vlSelf->soclinux_block2mem_sink_sink_ready0 = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->soclinux_block2mem_wishbonedmawriter_enable_storage) 
                                                        & ((IData)(vlSelf->soclinux_block2mem_start) 
                                                           | (IData)(vlSelf->soclinux_block2mem_connect))))) 
                                                   || (IData)(vlSelf->soclinux_block2mem_fifo_sink_ready));
    vlSelf->soclinux_datar_datar_1x_converter_converter_load_part 
        = ((IData)(vlSelf->soclinux_datar_datar_1x_converter_converter_sink_valid) 
           & (IData)(vlSelf->soclinux_datar_datar_1x_converter_converter_sink_ready));
    vlSelf->soclinux_datar_datar_4x_converter_converter_load_part 
        = ((IData)(vlSelf->soclinux_datar_datar_4x_converter_converter_sink_valid) 
           & (IData)(vlSelf->soclinux_datar_datar_4x_converter_converter_sink_ready));
    vlSelf->soclinux_block2mem_fifo_syncfifo_we = vlSelf->soclinux_block2mem_fifo_sink_valid;
    vlSelf->soclinux_block2mem_fifo_wrport_we = ((IData)(vlSelf->soclinux_block2mem_fifo_sink_valid) 
                                                 & ((IData)(vlSelf->soclinux_block2mem_fifo_sink_ready) 
                                                    | (IData)(vlSelf->soclinux_block2mem_fifo_replace)));
    vlSelf->soclinux_block2mem_fifo_fifo_in_first = vlSelf->soclinux_block2mem_fifo_sink_first;
    vlSelf->soclinux_block2mem_fifo_fifo_in_last = vlSelf->soclinux_block2mem_fifo_sink_last;
    vlSelf->soclinux_block2mem_fifo_fifo_in_payload_data 
        = vlSelf->soclinux_block2mem_fifo_sink_payload_data;
    vlSelf->soclinux_block2mem_fifo_wrport_dat_w = 
        (((IData)(vlSelf->soclinux_block2mem_fifo_sink_last) 
          << 9U) | (((IData)(vlSelf->soclinux_block2mem_fifo_sink_first) 
                     << 8U) | (IData)(vlSelf->soclinux_block2mem_fifo_sink_payload_data)));
    vlSelf->soclinux_core_source_ready = vlSelf->soclinux_block2mem_sink_sink_ready0;
    vlSelf->soclinux_block2mem_fifo_syncfifo_din = vlSelf->soclinux_block2mem_fifo_wrport_dat_w;
}

VL_INLINE_OPT void Vsonata_sonata___ico_comb__TOP__sonata__1(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___ico_comb__TOP__sonata__1\n"); );
    // Body
    vlSelf->builder_soclinux_sdcore_next_state = 0U;
    vlSelf->soclinux_cmdw_sink_last = 0U;
    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 0U;
    vlSelf->soclinux_core_crc7_inserter_crc_enable = 0U;
    vlSelf->soclinux_core_crc7_inserter_crc_reset = 0U;
    vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 = 0U;
    vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 0U;
    vlSelf->soclinux_datar_source_source_ready = 0U;
    vlSelf->soclinux_dataw_sink_last = 0U;
    vlSelf->soclinux_dataw_sink_payload_last_block = 0U;
    vlSelf->soclinux_dataw_sink_valid = 0U;
    vlSelf->builder_soclinux_sdcore_next_state = vlSelf->builder_soclinux_sdcore_state;
    if ((4U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
            vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 = 0U;
            vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
            vlSelf->soclinux_core_crc7_inserter_crc_reset = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->builder_soclinux_sdcore_next_state = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
            vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 = 0U;
            vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
            vlSelf->soclinux_core_crc7_inserter_crc_reset = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->builder_soclinux_sdcore_next_state = 1U;
            }
        } else if (vlSelf->soclinux_datar_source_source_valid) {
            if (((0U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)) 
                 | (5U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)))) {
                vlSelf->soclinux_datar_source_source_ready 
                    = ((IData)(vlSelf->soclinux_datar_source_source_payload_drop) 
                       || (IData)(vlSelf->soclinux_core_source_ready));
                if (((IData)(vlSelf->soclinux_datar_source_source_last) 
                     & (IData)(vlSelf->soclinux_datar_source_source_ready))) {
                    vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 
                        = ((IData)(1U) + vlSelf->soclinux_core_data_count);
                    vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
                    if ((vlSelf->soclinux_core_data_count 
                         == (vlSelf->soclinux_core_block_count_storage 
                             - (IData)(1U)))) {
                        vlSelf->builder_soclinux_sdcore_next_state = 0U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->soclinux_datar_source_source_payload_status))) {
                vlSelf->soclinux_datar_source_source_ready = 1U;
                vlSelf->builder_soclinux_sdcore_next_state = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_dataw_sink_valid = vlSelf->soclinux_core_sink_valid;
            vlSelf->soclinux_dataw_sink_last = vlSelf->soclinux_core_sink_last;
            vlSelf->soclinux_dataw_sink_payload_last_block 
                = (vlSelf->soclinux_core_data_count 
                   == (vlSelf->soclinux_core_block_count_storage 
                       - (IData)(1U)));
            if ((((IData)(vlSelf->soclinux_dataw_sink_valid) 
                  & (IData)(vlSelf->soclinux_dataw_sink_ready)) 
                 & (IData)(vlSelf->soclinux_dataw_sink_last))) {
                vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 
                    = ((IData)(1U) + vlSelf->soclinux_core_data_count);
                vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
                if (vlSelf->soclinux_dataw_sink_payload_last_block) {
                    vlSelf->builder_soclinux_sdcore_next_state = 0U;
                }
            }
        } else if (vlSelf->soclinux_cmdr_source_source_valid) {
            if ((1U == (IData)(vlSelf->soclinux_cmdr_source_source_payload_status))) {
                vlSelf->builder_soclinux_sdcore_next_state = 0U;
            } else if (vlSelf->soclinux_cmdr_source_source_last) {
                vlSelf->builder_soclinux_sdcore_next_state 
                    = ((2U == (IData)(vlSelf->soclinux_core_data_type))
                        ? 3U : ((1U == (IData)(vlSelf->soclinux_core_data_type))
                                 ? 4U : 0U));
                if (((IData)(vlSelf->soclinux_core_cmd_crc_en) 
                     & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc_crc) 
                        != (0x7fU & ((IData)(vlSelf->soclinux_cmdr_source_source_payload_data) 
                                     >> 1U))))) {
                    vlSelf->builder_soclinux_sdcore_next_state = 0U;
                }
            } else {
                if ((0U == (IData)(vlSelf->soclinux_core_cmd_count))) {
                    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 1U;
                    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
                }
                vlSelf->soclinux_core_crc7_inserter_crc_enable 
                    = ((2U != (IData)(vlSelf->soclinux_core_cmd_type)) 
                       | (0U < (IData)(vlSelf->soclinux_core_cmd_count)));
            }
        }
    } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        vlSelf->soclinux_cmdw_sink_last = (5U == (IData)(vlSelf->soclinux_core_cmd_count));
        if (vlSelf->soclinux_cmdw_sink_ready) {
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 
                = (7U & ((IData)(1U) + (IData)(vlSelf->soclinux_core_cmd_count)));
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
            if (vlSelf->soclinux_cmdw_sink_last) {
                vlSelf->soclinux_core_crc7_inserter_crc_reset = 1U;
                if ((0U == (IData)(vlSelf->soclinux_core_cmd_type))) {
                    vlSelf->builder_soclinux_sdcore_next_state = 0U;
                } else {
                    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
                    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
                    vlSelf->builder_soclinux_sdcore_next_state = 2U;
                }
            } else {
                vlSelf->soclinux_core_crc7_inserter_crc_enable = 1U;
            }
        }
    } else {
        vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
        vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
        vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 = 0U;
        vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
        vlSelf->soclinux_core_crc7_inserter_crc_reset = 1U;
        if (vlSelf->soclinux_core_cmd_send_re) {
            vlSelf->builder_soclinux_sdcore_next_state = 1U;
        }
    }
    vlSelf->soclinux_cmdw_sink_ready = 0U;
    vlSelf->builder_soclinux_sdphycmdw_next_state = 0U;
    vlSelf->builder_soclinux_sdphycmdw_next_state = vlSelf->builder_soclinux_sdphycmdw_state;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_sink_valid) {
            if (vlSelf->soclinux_cmdw_pads_out_ready) {
                if ((7U == (IData)(vlSelf->soclinux_cmdw_count))) {
                    vlSelf->soclinux_cmdw_sink_ready = 1U;
                    if (vlSelf->soclinux_cmdw_sink_last) {
                        if ((0U == (IData)(vlSelf->soclinux_cmdw_sink_payload_cmd_type))) {
                            vlSelf->soclinux_cmdw_sink_ready = 0U;
                            vlSelf->builder_soclinux_sdphycmdw_next_state = 2U;
                        } else {
                            vlSelf->builder_soclinux_sdphycmdw_next_state = 0U;
                        }
                    }
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_pads_out_ready) {
            if ((7U == (IData)(vlSelf->soclinux_cmdw_count))) {
                vlSelf->soclinux_cmdw_sink_ready = 1U;
                vlSelf->builder_soclinux_sdphycmdw_next_state = 0U;
            }
        }
    } else if (((IData)(vlSelf->soclinux_cmdw_sink_valid) 
                & (IData)(vlSelf->soclinux_cmdw_pads_out_ready))) {
        vlSelf->builder_soclinux_sdphycmdw_next_state = 1U;
    }
    vlSelf->soclinux_dataw_sink_ready = 0U;
    vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 0U;
    vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
    vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
    vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 0U;
    vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
    vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 0U;
    vlSelf->soclinux_dataw_stop = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    vlSelf->soclinux_dataw_stop = (1U 
                                                   & (~ (IData)(vlSelf->soclinux_dataw_sink_valid)));
                }
            }
        }
    }
    vlSelf->builder_soclinux_sdphydataw_next_state = 0U;
    vlSelf->builder_soclinux_sdphydataw_next_state 
        = vlSelf->builder_soclinux_sdphydataw_state;
    if ((8U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    if (vlSelf->__VdfgExtracted_h00d219e4__0) {
                        vlSelf->soclinux_dataw_sink_ready = 1U;
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                 & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                vlSelf->builder_soclinux_sdphydataw_next_state = 1U;
            }
        } else if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                 & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                vlSelf->builder_soclinux_sdphydataw_next_state = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                 & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                vlSelf->builder_soclinux_sdphydataw_next_state = 1U;
            }
        } else if (vlSelf->__VdfgExtracted_h00d219e4__0) {
            vlSelf->builder_soclinux_sdphydataw_next_state 
                = ((IData)(vlSelf->soclinux_dataw_sink_payload_last_block)
                    ? 0U : 1U);
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    if ((1U == (IData)(vlSelf->soclinux_data_width0))) {
                        if (vlSelf->soclinux_dataw_pads_out_ready) {
                            if ((1U == (IData)(vlSelf->soclinux_dataw_count))) {
                                if ((1U & (~ (IData)(vlSelf->soclinux_dataw_sink_last)))) {
                                    vlSelf->soclinux_dataw_sink_ready = 1U;
                                }
                            }
                        }
                    } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                        if ((7U == (IData)(vlSelf->soclinux_dataw_count))) {
                            if ((1U & (~ (IData)(vlSelf->soclinux_dataw_sink_last)))) {
                                vlSelf->soclinux_dataw_sink_ready = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    if (vlSelf->soclinux_dataw_crc_source_valid) {
                        if ((2U != (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                          >> 5U)))) {
                            if ((5U != (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                              >> 5U)))) {
                                if ((6U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                                  >> 5U)))) {
                                    vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                                    vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 1U;
                                }
                            }
                            if ((5U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                              >> 5U)))) {
                                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 1U;
                                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                            }
                        }
                        if ((2U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                          >> 5U)))) {
                            vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 1U;
                            vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                        }
                    }
                }
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    if (vlSelf->soclinux_dataw_pads_out_ready) {
                        if ((7U == (IData)(vlSelf->soclinux_dataw_count))) {
                            vlSelf->builder_soclinux_sdphydataw_next_state = 8U;
                        }
                    }
                } else if (vlSelf->soclinux_dataw_crc_source_valid) {
                    vlSelf->builder_soclinux_sdphydataw_next_state 
                        = ((IData)(vlSelf->soclinux_dataw_sink_payload_last_block)
                            ? 7U : 8U);
                }
            } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if (vlSelf->soclinux_dataw_pads_out_ready) {
                    vlSelf->builder_soclinux_sdphydataw_next_state = 6U;
                }
            } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                if ((0xfU == (IData)(vlSelf->soclinux_dataw_count))) {
                    vlSelf->builder_soclinux_sdphydataw_next_state = 5U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                         & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                        vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                        vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
                        vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
                        vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                        vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
                        vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                    }
                }
            }
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    if ((1U == (IData)(vlSelf->soclinux_data_width0))) {
                        if (vlSelf->soclinux_dataw_pads_out_ready) {
                            if ((1U == (IData)(vlSelf->soclinux_dataw_count))) {
                                if (vlSelf->soclinux_dataw_sink_last) {
                                    vlSelf->builder_soclinux_sdphydataw_next_state = 4U;
                                }
                            }
                        }
                    } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                        if ((7U == (IData)(vlSelf->soclinux_dataw_count))) {
                            if (vlSelf->soclinux_dataw_sink_last) {
                                vlSelf->builder_soclinux_sdphydataw_next_state = 4U;
                            }
                        }
                    }
                } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                    vlSelf->builder_soclinux_sdphydataw_next_state = 3U;
                }
            } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if (vlSelf->soclinux_dataw_pads_out_ready) {
                    if ((1U == (IData)(vlSelf->soclinux_dataw_count))) {
                        vlSelf->builder_soclinux_sdphydataw_next_state = 2U;
                    }
                }
            } else if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                        & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                vlSelf->builder_soclinux_sdphydataw_next_state = 1U;
            }
        }
    }
    vlSelf->soclinux_core_sink_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
                vlSelf->soclinux_core_sink_ready = vlSelf->soclinux_dataw_sink_ready;
            }
        }
    }
    vlSelf->soclinux_clocker_stop = ((IData)(vlSelf->soclinux_datar_stop) 
                                     | (IData)(vlSelf->soclinux_dataw_stop));
    vlSelf->soclinux_mem2block_fifo_re = vlSelf->soclinux_core_sink_ready;
    vlSelf->soclinux_mem2block_source_source_ready 
        = vlSelf->soclinux_core_sink_ready;
    vlSelf->soclinux_mem2block_fifo_source_ready = vlSelf->soclinux_core_sink_ready;
    vlSelf->soclinux_mem2block_fifo_syncfifo_re = ((IData)(vlSelf->soclinux_mem2block_fifo_syncfifo_readable) 
                                                   & ((~ (IData)(vlSelf->soclinux_mem2block_fifo_readable)) 
                                                      | (IData)(vlSelf->soclinux_core_sink_ready)));
    vlSelf->soclinux_mem2block_fifo_do_read = ((IData)(vlSelf->soclinux_mem2block_fifo_syncfifo_readable) 
                                               & (IData)(vlSelf->soclinux_mem2block_fifo_syncfifo_re));
    vlSelf->soclinux_mem2block_fifo_rdport_re = vlSelf->soclinux_mem2block_fifo_do_read;
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__0(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__PLLE2_ADV__DOT__lock_cnt;
    __Vdly__PLLE2_ADV__DOT__lock_cnt = 0;
    // Body
    __Vdly__PLLE2_ADV__DOT__lock_cnt = vlSelf->PLLE2_ADV__DOT__lock_cnt;
    vlSelf->FDCE_7__DOT__Q = vlSelf->builder_soclinux_reset6;
    vlSelf->FDCE_6__DOT__Q = vlSelf->builder_soclinux_reset5;
    vlSelf->FDCE_5__DOT__Q = vlSelf->builder_soclinux_reset4;
    vlSelf->FDCE_4__DOT__Q = vlSelf->builder_soclinux_reset3;
    vlSelf->FDCE_3__DOT__Q = vlSelf->builder_soclinux_reset2;
    vlSelf->FDCE_2__DOT__Q = vlSelf->builder_soclinux_reset1;
    vlSelf->FDCE_1__DOT__Q = vlSelf->builder_soclinux_reset0;
    vlSelf->FDCE__DOT__Q = vlSelf->main_crg_reset;
    if ((0xaU > (IData)(vlSelf->PLLE2_ADV__DOT__lock_cnt))) {
        __Vdly__PLLE2_ADV__DOT__lock_cnt = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->PLLE2_ADV__DOT__lock_cnt)));
    }
    if ((9U == (IData)(vlSelf->PLLE2_ADV__DOT__lock_cnt))) {
        vlSelf->PLLE2_ADV__DOT__locked_reg = 1U;
    }
    vlSelf->PLLE2_ADV__DOT__lock_cnt = __Vdly__PLLE2_ADV__DOT__lock_cnt;
    vlSelf->builder_soclinux_reset7 = vlSelf->FDCE_7__DOT__Q;
    vlSelf->builder_soclinux_reset6 = vlSelf->FDCE_6__DOT__Q;
    vlSelf->builder_soclinux_reset5 = vlSelf->FDCE_5__DOT__Q;
    vlSelf->builder_soclinux_reset4 = vlSelf->FDCE_4__DOT__Q;
    vlSelf->builder_soclinux_reset3 = vlSelf->FDCE_3__DOT__Q;
    vlSelf->builder_soclinux_reset2 = vlSelf->FDCE_2__DOT__Q;
    vlSelf->builder_soclinux_reset1 = vlSelf->FDCE_1__DOT__Q;
    vlSelf->builder_soclinux_reset0 = vlSelf->FDCE__DOT__Q;
    vlSelf->main_crg_locked = vlSelf->PLLE2_ADV__DOT__locked_reg;
    vlSelf->PLLE2_ADV__DOT__LOCKED = vlSelf->PLLE2_ADV__DOT__locked_reg;
    vlSelf->PLLE2_ADV__DOT__RST = vlSelf->builder_soclinux_reset7;
    vlSelf->FDCE_7__DOT__D = vlSelf->builder_soclinux_reset6;
    vlSelf->FDCE_6__DOT__D = vlSelf->builder_soclinux_reset5;
    vlSelf->FDCE_5__DOT__D = vlSelf->builder_soclinux_reset4;
    vlSelf->FDCE_4__DOT__D = vlSelf->builder_soclinux_reset3;
    vlSelf->FDCE_3__DOT__D = vlSelf->builder_soclinux_reset2;
    vlSelf->FDCE_2__DOT__D = vlSelf->builder_soclinux_reset1;
    vlSelf->FDCE_1__DOT__D = vlSelf->builder_soclinux_reset0;
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__1(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__1\n"); );
    // Init
    CData/*0:0*/ __VdfgExtracted_h12075b80__0;
    __VdfgExtracted_h12075b80__0 = 0;
    CData/*2:0*/ __Vdly__main_syncfifo1_level;
    __Vdly__main_syncfifo1_level = 0;
    CData/*2:0*/ __Vdly__main_syncfifo0_level;
    __Vdly__main_syncfifo0_level = 0;
    CData/*1:0*/ __Vdlyvdim0__storage_2__v0;
    __Vdlyvdim0__storage_2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__storage_2__v0;
    __Vdlyvval__storage_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__storage_2__v0;
    __Vdlyvset__storage_2__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__storage_3__v0;
    __Vdlyvdim0__storage_3__v0 = 0;
    SData/*9:0*/ __Vdlyvval__storage_3__v0;
    __Vdlyvval__storage_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__storage_3__v0;
    __Vdlyvset__storage_3__v0 = 0;
    // Body
    vlSelf->__Vdlyvset__storage_5__v0 = 0U;
    __Vdly__main_syncfifo1_level = vlSelf->main_syncfifo1_level;
    __Vdlyvset__storage_3__v0 = 0U;
    __Vdly__main_syncfifo0_level = vlSelf->main_syncfifo0_level;
    __Vdlyvset__storage_2__v0 = 0U;
    if (vlSelf->main_rx_cdc_cdc_wrport_we) {
        vlSelf->__Vdlyvval__storage_5__v0 = vlSelf->main_rx_cdc_cdc_wrport_dat_w;
        vlSelf->__Vdlyvset__storage_5__v0 = 1U;
        vlSelf->__Vdlyvdim0__storage_5__v0 = vlSelf->main_rx_cdc_cdc_wrport_adr;
    }
    if ((((IData)(vlSelf->main_syncfifo1_syncfifo1_we) 
          & (IData)(vlSelf->main_syncfifo1_syncfifo1_writable)) 
         & (~ (IData)(vlSelf->main_syncfifo1_replace)))) {
        vlSelf->main_syncfifo1_produce = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->main_syncfifo1_produce)));
        if ((1U & (~ (IData)(vlSelf->main_syncfifo1_do_read)))) {
            __Vdly__main_syncfifo1_level = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->main_syncfifo1_level)));
        }
    } else if (vlSelf->main_syncfifo1_do_read) {
        __Vdly__main_syncfifo1_level = (7U & ((IData)(vlSelf->main_syncfifo1_level) 
                                              - (IData)(1U)));
    }
    if ((((IData)(vlSelf->main_syncfifo0_syncfifo0_we) 
          & (IData)(vlSelf->main_syncfifo0_syncfifo0_writable)) 
         & (~ (IData)(vlSelf->main_syncfifo0_replace)))) {
        vlSelf->main_syncfifo0_produce = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->main_syncfifo0_produce)));
        if ((1U & (~ (IData)(vlSelf->main_syncfifo0_do_read)))) {
            __Vdly__main_syncfifo0_level = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->main_syncfifo0_level)));
        }
    } else if (vlSelf->main_syncfifo0_do_read) {
        __Vdly__main_syncfifo0_level = (7U & ((IData)(vlSelf->main_syncfifo0_level) 
                                              - (IData)(1U)));
    }
    vlSelf->main_hyperramsdrphy_phase = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->main_hyperramsdrphy_phase)));
    if (vlSelf->main_syncfifo1_do_read) {
        vlSelf->main_syncfifo1_consume = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->main_syncfifo1_consume)));
    }
    if (vlSelf->main_syncfifo1_wrport_we) {
        __Vdlyvval__storage_3__v0 = vlSelf->main_syncfifo1_wrport_dat_w;
        __Vdlyvset__storage_3__v0 = 1U;
        __Vdlyvdim0__storage_3__v0 = vlSelf->main_syncfifo1_wrport_adr;
    }
    if (vlSelf->main_syncfifo0_do_read) {
        vlSelf->main_syncfifo0_consume = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->main_syncfifo0_consume)));
    }
    if (vlSelf->main_syncfifo0_wrport_we) {
        __Vdlyvval__storage_2__v0 = vlSelf->main_syncfifo0_wrport_dat_w;
        __Vdlyvset__storage_2__v0 = 1U;
        __Vdlyvdim0__storage_2__v0 = vlSelf->main_syncfifo0_wrport_adr;
    }
    vlSelf->builder_impl_xilinxmultiregimpl2 = vlSelf->main_hyperramsdrphy_ios_rst_n;
    vlSelf->builder_impl_xilinxmultiregimpl1 = vlSelf->main_hyperramsdrphy_ios_cs_n;
    vlSelf->storage_5_dat0 = vlSelf->storage_5[vlSelf->main_rx_cdc_cdc_wrport_adr];
    vlSelf->main_rx_cdc_cdc_graycounter0_q_binary = vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary;
    vlSelf->main_tx_cdc_cdc_graycounter1_q_binary = vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary;
    vlSelf->builder_impl_xilinxmultiregimpl3_xilinxmultiregimpl32 
        = vlSelf->builder_impl_xilinxmultiregimpl3_xilinxmultiregimpl31;
    vlSelf->builder_impl_xilinxmultiregimpl222 = vlSelf->builder_impl_xilinxmultiregimpl221;
    vlSelf->builder_impl_xilinxmultiregimpl212 = vlSelf->builder_impl_xilinxmultiregimpl211;
    vlSelf->builder_impl_xilinxmultiregimpl20_xilinxmultiregimpl20 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_dq_i) 
                 >> 7U));
    vlSelf->builder_impl_xilinxmultiregimpl18_xilinxmultiregimpl18 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_dq_i) 
                 >> 6U));
    vlSelf->builder_impl_xilinxmultiregimpl14_xilinxmultiregimpl14 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_dq_i) 
                 >> 4U));
    vlSelf->builder_impl_xilinxmultiregimpl6_xilinxmultiregimpl6 
        = (1U & (IData)(vlSelf->main_hyperramsdrphy_dq_i));
    vlSelf->builder_impl_xilinxmultiregimpl8_xilinxmultiregimpl8 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_dq_i) 
                 >> 1U));
    vlSelf->builder_impl_xilinxmultiregimpl10_xilinxmultiregimpl10 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_dq_i) 
                 >> 2U));
    vlSelf->builder_impl_xilinxmultiregimpl12_xilinxmultiregimpl12 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_dq_i) 
                 >> 3U));
    vlSelf->builder_impl_xilinxmultiregimpl16_xilinxmultiregimpl16 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_dq_i) 
                 >> 5U));
    vlSelf->storage_3_dat0 = vlSelf->storage_3[vlSelf->main_syncfifo1_wrport_adr];
    vlSelf->builder_impl_xilinxmultiregimpl23 = vlSelf->main_hyperramsdrphy_rwds_i;
    vlSelf->builder_impl_xilinxmultiregimpl42 = vlSelf->builder_impl_xilinxmultiregimpl41;
    vlSelf->main_hyperramsdrphy_rwds_i_d = vlSelf->main_hyperramsdrphy_ios_rwds_i;
    vlSelf->builder_impl_xilinxmultiregimpl19_xilinxmultiregimpl192 
        = vlSelf->builder_impl_xilinxmultiregimpl19_xilinxmultiregimpl191;
    vlSelf->builder_impl_xilinxmultiregimpl9_xilinxmultiregimpl92 
        = vlSelf->builder_impl_xilinxmultiregimpl9_xilinxmultiregimpl91;
    vlSelf->builder_impl_xilinxmultiregimpl15_xilinxmultiregimpl152 
        = vlSelf->builder_impl_xilinxmultiregimpl15_xilinxmultiregimpl151;
    vlSelf->builder_impl_xilinxmultiregimpl13_xilinxmultiregimpl132 
        = vlSelf->builder_impl_xilinxmultiregimpl13_xilinxmultiregimpl131;
    vlSelf->builder_impl_xilinxmultiregimpl5_xilinxmultiregimpl52 
        = vlSelf->builder_impl_xilinxmultiregimpl5_xilinxmultiregimpl51;
    vlSelf->builder_impl_xilinxmultiregimpl7_xilinxmultiregimpl72 
        = vlSelf->builder_impl_xilinxmultiregimpl7_xilinxmultiregimpl71;
    vlSelf->builder_impl_xilinxmultiregimpl11_xilinxmultiregimpl112 
        = vlSelf->builder_impl_xilinxmultiregimpl11_xilinxmultiregimpl111;
    vlSelf->builder_impl_xilinxmultiregimpl17_xilinxmultiregimpl172 
        = vlSelf->builder_impl_xilinxmultiregimpl17_xilinxmultiregimpl171;
    vlSelf->storage_2_dat0 = vlSelf->storage_2[vlSelf->main_syncfifo0_wrport_adr];
    vlSelf->builder_soclinux_clockdomainsrenamer_state 
        = vlSelf->builder_soclinux_clockdomainsrenamer_next_state;
    if (vlSelf->sys2x_rst) {
        vlSelf->main_syncfifo1_produce = 0U;
        vlSelf->main_syncfifo0_produce = 0U;
        vlSelf->main_hyperramsdrphy_phase = 0U;
        __Vdly__main_syncfifo1_level = 0U;
        vlSelf->main_syncfifo1_consume = 0U;
        vlSelf->main_syncfifo0_consume = 0U;
        __Vdly__main_syncfifo0_level = 0U;
        vlSelf->main_rx_cdc_cdc_graycounter0_q_binary = 0U;
        vlSelf->main_tx_cdc_cdc_graycounter1_q_binary = 0U;
        vlSelf->main_hyperramsdrphy_rwds_i_d = 0U;
        vlSelf->builder_soclinux_clockdomainsrenamer_state = 0U;
    }
    vlSelf->storage_4_dat1 = vlSelf->storage_4[vlSelf->main_tx_cdc_cdc_rdport_adr];
    vlSelf->builder_impl_xilinxmultiregimpl271 = vlSelf->builder_impl_xilinxmultiregimpl270;
    vlSelf->builder_impl_xilinxmultiregimpl241 = vlSelf->builder_impl_xilinxmultiregimpl240;
    vlSelf->main_syncfifo1_level = __Vdly__main_syncfifo1_level;
    vlSelf->main_syncfifo0_level = __Vdly__main_syncfifo0_level;
    if (__Vdlyvset__storage_3__v0) {
        vlSelf->storage_3[__Vdlyvdim0__storage_3__v0] 
            = __Vdlyvval__storage_3__v0;
    }
    if (__Vdlyvset__storage_2__v0) {
        vlSelf->storage_2[__Vdlyvdim0__storage_2__v0] 
            = __Vdlyvval__storage_2__v0;
    }
    vlSelf->main_syncfifo1_wrport_adr = 0U;
    vlSelf->main_syncfifo1_wrport_adr = (3U & ((IData)(vlSelf->main_syncfifo1_replace)
                                                ? ((IData)(vlSelf->main_syncfifo1_produce) 
                                                   - (IData)(1U))
                                                : (IData)(vlSelf->main_syncfifo1_produce)));
    vlSelf->main_syncfifo0_wrport_adr = 0U;
    vlSelf->main_syncfifo0_wrport_adr = (3U & ((IData)(vlSelf->main_syncfifo0_replace)
                                                ? ((IData)(vlSelf->main_syncfifo0_produce) 
                                                   - (IData)(1U))
                                                : (IData)(vlSelf->main_syncfifo0_produce)));
    vlSelf->main_hyperramsdrphy_fall = (1U == (IData)(vlSelf->main_hyperramsdrphy_phase));
    vlSelf->main_hyperramsdrphy_rise = (3U == (IData)(vlSelf->main_hyperramsdrphy_phase));
    vlSelf->main_hyperramsdrphy_source_ready = (4U 
                                                != (IData)(vlSelf->main_syncfifo1_level));
    vlSelf->main_rx_cdc_cdc_asyncfifo_we = (0U != (IData)(vlSelf->main_syncfifo1_level));
    vlSelf->main_syncfifo1_rdport_adr = vlSelf->main_syncfifo1_consume;
    vlSelf->main_syncfifo0_rdport_adr = vlSelf->main_syncfifo0_consume;
    vlSelf->main_syncfifo0_syncfifo0_writable = (4U 
                                                 != (IData)(vlSelf->main_syncfifo0_level));
    vlSelf->main_hyperramsdrphy_sink_valid = (0U != (IData)(vlSelf->main_syncfifo0_level));
    vlSelf->hyperram0_rst_n = vlSelf->builder_impl_xilinxmultiregimpl2;
    vlSelf->hyperram0_cs_n = vlSelf->builder_impl_xilinxmultiregimpl1;
    vlSelf->main_rx_cdc_cdc_wrport_dat_r = vlSelf->storage_5_dat0;
    vlSelf->main_rx_cdc_cdc_wrport_adr = (3U & (IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q_binary));
    vlSelf->hyperram0_clk = vlSelf->builder_impl_xilinxmultiregimpl3_xilinxmultiregimpl32;
    vlSelf->builder_impl_xilinxmultiregimpl3_xilinxmultiregimpl31 
        = vlSelf->builder_impl_xilinxmultiregimpl3_xilinxmultiregimpl30;
    vlSelf->main_hyperramsdrphy_rwds_o = vlSelf->builder_impl_xilinxmultiregimpl222;
    vlSelf->builder_impl_xilinxmultiregimpl221 = vlSelf->builder_impl_xilinxmultiregimpl220;
    vlSelf->main_hyperramsdrphy_rwds_oe = vlSelf->builder_impl_xilinxmultiregimpl212;
    vlSelf->builder_impl_xilinxmultiregimpl211 = vlSelf->builder_impl_xilinxmultiregimpl210;
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
    vlSelf->main_syncfifo1_wrport_dat_r = vlSelf->storage_3_dat0;
    vlSelf->main_rx_cdc_cdc_wrport_dat_w = vlSelf->storage_3
        [vlSelf->main_syncfifo1_consume];
    vlSelf->main_syncfifo1_syncfifo1_dout = vlSelf->storage_3
        [vlSelf->main_syncfifo1_consume];
    vlSelf->main_syncfifo1_rdport_dat_r = vlSelf->storage_3
        [vlSelf->main_syncfifo1_consume];
    vlSelf->main_rx_cdc_cdc_asyncfifo_din = vlSelf->storage_3
        [vlSelf->main_syncfifo1_consume];
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
    vlSelf->main_hyperramsdrphy_ios_rwds_i = vlSelf->builder_impl_xilinxmultiregimpl23;
    vlSelf->builder_impl_xilinxmultiregimpl41 = vlSelf->builder_impl_xilinxmultiregimpl40;
    vlSelf->main_hyperramsdrphy_dq_oe = vlSelf->builder_impl_xilinxmultiregimpl42;
    vlSelf->builder_impl_xilinxmultiregimpl19_xilinxmultiregimpl191 
        = vlSelf->builder_impl_xilinxmultiregimpl19_xilinxmultiregimpl190;
    vlSelf->builder_impl_xilinxmultiregimpl9_xilinxmultiregimpl91 
        = vlSelf->builder_impl_xilinxmultiregimpl9_xilinxmultiregimpl90;
    vlSelf->builder_impl_xilinxmultiregimpl15_xilinxmultiregimpl151 
        = vlSelf->builder_impl_xilinxmultiregimpl15_xilinxmultiregimpl150;
    vlSelf->builder_impl_xilinxmultiregimpl13_xilinxmultiregimpl131 
        = vlSelf->builder_impl_xilinxmultiregimpl13_xilinxmultiregimpl130;
    vlSelf->builder_impl_xilinxmultiregimpl5_xilinxmultiregimpl51 
        = vlSelf->builder_impl_xilinxmultiregimpl5_xilinxmultiregimpl50;
    vlSelf->builder_impl_xilinxmultiregimpl7_xilinxmultiregimpl71 
        = vlSelf->builder_impl_xilinxmultiregimpl7_xilinxmultiregimpl70;
    vlSelf->builder_impl_xilinxmultiregimpl11_xilinxmultiregimpl111 
        = vlSelf->builder_impl_xilinxmultiregimpl11_xilinxmultiregimpl110;
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
    vlSelf->builder_impl_xilinxmultiregimpl17_xilinxmultiregimpl171 
        = vlSelf->builder_impl_xilinxmultiregimpl17_xilinxmultiregimpl170;
    vlSelf->main_syncfifo0_wrport_dat_r = vlSelf->storage_2_dat0;
    vlSelf->main_syncfifo0_syncfifo0_dout = vlSelf->storage_2
        [vlSelf->main_syncfifo0_consume];
    vlSelf->main_syncfifo0_rdport_dat_r = vlSelf->storage_2
        [vlSelf->main_syncfifo0_consume];
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
    vlSelf->main_hyperramsdrphy_sink_payload_dq_oe 
        = (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
                 >> 0xbU));
    vlSelf->main_hyperramsdrphy_sink_payload_rwds = 
        (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
               >> 0xcU));
    vlSelf->main_hyperramsdrphy_sink_payload_rwds_oe 
        = (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
                 >> 0xdU));
    vlSelf->main_hyperramsdrphy_sink_payload_dq = (0xffU 
                                                   & (vlSelf->storage_2
                                                      [vlSelf->main_syncfifo0_consume] 
                                                      >> 3U));
    vlSelf->main_hyperramsdrphy_sink_payload_dat_r 
        = (1U & (vlSelf->storage_2[vlSelf->main_syncfifo0_consume] 
                 >> 2U));
    vlSelf->main_hyperramsdrphy_ios_cs_n = 0U;
    vlSelf->main_hyperramsdrphy_source_last = 0U;
    vlSelf->main_syncfifo0_wrport_dat_w = vlSelf->storage_4_dat1;
    vlSelf->main_syncfifo0_syncfifo0_din = vlSelf->storage_4_dat1;
    vlSelf->main_tx_cdc_cdc_asyncfifo_dout = vlSelf->storage_4_dat1;
    vlSelf->main_tx_cdc_cdc_rdport_dat_r = vlSelf->storage_4_dat1;
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
    vlSelf->main_rx_cdc_cdc_consume_wdomain = vlSelf->builder_impl_xilinxmultiregimpl271;
    vlSelf->builder_impl_xilinxmultiregimpl270 = vlSelf->main_rx_cdc_cdc_graycounter1_q;
    vlSelf->main_tx_cdc_cdc_produce_rdomain = vlSelf->builder_impl_xilinxmultiregimpl241;
    vlSelf->builder_impl_xilinxmultiregimpl240 = vlSelf->main_tx_cdc_cdc_graycounter0_q;
    vlSelf->main_syncfifo1_syncfifo1_writable = vlSelf->main_hyperramsdrphy_source_ready;
    vlSelf->main_syncfifo1_sink_ready = vlSelf->main_hyperramsdrphy_source_ready;
    vlSelf->main_syncfifo1_syncfifo1_readable = vlSelf->main_rx_cdc_cdc_asyncfifo_we;
    vlSelf->main_syncfifo1_source_valid = vlSelf->main_rx_cdc_cdc_asyncfifo_we;
    vlSelf->main_rx_cdc_sink_sink_valid = vlSelf->main_rx_cdc_cdc_asyncfifo_we;
    vlSelf->main_rx_cdc_cdc_sink_valid = vlSelf->main_rx_cdc_cdc_asyncfifo_we;
    vlSelf->main_syncfifo0_sink_ready = vlSelf->main_syncfifo0_syncfifo0_writable;
    vlSelf->main_tx_cdc_source_source_ready = vlSelf->main_syncfifo0_syncfifo0_writable;
    vlSelf->main_tx_cdc_cdc_source_ready = vlSelf->main_syncfifo0_syncfifo0_writable;
    vlSelf->main_tx_cdc_cdc_asyncfifo_re = vlSelf->main_syncfifo0_syncfifo0_writable;
    vlSelf->main_syncfifo0_syncfifo0_readable = vlSelf->main_hyperramsdrphy_sink_valid;
    vlSelf->main_syncfifo0_source_valid = vlSelf->main_hyperramsdrphy_sink_valid;
    vlSelf->builder_soclinux_clockdomainsrenamer_next_state = 0U;
    vlSelf->builder_soclinux_clockdomainsrenamer_next_state 
        = vlSelf->builder_soclinux_clockdomainsrenamer_state;
    vlSelf->main_hyperramsdrphy_sink_ready = 0U;
    vlSelf->main_syncfifo1_fifo_out_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
    vlSelf->main_syncfifo1_source_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
    vlSelf->main_rx_cdc_sink_sink_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
    vlSelf->main_rx_cdc_cdc_sink_last = vlSelf->main_rx_cdc_cdc_fifo_in_last;
    vlSelf->main_syncfifo1_fifo_out_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
    vlSelf->main_syncfifo1_source_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
    vlSelf->main_rx_cdc_sink_sink_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
    vlSelf->main_rx_cdc_cdc_sink_first = vlSelf->main_rx_cdc_cdc_fifo_in_first;
    vlSelf->main_syncfifo1_fifo_out_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
    vlSelf->main_syncfifo1_source_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
    vlSelf->main_rx_cdc_sink_sink_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
    vlSelf->main_rx_cdc_cdc_sink_payload_dq = vlSelf->main_rx_cdc_cdc_fifo_in_payload_dq;
    vlSelf->main_syncfifo0_fifo_out_last = vlSelf->main_hyperramsdrphy_sink_last;
    vlSelf->main_syncfifo0_source_last = vlSelf->main_hyperramsdrphy_sink_last;
    vlSelf->main_syncfifo0_fifo_out_first = vlSelf->main_hyperramsdrphy_sink_first;
    vlSelf->main_syncfifo0_source_first = vlSelf->main_hyperramsdrphy_sink_first;
    vlSelf->main_syncfifo0_fifo_out_payload_dat_w = vlSelf->main_hyperramsdrphy_sink_payload_dat_w;
    vlSelf->main_syncfifo0_source_payload_dat_w = vlSelf->main_hyperramsdrphy_sink_payload_dat_w;
    vlSelf->main_syncfifo0_fifo_out_payload_cmd = vlSelf->main_hyperramsdrphy_sink_payload_cmd;
    vlSelf->main_syncfifo0_source_payload_cmd = vlSelf->main_hyperramsdrphy_sink_payload_cmd;
    vlSelf->main_syncfifo0_fifo_out_payload_dq_oe = vlSelf->main_hyperramsdrphy_sink_payload_dq_oe;
    vlSelf->main_syncfifo0_source_payload_dq_oe = vlSelf->main_hyperramsdrphy_sink_payload_dq_oe;
    vlSelf->main_syncfifo0_fifo_out_payload_rwds = vlSelf->main_hyperramsdrphy_sink_payload_rwds;
    vlSelf->main_syncfifo0_source_payload_rwds = vlSelf->main_hyperramsdrphy_sink_payload_rwds;
    vlSelf->main_syncfifo0_fifo_out_payload_rwds_oe 
        = vlSelf->main_hyperramsdrphy_sink_payload_rwds_oe;
    vlSelf->main_syncfifo0_source_payload_rwds_oe = vlSelf->main_hyperramsdrphy_sink_payload_rwds_oe;
    vlSelf->main_syncfifo0_fifo_out_payload_dq = vlSelf->main_hyperramsdrphy_sink_payload_dq;
    vlSelf->main_syncfifo0_source_payload_dq = vlSelf->main_hyperramsdrphy_sink_payload_dq;
    vlSelf->main_syncfifo0_fifo_out_payload_dat_r = vlSelf->main_hyperramsdrphy_sink_payload_dat_r;
    vlSelf->main_syncfifo0_source_payload_dat_r = vlSelf->main_hyperramsdrphy_sink_payload_dat_r;
    __VdfgExtracted_h12075b80__0 = ((IData)(vlSelf->main_hyperramsdrphy_sink_valid) 
                                    & (IData)(vlSelf->main_hyperramsdrphy_sink_payload_dat_r));
    if ((1U != (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
        if ((2U != (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
            vlSelf->main_hyperramsdrphy_ios_cs_n = 1U;
        }
        if ((2U == (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
            vlSelf->main_hyperramsdrphy_source_last = 1U;
        }
    }
    vlSelf->main_syncfifo1_fifo_in_last = vlSelf->main_hyperramsdrphy_source_last;
    vlSelf->main_syncfifo1_sink_last = vlSelf->main_hyperramsdrphy_source_last;
    vlSelf->main_syncfifo0_sink_last = vlSelf->main_syncfifo0_fifo_in_last;
    vlSelf->main_tx_cdc_cdc_source_last = vlSelf->main_syncfifo0_fifo_in_last;
    vlSelf->main_tx_cdc_source_source_last = vlSelf->main_syncfifo0_fifo_in_last;
    vlSelf->main_tx_cdc_cdc_fifo_out_last = vlSelf->main_syncfifo0_fifo_in_last;
    vlSelf->main_syncfifo0_sink_first = vlSelf->main_syncfifo0_fifo_in_first;
    vlSelf->main_tx_cdc_cdc_source_first = vlSelf->main_syncfifo0_fifo_in_first;
    vlSelf->main_tx_cdc_source_source_first = vlSelf->main_syncfifo0_fifo_in_first;
    vlSelf->main_tx_cdc_cdc_fifo_out_first = vlSelf->main_syncfifo0_fifo_in_first;
    vlSelf->main_syncfifo0_sink_payload_rwds_oe = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
    vlSelf->main_tx_cdc_cdc_source_payload_rwds_oe 
        = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
    vlSelf->main_tx_cdc_source_source_payload_rwds_oe 
        = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
    vlSelf->main_tx_cdc_cdc_fifo_out_payload_rwds_oe 
        = vlSelf->main_syncfifo0_fifo_in_payload_rwds_oe;
    vlSelf->main_syncfifo0_sink_payload_rwds = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
    vlSelf->main_tx_cdc_cdc_source_payload_rwds = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
    vlSelf->main_tx_cdc_source_source_payload_rwds 
        = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
    vlSelf->main_tx_cdc_cdc_fifo_out_payload_rwds = vlSelf->main_syncfifo0_fifo_in_payload_rwds;
    vlSelf->main_syncfifo0_sink_payload_dq_oe = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
    vlSelf->main_tx_cdc_cdc_source_payload_dq_oe = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
    vlSelf->main_tx_cdc_source_source_payload_dq_oe 
        = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
    vlSelf->main_tx_cdc_cdc_fifo_out_payload_dq_oe 
        = vlSelf->main_syncfifo0_fifo_in_payload_dq_oe;
    vlSelf->main_syncfifo0_sink_payload_dq = vlSelf->main_syncfifo0_fifo_in_payload_dq;
    vlSelf->main_tx_cdc_cdc_source_payload_dq = vlSelf->main_syncfifo0_fifo_in_payload_dq;
    vlSelf->main_tx_cdc_source_source_payload_dq = vlSelf->main_syncfifo0_fifo_in_payload_dq;
    vlSelf->main_tx_cdc_cdc_fifo_out_payload_dq = vlSelf->main_syncfifo0_fifo_in_payload_dq;
    vlSelf->main_syncfifo0_sink_payload_dat_r = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
    vlSelf->main_tx_cdc_cdc_source_payload_dat_r = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
    vlSelf->main_tx_cdc_source_source_payload_dat_r 
        = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
    vlSelf->main_tx_cdc_cdc_fifo_out_payload_dat_r 
        = vlSelf->main_syncfifo0_fifo_in_payload_dat_r;
    vlSelf->main_syncfifo0_sink_payload_dat_w = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
    vlSelf->main_tx_cdc_cdc_source_payload_dat_w = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
    vlSelf->main_tx_cdc_source_source_payload_dat_w 
        = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
    vlSelf->main_tx_cdc_cdc_fifo_out_payload_dat_w 
        = vlSelf->main_syncfifo0_fifo_in_payload_dat_w;
    vlSelf->main_syncfifo0_sink_payload_cmd = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
    vlSelf->main_tx_cdc_cdc_source_payload_cmd = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
    vlSelf->main_tx_cdc_source_source_payload_cmd = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
    vlSelf->main_tx_cdc_cdc_fifo_out_payload_cmd = vlSelf->main_syncfifo0_fifo_in_payload_cmd;
    if ((1U == (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
        if ((1U & (~ (IData)(vlSelf->main_hyperramsdrphy_sink_valid)))) {
            vlSelf->builder_soclinux_clockdomainsrenamer_next_state = 2U;
        }
        if (vlSelf->main_hyperramsdrphy_sink_valid) {
            if (((IData)(vlSelf->main_hyperramsdrphy_rise) 
                 | (IData)(vlSelf->main_hyperramsdrphy_fall))) {
                vlSelf->main_hyperramsdrphy_sink_ready = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
        if (vlSelf->main_hyperramsdrphy_source_ready) {
            vlSelf->builder_soclinux_clockdomainsrenamer_next_state = 0U;
        }
    } else if (((IData)(vlSelf->main_hyperramsdrphy_sink_valid) 
                & (IData)(vlSelf->main_hyperramsdrphy_rise))) {
        vlSelf->builder_soclinux_clockdomainsrenamer_next_state = 1U;
    }
    vlSelf->main_syncfifo0_source_ready = vlSelf->main_hyperramsdrphy_sink_ready;
    vlSelf->main_syncfifo0_syncfifo0_re = vlSelf->main_hyperramsdrphy_sink_ready;
    vlSelf->main_syncfifo0_do_read = ((IData)(vlSelf->main_hyperramsdrphy_sink_valid) 
                                      & (IData)(vlSelf->main_hyperramsdrphy_sink_ready));
    vlSelf->builder_impl_xilinxmultiregimpl3_xilinxmultiregimpl30 
        = ((IData)(vlSelf->main_hyperramsdrphy_ios_clk) 
           & (IData)(vlSelf->hyperram_clk));
    vlSelf->builder_impl_xilinxmultiregimpl220 = vlSelf->main_hyperramsdrphy_ios_rwds_o;
    vlSelf->builder_impl_xilinxmultiregimpl210 = vlSelf->main_hyperramsdrphy_ios_rwds_oe;
    vlSelf->builder_impl_xilinxmultiregimpl40 = vlSelf->main_hyperramsdrphy_ios_dq_oe;
    vlSelf->builder_impl_xilinxmultiregimpl19_xilinxmultiregimpl190 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                 >> 7U));
    vlSelf->builder_impl_xilinxmultiregimpl9_xilinxmultiregimpl90 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                 >> 2U));
    vlSelf->builder_impl_xilinxmultiregimpl15_xilinxmultiregimpl150 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                 >> 5U));
    vlSelf->builder_impl_xilinxmultiregimpl13_xilinxmultiregimpl130 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                 >> 4U));
    vlSelf->builder_impl_xilinxmultiregimpl5_xilinxmultiregimpl50 
        = (1U & (IData)(vlSelf->main_hyperramsdrphy_ios_dq_o));
    vlSelf->builder_impl_xilinxmultiregimpl7_xilinxmultiregimpl70 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                 >> 1U));
    vlSelf->builder_impl_xilinxmultiregimpl11_xilinxmultiregimpl110 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                 >> 3U));
    vlSelf->builder_impl_xilinxmultiregimpl17_xilinxmultiregimpl170 
        = (1U & ((IData)(vlSelf->main_hyperramsdrphy_ios_dq_o) 
                 >> 6U));
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
    vlSelf->hyperram_clk = 0U;
    vlSelf->hyperram_clk = (1U & ((2U & (IData)(vlSelf->main_hyperramsdrphy_phase))
                                   ? (~ (IData)(vlSelf->main_hyperramsdrphy_phase))
                                   : (IData)(vlSelf->main_hyperramsdrphy_phase)));
    vlSelf->main_hyperramsdrphy_ios_clk = 0U;
    vlSelf->main_hyperramsdrphy_ios_rwds_o = 0U;
    vlSelf->main_hyperramsdrphy_ios_rwds_oe = 0U;
    vlSelf->main_hyperramsdrphy_ios_dq_oe = 0U;
    vlSelf->main_hyperramsdrphy_ios_dq_o = 0U;
    if ((1U == (IData)(vlSelf->builder_soclinux_clockdomainsrenamer_state))) {
        if (vlSelf->main_hyperramsdrphy_sink_valid) {
            vlSelf->main_hyperramsdrphy_ios_clk = 1U;
            vlSelf->main_hyperramsdrphy_ios_rwds_o 
                = vlSelf->main_hyperramsdrphy_sink_payload_rwds;
            vlSelf->main_hyperramsdrphy_ios_rwds_oe 
                = vlSelf->main_hyperramsdrphy_sink_payload_rwds_oe;
            vlSelf->main_hyperramsdrphy_ios_dq_oe = vlSelf->main_hyperramsdrphy_sink_payload_dq_oe;
            vlSelf->main_hyperramsdrphy_ios_dq_o = vlSelf->main_hyperramsdrphy_sink_payload_dq;
        }
    }
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
    vlSelf->builder_impl_xilinxmultiregimpl3 = ((IData)(vlSelf->hyperram_clk) 
                                                & (IData)(vlSelf->main_hyperramsdrphy_ios_clk));
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
    vlSelf->main_syncfifo1_syncfifo1_din = vlSelf->main_syncfifo1_wrport_dat_w;
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__2(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__2\n"); );
    // Body
    vlSelf->main_hyperramsdrphy_rwds_i = vlSelf->hyperram0_rwds;
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
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__5(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__5\n"); );
    // Init
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
                vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
                vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 0U;
                vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value6 = 0U;
                vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value_ce6 = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
            vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value_ce0 = 1U;
                vlSelf->soclinux_core_cmd_done_builder_sdcore_next_value0 = 0U;
                vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value6 = 0U;
                vlSelf->soclinux_core_cmd_crc_builder_sdcore_next_value_ce6 = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdcore_state)))) {
            if (vlSelf->soclinux_cmdr_source_source_valid) {
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
    vlSelf->main_tx_cdc_cdc_graycounter0_q_next = (7U 
                                                   & ((IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q_next_binary) 
                                                      ^ 
                                                      VL_SHIFTR_III(3,3,32, (IData)(vlSelf->main_tx_cdc_cdc_graycounter0_q_next_binary), 1U)));
    vlSelf->main_tx_cdc_sink_sink_payload_rwds = vlSelf->main_core_source_source_payload_rwds;
    vlSelf->main_tx_cdc_cdc_sink_payload_rwds = vlSelf->main_core_source_source_payload_rwds;
    vlSelf->main_tx_cdc_cdc_fifo_in_payload_rwds = vlSelf->main_core_source_source_payload_rwds;
    vlSelf->soclinux_clocker_clk0 = ((~ (IData)(vlSelf->soclinux_clocker_clk1)) 
                                     & (IData)(vlSelf->soclinux_clocker_ce_latched));
    vlSelf->soclinux_cmdw_pads_out_payload_cmd_o = 0U;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_sink_valid) {
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
        vlSelf->soclinux_cmdw_pads_out_payload_cmd_o = 1U;
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
    vlSelf->main_soclinux_master_tx_fifo_sink_sink_ready 
        = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_ready;
    vlSelf->main_soclinux_master_tx_ready = vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_ready;
    vlSelf->main_soclinux_master_status_status = 0U;
    vlSelf->main_soclinux_master_status_status = (((IData)(vlSelf->main_soclinux_master_rx_fifo_pipe_valid_source_valid) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->main_soclinux_master_tx_fifo_pipe_valid_sink_ready));
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
    vlSelf->builder_csr_bankarray_csrbank4_master_status_w 
        = vlSelf->main_soclinux_master_status_status;
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

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__6(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__6\n"); );
    // Body
    vlSelf->IOBUF_4__DOT__IO = vlSelf->sdcard_cmd;
    vlSelf->IOBUF_4__DOT__O = vlSelf->sdcard_cmd;
    vlSelf->builder_impl_xilinxsdrtristateimpl1___05Fi 
        = vlSelf->sdcard_cmd;
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
    vlSelf->IDDR_4__DOT__D = vlSelf->builder_impl_xilinxsdrtristateimpl1___05Fi;
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
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__7(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__7\n"); );
    // Init
    SData/*10:0*/ __Vdly__spi_wb__DOT__buf_byte_addr;
    __Vdly__spi_wb__DOT__buf_byte_addr = 0;
    CData/*0:0*/ __Vdly__spi_wb__DOT__tx_fetch_pending;
    __Vdly__spi_wb__DOT__tx_fetch_pending = 0;
    CData/*0:0*/ __Vdly__spi_wb__DOT__tx_data_valid;
    __Vdly__spi_wb__DOT__tx_data_valid = 0;
    SData/*10:0*/ __Vdly__spi_wb__DOT__rx_count;
    __Vdly__spi_wb__DOT__rx_count = 0;
    // Body
    __Vdly__spi_wb__DOT__rx_count = vlSelf->spi_wb__DOT__rx_count;
    __Vdly__spi_wb__DOT__tx_fetch_pending = vlSelf->spi_wb__DOT__tx_fetch_pending;
    __Vdly__spi_wb__DOT__buf_byte_addr = vlSelf->spi_wb__DOT__buf_byte_addr;
    __Vdly__spi_wb__DOT__tx_data_valid = vlSelf->spi_wb__DOT__tx_data_valid;
    if (vlSelf->spi_wb__DOT__rst_ni) {
        if (vlSelf->spi_wb__DOT__spi_start) {
            __Vdly__spi_wb__DOT__rx_count = 0U;
            __Vdly__spi_wb__DOT__buf_byte_addr = 0U;
        } else {
            if (((IData)(vlSelf->spi_wb__DOT__spi_data_out_valid) 
                 & (IData)(vlSelf->spi_wb__DOT__spi_data_out_ready))) {
                __Vdly__spi_wb__DOT__rx_count = (0x7ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->spi_wb__DOT__rx_count)));
            }
            if ((((~ (IData)(vlSelf->spi_wb__DOT__spi_idle)) 
                  & (IData)(vlSelf->spi_wb__DOT__spi_data_in_ready)) 
                 & (IData)(vlSelf->spi_wb__DOT__spi_data_in_valid))) {
                __Vdly__spi_wb__DOT__buf_byte_addr 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->spi_wb__DOT__buf_byte_addr)));
            }
        }
        if (((IData)(vlSelf->spi_wb__DOT__spi_start) 
             | (IData)(vlSelf->spi_wb__DOT__spi_idle))) {
            __Vdly__spi_wb__DOT__tx_data_valid = 0U;
        } else if (vlSelf->spi_wb__DOT__tx_fetch_pending) {
            __Vdly__spi_wb__DOT__tx_data_valid = 1U;
        } else if (((IData)(vlSelf->spi_wb__DOT__spi_data_in_ready) 
                    & (IData)(vlSelf->spi_wb__DOT__tx_data_valid))) {
            __Vdly__spi_wb__DOT__tx_data_valid = 0U;
        }
        vlSelf->spi_wb__DOT__tx_byte_lane_q = vlSelf->spi_wb__DOT__buf_byte_lane;
        if (((IData)(vlSelf->spi_wb__DOT__spi_data_out_valid) 
             & (IData)(vlSelf->spi_wb__DOT__spi_data_out_ready))) {
            vlSelf->spi_wb__DOT__rx_byte_data = vlSelf->spi_wb__DOT__spi_data_out;
            vlSelf->spi_wb__DOT__rx_byte_addr = vlSelf->spi_wb__DOT__rx_count;
        }
        vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q 
            = ((IData)(vlSelf->spi_wb__DOT__sw_reset)
                ? 0U : (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_d));
        __Vdly__spi_wb__DOT__tx_fetch_pending = (1U 
                                                 & ((IData)(vlSelf->spi_wb__DOT__spi_start) 
                                                    | (((~ (IData)(vlSelf->spi_wb__DOT__spi_idle)) 
                                                        & (~ (IData)(vlSelf->spi_wb__DOT__tx_data_valid))) 
                                                       & (~ (IData)(vlSelf->spi_wb__DOT__tx_fetch_pending)))));
    } else {
        __Vdly__spi_wb__DOT__rx_count = 0U;
        __Vdly__spi_wb__DOT__buf_byte_addr = 0U;
        __Vdly__spi_wb__DOT__tx_data_valid = 0U;
        vlSelf->spi_wb__DOT__tx_byte_lane_q = 0U;
        vlSelf->spi_wb__DOT__rx_byte_data = 0U;
        vlSelf->spi_wb__DOT__rx_byte_addr = 0U;
        vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q = 0U;
        __Vdly__spi_wb__DOT__tx_fetch_pending = 0U;
    }
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_q 
        = ((IData)(vlSelf->spi_wb__DOT__rst_ni) && (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_d));
    vlSelf->spi_wb__DOT__rx_wr_pending = ((IData)(vlSelf->spi_wb__DOT__rst_ni) 
                                          && ((IData)(vlSelf->spi_wb__DOT__spi_data_out_valid) 
                                              & (IData)(vlSelf->spi_wb__DOT__spi_data_out_ready)));
    vlSelf->spi_wb__DOT__buf_byte_addr = __Vdly__spi_wb__DOT__buf_byte_addr;
    vlSelf->spi_wb__DOT__tx_fetch_pending = __Vdly__spi_wb__DOT__tx_fetch_pending;
    vlSelf->spi_wb__DOT__tx_data_valid = __Vdly__spi_wb__DOT__tx_data_valid;
    vlSelf->spi_wb__DOT__rx_count = __Vdly__spi_wb__DOT__rx_count;
    vlSelf->spi_wb__DOT__buf_byte_lane = (3U & (IData)(vlSelf->spi_wb__DOT__buf_byte_addr));
    vlSelf->spi_wb__DOT__tx_word_addr = (0x1ffU & ((IData)(vlSelf->spi_wb__DOT__buf_byte_addr) 
                                                   >> 2U));
    vlSelf->spi_wb__DOT__tx_b_req = vlSelf->spi_wb__DOT__tx_fetch_pending;
    vlSelf->spi_wb__DOT__spi_data_in_valid = vlSelf->spi_wb__DOT__tx_data_valid;
    vlSelf->spi_wb__DOT__spi_data_out_valid = vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_q;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_o 
        = vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_q;
    vlSelf->spi_wb__DOT__rx_b_req = vlSelf->spi_wb__DOT__rx_wr_pending;
    vlSelf->spi_wb__DOT__rx_b_be = 0U;
    vlSelf->spi_wb__DOT__rx_b_addr = (0x1ffU & ((IData)(vlSelf->spi_wb__DOT__rx_byte_addr) 
                                                >> 2U));
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
    vlSelf->spi_wb__DOT__spi_idle = (0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__active = 
        (2U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__state_q));
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__b_addr_i = vlSelf->spi_wb__DOT__tx_word_addr;
    vlSelf->spi_wb__DOT__u_tx_ram__DOT__b_req_i = vlSelf->spi_wb__DOT__tx_b_req;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_in_valid_i 
        = vlSelf->spi_wb__DOT__spi_data_in_valid;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_req_i = vlSelf->spi_wb__DOT__rx_b_req;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_be_i = vlSelf->spi_wb__DOT__rx_b_be;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_addr_i = vlSelf->spi_wb__DOT__rx_b_addr;
    vlSelf->spi_wb__DOT__u_rx_ram__DOT__b_wdata_i = vlSelf->spi_wb__DOT__rx_b_wdata;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__idle_o = vlSelf->spi_wb__DOT__spi_idle;
    vlSelf->spi_wb__DOT__spi_data_out_ready = (1U & 
                                               (~ (IData)(vlSelf->spi_wb__DOT__spi_idle)));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_ready_i 
        = vlSelf->spi_wb__DOT__spi_data_out_ready;
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__9(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__9\n"); );
    // Body
    vlSelf->IDDR_4__DOT__q2_reg = vlSelf->builder_impl_xilinxsdrtristateimpl1___05Fi;
    vlSelf->IDDR_8__DOT__q2_reg = vlSelf->IOBUF_8__DOT__O;
    vlSelf->IDDR_7__DOT__q2_reg = vlSelf->IOBUF_7__DOT__O;
    vlSelf->IDDR_6__DOT__q2_reg = vlSelf->IOBUF_6__DOT__O;
    vlSelf->IDDR_5__DOT__q2_reg = vlSelf->IOBUF_5__DOT__O;
    vlSelf->IDDR_3__DOT__q2_reg = vlSelf->IOBUF_3__DOT__O;
    vlSelf->IDDR_2__DOT__q2_reg = vlSelf->IOBUF_2__DOT__O;
    vlSelf->IDDR_1__DOT__q2_reg = vlSelf->IOBUF_1__DOT__O;
    vlSelf->IDDR__DOT__q2_reg = vlSelf->IOBUF__DOT__O;
    vlSelf->IDDR_4__DOT__Q2 = vlSelf->IDDR_4__DOT__q2_reg;
    vlSelf->builder_impl1 = vlSelf->IDDR_4__DOT__q2_reg;
    vlSelf->IDDR_8__DOT__Q2 = vlSelf->IDDR_8__DOT__q2_reg;
    vlSelf->IDDR_7__DOT__Q2 = vlSelf->IDDR_7__DOT__q2_reg;
    vlSelf->IDDR_6__DOT__Q2 = vlSelf->IDDR_6__DOT__q2_reg;
    vlSelf->IDDR_5__DOT__Q2 = vlSelf->IDDR_5__DOT__q2_reg;
    vlSelf->builder_impl2 = (((IData)(vlSelf->IDDR_8__DOT__q2_reg) 
                              << 3U) | (((IData)(vlSelf->IDDR_7__DOT__q2_reg) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->IDDR_6__DOT__q2_reg) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->IDDR_5__DOT__q2_reg))));
    vlSelf->IDDR_3__DOT__Q2 = vlSelf->IDDR_3__DOT__q2_reg;
    vlSelf->IDDR_2__DOT__Q2 = vlSelf->IDDR_2__DOT__q2_reg;
    vlSelf->IDDR_1__DOT__Q2 = vlSelf->IDDR_1__DOT__q2_reg;
    vlSelf->IDDR__DOT__Q2 = vlSelf->IDDR__DOT__q2_reg;
    vlSelf->builder_impl0 = (((IData)(vlSelf->IDDR_3__DOT__q2_reg) 
                              << 3U) | (((IData)(vlSelf->IDDR_2__DOT__q2_reg) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->IDDR_1__DOT__q2_reg) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->IDDR__DOT__q2_reg))));
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__10(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__10\n"); );
    // Body
    vlSelf->FDPE_2__DOT__Q = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1;
    vlSelf->FDPE_3__DOT__Q = ((IData)(vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1) 
                              || (IData)(vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1_rst_meta));
    vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1_rst_meta 
        = vlSelf->FDPE_2__DOT__Q;
    vlSelf->FDPE_3__DOT__D = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1_rst_meta;
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__11(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__11\n"); );
    // Body
    vlSelf->FDPE__DOT__Q = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->FDPE_1__DOT__Q = ((IData)(vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0) 
                              || (IData)(vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0_rst_meta));
    vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0_rst_meta 
        = vlSelf->FDPE__DOT__Q;
    vlSelf->spi_wb__DOT__rst_ni = (1U & (~ (IData)(vlSelf->FDPE_1__DOT__Q)));
    vlSelf->sys_rst = vlSelf->FDPE_1__DOT__Q;
    vlSelf->FDPE_1__DOT__D = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0_rst_meta;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__rst_ni = vlSelf->spi_wb__DOT__rst_ni;
    vlSelf->spi_wb__DOT__rst_i = vlSelf->sys_rst;
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__13(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__13\n"); );
    // Body
    if (vlSelf->__Vdlyvset__storage_5__v0) {
        vlSelf->storage_5[vlSelf->__Vdlyvdim0__storage_5__v0] 
            = vlSelf->__Vdlyvval__storage_5__v0;
    }
    vlSelf->main_rx_cdc_cdc_graycounter0_q = vlSelf->main_rx_cdc_cdc_graycounter0_q_next;
    vlSelf->main_tx_cdc_cdc_graycounter1_q = vlSelf->main_tx_cdc_cdc_graycounter1_q_next;
    if (vlSelf->sys2x_rst) {
        vlSelf->main_rx_cdc_cdc_graycounter0_q = 0U;
        vlSelf->main_tx_cdc_cdc_graycounter1_q = 0U;
    }
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
    vlSelf->main_syncfifo0_syncfifo0_we = ((IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q) 
                                           != (IData)(vlSelf->builder_impl_xilinxmultiregimpl241));
    vlSelf->main_syncfifo1_source_ready = vlSelf->main_rx_cdc_cdc_asyncfifo_writable;
    vlSelf->main_syncfifo1_syncfifo1_re = vlSelf->main_rx_cdc_cdc_asyncfifo_writable;
    vlSelf->main_rx_cdc_cdc_sink_ready = vlSelf->main_rx_cdc_cdc_asyncfifo_writable;
    vlSelf->main_rx_cdc_sink_sink_ready = vlSelf->main_rx_cdc_cdc_asyncfifo_writable;
    vlSelf->main_syncfifo1_do_read = ((IData)(vlSelf->main_rx_cdc_cdc_asyncfifo_we) 
                                      & (IData)(vlSelf->main_rx_cdc_cdc_asyncfifo_writable));
    vlSelf->main_rx_cdc_cdc_graycounter0_ce = ((IData)(vlSelf->main_rx_cdc_cdc_asyncfifo_writable) 
                                               & (IData)(vlSelf->main_rx_cdc_cdc_asyncfifo_we));
    vlSelf->main_syncfifo0_sink_valid = vlSelf->main_syncfifo0_syncfifo0_we;
    vlSelf->main_tx_cdc_cdc_source_valid = vlSelf->main_syncfifo0_syncfifo0_we;
    vlSelf->main_tx_cdc_source_source_valid = vlSelf->main_syncfifo0_syncfifo0_we;
    vlSelf->main_tx_cdc_cdc_asyncfifo_readable = vlSelf->main_syncfifo0_syncfifo0_we;
    vlSelf->main_syncfifo0_wrport_we = ((IData)(vlSelf->main_syncfifo0_syncfifo0_we) 
                                        & ((IData)(vlSelf->main_syncfifo0_syncfifo0_writable) 
                                           | (IData)(vlSelf->main_syncfifo0_replace)));
    vlSelf->main_tx_cdc_cdc_graycounter1_ce = ((IData)(vlSelf->main_syncfifo0_syncfifo0_we) 
                                               & (IData)(vlSelf->main_syncfifo0_syncfifo0_writable));
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
    vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary = 0U;
    vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary 
        = (7U & ((IData)(vlSelf->main_tx_cdc_cdc_graycounter1_ce)
                  ? ((IData)(1U) + (IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_binary))
                  : (IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_binary)));
    vlSelf->main_rx_cdc_cdc_graycounter0_q_next = (7U 
                                                   & ((IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary) 
                                                      ^ 
                                                      VL_SHIFTR_III(3,3,32, (IData)(vlSelf->main_rx_cdc_cdc_graycounter0_q_next_binary), 1U)));
    vlSelf->main_tx_cdc_cdc_graycounter1_q_next = (7U 
                                                   & ((IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary) 
                                                      ^ 
                                                      VL_SHIFTR_III(3,3,32, (IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary), 1U)));
    vlSelf->main_tx_cdc_cdc_rdport_adr = (3U & (IData)(vlSelf->main_tx_cdc_cdc_graycounter1_q_next_binary));
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__14(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__14\n"); );
    // Body
    vlSelf->spi_wb__DOT__spi_data_out = vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_o;
}

VL_INLINE_OPT void Vsonata_sonata___nba_comb__TOP__sonata__2(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_comb__TOP__sonata__2\n"); );
    // Body
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
    vlSelf->spi_wb__DOT__event_complete = ((~ (IData)(vlSelf->spi_wb__DOT__spi_idle_q)) 
                                           & (IData)(vlSelf->spi_wb__DOT__spi_idle));
    vlSelf->spi_wb__DOT__u_spi_core__DOT__finish_edge = 0U;
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
    vlSelf->spi_wb__DOT__spi_data_in = vlSelf->spi_wb__DOT__tx_byte_from_buf;
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
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_in_i 
        = vlSelf->spi_wb__DOT__spi_data_in;
    vlSelf->spi_wb__DOT__u_spi_core__DOT__data_out_valid_d 
        = ((IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__sample_edge) 
           & (0U == (IData)(vlSelf->spi_wb__DOT__u_spi_core__DOT__bit_count_q)));
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__15(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__15\n"); );
    // Body
    vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0 
        = (1U & (~ (IData)(vlSelf->PLLE2_ADV__DOT__locked_reg)));
    vlSelf->FDPE__DOT__PRE = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->FDPE_1__DOT__PRE = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1 
        = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->FDPE_2__DOT__PRE = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1;
    vlSelf->FDPE_3__DOT__PRE = vlSelf->builder_impl_xilinxasyncresetsynchronizerimpl1;
}

VL_INLINE_OPT void Vsonata_sonata___nba_sequent__TOP__sonata__16(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_sequent__TOP__sonata__16\n"); );
    // Body
    vlSelf->sys2x_rst = vlSelf->FDPE_3__DOT__Q;
}

VL_INLINE_OPT void Vsonata_sonata___nba_comb__TOP__sonata__7(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_comb__TOP__sonata__7\n"); );
    // Body
    vlSelf->builder_soclinux_sdcore_next_state = 0U;
    vlSelf->soclinux_cmdw_sink_last = 0U;
    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 0U;
    vlSelf->soclinux_core_crc7_inserter_crc_enable = 0U;
    vlSelf->soclinux_core_crc7_inserter_crc_reset = 0U;
    vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 = 0U;
    vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 0U;
    vlSelf->soclinux_datar_source_source_ready = 0U;
    vlSelf->soclinux_dataw_sink_last = 0U;
    vlSelf->soclinux_dataw_sink_payload_last_block = 0U;
    vlSelf->soclinux_dataw_sink_valid = 0U;
    vlSelf->builder_soclinux_sdcore_next_state = vlSelf->builder_soclinux_sdcore_state;
    if ((4U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
            vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 = 0U;
            vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
            vlSelf->soclinux_core_crc7_inserter_crc_reset = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->builder_soclinux_sdcore_next_state = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
            vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 = 0U;
            vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
            vlSelf->soclinux_core_crc7_inserter_crc_reset = 1U;
            if (vlSelf->soclinux_core_cmd_send_re) {
                vlSelf->builder_soclinux_sdcore_next_state = 1U;
            }
        } else if (vlSelf->soclinux_datar_source_source_valid) {
            if (((0U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)) 
                 | (5U == (IData)(vlSelf->soclinux_datar_source_source_payload_status)))) {
                vlSelf->soclinux_datar_source_source_ready 
                    = ((IData)(vlSelf->soclinux_datar_source_source_payload_drop) 
                       || (IData)(vlSelf->soclinux_core_source_ready));
                if (((IData)(vlSelf->soclinux_datar_source_source_last) 
                     & (IData)(vlSelf->soclinux_datar_source_source_ready))) {
                    vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 
                        = ((IData)(1U) + vlSelf->soclinux_core_data_count);
                    vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
                    if ((vlSelf->soclinux_core_data_count 
                         == (vlSelf->soclinux_core_block_count_storage 
                             - (IData)(1U)))) {
                        vlSelf->builder_soclinux_sdcore_next_state = 0U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->soclinux_datar_source_source_payload_status))) {
                vlSelf->soclinux_datar_source_source_ready = 1U;
                vlSelf->builder_soclinux_sdcore_next_state = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            vlSelf->soclinux_dataw_sink_valid = vlSelf->soclinux_core_sink_valid;
            vlSelf->soclinux_dataw_sink_last = vlSelf->soclinux_core_sink_last;
            vlSelf->soclinux_dataw_sink_payload_last_block 
                = (vlSelf->soclinux_core_data_count 
                   == (vlSelf->soclinux_core_block_count_storage 
                       - (IData)(1U)));
            if ((((IData)(vlSelf->soclinux_dataw_sink_valid) 
                  & (IData)(vlSelf->soclinux_dataw_sink_ready)) 
                 & (IData)(vlSelf->soclinux_dataw_sink_last))) {
                vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 
                    = ((IData)(1U) + vlSelf->soclinux_core_data_count);
                vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
                if (vlSelf->soclinux_dataw_sink_payload_last_block) {
                    vlSelf->builder_soclinux_sdcore_next_state = 0U;
                }
            }
        } else if (vlSelf->soclinux_cmdr_source_source_valid) {
            if ((1U == (IData)(vlSelf->soclinux_cmdr_source_source_payload_status))) {
                vlSelf->builder_soclinux_sdcore_next_state = 0U;
            } else if (vlSelf->soclinux_cmdr_source_source_last) {
                vlSelf->builder_soclinux_sdcore_next_state 
                    = ((2U == (IData)(vlSelf->soclinux_core_data_type))
                        ? 3U : ((1U == (IData)(vlSelf->soclinux_core_data_type))
                                 ? 4U : 0U));
                if (((IData)(vlSelf->soclinux_core_cmd_crc_en) 
                     & ((IData)(vlSelf->soclinux_core_crc7_inserter_crc_crc) 
                        != (0x7fU & ((IData)(vlSelf->soclinux_cmdr_source_source_payload_data) 
                                     >> 1U))))) {
                    vlSelf->builder_soclinux_sdcore_next_state = 0U;
                }
            } else {
                if ((0U == (IData)(vlSelf->soclinux_core_cmd_count))) {
                    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 1U;
                    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
                }
                vlSelf->soclinux_core_crc7_inserter_crc_enable 
                    = ((2U != (IData)(vlSelf->soclinux_core_cmd_type)) 
                       | (0U < (IData)(vlSelf->soclinux_core_cmd_count)));
            }
        }
    } else if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
        vlSelf->soclinux_cmdw_sink_last = (5U == (IData)(vlSelf->soclinux_core_cmd_count));
        if (vlSelf->soclinux_cmdw_sink_ready) {
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 
                = (7U & ((IData)(1U) + (IData)(vlSelf->soclinux_core_cmd_count)));
            vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
            if (vlSelf->soclinux_cmdw_sink_last) {
                vlSelf->soclinux_core_crc7_inserter_crc_reset = 1U;
                if ((0U == (IData)(vlSelf->soclinux_core_cmd_type))) {
                    vlSelf->builder_soclinux_sdcore_next_state = 0U;
                } else {
                    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
                    vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
                    vlSelf->builder_soclinux_sdcore_next_state = 2U;
                }
            } else {
                vlSelf->soclinux_core_crc7_inserter_crc_enable = 1U;
            }
        }
    } else {
        vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value2 = 0U;
        vlSelf->soclinux_core_cmd_count_builder_sdcore_next_value_ce2 = 1U;
        vlSelf->soclinux_core_data_count_builder_sdcore_next_value3 = 0U;
        vlSelf->soclinux_core_data_count_builder_sdcore_next_value_ce3 = 1U;
        vlSelf->soclinux_core_crc7_inserter_crc_reset = 1U;
        if (vlSelf->soclinux_core_cmd_send_re) {
            vlSelf->builder_soclinux_sdcore_next_state = 1U;
        }
    }
    vlSelf->builder_soclinux_sdphycmdw_next_state = 0U;
    vlSelf->builder_soclinux_sdphycmdw_next_state = vlSelf->builder_soclinux_sdphycmdw_state;
    vlSelf->soclinux_cmdw_sink_ready = 0U;
    if ((1U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_sink_valid) {
            if (vlSelf->soclinux_cmdw_pads_out_ready) {
                if ((7U == (IData)(vlSelf->soclinux_cmdw_count))) {
                    vlSelf->soclinux_cmdw_sink_ready = 1U;
                    if (vlSelf->soclinux_cmdw_sink_last) {
                        if ((0U == (IData)(vlSelf->soclinux_cmdw_sink_payload_cmd_type))) {
                            vlSelf->builder_soclinux_sdphycmdw_next_state = 2U;
                            vlSelf->soclinux_cmdw_sink_ready = 0U;
                        } else {
                            vlSelf->builder_soclinux_sdphycmdw_next_state = 0U;
                        }
                    }
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->builder_soclinux_sdphycmdw_state))) {
        if (vlSelf->soclinux_cmdw_pads_out_ready) {
            if ((7U == (IData)(vlSelf->soclinux_cmdw_count))) {
                vlSelf->builder_soclinux_sdphycmdw_next_state = 0U;
                vlSelf->soclinux_cmdw_sink_ready = 1U;
            }
        }
    } else if (((IData)(vlSelf->soclinux_cmdw_sink_valid) 
                & (IData)(vlSelf->soclinux_cmdw_pads_out_ready))) {
        vlSelf->builder_soclinux_sdphycmdw_next_state = 1U;
    }
    vlSelf->soclinux_dataw_sink_ready = 0U;
    vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 0U;
    vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
    vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
    vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 0U;
    vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
    vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 0U;
    vlSelf->soclinux_dataw_stop = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    vlSelf->soclinux_dataw_stop = (1U 
                                                   & (~ (IData)(vlSelf->soclinux_dataw_sink_valid)));
                }
            }
        }
    }
    vlSelf->builder_soclinux_sdphydataw_next_state = 0U;
    vlSelf->builder_soclinux_sdphydataw_next_state 
        = vlSelf->builder_soclinux_sdphydataw_state;
    if ((8U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    if (vlSelf->__VdfgExtracted_h00d219e4__0) {
                        vlSelf->soclinux_dataw_sink_ready = 1U;
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                 & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                vlSelf->builder_soclinux_sdphydataw_next_state = 1U;
            }
        } else if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                 & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                vlSelf->builder_soclinux_sdphydataw_next_state = 1U;
            }
        } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                 & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
                vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                vlSelf->builder_soclinux_sdphydataw_next_state = 1U;
            }
        } else if (vlSelf->__VdfgExtracted_h00d219e4__0) {
            vlSelf->builder_soclinux_sdphydataw_next_state 
                = ((IData)(vlSelf->soclinux_dataw_sink_payload_last_block)
                    ? 0U : 1U);
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    if ((1U == (IData)(vlSelf->soclinux_data_width0))) {
                        if (vlSelf->soclinux_dataw_pads_out_ready) {
                            if ((1U == (IData)(vlSelf->soclinux_dataw_count))) {
                                if ((1U & (~ (IData)(vlSelf->soclinux_dataw_sink_last)))) {
                                    vlSelf->soclinux_dataw_sink_ready = 1U;
                                }
                            }
                        }
                    } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                        if ((7U == (IData)(vlSelf->soclinux_dataw_count))) {
                            if ((1U & (~ (IData)(vlSelf->soclinux_dataw_sink_last)))) {
                                vlSelf->soclinux_dataw_sink_ready = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    if (vlSelf->soclinux_dataw_crc_source_valid) {
                        if ((2U != (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                          >> 5U)))) {
                            if ((5U != (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                              >> 5U)))) {
                                if ((6U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                                  >> 5U)))) {
                                    vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                                    vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 1U;
                                }
                            }
                            if ((5U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                              >> 5U)))) {
                                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 1U;
                                vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                            }
                        }
                        if ((2U == (7U & ((IData)(vlSelf->soclinux_dataw_crc_source_payload_data) 
                                          >> 5U)))) {
                            vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 1U;
                            vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                        }
                    }
                }
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    if (vlSelf->soclinux_dataw_pads_out_ready) {
                        if ((7U == (IData)(vlSelf->soclinux_dataw_count))) {
                            vlSelf->builder_soclinux_sdphydataw_next_state = 8U;
                        }
                    }
                } else if (vlSelf->soclinux_dataw_crc_source_valid) {
                    vlSelf->builder_soclinux_sdphydataw_next_state 
                        = ((IData)(vlSelf->soclinux_dataw_sink_payload_last_block)
                            ? 7U : 8U);
                }
            } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if (vlSelf->soclinux_dataw_pads_out_ready) {
                    vlSelf->builder_soclinux_sdphydataw_next_state = 6U;
                }
            } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                if ((0xfU == (IData)(vlSelf->soclinux_dataw_count))) {
                    vlSelf->builder_soclinux_sdphydataw_next_state = 5U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdphydataw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->builder_soclinux_sdphydataw_state)))) {
                    if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                         & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                        vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value_ce3 = 1U;
                        vlSelf->soclinux_dataw_write_error1_builder_sdphydataw_next_value3 = 0U;
                        vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value1 = 0U;
                        vlSelf->soclinux_dataw_accepted1_builder_sdphydataw_next_value_ce1 = 1U;
                        vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value2 = 0U;
                        vlSelf->soclinux_dataw_crc_error1_builder_sdphydataw_next_value_ce2 = 1U;
                    }
                }
            }
            if ((2U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                    if ((1U == (IData)(vlSelf->soclinux_data_width0))) {
                        if (vlSelf->soclinux_dataw_pads_out_ready) {
                            if ((1U == (IData)(vlSelf->soclinux_dataw_count))) {
                                if (vlSelf->soclinux_dataw_sink_last) {
                                    vlSelf->builder_soclinux_sdphydataw_next_state = 4U;
                                }
                            }
                        }
                    } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                        if ((7U == (IData)(vlSelf->soclinux_dataw_count))) {
                            if (vlSelf->soclinux_dataw_sink_last) {
                                vlSelf->builder_soclinux_sdphydataw_next_state = 4U;
                            }
                        }
                    }
                } else if (vlSelf->soclinux_dataw_pads_out_ready) {
                    vlSelf->builder_soclinux_sdphydataw_next_state = 3U;
                }
            } else if ((1U & (IData)(vlSelf->builder_soclinux_sdphydataw_state))) {
                if (vlSelf->soclinux_dataw_pads_out_ready) {
                    if ((1U == (IData)(vlSelf->soclinux_dataw_count))) {
                        vlSelf->builder_soclinux_sdphydataw_next_state = 2U;
                    }
                }
            } else if (((IData)(vlSelf->soclinux_dataw_sink_valid) 
                        & (IData)(vlSelf->soclinux_dataw_pads_out_ready))) {
                vlSelf->builder_soclinux_sdphydataw_next_state = 1U;
            }
        }
    }
    vlSelf->soclinux_core_sink_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->builder_soclinux_sdcore_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
            if ((1U & (IData)(vlSelf->builder_soclinux_sdcore_state))) {
                vlSelf->soclinux_core_sink_ready = vlSelf->soclinux_dataw_sink_ready;
            }
        }
    }
    vlSelf->soclinux_clocker_stop = ((IData)(vlSelf->soclinux_datar_stop) 
                                     | (IData)(vlSelf->soclinux_dataw_stop));
    vlSelf->soclinux_mem2block_fifo_re = vlSelf->soclinux_core_sink_ready;
    vlSelf->soclinux_mem2block_source_source_ready 
        = vlSelf->soclinux_core_sink_ready;
    vlSelf->soclinux_mem2block_fifo_source_ready = vlSelf->soclinux_core_sink_ready;
    vlSelf->soclinux_mem2block_fifo_syncfifo_re = ((IData)(vlSelf->soclinux_mem2block_fifo_syncfifo_readable) 
                                                   & ((~ (IData)(vlSelf->soclinux_mem2block_fifo_readable)) 
                                                      | (IData)(vlSelf->soclinux_core_sink_ready)));
    vlSelf->soclinux_mem2block_fifo_do_read = ((IData)(vlSelf->soclinux_mem2block_fifo_syncfifo_readable) 
                                               & (IData)(vlSelf->soclinux_mem2block_fifo_syncfifo_re));
    vlSelf->soclinux_mem2block_fifo_rdport_re = vlSelf->soclinux_mem2block_fifo_do_read;
}

VL_INLINE_OPT void Vsonata_sonata___nba_comb__TOP__sonata__8(Vsonata_sonata* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsonata_sonata___nba_comb__TOP__sonata__8\n"); );
    // Body
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
    vlSelf->spi_wb__DOT__spi_start = ((IData)(vlSelf->spi_wb__DOT__reg_wr) 
                                      & ((6U == (IData)(vlSelf->spi_wb__DOT__reg_addr)) 
                                         & (IData)(vlSelf->spi_wb__DOT__spi_idle)));
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
    vlSelf->spi_wb__DOT__spi_data_in_ready = vlSelf->spi_wb__DOT__u_spi_core__DOT__data_in_ready_o;
}
