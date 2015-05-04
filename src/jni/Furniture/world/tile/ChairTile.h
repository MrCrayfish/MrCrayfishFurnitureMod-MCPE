#pragma once

#include "FurnitureTiles.h"
#include "../item/ChairItem.h"

class ChairTile : public FurnitureTiles {
public:
	static int _woodId;
	static int _stoneId;

	ChairTile(int, Material const*);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);

	bool isWood();

private:
	TextureUVCoordinateSet stone_tex;
};