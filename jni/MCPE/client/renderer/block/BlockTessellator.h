#pragma once
#include <string>
#include <functional>

class Tessellator;
class BlockPos;
class Block;
class BlockSource;
#include "../texture/TextureUVCoordinateSet.h"
#include "../../../world/phys/AABB.h"
#include "../../../world/phys/Vec3.h"
#include "../../../CommonTypes.h"

class BlockTessellator {
public:
    // fields
    bool forceOpaque;
    bool otherb;
    BlockSource* region;
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

    bool tessellateInWorld(Block*, BlockPos const&, bool);
    bool tessellateBlockInWorld(Block*, BlockPos const&);
    void renderFaceUp(Block*, const Vec3&, const TextureUVCoordinateSet&);
    void tessellateTorch(Block*, float, float, float, float, float);
    void tex1(unsigned int);
    DataID getData(BlockPos const&) const;
    unsigned int getLightColor(BlockPos const&);

    void setRenderBounds(float, float, float, float, float, float);
};
