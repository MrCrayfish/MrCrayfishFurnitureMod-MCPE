#pragma once

#include "RotatableTile.h"
#include "../item/KitchenCabinetItem.h"

class KitchenCabinetTile : public RotatableTile {
public:
	static int _id;
	
	KitchenCabinetTile(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual void addAABBs(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&);
	virtual bool use(Player&, const BlockPos&);
	
private:
	TextureUVCoordinateSet secondary_tex;
	TextureUVCoordinateSet terciary_tex;
};
