#pragma once

#include "FurnitureBlock.h"
#include "attributes/FurnitureBlockAttributes.h"

class CoffeeTableBlock : public FurnitureBlock {
public:
	static int _woodId;
	static int _stoneId;
	
	CoffeeTableBlock(int, std::string, FurnitureBlockAttributes, int);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);

private:
	TextureUVCoordinateSet secondary_tex;
	int droppedItem;
};
