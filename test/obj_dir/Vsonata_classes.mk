# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsonata.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsonata \
	Vsonata___024root__DepSet_ha18c228d__0 \
	Vsonata___024root__DepSet_h1d076907__0 \
	Vsonata_sonata__DepSet_h87b32e54__0 \
	Vsonata_sonata__DepSet_h87b32e54__1 \
	Vsonata_sonata__DepSet_h432a65ce__0 \
	Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__DepSet_hadf68af2__0 \
	Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__DepSet_h7f54732c__0 \
	Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__DepSet_h7f54732c__1 \
	Vsonata_VexRiscv__DepSet_h468637b9__0 \
	Vsonata_VexRiscv__DepSet_h468637b9__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsonata__ConstPool_0 \
	Vsonata___024root__Slow \
	Vsonata___024root__DepSet_ha18c228d__0__Slow \
	Vsonata___024root__DepSet_h1d076907__0__Slow \
	Vsonata_sonata__Slow \
	Vsonata_sonata__DepSet_h87b32e54__0__Slow \
	Vsonata_sonata__DepSet_h432a65ce__0__Slow \
	Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__Slow \
	Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__DepSet_hadf68af2__0__Slow \
	Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__DepSet_h7f54732c__0__Slow \
	Vsonata_VexRiscv__Slow \
	Vsonata_VexRiscv__DepSet_h468637b9__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsonata__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsonata__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
