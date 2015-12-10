#pragma once

#include "RotatableTile.h"
#include "../item/ToiletItem.h"

class ToiletTile : public RotatableTile {
public:
	static int _id;

	ToiletTile(int, Material const&);

	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
	virtual bool addCollisionShapes(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&, Entity*);
};
