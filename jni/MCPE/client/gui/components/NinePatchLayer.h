#pragma once

#include "GuiElement.h"
class Textures;


class Tessellator {
public:
    static Tessellator* instance;
};

class NinePatchDescription {
public:
    float u0, u1, u2, u3;
    float v0, v1, v2, v3;
    float w, e, n, s;
private:
    int imgW;
    int imgH;
};

class NinePatchLayer : public GuiElement {
public:
    float w, h;
    NinePatchDescription desc;
    std::string image;
    Textures* tex;
    int excluded;

    void setSize(float, float);
    void draw(Tessellator&, float, float);

struct CachedQuad {
    float x0, x1, y0, y1, z;
    float u0, u1, v0, v1;
};

private:
    NinePatchLayer::CachedQuad quads[9];
};