// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

module spi import spi_reg_pkg::*; #(
  parameter int unsigned RxFifoDepth = 8,
  parameter int unsigned TxFifoDepth = 8,
  // Maximum number of peripherals supported by this controller.
  parameter int unsigned CSWidth = spi_reg_pkg::MaxPeripherals,
  // Size of each TX/RX buffer in bytes (must be power of 2).
  parameter int unsigned BufDepth = 2048
) (
  input clk_i,
  input rst_ni,

  input  tlul_pkg::tl_h2d_t tl_i,
  output tlul_pkg::tl_d2h_t tl_o,

  // Interrupt lines.
  output logic intr_rx_full_o,
  output logic intr_rx_watermark_o,
  output logic intr_tx_empty_o,
  output logic intr_tx_watermark_o,
  output logic intr_complete_o,

  // SPI bus signals.
  output logic               spi_copi_o,
  input  logic               spi_cipo_i,
  output logic [CSWidth-1:0] spi_cs_o,
  output logic               spi_clk_o
);

  localparam int unsigned BufAw    = $clog2(BufDepth);   // 11 for 2048
  localparam int unsigned BufWords = BufDepth / 4;       // 512
  localparam int unsigned BufWaw   = $clog2(BufWords);   // 9

  // ========================================================================
  // 8KB address space layout (mask 0x1FFF):
  //   0x0000-0x0FFF  Registers (bit 12 = 0)
  //   0x1000-0x17FF  TX buffer (bit 12 = 1, bit 11 = 0)  — 2KB
  //   0x1800-0x1FFF  RX buffer (bit 12 = 1, bit 11 = 1)  — 2KB
  // ========================================================================
  logic [1:0] dev_sel;
  always_comb begin
    if (!tl_i.a_address[12])
      dev_sel = 2'd0;  // registers
    else if (!tl_i.a_address[11])
      dev_sel = 2'd1;  // TX buffer
    else
      dev_sel = 2'd2;  // RX buffer
  end

  tlul_pkg::tl_h2d_t tl_dev_h2d [3];
  tlul_pkg::tl_d2h_t tl_dev_d2h [3];

  tlul_socket_1n #(
    .N          (3),
    .HReqPass   (1'b1),
    .HRspPass   (1'b1),
    .DReqPass   (3'b111),
    .DRspPass   (3'b111),
    .HReqDepth  (4'h0),
    .HRspDepth  (4'h0),
    .DReqDepth  ({3{4'h0}}),
    .DRspDepth  ({3{4'h0}})
  ) u_tl_demux (
    .clk_i,
    .rst_ni,
    .tl_h_i       (tl_i),
    .tl_h_o       (tl_o),
    .tl_d_o       (tl_dev_h2d),
    .tl_d_i       (tl_dev_d2h),
    .dev_select_i (dev_sel)
  );

  // ========================================================================
  // Device 0: Register interface
  // ========================================================================
  spi_reg2hw_t reg2hw;
  spi_hw2reg_t hw2reg;

  logic unused_reg2hw;
  assign unused_reg2hw = |reg2hw;

  spi_reg_top u_reg (
    .clk_i,
    .rst_ni,
    .tl_i  (tl_dev_h2d[0]),
    .tl_o  (tl_dev_d2h[0]),
    .reg2hw,
    .hw2reg
  );

  // ========================================================================
  // Device 1: TX buffer — CPU writes TX data here
  // ========================================================================
  logic                tx_cpu_req;
  logic                tx_cpu_we;
  logic [BufWaw-1:0]   tx_cpu_addr;
  logic [31:0]         tx_cpu_wdata;
  logic [31:0]         tx_cpu_wmask;
  logic [31:0]         tx_cpu_rdata;
  logic                tx_cpu_rvalid;

  tlul_adapter_sram #(
    .SramAw      (BufWaw),
    .SramDw      (32),
    .Outstanding (1),
    .ByteAccess  (1)
  ) u_tl_tx_buf (
    .clk_i,
    .rst_ni,
    .tl_i           (tl_dev_h2d[1]),
    .tl_o           (tl_dev_d2h[1]),
    .en_ifetch_i    (prim_mubi_pkg::MuBi4False),
    .req_o          (tx_cpu_req),
    .req_type_o     (),
    .gnt_i          (tx_cpu_req),
    .we_o           (tx_cpu_we),
    .addr_o         (tx_cpu_addr),
    .wdata_o        (tx_cpu_wdata),
    .wdata_cap_o    (),
    .wmask_o        (tx_cpu_wmask),
    .intg_error_o   (),
    .rdata_i        (tx_cpu_rdata),
    .rdata_cap_i    (1'b0),
    .rvalid_i       (tx_cpu_rvalid),
    .rerror_i       (2'b00),
    .compound_txn_in_progress_o (),
    .readback_en_i  (prim_mubi_pkg::MuBi4False),
    .readback_error_o (),
    .wr_collision_i (1'b0),
    .write_pending_i(1'b0)
  );

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) tx_cpu_rvalid <= 1'b0;
    else         tx_cpu_rvalid <= tx_cpu_req & ~tx_cpu_we;
  end

  logic [3:0] tx_cpu_be;
  assign tx_cpu_be = {tx_cpu_wmask[24], tx_cpu_wmask[16],
                      tx_cpu_wmask[8],  tx_cpu_wmask[0]};

  // ========================================================================
  // Device 2: RX buffer — CPU reads RX data from here
  // ========================================================================
  logic                rx_cpu_req;
  logic                rx_cpu_we;
  logic [BufWaw-1:0]   rx_cpu_addr;
  logic [31:0]         rx_cpu_wdata;
  logic [31:0]         rx_cpu_wmask;
  logic [31:0]         rx_cpu_rdata;
  logic                rx_cpu_rvalid;

  tlul_adapter_sram #(
    .SramAw      (BufWaw),
    .SramDw      (32),
    .Outstanding (1),
    .ByteAccess  (1)
  ) u_tl_rx_buf (
    .clk_i,
    .rst_ni,
    .tl_i           (tl_dev_h2d[2]),
    .tl_o           (tl_dev_d2h[2]),
    .en_ifetch_i    (prim_mubi_pkg::MuBi4False),
    .req_o          (rx_cpu_req),
    .req_type_o     (),
    .gnt_i          (rx_cpu_req),
    .we_o           (rx_cpu_we),
    .addr_o         (rx_cpu_addr),
    .wdata_o        (rx_cpu_wdata),
    .wdata_cap_o    (),
    .wmask_o        (rx_cpu_wmask),
    .intg_error_o   (),
    .rdata_i        (rx_cpu_rdata),
    .rdata_cap_i    (1'b0),
    .rvalid_i       (rx_cpu_rvalid),
    .rerror_i       (2'b00),
    .compound_txn_in_progress_o (),
    .readback_en_i  (prim_mubi_pkg::MuBi4False),
    .readback_error_o (),
    .wr_collision_i (1'b0),
    .write_pending_i(1'b0)
  );

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) rx_cpu_rvalid <= 1'b0;
    else         rx_cpu_rvalid <= rx_cpu_req & ~rx_cpu_we;
  end

  logic [3:0] rx_cpu_be;
  assign rx_cpu_be = {rx_cpu_wmask[24], rx_cpu_wmask[16],
                      rx_cpu_wmask[8],  rx_cpu_wmask[0]};

  // ========================================================================
  // SPI core signals
  // ========================================================================
  logic [7:0]  spi_data_in, spi_data_out;
  logic [10:0] spi_byte_count;
  logic        spi_data_in_valid, spi_data_in_ready;
  logic        spi_data_out_valid, spi_data_out_ready;
  logic        spi_start, spi_idle;

  logic [15:0] spi_half_clk_period;
  logic        spi_cpol, spi_cpha, spi_msb_first, spi_copi_idle;

  assign spi_cpol            = reg2hw.cfg.cpol.q;
  assign spi_cpha            = reg2hw.cfg.cpha.q;
  assign spi_half_clk_period = reg2hw.cfg.half_clk_period.q;
  assign spi_msb_first       = reg2hw.cfg.msb_first.q;
  assign spi_copi_idle       = reg2hw.cfg.copi_idle.q;

  assign spi_start      = (reg2hw.start.qe & spi_idle);
  assign spi_byte_count = reg2hw.start.q;

  // ========================================================================
  // Transfer byte counter
  // ========================================================================
  logic [BufAw-1:0] buf_byte_addr;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
      buf_byte_addr <= '0;
    else if (spi_start)
      buf_byte_addr <= '0;
    else if (~spi_idle && spi_data_in_ready && spi_data_in_valid)
      buf_byte_addr <= buf_byte_addr + 1'b1;
  end

  // ========================================================================
  // TX path: SPI core reads from TX BRAM (port B)
  // ========================================================================
  logic [BufWaw-1:0] tx_word_addr;
  logic [1:0]        buf_byte_lane;
  assign tx_word_addr = buf_byte_addr[BufAw-1:2];
  assign buf_byte_lane = buf_byte_addr[1:0];

  logic [1:0] tx_byte_lane_q;
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) tx_byte_lane_q <= '0;
    else         tx_byte_lane_q <= buf_byte_lane;
  end

  logic [31:0] tx_bram_rdata;
  logic [7:0]  tx_byte_from_buf;
  always_comb begin
    case (tx_byte_lane_q)
      2'd0: tx_byte_from_buf = tx_bram_rdata[ 7: 0];
      2'd1: tx_byte_from_buf = tx_bram_rdata[15: 8];
      2'd2: tx_byte_from_buf = tx_bram_rdata[23:16];
      2'd3: tx_byte_from_buf = tx_bram_rdata[31:24];
    endcase
  end

  // TX fetch FSM: issue SRAM read, wait 1 cycle, present data to core.
  logic tx_data_valid;
  logic tx_fetch_pending;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
      tx_fetch_pending <= 1'b0;
    else if (spi_start)
      tx_fetch_pending <= 1'b1;  // pre-fetch first byte immediately
    else if (~spi_idle && !tx_data_valid && !tx_fetch_pending)
      tx_fetch_pending <= 1'b1;
    else
      tx_fetch_pending <= 1'b0;
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
      tx_data_valid <= 1'b0;
    else if (spi_start || spi_idle)
      tx_data_valid <= 1'b0;
    else if (tx_fetch_pending)
      tx_data_valid <= 1'b1;
    else if (spi_data_in_ready & tx_data_valid)
      tx_data_valid <= 1'b0;
  end

  assign spi_data_in       = tx_byte_from_buf;
  assign spi_data_in_valid = tx_data_valid;

  // TX BRAM port B: read-only from SPI core perspective
  logic tx_b_req;
  assign tx_b_req = tx_fetch_pending;

  // ========================================================================
  // RX path: SPI core writes to RX BRAM (port B)
  // ========================================================================
  assign spi_data_out_ready = ~spi_idle;

  // Separate RX byte counter — independent of TX counter (buf_byte_addr)
  // since TX runs ahead of RX by up to 1 byte.
  logic [BufAw-1:0] rx_count;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
      rx_count <= '0;
    else if (spi_start)
      rx_count <= '0;
    else if (spi_data_out_valid & spi_data_out_ready)
      rx_count <= rx_count + 1'b1;
  end

  logic        rx_wr_pending;
  logic [BufAw-1:0] rx_byte_addr;
  logic [7:0]  rx_byte_data;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      rx_wr_pending <= 1'b0;
      rx_byte_addr  <= '0;
      rx_byte_data  <= '0;
    end else if (spi_data_out_valid & spi_data_out_ready) begin
      rx_wr_pending <= 1'b1;
      rx_byte_addr  <= rx_count;
      rx_byte_data  <= spi_data_out;
    end else begin
      rx_wr_pending <= 1'b0;
    end
  end

  // RX BRAM port B signals
  logic               rx_b_req;
  logic [BufWaw-1:0]  rx_b_addr;
  logic [31:0]        rx_b_wdata;
  logic [3:0]         rx_b_be;

  assign rx_b_req  = rx_wr_pending;
  assign rx_b_addr = rx_byte_addr[BufAw-1:2];

  always_comb begin
    rx_b_wdata = '0;
    rx_b_be    = '0;
    case (rx_byte_addr[1:0])
      2'd0: begin rx_b_wdata = {24'b0, rx_byte_data};       rx_b_be = 4'b0001; end
      2'd1: begin rx_b_wdata = {16'b0, rx_byte_data, 8'b0}; rx_b_be = 4'b0010; end
      2'd2: begin rx_b_wdata = {8'b0, rx_byte_data, 16'b0}; rx_b_be = 4'b0100; end
      2'd3: begin rx_b_wdata = {rx_byte_data, 24'b0};       rx_b_be = 4'b1000; end
    endcase
  end

  // ========================================================================
  // TX BRAM — true dual-port block RAM
  //   Port A: CPU (read/write)
  //   Port B: SPI core (read only)
  // ========================================================================
  spi_buf_ram #(
    .Depth (BufWords)
  ) u_tx_ram (
    .clk_i,
    .a_req_i   (tx_cpu_req),
    .a_we_i    (tx_cpu_we),
    .a_addr_i  (tx_cpu_addr),
    .a_wdata_i (tx_cpu_wdata),
    .a_be_i    (tx_cpu_be),
    .a_rdata_o (tx_cpu_rdata),
    .b_req_i   (tx_b_req),
    .b_we_i    (1'b0),
    .b_addr_i  (tx_word_addr),
    .b_wdata_i (32'b0),
    .b_be_i    (4'b0),
    .b_rdata_o (tx_bram_rdata)
  );

  // ========================================================================
  // RX BRAM — true dual-port block RAM
  //   Port A: CPU (read/write)
  //   Port B: SPI core (write only)
  // ========================================================================
  logic [31:0] rx_bram_unused_rdata;

  spi_buf_ram #(
    .Depth (BufWords)
  ) u_rx_ram (
    .clk_i,
    .a_req_i   (rx_cpu_req),
    .a_we_i    (rx_cpu_we),
    .a_addr_i  (rx_cpu_addr),
    .a_wdata_i (rx_cpu_wdata),
    .a_be_i    (rx_cpu_be),
    .a_rdata_o (rx_cpu_rdata),
    .b_req_i   (rx_b_req),
    .b_we_i    (1'b1),
    .b_addr_i  (rx_b_addr),
    .b_wdata_i (rx_b_wdata),
    .b_be_i    (rx_b_be),
    .b_rdata_o (rx_bram_unused_rdata)
  );

  logic unused_rx_bram_rdata;
  assign unused_rx_bram_rdata = |rx_bram_unused_rdata;

  // ========================================================================
  // Vestigial FIFOs (depth 1, satisfy register interface only)
  // ========================================================================
  // Vestigial FIFOs use Depth=1, so depth_o is 1 bit wide.
  localparam int unsigned VestigialFifoDepthW = 1;

  logic [VestigialFifoDepthW-1:0] rx_fifo_depth;
  logic [7:0]              rx_fifo_rdata;
  logic                    rx_fifo_wready, rx_fifo_rready;
  logic                    rx_fifo_clr, rx_fifo_full;

  logic [VestigialFifoDepthW-1:0] tx_fifo_depth;
  logic [7:0]              tx_fifo_rdata;
  logic                    tx_fifo_rvalid;
  logic                    tx_fifo_clr, tx_fifo_full;

  assign rx_fifo_rready = reg2hw.rx_fifo.re;
  assign hw2reg.rx_fifo.d = rx_fifo_rdata;
  assign rx_fifo_clr = reg2hw.control.rx_clear.qe & reg2hw.control.rx_clear.q;
  assign tx_fifo_clr = reg2hw.control.tx_clear.qe & reg2hw.control.tx_clear.q;

  prim_fifo_sync #(.Width(8), .Pass(1'b0), .Depth(1)) u_rx_fifo (
    .clk_i,
    .rst_ni,
    .clr_i    (rx_fifo_clr),
    .wvalid_i (1'b0),
    .wready_o (rx_fifo_wready),
    .wdata_i  (8'b0),
    .rvalid_o (),
    .rready_i (rx_fifo_rready),
    .rdata_o  (rx_fifo_rdata),
    .full_o   (rx_fifo_full),
    .depth_o  (rx_fifo_depth),
    .err_o    ()
  );

  prim_fifo_sync #(.Width(8), .Pass(1'b0), .Depth(1)) u_tx_fifo (
    .clk_i,
    .rst_ni,
    .clr_i    (tx_fifo_clr),
    .wvalid_i (reg2hw.tx_fifo.qe),
    .wready_o (),
    .wdata_i  (reg2hw.tx_fifo.q),
    .rvalid_o (tx_fifo_rvalid),
    .rready_i (1'b0),
    .rdata_o  (tx_fifo_rdata),
    .full_o   (tx_fifo_full),
    .depth_o  (tx_fifo_depth),
    .err_o    ()
  );

  // INFO register: live TX/RX byte counters (zero-extended to 12 bits)
  assign hw2reg.info.tx_fifo_depth.d = 12'(buf_byte_addr);
  assign hw2reg.info.rx_fifo_depth.d = 12'(rx_count);

  // ========================================================================
  // Status and interrupt logic
  // ========================================================================
  logic [11:0] rx_fifo_depth_w, tx_fifo_depth_w;
  assign rx_fifo_depth_w = 12'(rx_fifo_depth);
  assign tx_fifo_depth_w = 12'(tx_fifo_depth);

  logic rx_fifo_ge_watermark, tx_fifo_empty, tx_fifo_le_watermark;
  assign tx_fifo_empty = ~|tx_fifo_depth;
  always_comb begin
    if (reg2hw.control.rx_watermark.q == 4'h6)
      rx_fifo_ge_watermark = (rx_fifo_depth_w >= 12'd56);
    else
      rx_fifo_ge_watermark = |(rx_fifo_depth_w >> reg2hw.control.rx_watermark.q);
  end
  assign tx_fifo_le_watermark = (tx_fifo_depth_w == (12'h1 << reg2hw.control.tx_watermark.q)) ||
                              ~|(tx_fifo_depth_w >> reg2hw.control.tx_watermark.q);

  assign hw2reg.status.tx_fifo_level.d = tx_fifo_depth_w;
  assign hw2reg.status.rx_fifo_level.d = rx_fifo_depth_w;
  assign hw2reg.status.tx_fifo_full.d  = tx_fifo_full;
  assign hw2reg.status.rx_fifo_empty.d = ~|rx_fifo_depth;
  assign hw2reg.status.idle.d          = spi_idle;

  // Completion interrupt
  logic event_complete;
  prim_edge_detector #(.Width(1), .EnSync(1'b0)) u_gen_event_complete (
    .clk_i,
    .rst_ni,
    .d_i                (spi_idle),
    .q_sync_o           (),
    .q_posedge_pulse_o  (event_complete),
    .q_negedge_pulse_o  ()
  );

  // Software reset
  logic sw_reset;
  assign sw_reset = reg2hw.control.sw_reset.qe & reg2hw.control.sw_reset.q;

  // Internal loopback
  logic spi_cipo;
  assign spi_cipo = reg2hw.control.int_loopback.q ? spi_copi_o : spi_cipo_i;

  // ========================================================================
  // SPI core
  // ========================================================================
  spi_core u_spi_core (
    .clk_i,
    .rst_ni,
    .sw_reset_i       (sw_reset),
    .data_in_i        (spi_data_in),
    .data_in_valid_i  (spi_data_in_valid),
    .data_in_ready_o  (spi_data_in_ready),
    .data_out_o       (spi_data_out),
    .data_out_valid_o (spi_data_out_valid),
    .data_out_ready_i (spi_data_out_ready),
    .start_i          (spi_start),
    .byte_count_i     (spi_byte_count),
    .idle_o           (spi_idle),
    .cpol_i           (spi_cpol),
    .cpha_i           (spi_cpha),
    .msb_first_i      (spi_msb_first),
    .half_clk_period_i(spi_half_clk_period),
    .copi_idle_i      (spi_copi_idle),
    .spi_copi_o,
    .spi_cipo_i       (spi_cipo),
    .spi_clk_o
  );

  // CS signals
  always_comb begin : spi_cs_output
    for (int unsigned p = 0; p < CSWidth; p++) begin
      spi_cs_o[p] = reg2hw.cs[p].q;
    end
  end

  // ========================================================================
  // Interrupts
  // ========================================================================
  prim_intr_hw #(.Width(1), .IntrT("Status")) intr_rx_full (
    .clk_i, .rst_ni,
    .event_intr_i           (rx_fifo_full),
    .reg2hw_intr_enable_q_i (reg2hw.intr_enable.rx_full.q),
    .reg2hw_intr_test_q_i   (reg2hw.intr_test.rx_full.q),
    .reg2hw_intr_test_qe_i  (reg2hw.intr_test.rx_full.qe),
    .reg2hw_intr_state_q_i  (reg2hw.intr_state.rx_full.q),
    .hw2reg_intr_state_de_o (hw2reg.intr_state.rx_full.de),
    .hw2reg_intr_state_d_o  (hw2reg.intr_state.rx_full.d),
    .intr_o                 (intr_rx_full_o)
  );

  prim_intr_hw #(.Width(1), .IntrT("Status")) intr_rx_watermark (
    .clk_i, .rst_ni,
    .event_intr_i           (rx_fifo_ge_watermark),
    .reg2hw_intr_enable_q_i (reg2hw.intr_enable.rx_watermark.q),
    .reg2hw_intr_test_q_i   (reg2hw.intr_test.rx_watermark.q),
    .reg2hw_intr_test_qe_i  (reg2hw.intr_test.rx_watermark.qe),
    .reg2hw_intr_state_q_i  (reg2hw.intr_state.rx_watermark.q),
    .hw2reg_intr_state_de_o (hw2reg.intr_state.rx_watermark.de),
    .hw2reg_intr_state_d_o  (hw2reg.intr_state.rx_watermark.d),
    .intr_o                 (intr_rx_watermark_o)
  );

  prim_intr_hw #(.Width(1), .IntrT("Status")) intr_tx_empty (
    .clk_i, .rst_ni,
    .event_intr_i           (tx_fifo_empty),
    .reg2hw_intr_enable_q_i (reg2hw.intr_enable.tx_empty.q),
    .reg2hw_intr_test_q_i   (reg2hw.intr_test.tx_empty.q),
    .reg2hw_intr_test_qe_i  (reg2hw.intr_test.tx_empty.qe),
    .reg2hw_intr_state_q_i  (reg2hw.intr_state.tx_empty.q),
    .hw2reg_intr_state_de_o (hw2reg.intr_state.tx_empty.de),
    .hw2reg_intr_state_d_o  (hw2reg.intr_state.tx_empty.d),
    .intr_o                 (intr_tx_empty_o)
  );

  prim_intr_hw #(.Width(1), .IntrT("Status")) intr_tx_watermark (
    .clk_i, .rst_ni,
    .event_intr_i           (tx_fifo_le_watermark),
    .reg2hw_intr_enable_q_i (reg2hw.intr_enable.tx_watermark.q),
    .reg2hw_intr_test_q_i   (reg2hw.intr_test.tx_watermark.q),
    .reg2hw_intr_test_qe_i  (reg2hw.intr_test.tx_watermark.qe),
    .reg2hw_intr_state_q_i  (reg2hw.intr_state.tx_watermark.q),
    .hw2reg_intr_state_de_o (hw2reg.intr_state.tx_watermark.de),
    .hw2reg_intr_state_d_o  (hw2reg.intr_state.tx_watermark.d),
    .intr_o                 (intr_tx_watermark_o)
  );

  prim_intr_hw #(.Width(1), .IntrT("Event")) intr_complete (
    .clk_i, .rst_ni,
    .event_intr_i           (event_complete),
    .reg2hw_intr_enable_q_i (reg2hw.intr_enable.complete.q),
    .reg2hw_intr_test_q_i   (reg2hw.intr_test.complete.q),
    .reg2hw_intr_test_qe_i  (reg2hw.intr_test.complete.qe),
    .reg2hw_intr_state_q_i  (reg2hw.intr_state.complete.q),
    .hw2reg_intr_state_de_o (hw2reg.intr_state.complete.de),
    .hw2reg_intr_state_d_o  (hw2reg.intr_state.complete.d),
    .intr_o                 (intr_complete_o)
  );

  // Tie off unused signals
  logic unused_tx_fifo;
  assign unused_tx_fifo = &{tx_fifo_rvalid, tx_fifo_rdata, rx_fifo_wready};
endmodule
