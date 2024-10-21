## Compile and run:

#### 1. Config cmake:
```bash
./setup.sh --cmake
cd build
```

#### 2. Compile and run graph app with generated app.c
```bash
ninja generate_app_pass
ninja generate_app
ninja graph_with_generated_app
./bin/graph_with_generated_app
```

#### 3. Other commands
- `ninja generate_app_ir`: generates IR of `empty.c` after `generate_app_pass`. You can find it in [generate_app_ir](./artefacts/generate_app_ir.ll).
- `ninja empty_ir`: generates IR of `empty.c` without pass. You can find it in [empty_ir](./artefacts/empty_ir.ll).


### Note:
It was painful enough...
