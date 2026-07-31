# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrtl_core_probe.mk for the caller.

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
	Vrtl_core_probe \
	Vrtl_core_probe___024root__DepSet_h3104cb8e__0 \
	Vrtl_core_probe___024root__DepSet_h9b88ca17__0 \
	Vrtl_core_probe_rtl_core_probe__DepSet_heb99ece9__0 \
	Vrtl_core_probe_cpu_core__DepSet_h424369c7__0 \
	Vrtl_core_probe_cpu_core__DepSet_hc8cf27de__0 \
	Vrtl_core_probe_ALU__DepSet_hf4909f31__0 \
	Vrtl_core_probe_multiplier__DepSet_h87dc1da5__0 \
	Vrtl_core_probe_multiplier__DepSet_h0e5ff400__0 \
	Vrtl_core_probe_multiplier__W21__DepSet_hf893d046__0 \
	Vrtl_core_probe_multiplier__W21__DepSet_h531fbe5f__0 \
	Vrtl_core_probe__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrtl_core_probe__ConstPool_0 \
	Vrtl_core_probe___024root__Slow \
	Vrtl_core_probe___024root__DepSet_h3104cb8e__0__Slow \
	Vrtl_core_probe___024root__DepSet_h9b88ca17__0__Slow \
	Vrtl_core_probe_rtl_core_probe__Slow \
	Vrtl_core_probe_rtl_core_probe__DepSet_heb99ece9__0__Slow \
	Vrtl_core_probe_rtl_core_probe__DepSet_h6225a2b4__0__Slow \
	Vrtl_core_probe_cpu_core__Slow \
	Vrtl_core_probe_cpu_core__DepSet_h424369c7__0__Slow \
	Vrtl_core_probe_cpu_core__DepSet_hc8cf27de__0__Slow \
	Vrtl_core_probe_ALU__Slow \
	Vrtl_core_probe_ALU__DepSet_hf6a9aa38__0__Slow \
	Vrtl_core_probe_ALU__DepSet_hf4909f31__0__Slow \
	Vrtl_core_probe_multiplier__Slow \
	Vrtl_core_probe_multiplier__DepSet_h0e5ff400__0__Slow \
	Vrtl_core_probe_multiplier__W21__Slow \
	Vrtl_core_probe_multiplier__W21__DepSet_h531fbe5f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrtl_core_probe__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrtl_core_probe__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
