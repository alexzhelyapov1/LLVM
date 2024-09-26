## SETUP
### WSL (win 10) setup:

#### Windows:
- install XServer from https://sourceforge.net/projects/vcxsrv/files/latest/download
- run with clipboard, nativegl, no access control options

**Note**: However, after reinstalling WSL, there will be no need to install and start XServer.

#### WSL:
```bash
./setup.sh --wsl-setup
```

### Mac OS setup:

```bash
./setup.sh --mac-setup
```


## Compile and run:

#### 1. Config cmake:
```bash
./setup.sh --cmake
cd build
```

#### 2. Graph app:

```bash
ninja simple_graph_app && ./simple_graph_app
```

#### 3. Get LLVM IR:
```bash
ninja ninja llvm_ir
```

[Dumped LLVM IR](./artefacts/app.ll)
