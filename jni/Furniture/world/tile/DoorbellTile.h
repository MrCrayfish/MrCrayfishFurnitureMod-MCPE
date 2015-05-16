#pragma once

#include "FurnitureTile.h"
#include "../item/DoorbellItem.h"

class DoorbellTile : public FurnitureTile {
public:
	static int _id;
	
	DoorbellTile(int, Material const*);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);
	virtual int getTickDelay();
	virtual void tick(TileSource*, int, int, int, Random*);
	
private:
	TextureUVCoordinateSet secondary_tex;
};
