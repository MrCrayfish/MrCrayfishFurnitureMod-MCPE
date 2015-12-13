#pragma once

#include "FurnitureBlock.h"
#include "../item/BinItem.h"

class BinBlock : public FurnitureBlock {
public:
	static int _id;
	
	BinBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	
private:
	TextureUVCoordinateSet secondary_tex;
};