cmake_minimum_required(VERSION 3.10)
project(3DMazeGame LANGUAGES CXX)
enable_language(ASM_NASM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setup basic OpenGL finding
find_package(OpenGL REQUIRED)

# Include directories
include_directories(${OPENGL_INCLUDE_DIRS} src)

# Add NASM source files
set(ASM_SOURCES src/MP/math_utils.asm)

# Add C++ source files
set(CXX_SOURCES 
    src/main.cpp
    # Uncomment and add files as you develop them
    # src/OOP/Game.cpp
    # src/DS/Maze.cpp
    # src/CG/Renderer.cpp
)

add_executable(3DMazeGame ${CXX_SOURCES} ${ASM_SOURCES})

# Link libraries - you may need to adjust these for your specific MinGW OpenGL setup (e.g., using GLFW instead of freeglut)
target_link_libraries(3DMazeGame ${OPENGL_LIBRARIES} -lfreeglut -lglu32)
