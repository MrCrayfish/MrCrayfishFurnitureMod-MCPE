#pragma once

#include "FurnitureBlock.h"
#include "../item/LampItem.h"

class LampBlock: public FurnitureBlock {
public:
	static int _id;
	
	LampBlock(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	
private:
	TextureUVCoordinateSet secondary_tex;
};