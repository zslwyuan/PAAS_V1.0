############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ffllooyydd
set_top kernel_floyd_warshall
add_files ../../utilities/time_benchmark.sh
add_files ../../utilities/run-all.pl
add_files ../../utilities/polybench.spec
add_files ../../utilities/polybench.h
add_files ../../utilities/polybench.c
add_files ../../utilities/polybench.R
add_files ../../utilities/papi_counters.list
add_files ../../utilities/makefile-gen.pl
add_files ../../utilities/header-gen.pl
add_files floyd-warshall.h
add_files floyd-warshall.c
add_files ../../utilities/create_cpped_version.pl
add_files ../../utilities/clean.pl
open_solution "solution1"
set_part {xqku115-rlf1924-2-i} -tool vivado
create_clock -period 10 -name default
source "./ffllooyydd/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
