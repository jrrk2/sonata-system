// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Simulation stub for Xilinx IDDR primitive.
// Q1 = D captured on posedge C, Q2 = D captured on negedge C.
// In SAME_EDGE_PIPELINED mode, both Q1 and Q2 are presented on posedge
// with one extra pipeline stage, giving 2-cycle perceived latency to
// downstream fabric FFs (data at posedge N → Q1 readable at posedge N+2).
// The RTL compensates via software-configurable read_delay (CTRL[12:10]).

/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off UNUSEDSIGNAL */
module IDDR #(
  parameter DDR_CLK_EDGE = "SAME_EDGE_PIPELINED",
  parameter INIT_Q1      = 1'b0,
  parameter INIT_Q2      = 1'b0,
  parameter SRTYPE       = "ASYNC"
) (
  output reg Q1,
  output reg Q2,
  input      C,
  input      CE,
  input      D,
  input      R,
  input      S
);

  reg q1_pipe;  // Extra pipeline stage for SAME_EDGE_PIPELINED
  reg q2_neg;

  initial begin
    Q1      = INIT_Q1;
    Q2      = INIT_Q2;
    q1_pipe = INIT_Q1;
    q2_neg  = INIT_Q2;
  end

  // Capture on negedge
  always @(negedge C or posedge R or posedge S) begin
    if (R)      q2_neg <= 1'b0;
    else if (S) q2_neg <= 1'b1;
    else if (CE) q2_neg <= D;
  end

  // SAME_EDGE_PIPELINED: capture D into q1_pipe, then pipeline to Q1.
  // This gives 2-cycle perceived latency to downstream fabric FFs,
  // matching the real Xilinx 7-Series IDDR primitive.
  always @(posedge C or posedge R or posedge S) begin
    if (R) begin
      q1_pipe <= 1'b0;
      Q1      <= 1'b0;
      Q2      <= 1'b0;
    end else if (S) begin
      q1_pipe <= 1'b1;
      Q1      <= 1'b1;
      Q2      <= 1'b1;
    end else if (CE) begin
      q1_pipe <= D;
      Q1      <= q1_pipe;
      Q2      <= q2_neg;
    end
  end

endmodule
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNUSEDPARAM */
/* verilator lint_on DECLFILENAME */
