#ifndef BASEPLATE_HPP
#define BASEPLATE_HPP

class Baseplate {
public:
    Baseplate(float size = 100.0f);
    void renderGrayGrid();

private:
    float size;
};

#endif
