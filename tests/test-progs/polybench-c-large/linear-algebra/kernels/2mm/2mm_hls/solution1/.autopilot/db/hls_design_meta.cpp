#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("indata_address0", 15, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("indata_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("indata_we0", 1, hls_out, 0, "ap_memory", "mem_we", 1),
	Port_Property("indata_d0", 32, hls_out, 0, "ap_memory", "mem_din", 1),
	Port_Property("indata_q0", 32, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("indata_address1", 15, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("indata_ce1", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("indata_we1", 1, hls_out, 0, "ap_memory", "mem_we", 1),
	Port_Property("indata_d1", 32, hls_out, 0, "ap_memory", "mem_din", 1),
	Port_Property("indata_q1", 32, hls_in, 0, "ap_memory", "mem_dout", 1),
};
const char* HLS_Design_Meta::dut_name = "kernel_2mm";
