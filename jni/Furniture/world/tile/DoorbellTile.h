#pragma once

#include "RotatableTile.h"
#include "../item/DoorbellItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class DoorbellTile : public RotatableTile {
public:
	static int _id;
	
	DoorbellTile(int, Material const*);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);
	virtual int getTickDelay();
	virtual void tick(BlockSource*, int, int, int, Random*);
	virtual void addAABBs(BlockSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>&);

private:
	TextureUVCoordinateSet secondary_tex;
};
