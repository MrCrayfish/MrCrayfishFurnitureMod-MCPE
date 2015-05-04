#pragma once

#include "FurnitureTiles.h"

class TableTile : public FurnitureTiles {
public:
	TableTile(int, Material const*);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual bool use(Player*, int, int, int);

private:
	TextureUVCoordinateSet secondary_tex;
};
