#include "../include/Window.hpp"
#include "../include/Skybox.hpp"
#include "../include/Baseplate.hpp"
#include "../include/SceneUI.hpp"

EngineWindow::EngineWindow(int w, int h, const std::string& t) 
    : width(w), height(h), title(t) {}

EngineWindow::~EngineWindow() {}

bool EngineWindow::initialize() {
    std::cout << "Initializing " << title << " (" << width << "x" << height << ")...\n";
    std::cout << "Viewport window created successfully.\n";
    return true;
}

void EngineWindow::renderUI() {
    std::cout << "---------------------------------------------------------\n";
    std::cout << " Top Bar: [ " << (isPlaying ? "STOP" : "PLAY") << " ]  |  [ IMPORT MODEL ]  |  [ EXPORT MODEL ]\n";
    std::cout << "---------------------------------------------------------\n";
}

void EngineWindow::mainLoop() {
    Skybox skybox;
    Baseplate baseplate(100.0f);
    SceneUI hierarchyUI;

    renderUI();
    skybox.renderSkyAndClouds();
    baseplate.renderGrayGrid();
    hierarchyUI.renderFarRightPanel();

    // Import test model demonstration
    hierarchyUI.addObject("Imported_Character_Model.gltf");
    hierarchyUI.renderFarRightPanel();
}
