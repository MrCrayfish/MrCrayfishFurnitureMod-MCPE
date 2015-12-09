#pragma once

#include "RotatableTile.h"
#include "../item/OvenItem.h"

class OvenTile : public RotatableTile {
public:
	static int _id;

	OvenTile(int, Material const&);

	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
	virtual void addAABBs(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&);
};
