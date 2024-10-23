## Tasks:

- First task: [simple_graph_app](./simple_graph_app/README.md).
- Second task: [llvm_pass](./llvm_pass/README.md).


<br></br>


## Questions:

- [cmake](llvm_pass/CMakeLists.txt): Why dependency `runtime_stat_pass` of `ninja app_with_runtime_stat_pass` does not work?
- [cmake](./generate_app/CMakeLists.txt): Target `graph_with_ee` linker fails with `undefined reference to simInit(), simExit(), simFlush()...`.


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
