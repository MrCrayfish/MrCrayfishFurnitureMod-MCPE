#pragma once

#include "FurnitureTile.h"
#include "attributes/FurnitureTileAttributes.h"

class TableTile : public FurnitureTile {
public:
	static int _woodId;
	static int _stoneId;
	
	TableTile(int, std::string, FurnitureTileAttributes, int);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual bool use(Player*, int, int, int);

private:
	TextureUVCoordinateSet secondary_tex;
	int droppedItem;
};
