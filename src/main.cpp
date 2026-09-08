#include <iostream>
#include <GL/glut.h>
#include "CG/Renderer.h"
#include "MP/math_utils.h"

// Display Callback Function
void display() {
    // Clear background color and depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // Reset transformations
    glLoadIdentity();

    // Position 3D Camera: 
    // Eye position (0, 10, 20), Looking at origin (0, 0, 0), Up vector (0, 1, 0)
    gluLookAt(0.0, 10.0, 20.0, 
              0.0,  0.0,  0.0, 
              0.0,  1.0,  0.0);

    // Render 3D Floor Grid Primitive
    Renderer::DrawFloor(20.0f);

    // Swap front and back buffers for smooth rendering
    glutSwapBuffers();
}

// Reshape Callback Function (handles window resize & perspective projection)
void reshape(int width, int height) {
    if (height == 0) height = 1;
    float aspect = (float)width / (float)height;

    // Set viewport to cover whole window
    glViewport(0, 0, width, height);

    // Set 3D Perspective Projection Matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, aspect, 0.1, 100.0);

    // Switch back to Modelview Matrix
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    std::cout << "Starting 3D Interactive Maze Game..." << std::endl;

    // Test NASM Assembly integration
    int a = 15;
    int b = 27;
    int result = add_numbers(a, b);
    std::cout << "NASM Assembly Test: " << a << " + " << b << " = " << result << std::endl;

    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("3D Interactive Maze Game - CG Phase 1");

    // Initialize Renderer OpenGL settings (depth test, background color)
    Renderer renderer;
    renderer.Initialize();

    // Register Callbacks
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    // Start GLUT main event loop
    glutMainLoop();

    return 0;
}
