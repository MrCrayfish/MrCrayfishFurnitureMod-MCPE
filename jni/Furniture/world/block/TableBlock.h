#pragma once

#include "FurnitureBlock.h"
#include "attributes/FurnitureBlockAttributes.h"

class TableBlock : public FurnitureBlock {
public:
	static int _woodId;
	static int _stoneId;
	
	TableBlock(int, std::string, FurnitureBlockAttributes, int);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);

private:
	TextureUVCoordinateSet secondary_tex;
	int droppedItem;
};
