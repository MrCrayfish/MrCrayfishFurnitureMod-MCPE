#pragma once

#include "RotatableBlock.h"
#include "../item/CounterItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class CounterBlock : public RotatableBlock {
public:
	static int _id;
	
	CounterBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);

private:
	TextureUVCoordinateSet secondary_tex;
};
