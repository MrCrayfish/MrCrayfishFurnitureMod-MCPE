#pragma once

#include "RotatableBlock.h"
#include "../item/ChoppingBoardItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class ChoppingBoardBlock : public RotatableBlock {
public:
	static int _id;
	
	ChoppingBoardBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
	virtual bool addCollisionShapes(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&, Entity*);

private:
	TextureUVCoordinateSet secondary_tex;
};
