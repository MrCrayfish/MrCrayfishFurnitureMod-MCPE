#pragma once
#include <string>
#include <functional>

class Tessellator;
class TilePos;
class Tile;
class TileSource;
#include "../texture/TextureUVCoordinateSet.h"
#include "../../../world/phys/AABB.h"
#include "../../../CommonTypes.h"

class TileTessellator {
public:
    // fields
    bool forceOpaque;
    bool otherb;
    TileSource* region;
    TextureUVCoordinateSet forcedUV;
    bool useForcedUV;
    char filler[84];
    int rotBottom;
    int rotTop;
    int rotEast;
    int rotWest;
    int rotNorth;
    int rotSouth;
    char filler1[512];
    Tessellator* tessellator_inst;
    AABB bounds;

    bool tessellateInWorld(Tile*, TilePos const&, bool);
    bool tessellateBlockInWorld(Tile*, TilePos const&);
    void tessellateTorch(Tile*, float, float, float, float, float);
    void tex1(unsigned int);
    DataID getData(TilePos const&) const;
    long getLightColor(TilePos const&);

    void setRenderBounds(float, float, float, float, float, float);
};