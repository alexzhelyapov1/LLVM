# Tasks:

- First task: [simple_graph_app](./simple_graph_app/).


<br></br>


# Questions:

- [cmake](llvm_pass/CMakeLists.txt): Why dependency `pass_example_compile` of `ninja pass_example_run_old` does not work?
- [LLVM general]: Why does it print the module-pass twice (pass_example_run)?
- [LLVM general]: Why did `llvm.lifetime.start.p0i8 (arg_size: 2)` appear with -O2 option?


<br></br>


# Setup
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
