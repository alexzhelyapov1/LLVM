; ModuleID = '/home/alex/mipt/LLVM/simple_graph_app/src/app.c'
source_filename = "/home/alex/mipt/LLVM/simple_graph_app/src/app.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

; Function Attrs: nofree norecurse nosync nounwind memory(argmem: write) uwtable
define dso_local void @initMatrix(ptr nocapture noundef writeonly %0) local_unnamed_addr #0 {
  br label %2

2:                                                ; preds = %1, %9
  %3 = phi i64 [ 0, %1 ], [ %10, %9 ]
  %4 = icmp ult i64 %3, 10
  %5 = trunc i64 %3 to i32
  %6 = add i32 %5, -129
  %7 = icmp ult i32 %6, 9
  br label %12

8:                                                ; preds = %9
  ret void

9:                                                ; preds = %38
  %10 = add nuw nsw i64 %3, 1
  %11 = icmp eq i64 %10, 256
  br i1 %11, label %8, label %2, !llvm.loop !5

12:                                               ; preds = %2, %38
  %13 = phi i64 [ 0, %2 ], [ %39, %38 ]
  %14 = icmp ult i64 %13, 10
  %15 = or i1 %4, %14
  br i1 %15, label %16, label %18

16:                                               ; preds = %12
  %17 = getelementptr inbounds [256 x i32], ptr %0, i64 %13, i64 %3
  store i32 -16711936, ptr %17, align 4, !tbaa !7
  br label %38

18:                                               ; preds = %12
  %19 = trunc i64 %13 to i32
  %20 = add i32 %19, -129
  %21 = icmp ult i32 %20, 9
  %22 = or i1 %21, %7
  br i1 %22, label %23, label %25

23:                                               ; preds = %18
  %24 = getelementptr inbounds [256 x i32], ptr %0, i64 %13, i64 %3
  store i32 -65536, ptr %24, align 4, !tbaa !7
  br label %38

25:                                               ; preds = %18
  %26 = trunc i64 %13 to i32
  %27 = add i32 %26, -257
  %28 = icmp ult i32 %27, 9
  br i1 %28, label %29, label %31

29:                                               ; preds = %25
  %30 = getelementptr inbounds [256 x i32], ptr %0, i64 %13, i64 %3
  store i32 -16776961, ptr %30, align 4, !tbaa !7
  br label %38

31:                                               ; preds = %25
  %32 = trunc i64 %13 to i32
  %33 = add i32 %32, -385
  %34 = icmp ult i32 %33, 9
  %35 = getelementptr inbounds [256 x i32], ptr %0, i64 %13, i64 %3
  br i1 %34, label %36, label %37

36:                                               ; preds = %31
  store i32 -1, ptr %35, align 4, !tbaa !7
  br label %38

37:                                               ; preds = %31
  store i32 -16777216, ptr %35, align 4, !tbaa !7
  br label %38

38:                                               ; preds = %16, %29, %37, %36, %23
  %39 = add nuw nsw i64 %13, 1
  %40 = icmp eq i64 %39, 512
  br i1 %40, label %9, label %12, !llvm.loop !11
}

; Function Attrs: mustprogress nocallback nofree nosync nounwind willreturn memory(argmem: readwrite)
declare void @llvm.lifetime.start.p0(i64 immarg, ptr nocapture) #1

; Function Attrs: mustprogress nocallback nofree nosync nounwind willreturn memory(argmem: readwrite)
declare void @llvm.lifetime.end.p0(i64 immarg, ptr nocapture) #1

; Function Attrs: nofree norecurse nosync nounwind memory(argmem: readwrite) uwtable
define dso_local void @updateMatrix(ptr nocapture noundef %0) local_unnamed_addr #2 {
  br label %2

2:                                                ; preds = %1, %6
  %3 = phi i64 [ 0, %1 ], [ %4, %6 ]
  %4 = add nuw nsw i64 %3, 1
  br label %8

5:                                                ; preds = %6
  ret void

6:                                                ; preds = %8
  %7 = icmp eq i64 %4, 255
  br i1 %7, label %5, label %2, !llvm.loop !12

8:                                                ; preds = %2, %8
  %9 = phi i64 [ 511, %2 ], [ %26, %8 ]
  %10 = getelementptr [256 x i32], ptr %0, i64 %9
  %11 = getelementptr [256 x i32], ptr %10, i64 -1, i64 %3
  %12 = load i32, ptr %11, align 4, !tbaa !7
  %13 = lshr i32 %12, 2
  %14 = getelementptr inbounds [256 x i32], ptr %0, i64 %9, i64 %3
  %15 = load i32, ptr %14, align 4, !tbaa !7
  %16 = lshr i32 %15, 2
  %17 = add nuw nsw i32 %16, %13
  %18 = getelementptr inbounds [256 x i32], ptr %0, i64 %9, i64 %4
  %19 = load i32, ptr %18, align 4, !tbaa !7
  %20 = lshr i32 %19, 2
  %21 = add nuw i32 %17, %20
  %22 = getelementptr [256 x i32], ptr %10, i64 -1, i64 %4
  %23 = load i32, ptr %22, align 4, !tbaa !7
  %24 = lshr i32 %23, 2
  %25 = add nuw i32 %21, %24
  store i32 %25, ptr %14, align 4, !tbaa !7
  %26 = add nsw i64 %9, -1
  %27 = icmp ugt i64 %9, 1
  br i1 %27, label %8, label %6, !llvm.loop !13
}

; Function Attrs: nounwind uwtable
define dso_local void @drawMatrix(ptr nocapture noundef readonly %0) local_unnamed_addr #3 {
  br label %2

2:                                                ; preds = %1, %6
  %3 = phi i64 [ 0, %1 ], [ %7, %6 ]
  %4 = trunc i64 %3 to i32
  br label %9

5:                                                ; preds = %6
  tail call void (...) @simFlush() #5
  ret void

6:                                                ; preds = %9
  %7 = add nuw nsw i64 %3, 1
  %8 = icmp eq i64 %7, 256
  br i1 %8, label %5, label %2, !llvm.loop !14

9:                                                ; preds = %2, %9
  %10 = phi i64 [ 0, %2 ], [ %14, %9 ]
  %11 = getelementptr inbounds [256 x i32], ptr %0, i64 %10, i64 %3
  %12 = load i32, ptr %11, align 4, !tbaa !7
  %13 = trunc i64 %10 to i32
  tail call void @simPutPixel(i32 noundef %13, i32 noundef %4, i32 noundef %12) #5
  %14 = add nuw nsw i64 %10, 1
  %15 = icmp eq i64 %14, 512
  br i1 %15, label %6, label %9, !llvm.loop !15
}

declare void @simPutPixel(i32 noundef, i32 noundef, i32 noundef) local_unnamed_addr #4

declare void @simFlush(...) local_unnamed_addr #4

; Function Attrs: nounwind uwtable
define dso_local void @app() local_unnamed_addr #3 {
  %1 = alloca [512 x [256 x i32]], align 16
  call void @llvm.lifetime.start.p0(i64 524288, ptr nonnull %1) #5
  br label %2

2:                                                ; preds = %8, %0
  %3 = phi i64 [ 0, %0 ], [ %9, %8 ]
  %4 = icmp ult i64 %3, 10
  %5 = trunc i64 %3 to i32
  %6 = add i32 %5, -129
  %7 = icmp ult i32 %6, 9
  br label %11

8:                                                ; preds = %35
  %9 = add nuw nsw i64 %3, 1
  %10 = icmp eq i64 %9, 256
  br i1 %10, label %38, label %2, !llvm.loop !5

11:                                               ; preds = %35, %2
  %12 = phi i64 [ 0, %2 ], [ %36, %35 ]
  %13 = icmp ult i64 %12, 10
  %14 = or i1 %4, %13
  br i1 %14, label %15, label %17

15:                                               ; preds = %11
  %16 = getelementptr inbounds [256 x i32], ptr %1, i64 %12, i64 %3
  store i32 -16711936, ptr %16, align 4, !tbaa !7
  br label %35

17:                                               ; preds = %11
  %18 = trunc i64 %12 to i32
  %19 = add i32 %18, -129
  %20 = icmp ult i32 %19, 9
  %21 = or i1 %7, %20
  br i1 %21, label %22, label %24

22:                                               ; preds = %17
  %23 = getelementptr inbounds [256 x i32], ptr %1, i64 %12, i64 %3
  store i32 -65536, ptr %23, align 4, !tbaa !7
  br label %35

24:                                               ; preds = %17
  %25 = add i32 %18, -257
  %26 = icmp ult i32 %25, 9
  br i1 %26, label %27, label %29

27:                                               ; preds = %24
  %28 = getelementptr inbounds [256 x i32], ptr %1, i64 %12, i64 %3
  store i32 -16776961, ptr %28, align 4, !tbaa !7
  br label %35

29:                                               ; preds = %24
  %30 = add i32 %18, -385
  %31 = icmp ult i32 %30, 9
  %32 = getelementptr inbounds [256 x i32], ptr %1, i64 %12, i64 %3
  br i1 %31, label %33, label %34

33:                                               ; preds = %29
  store i32 -1, ptr %32, align 4, !tbaa !7
  br label %35

34:                                               ; preds = %29
  store i32 -16777216, ptr %32, align 4, !tbaa !7
  br label %35

35:                                               ; preds = %34, %33, %27, %22, %15
  %36 = add nuw nsw i64 %12, 1
  %37 = icmp eq i64 %36, 512
  br i1 %37, label %8, label %11, !llvm.loop !11

38:                                               ; preds = %8, %80
  %39 = phi i32 [ %81, %80 ], [ 0, %8 ]
  br label %41

40:                                               ; preds = %80
  call void @llvm.lifetime.end.p0(i64 524288, ptr nonnull %1) #5
  ret void

41:                                               ; preds = %38, %44
  %42 = phi i64 [ %45, %44 ], [ 0, %38 ]
  %43 = trunc i64 %42 to i32
  br label %47

44:                                               ; preds = %47
  %45 = add nuw nsw i64 %42, 1
  %46 = icmp eq i64 %45, 256
  br i1 %46, label %54, label %41, !llvm.loop !14

47:                                               ; preds = %47, %41
  %48 = phi i64 [ 0, %41 ], [ %52, %47 ]
  %49 = getelementptr inbounds [256 x i32], ptr %1, i64 %48, i64 %42
  %50 = load i32, ptr %49, align 4, !tbaa !7
  %51 = trunc i64 %48 to i32
  tail call void @simPutPixel(i32 noundef %51, i32 noundef %43, i32 noundef %50) #5
  %52 = add nuw nsw i64 %48, 1
  %53 = icmp eq i64 %52, 512
  br i1 %53, label %44, label %47, !llvm.loop !15

54:                                               ; preds = %44
  tail call void (...) @simFlush() #5
  br label %55

55:                                               ; preds = %58, %54
  %56 = phi i64 [ 0, %54 ], [ %57, %58 ]
  %57 = add nuw nsw i64 %56, 1
  br label %60

58:                                               ; preds = %60
  %59 = icmp eq i64 %57, 255
  br i1 %59, label %80, label %55, !llvm.loop !12

60:                                               ; preds = %60, %55
  %61 = phi i64 [ 511, %55 ], [ %78, %60 ]
  %62 = getelementptr [256 x i32], ptr %1, i64 %61
  %63 = getelementptr [256 x i32], ptr %62, i64 -1, i64 %56
  %64 = load i32, ptr %63, align 4, !tbaa !7
  %65 = lshr i32 %64, 2
  %66 = getelementptr inbounds [256 x i32], ptr %1, i64 %61, i64 %56
  %67 = load i32, ptr %66, align 4, !tbaa !7
  %68 = lshr i32 %67, 2
  %69 = add nuw nsw i32 %68, %65
  %70 = getelementptr inbounds [256 x i32], ptr %1, i64 %61, i64 %57
  %71 = load i32, ptr %70, align 4, !tbaa !7
  %72 = lshr i32 %71, 2
  %73 = add nuw i32 %69, %72
  %74 = getelementptr [256 x i32], ptr %62, i64 -1, i64 %57
  %75 = load i32, ptr %74, align 4, !tbaa !7
  %76 = lshr i32 %75, 2
  %77 = add nuw i32 %73, %76
  store i32 %77, ptr %66, align 4, !tbaa !7
  %78 = add nsw i64 %61, -1
  %79 = icmp ugt i64 %61, 1
  br i1 %79, label %60, label %58, !llvm.loop !13

80:                                               ; preds = %58
  %81 = add nuw nsw i32 %39, 1
  %82 = icmp eq i32 %81, 1000
  br i1 %82, label %40, label %38, !llvm.loop !16
}

attributes #0 = { nofree norecurse nosync nounwind memory(argmem: write) uwtable "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { mustprogress nocallback nofree nosync nounwind willreturn memory(argmem: readwrite) }
attributes #2 = { nofree norecurse nosync nounwind memory(argmem: readwrite) uwtable "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nounwind uwtable "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { nounwind }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 8, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 2}
!4 = !{!"Ubuntu clang version 18.1.3 (1ubuntu1)"}
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
