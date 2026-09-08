#pragma once

#include <GL/glut.h>

class Renderer {
public:
    Renderer() = default;
    ~Renderer() = default;
    
    // Initialize OpenGL state (background color, depth testing)
    void Initialize();
    
    // Basic 3D Primitives required for the Maze project
    static void DrawCube(float x, float y, float z, float size);
    static void DrawFloor(float size);
};

