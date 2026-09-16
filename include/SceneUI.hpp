#ifndef SCENE_UI_HPP
#define SCENE_UI_HPP

#include <vector>
#include <string>

class SceneUI {
public:
    SceneUI();
    void renderFarRightPanel();
    void addObject(const std::string& name);

private:
    std::vector<std::string> sceneObjects;
};

#endif
