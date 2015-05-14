#pragma once

#include "FurnitureTile.h"
#include "../item/CabinetItem.h"

class CabinetTile : public FurnitureTile {
public:
	static int _id;
	
	TileCabinet(int, Material const*);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual void addAABBs(TileSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>& pool);
	virtual bool use(Player*, int, int, int);
	
private:
	TextureUVCoordinateSet secondary_tex;
	TextureUVCoordinateSet terciary_tex;
};
