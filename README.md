## Tasks:

- First task: [simple_graph_app](./simple_graph_app/README.md).
- Second task: [llvm_pass](./llvm_pass/README.md).


<br></br>


## Questions:

- [cmake](llvm_pass/CMakeLists.txt): Why dependency `runtime_stat_pass` of `ninja app_with_runtime_stat_pass` does not work?
- LLVM general: Why does it print the module-pass twice (`ninja pass_example_run`)?
- LLVM general: Why did `llvm.lifetime.start.p0i8 (arg_size: 2)` appear with -O2 option?
- Why app-function has a huge size, but if compile only app-function, it'll be small? See `generate_app/empty.c`.


<br></br>


## Setup
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
