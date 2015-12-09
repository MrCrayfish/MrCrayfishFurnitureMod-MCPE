#pragma once

#include "RotatableTile.h"
#include "attributes/FurnitureTileAttributes.h"

class ChairTile : public RotatableTile {
public:
	static int _woodId;
	static int _stoneId;

	ChairTile(int, std::string, FurnitureTileAttributes, int);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
	virtual void addAABBs(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&);

private:
	TextureUVCoordinateSet secondary_tex;
	int droppedItem;
};