### How to run

#### Install deps:

```bash
# Linux
sudo apt install libsdl2-dev

# Mac os
brew install SDL2
brew install SDL2_image
brew install SDL2_ttf
```

#### Compile and run
```bash
ninja simple_graph_app && ./simple_graph_app
# or
cd build && clang ../src/app.c ../src/start.c ../src/sim.c -o simple_graph_app -lSDL2 -I../include
```
