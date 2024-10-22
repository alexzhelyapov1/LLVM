
#pragma once


#define SIM_X_SIZE 512
#define SIM_Y_SIZE 256


static void GenerateUpdateMatrix(Module &M) {
    llvm::LLVMContext &Ctx = M.getContext();
    llvm::IRBuilder<> Builder(Ctx);

    llvm::FunctionType *FT = llvm::FunctionType::get(Builder.getVoidTy(), {Builder.getInt32Ty()->getPointerTo()}, false);
    llvm::Function *UpdateMatrixFunc = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "updateMatrix", M);
    UpdateMatrixFunc->setDSOLocal(true);
    UpdateMatrixFunc->setUnnamedAddr(llvm::GlobalValue::UnnamedAddr::Local);

    llvm::BasicBlock *EntryBB = llvm::BasicBlock::Create(Ctx, "entry", UpdateMatrixFunc);
    llvm::BasicBlock *BB2 = llvm::BasicBlock::Create(Ctx, "2", UpdateMatrixFunc);
    llvm::BasicBlock *BB6 = llvm::BasicBlock::Create(Ctx, "6", UpdateMatrixFunc);
    llvm::BasicBlock *BB7 = llvm::BasicBlock::Create(Ctx, "7", UpdateMatrixFunc);
    llvm::BasicBlock *BB10 = llvm::BasicBlock::Create(Ctx, "10", UpdateMatrixFunc);

    Builder.SetInsertPoint(EntryBB);
    llvm::Value *N0 = UpdateMatrixFunc->getArg(0);
    Builder.CreateBr(BB2);

    Builder.SetInsertPoint(BB2);
    llvm::PHINode *N3 = Builder.CreatePHI(Builder.getInt64Ty(), 2, "phi");
    N3->addIncoming(Builder.getInt64(0), EntryBB);
    llvm::Value *N4 = Builder.CreateShl(N3, Builder.getInt64(9), "shl", false, true);
    llvm::Value *N5 = Builder.CreateAdd(N4, Builder.getInt64(512), "add", true, true);
    Builder.CreateBr(BB10);

    Builder.SetInsertPoint(BB6);
    Builder.CreateRetVoid();

    Builder.SetInsertPoint(BB7);
    llvm::Value *N8 = Builder.CreateAdd(N3, Builder.getInt64(1), "add", true, true);
    N3->addIncoming(N8, BB7);
    llvm::Value *N9 = Builder.CreateICmpEQ(N8, Builder.getInt64(255), "cmp");
    Builder.CreateCondBr(N9, BB6, BB2);

    Builder.SetInsertPoint(BB10);
    llvm::PHINode *N11 = Builder.CreatePHI(Builder.getInt64Ty(), 2, "phi11");
    N11->addIncoming(Builder.getInt64(511), BB2);
    llvm::Value *N12 = Builder.CreateAdd(N11, Builder.getInt64(-1), "add12", false, true);
    N11->addIncoming(N12, BB10);
    llvm::Value *N13 = Builder.CreateAdd(N12, N4, "add13", true, true);
    llvm::Value *N14 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N13, "gep14");
    llvm::LoadInst *N15 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N14, llvm::MaybeAlign(4), "load15");
    llvm::Value *N16 = Builder.CreateLShr(N15, Builder.getInt32(2), "lshr16");
    llvm::Value *N17 = Builder.CreateAdd(N11, N4, "add17", true, true);
    llvm::Value *N18 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N17, "gep18");
    llvm::LoadInst *N19 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N18, llvm::MaybeAlign(4), "load19");
    llvm::Value *N20 = Builder.CreateLShr(N19, Builder.getInt32(2), "lshr20");
    llvm::Value *N21 = Builder.CreateAdd(N20, N16, "add21", true, true);
    llvm::Value *N22 = Builder.CreateAdd(N11, N5, "add22", true, true);
    llvm::Value *N23 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N22, "gep23");
    llvm::LoadInst *N24 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N23, llvm::MaybeAlign(4), "load24");
    llvm::Value *N25 = Builder.CreateLShr(N24, Builder.getInt32(2), "lshr25");
    llvm::Value *N26 = Builder.CreateAdd(N21, N25, "add26", true, false);
    llvm::Value *N27 = Builder.CreateAdd(N12, N5, "add27", true, true);
    llvm::Value *N28 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N27, "gep28");
    llvm::LoadInst *N29 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N28, llvm::MaybeAlign(4), "load29");
    llvm::Value *N30 = Builder.CreateLShr(N29, Builder.getInt32(2), "lshr30");
    llvm::Value *N31 = Builder.CreateAdd(N26, N30, "add31", true, false);
    llvm::StoreInst *StoreInst = Builder.CreateAlignedStore(N31, N18, llvm::MaybeAlign(4));
    llvm::Value *N32 = Builder.CreateICmpUGT(N11, Builder.getInt64(1), "icmp32");
    Builder.CreateCondBr(N32, BB10, BB7);
}


static void GenerateDrawMatrix(Module &M) {
    llvm::LLVMContext &Ctx = M.getContext();
    llvm::IRBuilder<> Builder(Ctx);

    llvm::FunctionType *FT = llvm::FunctionType::get(Builder.getVoidTy(), {Builder.getInt32Ty()->getPointerTo()}, false);
    llvm::Function *DrawMatrixFunc = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "drawMatrix", M);
    DrawMatrixFunc->setDSOLocal(true);
    DrawMatrixFunc->setUnnamedAddr(llvm::GlobalValue::UnnamedAddr::Local);

    llvm::BasicBlock *EntryBB = llvm::BasicBlock::Create(Ctx, "entry", DrawMatrixFunc);
    llvm::BasicBlock *BB2 = llvm::BasicBlock::Create(Ctx, "2", DrawMatrixFunc);
    llvm::BasicBlock *BB6 = llvm::BasicBlock::Create(Ctx, "6", DrawMatrixFunc);
    llvm::BasicBlock *BB7 = llvm::BasicBlock::Create(Ctx, "7", DrawMatrixFunc);
    llvm::BasicBlock *BB10 = llvm::BasicBlock::Create(Ctx, "10", DrawMatrixFunc);


    Builder.SetInsertPoint(EntryBB);
    llvm::Value *N0 = DrawMatrixFunc->getArg(0);
    Builder.CreateBr(BB2);


    Builder.SetInsertPoint(BB2);
    llvm::PHINode *N3 = Builder.CreatePHI(Builder.getInt64Ty(), 2, "phi");
    N3->addIncoming(Builder.getInt64(0), EntryBB);
    llvm::Value *N4 = Builder.CreateShl(N3, Builder.getInt64(9), "shl", false, true);
    llvm::Value *N5 = Builder.CreateTrunc(N3, Builder.getInt32Ty(), "trunc");
    Builder.CreateBr(BB10);


    Builder.SetInsertPoint(BB6);
    llvm::FunctionType *SimFlushTy = llvm::FunctionType::get(Builder.getVoidTy(), {}, false);
    llvm::FunctionCallee SimFlushCallee = M.getOrInsertFunction("simFlush", SimFlushTy);
    Builder.CreateCall(SimFlushCallee);
    Builder.CreateRetVoid();


    Builder.SetInsertPoint(BB7);
    llvm::Value *N8 = Builder.CreateAdd(N3, Builder.getInt64(1), "add", true, true); // nuw, nsw
    llvm::Value *N9 = Builder.CreateICmpEQ(N8, Builder.getInt64(256), "cmp");
    Builder.CreateCondBr(N9, BB6, BB2);
    N3->addIncoming(N8, BB7);


    Builder.SetInsertPoint(BB10);
    llvm::PHINode *N11 = Builder.CreatePHI(Builder.getInt64Ty(), 2, "phi11");
    N11->addIncoming(Builder.getInt64(0), BB2);
    llvm::Value *N12 = Builder.CreateAdd(N11, N4, "add12", true, true);
    llvm::Value *N13 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N12, "gep");
    llvm::LoadInst *N14 = Builder.CreateAlignedLoad(Builder.getInt32Ty(), N13, llvm::MaybeAlign(4), "load");
    llvm::Value *N15 = Builder.CreateTrunc(N11, Builder.getInt32Ty(), "trunc15");
    llvm::FunctionType *SimPutPixelTy = llvm::FunctionType::get(Builder.getVoidTy(), {Builder.getInt32Ty(), Builder.getInt32Ty(), Builder.getInt32Ty()}, false);
    llvm::FunctionCallee SimPutPixelCallee = M.getOrInsertFunction("simPutPixel", SimPutPixelTy);
    Builder.CreateCall(SimPutPixelCallee, {N15, N5, N14});
    llvm::Value *N16 = Builder.CreateAdd(N11, Builder.getInt64(1), "add16", true, true);
    llvm::Value *N17 = Builder.CreateICmpEQ(N16, Builder.getInt64(512), "icmp");
    Builder.CreateCondBr(N17, BB7, BB10);
    N11->addIncoming(N16, BB10);
}


static void GenerateInitMatrix(llvm::Module &M) {
    llvm::LLVMContext &Ctx = M.getContext();
    llvm::IRBuilder<> Builder(Ctx);

    llvm::FunctionType *FT = llvm::FunctionType::get(Builder.getVoidTy(), {Builder.getInt32Ty()->getPointerTo()}, false);
    llvm::Function *InitMatrixFunc = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "initMatrix", M);
    InitMatrixFunc->setDSOLocal(true);
    InitMatrixFunc->setUnnamedAddr(llvm::GlobalValue::UnnamedAddr::Local);

    llvm::BasicBlock *EntryBB = llvm::BasicBlock::Create(Ctx, "entry", InitMatrixFunc);
    llvm::BasicBlock *BB2 = llvm::BasicBlock::Create(Ctx, "2", InitMatrixFunc);
    llvm::BasicBlock *BB6 = llvm::BasicBlock::Create(Ctx, "6", InitMatrixFunc);
    llvm::BasicBlock *BB7 = llvm::BasicBlock::Create(Ctx, "7", InitMatrixFunc);
    llvm::BasicBlock *BB10 = llvm::BasicBlock::Create(Ctx, "10", InitMatrixFunc);
    llvm::BasicBlock *BB14 = llvm::BasicBlock::Create(Ctx, "14", InitMatrixFunc);
    llvm::BasicBlock *BB17 = llvm::BasicBlock::Create(Ctx, "17", InitMatrixFunc);
    llvm::BasicBlock *BB21 = llvm::BasicBlock::Create(Ctx, "21", InitMatrixFunc);
    llvm::BasicBlock *BB24 = llvm::BasicBlock::Create(Ctx, "24", InitMatrixFunc);
    llvm::BasicBlock *BB28 = llvm::BasicBlock::Create(Ctx, "28", InitMatrixFunc);
    llvm::BasicBlock *BB31 = llvm::BasicBlock::Create(Ctx, "31", InitMatrixFunc);
    llvm::BasicBlock *BB37 = llvm::BasicBlock::Create(Ctx, "37", InitMatrixFunc);
    llvm::BasicBlock *BB38 = llvm::BasicBlock::Create(Ctx, "38", InitMatrixFunc);
    llvm::BasicBlock *BB39 = llvm::BasicBlock::Create(Ctx, "39", InitMatrixFunc);


    Builder.SetInsertPoint(EntryBB);
    llvm::Value *N0 = InitMatrixFunc->getArg(0);
    Builder.CreateBr(BB2);


    Builder.SetInsertPoint(BB2);
    llvm::PHINode *N3 = Builder.CreatePHI(Builder.getInt64Ty(), 2, "phi");
    N3->addIncoming(Builder.getInt64(0), EntryBB);
    llvm::Value *N4 = Builder.CreateICmpULT(N3, Builder.getInt64(10), "icmp");
    llvm::Value *N5 = Builder.CreateShl(N3, Builder.getInt64(9), "shl", false, true);
    Builder.CreateBr(BB10);


    Builder.SetInsertPoint(BB6);
    Builder.CreateRetVoid();


    Builder.SetInsertPoint(BB7);
    llvm::Value *N8 = Builder.CreateAdd(N3, Builder.getInt64(1), "add", true, true);
    llvm::Value *N9 = Builder.CreateICmpEQ(N8, Builder.getInt64(256), "cmp");
    Builder.CreateCondBr(N9, BB6, BB2);
    N3->addIncoming(N8, BB7);



    Builder.SetInsertPoint(BB10);
    llvm::PHINode *N11 = Builder.CreatePHI(Builder.getInt64Ty(), 2, "phi11");
    N11->addIncoming(Builder.getInt64(0), BB2);
    llvm::Value *N12 = Builder.CreateICmpULT(N11, Builder.getInt64(10), "icmp12");
    llvm::Value *N13 = Builder.CreateSelect(N12, Builder.getInt1(true), N4, "select");
    Builder.CreateCondBr(N13, BB14, BB17);



    Builder.SetInsertPoint(BB14);
    llvm::Value *N15 = Builder.CreateAdd(N11, N5, "add15", true, true);
    llvm::Value *N16 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N15, "getelementptr");
    Builder.CreateAlignedStore(Builder.getInt32(-16711936), N16, llvm::MaybeAlign(4));
    Builder.CreateBr(BB39);


    Builder.SetInsertPoint(BB17);
    llvm::Value *N18 = Builder.CreateTrunc(N11, Builder.getInt32Ty(), "trunc");
    llvm::Value *N19 = Builder.CreateAdd(N18, Builder.getInt32(-129), "add19");
    llvm::Value *N20 = Builder.CreateICmpULT(N19, Builder.getInt32(9), "icmp20");
    Builder.CreateCondBr(N20, BB21, BB24);



    Builder.SetInsertPoint(BB21);
    llvm::Value *N22 = Builder.CreateAdd(N11, N5, "add22", true, true);
    llvm::Value *N23 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N22, "getelementptr23");
    Builder.CreateAlignedStore(Builder.getInt32(-65536), N23, llvm::MaybeAlign(4));
    Builder.CreateBr(BB39);



    Builder.SetInsertPoint(BB24);
    llvm::Value *N25 = Builder.CreateTrunc(N11, Builder.getInt32Ty(), "trunc25");
    llvm::Value *N26 = Builder.CreateAdd(N25, Builder.getInt32(-257), "add26");
    llvm::Value *N27 = Builder.CreateICmpULT(N26, Builder.getInt32(9), "icmp27");
    Builder.CreateCondBr(N27, BB28, BB31);


    Builder.SetInsertPoint(BB28);
    llvm::Value *N29 = Builder.CreateAdd(N11, N5, "add29", true, true);
    llvm::Value *N30 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N29, "getelementptr30");
    Builder.CreateAlignedStore(Builder.getInt32(-16776961), N30, llvm::MaybeAlign(4));
    Builder.CreateBr(BB39);


    Builder.SetInsertPoint(BB31);
    llvm::Value *N32 = Builder.CreateTrunc(N11, Builder.getInt32Ty(), "trunc32");
    llvm::Value *N33 = Builder.CreateAdd(N32, Builder.getInt32(-385), "add33");
    llvm::Value *N34 = Builder.CreateICmpULT(N33, Builder.getInt32(9), "icmp34");
    llvm::Value *N35 = Builder.CreateAdd(N11, N5, "add35", true, true);
    llvm::Value *N36 = Builder.CreateInBoundsGEP(Builder.getInt32Ty(), N0, N35, "getelementptr36");
    Builder.CreateCondBr(N34, BB37, BB38);


    Builder.SetInsertPoint(BB37);
    Builder.CreateAlignedStore(Builder.getInt32(-1), N36, llvm::MaybeAlign(4));
    Builder.CreateBr(BB39);


    Builder.SetInsertPoint(BB38);
    Builder.CreateAlignedStore(Builder.getInt32(-16777216), N36, llvm::MaybeAlign(4));
    Builder.CreateBr(BB39);


    Builder.SetInsertPoint(BB39);
    llvm::Value *N40 = Builder.CreateAdd(N11, Builder.getInt64(1), "add40", true, true);
    llvm::Value *N41 = Builder.CreateICmpEQ(N40, Builder.getInt64(512), "cmp41");
    Builder.CreateCondBr(N41, BB7, BB10);
    N11->addIncoming(N40, BB39);
}


static void GenerateApp(llvm::Module &M) {
    llvm::LLVMContext &Ctx = M.getContext();
    llvm::IRBuilder<> Builder(Ctx);

    llvm::FunctionType *FT = llvm::FunctionType::get(Builder.getVoidTy(), {}, false);
    llvm::Function *AppFunc = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "app", M);
    AppFunc->setDSOLocal(true);
    AppFunc->setUnnamedAddr(llvm::GlobalValue::UnnamedAddr::Local);

    llvm::BasicBlock *EntryBB = llvm::BasicBlock::Create(Ctx, "entry", AppFunc);
    llvm::BasicBlock *BB4 = llvm::BasicBlock::Create(Ctx, "4", AppFunc);
    llvm::BasicBlock *BB5 = llvm::BasicBlock::Create(Ctx, "5", AppFunc);

    Builder.SetInsertPoint(EntryBB);
    llvm::AllocaInst *N1 = Builder.CreateAlloca(llvm::ArrayType::get(Builder.getInt32Ty(), 131072), nullptr, "alloca");
    N1->setAlignment(llvm::Align(16));
    llvm::Value *N2 = Builder.CreateBitCast(N1, Builder.getInt8Ty()->getPointerTo(), "bitcast");
    llvm::Value *N3 = Builder.CreateInBoundsGEP(llvm::ArrayType::get(Builder.getInt32Ty(), 131072), N1, {Builder.getInt64(0), Builder.getInt64(0)}, "getelementptr");


    llvm::FunctionType *InitMatrixFT = llvm::FunctionType::get(Builder.getVoidTy(), {Builder.getInt32Ty()->getPointerTo()}, false);
    llvm::FunctionCallee InitMatrixFunc = M.getOrInsertFunction("initMatrix", InitMatrixFT);
    Builder.CreateCall(InitMatrixFunc, {N3});
    Builder.CreateBr(BB5);


    Builder.SetInsertPoint(BB4);
    Builder.CreateRetVoid();


    Builder.SetInsertPoint(BB5);
    llvm::PHINode *N6 = Builder.CreatePHI(Builder.getInt32Ty(), 2, "phi");
    N6->addIncoming(Builder.getInt32(0), EntryBB);

    llvm::FunctionType *DrawMatrixFT = llvm::FunctionType::get(Builder.getVoidTy(), {Builder.getInt32Ty()->getPointerTo()}, false);
    llvm::FunctionCallee DrawMatrixFunc = M.getOrInsertFunction("drawMatrix", DrawMatrixFT);
    Builder.CreateCall(DrawMatrixFunc, {N3});

    llvm::FunctionType *UpdateMatrixFT = llvm::FunctionType::get(Builder.getVoidTy(), {Builder.getInt32Ty()->getPointerTo()}, false);
    llvm::FunctionCallee UpdateMatrixFunc = M.getOrInsertFunction("updateMatrix", UpdateMatrixFT);
    Builder.CreateCall(UpdateMatrixFunc, {N3});


    llvm::Value *N7 = Builder.CreateAdd(N6, Builder.getInt32(1), "add", true, true);
    llvm::Value *N8 = Builder.CreateICmpEQ(N7, Builder.getInt32(1000), "cmp");
    Builder.CreateCondBr(N8, BB4, BB5);
    N6->addIncoming(N7, BB5);
}