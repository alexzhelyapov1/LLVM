# `app.c` LLVM IR generator.

## How to run:

### 1. Config cmake:
```bash
./setup.sh --cmake
cd build
```

### 2. Compile and run graph app with generated `app.c` by llvm pass:
```bash
ninja generate_app_pass
ninja graph_with_generated_app
./bin/graph_with_generated_app
```

### 3. Compile and run graph app with generated module `app` with execution engine and lazy function creator:
```bash
# There are troubles with cmake target (graph_with_ee). Please use this command instead:
cd build && clang++ $(llvm-config --cppflags --ldflags --libs) ../simple_graph_app/src/sim.c ../generate_app/src/constructor_ee.cpp -I../generate_app/include -I../simple_graph_app/include -lSDL2 && ./a.out
```

### 4. Other targets:
- `generate_app_ir`: generates IR of `empty.c` after `generate_app_pass`. You can find it in [generate_app_ir](./artefacts/generate_app_ir.ll).
- `empty_ir`: generates IR of `empty.c` without pass. You can find it in [empty_ir](./artefacts/empty_ir.ll).


### Note:
It was painful enough...
