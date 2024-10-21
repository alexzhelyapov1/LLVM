; ModuleID = '/home/alex/mipt/LLVM/generate_app/src/empty.c'
source_filename = "/home/alex/mipt/LLVM/generate_app/src/empty.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

; Function Attrs: nounwind uwtable
define dso_local void @app() local_unnamed_addr #0 {
  %1 = alloca [131072 x i32], align 16
  %2 = bitcast [131072 x i32]* %1 to i8*
  call void @llvm.lifetime.start.p0i8(i64 524288, i8* nonnull %2) #3
  %3 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 0
  call void @initMatrix(i32* noundef nonnull %3) #3
  br label %5

4:                                                ; preds = %5
  call void @llvm.lifetime.end.p0i8(i64 524288, i8* nonnull %2) #3
  ret void

5:                                                ; preds = %0, %5
  %6 = phi i32 [ 0, %0 ], [ %7, %5 ]
  call void @drawMatrix(i32* noundef nonnull %3) #3
  call void @updateMatrix(i32* noundef nonnull %3) #3
  %7 = add nuw nsw i32 %6, 1
  %8 = icmp eq i32 %7, 1000
  br i1 %8, label %4, label %5, !llvm.loop !5
}

; Function Attrs: argmemonly mustprogress nofree nosync nounwind willreturn
declare void @llvm.lifetime.start.p0i8(i64 immarg, i8* nocapture) #1

declare void @initMatrix(i32* noundef) local_unnamed_addr #2

declare void @drawMatrix(i32* noundef) local_unnamed_addr #2

declare void @updateMatrix(i32* noundef) local_unnamed_addr #2

; Function Attrs: argmemonly mustprogress nofree nosync nounwind willreturn
declare void @llvm.lifetime.end.p0i8(i64 immarg, i8* nocapture) #1

attributes #0 = { nounwind uwtable "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { argmemonly mustprogress nofree nosync nounwind willreturn }
attributes #2 = { "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nounwind }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 1}
!4 = !{!"Ubuntu clang version 14.0.0-1ubuntu1.1"}
!5 = distinct !{!5, !6}
!6 = !{!"llvm.loop.mustprogress"}
