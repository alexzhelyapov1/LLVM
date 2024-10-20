; ModuleID = '/home/alex/mipt/LLVM/app_llvm_constructor/src/empty.c'
source_filename = "/home/alex/mipt/LLVM/app_llvm_constructor/src/empty.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @UpdateMatrixOld(i32* noundef %0) #0 {
  %2 = alloca i32*, align 8
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32* %0, i32** %2, align 8
  store i32 0, i32* %3, align 4
  br label %5

5:                                                ; preds = %67, %1
  %6 = load i32, i32* %3, align 4
  %7 = icmp slt i32 %6, 255
  br i1 %7, label %8, label %70

8:                                                ; preds = %5
  store i32 511, i32* %4, align 4
  br label %9

9:                                                ; preds = %63, %8
  %10 = load i32, i32* %4, align 4
  %11 = icmp sgt i32 %10, 0
  br i1 %11, label %12, label %66

12:                                               ; preds = %9
  %13 = load i32*, i32** %2, align 8
  %14 = load i32, i32* %4, align 4
  %15 = sub nsw i32 %14, 1
  %16 = load i32, i32* %3, align 4
  %17 = mul nsw i32 %16, 512
  %18 = add nsw i32 %15, %17
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %13, i64 %19
  %21 = load i32, i32* %20, align 4
  %22 = udiv i32 %21, 4
  %23 = load i32*, i32** %2, align 8
  %24 = load i32, i32* %4, align 4
  %25 = load i32, i32* %3, align 4
  %26 = mul nsw i32 %25, 512
  %27 = add nsw i32 %24, %26
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %23, i64 %28
  %30 = load i32, i32* %29, align 4
  %31 = udiv i32 %30, 4
  %32 = add i32 %22, %31
  %33 = load i32*, i32** %2, align 8
  %34 = load i32, i32* %4, align 4
  %35 = load i32, i32* %3, align 4
  %36 = add nsw i32 %35, 1
  %37 = mul nsw i32 %36, 512
  %38 = add nsw i32 %34, %37
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %33, i64 %39
  %41 = load i32, i32* %40, align 4
  %42 = udiv i32 %41, 4
  %43 = add i32 %32, %42
  %44 = load i32*, i32** %2, align 8
  %45 = load i32, i32* %4, align 4
  %46 = sub nsw i32 %45, 1
  %47 = load i32, i32* %3, align 4
  %48 = add nsw i32 %47, 1
  %49 = mul nsw i32 %48, 512
  %50 = add nsw i32 %46, %49
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %44, i64 %51
  %53 = load i32, i32* %52, align 4
  %54 = udiv i32 %53, 4
  %55 = add i32 %43, %54
  %56 = load i32*, i32** %2, align 8
  %57 = load i32, i32* %4, align 4
  %58 = load i32, i32* %3, align 4
  %59 = mul nsw i32 %58, 512
  %60 = add nsw i32 %57, %59
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %56, i64 %61
  store i32 %55, i32* %62, align 4
  br label %63

63:                                               ; preds = %12
  %64 = load i32, i32* %4, align 4
  %65 = add nsw i32 %64, -1
  store i32 %65, i32* %4, align 4
  br label %9, !llvm.loop !6

66:                                               ; preds = %9
  br label %67

67:                                               ; preds = %66
  %68 = load i32, i32* %3, align 4
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %3, align 4
  br label %5, !llvm.loop !8

70:                                               ; preds = %5
  ret void
}

define void @UpdateMatrix([131072 x i32]* %0) {
  br label %2

2:                                                ; preds = %40, %1
  %3 = phi i32 [ 0, %1 ], [ %41, %39 ]
  %4 = icmp slt i32 %3, 255
  br i1 %4, label %5, label %40

5:                                                ; preds = %2
  br label %6

6:                                                ; preds = %9, %5
  %7 = phi i32 [ 511, %5 ], [ %38, %9 ]
  %8 = icmp sgt i32 %7, 0
  br i1 %8, label %9, label %39

9:                                                ; preds = %6
  %10 = mul i32 %3, 512
  %11 = add i32 %7, %10
  %12 = getelementptr [131072 x i32], [131072 x i32]* %0, i32 0, i32 %11
  %13 = sub i32 %7, 1
  %14 = mul i32 %3, 512
  %15 = add i32 %13, %14
  %16 = getelementptr [131072 x i32], [131072 x i32]* %0, i32 0, i32 %15
  %17 = load i32, i32* %16, align 4
  %18 = getelementptr [131072 x i32], [131072 x i32]* %0, i32 0, i32 %11
  %19 = load i32, i32* %18, align 4
  %20 = add i32 %3, 1
  %21 = mul i32 %20, 512
  %22 = add i32 %7, %21
  %23 = getelementptr [131072 x i32], [131072 x i32]* %0, i32 0, i32 %22
  %24 = load i32, i32* %23, align 4
  %25 = sub i32 %7, 1
  %26 = add i32 %3, 1
  %27 = mul i32 %26, 512
  %28 = add i32 %25, %27
  %29 = getelementptr [131072 x i32], [131072 x i32]* %0, i32 0, i32 %28
  %30 = load i32, i32* %29, align 4
  %31 = sdiv i32 %17, 4
  %32 = sdiv i32 %19, 4
  %33 = add i32 %31, %32
  %34 = sdiv i32 %24, 4
  %35 = add i32 %33, %34
  %36 = sdiv i32 %30, 4
  %37 = add i32 %35, %36
  store i32 %37, i32* %12, align 4
  %38 = sub i32 %7, 1
  br label %6

39:                                               ; preds = %6
  br label %40

40:                                               ; preds = %39, %2
  %41 = add i32 %3, 1
  br label %2
  ret void
}

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2, !3, !4}
!llvm.ident = !{!5}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 1}
!4 = !{i32 7, !"frame-pointer", i32 2}
!5 = !{!"Ubuntu clang version 14.0.0-1ubuntu1.1"}
!6 = distinct !{!6, !7}
!7 = !{!"llvm.loop.mustprogress"}
!8 = distinct !{!8, !7}
