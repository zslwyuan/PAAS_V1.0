; ModuleID = '/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm/2mm_hls/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@polybench_t_start = common global double 0.000000e+00, align 8 ; [#uses=0 type=double*]
@polybench_t_end = common global double 0.000000e+00, align 8 ; [#uses=0 type=double*]
@polybench_program_total_flops = global double 0.000000e+00, align 8 ; [#uses=0 type=double*]
@polybench_papi_counters_threadid = global i32 0, align 4 ; [#uses=0 type=i32*]
@polybench_c_start = common global i64 0, align 8 ; [#uses=0 type=i64*]
@polybench_c_end = common global i64 0, align 8   ; [#uses=0 type=i64*]
@kernel_2mm.str = internal unnamed_addr constant [11 x i8] c"kernel_2mm\00" ; [#uses=1 type=[11 x i8]*]
@indata = common global [32582 x i32] zeroinitializer, align 16 ; [#uses=0 type=[32582 x i32]*]
@.str48 = private unnamed_addr constant [18 x i8] c"kernel_2mm_label4\00", align 1 ; [#uses=1 type=[18 x i8]*]
@.str4 = private unnamed_addr constant [18 x i8] c"kernel_2mm_label5\00", align 1 ; [#uses=1 type=[18 x i8]*]
@.str37 = private unnamed_addr constant [18 x i8] c"kernel_2mm_label7\00", align 1 ; [#uses=1 type=[18 x i8]*]
@.str26 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str15 = private unnamed_addr constant [18 x i8] c"kernel_2mm_label0\00", align 1 ; [#uses=1 type=[18 x i8]*]

; [#uses=10]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=0]
define void @kernel_2mm(i32* %indata) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([11 x i8]* @kernel_2mm.str) nounwind
  call void @llvm.dbg.value(metadata !{i32* %indata}, i64 0, metadata !129), !dbg !130 ; [debug line = 76:21] [debug variable = indata]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %indata, i32 32582) nounwind, !dbg !131 ; [debug line = 77:2]
  call void @llvm.dbg.value(metadata !{i32* %indata}, i64 0, metadata !133), !dbg !134 ; [debug line = 80:22] [debug variable = tmp]
  %indata.addr = getelementptr inbounds i32* %indata, i64 32580, !dbg !135 ; [#uses=1 type=i32*] [debug line = 85:56]
  %alpha = load i32* %indata.addr, align 4, !dbg !135 ; [#uses=2 type=i32] [debug line = 85:56]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %alpha) nounwind
  call void @llvm.dbg.value(metadata !{i32 %alpha}, i64 0, metadata !136), !dbg !135 ; [debug line = 85:56] [debug variable = alpha]
  %indata.addr.1 = getelementptr inbounds i32* %indata, i64 32581, !dbg !137 ; [#uses=1 type=i32*] [debug line = 86:58]
  %beta = load i32* %indata.addr.1, align 4, !dbg !137 ; [#uses=2 type=i32] [debug line = 86:58]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %beta) nounwind
  call void @llvm.dbg.value(metadata !{i32 %beta}, i64 0, metadata !138), !dbg !137 ; [debug line = 86:58] [debug variable = beta]
  br label %1, !dbg !139                          ; [debug line = 89:8]

; <label>:1                                       ; preds = %6, %0
  %i = phi i32 [ 0, %0 ], [ %i.2, %6 ]            ; [#uses=4 type=i32]
  %exitcond6 = icmp eq i32 %i, 90, !dbg !139      ; [#uses=1 type=i1] [debug line = 89:8]
  br i1 %exitcond6, label %.preheader7.preheader, label %.preheader8.preheader, !dbg !139 ; [debug line = 89:8]

.preheader7.preheader:                            ; preds = %1
  br label %.preheader7, !dbg !141                ; [debug line = 97:8]

.preheader8.preheader:                            ; preds = %1
  %tmp = mul nsw i32 %i, 90, !dbg !143            ; [#uses=1 type=i32] [debug line = 92:2]
  %tmp.1 = mul nsw i32 %i, 68, !dbg !146          ; [#uses=1 type=i32] [debug line = 95:1]
  br label %.preheader8, !dbg !149                ; [debug line = 90:28]

.preheader8:                                      ; preds = %5, %.preheader8.preheader
  %j = phi i32 [ %j.2, %5 ], [ 0, %.preheader8.preheader ] ; [#uses=4 type=i32]
  %exitcond5 = icmp eq i32 %j, 90, !dbg !149      ; [#uses=1 type=i1] [debug line = 90:28]
  br i1 %exitcond5, label %6, label %2, !dbg !149 ; [debug line = 90:28]

; <label>:2                                       ; preds = %.preheader8
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([18 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !150 ; [debug line = 91:8]
  %rbegin1 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([18 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !150 ; [#uses=1 type=i32] [debug line = 91:8]
  %tmp.5 = add nsw i32 %j, %tmp, !dbg !143        ; [#uses=1 type=i32] [debug line = 92:2]
  %tmp.6 = sext i32 %tmp.5 to i64, !dbg !143      ; [#uses=1 type=i64] [debug line = 92:2]
  %indata.addr.2 = getelementptr inbounds i32* %indata, i64 %tmp.6, !dbg !143 ; [#uses=3 type=i32*] [debug line = 92:2]
  store i32 0, i32* %indata.addr.2, align 4, !dbg !143 ; [debug line = 92:2]
  br label %3, !dbg !151                          ; [debug line = 93:25]

; <label>:3                                       ; preds = %4, %2
  %k = phi i32 [ 0, %2 ], [ %k.2, %4 ]            ; [#uses=4 type=i32]
  %exitcond4 = icmp eq i32 %k, 68, !dbg !151      ; [#uses=1 type=i1] [debug line = 93:25]
  br i1 %exitcond4, label %5, label %4, !dbg !151 ; [debug line = 93:25]

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([18 x i8]* @.str15, i64 0, i64 0)) nounwind, !dbg !152 ; [debug line = 95:2]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([18 x i8]* @.str15, i64 0, i64 0)) nounwind, !dbg !152 ; [#uses=1 type=i32] [debug line = 95:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str26, i64 0, i64 0)) nounwind, !dbg !153 ; [debug line = 96:1]
  %indata.load.1 = load i32* %indata.addr.2, align 4, !dbg !146 ; [#uses=2 type=i32] [debug line = 95:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %indata.load.1) nounwind
  %tmp.12 = add nsw i32 %k, %tmp.1, !dbg !146     ; [#uses=1 type=i32] [debug line = 95:1]
  %tmp.13 = sext i32 %tmp.12 to i64, !dbg !146    ; [#uses=1 type=i64] [debug line = 95:1]
  %A.0.sum = add i64 %tmp.13, 8100, !dbg !146     ; [#uses=1 type=i64] [debug line = 95:1]
  %indata.addr.4 = getelementptr inbounds i32* %indata, i64 %A.0.sum, !dbg !146 ; [#uses=1 type=i32*] [debug line = 95:1]
  %indata.load.2 = load i32* %indata.addr.4, align 4, !dbg !146 ; [#uses=2 type=i32] [debug line = 95:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %indata.load.2) nounwind
  %tmp.14 = mul nsw i32 %k, 90, !dbg !146         ; [#uses=1 type=i32] [debug line = 95:1]
  %tmp.15 = add nsw i32 %tmp.14, %j, !dbg !146    ; [#uses=1 type=i32] [debug line = 95:1]
  %tmp.16 = sext i32 %tmp.15 to i64, !dbg !146    ; [#uses=1 type=i64] [debug line = 95:1]
  %B.0.sum = add i64 %tmp.16, 14220, !dbg !146    ; [#uses=1 type=i64] [debug line = 95:1]
  %indata.addr.5 = getelementptr inbounds i32* %indata, i64 %B.0.sum, !dbg !146 ; [#uses=1 type=i32*] [debug line = 95:1]
  %indata.load.3 = load i32* %indata.addr.5, align 4, !dbg !146 ; [#uses=2 type=i32] [debug line = 95:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %indata.load.3) nounwind
  %tmp.17 = mul i32 %indata.load.2, %alpha, !dbg !146 ; [#uses=1 type=i32] [debug line = 95:1]
  %tmp.18 = mul i32 %tmp.17, %indata.load.3, !dbg !146 ; [#uses=1 type=i32] [debug line = 95:1]
  %tmp.19 = add nsw i32 %tmp.18, %indata.load.1, !dbg !146 ; [#uses=1 type=i32] [debug line = 95:1]
  store i32 %tmp.19, i32* %indata.addr.2, align 4, !dbg !146 ; [debug line = 95:1]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([18 x i8]* @.str15, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !154 ; [#uses=0 type=i32] [debug line = 95:61]
  %k.2 = add nsw i32 %k, 1, !dbg !155             ; [#uses=1 type=i32] [debug line = 93:40]
  call void @llvm.dbg.value(metadata !{i32 %k.2}, i64 0, metadata !156), !dbg !155 ; [debug line = 93:40] [debug variable = k]
  br label %3, !dbg !155                          ; [debug line = 93:40]

; <label>:5                                       ; preds = %3
  %rend12 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([18 x i8]* @.str4, i64 0, i64 0), i32 %rbegin1) nounwind, !dbg !157 ; [#uses=0 type=i32] [debug line = 96:7]
  %j.2 = add nsw i32 %j, 1, !dbg !158             ; [#uses=1 type=i32] [debug line = 90:43]
  call void @llvm.dbg.value(metadata !{i32 %j.2}, i64 0, metadata !159), !dbg !158 ; [debug line = 90:43] [debug variable = j]
  br label %.preheader8, !dbg !158                ; [debug line = 90:43]

; <label>:6                                       ; preds = %.preheader8
  %i.2 = add nsw i32 %i, 1, !dbg !160             ; [#uses=1 type=i32] [debug line = 89:23]
  call void @llvm.dbg.value(metadata !{i32 %i.2}, i64 0, metadata !161), !dbg !160 ; [debug line = 89:23] [debug variable = i]
  br label %1, !dbg !160                          ; [debug line = 89:23]

.preheader7:                                      ; preds = %11, %.preheader7.preheader
  %i.1 = phi i32 [ %i.3, %11 ], [ 0, %.preheader7.preheader ] ; [#uses=4 type=i32]
  %exitcond3 = icmp eq i32 %i.1, 90, !dbg !141    ; [#uses=1 type=i1] [debug line = 97:8]
  br i1 %exitcond3, label %12, label %.preheader.preheader, !dbg !141 ; [debug line = 97:8]

.preheader.preheader:                             ; preds = %.preheader7
  %tmp.2 = mul nsw i32 %i.1, 68, !dbg !162        ; [#uses=1 type=i32] [debug line = 100:2]
  %tmp.3 = mul nsw i32 %i.1, 90, !dbg !165        ; [#uses=1 type=i32] [debug line = 102:1]
  br label %.preheader, !dbg !168                 ; [debug line = 98:28]

.preheader:                                       ; preds = %10, %.preheader.preheader
  %j.1 = phi i32 [ %j.3, %10 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i32]
  %exitcond2 = icmp eq i32 %j.1, 68, !dbg !168    ; [#uses=1 type=i1] [debug line = 98:28]
  br i1 %exitcond2, label %11, label %7, !dbg !168 ; [debug line = 98:28]

; <label>:7                                       ; preds = %.preheader
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([18 x i8]* @.str37, i64 0, i64 0)) nounwind, !dbg !169 ; [debug line = 99:8]
  %rbegin2 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([18 x i8]* @.str37, i64 0, i64 0)) nounwind, !dbg !169 ; [#uses=1 type=i32] [debug line = 99:8]
  %tmp.8 = add nsw i32 %j.1, %tmp.2, !dbg !162    ; [#uses=1 type=i32] [debug line = 100:2]
  %tmp.9 = sext i32 %tmp.8 to i64, !dbg !162      ; [#uses=1 type=i64] [debug line = 100:2]
  %D.0.sum = add i64 %tmp.9, 26460, !dbg !162     ; [#uses=1 type=i64] [debug line = 100:2]
  %indata.addr.3 = getelementptr inbounds i32* %indata, i64 %D.0.sum, !dbg !162 ; [#uses=4 type=i32*] [debug line = 100:2]
  %indata.load = load i32* %indata.addr.3, align 4, !dbg !162 ; [#uses=2 type=i32] [debug line = 100:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %indata.load) nounwind
  %tmp.10 = mul nsw i32 %indata.load, %beta, !dbg !162 ; [#uses=1 type=i32] [debug line = 100:2]
  store i32 %tmp.10, i32* %indata.addr.3, align 4, !dbg !162 ; [debug line = 100:2]
  br label %8, !dbg !170                          ; [debug line = 101:25]

; <label>:8                                       ; preds = %9, %7
  %k.1 = phi i32 [ 0, %7 ], [ %k.3, %9 ]          ; [#uses=4 type=i32]
  %exitcond = icmp eq i32 %k.1, 90, !dbg !170     ; [#uses=1 type=i1] [debug line = 101:25]
  br i1 %exitcond, label %10, label %9, !dbg !170 ; [debug line = 101:25]

; <label>:9                                       ; preds = %8
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([18 x i8]* @.str48, i64 0, i64 0)) nounwind, !dbg !171 ; [debug line = 102:2]
  %rbegin9 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([18 x i8]* @.str48, i64 0, i64 0)) nounwind, !dbg !171 ; [#uses=1 type=i32] [debug line = 102:2]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str26, i64 0, i64 0)) nounwind, !dbg !172 ; [debug line = 103:1]
  %tmp.22 = add nsw i32 %k.1, %tmp.3, !dbg !165   ; [#uses=1 type=i32] [debug line = 102:1]
  %tmp.23 = sext i32 %tmp.22 to i64, !dbg !165    ; [#uses=1 type=i64] [debug line = 102:1]
  %indata.addr.6 = getelementptr inbounds i32* %indata, i64 %tmp.23, !dbg !165 ; [#uses=1 type=i32*] [debug line = 102:1]
  %indata.load.4 = load i32* %indata.addr.6, align 4, !dbg !165 ; [#uses=2 type=i32] [debug line = 102:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %indata.load.4) nounwind
  %tmp.24 = mul nsw i32 %k.1, 68, !dbg !165       ; [#uses=1 type=i32] [debug line = 102:1]
  %tmp.25 = add nsw i32 %tmp.24, %j.1, !dbg !165  ; [#uses=1 type=i32] [debug line = 102:1]
  %tmp.26 = sext i32 %tmp.25 to i64, !dbg !165    ; [#uses=1 type=i64] [debug line = 102:1]
  %C.0.sum = add i64 %tmp.26, 20340, !dbg !165    ; [#uses=1 type=i64] [debug line = 102:1]
  %indata.addr.7 = getelementptr inbounds i32* %indata, i64 %C.0.sum, !dbg !165 ; [#uses=1 type=i32*] [debug line = 102:1]
  %indata.load.5 = load i32* %indata.addr.7, align 4, !dbg !165 ; [#uses=2 type=i32] [debug line = 102:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %indata.load.5) nounwind
  %tmp.27 = mul nsw i32 %indata.load.5, %indata.load.4, !dbg !165 ; [#uses=1 type=i32] [debug line = 102:1]
  %indata.load.6 = load i32* %indata.addr.3, align 4, !dbg !165 ; [#uses=2 type=i32] [debug line = 102:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %indata.load.6) nounwind
  %tmp.28 = add nsw i32 %indata.load.6, %tmp.27, !dbg !165 ; [#uses=1 type=i32] [debug line = 102:1]
  store i32 %tmp.28, i32* %indata.addr.3, align 4, !dbg !165 ; [debug line = 102:1]
  %rend10 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([18 x i8]* @.str48, i64 0, i64 0), i32 %rbegin9) nounwind, !dbg !173 ; [#uses=0 type=i32] [debug line = 102:36]
  %k.3 = add nsw i32 %k.1, 1, !dbg !174           ; [#uses=1 type=i32] [debug line = 101:40]
  call void @llvm.dbg.value(metadata !{i32 %k.3}, i64 0, metadata !156), !dbg !174 ; [debug line = 101:40] [debug variable = k]
  br label %8, !dbg !174                          ; [debug line = 101:40]

; <label>:10                                      ; preds = %8
  %rend14 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([18 x i8]* @.str37, i64 0, i64 0), i32 %rbegin2) nounwind, !dbg !175 ; [#uses=0 type=i32] [debug line = 104:7]
  %j.3 = add nsw i32 %j.1, 1, !dbg !176           ; [#uses=1 type=i32] [debug line = 98:43]
  call void @llvm.dbg.value(metadata !{i32 %j.3}, i64 0, metadata !159), !dbg !176 ; [debug line = 98:43] [debug variable = j]
  br label %.preheader, !dbg !176                 ; [debug line = 98:43]

; <label>:11                                      ; preds = %.preheader
  %i.3 = add nsw i32 %i.1, 1, !dbg !177           ; [#uses=1 type=i32] [debug line = 97:23]
  call void @llvm.dbg.value(metadata !{i32 %i.3}, i64 0, metadata !161), !dbg !177 ; [debug line = 97:23] [debug variable = i]
  br label %.preheader7, !dbg !177                ; [debug line = 97:23]

; <label>:12                                      ; preds = %.preheader7
  ret void, !dbg !178                             ; [debug line = 106:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=4]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=4]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=4]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=2]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=9]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=1]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0, !61}
!opencl.kernels = !{!87, !87, !87, !87, !87, !94, !100, !106, !87, !110, !113, !117, !123}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm/2mm_hls/solution1/.autopilot/db/polybench.pragma.2.c", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !33} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !11, metadata !12, metadata !13, metadata !14, metadata !15, metadata !19, metadata !24, metadata !29}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"polybench_flush_cache", metadata !"polybench_flush_cache", metadata !"", metadata !6, i32 112, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !9, i32 113} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"../../../utilities/polybench.c", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null}
!9 = metadata !{metadata !10}
!10 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!11 = metadata !{i32 786478, i32 0, metadata !6, metadata !"polybench_prepare_instruments", metadata !"polybench_prepare_instruments", metadata !"", metadata !6, i32 353, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !9, i32 354} ; [ DW_TAG_subprogram ]
!12 = metadata !{i32 786478, i32 0, metadata !6, metadata !"polybench_timer_start", metadata !"polybench_timer_start", metadata !"", metadata !6, i32 364, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !9, i32 365} ; [ DW_TAG_subprogram ]
!13 = metadata !{i32 786478, i32 0, metadata !6, metadata !"polybench_timer_stop", metadata !"polybench_timer_stop", metadata !"", metadata !6, i32 375, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !9, i32 376} ; [ DW_TAG_subprogram ]
!14 = metadata !{i32 786478, i32 0, metadata !6, metadata !"polybench_timer_print", metadata !"polybench_timer_print", metadata !"", metadata !6, i32 388, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !9, i32 389} ; [ DW_TAG_subprogram ]
!15 = metadata !{i32 786478, i32 0, metadata !6, metadata !"polybench_free_data", metadata !"polybench_free_data", metadata !"", metadata !6, i32 547, metadata !16, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !9, i32 548} ; [ DW_TAG_subprogram ]
!16 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !17, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!17 = metadata !{null, metadata !18}
!18 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!19 = metadata !{i32 786478, i32 0, metadata !6, metadata !"polybench_alloc_data", metadata !"polybench_alloc_data", metadata !"", metadata !6, i32 557, metadata !20, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !9, i32 558} ; [ DW_TAG_subprogram ]
!20 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !21, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!21 = metadata !{metadata !18, metadata !22, metadata !23}
!22 = metadata !{i32 786468, null, metadata !"long long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!23 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!24 = metadata !{i32 786478, i32 0, metadata !6, metadata !"xmalloc", metadata !"xmalloc", metadata !"", metadata !6, i32 517, metadata !25, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !9, i32 518} ; [ DW_TAG_subprogram ]
!25 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !26, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!26 = metadata !{metadata !18, metadata !27}
!27 = metadata !{i32 786454, null, metadata !"size_t", metadata !6, i32 35, i64 0, i64 0, i64 0, i32 0, metadata !28} ; [ DW_TAG_typedef ]
!28 = metadata !{i32 786468, null, metadata !"long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!29 = metadata !{i32 786478, i32 0, metadata !6, metadata !"rtclock", metadata !"rtclock", metadata !"", metadata !6, i32 83, metadata !30, i1 true, i1 true, i32 0, i32 0, null, i32 0, i1 false, null, null, null, metadata !9, i32 84} ; [ DW_TAG_subprogram ]
!30 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !31, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!31 = metadata !{metadata !32}
!32 = metadata !{i32 786468, null, metadata !"double", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!33 = metadata !{metadata !34}
!34 = metadata !{metadata !35, metadata !36, metadata !37, metadata !38, metadata !39, metadata !40, metadata !41, metadata !44, metadata !45, metadata !46, metadata !48, metadata !52, metadata !53, metadata !54, metadata !55, metadata !57, metadata !58, metadata !60}
!35 = metadata !{i32 786484, i32 0, null, metadata !"polybench_papi_counters_threadid", metadata !"polybench_papi_counters_threadid", metadata !"", metadata !6, i32 45, metadata !23, i32 0, i32 1, i32* @polybench_papi_counters_threadid} ; [ DW_TAG_variable ]
!36 = metadata !{i32 786484, i32 0, null, metadata !"polybench_program_total_flops", metadata !"polybench_program_total_flops", metadata !"", metadata !6, i32 46, metadata !32, i32 0, i32 1, double* @polybench_program_total_flops} ; [ DW_TAG_variable ]
!37 = metadata !{i32 786484, i32 0, null, metadata !"polybench_t_start", metadata !"polybench_t_start", metadata !"", metadata !6, i32 78, metadata !32, i32 0, i32 1, double* @polybench_t_start} ; [ DW_TAG_variable ]
!38 = metadata !{i32 786484, i32 0, null, metadata !"polybench_t_end", metadata !"polybench_t_end", metadata !"", metadata !6, i32 78, metadata !32, i32 0, i32 1, double* @polybench_t_end} ; [ DW_TAG_variable ]
!39 = metadata !{i32 786484, i32 0, null, metadata !"polybench_c_start", metadata !"polybench_c_start", metadata !"", metadata !6, i32 80, metadata !22, i32 0, i32 1, i64* @polybench_c_start} ; [ DW_TAG_variable ]
!40 = metadata !{i32 786484, i32 0, null, metadata !"polybench_c_end", metadata !"polybench_c_end", metadata !"", metadata !6, i32 80, metadata !22, i32 0, i32 1, i64* @polybench_c_end} ; [ DW_TAG_variable ]
!41 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdin_", metadata !"_IO_2_1_stdin_", metadata !"", metadata !42, i32 315, metadata !43, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!42 = metadata !{i32 786473, metadata !"/usr/include/libio.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", null} ; [ DW_TAG_file_type ]
!43 = metadata !{i32 786451, null, metadata !"_IO_FILE_plus", metadata !42, i32 313, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_structure_type ]
!44 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdout_", metadata !"_IO_2_1_stdout_", metadata !"", metadata !42, i32 316, metadata !43, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!45 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stderr_", metadata !"_IO_2_1_stderr_", metadata !"", metadata !42, i32 317, metadata !43, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!46 = metadata !{i32 786484, i32 0, null, metadata !"sys_nerr", metadata !"sys_nerr", metadata !"", metadata !47, i32 26, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!47 = metadata !{i32 786473, metadata !"/usr/include/x86_64-linux-gnu/bits/sys_errlist.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", null} ; [ DW_TAG_file_type ]
!48 = metadata !{i32 786484, i32 0, null, metadata !"optarg", metadata !"optarg", metadata !"", metadata !49, i32 57, metadata !50, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!49 = metadata !{i32 786473, metadata !"/usr/include/getopt.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", null} ; [ DW_TAG_file_type ]
!50 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !51} ; [ DW_TAG_pointer_type ]
!51 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!52 = metadata !{i32 786484, i32 0, null, metadata !"optind", metadata !"optind", metadata !"", metadata !49, i32 71, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!53 = metadata !{i32 786484, i32 0, null, metadata !"opterr", metadata !"opterr", metadata !"", metadata !49, i32 76, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!54 = metadata !{i32 786484, i32 0, null, metadata !"optopt", metadata !"optopt", metadata !"", metadata !49, i32 80, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!55 = metadata !{i32 786484, i32 0, null, metadata !"__daylight", metadata !"__daylight", metadata !"", metadata !56, i32 283, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!56 = metadata !{i32 786473, metadata !"/usr/include/time.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", null} ; [ DW_TAG_file_type ]
!57 = metadata !{i32 786484, i32 0, null, metadata !"daylight", metadata !"daylight", metadata !"", metadata !56, i32 297, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!58 = metadata !{i32 786484, i32 0, null, metadata !"signgam", metadata !"signgam", metadata !"", metadata !59, i32 168, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!59 = metadata !{i32 786473, metadata !"/usr/include/math.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", null} ; [ DW_TAG_file_type ]
!60 = metadata !{i32 786484, i32 0, null, metadata !"polybench_inter_array_padding_sz", metadata !"polybench_inter_array_padding_sz", metadata !"", metadata !6, i32 75, metadata !27, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!61 = metadata !{i32 786449, i32 0, i32 1, metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm/2mm_hls/solution1/.autopilot/db/2mm.pragma.2.c", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !62, metadata !79} ; [ DW_TAG_compile_unit ]
!62 = metadata !{metadata !63}
!63 = metadata !{metadata !64, metadata !69, metadata !73, metadata !76}
!64 = metadata !{i32 786478, i32 0, metadata !65, metadata !"kernel_2mm", metadata !"kernel_2mm", metadata !"", metadata !65, i32 76, metadata !66, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i32*)* @kernel_2mm, null, null, metadata !9, i32 77} ; [ DW_TAG_subprogram ]
!65 = metadata !{i32 786473, metadata !"2mm.c", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", null} ; [ DW_TAG_file_type ]
!66 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !67, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!67 = metadata !{null, metadata !68}
!68 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !23} ; [ DW_TAG_pointer_type ]
!69 = metadata !{i32 786478, i32 0, metadata !65, metadata !"main", metadata !"main", metadata !"", metadata !65, i32 110, metadata !70, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !9, i32 111} ; [ DW_TAG_subprogram ]
!70 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !71, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!71 = metadata !{metadata !23, metadata !23, metadata !72}
!72 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !50} ; [ DW_TAG_pointer_type ]
!73 = metadata !{i32 786478, i32 0, metadata !65, metadata !"print_array", metadata !"print_array", metadata !"", metadata !65, i32 57, metadata !74, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !9, i32 59} ; [ DW_TAG_subprogram ]
!74 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !75, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!75 = metadata !{null, metadata !23, metadata !23, metadata !68}
!76 = metadata !{i32 786478, i32 0, metadata !65, metadata !"init_array", metadata !"init_array", metadata !"", metadata !65, i32 26, metadata !77, i1 true, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !9, i32 28} ; [ DW_TAG_subprogram ]
!77 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !78, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!78 = metadata !{null, metadata !23, metadata !23, metadata !23, metadata !23, metadata !68}
!79 = metadata !{metadata !80}
!80 = metadata !{metadata !81, metadata !41, metadata !44, metadata !45, metadata !46, metadata !85, metadata !48, metadata !52, metadata !53, metadata !54, metadata !58}
!81 = metadata !{i32 786484, i32 0, null, metadata !"indata", metadata !"indata", metadata !"", metadata !65, i32 108, metadata !82, i32 0, i32 1, [32582 x i32]* @indata} ; [ DW_TAG_variable ]
!82 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1042624, i64 32, i32 0, i32 0, metadata !23, metadata !83, i32 0, i32 0} ; [ DW_TAG_array_type ]
!83 = metadata !{metadata !84}
!84 = metadata !{i32 786465, i64 0, i64 32581}    ; [ DW_TAG_subrange_type ]
!85 = metadata !{i32 786484, i32 0, null, metadata !"__environ", metadata !"__environ", metadata !"", metadata !86, i32 546, metadata !72, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!86 = metadata !{i32 786473, metadata !"/usr/include/unistd.h", metadata !"/media/lty/SSD/Experiment-tmp/final1027/tests/test-progs/polybench-c-large/linear-algebra/kernels/2mm", null} ; [ DW_TAG_file_type ]
!87 = metadata !{null, metadata !88, metadata !89, metadata !90, metadata !91, metadata !92, metadata !93}
!88 = metadata !{metadata !"kernel_arg_addr_space"}
!89 = metadata !{metadata !"kernel_arg_access_qual"}
!90 = metadata !{metadata !"kernel_arg_type"}
!91 = metadata !{metadata !"kernel_arg_type_qual"}
!92 = metadata !{metadata !"kernel_arg_name"}
!93 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!94 = metadata !{null, metadata !95, metadata !96, metadata !97, metadata !98, metadata !99, metadata !93}
!95 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!96 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!97 = metadata !{metadata !"kernel_arg_type", metadata !"void*"}
!98 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!99 = metadata !{metadata !"kernel_arg_name", metadata !"ptr"}
!100 = metadata !{null, metadata !101, metadata !102, metadata !103, metadata !104, metadata !105, metadata !93}
!101 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!102 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!103 = metadata !{metadata !"kernel_arg_type", metadata !"ulong long", metadata !"int"}
!104 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!105 = metadata !{metadata !"kernel_arg_name", metadata !"n", metadata !"elt_size"}
!106 = metadata !{null, metadata !107, metadata !96, metadata !108, metadata !98, metadata !109, metadata !93}
!107 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!108 = metadata !{metadata !"kernel_arg_type", metadata !"size_t"}
!109 = metadata !{metadata !"kernel_arg_name", metadata !"alloc_sz"}
!110 = metadata !{void (i32*)* @kernel_2mm, metadata !95, metadata !96, metadata !111, metadata !98, metadata !112, metadata !93}
!111 = metadata !{metadata !"kernel_arg_type", metadata !"int*"}
!112 = metadata !{metadata !"kernel_arg_name", metadata !"indata"}
!113 = metadata !{null, metadata !114, metadata !102, metadata !115, metadata !104, metadata !116, metadata !93}
!114 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 1}
!115 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"char **"}
!116 = metadata !{metadata !"kernel_arg_name", metadata !"argc", metadata !"argv"}
!117 = metadata !{null, metadata !118, metadata !119, metadata !120, metadata !121, metadata !122, metadata !93}
!118 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 1}
!119 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!120 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"int", metadata !"int*"}
!121 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!122 = metadata !{metadata !"kernel_arg_name", metadata !"ni", metadata !"nl", metadata !"D"}
!123 = metadata !{null, metadata !124, metadata !125, metadata !126, metadata !127, metadata !128, metadata !93}
!124 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0, i32 0, i32 1}
!125 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!126 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"int", metadata !"int", metadata !"int", metadata !"int*"}
!127 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !"", metadata !""}
!128 = metadata !{metadata !"kernel_arg_name", metadata !"ni", metadata !"nj", metadata !"nk", metadata !"nl", metadata !"indata"}
!129 = metadata !{i32 786689, metadata !64, metadata !"indata", metadata !65, i32 16777292, metadata !68, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!130 = metadata !{i32 76, i32 21, metadata !64, null}
!131 = metadata !{i32 77, i32 2, metadata !132, null}
!132 = metadata !{i32 786443, metadata !64, i32 77, i32 1, metadata !65, i32 0} ; [ DW_TAG_lexical_block ]
!133 = metadata !{i32 786688, metadata !132, metadata !"tmp", metadata !65, i32 80, metadata !68, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!134 = metadata !{i32 80, i32 22, metadata !132, null}
!135 = metadata !{i32 85, i32 56, metadata !132, null}
!136 = metadata !{i32 786688, metadata !132, metadata !"alpha", metadata !65, i32 85, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!137 = metadata !{i32 86, i32 58, metadata !132, null}
!138 = metadata !{i32 786688, metadata !132, metadata !"beta", metadata !65, i32 86, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!139 = metadata !{i32 89, i32 8, metadata !140, null}
!140 = metadata !{i32 786443, metadata !132, i32 89, i32 3, metadata !65, i32 1} ; [ DW_TAG_lexical_block ]
!141 = metadata !{i32 97, i32 8, metadata !142, null}
!142 = metadata !{i32 786443, metadata !132, i32 97, i32 3, metadata !65, i32 6} ; [ DW_TAG_lexical_block ]
!143 = metadata !{i32 92, i32 2, metadata !144, null}
!144 = metadata !{i32 786443, metadata !145, i32 91, i32 7, metadata !65, i32 3} ; [ DW_TAG_lexical_block ]
!145 = metadata !{i32 786443, metadata !140, i32 90, i32 23, metadata !65, i32 2} ; [ DW_TAG_lexical_block ]
!146 = metadata !{i32 95, i32 1, metadata !147, null}
!147 = metadata !{i32 786443, metadata !148, i32 95, i32 1, metadata !65, i32 5} ; [ DW_TAG_lexical_block ]
!148 = metadata !{i32 786443, metadata !144, i32 93, i32 20, metadata !65, i32 4} ; [ DW_TAG_lexical_block ]
!149 = metadata !{i32 90, i32 28, metadata !145, null}
!150 = metadata !{i32 91, i32 8, metadata !144, null}
!151 = metadata !{i32 93, i32 25, metadata !148, null}
!152 = metadata !{i32 95, i32 2, metadata !147, null}
!153 = metadata !{i32 96, i32 1, metadata !147, null}
!154 = metadata !{i32 95, i32 61, metadata !147, null}
!155 = metadata !{i32 93, i32 40, metadata !148, null}
!156 = metadata !{i32 786688, metadata !132, metadata !"k", metadata !65, i32 78, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!157 = metadata !{i32 96, i32 7, metadata !144, null}
!158 = metadata !{i32 90, i32 43, metadata !145, null}
!159 = metadata !{i32 786688, metadata !132, metadata !"j", metadata !65, i32 78, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!160 = metadata !{i32 89, i32 23, metadata !140, null}
!161 = metadata !{i32 786688, metadata !132, metadata !"i", metadata !65, i32 78, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!162 = metadata !{i32 100, i32 2, metadata !163, null}
!163 = metadata !{i32 786443, metadata !164, i32 99, i32 7, metadata !65, i32 8} ; [ DW_TAG_lexical_block ]
!164 = metadata !{i32 786443, metadata !142, i32 98, i32 23, metadata !65, i32 7} ; [ DW_TAG_lexical_block ]
!165 = metadata !{i32 102, i32 1, metadata !166, null}
!166 = metadata !{i32 786443, metadata !167, i32 102, i32 1, metadata !65, i32 10} ; [ DW_TAG_lexical_block ]
!167 = metadata !{i32 786443, metadata !163, i32 101, i32 20, metadata !65, i32 9} ; [ DW_TAG_lexical_block ]
!168 = metadata !{i32 98, i32 28, metadata !164, null}
!169 = metadata !{i32 99, i32 8, metadata !163, null}
!170 = metadata !{i32 101, i32 25, metadata !167, null}
!171 = metadata !{i32 102, i32 2, metadata !166, null}
!172 = metadata !{i32 103, i32 1, metadata !166, null}
!173 = metadata !{i32 102, i32 36, metadata !166, null}
!174 = metadata !{i32 101, i32 40, metadata !167, null}
!175 = metadata !{i32 104, i32 7, metadata !163, null}
!176 = metadata !{i32 98, i32 43, metadata !164, null}
!177 = metadata !{i32 97, i32 23, metadata !142, null}
!178 = metadata !{i32 106, i32 1, metadata !132, null}
