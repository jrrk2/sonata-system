// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// TL-UL wrapper for the lowRISC SD host controller.
// Provides a register interface matching lowrisc_sd.h plus a 4KB
// data buffer for multi-block transfers (up to 8 x 512B blocks).

`default_nettype none

module sd_tl
  import tlul_pkg::*;
#(
  parameter int unsigned SysClkFreq = 30_000_000
) (
  input  wire        clk_i,
  input  wire        rst_ni,

  // TL-UL device interface
  input  tl_h2d_t    tl_i,
  output tl_d2h_t    tl_o,

  // SD card pins
  output wire        sd_clk_o,
  input  wire        sd_cmd_i,
  output wire        sd_cmd_o,
  output wire        sd_cmd_oe_o,
  input  wire [3:0]  sd_dat_i,
  output wire [3:0]  sd_dat_o,
  output wire        sd_dat_oe_o,
  input  wire        sd_detect_i,

  // Interrupt output
  output wire        irq_o
);

  // ----------------------------------------------------------------
  // TL-UL adapter: converts TL-UL to simple register interface
  // ----------------------------------------------------------------
  localparam int unsigned RegAw = 13; // 8KB address space (regs + 4KB data buffer)

  logic             reg_re, reg_we;
  logic [RegAw-1:0] reg_addr;
  logic [31:0]      reg_wdata;
  logic [3:0]       reg_be;
  logic [31:0]      reg_rdata;
  logic             reg_error;

  tlul_adapter_reg #(
    .RegAw         (RegAw),
    .AccessLatency (1)
  ) u_reg_adapter (
    .clk_i,
    .rst_ni,
    .tl_i,
    .tl_o,
    .en_ifetch_i  (prim_mubi_pkg::MuBi4False),
    .intg_error_o (),
    .re_o         (reg_re),
    .we_o         (reg_we),
    .addr_o       (reg_addr),
    .wdata_o      (reg_wdata),
    .be_o         (reg_be),
    .busy_i       (1'b0),
    .rdata_i      (reg_rdata),
    .error_i      (reg_error)
  );

  assign reg_error = 1'b0;

  // ----------------------------------------------------------------
  // Address decode: registers at 0x000-0x0FF, data buffer at 0x200-0x3FF
  // ----------------------------------------------------------------
  wire reg_sel  = ~reg_addr[12];         // 0x0000-0x0FFF → registers
  wire buf_sel  =  reg_addr[12];         // 0x1000-0x1FFF → data buffer (4KB)

  wire [4:0] wr_idx = reg_addr[6:2];    // Write register index (0-31)
  wire [4:0] rd_idx = reg_addr[6:2];    // Read register index (0-31)
  wire [9:0] buf_word_addr = reg_addr[11:2]; // Data buffer word address (0-1023)

  // ----------------------------------------------------------------
  // SD clock generation
  // ----------------------------------------------------------------
  wire sd_clk;
  logic [7:0] clock_divider_reg;

  sd_clock_divider u_clk_div (
    .CLK     (clk_i),
    .DIVIDER (clock_divider_reg),
    .RST     (~rst_ni),
    .SD_CLK  (sd_clk)
  );

  assign sd_clk_o = sd_clk;

  // ----------------------------------------------------------------
  // Control registers (active on clk_i / system clock domain)
  // ----------------------------------------------------------------
  logic [1:0]  sd_align_reg;
  logic [31:0] sd_cmd_arg;
  logic [5:0]  sd_cmd_i_reg;
  logic [2:0]  sd_cmd_setting;
  logic        sd_cmd_start;
  logic        sd_reset_reg, sd_clk_rst, sd_data_rst, sd_cmd_rst;
  logic [15:0] sd_blkcnt;
  logic [11:0] sd_blksize;
  logic [31:0] sd_cmd_timeout;
  logic [2:0]  sd_data_start;
  logic [3:0]  irq_en_reg;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      sd_align_reg     <= '0;
      clock_divider_reg <= 8'd75; // ~200kHz default (30MHz / (2*76))
      sd_cmd_arg       <= '0;
      sd_cmd_i_reg     <= '0;
      sd_cmd_setting   <= '0;
      sd_data_start    <= '0;
      sd_cmd_start     <= '0;
      sd_reset_reg     <= '0;
      sd_clk_rst       <= '0;
      sd_data_rst      <= '0;
      sd_cmd_rst       <= '0;
      sd_blkcnt        <= '0;
      sd_blksize       <= '0;
      sd_cmd_timeout   <= 32'd1000000;
      irq_en_reg       <= '0;
    end else if (reg_we && reg_sel) begin
      case (wr_idx[3:0]) // Write registers decoded by addr[5:2]
        4'd0:  sd_align_reg     <= reg_wdata[1:0];
        4'd1:  clock_divider_reg <= reg_wdata[7:0];
        4'd2:  sd_cmd_arg       <= reg_wdata;
        4'd3:  sd_cmd_i_reg     <= reg_wdata[5:0];
        4'd4:  {sd_data_start, sd_cmd_setting} <= reg_wdata[5:0];
        4'd5:  sd_cmd_start     <= reg_wdata[0];
        4'd6:  {sd_reset_reg, sd_clk_rst, sd_data_rst, sd_cmd_rst} <= reg_wdata[3:0];
        4'd7:  sd_blkcnt        <= reg_wdata[15:0];
        4'd8:  sd_blksize       <= reg_wdata[11:0];
        4'd9:  sd_cmd_timeout   <= reg_wdata;
        4'd11: irq_en_reg       <= reg_wdata[3:0];
        default: ;
      endcase
    end
  end

  // ----------------------------------------------------------------
  // SD protocol engine (sd_top runs on sd_clk domain)
  // ----------------------------------------------------------------
  wire        sd_cmd_finish;
  wire        sd_data_finish;
  wire [31:0]  sd_response0;
  wire [63:32] sd_response1;
  wire [95:64] sd_response2;
  wire [126:96] sd_response3;
  wire        sd_crc_ok, sd_index_ok;
  wire [31:0] sd_cmd_wait, sd_data_wait;
  wire [27:4] sd_status;
  wire [31:0] sd_packet0;
  wire [15:0] sd_packet1;
  wire [6:0]  sd_crc_val, sd_crc_actual;
  wire        sd_rd, sd_we;
  wire [31:0] sd_data_from_card;
  wire [15:0] sd_transf_cnt;
  wire [3:0]  sd_dat_to_mem;
  wire        sd_cmd_to_mem;
  wire        sd_cmd_oe_int, sd_dat_oe_int;
  wire [9:0]  sd_xfr_addr;

  // Output enable registered on negedge sd_clk (matching sd_top convention)
  reg         sd_cmd_oe_reg, sd_dat_oe_reg;
  reg         sd_cmd_out_reg;
  reg  [3:0]  sd_dat_out_reg;

  always @(negedge sd_clk or negedge rst_ni) begin
    if (!rst_ni) begin
      sd_cmd_oe_reg  <= 1'b0;
      sd_cmd_out_reg <= 1'b1;
      sd_dat_oe_reg  <= 1'b0;
      sd_dat_out_reg <= 4'hF;
    end else begin
      sd_cmd_oe_reg  <= sd_cmd_oe_int;
      sd_cmd_out_reg <= sd_cmd_to_mem;
      sd_dat_oe_reg  <= sd_dat_oe_int;
      sd_dat_out_reg <= sd_dat_to_mem;
    end
  end

  assign sd_cmd_o    = sd_cmd_out_reg;
  assign sd_cmd_oe_o = sd_cmd_oe_reg;
  assign sd_dat_o    = sd_dat_out_reg;
  assign sd_dat_oe_o = sd_dat_oe_reg;

  // TX data from buffer to SD controller (byte-swapped for SD endianness)
  wire [31:0] tx_data_swapped;
  wire [31:0] tx_data_raw;

  assign tx_data_swapped = {tx_data_raw[7:0], tx_data_raw[15:8],
                            tx_data_raw[23:16], tx_data_raw[31:24]};

  sd_top u_sd_top (
    .sd_clk          (sd_clk),
    .cmd_rst         (~(sd_cmd_rst & rst_ni)),
    .data_rst        (~(sd_data_rst & rst_ni)),
    .setting_i       (sd_cmd_setting),
    .start_i         (sd_cmd_start),
    .arg_i           (sd_cmd_arg),
    .cmd_i           (sd_cmd_i_reg),
    .timeout_i       (sd_cmd_timeout),
    .sd_data_start_i (sd_data_start),
    .sd_align_i      (sd_align_reg),
    .sd_blkcnt_i     (sd_blkcnt),
    .sd_blksize_i    (sd_blksize),
    .sd_data_i       (tx_data_swapped),
    .sd_dat_to_host  (sd_dat_i),
    .sd_cmd_to_host  (sd_cmd_i),
    // Outputs
    .response0_o     (sd_response0),
    .response1_o     (sd_response1),
    .response2_o     (sd_response2),
    .response3_o     (sd_response3),
    .wait_o          (sd_cmd_wait),
    .wait_data_o     (sd_data_wait),
    .status_o        (sd_status),
    .packet0_o       (sd_packet0),
    .packet1_o       (sd_packet1),
    .crc_val_o       (sd_crc_val),
    .crc_actual_o    (sd_crc_actual),
    .finish_cmd_o    (sd_cmd_finish),
    .finish_data_o   (sd_data_finish),
    .crc_ok_o        (sd_crc_ok),
    .index_ok_o      (sd_index_ok),
    .sd_rd_o         (sd_rd),
    .sd_we_o         (sd_we),
    .sd_data_o       (sd_data_from_card),
    .transf_cnt_o    (sd_transf_cnt),
    .sd_dat_to_mem   (sd_dat_to_mem),
    .sd_cmd_to_mem   (sd_cmd_to_mem),
    .sd_cmd_oe       (sd_cmd_oe_int),
    .sd_dat_oe       (sd_dat_oe_int),
    .sd_xfr_addr     (sd_xfr_addr)
  );

  // ----------------------------------------------------------------
  // Data buffer: 1024-word (4KB) true dual-port block RAM
  //   Port A: CPU side (clk_i), addressed by reg_addr
  //   Port B: SD controller side (negedge sd_clk), addressed by sd_xfr_addr
  //
  // Direct RAMB36E1 instantiation (Artix-7 primitive) to guarantee
  // correct cross-clock-domain dual-port operation. Supports up to 8
  // blocks (4KB) for multi-block SD transfers.
  // ----------------------------------------------------------------

  // RX: byte-swap data coming from SD card before storing
  wire [31:0] rx_data_swapped = {sd_data_from_card[7:0], sd_data_from_card[15:8],
                                  sd_data_from_card[23:16], sd_data_from_card[31:24]};

  // Port B clock: inverted sd_clk (posedge = negedge sd_clk, matching sd_top timing)
  wire sd_clk_b = ~sd_clk;

  // Port enables
  wire        port_a_en = buf_sel & (reg_re | reg_we);
  wire        port_a_we = reg_we & buf_sel;
  wire        port_b_en = sd_rd | sd_we;
  wire        port_b_we = sd_we;

  // Port read data wires
  wire [31:0] buf_rdata_bram;
  wire [31:0] tx_data_raw_bram;

  assign tx_data_raw = tx_data_raw_bram;

  // Latch read mux selects for AccessLatency(1): adapter samples rdata_i
  // one cycle after re_o, so we need stable select signals at that point.
  // BRAM output is also valid one cycle after ENARDEN, matching perfectly.
  reg        buf_sel_q;
  reg [4:0]  rd_idx_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      buf_sel_q <= 1'b0;
      rd_idx_q  <= 5'd0;
    end else if (reg_re) begin
      buf_sel_q <= buf_sel;
      rd_idx_q  <= rd_idx;
    end
  end

  // RAMB36E1: 36Kb true dual-port block RAM (Artix-7)
  // Configured as 1K x 36 (width-36 TDP), using all 1024 locations (4KB).
  // Address mapping for width 36: ADDR[15:5] = {1'b1, addr[9:0]}, ADDR[4:0] = 0
  RAMB36E1 #(
    .DOA_REG            (0),
    .DOB_REG            (0),
    .EN_ECC_READ        ("FALSE"),
    .EN_ECC_WRITE       ("FALSE"),
    .RAM_MODE           ("TDP"),
    .READ_WIDTH_A       (36),
    .READ_WIDTH_B       (36),
    .WRITE_WIDTH_A      (36),
    .WRITE_WIDTH_B      (36),
    .WRITE_MODE_A       ("READ_FIRST"),
    .WRITE_MODE_B       ("READ_FIRST"),
    .SIM_DEVICE         ("7SERIES"),
    .SIM_COLLISION_CHECK("ALL"),
    .RSTREG_PRIORITY_A  ("RSTREG"),
    .RSTREG_PRIORITY_B  ("RSTREG"),
    .SRVAL_A            (36'h000000000),
    .SRVAL_B            (36'h000000000),
    .INIT_A             (36'h000000000),
    .INIT_B             (36'h000000000)
  ) u_data_buf (
    // Port A: CPU (posedge clk_i)
    .CLKARDCLK          (clk_i),
    .ENARDEN             (port_a_en),
    .WEA                 ({4{port_a_we}}),
    .ADDRARDADDR         ({1'b1, buf_word_addr, 5'b00000}),
    .DIADI               (reg_wdata),
    .DIPADIP             (4'b0000),
    .DOADO               (buf_rdata_bram),
    .DOPADOP             (),
    .RSTRAMARSTRAM       (1'b0),
    .RSTREGARSTREG       (1'b0),
    .REGCEAREGCE         (1'b0),

    // Port B: SD controller (posedge sd_clk_b = negedge sd_clk)
    .CLKBWRCLK           (sd_clk_b),
    .ENBWREN             (port_b_en),
    .WEBWE               ({4'b0000, {4{port_b_we}}}),
    .ADDRBWRADDR         ({1'b1, sd_xfr_addr[9:0], 5'b00000}),
    .DIBDI               (rx_data_swapped),
    .DIPBDIP             (4'b0000),
    .DOBDO               (tx_data_raw_bram),
    .DOPBDOP             (),
    .RSTRAMB             (1'b0),
    .RSTREGB             (1'b0),
    .REGCEB              (1'b0),

    // Cascade (unused)
    .CASCADEINA          (1'b0),
    .CASCADEINB          (1'b0),
    .CASCADEOUTA         (),
    .CASCADEOUTB         (),

    // ECC (unused)
    .DBITERR             (),
    .ECCPARITY           (),
    .RDADDRECC           (),
    .SBITERR             (),
    .INJECTDBITERR       (1'b0),
    .INJECTSBITERR       (1'b0)
  );

  // ----------------------------------------------------------------
  // Interrupt logic
  // ----------------------------------------------------------------
  // Synchronize finish signals from sd_clk to clk_i domain
  reg sd_cmd_finish_sync1, sd_cmd_finish_sync2;
  reg sd_data_finish_sync1, sd_data_finish_sync2;
  reg sd_cmd_finish_prev, sd_data_finish_prev;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      sd_cmd_finish_sync1  <= '0;
      sd_cmd_finish_sync2  <= '0;
      sd_data_finish_sync1 <= '0;
      sd_data_finish_sync2 <= '0;
      sd_cmd_finish_prev   <= '0;
      sd_data_finish_prev  <= '0;
    end else begin
      sd_cmd_finish_sync1  <= sd_cmd_finish;
      sd_cmd_finish_sync2  <= sd_cmd_finish_sync1;
      sd_data_finish_sync1 <= sd_data_finish;
      sd_data_finish_sync2 <= sd_data_finish_sync1;
      sd_cmd_finish_prev   <= sd_cmd_finish_sync2;
      sd_data_finish_prev  <= sd_data_finish_sync2;
    end
  end

  wire cmd_finish_edge  = sd_cmd_finish_sync2  & ~sd_cmd_finish_prev;
  wire data_finish_edge = sd_data_finish_sync2 & ~sd_data_finish_prev;

  // Card detect synchronization and edge detection
  reg sd_detect_sync1, sd_detect_sync2, sd_detect_prev;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      sd_detect_sync1 <= 1'b1;
      sd_detect_sync2 <= 1'b1;
      sd_detect_prev  <= 1'b1;
    end else begin
      sd_detect_sync1 <= sd_detect_i;
      sd_detect_sync2 <= sd_detect_sync1;
      sd_detect_prev  <= sd_detect_sync2;
    end
  end

  // detect=0 means card present, detect=1 means absent (active-low)
  wire card_removed_edge  = ~sd_detect_prev &  sd_detect_sync2; // 0→1 = card removed
  wire card_inserted_edge = sd_detect_prev  & ~sd_detect_sync2; // 1→0 = card inserted

  // IRQ status register (set on event, write-1-to-clear)
  reg [3:0] irq_status;
  // Separate write-1-to-clear register at write index 12 (was unused)
  wire [3:0] irq_clear = (reg_we && reg_sel && wr_idx[3:0] == 4'd12)
                          ? reg_wdata[3:0] : 4'b0;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      irq_status <= '0;
    end else begin
      // Set bits on events, clear bits written as 1 to clear register
      irq_status[0] <= (irq_status[0] & ~irq_clear[0]) | cmd_finish_edge;
      irq_status[1] <= (irq_status[1] & ~irq_clear[1]) | data_finish_edge;
      irq_status[2] <= (irq_status[2] & ~irq_clear[2]) | card_removed_edge;
      irq_status[3] <= (irq_status[3] & ~irq_clear[3]) | card_inserted_edge;
    end
  end

  assign irq_o = |(irq_status & irq_en_reg);

  // ----------------------------------------------------------------
  // Status register assembly (matching sd_bus.sv layout)
  // ----------------------------------------------------------------
  wire [31:0] status_word = {sd_status, 4'b0};

  // ----------------------------------------------------------------
  // Cross-domain register sampling (sd_clk → clk_i)
  // Sample sd_top outputs into clk_i domain for CPU reads
  // ----------------------------------------------------------------
  reg [31:0]  resp0_reg;
  reg [31:0]  resp1_reg;
  reg [31:0]  resp2_reg;
  reg [30:0]  resp3_reg;
  reg [31:0] cmd_wait_reg, data_wait_reg;
  reg [31:0] status_reg;
  reg [31:0] packet0_reg;
  reg [15:0] packet1_reg;
  reg [15:0] transf_cnt_reg;
  reg        detect_reg;
  reg [9:0]  xfr_addr_reg;

  always_ff @(posedge clk_i) begin
    resp0_reg      <= sd_response0;
    resp1_reg      <= sd_response1[63:32];
    resp2_reg      <= sd_response2[95:64];
    resp3_reg      <= sd_response3[126:96];
    cmd_wait_reg   <= sd_cmd_wait;
    data_wait_reg  <= sd_data_wait;
    status_reg     <= status_word;
    packet0_reg    <= sd_packet0;
    packet1_reg    <= sd_packet1;
    transf_cnt_reg <= sd_transf_cnt;
    detect_reg     <= sd_detect_sync2;
    xfr_addr_reg   <= sd_xfr_addr;
  end

  // ----------------------------------------------------------------
  // Read multiplexer
  // ----------------------------------------------------------------
  always_comb begin
    reg_rdata = 32'hDEADBEEF;
    if (buf_sel_q) begin
      reg_rdata = buf_rdata_bram;
    end else begin
      case (rd_idx_q)
        5'd0:  reg_rdata = resp0_reg;
        5'd1:  reg_rdata = resp1_reg;
        5'd2:  reg_rdata = resp2_reg;
        5'd3:  reg_rdata = {1'b0, resp3_reg};
        5'd4:  reg_rdata = cmd_wait_reg;
        5'd5:  reg_rdata = status_reg;
        5'd6:  reg_rdata = packet0_reg;
        5'd7:  reg_rdata = {16'b0, packet1_reg};
        5'd8:  reg_rdata = data_wait_reg;
        5'd9:  reg_rdata = {16'b0, transf_cnt_reg};
        5'd10: reg_rdata = 32'b0; // rx_fifo_status (unused)
        5'd11: reg_rdata = 32'b0; // tx_fifo_status (unused)
        5'd12: reg_rdata = {31'b0, detect_reg};
        5'd13: reg_rdata = {22'b0, xfr_addr_reg};
        5'd14: reg_rdata = {28'b0, irq_status};
        5'd15: reg_rdata = 32'h5D_02_16_05; // Version: "SD" + date 2026-02-16 + rev 5 (4KB multi-block buffer)
        // Register readbacks (16-27)
        5'd16: reg_rdata = {30'b0, sd_align_reg};
        5'd17: reg_rdata = {24'b0, clock_divider_reg};
        5'd18: reg_rdata = sd_cmd_arg;
        5'd19: reg_rdata = {26'b0, sd_cmd_i_reg};
        5'd20: reg_rdata = {26'b0, sd_data_start, sd_cmd_setting};
        5'd21: reg_rdata = {31'b0, sd_cmd_start};
        5'd22: reg_rdata = {28'b0, sd_reset_reg, sd_clk_rst, sd_data_rst, sd_cmd_rst};
        5'd23: reg_rdata = {16'b0, sd_blkcnt};
        5'd24: reg_rdata = {20'b0, sd_blksize};
        5'd25: reg_rdata = sd_cmd_timeout;
        5'd26: reg_rdata = 32'b0; // clk_pll (unused)
        5'd27: reg_rdata = {28'b0, irq_en_reg};
        default: reg_rdata = 32'hDEADBEEF;
      endcase
    end
  end

endmodule

`default_nettype wire
