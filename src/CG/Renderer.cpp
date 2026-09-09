#include "CG/Renderer.h"

void Renderer::Initialize() {
    // Set background color to dark grey (R, G, B, Alpha)
    glClearColor(0.15f, 0.15f, 0.15f, 1.0f);
    
    // Enable Depth Testing so 3D objects display correctly based on distance
    glEnable(GL_DEPTH_TEST);
}

// Floor Primitive: Draws a flat ground plane and grid lines
void Renderer::DrawFloor(float size) {
    // 1. Draw Ground Plane using GL_QUADS
    glBegin(GL_QUADS);
        glColor3f(0.25f, 0.25f, 0.25f); // Dark Grey Floor
        glVertex3f(-size, 0.0f, -size);
        glVertex3f( size, 0.0f, -size);
        glVertex3f( size, 0.0f,  size);
        glVertex3f(-size, 0.0f,  size);
    glEnd();

    // 2. Draw Grid Lines using GL_LINES for visual depth
    glBegin(GL_LINES);
        glColor3f(0.45f, 0.45f, 0.45f); // Lighter Grey Grid Lines
        for (float i = -size; i <= size; i += 2.0f) {
            // Lines running along Z-axis
            glVertex3f(i, 0.01f, -size);
            glVertex3f(i, 0.01f,  size);

            // Lines running along X-axis
            glVertex3f(-size, 0.01f, i);
            glVertex3f( size, 0.01f, i);
        }
    glEnd();
}

// Stub for DrawCube (not implemented yet per request)
void Renderer::DrawCube(float x, float y, float z, float size) {
    // To be implemented when needed
}

}
