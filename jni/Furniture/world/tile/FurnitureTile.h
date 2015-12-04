#pragma once

#include "MCPE/world/item/TileItem.h"
#include "MCPE/world/level/tile/Block.h"
#include "MCPE/world/level/BlockSource.h"

#include "../../util/CollisionHelper.h"

class FurnitureTile : public Block {
public:
	static FurnitureTile* tileTableWood;
	static FurnitureTile* tileTableStone;
	static FurnitureTile* tileCoffeeTableWood;
	static FurnitureTile* tileCoffeeTableStone;
	static FurnitureTile* tileChairWood;
	static FurnitureTile* tileChairStone;
	static FurnitureTile* tileToilet;
	static FurnitureTile* tileCabinet;
	static FurnitureTile* tileKitchenCabinet;
	static FurnitureTile* tileDoorbell;
	static FurnitureTile* tileBin;
	static FurnitureTile* tileLamp;
	static FurnitureTile* tileChoppingBoard;
	static FurnitureTile* tileToaster;
	static FurnitureTile* tileMicrowave;
	static FurnitureTile* tileBarStool;
	static FurnitureTile* tileCounter;
	static FurnitureTile* tileCookieJar;
	static FurnitureTile* tileOven;
	static FurnitureTile* tilePlate;
	
	FurnitureTile(const std::string&, int, Material const*);
};
