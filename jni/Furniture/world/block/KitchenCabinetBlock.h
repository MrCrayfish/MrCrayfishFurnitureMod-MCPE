#pragma once

#include "RotatableBlock.h"
#include "../item/KitchenCabinetItem.h"

class KitchenCabinetBlock : public RotatableBlock {
public:
	static int _id;
	
	KitchenCabinetBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool addCollisionShapes(BlockSource&, const BlockPos&, const AABB*, std::vector<AABB, std::allocator<AABB>>&, Entity*);
	virtual bool use(Player&, const BlockPos&);
	
private:
	TextureUVCoordinateSet secondary_tex;
	TextureUVCoordinateSet terciary_tex;
};
