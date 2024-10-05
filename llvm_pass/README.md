## Notes:
I left phi-instructions in users position.





## Compile and run:

#### 1. Config cmake:
```bash
./setup.sh --cmake
cd build
```

#### 2. Graph app:

```bash
ninja simple_graph_app && ./bin/simple_graph_app
```

#### 3. Get LLVM IR:
```bash
ninja llvm_ir
```

[Dumped LLVM IR](./artefacts/app.ll)
