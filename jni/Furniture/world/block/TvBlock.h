#pragma once

#include "FurnitureBlock.h"
#include "../item/TvItem.h"

class TvBlock : public FurnitureBlock {
public:
	static int _id;
	
	TvBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	
private:
	TextureUVCoordinateSet secondary_tex;

	TextureUVCoordinateSet terciary_tex;
};
