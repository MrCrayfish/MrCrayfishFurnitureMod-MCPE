#pragma once

#include "RotatableBlock.h"
#include "../item/ToasterItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"
#include "../../util/CollisionHelper.h"

class ToasterBlock : public RotatableBlock {
public:
	static int _id;
	
	ToasterBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);

private:
	TextureUVCoordinateSet secondary_tex;
	TextureUVCoordinateSet terciary_tex;
};
