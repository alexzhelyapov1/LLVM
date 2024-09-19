## SETUP
### WSL (win 10) setup:

#### Windows:
- install XServer from https://sourceforge.net/projects/vcxsrv/files/latest/download
- run with clipboard, nativegl, no access control options

#### WSL:
```bash
sudo apt update
sudo apt upgrade -y
sudo apt install llvm clang cmake ninja-build libsdl2-dev -y
sudo apt install x11-apps

export DISPLAY=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2}'):0.0
```

### Mac OS setup:

```bash
brew install SDL2
brew install SDL2_image
brew install SDL2_ttf
```


## Compile and run

#### Cmake + ninja:
```bash
cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../
ninja simple_graph_app && ./simple_graph_app
```

#### Console:

```bash
clang ../src/app.c ../src/start.c ../src/sim.c -o simple_graph_app -lSDL2 -I../include
```
