#pragma once

class Textures;
class NinePatchLayer;
#include <string>
#include "IntRectangle.h"

class NinePatchFactory {
public:
    NinePatchFactory(Textures*, std::string const&);
    NinePatchLayer* createSymmetrical(IntRectangle const&, int, int, float, float);

private:
    Textures* tex;
    std::string imageName;
    int w;
    int h;
};