#pragma once

#include "FurnitureTile.h"
#include "../item/BarStoolItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class BarStoolTile : public FurnitureTile {
public:
	static int _id;
	
	BarStoolTile(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);

private:
	TextureUVCoordinateSet secondary_tex;
	TextureUVCoordinateSet terciary_tex;
	TextureUVCoordinateSet quartenary_tex;
};
