#pragma once

#include "RotatableTile.h"
#include "../item/CounterItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class CounterTile : public RotatableTile {
public:
	static int _id;
	
	CounterTile(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);

private:
	TextureUVCoordinateSet secondary_tex;
};
