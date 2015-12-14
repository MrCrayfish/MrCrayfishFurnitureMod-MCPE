#pragma once

#include "FurnitureBlock.h"
#include "../item/BarStoolItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class BarStoolBlock : public FurnitureBlock {
public:
	static int _id;
	
	BarStoolBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);

private:
	TextureUVCoordinateSet secondary_tex;
	TextureUVCoordinateSet terciary_tex;
	TextureUVCoordinateSet quartenary_tex;
};
