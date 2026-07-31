# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrtl_axi_probe.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vrtl_axi_probe \
	Vrtl_axi_probe___024root__DepSet_hc37fd6ec__0 \
	Vrtl_axi_probe___024root__DepSet_hf7fd6b59__0 \
	Vrtl_axi_probe_rtl_axi_probe__DepSet_h1d49216b__0 \
	Vrtl_axi_probe_rtl_axi_probe__DepSet_hbdd3f7dc__0 \
	Vrtl_axi_probe_cpu_top__DepSet_h09967537__0 \
	Vrtl_axi_probe_cpu_top__DepSet_hb216cc20__0 \
	Vrtl_axi_probe_cpu_core__DepSet_hcb077347__0 \
	Vrtl_axi_probe_cpu_core__DepSet_hef85c5b0__0 \
	Vrtl_axi_probe_ALU__DepSet_h3d338384__0 \
	Vrtl_axi_probe_multiplier__DepSet_hf2ba296a__0 \
	Vrtl_axi_probe_multiplier__DepSet_h2742ffdb__0 \
	Vrtl_axi_probe_multiplier__W21__DepSet_h6d77f910__0 \
	Vrtl_axi_probe_multiplier__W21__DepSet_h8df55005__0 \
	Vrtl_axi_probe__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrtl_axi_probe__ConstPool_0 \
	Vrtl_axi_probe___024root__Slow \
	Vrtl_axi_probe___024root__DepSet_hc37fd6ec__0__Slow \
	Vrtl_axi_probe___024root__DepSet_hf7fd6b59__0__Slow \
	Vrtl_axi_probe_rtl_axi_probe__Slow \
	Vrtl_axi_probe_rtl_axi_probe__DepSet_hbdd3f7dc__0__Slow \
	Vrtl_axi_probe_cpu_top__Slow \
	Vrtl_axi_probe_cpu_top__DepSet_h09967537__0__Slow \
	Vrtl_axi_probe_cpu_top__DepSet_hb216cc20__0__Slow \
	Vrtl_axi_probe_cpu_core__Slow \
	Vrtl_axi_probe_cpu_core__DepSet_hcb077347__0__Slow \
	Vrtl_axi_probe_cpu_core__DepSet_hef85c5b0__0__Slow \
	Vrtl_axi_probe_ALU__Slow \
	Vrtl_axi_probe_ALU__DepSet_hc202a258__0__Slow \
	Vrtl_axi_probe_ALU__DepSet_h3d338384__0__Slow \
	Vrtl_axi_probe_multiplier__Slow \
	Vrtl_axi_probe_multiplier__DepSet_h2742ffdb__0__Slow \
	Vrtl_axi_probe_multiplier__W21__Slow \
	Vrtl_axi_probe_multiplier__W21__DepSet_h8df55005__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrtl_axi_probe__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrtl_axi_probe__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
