// Minimal Xilinx primitive stubs for simulation

module BUFG (
  input  I,
  output O
);
  assign O = I;
endmodule

module PLLE2_ADV #(
  parameter BANDWIDTH = "OPTIMIZED",
  parameter CLKFBOUT_MULT = 5,
  parameter CLKFBOUT_PHASE = 0.0,
  parameter CLKIN1_PERIOD = 0.0,
  parameter CLKIN2_PERIOD = 0.0,
  parameter CLKOUT0_DIVIDE = 1,
  parameter CLKOUT0_DUTY_CYCLE = 0.5,
  parameter CLKOUT0_PHASE = 0.0,
  parameter CLKOUT1_DIVIDE = 1,
  parameter CLKOUT1_DUTY_CYCLE = 0.5,
  parameter CLKOUT1_PHASE = 0.0,
  parameter CLKOUT2_DIVIDE = 1,
  parameter CLKOUT2_DUTY_CYCLE = 0.5,
  parameter CLKOUT2_PHASE = 0.0,
  parameter CLKOUT3_DIVIDE = 1,
  parameter CLKOUT3_DUTY_CYCLE = 0.5,
  parameter CLKOUT3_PHASE = 0.0,
  parameter CLKOUT4_DIVIDE = 1,
  parameter CLKOUT4_DUTY_CYCLE = 0.5,
  parameter CLKOUT4_PHASE = 0.0,
  parameter CLKOUT5_DIVIDE = 1,
  parameter CLKOUT5_DUTY_CYCLE = 0.5,
  parameter CLKOUT5_PHASE = 0.0,
  parameter COMPENSATION = "ZHOLD",
  parameter DIVCLK_DIVIDE = 1,
  parameter REF_JITTER1 = 0.0,
  parameter REF_JITTER2 = 0.0,
  parameter STARTUP_WAIT = "FALSE"
) (
  output CLKOUT0,
  output CLKOUT1,
  output CLKOUT2,
  output CLKOUT3,
  output CLKOUT4,
  output CLKOUT5,
  output CLKFBOUT,
  output LOCKED,
  output [15:0] DO,
  output DRDY,
  input  CLKIN1,
  input  CLKIN2,
  input  CLKINSEL,
  input  CLKFBIN,
  input  RST,
  input  PWRDWN,
  input  [4:0] DADDR,
  input  DCLK,
  input  DEN,
  input  [15:0] DI,
  input  DWE
);
  // Simple simulation: just pass CLKIN1 through as all clocks
  // and assert LOCKED after a brief delay
  reg locked_reg = 0;
  reg [3:0] lock_cnt = 0;
  always @(posedge CLKIN1) begin
    if (lock_cnt < 4'd10) lock_cnt <= lock_cnt + 1;
    if (lock_cnt == 4'd9) locked_reg <= 1;
  end
  assign LOCKED = locked_reg;
  assign CLKFBOUT = CLKIN1;
  assign CLKOUT0 = CLKIN1;  // sys_clk = clk25 in sim (simplified)
  assign CLKOUT1 = CLKIN1;  // sys2x
  assign CLKOUT2 = 0;
  assign CLKOUT3 = 0;
  assign CLKOUT4 = 0;
  assign CLKOUT5 = 0;
  assign DO = 0;
  assign DRDY = 0;
endmodule

module ODDR #(
  parameter DDR_CLK_EDGE = "OPPOSITE_EDGE",
  parameter INIT = 1'b0,
  parameter SRTYPE = "SYNC"
) (
  output Q,
  input  C,
  input  CE,
  input  D1,
  input  D2,
  input  R,
  input  S
);
  reg q_reg = 0;
  always @(posedge C) if (CE) q_reg <= D1;
  assign Q = q_reg;
endmodule

module IDDR #(
  parameter DDR_CLK_EDGE = "OPPOSITE_EDGE",
  parameter INIT_Q1 = 1'b0,
  parameter INIT_Q2 = 1'b0,
  parameter SRTYPE = "SYNC"
) (
  output Q1,
  output Q2,
  input  C,
  input  CE,
  input  D,
  input  R,
  input  S
);
  reg q1_reg = 0, q2_reg = 0;
  always @(posedge C) if (CE) q1_reg <= D;
  always @(negedge C) q2_reg <= D;
  assign Q1 = q1_reg;
  assign Q2 = q2_reg;
endmodule

module IOBUF (
  inout  IO,
  output O,
  input  I,
  input  T   // tristate: 1=input, 0=output
);
  assign IO = T ? 1'bz : I;
  assign O = IO;
endmodule

// FDCE: D flip-flop with clock enable and asynchronous clear
module FDCE #(
  parameter INIT = 1'b0
) (
  output reg Q,
  input  C,
  input  CE,
  input  CLR,
  input  D
);
  initial Q = INIT;
  always @(posedge C or posedge CLR)
    if (CLR) Q <= 1'b0;
    else if (CE) Q <= D;
endmodule

// FDPE: D flip-flop with clock enable and asynchronous preset
module FDPE #(
  parameter INIT = 1'b1
) (
  output reg Q,
  input  C,
  input  CE,
  input  PRE,
  input  D
);
  initial Q = INIT;
  always @(posedge C or posedge PRE)
    if (PRE) Q <= 1'b1;
    else if (CE) Q <= D;
endmodule
