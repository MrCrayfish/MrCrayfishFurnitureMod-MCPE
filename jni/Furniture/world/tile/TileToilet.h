#pragma once

#include "FurnitureTiles.h"
#include "../item/ToiletItem.h"

class TileToilet : public FurnitureTiles {
public:
	static int _id;

	TileToilet(int, Material const*);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);
private:
	TextureUVCoordinateSet secondary_tex;
};