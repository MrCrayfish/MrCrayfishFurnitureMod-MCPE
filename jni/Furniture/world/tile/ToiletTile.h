#pragma once

#include "RotatableTile.h"
#include "../item/ToiletItem.h"

class ToiletTile : public RotatableTile {
public:
	static int _id;

	ToiletTile(int, Material const*);

	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);
	virtual void addAABBs(BlockSource*, int, int, int, AABB const*, std::vector<AABB, std::allocator<AABB>>&);
};