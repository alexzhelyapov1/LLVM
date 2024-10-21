; ModuleID = '/home/alex/mipt/LLVM/generate_app/src/empty.c'
source_filename = "/home/alex/mipt/LLVM/generate_app/src/empty.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

define dso_local void @updateMatrix(i32* %0) local_unnamed_addr {
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

define dso_local void @drawMatrix(i32* %0) local_unnamed_addr {
  br label %2

2:                                                ; preds = %7, %1
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  %4 = shl nsw i64 %3, 9
  %5 = trunc i64 %3 to i32
  br label %10

6:                                                ; preds = %7
  call void @simFlush()
  ret void

7:                                                ; preds = %10
  %8 = add nuw nsw i64 %3, 1
  %9 = icmp eq i64 %8, 256
  br i1 %9, label %6, label %2

10:                                               ; preds = %10, %2
  %11 = phi i64 [ 0, %2 ], [ %16, %10 ]
  %12 = add nuw nsw i64 %11, %4
  %13 = getelementptr inbounds i32, i32* %0, i64 %12
  %14 = load i32, i32* %13, align 4
  %15 = trunc i64 %11 to i32
  call void @simPutPixel(i32 %15, i32 %5, i32 %14)
  %16 = add nuw nsw i64 %11, 1
  %17 = icmp eq i64 %16, 512
  br i1 %17, label %7, label %10
}

declare void @simFlush()

declare void @simPutPixel(i32, i32, i32)

define dso_local void @initMatrix(i32* %0) local_unnamed_addr {
  br label %2

2:                                                ; preds = %7, %1
  %3 = phi i64 [ 0, %1 ], [ %8, %7 ]
  %4 = icmp ult i64 %3, 10
  %5 = shl nsw i64 %3, 9
  br label %10

6:                                                ; preds = %7
  ret void

7:                                                ; preds = %39
  %8 = add nuw nsw i64 %3, 1
  %9 = icmp eq i64 %8, 256
  br i1 %9, label %6, label %2

10:                                               ; preds = %39, %2
  %11 = phi i64 [ 0, %2 ], [ %40, %39 ]
  %12 = icmp ult i64 %11, 10
  %13 = select i1 %12, i1 true, i1 %4
  br i1 %13, label %14, label %17

14:                                               ; preds = %10
  %15 = add nuw nsw i64 %11, %5
  %16 = getelementptr inbounds i32, i32* %0, i64 %15
  store i32 -16711936, i32* %16, align 4
  br label %39

17:                                               ; preds = %10
  %18 = trunc i64 %11 to i32
  %19 = add i32 %18, -129
  %20 = icmp ult i32 %19, 9
  br i1 %20, label %21, label %24

21:                                               ; preds = %17
  %22 = add nuw nsw i64 %11, %5
  %23 = getelementptr inbounds i32, i32* %0, i64 %22
  store i32 -65536, i32* %23, align 4
  br label %39

24:                                               ; preds = %17
  %25 = trunc i64 %11 to i32
  %26 = add i32 %25, -257
  %27 = icmp ult i32 %26, 9
  br i1 %27, label %28, label %31

28:                                               ; preds = %24
  %29 = add nuw nsw i64 %11, %5
  %30 = getelementptr inbounds i32, i32* %0, i64 %29
  store i32 -16776961, i32* %30, align 4
  br label %39

31:                                               ; preds = %24
  %32 = trunc i64 %11 to i32
  %33 = add i32 %32, -385
  %34 = icmp ult i32 %33, 9
  %35 = add nuw nsw i64 %11, %5
  %36 = getelementptr inbounds i32, i32* %0, i64 %35
  br i1 %34, label %37, label %38

37:                                               ; preds = %31
  store i32 -1, i32* %36, align 4
  br label %39

38:                                               ; preds = %31
  store i32 -16777216, i32* %36, align 4
  br label %39

39:                                               ; preds = %38, %37, %28, %21, %14
  %40 = add nuw nsw i64 %11, 1
  %41 = icmp eq i64 %40, 512
  br i1 %41, label %7, label %10
}

define dso_local void @app() local_unnamed_addr {
  %1 = alloca [131072 x i32], align 16
  %2 = bitcast [131072 x i32]* %1 to i8*
  %3 = getelementptr inbounds [131072 x i32], [131072 x i32]* %1, i64 0, i64 0
  call void @initMatrix(i32* %3)
  br label %5

4:                                                ; preds = %5
  ret void

5:                                                ; preds = %5, %0
  %6 = phi i32 [ 0, %0 ], [ %7, %5 ]
  call void @drawMatrix(i32* %3)
  call void @updateMatrix(i32* %3)
  %7 = add nuw nsw i32 %6, 1
  %8 = icmp eq i32 %7, 1000
  br i1 %8, label %4, label %5
}

!llvm.module.flags = !{!0, !1, !2, !3, !4}
!llvm.ident = !{!5}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 1}
!4 = !{i32 7, !"frame-pointer", i32 2}
!5 = !{!"Ubuntu clang version 14.0.0-1ubuntu1.1"}
