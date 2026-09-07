# 2D Tile Engine

An experimental C++20 engine built with SDL2 for exploring tile-based worlds, sprite animation, keyboard input, and camera movement.

## Implemented features

- Tile-world generation with larger tiles divided into smaller cells.
- Texture loading and sprite-sheet cropping.
- A keyboard-controlled player with movement and animation states.
- Camera tracking and tile rendering.
- SDL event handling and a tick-rate text overlay.

## Build and run

Requirements:

- A C++20 compiler compatible with the project's GCC/Clang-style build flags.
- CMake 3.22.1 or newer.
- SDL2, SDL2_ttf, and SDL2_image development libraries.

```bash
git clone https://github.com/oabdulr/2DEngine.git
cd 2DEngine
cmake -S . -B build
cmake --build build
cd build
./2DEngine
```

Dependencies must already be available to the compiler and linker. The current CMake configuration does not install them automatically and may require platform-specific adjustments.

Run from `build/`: the application loads fonts and textures through paths relative to the working directory, including `../arial.ttf` and `../textures`.

## Controls

- **W / Up arrow:** move up.
- **S / Down arrow:** move down.
- **A / Left arrow:** move left.
- **D / Right arrow:** move right.
- **Close the window:** exit.

## Explore the code

- [src/main.cpp](src/main.cpp): player setup and application loop.
- [src/engine](src/engine): initialization, input dispatch, and drawing helpers.
- [gameworld.h](src/types/game/gameworld.h): texture preparation and world generation.
- [tiles](src/types/game/tiles): tile and sub-tile structures.
- [player.h](src/types/game/objects/player/player.h): player input and movement state.
- [camera](src/types/game/camera): camera behavior.

## Status

This is an engine prototype rather than a complete game. Player collision handling remains unfinished. Resource cleanup contains overlapping ownership and deletion paths that need correction; shutdown may be unreliable. Automated tests and portable build validation are not yet included.

For a related exploration of 3D rendering, see [3DEngine](https://github.com/oabdulr/3DEngine).
