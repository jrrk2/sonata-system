// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Simplified W25Q256JVEIQ QSPI NOR flash simulation model.
//
// Supports:
//   - Enable Reset (0x66) + Reset Device (0x99) in single-SPI mode
//   - Quad I/O Fast Read (0xEC): 4-byte address, quad mode
//
// Memory is initialized to an incrementing pattern by default,
// or loaded from a file via $readmemh if FlashInitFile is set.
//
// All signals driven from a single always block for simulation compatibility,
// using posedge sck_i with async reset from cs_ni.

module w25q256_model #(
  parameter int unsigned FlashSizeBytes = 32 * 1024 * 1024,  // 32 MB
  parameter string       FlashInitFile  = ""
) (
  input  logic       sck_i,
  input  logic       cs_ni,
  input  logic [3:0] d_i,
  output logic [3:0] d_o,
  input  logic [3:0] d_oe_i  // from controller: 1=controller drives, 0=flash drives
);

  localparam int unsigned AddrBits = $clog2(FlashSizeBytes);

  // Flash storage (byte-addressed)
  logic [7:0] mem [FlashSizeBytes];

  // State machine
  typedef enum logic [2:0] {
    ST_IDLE,
    ST_CMD,
    ST_ADDR_QUAD,
    ST_DUMMY_QUAD,
    ST_DATA_QUAD,
    ST_IGNORE
  } state_e;

  state_e      state_q, state_d;
  int unsigned bit_cnt_q, bit_cnt_d;
  logic [7:0]  cmd_q, cmd_d;
  logic [31:0] addr_q, addr_d;
  logic [3:0]  dout_q, dout_d;

  assign d_o = dout_q;

  // Commands (0x66=Enable Reset, 0x99=Reset Device accepted but ignored)
  localparam logic [7:0] CMD_QUAD_IO_FAST_RD = 8'hEC;

  // Initialize memory
  initial begin
    // Default: incrementing byte pattern (useful for verification)
    for (int i = 0; i < FlashSizeBytes; i++) begin
      mem[i] = i[7:0];
    end
    if (FlashInitFile != "") begin
      $readmemh(FlashInitFile, mem);
    end
  end

  // Next-state logic: computed on rising edge of SCK (when controller shifts data out)
  always_comb begin
    state_d   = state_q;
    bit_cnt_d = bit_cnt_q;
    cmd_d     = cmd_q;
    addr_d    = addr_q;
    dout_d    = dout_q;

    case (state_q)
      ST_CMD: begin
        // Single-SPI: receive command on d_i[0] (MOSI), MSB first
        cmd_d     = {cmd_q[6:0], d_i[0]};
        bit_cnt_d = bit_cnt_q + 1;
        if (bit_cnt_q == 7) begin
          case ({cmd_q[6:0], d_i[0]})
            CMD_QUAD_IO_FAST_RD: begin
              state_d   = ST_ADDR_QUAD;
              bit_cnt_d = 0;
            end
            default: begin
              state_d = ST_IGNORE; // 0x66, 0x99, etc. — just accept
            end
          endcase
        end
      end

      ST_ADDR_QUAD: begin
        // Quad: 4 bits/clock, 4-byte address = 8 clocks
        // Then 2 mode clocks + 4 dummy clocks = 6 more clocks → total 14 from start of ADDR
        addr_d    = {addr_q[27:0], d_i[3:0]};
        bit_cnt_d = bit_cnt_q + 1;
        if (bit_cnt_q == 7) begin
          state_d   = ST_DUMMY_QUAD;
          bit_cnt_d = 0;
        end
      end

      ST_DUMMY_QUAD: begin
        // 2 mode clocks + 4 dummy clocks = 6 total
        bit_cnt_d = bit_cnt_q + 1;
        if (bit_cnt_q == 5) begin
          state_d   = ST_DATA_QUAD;
          bit_cnt_d = 0;
          // Pre-load first nibble (high nibble of first byte)
          dout_d = mem[addr_q[AddrBits-1:0]][7:4];
        end
      end

      ST_DATA_QUAD: begin
        bit_cnt_d = bit_cnt_q + 1;
        if (bit_cnt_q[0] == 0) begin
          // Was high nibble, now output low nibble
          dout_d = mem[addr_q[AddrBits-1:0]][3:0];
        end else begin
          // Was low nibble, advance address, output high nibble of next byte
          addr_d = addr_q + 1;
          dout_d = mem[addr_q[AddrBits-1:0] + 1][7:4];
        end
      end

      default: ; // ST_IDLE, ST_IGNORE: do nothing
    endcase
  end

  // Sequential: posedge sck with async reset from CS going high
  always_ff @(posedge sck_i or posedge cs_ni) begin
    if (cs_ni) begin
      // CS deasserted — ready for next command when CS reasserts
      state_q   <= ST_CMD;
      bit_cnt_q <= 0;
      cmd_q     <= 8'h0;
      addr_q    <= 32'h0;
      dout_q    <= 4'h0;
    end else begin
      state_q   <= state_d;
      bit_cnt_q <= bit_cnt_d;
      cmd_q     <= cmd_d;
      addr_q    <= addr_d;
      dout_q    <= dout_d;
    end
  end

  // Handle CS assertion (going low) — need to move to CMD state
  // This is done by checking: when CS goes low and we're in IDLE, move to CMD.
  // Since cs_ni high → IDLE, and first posedge sck with cs_ni low will see IDLE → CMD transition
  // is handled: CMD state processing starts when bit_cnt=0 in ST_CMD.
  // But we need to transition from IDLE to CMD on CS assertion...
  // Actually, the async reset sets state to IDLE. Then on the first SCK posedge with CS low,
  // we're in IDLE which doesn't do anything. We need CMD.
  // Fix: use negedge cs_ni to enter CMD state. But that conflicts with the posedge cs_ni reset.
  // Solution: set reset state to ST_CMD instead of ST_IDLE.
  // When CS goes high, reset to ST_CMD (ready for next transaction).
  // When CS goes low, first SCK edge sees ST_CMD and starts receiving.

  // Unused signals
  logic unused_d_oe;
  assign unused_d_oe = ^d_oe_i;
  logic unused_cmd;
  assign unused_cmd = cmd_q[7];

endmodule
