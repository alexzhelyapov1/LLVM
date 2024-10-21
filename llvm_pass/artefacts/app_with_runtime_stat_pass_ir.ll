; ModuleID = '/home/alex/mipt/LLVM/simple_graph_app/src/app.c'
source_filename = "/home/alex/mipt/LLVM/simple_graph_app/src/app.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@0 = private unnamed_addr constant [12 x i8] c"trunc,add:\0A\00", align 1
@1 = private unnamed_addr constant [27 x i8] c"getelementptr,store:load:\0A\00", align 1
@2 = private unnamed_addr constant [143 x i8] c"alloca,getelementptr:getelementptr:getelementptr:getelementptr:getelementptr:getelementptr:getelementptr:getelementptr:getelementptr:bitcast:\0A\00", align 1
@3 = private unnamed_addr constant [20 x i8] c"bitcast,call:call:\0A\00", align 1
@4 = private unnamed_addr constant [22 x i8] c"shl,add:add:add:add:\0A\00", align 1
@5 = private unnamed_addr constant [14 x i8] c"icmp,select:\0A\00", align 1
@6 = private unnamed_addr constant [12 x i8] c"select,br:\0A\00", align 1
@7 = private unnamed_addr constant [20 x i8] c"trunc,add:add:add:\0A\00", align 1
@8 = private unnamed_addr constant [22 x i8] c"getelementptr,store:\0A\00", align 1
@9 = private unnamed_addr constant [28 x i8] c"getelementptr,store:store:\0A\00", align 1
@10 = private unnamed_addr constant [6 x i8] c"ret,\0A\00", align 1
@11 = private unnamed_addr constant [10 x i8] c"shl,add:\0A\00", align 1
@12 = private unnamed_addr constant [12 x i8] c"load,call:\0A\00", align 1
@13 = private unnamed_addr constant [13 x i8] c"trunc,call:\0A\00", align 1
@14 = private unnamed_addr constant [7 x i8] c"call,\0A\00", align 1
@15 = private unnamed_addr constant [18 x i8] c"shl,add:add:add:\0A\00", align 1
@16 = private unnamed_addr constant [14 x i8] c"add,add:add:\0A\00", align 1
@17 = private unnamed_addr constant [27 x i8] c"getelementptr,load:store:\0A\00", align 1
@18 = private unnamed_addr constant [10 x i8] c"add,add:\0A\00", align 1
@19 = private unnamed_addr constant [20 x i8] c"add,getelementptr:\0A\00", align 1
@20 = private unnamed_addr constant [21 x i8] c"getelementptr,load:\0A\00", align 1
@21 = private unnamed_addr constant [12 x i8] c"load,lshr:\0A\00", align 1
@22 = private unnamed_addr constant [11 x i8] c"lshr,add:\0A\00", align 1
@23 = private unnamed_addr constant [12 x i8] c"add,store:\0A\00", align 1
@24 = private unnamed_addr constant [8 x i8] c"store,\0A\00", align 1
@25 = private unnamed_addr constant [11 x i8] c"add,icmp:\0A\00", align 1
@26 = private unnamed_addr constant [10 x i8] c"icmp,br:\0A\00", align 1
@27 = private unnamed_addr constant [5 x i8] c"br,\0A\00", align 1

; Function Attrs: nofree norecurse nosync nounwind uwtable writeonly
define dso_local void @initMatrix(i32* nocapture noundef writeonly %0) local_unnamed_addr #0 {
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %2

2:                                                ; preds = %1, %7
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  call void @log_instr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @5, i32 0, i32 0))
  %4 = icmp ult i64 %3, 10
  call void @log_instr(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @4, i32 0, i32 0))
  %5 = shl nsw i64 %3, 9
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %10

6:                                                ; preds = %7
  call void @log_instr(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @10, i32 0, i32 0))
  ret void

7:                                                ; preds = %39
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %8 = add nuw nsw i64 %3, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %9 = icmp eq i64 %8, 256
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %9, label %6, label %2, !llvm.loop !5

10:                                               ; preds = %2, %39
  %11 = phi i64 [ 0, %2 ], [ %40, %39 ]
  call void @log_instr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @5, i32 0, i32 0))
  %12 = icmp ult i64 %11, 10
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @6, i32 0, i32 0))
  %13 = select i1 %12, i1 true, i1 %4
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %13, label %14, label %17

14:                                               ; preds = %10
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %15 = add nuw nsw i64 %11, %5
  call void @log_instr(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @8, i32 0, i32 0))
  %16 = getelementptr inbounds i32, i32* %0, i64 %15
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -16711936, i32* %16, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %39

17:                                               ; preds = %10
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @0, i32 0, i32 0))
  %18 = trunc i64 %11 to i32
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %19 = add i32 %18, -129
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %20 = icmp ult i32 %19, 9
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %20, label %21, label %24

21:                                               ; preds = %17
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %22 = add nuw nsw i64 %11, %5
  call void @log_instr(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @8, i32 0, i32 0))
  %23 = getelementptr inbounds i32, i32* %0, i64 %22
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -65536, i32* %23, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %39

24:                                               ; preds = %17
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @0, i32 0, i32 0))
  %25 = trunc i64 %11 to i32
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %26 = add i32 %25, -257
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %27 = icmp ult i32 %26, 9
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %27, label %28, label %31

28:                                               ; preds = %24
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %29 = add nuw nsw i64 %11, %5
  call void @log_instr(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @8, i32 0, i32 0))
  %30 = getelementptr inbounds i32, i32* %0, i64 %29
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -16776961, i32* %30, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %39

31:                                               ; preds = %24
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @0, i32 0, i32 0))
  %32 = trunc i64 %11 to i32
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %33 = add i32 %32, -385
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %34 = icmp ult i32 %33, 9
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %35 = add nuw nsw i64 %11, %5
  call void @log_instr(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i32 0, i32 0))
  %36 = getelementptr inbounds i32, i32* %0, i64 %35
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %34, label %37, label %38

37:                                               ; preds = %31
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -1, i32* %36, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %39

38:                                               ; preds = %31
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -16777216, i32* %36, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %39

39:                                               ; preds = %14, %28, %38, %37, %21
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %40 = add nuw nsw i64 %11, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %41 = icmp eq i64 %40, 512
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %41, label %7, label %10, !llvm.loop !11
}

; Function Attrs: argmemonly mustprogress nofree nosync nounwind willreturn
declare void @llvm.lifetime.start.p0i8(i64 immarg, i8* nocapture) #1

; Function Attrs: argmemonly mustprogress nofree nosync nounwind willreturn
declare void @llvm.lifetime.end.p0i8(i64 immarg, i8* nocapture) #1

; Function Attrs: nofree norecurse nosync nounwind uwtable
define dso_local void @updateMatrix(i32* nocapture noundef %0) local_unnamed_addr #2 {
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %2

2:                                                ; preds = %1, %7
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  call void @log_instr(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @15, i32 0, i32 0))
  %4 = shl nsw i64 %3, 9
  call void @log_instr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @16, i32 0, i32 0))
  %5 = add nuw nsw i64 %4, 512
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %10

6:                                                ; preds = %7
  call void @log_instr(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @10, i32 0, i32 0))
  ret void

7:                                                ; preds = %10
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %8 = add nuw nsw i64 %3, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %9 = icmp eq i64 %8, 255
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %9, label %6, label %2, !llvm.loop !12

10:                                               ; preds = %2, %10
  %11 = phi i64 [ 511, %2 ], [ %12, %10 ]
  call void @log_instr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @16, i32 0, i32 0))
  %12 = add nsw i64 %11, -1
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %13 = add nuw nsw i64 %12, %4
  call void @log_instr(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @20, i32 0, i32 0))
  %14 = getelementptr inbounds i32, i32* %0, i64 %13
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @21, i32 0, i32 0))
  %15 = load i32, i32* %14, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @22, i32 0, i32 0))
  %16 = lshr i32 %15, 2
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %17 = add nuw nsw i64 %11, %4
  call void @log_instr(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @1, i32 0, i32 0))
  %18 = getelementptr inbounds i32, i32* %0, i64 %17
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @21, i32 0, i32 0))
  %19 = load i32, i32* %18, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @22, i32 0, i32 0))
  %20 = lshr i32 %19, 2
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @18, i32 0, i32 0))
  %21 = add nuw nsw i32 %20, %16
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %22 = add nuw nsw i64 %11, %5
  call void @log_instr(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @20, i32 0, i32 0))
  %23 = getelementptr inbounds i32, i32* %0, i64 %22
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @21, i32 0, i32 0))
  %24 = load i32, i32* %23, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @22, i32 0, i32 0))
  %25 = lshr i32 %24, 2
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @18, i32 0, i32 0))
  %26 = add nuw i32 %21, %25
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %27 = add nuw nsw i64 %12, %5
  call void @log_instr(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @20, i32 0, i32 0))
  %28 = getelementptr inbounds i32, i32* %0, i64 %27
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @21, i32 0, i32 0))
  %29 = load i32, i32* %28, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @22, i32 0, i32 0))
  %30 = lshr i32 %29, 2
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @23, i32 0, i32 0))
  %31 = add nuw i32 %26, %30
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 %31, i32* %18, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %32 = icmp ugt i64 %11, 1
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %32, label %10, label %7, !llvm.loop !13
}

; Function Attrs: nounwind uwtable
define dso_local void @drawMatrix(i32* nocapture noundef readonly %0) local_unnamed_addr #3 {
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %2

2:                                                ; preds = %1, %7
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @11, i32 0, i32 0))
  %4 = shl nsw i64 %3, 9
  call void @log_instr(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @13, i32 0, i32 0))
  %5 = trunc i64 %3 to i32
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %10

6:                                                ; preds = %7
  call void @log_instr(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @14, i32 0, i32 0))
  tail call void (...) @simFlush() #5
  call void @log_instr(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @10, i32 0, i32 0))
  ret void

7:                                                ; preds = %10
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %8 = add nuw nsw i64 %3, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %9 = icmp eq i64 %8, 256
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %9, label %6, label %2, !llvm.loop !14

10:                                               ; preds = %2, %10
  %11 = phi i64 [ 0, %2 ], [ %16, %10 ]
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %12 = add nuw nsw i64 %11, %4
  call void @log_instr(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @20, i32 0, i32 0))
  %13 = getelementptr inbounds i32, i32* %0, i64 %12
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @12, i32 0, i32 0))
  %14 = load i32, i32* %13, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @13, i32 0, i32 0))
  %15 = trunc i64 %11 to i32
  call void @log_instr(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @14, i32 0, i32 0))
  tail call void @simPutPixel(i32 noundef %15, i32 noundef %5, i32 noundef %14) #5
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %16 = add nuw nsw i64 %11, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %17 = icmp eq i64 %16, 512
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %17, label %7, label %10, !llvm.loop !15
}

declare void @simPutPixel(i32 noundef, i32 noundef, i32 noundef) local_unnamed_addr #4

declare void @simFlush(...) local_unnamed_addr #4

; Function Attrs: nounwind uwtable
define dso_local void @app() local_unnamed_addr #3 {
  call void @log_instr(i8* getelementptr inbounds ([143 x i8], [143 x i8]* @2, i32 0, i32 0))
  %1 = alloca [131072 x i32], align 16
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @3, i32 0, i32 0))
  %2 = bitcast [131072 x i32]* %1 to i8*
  call void @log_instr(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @14, i32 0, i32 0))
  call void @llvm.lifetime.start.p0i8(i64 524288, i8* nonnull %2) #5
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %3

3:                                                ; preds = %7, %0
  %4 = phi i64 [ 0, %0 ], [ %8, %7 ]
  call void @log_instr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @5, i32 0, i32 0))
  %5 = icmp ult i64 %4, 10
  call void @log_instr(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @4, i32 0, i32 0))
  %6 = shl nsw i64 %4, 9
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %10

7:                                                ; preds = %37
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %8 = add nuw nsw i64 %4, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %9 = icmp eq i64 %8, 256
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %9, label %40, label %3, !llvm.loop !5

10:                                               ; preds = %37, %3
  %11 = phi i64 [ 0, %3 ], [ %38, %37 ]
  call void @log_instr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @5, i32 0, i32 0))
  %12 = icmp ult i64 %11, 10
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @6, i32 0, i32 0))
  %13 = select i1 %12, i1 true, i1 %5
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %13, label %14, label %17

14:                                               ; preds = %10
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %15 = add nuw nsw i64 %11, %6
  call void @log_instr(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @8, i32 0, i32 0))
  %16 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %15
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -16711936, i32* %16, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %37

17:                                               ; preds = %10
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @7, i32 0, i32 0))
  %18 = trunc i64 %11 to i32
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %19 = add i32 %18, -129
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %20 = icmp ult i32 %19, 9
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %20, label %21, label %24

21:                                               ; preds = %17
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %22 = add nuw nsw i64 %11, %6
  call void @log_instr(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @8, i32 0, i32 0))
  %23 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %22
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -65536, i32* %23, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %37

24:                                               ; preds = %17
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %25 = add i32 %18, -257
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %26 = icmp ult i32 %25, 9
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %26, label %27, label %30

27:                                               ; preds = %24
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %28 = add nuw nsw i64 %11, %6
  call void @log_instr(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @8, i32 0, i32 0))
  %29 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %28
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -16776961, i32* %29, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %37

30:                                               ; preds = %24
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %31 = add i32 %18, -385
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %32 = icmp ult i32 %31, 9
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %33 = add nuw nsw i64 %11, %6
  call void @log_instr(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @9, i32 0, i32 0))
  %34 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %33
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %32, label %35, label %36

35:                                               ; preds = %30
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -1, i32* %34, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %37

36:                                               ; preds = %30
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 -16777216, i32* %34, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %37

37:                                               ; preds = %36, %35, %27, %21, %14
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %38 = add nuw nsw i64 %11, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %39 = icmp eq i64 %38, 512
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %39, label %7, label %10, !llvm.loop !11

40:                                               ; preds = %7, %89
  %41 = phi i32 [ %90, %89 ], [ 0, %7 ]
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %43

42:                                               ; preds = %89
  call void @log_instr(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @14, i32 0, i32 0))
  call void @llvm.lifetime.end.p0i8(i64 524288, i8* nonnull %2) #5
  call void @log_instr(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @10, i32 0, i32 0))
  ret void

43:                                               ; preds = %40, %47
  %44 = phi i64 [ %48, %47 ], [ 0, %40 ]
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @11, i32 0, i32 0))
  %45 = shl nsw i64 %44, 9
  call void @log_instr(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @13, i32 0, i32 0))
  %46 = trunc i64 %44 to i32
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %50

47:                                               ; preds = %50
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %48 = add nuw nsw i64 %44, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %49 = icmp eq i64 %48, 256
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %49, label %58, label %43, !llvm.loop !14

50:                                               ; preds = %50, %43
  %51 = phi i64 [ 0, %43 ], [ %56, %50 ]
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %52 = add nuw nsw i64 %51, %45
  call void @log_instr(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @20, i32 0, i32 0))
  %53 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %52
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @12, i32 0, i32 0))
  %54 = load i32, i32* %53, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @13, i32 0, i32 0))
  %55 = trunc i64 %51 to i32
  call void @log_instr(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @14, i32 0, i32 0))
  tail call void @simPutPixel(i32 noundef %55, i32 noundef %46, i32 noundef %54) #5
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %56 = add nuw nsw i64 %51, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %57 = icmp eq i64 %56, 512
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %57, label %47, label %50, !llvm.loop !15

58:                                               ; preds = %47
  call void @log_instr(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @14, i32 0, i32 0))
  tail call void (...) @simFlush() #5
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %59

59:                                               ; preds = %63, %58
  %60 = phi i64 [ 0, %58 ], [ %64, %63 ]
  call void @log_instr(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @15, i32 0, i32 0))
  %61 = shl nsw i64 %60, 9
  call void @log_instr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @16, i32 0, i32 0))
  %62 = add nuw nsw i64 %61, 512
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br label %66

63:                                               ; preds = %66
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %64 = add nuw nsw i64 %60, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %65 = icmp eq i64 %64, 255
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %65, label %89, label %59, !llvm.loop !12

66:                                               ; preds = %66, %59
  %67 = phi i64 [ 511, %59 ], [ %68, %66 ]
  call void @log_instr(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @16, i32 0, i32 0))
  %68 = add nsw i64 %67, -1
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %69 = add nuw nsw i64 %68, %61
  call void @log_instr(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @20, i32 0, i32 0))
  %70 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %69
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @21, i32 0, i32 0))
  %71 = load i32, i32* %70, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @22, i32 0, i32 0))
  %72 = lshr i32 %71, 2
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %73 = add nuw nsw i64 %67, %61
  call void @log_instr(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @17, i32 0, i32 0))
  %74 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %73
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @21, i32 0, i32 0))
  %75 = load i32, i32* %74, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @22, i32 0, i32 0))
  %76 = lshr i32 %75, 2
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @18, i32 0, i32 0))
  %77 = add nuw nsw i32 %76, %72
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %78 = add nuw nsw i64 %67, %62
  call void @log_instr(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @20, i32 0, i32 0))
  %79 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %78
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @21, i32 0, i32 0))
  %80 = load i32, i32* %79, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @22, i32 0, i32 0))
  %81 = lshr i32 %80, 2
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @18, i32 0, i32 0))
  %82 = add nuw i32 %77, %81
  call void @log_instr(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @19, i32 0, i32 0))
  %83 = add nuw nsw i64 %68, %62
  call void @log_instr(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @20, i32 0, i32 0))
  %84 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %83
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @21, i32 0, i32 0))
  %85 = load i32, i32* %84, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @22, i32 0, i32 0))
  %86 = lshr i32 %85, 2
  call void @log_instr(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @23, i32 0, i32 0))
  %87 = add nuw i32 %82, %86
  call void @log_instr(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @24, i32 0, i32 0))
  store i32 %87, i32* %74, align 4, !tbaa !7
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %88 = icmp ugt i64 %67, 1
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %88, label %66, label %63, !llvm.loop !13

89:                                               ; preds = %63
  call void @log_instr(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @25, i32 0, i32 0))
  %90 = add nuw nsw i32 %41, 1
  call void @log_instr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @26, i32 0, i32 0))
  %91 = icmp eq i32 %90, 1000
  call void @log_instr(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @27, i32 0, i32 0))
  br i1 %91, label %42, label %40, !llvm.loop !16
}

declare void @log_instr(i8*)

attributes #0 = { nofree norecurse nosync nounwind uwtable writeonly "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { argmemonly mustprogress nofree nosync nounwind willreturn }
attributes #2 = { nofree norecurse nosync nounwind uwtable "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nounwind uwtable "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { nounwind }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 1}
!4 = !{!"Ubuntu clang version 14.0.0-1ubuntu1.1"}
!5 = distinct !{!5, !6}
!6 = !{!"llvm.loop.mustprogress"}
!7 = !{!8, !8, i64 0}
!8 = !{!"int", !9, i64 0}
!9 = !{!"omnipotent char", !10, i64 0}
!10 = !{!"Simple C/C++ TBAA"}
!11 = distinct !{!11, !6}
!12 = distinct !{!12, !6}
!13 = distinct !{!13, !6}
!14 = distinct !{!14, !6}
!15 = distinct !{!15, !6}
!16 = distinct !{!16, !6}
