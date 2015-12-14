#pragma once

#include "RotatableBlock.h"
#include "../item/DoorbellItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class DoorbellBlock : public RotatableBlock {
public:
	static int _id;
	
	DoorbellBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
	virtual int getTickDelay();
	virtual void tick(BlockSource&, const BlockPos&, Random&);
	virtual bool addCollisionShapes(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&, Entity*);

private:
	TextureUVCoordinateSet secondary_tex;
};
