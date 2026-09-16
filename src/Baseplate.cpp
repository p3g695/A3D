#include "../include/Baseplate.hpp"
#include <iostream>

Baseplate::Baseplate(float size) : size(size) {}

void Baseplate::renderGrayGrid() {
    // Conceptual rendering logic for a standard gray mesh grid
    // Primary Gray Color: RGB(0.5f, 0.5f, 0.5f)
    std::cout << "[Renderer] Baseplate: Rendering " << size << "x" << size << " gray grid mesh.\n";
}
