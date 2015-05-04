#pragma once

#include "FurnitureTiles.h"

class TableTile : public FurnitureTiles {
public:
	static int _woodId;
	static int _stoneId;

	TableTile(int, Material const*);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);

private:
	TextureUVCoordinateSet primary_texture;
	TextureUVCoordinateSet secondary_texture;
};
