#pragma once

#include "RotatableBlock.h"
#include "attributes/FurnitureBlockAttributes.h"

class ChairBlock : public RotatableBlock {
public:
	static int _woodId;
	static int _stoneId;

	ChairBlock(int, std::string, FurnitureBlockAttributes, int);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
	virtual bool addCollisionShapes(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&, Entity*);

private:
	TextureUVCoordinateSet secondary_tex;
	int droppedItem;
};
