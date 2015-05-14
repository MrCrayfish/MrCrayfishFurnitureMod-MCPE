#pragma once

#include "FurnitureItem.h"

#include "MCPE/world/level/tile/Tile.h"
#include "MCPE/world/Facing.h"
#include "MCPE/world/entity/player/Player.h"
#include "MCPE/world/level/TileSource.h"
#include "MCPE/world/item/ItemInstance.h"

class PlaceableItem : public FurnitureItem {
public:
	PlaceableItem(int, int);

	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);

private:
	int placed;
};