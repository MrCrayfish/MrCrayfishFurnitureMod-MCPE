#pragma once

#include "FurnitureItem.h"

#include "../block/RotatableBlock.h";
#include "MCPE/world/level/block/Block.h"
#include "MCPE/world/Facing.h"
#include "MCPE/world/entity/player/Player.h"
#include "MCPE/world/level/BlockSource.h"
#include "MCPE/world/item/ItemInstance.h"

class PlaceableItem : public FurnitureItem {
public:
	PlaceableItem(const std::string&, int, int);

	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);

private:
	int placed;
};
