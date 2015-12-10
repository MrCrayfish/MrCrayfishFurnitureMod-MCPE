#pragma once

#include "RotatableTile.h"
#include "../item/CabinetItem.h"

class CabinetTile : public RotatableTile {
public:
	static int _id;
	
	CabinetTile(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool addCollisionShapes(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&, Entity*);
	virtual bool use(Player&, const BlockPos&);
	
private:
	TextureUVCoordinateSet secondary_tex;
	TextureUVCoordinateSet terciary_tex;
};
