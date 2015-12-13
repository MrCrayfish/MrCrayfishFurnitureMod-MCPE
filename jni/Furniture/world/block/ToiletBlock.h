#pragma once

#include "RotatableBlock.h"
#include "../item/ToiletItem.h"

class ToiletBlock : public RotatableBlock {
public:
	static int _id;

	ToiletBlock(int, Material const&);

	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
	virtual bool addCollisionShapes(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&, Entity*);
};
