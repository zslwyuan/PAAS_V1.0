; ModuleID = '/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall/ffllooyydd/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@polybench_t_start = common global double 0.000000e+00, align 8 ; [#uses=0 type=double*]
@polybench_t_end = common global double 0.000000e+00, align 8 ; [#uses=0 type=double*]
@polybench_program_total_flops = global double 0.000000e+00, align 8 ; [#uses=0 type=double*]
@polybench_papi_counters_threadid = global i32 0, align 4 ; [#uses=0 type=i32*]
@polybench_c_start = common global i64 0, align 8 ; [#uses=0 type=i64*]
@polybench_c_end = common global i64 0, align 8   ; [#uses=0 type=i64*]
@kernel_floyd_warshall.str = internal unnamed_addr constant [22 x i8] c"kernel_floyd_warshall\00" ; [#uses=1 type=[22 x i8]*]
@.str4 = private unnamed_addr constant [29 x i8] c"kernel_floyd_warshall_label2\00", align 1 ; [#uses=1 type=[29 x i8]*]
@.str3 = private unnamed_addr constant [29 x i8] c"kernel_floyd_warshall_label1\00", align 1 ; [#uses=1 type=[29 x i8]*]
@.str2 = private unnamed_addr constant [29 x i8] c"kernel_floyd_warshall_label0\00", align 1 ; [#uses=1 type=[29 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str = private unnamed_addr constant [9 x i8] c"COMPLETE\00", align 1 ; [#uses=1 type=[9 x i8]*]

; [#uses=4]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @kernel_floyd_warshall([64 x i32]* %path) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([22 x i8]* @kernel_floyd_warshall.str) nounwind
  call void @llvm.dbg.value(metadata !{[64 x i32]* %path}, i64 0, metadata !117), !dbg !118 ; [debug line = 64:32] [debug variable = path]
  call void (...)* @_ssdm_SpecArrayDimSize([64 x i32]* %path, i32 64) nounwind, !dbg !119 ; [debug line = 66:2]
  call void (...)* @_ssdm_SpecArrayPartition([64 x i32]* %path, i32 1, i8* getelementptr inbounds ([9 x i8]* @.str, i64 0, i64 0), i32 2, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !121 ; [debug line = 67:1]
  br label %1, !dbg !122                          ; [debug line = 69:37]

; <label>:1                                       ; preds = %11, %0
  %k = phi i32 [ 0, %0 ], [ %k.1, %11 ]           ; [#uses=3 type=i32]
  %exitcond2 = icmp eq i32 %k, 64, !dbg !122      ; [#uses=1 type=i1] [debug line = 69:37]
  br i1 %exitcond2, label %12, label %2, !dbg !122 ; [debug line = 69:37]

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([29 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !124 ; [debug line = 70:6]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([29 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !124 ; [#uses=1 type=i32] [debug line = 70:6]
  %tmp = sext i32 %k to i64, !dbg !126            ; [#uses=2 type=i64] [debug line = 73:1]
  br label %3, !dbg !131                          ; [debug line = 71:40]

; <label>:3                                       ; preds = %10, %2
  %i = phi i32 [ 0, %2 ], [ %i.1, %10 ]           ; [#uses=3 type=i32]
  %exitcond1 = icmp eq i32 %i, 64, !dbg !131      ; [#uses=1 type=i1] [debug line = 71:40]
  br i1 %exitcond1, label %11, label %4, !dbg !131 ; [debug line = 71:40]

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([29 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !132 ; [debug line = 72:2]
  %rbegin3 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([29 x i8]* @.str3, i64 0, i64 0)) nounwind, !dbg !132 ; [#uses=1 type=i32] [debug line = 72:2]
  %tmp.2 = sext i32 %i to i64, !dbg !126          ; [#uses=2 type=i64] [debug line = 73:1]
  %path.addr = getelementptr inbounds [64 x i32]* %path, i64 %tmp.2, i64 %tmp, !dbg !126 ; [#uses=1 type=i32*] [debug line = 73:1]
  br label %5, !dbg !133                          ; [debug line = 72:36]

; <label>:5                                       ; preds = %9, %4
  %j = phi i32 [ 0, %4 ], [ %j.1, %9 ]            ; [#uses=3 type=i32]
  %exitcond = icmp eq i32 %j, 64, !dbg !133       ; [#uses=1 type=i1] [debug line = 72:36]
  br i1 %exitcond, label %10, label %6, !dbg !133 ; [debug line = 72:36]

; <label>:6                                       ; preds = %5
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([29 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !134 ; [debug line = 73:2]
  %rbegin5 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([29 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !134 ; [#uses=1 type=i32] [debug line = 73:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !135 ; [debug line = 74:1]
  %tmp.4 = sext i32 %j to i64, !dbg !126          ; [#uses=2 type=i64] [debug line = 73:1]
  %path.addr.1 = getelementptr inbounds [64 x i32]* %path, i64 %tmp.2, i64 %tmp.4, !dbg !126 ; [#uses=2 type=i32*] [debug line = 73:1]
  %path.load = load i32* %path.addr.1, align 4, !dbg !126 ; [#uses=4 type=i32] [debug line = 73:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %path.load) nounwind
  %path.load.1 = load i32* %path.addr, align 4, !dbg !126 ; [#uses=3 type=i32] [debug line = 73:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %path.load.1) nounwind
  %path.addr.2 = getelementptr inbounds [64 x i32]* %path, i64 %tmp, i64 %tmp.4, !dbg !126 ; [#uses=1 type=i32*] [debug line = 73:1]
  %path.load.2 = load i32* %path.addr.2, align 4, !dbg !126 ; [#uses=3 type=i32] [debug line = 73:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %path.load.2) nounwind
  %tmp.5 = add nsw i32 %path.load.2, %path.load.1, !dbg !126 ; [#uses=2 type=i32] [debug line = 73:1]
  %tmp.6 = icmp slt i32 %path.load, %tmp.5, !dbg !126 ; [#uses=1 type=i1] [debug line = 73:1]
  br i1 %tmp.6, label %7, label %8, !dbg !126     ; [debug line = 73:1]

; <label>:7                                       ; preds = %6
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %path.load) nounwind
  br label %9, !dbg !126                          ; [debug line = 73:1]

; <label>:8                                       ; preds = %6
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %path.load.1) nounwind
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %path.load.2) nounwind
  br label %9, !dbg !126                          ; [debug line = 73:1]

; <label>:9                                       ; preds = %8, %7
  %tmp.7 = phi i32 [ %path.load, %7 ], [ %tmp.5, %8 ], !dbg !126 ; [#uses=1 type=i32] [debug line = 73:1]
  store i32 %tmp.7, i32* %path.addr.1, align 4, !dbg !126 ; [debug line = 73:1]
  %rend6 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([29 x i8]* @.str4, i64 0, i64 0), i32 %rbegin5) nounwind, !dbg !136 ; [#uses=0 type=i32] [debug line = 74:45]
  %j.1 = add nsw i32 %j, 1, !dbg !137             ; [#uses=1 type=i32] [debug line = 72:50]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !138), !dbg !137 ; [debug line = 72:50] [debug variable = j]
  br label %5, !dbg !137                          ; [debug line = 72:50]

; <label>:10                                      ; preds = %5
  %rend4 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([29 x i8]* @.str3, i64 0, i64 0), i32 %rbegin3) nounwind, !dbg !139 ; [#uses=0 type=i32] [debug line = 74:45]
  %i.1 = add nsw i32 %i, 1, !dbg !140             ; [#uses=1 type=i32] [debug line = 71:54]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !141), !dbg !140 ; [debug line = 71:54] [debug variable = i]
  br label %3, !dbg !140                          ; [debug line = 71:54]

; <label>:11                                      ; preds = %3
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([29 x i8]* @.str2, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !142 ; [#uses=0 type=i32] [debug line = 75:5]
  %k.1 = add nsw i32 %k, 1, !dbg !143             ; [#uses=1 type=i32] [debug line = 69:51]
  call void @llvm.dbg.value(metadata !{i32 %k.1}, i64 0, metadata !144), !dbg !143 ; [debug line = 69:51] [debug variable = k]
  br label %1, !dbg !143                          ; [debug line = 69:51]

; <label>:12                                      ; preds = %1
  ret void, !dbg !145                             ; [debug line = 77:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=3]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=3]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=3]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=1]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=6]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=1]
declare void @_ssdm_SpecArrayPartition(...) nounwind

; [#uses=1]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0, !44}
!opencl.kernels = !{!84, !91, !97, !97, !100, !100, !100, !100, !100, !106, !109, !113, !100}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall/ffllooyydd/solution1/.autopilot/db/floyd-warshall.pragma.2.c", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !26} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !16, metadata !22, metadata !25}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"kernel_floyd_warshall", metadata !"kernel_floyd_warshall", metadata !"", metadata !6, i32 64, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void ([64 x i32]*)* @kernel_floyd_warshall, null, null, metadata !14, i32 66} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"floyd-warshall.c", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2048, i64 32, i32 0, i32 0, metadata !11, metadata !12, i32 0, i32 0} ; [ DW_TAG_array_type ]
!11 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!12 = metadata !{metadata !13}
!13 = metadata !{i32 786465, i64 0, i64 63}       ; [ DW_TAG_subrange_type ]
!14 = metadata !{metadata !15}
!15 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!16 = metadata !{i32 786478, i32 0, metadata !6, metadata !"main", metadata !"main", metadata !"", metadata !6, i32 80, metadata !17, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !14, i32 81} ; [ DW_TAG_subprogram ]
!17 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !18, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!18 = metadata !{metadata !11, metadata !11, metadata !19}
!19 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !20} ; [ DW_TAG_pointer_type ]
!20 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !21} ; [ DW_TAG_pointer_type ]
!21 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!22 = metadata !{i32 786478, i32 0, metadata !6, metadata !"print_array", metadata !"print_array", metadata !"", metadata !6, i32 43, metadata !23, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !14, i32 46} ; [ DW_TAG_subprogram ]
!23 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !24, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!24 = metadata !{null, metadata !11, metadata !9}
!25 = metadata !{i32 786478, i32 0, metadata !6, metadata !"init_array", metadata !"init_array", metadata !"", metadata !6, i32 26, metadata !23, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !14, i32 28} ; [ DW_TAG_subprogram ]
!26 = metadata !{metadata !27}
!27 = metadata !{metadata !28, metadata !31, metadata !32, metadata !33, metadata !35, metadata !37, metadata !39, metadata !40, metadata !41, metadata !42}
!28 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdin_", metadata !"_IO_2_1_stdin_", metadata !"", metadata !29, i32 315, metadata !30, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!29 = metadata !{i32 786473, metadata !"/usr/include/libio.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", null} ; [ DW_TAG_file_type ]
!30 = metadata !{i32 786451, null, metadata !"_IO_FILE_plus", metadata !29, i32 313, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_structure_type ]
!31 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdout_", metadata !"_IO_2_1_stdout_", metadata !"", metadata !29, i32 316, metadata !30, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!32 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stderr_", metadata !"_IO_2_1_stderr_", metadata !"", metadata !29, i32 317, metadata !30, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!33 = metadata !{i32 786484, i32 0, null, metadata !"sys_nerr", metadata !"sys_nerr", metadata !"", metadata !34, i32 26, metadata !11, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!34 = metadata !{i32 786473, metadata !"/usr/include/x86_64-linux-gnu/bits/sys_errlist.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", null} ; [ DW_TAG_file_type ]
!35 = metadata !{i32 786484, i32 0, null, metadata !"__environ", metadata !"__environ", metadata !"", metadata !36, i32 546, metadata !19, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!36 = metadata !{i32 786473, metadata !"/usr/include/unistd.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", null} ; [ DW_TAG_file_type ]
!37 = metadata !{i32 786484, i32 0, null, metadata !"optarg", metadata !"optarg", metadata !"", metadata !38, i32 57, metadata !20, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!38 = metadata !{i32 786473, metadata !"/usr/include/getopt.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", null} ; [ DW_TAG_file_type ]
!39 = metadata !{i32 786484, i32 0, null, metadata !"optind", metadata !"optind", metadata !"", metadata !38, i32 71, metadata !11, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!40 = metadata !{i32 786484, i32 0, null, metadata !"opterr", metadata !"opterr", metadata !"", metadata !38, i32 76, metadata !11, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!41 = metadata !{i32 786484, i32 0, null, metadata !"optopt", metadata !"optopt", metadata !"", metadata !38, i32 80, metadata !11, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!42 = metadata !{i32 786484, i32 0, null, metadata !"signgam", metadata !"signgam", metadata !"", metadata !43, i32 168, metadata !11, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!43 = metadata !{i32 786473, metadata !"/usr/include/math.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", null} ; [ DW_TAG_file_type ]
!44 = metadata !{i32 786449, i32 0, i32 1, metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall/ffllooyydd/solution1/.autopilot/db/polybench.pragma.2.c", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !45, metadata !72} ; [ DW_TAG_compile_unit ]
!45 = metadata !{metadata !46}
!46 = metadata !{metadata !47, metadata !51, metadata !52, metadata !53, metadata !54, metadata !55, metadata !59, metadata !63, metadata !68}
!47 = metadata !{i32 786478, i32 0, metadata !48, metadata !"polybench_flush_cache", metadata !"polybench_flush_cache", metadata !"", metadata !48, i32 112, metadata !49, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !14, i32 113} ; [ DW_TAG_subprogram ]
!48 = metadata !{i32 786473, metadata !"../../utilities/polybench.c", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", null} ; [ DW_TAG_file_type ]
!49 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !50, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!50 = metadata !{null}
!51 = metadata !{i32 786478, i32 0, metadata !48, metadata !"polybench_prepare_instruments", metadata !"polybench_prepare_instruments", metadata !"", metadata !48, i32 353, metadata !49, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !14, i32 354} ; [ DW_TAG_subprogram ]
!52 = metadata !{i32 786478, i32 0, metadata !48, metadata !"polybench_timer_start", metadata !"polybench_timer_start", metadata !"", metadata !48, i32 364, metadata !49, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !14, i32 365} ; [ DW_TAG_subprogram ]
!53 = metadata !{i32 786478, i32 0, metadata !48, metadata !"polybench_timer_stop", metadata !"polybench_timer_stop", metadata !"", metadata !48, i32 375, metadata !49, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !14, i32 376} ; [ DW_TAG_subprogram ]
!54 = metadata !{i32 786478, i32 0, metadata !48, metadata !"polybench_timer_print", metadata !"polybench_timer_print", metadata !"", metadata !48, i32 388, metadata !49, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !14, i32 389} ; [ DW_TAG_subprogram ]
!55 = metadata !{i32 786478, i32 0, metadata !48, metadata !"polybench_free_data", metadata !"polybench_free_data", metadata !"", metadata !48, i32 547, metadata !56, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !14, i32 548} ; [ DW_TAG_subprogram ]
!56 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !57, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!57 = metadata !{null, metadata !58}
!58 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!59 = metadata !{i32 786478, i32 0, metadata !48, metadata !"polybench_alloc_data", metadata !"polybench_alloc_data", metadata !"", metadata !48, i32 557, metadata !60, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !14, i32 558} ; [ DW_TAG_subprogram ]
!60 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !61, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!61 = metadata !{metadata !58, metadata !62, metadata !11}
!62 = metadata !{i32 786468, null, metadata !"long long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!63 = metadata !{i32 786478, i32 0, metadata !48, metadata !"xmalloc", metadata !"xmalloc", metadata !"", metadata !48, i32 517, metadata !64, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !14, i32 518} ; [ DW_TAG_subprogram ]
!64 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !65, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!65 = metadata !{metadata !58, metadata !66}
!66 = metadata !{i32 786454, null, metadata !"size_t", metadata !48, i32 35, i64 0, i64 0, i64 0, i32 0, metadata !67} ; [ DW_TAG_typedef ]
!67 = metadata !{i32 786468, null, metadata !"long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!68 = metadata !{i32 786478, i32 0, metadata !48, metadata !"rtclock", metadata !"rtclock", metadata !"", metadata !48, i32 83, metadata !69, i1 true, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !14, i32 84} ; [ DW_TAG_subprogram ]
!69 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !70, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!70 = metadata !{metadata !71}
!71 = metadata !{i32 786468, null, metadata !"double", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!72 = metadata !{metadata !73}
!73 = metadata !{metadata !74, metadata !75, metadata !76, metadata !77, metadata !78, metadata !79, metadata !28, metadata !31, metadata !32, metadata !33, metadata !37, metadata !39, metadata !40, metadata !41, metadata !80, metadata !82, metadata !42, metadata !83}
!74 = metadata !{i32 786484, i32 0, null, metadata !"polybench_papi_counters_threadid", metadata !"polybench_papi_counters_threadid", metadata !"", metadata !48, i32 45, metadata !11, i32 0, i32 1, i32* @polybench_papi_counters_threadid} ; [ DW_TAG_variable ]
!75 = metadata !{i32 786484, i32 0, null, metadata !"polybench_program_total_flops", metadata !"polybench_program_total_flops", metadata !"", metadata !48, i32 46, metadata !71, i32 0, i32 1, double* @polybench_program_total_flops} ; [ DW_TAG_variable ]
!76 = metadata !{i32 786484, i32 0, null, metadata !"polybench_t_start", metadata !"polybench_t_start", metadata !"", metadata !48, i32 78, metadata !71, i32 0, i32 1, double* @polybench_t_start} ; [ DW_TAG_variable ]
!77 = metadata !{i32 786484, i32 0, null, metadata !"polybench_t_end", metadata !"polybench_t_end", metadata !"", metadata !48, i32 78, metadata !71, i32 0, i32 1, double* @polybench_t_end} ; [ DW_TAG_variable ]
!78 = metadata !{i32 786484, i32 0, null, metadata !"polybench_c_start", metadata !"polybench_c_start", metadata !"", metadata !48, i32 80, metadata !62, i32 0, i32 1, i64* @polybench_c_start} ; [ DW_TAG_variable ]
!79 = metadata !{i32 786484, i32 0, null, metadata !"polybench_c_end", metadata !"polybench_c_end", metadata !"", metadata !48, i32 80, metadata !62, i32 0, i32 1, i64* @polybench_c_end} ; [ DW_TAG_variable ]
!80 = metadata !{i32 786484, i32 0, null, metadata !"__daylight", metadata !"__daylight", metadata !"", metadata !81, i32 283, metadata !11, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!81 = metadata !{i32 786473, metadata !"/usr/include/time.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-4.2/medley/floyd-warshall", null} ; [ DW_TAG_file_type ]
!82 = metadata !{i32 786484, i32 0, null, metadata !"daylight", metadata !"daylight", metadata !"", metadata !81, i32 297, metadata !11, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!83 = metadata !{i32 786484, i32 0, null, metadata !"polybench_inter_array_padding_sz", metadata !"polybench_inter_array_padding_sz", metadata !"", metadata !48, i32 75, metadata !66, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!84 = metadata !{void ([64 x i32]*)* @kernel_floyd_warshall, metadata !85, metadata !86, metadata !87, metadata !88, metadata !89, metadata !90}
!85 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!86 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!87 = metadata !{metadata !"kernel_arg_type", metadata !"int [64]*"}
!88 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!89 = metadata !{metadata !"kernel_arg_name", metadata !"path"}
!90 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!91 = metadata !{null, metadata !92, metadata !93, metadata !94, metadata !95, metadata !96, metadata !90}
!92 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 1}
!93 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!94 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"char **"}
!95 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!96 = metadata !{metadata !"kernel_arg_name", metadata !"argc", metadata !"argv"}
!97 = metadata !{null, metadata !92, metadata !93, metadata !98, metadata !95, metadata !99, metadata !90}
!98 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"int [64]*"}
!99 = metadata !{metadata !"kernel_arg_name", metadata !"n", metadata !"path"}
!100 = metadata !{null, metadata !101, metadata !102, metadata !103, metadata !104, metadata !105, metadata !90}
!101 = metadata !{metadata !"kernel_arg_addr_space"}
!102 = metadata !{metadata !"kernel_arg_access_qual"}
!103 = metadata !{metadata !"kernel_arg_type"}
!104 = metadata !{metadata !"kernel_arg_type_qual"}
!105 = metadata !{metadata !"kernel_arg_name"}
!106 = metadata !{null, metadata !85, metadata !86, metadata !107, metadata !88, metadata !108, metadata !90}
!107 = metadata !{metadata !"kernel_arg_type", metadata !"void*"}
!108 = metadata !{metadata !"kernel_arg_name", metadata !"ptr"}
!109 = metadata !{null, metadata !110, metadata !93, metadata !111, metadata !95, metadata !112, metadata !90}
!110 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!111 = metadata !{metadata !"kernel_arg_type", metadata !"ulong long", metadata !"int"}
!112 = metadata !{metadata !"kernel_arg_name", metadata !"n", metadata !"elt_size"}
!113 = metadata !{null, metadata !114, metadata !86, metadata !115, metadata !88, metadata !116, metadata !90}
!114 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!115 = metadata !{metadata !"kernel_arg_type", metadata !"size_t"}
!116 = metadata !{metadata !"kernel_arg_name", metadata !"alloc_sz"}
!117 = metadata !{i32 786689, metadata !5, metadata !"path", metadata !6, i32 16777280, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!118 = metadata !{i32 64, i32 32, metadata !5, null}
!119 = metadata !{i32 66, i32 2, metadata !120, null}
!120 = metadata !{i32 786443, metadata !5, i32 66, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!121 = metadata !{i32 67, i32 1, metadata !120, null}
!122 = metadata !{i32 69, i32 37, metadata !123, null}
!123 = metadata !{i32 786443, metadata !120, i32 69, i32 32, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!124 = metadata !{i32 70, i32 6, metadata !125, null}
!125 = metadata !{i32 786443, metadata !123, i32 70, i32 5, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!126 = metadata !{i32 73, i32 1, metadata !127, null}
!127 = metadata !{i32 786443, metadata !128, i32 73, i32 1, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!128 = metadata !{i32 786443, metadata !129, i32 72, i32 31, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!129 = metadata !{i32 786443, metadata !130, i32 72, i32 2, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!130 = metadata !{i32 786443, metadata !125, i32 71, i32 36, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!131 = metadata !{i32 71, i32 40, metadata !130, null}
!132 = metadata !{i32 72, i32 2, metadata !129, null}
!133 = metadata !{i32 72, i32 36, metadata !128, null}
!134 = metadata !{i32 73, i32 2, metadata !127, null}
!135 = metadata !{i32 74, i32 1, metadata !127, null}
!136 = metadata !{i32 74, i32 45, metadata !127, null}
!137 = metadata !{i32 72, i32 50, metadata !128, null}
!138 = metadata !{i32 786688, metadata !120, metadata !"j", metadata !6, i32 67, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!139 = metadata !{i32 74, i32 45, metadata !128, null}
!140 = metadata !{i32 71, i32 54, metadata !130, null}
!141 = metadata !{i32 786688, metadata !120, metadata !"i", metadata !6, i32 67, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!142 = metadata !{i32 75, i32 5, metadata !125, null}
!143 = metadata !{i32 69, i32 51, metadata !123, null}
!144 = metadata !{i32 786688, metadata !120, metadata !"k", metadata !6, i32 67, metadata !11, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!145 = metadata !{i32 77, i32 1, metadata !120, null}
