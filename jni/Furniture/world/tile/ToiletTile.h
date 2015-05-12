#pragma once

#include "FurnitureTile.h"
#include "../item/ToiletItem.h"

class ToiletTile : public FurnitureTile {
public:
	static int _id;

	ToiletTile(int, Material const*);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);
private:
	TextureUVCoordinateSet secondary_tex;
};