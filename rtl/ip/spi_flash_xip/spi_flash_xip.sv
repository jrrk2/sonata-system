// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// QSPI XIP (Execute-In-Place) controller for W25Q256 NOR flash.
//
// Memory-maps up to 32 MB of flash via Quad I/O Fast Read (0xEC).
// Provides two TileLink-UL subordinate interfaces:
//   tl_i / tl_o       — XIP memory-mapped read path (existing)
//   tl_reg_i / tl_reg_o — Register interface for runtime config + raw SPI
//
// Register map (base typically 0x80130000, 256 bytes):
//   0x00 CTRL     RW  [7:0] SPI clock divider, [8] XIP enable (default 1)
//   0x04 STATUS   RO  [0] busy, [1] XIP idle
//   0x08 CMD      WO  Write triggers raw SPI transaction
//                     [7:0] command byte, [8] quad data phase,
//                     [15:12] dummy cycles, [19:16] addr bytes (0-4),
//                     [9] data length bit 8 (MSB)
//                     [31:24] data length bits [7:0] (total 9-bit, 0-256)
//   0x0C ADDR     RW  Flash address for raw SPI commands
//   0x10 WDATA    WO  TX FIFO push (uses byte enables)
//   0x14 RDATA    RO  RX FIFO pop
//   0x18 FIFO_STS RO  [7:0] TX FIFO level, [15:8] RX FIFO level
//
// SPI clock = sys_clk / (2 * (clk_div + 1)).

`include "prim_assert.sv"

module spi_flash_xip
  import tlul_pkg::*;
  import prim_mubi_pkg::mubi4_t;
#(
  parameter int unsigned AddrWidth     = 25,  // 32 MB = 2^25
  parameter int unsigned DataWidth     = 32,
  parameter int unsigned SpiClkDiv     = 0,   // Default: sys_clk / 2 (reset value for CTRL reg)
  parameter int unsigned LineSizeBytes = 32,  // Prefetch line (power of 2, >= 4)
  parameter int unsigned RegAw         = 8    // Register address width (256 bytes)
) (
  input  logic clk_i,
  input  logic rst_ni,

  // TileLink-UL subordinate: XIP memory-mapped reads
  input  tl_h2d_t tl_i,
  output tl_d2h_t tl_o,

  // TileLink-UL subordinate: Register interface
  input  tl_h2d_t tl_reg_i,
  output tl_d2h_t tl_reg_o,

  // QSPI flash pins
  output logic       spi_clk_o,
  output logic       spi_cs_n_o,
  output logic [3:0] spi_d_o,
  input  logic [3:0] spi_d_i,
  output logic [3:0] spi_d_oe_o  // 1 = output, 0 = input
);

  // ---------------------------------------------------------------------------
  // Derived constants
  // ---------------------------------------------------------------------------
  localparam int unsigned SramAw      = AddrWidth - 2;  // Word address width
  localparam int unsigned LineWords   = LineSizeBytes / 4;
  localparam int unsigned LineOffBits = $clog2(LineWords);
  localparam int unsigned TagBits     = SramAw - LineOffBits;

  // Clock divider is now runtime — use 8-bit counter always
  localparam int unsigned ClkCntW = 8;

  // W25Q256 commands
  localparam logic [7:0] CMD_QUAD_IO_READ_4B = 8'hEC;
  localparam logic [7:0] CMD_ENABLE_RESET    = 8'h66;
  localparam logic [7:0] CMD_RESET_DEVICE    = 8'h99;

  // Reset recovery: 30 us @ 40 MHz = 1200 cycles; use 2048 for margin
  localparam int unsigned RESET_WAIT = 2048;

  // Number of SPI clocks for each READ phase
  localparam int unsigned DATA_CLKS = LineSizeBytes * 2;  // 2 clocks per byte (quad)

  // Register offsets
  localparam logic [RegAw-1:0] REG_CTRL     = 8'h00;
  localparam logic [RegAw-1:0] REG_STATUS   = 8'h04;
  localparam logic [RegAw-1:0] REG_CMD      = 8'h08;
  localparam logic [RegAw-1:0] REG_ADDR     = 8'h0C;
  localparam logic [RegAw-1:0] REG_WDATA    = 8'h10;
  localparam logic [RegAw-1:0] REG_RDATA    = 8'h14;
  localparam logic [RegAw-1:0] REG_FIFO_STS = 8'h18;

  // ---------------------------------------------------------------------------
  // TileLink adapter → SRAM-like interface (XIP read path)
  // ---------------------------------------------------------------------------
  logic                  mem_req;
  logic                  mem_gnt;
  logic                  mem_we;
  logic [SramAw-1:0]     mem_addr;
  logic [DataWidth-1:0]  mem_wdata;
  logic [DataWidth-1:0]  mem_wmask;
  logic [DataWidth-1:0]  mem_rdata;
  logic                  mem_rvalid;

  // Tie-offs for unused adapter ports
  logic       unused_intg_error, unused_compound, unused_readback_error, unused_wdata_cap;
  mubi4_t     unused_req_type;
  logic       unused_wdata, unused_wmask;
  assign unused_wdata = ^mem_wdata;
  assign unused_wmask = ^mem_wmask;
  logic       unused_data_clks;
  assign unused_data_clks = (DATA_CLKS != 0);

  tlul_adapter_sram #(
    .SramAw      (SramAw),
    .SramDw      (DataWidth),
    .Outstanding (1),
    .ByteAccess  (0),
    .ErrOnWrite  (1),
    .ErrOnRead   (0)
  ) u_tl_adapter (
    .clk_i,
    .rst_ni,
    .tl_i,
    .tl_o,
    .en_ifetch_i (prim_mubi_pkg::MuBi4True),
    .req_o       (mem_req),
    .req_type_o  (unused_req_type),
    .gnt_i       (mem_gnt),
    .we_o        (mem_we),
    .addr_o      (mem_addr),
    .wdata_o     (mem_wdata),
    .wdata_cap_o (unused_wdata_cap),
    .wmask_o     (mem_wmask),
    .intg_error_o(unused_intg_error),
    .rdata_i     (mem_rdata),
    .rdata_cap_i (1'b0),
    .rvalid_i    (mem_rvalid),
    .rerror_i    (2'b00),
    .compound_txn_in_progress_o (unused_compound),
    .readback_en_i              (prim_mubi_pkg::MuBi4False),
    .readback_error_o           (unused_readback_error),
    .wr_collision_i             (1'b0),
    .write_pending_i            (1'b0)
  );

  // ---------------------------------------------------------------------------
  // TileLink adapter → Register interface
  // ---------------------------------------------------------------------------
  logic              reg_re;
  logic              reg_we;
  logic [RegAw-1:0]  reg_addr;
  logic [31:0]       reg_wdata;
  logic [3:0]        reg_be;
  logic [31:0]       reg_rdata;
  logic              reg_error;
  logic              reg_busy;
  logic              unused_reg_intg_error;

  tlul_adapter_reg #(
    .RegAw         (RegAw),
    .RegDw         (32),
    .AccessLatency (0)
  ) u_tl_reg_adapter (
    .clk_i,
    .rst_ni,
    .tl_i        (tl_reg_i),
    .tl_o        (tl_reg_o),
    .en_ifetch_i (prim_mubi_pkg::MuBi4False),
    .intg_error_o(unused_reg_intg_error),
    .re_o        (reg_re),
    .we_o        (reg_we),
    .addr_o      (reg_addr),
    .wdata_o     (reg_wdata),
    .be_o        (reg_be),
    .busy_i      (reg_busy),
    .rdata_i     (reg_rdata),
    .error_i     (reg_error)
  );

  // Busy during WDATA push FSM; never error on valid register addresses
  assign reg_busy  = wdata_push;
  assign reg_error = 1'b0;

  // ---------------------------------------------------------------------------
  // Registers
  // ---------------------------------------------------------------------------
  logic [7:0]  clk_div_reg;     // CTRL[7:0]
  logic        xip_en_reg;      // CTRL[8]
  logic [31:0] raw_cmd_reg;     // CMD register (latched on write)
  logic [31:0] raw_addr_reg;    // ADDR register
  logic        cmd_trigger;     // Pulse when CMD is written

  // Decode CMD fields
  logic [7:0]  cmd_opcode;
  logic        cmd_quad_data;
  logic [3:0]  cmd_dummy_cyc;
  logic [3:0]  cmd_addr_bytes;
  logic [8:0]  cmd_data_len;

  assign cmd_opcode    = raw_cmd_reg[7:0];
  assign cmd_quad_data = raw_cmd_reg[8];
  assign cmd_dummy_cyc = raw_cmd_reg[15:12];
  assign cmd_addr_bytes = raw_cmd_reg[19:16];
  assign cmd_data_len  = {raw_cmd_reg[9], raw_cmd_reg[31:24]};

  // ---------------------------------------------------------------------------
  // TX/RX FIFOs — 256-byte arrays, inferred as block RAM
  // ---------------------------------------------------------------------------
  logic [7:0] tx_fifo [256];
  logic [8:0] tx_wr_ptr;  // 9-bit to distinguish full from empty
  logic [8:0] tx_rd_ptr;
  logic [8:0] tx_level;  // 9-bit to distinguish full (256) from empty (0)

  logic [7:0] rx_fifo [256];
  logic [8:0] rx_wr_ptr;
  logic [8:0] rx_rd_ptr;
  logic [8:0] rx_level;  // 9-bit to distinguish full (256) from empty (0)

  assign tx_level = tx_wr_ptr - tx_rd_ptr;
  assign rx_level = rx_wr_ptr - rx_rd_ptr;

  // Pre-fetch registers for synchronous BRAM reads
  logic [7:0] tx_rd_data;
  logic [7:0] rx_rd_data;

  always_ff @(posedge clk_i) begin
    tx_rd_data <= tx_fifo[tx_rd_ptr[7:0]];
    rx_rd_data <= rx_fifo[rx_rd_ptr[7:0]];
  end

  // WDATA push FSM — serializes 4-byte word writes into 1 byte/cycle
  logic [31:0] wdata_stage;
  logic [3:0]  wdata_be_stage;
  logic        wdata_push;
  logic [1:0]  wdata_byte_idx;

  // ---------------------------------------------------------------------------
  // Prefetch line buffer
  // ---------------------------------------------------------------------------
  logic [DataWidth-1:0] line_buf [LineWords];
  logic [TagBits-1:0]   line_tag;
  logic                 line_valid;

  // ---------------------------------------------------------------------------
  // SPI clock generation — runtime divider
  // ---------------------------------------------------------------------------
  logic [ClkCntW-1:0] clk_cnt;
  logic                spi_clk_q;
  logic                spi_clk_rise;
  logic                spi_clk_fall;
  logic                spi_active;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      clk_cnt   <= '0;
      spi_clk_q <= 1'b0;
    end else if (spi_active) begin
      if (clk_cnt == clk_div_reg) begin
        clk_cnt   <= '0;
        spi_clk_q <= ~spi_clk_q;
      end else begin
        clk_cnt <= clk_cnt + 8'd1;
      end
    end else begin
      clk_cnt   <= '0;
      spi_clk_q <= 1'b0;
    end
  end

  assign spi_clk_rise = spi_active && (clk_cnt == clk_div_reg) && !spi_clk_q;
  assign spi_clk_fall = spi_active && (clk_cnt == clk_div_reg) &&  spi_clk_q;
  assign spi_clk_o    = spi_clk_q;

  // ---------------------------------------------------------------------------
  // State machine
  // ---------------------------------------------------------------------------
  typedef enum logic [4:0] {
    // Reset sequence
    ST_RST_CS1_LO,   // Assert CS, send Enable Reset (0x66)
    ST_RST_CS1_HI,   // Deassert CS after 0x66
    ST_RST_CS2_LO,   // Assert CS, send Reset (0x99)
    ST_RST_CS2_HI,   // Deassert CS after 0x99
    ST_RST_WAIT,     // Wait tRST recovery
    // XIP read
    ST_IDLE,
    ST_CS_ASSERT,
    ST_CMD,           // 0xEC on d0 (8 SPI clocks, single)
    ST_ADDR,          // 4-byte addr on d0-d3 (8 SPI clocks, quad)
    ST_DUMMY,         // Mode + dummy (6 SPI clocks)
    ST_READ,          // Data on d0-d3 (DATA_CLKS SPI clocks)
    ST_CS_DEASSERT,
    ST_RESPOND,
    // Raw SPI command
    ST_RAW_CS_LO,    // Assert CS
    ST_RAW_CMD,      // Send command byte (8 SPI clocks, single d0)
    ST_RAW_ADDR,     // Send address bytes (8*N SPI clocks, single d0)
    ST_RAW_DUMMY,    // Dummy cycles
    ST_RAW_DATA_WR,  // Write data from TX FIFO
    ST_RAW_DATA_RD,  // Read data into RX FIFO
    ST_RAW_CS_HI     // Deassert CS, return to idle
  } state_e;

  state_e state_q;

  // Shift register for serial output
  logic [31:0] shift_q;

  // SPI clock counter within a phase
  logic [10:0] phase_cnt;

  // Flash byte address (aligned to line boundary) for XIP
  logic [AddrWidth-1:0] flash_addr;

  // RX assembly for XIP: byte index and nibble tracking
  logic [$clog2(LineSizeBytes)-1:0] rx_byte_idx;
  logic                             rx_hi;
  logic [3:0]                       rx_nib_hi;

  // Saved TileLink request
  logic [SramAw-1:0] req_addr_q;

  // Reset recovery counter
  logic [$clog2(RESET_WAIT)-1:0] rst_wait_cnt;

  // Combinational helpers for byte → line_buf storage
  logic [LineOffBits-1:0] rx_word_idx;
  logic [1:0]             rx_byte_pos;
  logic [7:0]             rx_full_byte;
  assign rx_word_idx = rx_byte_idx[$clog2(LineSizeBytes)-1:2];
  assign rx_byte_pos = rx_byte_idx[1:0];
  assign rx_full_byte = {rx_nib_hi, spi_d_i};

  // Raw SPI counters
  logic [7:0] raw_bit_cnt;     // Bit counter within phase
  logic [8:0] raw_byte_cnt;    // Byte counter for addr/data phases (9-bit for 256-byte pages)
  logic       raw_rx_hi;       // High/low nibble tracker for quad reads
  logic [3:0] raw_rx_nib_hi;   // Saved high nibble for quad reads

  // Busy flag: SPI engine not idle
  logic spi_busy;
  assign spi_busy = (state_q != ST_IDLE);

  // ---------------------------------------------------------------------------
  // Register read mux
  // ---------------------------------------------------------------------------
  always_comb begin
    reg_rdata = 32'h0;
    case (reg_addr)
      REG_CTRL:     reg_rdata = {23'h0, xip_en_reg, clk_div_reg};
      REG_STATUS:   reg_rdata = {30'h0, (state_q == ST_IDLE), spi_busy};
      REG_CMD:      reg_rdata = raw_cmd_reg;
      REG_ADDR:     reg_rdata = raw_addr_reg;
      REG_WDATA:    reg_rdata = 32'h0;  // Write-only
      REG_RDATA:    reg_rdata = {24'h0, (rx_level != 0) ? rx_rd_data : 8'h0};
      REG_FIFO_STS: reg_rdata = {14'h0, rx_level, tx_level};
      default:      reg_rdata = 32'h0;
    endcase
  end

  // ---------------------------------------------------------------------------
  // Register writes & FIFO operations
  // ---------------------------------------------------------------------------
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      clk_div_reg    <= ClkCntW'(SpiClkDiv);
      xip_en_reg     <= 1'b1;
      raw_cmd_reg    <= 32'h0;
      raw_addr_reg   <= 32'h0;
      cmd_trigger    <= 1'b0;
      tx_wr_ptr      <= 9'h0;
      rx_rd_ptr      <= 9'h0;
      wdata_push     <= 1'b0;
      wdata_byte_idx <= 2'd0;
      wdata_stage    <= 32'h0;
      wdata_be_stage <= 4'h0;
    end else begin
      cmd_trigger <= 1'b0;

      // WDATA push FSM: serialize word writes into single-byte FIFO pushes
      if (wdata_push) begin
        if (wdata_be_stage[wdata_byte_idx]) begin
          tx_fifo[tx_wr_ptr[7:0]] <= wdata_stage[wdata_byte_idx*8 +: 8];
          tx_wr_ptr <= tx_wr_ptr + 9'd1;
        end
        if (wdata_byte_idx == 2'd3)
          wdata_push <= 1'b0;
        else
          wdata_byte_idx <= wdata_byte_idx + 2'd1;
      end

      // Register writes
      if (reg_we && !wdata_push) begin
        case (reg_addr)
          REG_CTRL: begin
            if (reg_be[0]) clk_div_reg <= reg_wdata[7:0];
            if (reg_be[1]) xip_en_reg  <= reg_wdata[8];
          end
          REG_CMD: begin
            raw_cmd_reg <= reg_wdata;
            cmd_trigger <= 1'b1;
          end
          REG_ADDR: begin
            raw_addr_reg <= reg_wdata;
          end
          REG_WDATA: begin
            // Latch word and byte enables, start push FSM
            wdata_stage    <= reg_wdata;
            wdata_be_stage <= reg_be;
            wdata_push     <= 1'b1;
            wdata_byte_idx <= 2'd0;
          end
          default: ;
        endcase
      end

      // RX FIFO pop on read of RDATA
      if (reg_re && reg_addr == REG_RDATA && rx_level != 0) begin
        rx_rd_ptr <= rx_rd_ptr + 9'd1;
      end
    end
  end

  // ---------------------------------------------------------------------------
  // Main state machine
  // ---------------------------------------------------------------------------
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q      <= ST_RST_CS1_LO;
      shift_q      <= {CMD_ENABLE_RESET, 24'b0};
      phase_cnt    <= '0;
      line_valid   <= 1'b0;
      line_tag     <= '0;
      req_addr_q   <= '0;
      flash_addr   <= '0;
      rx_byte_idx  <= '0;
      rx_hi        <= 1'b0;
      rx_nib_hi    <= '0;
      rst_wait_cnt <= '0;
      mem_rvalid   <= 1'b0;
      mem_rdata    <= '0;
      raw_bit_cnt  <= '0;
      raw_byte_cnt <= '0;
      raw_rx_hi    <= 1'b0;
      raw_rx_nib_hi <= '0;
      tx_rd_ptr    <= 9'h0;
      rx_wr_ptr    <= 9'h0;
      for (int i = 0; i < LineWords; i++)
        line_buf[i] <= '0;
    end else begin
      // Default: rvalid pulses for one cycle
      mem_rvalid <= 1'b0;

      case (state_q)
        // =============================================================
        // Reset sequence
        // =============================================================

        ST_RST_CS1_LO: begin
          if (spi_clk_fall) begin
            shift_q <= {shift_q[30:0], 1'b0};
            if (phase_cnt == 7) begin
              phase_cnt <= '0;
              state_q   <= ST_RST_CS1_HI;
            end else begin
              phase_cnt <= phase_cnt + 11'd1;
            end
          end
        end

        ST_RST_CS1_HI: begin
          shift_q   <= {CMD_RESET_DEVICE, 24'b0};
          phase_cnt <= '0;
          state_q   <= ST_RST_CS2_LO;
        end

        ST_RST_CS2_LO: begin
          if (spi_clk_fall) begin
            shift_q <= {shift_q[30:0], 1'b0};
            if (phase_cnt == 7) begin
              phase_cnt    <= '0;
              rst_wait_cnt <= '0;
              state_q      <= ST_RST_CS2_HI;
            end else begin
              phase_cnt <= phase_cnt + 11'd1;
            end
          end
        end

        ST_RST_CS2_HI: begin
          state_q <= ST_RST_WAIT;
        end

        ST_RST_WAIT: begin
          if (rst_wait_cnt == ($clog2(RESET_WAIT))'(RESET_WAIT - 1)) begin
            state_q <= ST_IDLE;
          end else begin
            rst_wait_cnt <= rst_wait_cnt + 1'b1;
          end
        end

        // =============================================================
        // Idle — handle XIP reads or raw SPI commands
        // =============================================================

        ST_IDLE: begin
          // Raw SPI command has priority
          if (cmd_trigger) begin
            // Reset FIFOs read/write pointers for RX
            rx_wr_ptr    <= rx_rd_ptr;  // Effectively clear RX FIFO
            shift_q      <= {cmd_opcode, 24'b0};
            raw_bit_cnt  <= '0;
            raw_byte_cnt <= '0;
            raw_rx_hi    <= 1'b0;
            state_q      <= ST_RAW_CS_LO;
            // Invalidate XIP prefetch when doing raw SPI
            line_valid   <= 1'b0;
          end else if (mem_req && !mem_we) begin
            req_addr_q <= mem_addr;
            if (line_valid &&
                (mem_addr[SramAw-1 -: TagBits] == line_tag)) begin
              mem_rdata  <= line_buf[mem_addr[LineOffBits-1:0]];
              mem_rvalid <= 1'b1;
            end else begin
              flash_addr <= {mem_addr[SramAw-1 -: TagBits],
                             {LineOffBits{1'b0}}, 2'b00};
              state_q    <= ST_CS_ASSERT;
            end
          end
        end

        // =============================================================
        // XIP read sequence (unchanged from original)
        // =============================================================

        ST_CS_ASSERT: begin
          shift_q   <= {CMD_QUAD_IO_READ_4B, 24'b0};
          phase_cnt <= '0;
          state_q   <= ST_CMD;
        end

        ST_CMD: begin
          if (spi_clk_fall) begin
            shift_q <= {shift_q[30:0], 1'b0};
            if (phase_cnt == 7) begin
              shift_q   <= {{(32-AddrWidth){1'b0}}, flash_addr};
              phase_cnt <= '0;
              state_q   <= ST_ADDR;
            end else begin
              phase_cnt <= phase_cnt + 11'd1;
            end
          end
        end

        ST_ADDR: begin
          if (spi_clk_fall) begin
            shift_q <= {shift_q[27:0], 4'b0};
            if (phase_cnt == 7) begin
              shift_q   <= {8'hFF, 24'b0};
              phase_cnt <= '0;
              state_q   <= ST_DUMMY;
            end else begin
              phase_cnt <= phase_cnt + 11'd1;
            end
          end
        end

        ST_DUMMY: begin
          if (spi_clk_fall) begin
            shift_q <= {shift_q[27:0], 4'b0};
            if (phase_cnt == 5) begin
              phase_cnt   <= '0;
              rx_byte_idx <= '0;
              rx_hi       <= 1'b0;
              state_q     <= ST_READ;
            end else begin
              phase_cnt <= phase_cnt + 11'd1;
            end
          end
        end

        ST_READ: begin
          if (spi_clk_rise) begin
            if (!rx_hi) begin
              rx_nib_hi <= spi_d_i;
              rx_hi     <= 1'b1;
            end else begin
              rx_hi <= 1'b0;
              case (rx_byte_pos)
                2'd0: line_buf[rx_word_idx][ 7: 0] <= rx_full_byte;
                2'd1: line_buf[rx_word_idx][15: 8] <= rx_full_byte;
                2'd2: line_buf[rx_word_idx][23:16] <= rx_full_byte;
                2'd3: line_buf[rx_word_idx][31:24] <= rx_full_byte;
              endcase
              if (rx_byte_idx == ($clog2(LineSizeBytes))'(LineSizeBytes - 1)) begin
                state_q <= ST_CS_DEASSERT;
              end else begin
                rx_byte_idx <= rx_byte_idx + 1'b1;
              end
            end
          end
        end

        ST_CS_DEASSERT: begin
          line_tag   <= req_addr_q[SramAw-1 -: TagBits];
          line_valid <= 1'b1;
          state_q    <= ST_RESPOND;
        end

        ST_RESPOND: begin
          mem_rdata  <= line_buf[req_addr_q[LineOffBits-1:0]];
          mem_rvalid <= 1'b1;
          state_q    <= ST_IDLE;
        end

        // =============================================================
        // Raw SPI command sequence
        // =============================================================

        // One dead cycle with CS low before clocking
        ST_RAW_CS_LO: begin
          phase_cnt   <= '0;
          raw_bit_cnt <= '0;
          state_q     <= ST_RAW_CMD;
        end

        // Send command byte on d0 (single SPI, 8 clocks)
        ST_RAW_CMD: begin
          if (spi_clk_fall) begin
            shift_q <= {shift_q[30:0], 1'b0};
            if (phase_cnt == 7) begin
              phase_cnt    <= '0;
              raw_bit_cnt  <= '0;
              raw_byte_cnt <= '0;
              if (cmd_addr_bytes != 0) begin
                // Load address into shift register, MSB first
                shift_q <= raw_addr_reg;
                state_q <= ST_RAW_ADDR;
              end else if (cmd_dummy_cyc != 0) begin
                state_q <= ST_RAW_DUMMY;
              end else if (cmd_data_len != 0) begin
                // Check if write (TX FIFO has data) or read
                if (tx_level != 0) begin
                  shift_q <= {tx_rd_data, 24'b0};
                  tx_rd_ptr <= tx_rd_ptr + 9'd1;
                  state_q <= ST_RAW_DATA_WR;
                end else begin
                  raw_rx_hi <= 1'b0;
                  state_q   <= ST_RAW_DATA_RD;
                end
              end else begin
                state_q <= ST_RAW_CS_HI;
              end
            end else begin
              phase_cnt <= phase_cnt + 11'd1;
            end
          end
        end

        // Send address bytes on d0 (single SPI, 8 bits per byte)
        ST_RAW_ADDR: begin
          if (spi_clk_fall) begin
            shift_q <= {shift_q[30:0], 1'b0};
            raw_bit_cnt <= raw_bit_cnt + 8'd1;
            if (raw_bit_cnt[2:0] == 3'd7) begin
              // Finished one byte
              raw_byte_cnt <= raw_byte_cnt + 9'd1;
              if (raw_byte_cnt + 9'd1 == {5'h0, cmd_addr_bytes}) begin
                phase_cnt    <= '0;
                raw_bit_cnt  <= '0;
                raw_byte_cnt <= '0;
                if (cmd_dummy_cyc != 0) begin
                  state_q <= ST_RAW_DUMMY;
                end else if (cmd_data_len != 0) begin
                  if (tx_level != 0) begin
                    shift_q <= {tx_rd_data, 24'b0};
                    tx_rd_ptr <= tx_rd_ptr + 9'd1;
                    state_q <= ST_RAW_DATA_WR;
                  end else begin
                    raw_rx_hi <= 1'b0;
                    state_q   <= ST_RAW_DATA_RD;
                  end
                end else begin
                  state_q <= ST_RAW_CS_HI;
                end
              end
            end
          end
        end

        // Dummy cycles (Hi-Z)
        ST_RAW_DUMMY: begin
          if (spi_clk_fall) begin
            phase_cnt <= phase_cnt + 11'd1;
            if (phase_cnt + 11'd1 == {7'h0, cmd_dummy_cyc}) begin
              phase_cnt    <= '0;
              raw_bit_cnt  <= '0;
              raw_byte_cnt <= '0;
              if (cmd_data_len != 0) begin
                if (tx_level != 0) begin
                  shift_q <= {tx_rd_data, 24'b0};
                  tx_rd_ptr <= tx_rd_ptr + 9'd1;
                  state_q <= ST_RAW_DATA_WR;
                end else begin
                  raw_rx_hi <= 1'b0;
                  state_q   <= ST_RAW_DATA_RD;
                end
              end else begin
                state_q <= ST_RAW_CS_HI;
              end
            end
          end
        end

        // Write data from TX FIFO on d0 (single SPI) or d0-d3 (quad)
        ST_RAW_DATA_WR: begin
          if (spi_clk_fall) begin
            if (cmd_quad_data) begin
              // Quad: 2 clocks per byte, shift 4 bits at a time
              shift_q <= {shift_q[27:0], 4'b0};
              raw_bit_cnt <= raw_bit_cnt + 8'd1;
              if (raw_bit_cnt[0]) begin
                // Finished one byte (2 clocks in quad)
                raw_byte_cnt <= raw_byte_cnt + 9'd1;
                if (raw_byte_cnt + 9'd1 == cmd_data_len) begin
                  state_q <= ST_RAW_CS_HI;
                end else begin
                  // Load next byte from TX FIFO
                  shift_q <= {tx_rd_data, 24'b0};
                  tx_rd_ptr <= tx_rd_ptr + 9'd1;
                  raw_bit_cnt <= '0;
                end
              end
            end else begin
              // Single: 8 clocks per byte, shift 1 bit at a time
              shift_q <= {shift_q[30:0], 1'b0};
              raw_bit_cnt <= raw_bit_cnt + 8'd1;
              if (raw_bit_cnt[2:0] == 3'd7) begin
                raw_byte_cnt <= raw_byte_cnt + 9'd1;
                if (raw_byte_cnt + 9'd1 == cmd_data_len) begin
                  state_q <= ST_RAW_CS_HI;
                end else begin
                  shift_q <= {tx_rd_data, 24'b0};
                  tx_rd_ptr <= tx_rd_ptr + 9'd1;
                  raw_bit_cnt <= '0;
                end
              end
            end
          end
        end

        // Read data into RX FIFO from d0 (single) or d0-d3 (quad)
        ST_RAW_DATA_RD: begin
          if (spi_clk_rise) begin
            if (cmd_quad_data) begin
              // Quad: 2 clocks per byte
              if (!raw_rx_hi) begin
                raw_rx_nib_hi <= spi_d_i;
                raw_rx_hi     <= 1'b1;
              end else begin
                raw_rx_hi <= 1'b0;
                rx_fifo[rx_wr_ptr[7:0]] <= {raw_rx_nib_hi, spi_d_i};
                rx_wr_ptr <= rx_wr_ptr + 9'd1;
                raw_byte_cnt <= raw_byte_cnt + 9'd1;
                if (raw_byte_cnt + 9'd1 == cmd_data_len) begin
                  state_q <= ST_RAW_CS_HI;
                end
              end
            end else begin
              // Single: 8 clocks per byte, sample d1 (MISO)
              shift_q <= {shift_q[30:0], spi_d_i[1]};
              raw_bit_cnt <= raw_bit_cnt + 8'd1;
              if (raw_bit_cnt[2:0] == 3'd7) begin
                rx_fifo[rx_wr_ptr[7:0]] <= {shift_q[6:0], spi_d_i[1]};
                rx_wr_ptr <= rx_wr_ptr + 9'd1;
                raw_byte_cnt <= raw_byte_cnt + 9'd1;
                if (raw_byte_cnt + 9'd1 == cmd_data_len) begin
                  state_q <= ST_RAW_CS_HI;
                end
              end
            end
          end
        end

        // Deassert CS, return to idle; drain unconsumed TX FIFO
        ST_RAW_CS_HI: begin
          tx_rd_ptr <= tx_wr_ptr;  // Discard stale TX data
          state_q   <= ST_IDLE;
        end

        default: state_q <= ST_IDLE;
      endcase
    end
  end

  // ---------------------------------------------------------------------------
  // Grant: accept new request only when idle and not responding
  // ---------------------------------------------------------------------------
  assign mem_gnt = (state_q == ST_IDLE) && !mem_rvalid && !cmd_trigger;

  // ---------------------------------------------------------------------------
  // SPI clock enable
  // ---------------------------------------------------------------------------
  assign spi_active = (state_q == ST_RST_CS1_LO) ||
                      (state_q == ST_RST_CS2_LO) ||
                      (state_q == ST_CMD)         ||
                      (state_q == ST_ADDR)        ||
                      (state_q == ST_DUMMY)       ||
                      (state_q == ST_READ)        ||
                      (state_q == ST_RAW_CMD)     ||
                      (state_q == ST_RAW_ADDR)    ||
                      (state_q == ST_RAW_DUMMY)   ||
                      (state_q == ST_RAW_DATA_WR) ||
                      (state_q == ST_RAW_DATA_RD);

  // ---------------------------------------------------------------------------
  // Chip select
  // ---------------------------------------------------------------------------
  always_comb begin
    case (state_q)
      ST_RST_CS1_LO,
      ST_RST_CS2_LO,
      ST_CS_ASSERT,
      ST_CMD,
      ST_ADDR,
      ST_DUMMY,
      ST_READ,
      ST_RAW_CS_LO,
      ST_RAW_CMD,
      ST_RAW_ADDR,
      ST_RAW_DUMMY,
      ST_RAW_DATA_WR,
      ST_RAW_DATA_RD:  spi_cs_n_o = 1'b0;
      default:          spi_cs_n_o = 1'b1;
    endcase
  end

  // ---------------------------------------------------------------------------
  // Data output & direction
  // ---------------------------------------------------------------------------
  always_comb begin
    spi_d_o    = 4'b0000;
    spi_d_oe_o = 4'b0000;

    case (state_q)
      // Single SPI: command on d0 only
      ST_RST_CS1_LO,
      ST_RST_CS2_LO,
      ST_CMD: begin
        spi_d_o    = {3'b000, shift_q[31]};
        spi_d_oe_o = 4'b0001;
      end

      // Quad output: address nibbles (XIP)
      ST_ADDR: begin
        spi_d_o    = shift_q[31:28];
        spi_d_oe_o = 4'b1111;
      end

      // Dummy: first 2 clocks = mode bits (output), last 4 = Hi-Z (XIP)
      ST_DUMMY: begin
        if (phase_cnt < 2) begin
          spi_d_o    = shift_q[31:28];
          spi_d_oe_o = 4'b1111;
        end
      end

      // XIP Read: all inputs
      ST_READ: begin
        spi_d_o    = 4'b0000;
        spi_d_oe_o = 4'b0000;
      end

      // Raw SPI: command byte on d0 (single)
      ST_RAW_CMD: begin
        spi_d_o    = {3'b000, shift_q[31]};
        spi_d_oe_o = 4'b0001;
      end

      // Raw SPI: address on d0 (single)
      ST_RAW_ADDR: begin
        spi_d_o    = {3'b000, shift_q[31]};
        spi_d_oe_o = 4'b0001;
      end

      // Raw SPI: dummy cycles (Hi-Z)
      ST_RAW_DUMMY: begin
        spi_d_o    = 4'b0000;
        spi_d_oe_o = 4'b0000;
      end

      // Raw SPI: write data
      ST_RAW_DATA_WR: begin
        if (cmd_quad_data) begin
          spi_d_o    = shift_q[31:28];
          spi_d_oe_o = 4'b1111;
        end else begin
          spi_d_o    = {3'b000, shift_q[31]};
          spi_d_oe_o = 4'b0001;
        end
      end

      // Raw SPI: read data (all inputs)
      ST_RAW_DATA_RD: begin
        spi_d_o    = 4'b0000;
        spi_d_oe_o = 4'b0000;
      end

      default: ;
    endcase
  end

  // ---------------------------------------------------------------------------
  // Assertions
  // ---------------------------------------------------------------------------
  `ASSERT_INIT(LineSizePow2_A, (LineSizeBytes & (LineSizeBytes - 1)) == 0)
  `ASSERT_INIT(LineSizeMin_A,  LineSizeBytes >= 4)
  `ASSERT_INIT(DataWidth32_A,  DataWidth == 32)

endmodule
