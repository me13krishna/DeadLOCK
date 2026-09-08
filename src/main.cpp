#include <iostream>
#include "MP/math_utils.h"

int main(int argc, char** argv) {
    std::cout << "3D Interactive Maze Game - Repository Initialized!" << std::endl;
    
    // Testing the Assembly Linkage
    int a = 15;
    int b = 27;
    int result = add_numbers(a, b);
    std::cout << "NASM Assembly Test: " << a << " + " << b << " = " << result << std::endl;

    // TODO: Initialize OpenGL Window here (CG Team)
    // TODO: Initialize Game Engine here (OOP Team)
    // TODO: Initialize Maze Grid here (DS Team)

    return 0;
}
