#pragma once

#include "FurnitureTile.h"
#include "../item/TvItem.h"

class TvTile : public FurnitureTile {
public:
	static int _id;
	
	TvTile(int, Material const&);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(Random&, int, int);
	
private:
	TextureUVCoordinateSet secondary_tex;

	TextureUVCoordinateSet terciary_tex;
};
