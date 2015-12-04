#pragma once

#include "FurnitureTile.h"
#include "../item/PlateItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"

class PlateTile: public FurnitureTile {
public:
	static int _id;
	
	PlateTile(int, Material const*);
	
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);
};
