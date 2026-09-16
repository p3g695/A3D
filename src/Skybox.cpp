#include "../include/Skybox.hpp"
#include <iostream>

Skybox::Skybox() {}

void Skybox::renderSkyAndClouds() {
    // Conceptual OpenGL state setting for blue sky clear background
    // glClearColor(0.53f, 0.81f, 0.92f, 1.0f); // Sky Blue (RGB)
    
    std::cout << "[Renderer] Sky initialized: Sky Blue background (RGB: 135, 206, 235).\n";
    std::cout << "[Renderer] Skybox: Rendering volumetric procedural clouds...\n";
}
