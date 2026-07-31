set f [open "D:/cpu-design/probe_out.txt" w]
run 10us
puts $f "PROBE time=[current_time]"
foreach sig {
    /soc_simple_tb/DUT/U_cpu/U_core/pc
    /soc_simple_tb/DUT/U_cpu/U_core/if_id_pc
    /soc_simple_tb/DUT/U_cpu/U_core/if_id_valid
    /soc_simple_tb/DUT/U_cpu/U_core/id_ex_pc
    /soc_simple_tb/DUT/U_cpu/U_core/ex_mem_pc
    /soc_simple_tb/DUT/U_cpu/U_core/mem_stall
    /soc_simple_tb/DUT/U_cpu/U_core/daccess_ren
    /soc_simple_tb/DUT/U_cpu/U_core/daccess_wen
    /soc_simple_tb/DUT/U_cpu/U_core/daccess_addr
    /soc_simple_tb/DUT/U_cpu/U_core/daccess_rvalid
    /soc_simple_tb/DUT/U_cpu/U_core/daccess_wresp
    /soc_simple_tb/DUT/U_cpu/U_icache/state
    /soc_simple_tb/DUT/U_cpu/U_icache/cpu_ren
    /soc_simple_tb/DUT/U_cpu/U_icache/cpu_raddr
    /soc_simple_tb/DUT/U_cpu/U_icache/dev_rvalid
    /soc_simple_tb/DUT/U_cpu/U_dcache/r_state
    /soc_simple_tb/DUT/U_cpu/U_dcache/w_state
    /soc_simple_tb/DUT/U_cpu/U_dcache/cpu_ren
    /soc_simple_tb/DUT/U_cpu/U_dcache/cpu_ren
    /soc_simple_tb/DUT/U_cpu/U_dcache/cpu_raddr
    /soc_simple_tb/DUT/U_cpu/U_dcache/cpu_wen
    /soc_simple_tb/DUT/U_cpu/U_dcache/data_valid
    /soc_simple_tb/DUT/U_cpu/U_dcache/data_wresp
    /soc_simple_tb/DUT/U_cpu/U_aximaster/r_state
    /soc_simple_tb/DUT/U_cpu/U_aximaster/w_state
    /soc_simple_tb/DUT/U_cpu/U_aximaster/m_axi_arvalid
    /soc_simple_tb/DUT/U_cpu/U_aximaster/m_axi_arready
    /soc_simple_tb/DUT/U_cpu/U_aximaster/m_axi_rvalid
    /soc_simple_tb/DUT/U_cpu/U_aximaster/m_axi_rlast
    /soc_simple_tb/DUT/U_cpu/U_aximaster/m_axi_awvalid
    /soc_simple_tb/DUT/U_cpu/U_aximaster/m_axi_wvalid
    /soc_simple_tb/DUT/U_cpu/U_aximaster/m_axi_bvalid
} {
    if {[catch {set v [get_value $sig]} err]} {
        puts $f "SIG $sig ERROR $err"
    } else {
        puts $f "SIG $sig = $v"
    }
}
close $f
quit
