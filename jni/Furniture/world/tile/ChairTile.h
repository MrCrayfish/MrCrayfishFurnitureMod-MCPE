#pragma once

#include "RotatableTile.h"
#include "attributes/FurnitureTileAttributes.h"

class ChairTile : public RotatableTile {
public:
	static int _woodId;
	static int _stoneId;

	ChairTile(int, std::string, FurnitureTileAttributes, int);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);
	virtual void addAABBs(TileSource*, int, int, int, AABB const*, std::vector<AABB, std::allocator<AABB>>&);

private:
	TextureUVCoordinateSet secondary_tex;
	int droppedItem;
};