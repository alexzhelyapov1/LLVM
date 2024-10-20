; ModuleID = '/home/alex/mipt/LLVM/app_llvm_constructor/src/app.c'
source_filename = "/home/alex/mipt/LLVM/app_llvm_constructor/src/app.c"
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

; Function Attrs: nofree norecurse nosync nounwind uwtable
define dso_local void @updateMatrix(i32* nocapture noundef %0) local_unnamed_addr #2 {
  br label %2

2:                                                ; preds = %1, %7
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  %4 = shl nsw i64 %3, 9
  %5 = add nuw nsw i64 %4, 512
  br label %10

6:                                                ; preds = %7
  ret void

7:                                                ; preds = %10
  %8 = add nuw nsw i64 %3, 1
  %9 = icmp eq i64 %8, 255
  br i1 %9, label %6, label %2, !llvm.loop !12

10:                                               ; preds = %2, %10
  %11 = phi i64 [ 511, %2 ], [ %12, %10 ]
  %12 = add nsw i64 %11, -1
  %13 = add nuw nsw i64 %12, %4
  %14 = getelementptr inbounds i32, i32* %0, i64 %13
  %15 = load i32, i32* %14, align 4, !tbaa !7
  %16 = lshr i32 %15, 2
  %17 = add nuw nsw i64 %11, %4
  %18 = getelementptr inbounds i32, i32* %0, i64 %17
  %19 = load i32, i32* %18, align 4, !tbaa !7
  %20 = lshr i32 %19, 2
  %21 = add nuw nsw i32 %20, %16
  %22 = add nuw nsw i64 %11, %5
  %23 = getelementptr inbounds i32, i32* %0, i64 %22
  %24 = load i32, i32* %23, align 4, !tbaa !7
  %25 = lshr i32 %24, 2
  %26 = add nuw i32 %21, %25
  %27 = add nuw nsw i64 %12, %5
  %28 = getelementptr inbounds i32, i32* %0, i64 %27
  %29 = load i32, i32* %28, align 4, !tbaa !7
  %30 = lshr i32 %29, 2
  %31 = add nuw i32 %26, %30
  store i32 %31, i32* %18, align 4, !tbaa !7
  %32 = icmp ugt i64 %11, 1
  br i1 %32, label %10, label %7, !llvm.loop !13
}

; Function Attrs: nounwind uwtable
define dso_local void @drawMatrix(i32* nocapture noundef readonly %0) local_unnamed_addr #3 {
  br label %2

2:                                                ; preds = %1, %7
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  %4 = shl nsw i64 %3, 9
  %5 = trunc i64 %3 to i32
  br label %10

6:                                                ; preds = %7
  tail call void (...) @simFlush() #5
  ret void

7:                                                ; preds = %10
  %8 = add nuw nsw i64 %3, 1
  %9 = icmp eq i64 %8, 256
  br i1 %9, label %6, label %2, !llvm.loop !14

10:                                               ; preds = %2, %10
  %11 = phi i64 [ 0, %2 ], [ %16, %10 ]
  %12 = add nuw nsw i64 %11, %4
  %13 = getelementptr inbounds i32, i32* %0, i64 %12
  %14 = load i32, i32* %13, align 4, !tbaa !7
  %15 = trunc i64 %11 to i32
  tail call void @simPutPixel(i32 noundef %15, i32 noundef %5, i32 noundef %14) #5
  %16 = add nuw nsw i64 %11, 1
  %17 = icmp eq i64 %16, 512
  br i1 %17, label %7, label %10, !llvm.loop !15
}

declare void @simPutPixel(i32 noundef, i32 noundef, i32 noundef) local_unnamed_addr #4

declare void @simFlush(...) local_unnamed_addr #4

; Function Attrs: nounwind uwtable
define dso_local void @app() local_unnamed_addr #3 {
  %1 = alloca [131072 x i32], align 16
  %2 = bitcast [131072 x i32]* %1 to i8*
  call void @llvm.lifetime.start.p0i8(i64 524288, i8* nonnull %2) #5
  br label %3

3:                                                ; preds = %7, %0
  %4 = phi i64 [ 0, %0 ], [ %8, %7 ]
  %5 = icmp ult i64 %4, 10
  %6 = shl nsw i64 %4, 9
  br label %10

7:                                                ; preds = %37
  %8 = add nuw nsw i64 %4, 1
  %9 = icmp eq i64 %8, 256
  br i1 %9, label %40, label %3, !llvm.loop !5

10:                                               ; preds = %37, %3
  %11 = phi i64 [ 0, %3 ], [ %38, %37 ]
  %12 = icmp ult i64 %11, 10
  %13 = select i1 %12, i1 true, i1 %5
  br i1 %13, label %14, label %17

14:                                               ; preds = %10
  %15 = add nuw nsw i64 %11, %6
  %16 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %15
  store i32 -16711936, i32* %16, align 4, !tbaa !7
  br label %37

17:                                               ; preds = %10
  %18 = trunc i64 %11 to i32
  %19 = add i32 %18, -129
  %20 = icmp ult i32 %19, 9
  br i1 %20, label %21, label %24

21:                                               ; preds = %17
  %22 = add nuw nsw i64 %11, %6
  %23 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %22
  store i32 -65536, i32* %23, align 4, !tbaa !7
  br label %37

24:                                               ; preds = %17
  %25 = add i32 %18, -257
  %26 = icmp ult i32 %25, 9
  br i1 %26, label %27, label %30

27:                                               ; preds = %24
  %28 = add nuw nsw i64 %11, %6
  %29 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %28
  store i32 -16776961, i32* %29, align 4, !tbaa !7
  br label %37

30:                                               ; preds = %24
  %31 = add i32 %18, -385
  %32 = icmp ult i32 %31, 9
  %33 = add nuw nsw i64 %11, %6
  %34 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %33
  br i1 %32, label %35, label %36

35:                                               ; preds = %30
  store i32 -1, i32* %34, align 4, !tbaa !7
  br label %37

36:                                               ; preds = %30
  store i32 -16777216, i32* %34, align 4, !tbaa !7
  br label %37

37:                                               ; preds = %36, %35, %27, %21, %14
  %38 = add nuw nsw i64 %11, 1
  %39 = icmp eq i64 %38, 512
  br i1 %39, label %7, label %10, !llvm.loop !11

40:                                               ; preds = %7, %89
  %41 = phi i32 [ %90, %89 ], [ 0, %7 ]
  br label %43

42:                                               ; preds = %89
  call void @llvm.lifetime.end.p0i8(i64 524288, i8* nonnull %2) #5
  ret void

43:                                               ; preds = %40, %47
  %44 = phi i64 [ %48, %47 ], [ 0, %40 ]
  %45 = shl nsw i64 %44, 9
  %46 = trunc i64 %44 to i32
  br label %50

47:                                               ; preds = %50
  %48 = add nuw nsw i64 %44, 1
  %49 = icmp eq i64 %48, 256
  br i1 %49, label %58, label %43, !llvm.loop !14

50:                                               ; preds = %50, %43
  %51 = phi i64 [ 0, %43 ], [ %56, %50 ]
  %52 = add nuw nsw i64 %51, %45
  %53 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %52
  %54 = load i32, i32* %53, align 4, !tbaa !7
  %55 = trunc i64 %51 to i32
  tail call void @simPutPixel(i32 noundef %55, i32 noundef %46, i32 noundef %54) #5
  %56 = add nuw nsw i64 %51, 1
  %57 = icmp eq i64 %56, 512
  br i1 %57, label %47, label %50, !llvm.loop !15

58:                                               ; preds = %47
  tail call void (...) @simFlush() #5
  br label %59

59:                                               ; preds = %63, %58
  %60 = phi i64 [ 0, %58 ], [ %64, %63 ]
  %61 = shl nsw i64 %60, 9
  %62 = add nuw nsw i64 %61, 512
  br label %66

63:                                               ; preds = %66
  %64 = add nuw nsw i64 %60, 1
  %65 = icmp eq i64 %64, 255
  br i1 %65, label %89, label %59, !llvm.loop !12

66:                                               ; preds = %66, %59
  %67 = phi i64 [ 511, %59 ], [ %68, %66 ]
  %68 = add nsw i64 %67, -1
  %69 = add nuw nsw i64 %68, %61
  %70 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %69
  %71 = load i32, i32* %70, align 4, !tbaa !7
  %72 = lshr i32 %71, 2
  %73 = add nuw nsw i64 %67, %61
  %74 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %73
  %75 = load i32, i32* %74, align 4, !tbaa !7
  %76 = lshr i32 %75, 2
  %77 = add nuw nsw i32 %76, %72
  %78 = add nuw nsw i64 %67, %62
  %79 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %78
  %80 = load i32, i32* %79, align 4, !tbaa !7
  %81 = lshr i32 %80, 2
  %82 = add nuw i32 %77, %81
  %83 = add nuw nsw i64 %68, %62
  %84 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 %83
  %85 = load i32, i32* %84, align 4, !tbaa !7
  %86 = lshr i32 %85, 2
  %87 = add nuw i32 %82, %86
  store i32 %87, i32* %74, align 4, !tbaa !7
  %88 = icmp ugt i64 %67, 1
  br i1 %88, label %66, label %63, !llvm.loop !13

89:                                               ; preds = %63
  %90 = add nuw nsw i32 %41, 1
  %91 = icmp eq i32 %90, 1000
  br i1 %91, label %42, label %40, !llvm.loop !16
}

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
