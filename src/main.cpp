#include "include/Window.hpp"

int main() {
    EngineWindow engine(1280, 720, "Aether3D Engine - Viewport");

    if (engine.initialize()) {
        engine.mainLoop();
    }

    return 0;
}
