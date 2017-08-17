set C_TypeInfoList {{ 
"kernel_floyd_warshall" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"path": [[], {"array": [ {"array": [ {"scalar": "int"}, [64]]}, [64]]}] }],[],""]
}}
set moduleName kernel_floyd_warshall
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {kernel_floyd_warshall}
set C_modelType { void 0 }
set C_modelArgList {
	{ path int 32 regular {array 4096 { 1 2 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "path", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "path","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 63,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ path_address0 sc_out sc_lv 12 signal 0 } 
	{ path_ce0 sc_out sc_logic 1 signal 0 } 
	{ path_q0 sc_in sc_lv 32 signal 0 } 
	{ path_address1 sc_out sc_lv 12 signal 0 } 
	{ path_ce1 sc_out sc_logic 1 signal 0 } 
	{ path_we1 sc_out sc_logic 1 signal 0 } 
	{ path_d1 sc_out sc_lv 32 signal 0 } 
	{ path_q1 sc_in sc_lv 32 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "path_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "path", "role": "address0" }} , 
 	{ "name": "path_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "path", "role": "ce0" }} , 
 	{ "name": "path_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "path", "role": "q0" }} , 
 	{ "name": "path_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "path", "role": "address1" }} , 
 	{ "name": "path_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "path", "role": "ce1" }} , 
 	{ "name": "path_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "path", "role": "we1" }} , 
 	{ "name": "path_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "path", "role": "d1" }} , 
 	{ "name": "path_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "path", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "kernel_floyd_warshall",
		"VariableLatency" : "1",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "path", "Type" : "Memory", "Direction" : "IO"}]}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "790657", "Max" : "790657"}
	, {"Name" : "Interval", "Min" : "790658", "Max" : "790658"}
]}

set Spec2ImplPortList { 
	path { ap_memory {  { path_address0 mem_address 1 12 }  { path_ce0 mem_ce 1 1 }  { path_q0 mem_dout 0 32 }  { path_address1 mem_address 1 12 }  { path_ce1 mem_ce 1 1 }  { path_we1 mem_we 1 1 }  { path_d1 mem_din 1 32 }  { path_q1 mem_dout 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
