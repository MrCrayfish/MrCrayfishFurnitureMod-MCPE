#pragma once

#include "MCPE/world/item/TileItem.h"
#include "MCPE/world/level/tile/Tile.h"

class FurnitureTile : public Tile {
public:
	static FurnitureTile* tileTableWood;
	static FurnitureTile* tileTableStone;
	static FurnitureTile* tileChairWood;
	static FurnitureTile* tileChairStone;
	static FurnitureTile* tileToilet;

	FurnitureTile(int, Material const*);
};