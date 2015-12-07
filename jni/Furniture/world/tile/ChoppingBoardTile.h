#pragma once

#include "RotatableTile.h"
#include "../item/ChoppingBoardItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class ChoppingBoardTile : public RotatableTile {
public:
	static int _id;
	
	ChoppingBoardTile(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);
	virtual void addAABBs(BlockSource*, int, int, int, AABB const*, std::vector<AABB, std::allocator<AABB>>&);

private:
	TextureUVCoordinateSet secondary_tex;
};
