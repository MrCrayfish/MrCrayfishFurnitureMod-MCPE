#pragma once

#include "RotatableBlock.h"
#include "../item/OvenItem.h"

class OvenBlock : public RotatableBlock {
public:
	static int _id;

	OvenBlock(int, Material const&);

	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
	virtual bool addCollisionShapes(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&, Entity*);
};
