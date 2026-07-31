set project_dir [file normalize [file dirname [info script]]]
set project_file [file join $project_dir miniRV.xpr]

open_project $project_file
set ip_files [get_files -all -quiet -filter {FILE_TYPE == "IP"}]
if {[llength $ip_files] == 0} {
    puts "ERROR: no XCI files found"
    close_project
    exit 1
}
puts "Generating output products for [llength $ip_files] IP files"
generate_target all $ip_files
update_compile_order -fileset sources_1
close_project
