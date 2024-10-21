; ModuleID = '/home/alex/mipt/LLVM/app_llvm_constructor/src/empty.c'
source_filename = "/home/alex/mipt/LLVM/app_llvm_constructor/src/empty.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

; Function Attrs: nofree norecurse nosync nounwind uwtable writeonly
define dso_local void @initMatrix(i32* nocapture noundef writeonly %0) local_unnamed_addr #0 {
  br label %2

2:                                                ; preds = %1, %7
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  %4 = icmp ult i64 %3, 10
  %5 = shl nsw i64 %3, 9
  br label %10

6:                                                ; preds = %7
  ret void

7:                                                ; preds = %39
  %8 = add nuw nsw i64 %3, 1
  %9 = icmp eq i64 %8, 256
  br i1 %9, label %6, label %2, !llvm.loop !5

10:                                               ; preds = %2, %39
  %11 = phi i64 [ 0, %2 ], [ %40, %39 ]
  %12 = icmp ult i64 %11, 10
  %13 = select i1 %12, i1 true, i1 %4
  br i1 %13, label %14, label %17

14:                                               ; preds = %10
  %15 = add nuw nsw i64 %11, %5
  %16 = getelementptr inbounds i32, i32* %0, i64 %15
  store i32 -16711936, i32* %16, align 4, !tbaa !7
  br label %39

17:                                               ; preds = %10
  %18 = trunc i64 %11 to i32
  %19 = add i32 %18, -129
  %20 = icmp ult i32 %19, 9
  br i1 %20, label %21, label %24

21:                                               ; preds = %17
  %22 = add nuw nsw i64 %11, %5
  %23 = getelementptr inbounds i32, i32* %0, i64 %22
  store i32 -65536, i32* %23, align 4, !tbaa !7
  br label %39

24:                                               ; preds = %17
  %25 = trunc i64 %11 to i32
  %26 = add i32 %25, -257
  %27 = icmp ult i32 %26, 9
  br i1 %27, label %28, label %31

28:                                               ; preds = %24
  %29 = add nuw nsw i64 %11, %5
  %30 = getelementptr inbounds i32, i32* %0, i64 %29
  store i32 -16776961, i32* %30, align 4, !tbaa !7
  br label %39

31:                                               ; preds = %24
  %32 = trunc i64 %11 to i32
  %33 = add i32 %32, -385
  %34 = icmp ult i32 %33, 9
  %35 = add nuw nsw i64 %11, %5
  %36 = getelementptr inbounds i32, i32* %0, i64 %35
  br i1 %34, label %37, label %38

37:                                               ; preds = %31
  store i32 -1, i32* %36, align 4, !tbaa !7
  br label %39

38:                                               ; preds = %31
  store i32 -16777216, i32* %36, align 4, !tbaa !7
  br label %39

39:                                               ; preds = %14, %28, %38, %37, %21
  %40 = add nuw nsw i64 %11, 1
  %41 = icmp eq i64 %40, 512
  br i1 %41, label %7, label %10, !llvm.loop !11
}

; Function Attrs: argmemonly mustprogress nofree nosync nounwind willreturn
declare void @llvm.lifetime.start.p0i8(i64 immarg, i8* nocapture) #1

; Function Attrs: argmemonly mustprogress nofree nosync nounwind willreturn
declare void @llvm.lifetime.end.p0i8(i64 immarg, i8* nocapture) #1

; Function Attrs: nounwind uwtable
define dso_local void @drawMatrix(i32* nocapture noundef readonly %0) local_unnamed_addr #2 {
  br label %2

2:                                                ; preds = %1, %7
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  %4 = shl nsw i64 %3, 9
  %5 = trunc i64 %3 to i32
  br label %10

6:                                                ; preds = %7
  tail call void (...) @simFlush() #4
  ret void

7:                                                ; preds = %10
  %8 = add nuw nsw i64 %3, 1
  %9 = icmp eq i64 %8, 256
  br i1 %9, label %6, label %2, !llvm.loop !12

10:                                               ; preds = %2, %10
  %11 = phi i64 [ 0, %2 ], [ %16, %10 ]
  %12 = add nuw nsw i64 %11, %4
  %13 = getelementptr inbounds i32, i32* %0, i64 %12
  %14 = load i32, i32* %13, align 4, !tbaa !7
  %15 = trunc i64 %11 to i32
  tail call void @simPutPixel(i32 noundef %15, i32 noundef %5, i32 noundef %14) #4
  %16 = add nuw nsw i64 %11, 1
  %17 = icmp eq i64 %16, 512
  br i1 %17, label %7, label %10, !llvm.loop !13
}

declare void @simPutPixel(i32 noundef, i32 noundef, i32 noundef) local_unnamed_addr #3

declare void @simFlush(...) local_unnamed_addr #3

; Function Attrs: nounwind uwtable
define dso_local void @app() local_unnamed_addr #2 {
  %1 = alloca [131072 x i32], align 16
  %2 = bitcast [131072 x i32]* %1 to i8*
  call void @llvm.lifetime.start.p0i8(i64 524288, i8* nonnull %2) #4
  br label %3

3:                                                ; preds = %7, %0
  %4 = phi i64 [ 0, %0 ], [ %8, %7 ]
  %5 = icmp ult i64 %4, 10
  %6 = shl nsw i64 %4, 9
  br label %12

7:                                                ; preds = %39
  %8 = add nuw nsw i64 %4, 1
  %9 = icmp eq i64 %8, 256
  br i1 %9, label %10, label %3, !llvm.loop !5

10:                                               ; preds = %7
  %11 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 0
  br label %42

12:                                               ; preds = %39, %3
  %13 = phi i64 [ 0, %3 ], [ %40, %39 ]
  %14 = icmp ult i64 %13, 10
  %15 = select i1 %14, i1 true, i1 %5
  br i1 %15, label %16, label %19

16:                                               ; preds = %12
  %17 = add nuw nsw i64 %13, %6
  %18 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %17
  store i32 -16711936, i32* %18, align 4, !tbaa !7
  br label %39

19:                                               ; preds = %12
  %20 = trunc i64 %13 to i32
  %21 = add i32 %20, -129
  %22 = icmp ult i32 %21, 9
  br i1 %22, label %23, label %26

23:                                               ; preds = %19
  %24 = add nuw nsw i64 %13, %6
  %25 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %24
  store i32 -65536, i32* %25, align 4, !tbaa !7
  br label %39

26:                                               ; preds = %19
  %27 = add i32 %20, -257
  %28 = icmp ult i32 %27, 9
  br i1 %28, label %29, label %32

29:                                               ; preds = %26
  %30 = add nuw nsw i64 %13, %6
  %31 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %30
  store i32 -16776961, i32* %31, align 4, !tbaa !7
  br label %39

32:                                               ; preds = %26
  %33 = add i32 %20, -385
  %34 = icmp ult i32 %33, 9
  %35 = add nuw nsw i64 %13, %6
  %36 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %35
  br i1 %34, label %37, label %38

37:                                               ; preds = %32
  store i32 -1, i32* %36, align 4, !tbaa !7
  br label %39

38:                                               ; preds = %32
  store i32 -16777216, i32* %36, align 4, !tbaa !7
  br label %39

39:                                               ; preds = %38, %37, %29, %23, %16
  %40 = add nuw nsw i64 %13, 1
  %41 = icmp eq i64 %40, 512
  br i1 %41, label %7, label %12, !llvm.loop !11

42:                                               ; preds = %10, %60
  %43 = phi i32 [ %61, %60 ], [ 0, %10 ]
  br label %45

44:                                               ; preds = %60
  call void @llvm.lifetime.end.p0i8(i64 524288, i8* nonnull %2) #4
  ret void

45:                                               ; preds = %42, %49
  %46 = phi i64 [ %50, %49 ], [ 0, %42 ]
  %47 = shl nsw i64 %46, 9
  %48 = trunc i64 %46 to i32
  br label %52

49:                                               ; preds = %52
  %50 = add nuw nsw i64 %46, 1
  %51 = icmp eq i64 %50, 256
  br i1 %51, label %60, label %45, !llvm.loop !12

52:                                               ; preds = %52, %45
  %53 = phi i64 [ 0, %45 ], [ %58, %52 ]
  %54 = add nuw nsw i64 %53, %47
  %55 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %54
  %56 = load i32, i32* %55, align 4, !tbaa !7
  %57 = trunc i64 %53 to i32
  call void @simPutPixel(i32 noundef %57, i32 noundef %48, i32 noundef %56) #4
  %58 = add nuw nsw i64 %53, 1
  %59 = icmp eq i64 %58, 512
  br i1 %59, label %49, label %52, !llvm.loop !13

60:                                               ; preds = %49
  call void (...) @simFlush() #4
  call void @updateMatrix1(i32* %11)
  %61 = add nuw nsw i32 %43, 1
  %62 = icmp eq i32 %61, 1000
  br i1 %62, label %44, label %42, !llvm.loop !14
}

define dso_local void @updateMatrix1(i32* %0) local_unnamed_addr {
  br label %2

2:                                                ; preds = %7, %1
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  %4 = shl nsw i64 %3, 9
  %5 = add nuw nsw i64 %4, 512
  br label %10

6:                                                ; preds = %7
  ret void

7:                                                ; preds = %10
  %8 = add nuw nsw i64 %3, 1
  %9 = icmp eq i64 %8, 255
  br i1 %9, label %6, label %2

10:                                               ; preds = %10, %2
  %11 = phi i64 [ 511, %2 ], [ %12, %10 ]
  %12 = add nsw i64 %11, -1
  %13 = add nuw nsw i64 %12, %4
  %14 = getelementptr inbounds i32, i32* %0, i64 %13
  %15 = load i32, i32* %14, align 4
  %16 = lshr i32 %15, 2
  %17 = add nuw nsw i64 %11, %4
  %18 = getelementptr inbounds i32, i32* %0, i64 %17
  %19 = load i32, i32* %18, align 4
  %20 = lshr i32 %19, 2
  %21 = add nuw nsw i32 %20, %16
  %22 = add nuw nsw i64 %11, %5
  %23 = getelementptr inbounds i32, i32* %0, i64 %22
  %24 = load i32, i32* %23, align 4
  %25 = lshr i32 %24, 2
  %26 = add nuw i32 %21, %25
  %27 = add nuw nsw i64 %12, %5
  %28 = getelementptr inbounds i32, i32* %0, i64 %27
  %29 = load i32, i32* %28, align 4
  %30 = lshr i32 %29, 2
  %31 = add nuw i32 %26, %30
  store i32 %31, i32* %18, align 4
  %32 = icmp ugt i64 %11, 1
  br i1 %32, label %10, label %7
}

attributes #0 = { nofree norecurse nosync nounwind uwtable writeonly "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { argmemonly mustprogress nofree nosync nounwind willreturn }
attributes #2 = { nounwind uwtable "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { nounwind }

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
