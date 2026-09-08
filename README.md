# 3D Interactive Maze Game

A collaborative project combining Object-Oriented Programming (OOP), Data Structures (DS), Computer Graphics (CG), and Microprocessors (MP/NASM).

## Requirements
- CMake (3.10+)
- MinGW-w64 (GCC)
- NASM (64-bit)
- FreeGLUT (or similar OpenGL wrapper like GLFW)

## Project Structure
- `src/OOP/` - Game classes, engine loop.
- `src/DS/` - Maze generation, pathfinding algorithms.
- `src/CG/` - OpenGL rendering logic.
- `src/MP/` - NASM x64 assembly code.
- `assets/` - Textures and sounds.

## Building (MinGW)
```bash
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
make
```
