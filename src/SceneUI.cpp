#include "../include/SceneUI.hpp"
#include <iostream>

SceneUI::SceneUI() {
    // Default objects present in scene initialization
    sceneObjects.push_back("Main Camera");
    sceneObjects.push_back("Directional Light (Sun)");
    sceneObjects.push_back("Procedural Skybox");
    sceneObjects.push_back("Gray Baseplate");
}

void SceneUI::addObject(const std::string& name) {
    sceneObjects.push_back(name);
    std::cout << "[Import System] Loaded object into scene: " << name << "\n";
}

void SceneUI::renderFarRightPanel() {
    std::cout << "\n================ [ SCENE HIERARCHY (FAR RIGHT) ] ================\n";
    for (size_t i = 0; i < sceneObjects.size(); ++i) {
        std::cout << "  [" << i + 1 << "] " << sceneObjects[i] << "\n";
    }
    std::cout << "=================================================================\n\n";
}
