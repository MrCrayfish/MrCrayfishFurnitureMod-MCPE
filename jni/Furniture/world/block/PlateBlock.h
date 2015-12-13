#pragma once

#include "FurnitureBlock.h"
#include "../item/PlateItem.h"

#include "MCPE/world/level/Level.h"
#include "MCPE/world/level/BlockSource.h"

class PlateBlock: public FurnitureBlock {
public:
	static int _id;
	
	PlateBlock(int, Material const&);
	
	virtual int getResource(Random&, int, int);
	virtual bool use(Player&, const BlockPos&);
};
