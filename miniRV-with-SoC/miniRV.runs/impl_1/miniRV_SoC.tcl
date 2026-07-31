namespace eval ::optrace {
  variable script "D:/cpu-design/miniRV-with-SoC/miniRV.runs/impl_1/miniRV_SoC.tcl"
  variable category "vivado_impl"
}

# Try to connect to running dispatch if we haven't done so already.
# This code assumes that the Tcl interpreter is not using threads,
# since the ::dispatch::connected variable isn't mutex protected.
if {![info exists ::dispatch::connected]} {
  namespace eval ::dispatch {
    variable connected false
    if {[llength [array get env XILINX_CD_CONNECT_ID]] > 0} {
      set result "true"
      if {[catch {
        if {[lsearch -exact [package names] DispatchTcl] < 0} {
          set result [load librdi_cd_clienttcl[info sharedlibextension]] 
        }
        if {$result eq "false"} {
          puts "WARNING: Could not load dispatch client library"
        }
        set connect_id [ ::dispatch::init_client -mode EXISTING_SERVER ]
        if { $connect_id eq "" } {
          puts "WARNING: Could not initialize dispatch client"
        } else {
          puts "INFO: Dispatch client connection id - $connect_id"
          set connected true
        }
      } catch_res]} {
        puts "WARNING: failed to connect to dispatch server - $catch_res"
      }
    }
  }
}
if {$::dispatch::connected} {
  # Remove the dummy proc if it exists.
  if { [expr {[llength [info procs ::OPTRACE]] > 0}] } {
    rename ::OPTRACE ""
  }
  proc ::OPTRACE { task action {tags {} } } {
    ::vitis_log::op_trace "$task" $action -tags $tags -script $::optrace::script -category $::optrace::category
  }
  # dispatch is generic. We specifically want to attach logging.
  ::vitis_log::connect_client
} else {
  # Add dummy proc if it doesn't exist.
  if { [expr {[llength [info procs ::OPTRACE]] == 0}] } {
    proc ::OPTRACE {{arg1 \"\" } {arg2 \"\"} {arg3 \"\" } {arg4 \"\"} {arg5 \"\" } {arg6 \"\"}} {
        # Do nothing
    }
  }
}

proc start_step { step } {
  set stopFile ".stop.rst"
  if {[file isfile .stop.rst]} {
    puts ""
    puts "*** Halting run - EA reset detected ***"
    puts ""
    puts ""
    return -code error
  }
  set beginFile ".$step.begin.rst"
  set platform "$::tcl_platform(platform)"
  set user "$::tcl_platform(user)"
  set pid [pid]
  set host ""
  if { [string equal $platform unix] } {
    if { [info exist ::env(HOSTNAME)] } {
      set host $::env(HOSTNAME)
    } elseif { [info exist ::env(HOST)] } {
      set host $::env(HOST)
    }
  } else {
    if { [info exist ::env(COMPUTERNAME)] } {
      set host $::env(COMPUTERNAME)
    }
  }
  set ch [open $beginFile w]
  puts $ch "<?xml version=\"1.0\"?>"
  puts $ch "<ProcessHandle Version=\"1\" Minor=\"0\">"
  puts $ch "    <Process Command=\".planAhead.\" Owner=\"$user\" Host=\"$host\" Pid=\"$pid\">"
  puts $ch "    </Process>"
  puts $ch "</ProcessHandle>"
  close $ch
}

proc end_step { step } {
  set endFile ".$step.end.rst"
  set ch [open $endFile w]
  close $ch
}

proc step_failed { step } {
  set endFile ".$step.error.rst"
  set ch [open $endFile w]
  close $ch
OPTRACE "impl_1" END { }
}


OPTRACE "impl_1" START { ROLLUP_1 }
OPTRACE "Phase: Init Design" START { ROLLUP_AUTO }
start_step init_design
set ACTIVE_STEP init_design
set rc [catch {
  create_msg_db init_design.pb
  set_param chipscope.maxJobs 1
  set_param general.usePosixSpawnForFork 1
  set_param runs.launchOptions { -jobs 1  }
OPTRACE "create in-memory project" START { }
  create_project -in_memory -part xc7a35tcsg324-1
  set_property design_mode GateLvl [current_fileset]
  set_param project.singleFileAddWarning.threshold 0
OPTRACE "create in-memory project" END { }
OPTRACE "set parameters" START { }
  set_property webtalk.parent_dir D:/cpu-design/miniRV-with-SoC/miniRV.cache/wt [current_project]
  set_property parent.project_path D:/cpu-design/miniRV-with-SoC/miniRV.xpr [current_project]
  set_property ip_output_repo D:/cpu-design/miniRV-with-SoC/miniRV.cache/ip [current_project]
  set_property ip_cache_permissions {read write} [current_project]
  set_property XPM_LIBRARIES {XPM_CDC XPM_MEMORY} [current_project]
OPTRACE "set parameters" END { }
OPTRACE "add files" START { }
  add_files -quiet D:/cpu-design/miniRV-with-SoC/miniRV.runs/synth_1/miniRV_SoC.dcp
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/clk_wiz_0/clk_wiz_0.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/bram_axi/bram_axi.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/axi_protocol_converter_0/axi_protocol_converter_0.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/axi_gpio_0/axi_gpio_0.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/axi_uartlite_0/axi_uartlite_0.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/axi_gpio_1/axi_gpio_1.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/axi_gpio_2/axi_gpio_2.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/axi_gpio_3/axi_gpio_3.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/axi_crossbar_0/axi_crossbar_0.xci
  read_ip -quiet D:/cpu-design/miniRV-with-SoC/src/rtl/ip/blk_mem_gen_1/blk_mem_gen_1.xci
OPTRACE "read constraints: implementation" START { }
  read_xdc D:/cpu-design/miniRV-with-SoC/src/xdc/clock.xdc
  read_xdc D:/cpu-design/miniRV-with-SoC/src/xdc/miniRV_SoC.xdc
OPTRACE "read constraints: implementation" END { }
OPTRACE "read constraints: implementation_pre" START { }
OPTRACE "read constraints: implementation_pre" END { }
OPTRACE "add files" END { }
OPTRACE "link_design" START { }
  link_design -top miniRV_SoC -part xc7a35tcsg324-1 
OPTRACE "link_design" END { }
OPTRACE "gray box cells" START { }
OPTRACE "gray box cells" END { }
OPTRACE "init_design_reports" START { REPORT }
OPTRACE "init_design_reports" END { }
OPTRACE "init_design_write_hwdef" START { }
OPTRACE "init_design_write_hwdef" END { }
  close_msg_db -file init_design.pb
} RESULT]
if {$rc} {
  step_failed init_design
  return -code error $RESULT
} else {
  end_step init_design
  unset ACTIVE_STEP 
}

OPTRACE "Phase: Init Design" END { }
OPTRACE "Phase: Opt Design" START { ROLLUP_AUTO }
start_step opt_design
set ACTIVE_STEP opt_design
set rc [catch {
  create_msg_db opt_design.pb
OPTRACE "read constraints: opt_design" START { }
OPTRACE "read constraints: opt_design" END { }
OPTRACE "opt_design" START { }
  opt_design 
OPTRACE "opt_design" END { }
OPTRACE "read constraints: opt_design_post" START { }
OPTRACE "read constraints: opt_design_post" END { }
OPTRACE "opt_design reports" START { REPORT }
  set_param project.isImplRun true
  generate_parallel_reports -reports { "report_drc -file miniRV_SoC_drc_opted.rpt -pb miniRV_SoC_drc_opted.pb -rpx miniRV_SoC_drc_opted.rpx"  }
  set_param project.isImplRun false
OPTRACE "opt_design reports" END { }
OPTRACE "Opt Design: write_checkpoint" START { CHECKPOINT }
  write_checkpoint -force miniRV_SoC_opt.dcp
OPTRACE "Opt Design: write_checkpoint" END { }
  close_msg_db -file opt_design.pb
} RESULT]
if {$rc} {
  step_failed opt_design
  return -code error $RESULT
} else {
  end_step opt_design
  unset ACTIVE_STEP 
}

OPTRACE "Phase: Opt Design" END { }
OPTRACE "Phase: Place Design" START { ROLLUP_AUTO }
start_step place_design
set ACTIVE_STEP place_design
set rc [catch {
  create_msg_db place_design.pb
OPTRACE "read constraints: place_design" START { }
OPTRACE "read constraints: place_design" END { }
  if { [llength [get_debug_cores -quiet] ] > 0 }  { 
OPTRACE "implement_debug_core" START { }
    implement_debug_core 
OPTRACE "implement_debug_core" END { }
  } 
OPTRACE "place_design" START { }
  set_param project.isImplRun true
  place_design 
  set_param project.isImplRun false
OPTRACE "place_design" END { }
OPTRACE "read constraints: place_design_post" START { }
OPTRACE "read constraints: place_design_post" END { }
OPTRACE "place_design reports" START { REPORT }
  set_param project.isImplRun true
  generate_parallel_reports -reports { "report_io -file miniRV_SoC_io_placed.rpt" "report_utilization -file miniRV_SoC_utilization_placed.rpt -pb miniRV_SoC_utilization_placed.pb" "report_control_sets -verbose -file miniRV_SoC_control_sets_placed.rpt"  }
  set_param project.isImplRun false
OPTRACE "place_design reports" END { }
OPTRACE "Place Design: write_checkpoint" START { CHECKPOINT }
  write_checkpoint -force miniRV_SoC_placed.dcp
OPTRACE "Place Design: write_checkpoint" END { }
  close_msg_db -file place_design.pb
} RESULT]
if {$rc} {
  step_failed place_design
  return -code error $RESULT
} else {
  end_step place_design
  unset ACTIVE_STEP 
}

OPTRACE "Phase: Place Design" END { }
OPTRACE "Phase: Route Design" START { ROLLUP_AUTO }
start_step route_design
set ACTIVE_STEP route_design
set rc [catch {
  create_msg_db route_design.pb
OPTRACE "read constraints: route_design" START { }
OPTRACE "read constraints: route_design" END { }
OPTRACE "route_design" START { }
  route_design 
OPTRACE "route_design" END { }
OPTRACE "read constraints: route_design_post" START { }
OPTRACE "read constraints: route_design_post" END { }
OPTRACE "route_design reports" START { REPORT }
  set_param project.isImplRun true
  generate_parallel_reports -reports { "report_drc -file miniRV_SoC_drc_routed.rpt -pb miniRV_SoC_drc_routed.pb -rpx miniRV_SoC_drc_routed.rpx" "report_methodology -file miniRV_SoC_methodology_drc_routed.rpt -pb miniRV_SoC_methodology_drc_routed.pb -rpx miniRV_SoC_methodology_drc_routed.rpx" "report_power -file miniRV_SoC_power_routed.rpt -pb miniRV_SoC_power_summary_routed.pb -rpx miniRV_SoC_power_routed.rpx" "report_route_status -file miniRV_SoC_route_status.rpt -pb miniRV_SoC_route_status.pb" "report_timing_summary -max_paths 10 -file miniRV_SoC_timing_summary_routed.rpt -pb miniRV_SoC_timing_summary_routed.pb -rpx miniRV_SoC_timing_summary_routed.rpx -warn_on_violation " "report_incremental_reuse -file miniRV_SoC_incremental_reuse_routed.rpt" "report_clock_utilization -file miniRV_SoC_clock_utilization_routed.rpt" "report_bus_skew -warn_on_violation -file miniRV_SoC_bus_skew_routed.rpt -pb miniRV_SoC_bus_skew_routed.pb -rpx miniRV_SoC_bus_skew_routed.rpx"  }
  set_param project.isImplRun false
OPTRACE "route_design reports" END { }
OPTRACE "Route Design: write_checkpoint" START { CHECKPOINT }
  write_checkpoint -force miniRV_SoC_routed.dcp
OPTRACE "Route Design: write_checkpoint" END { }
OPTRACE "route_design misc" START { }
  close_msg_db -file route_design.pb
} RESULT]
if {$rc} {
OPTRACE "route_design write_checkpoint" START { CHECKPOINT }
OPTRACE "route_design write_checkpoint" END { }
  write_checkpoint -force miniRV_SoC_routed_error.dcp
  step_failed route_design
  return -code error $RESULT
} else {
  end_step route_design
  unset ACTIVE_STEP 
}

OPTRACE "route_design misc" END { }
OPTRACE "Phase: Route Design" END { }
OPTRACE "impl_1" END { }
