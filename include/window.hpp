#ifndef WINDOW_HPP
#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>
#include <string>

class EngineWindow {
public:
    EngineWindow(int width, int height, const std::string& title);
    ~EngineWindow();

    bool initialize();
    void mainLoop();
    void renderUI();

private:
    int width;
    int height;
    std::string title;
    bool isPlaying = false;
};

#endif
