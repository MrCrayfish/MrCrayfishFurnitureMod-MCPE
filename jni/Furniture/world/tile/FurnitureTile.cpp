#include "FurnitureTile.h"

FurnitureTile* FurnitureTile::tileTableWood = NULL;
FurnitureTile* FurnitureTile::tileTableStone = NULL;
FurnitureTile* FurnitureTile::tileCoffeeTableWood = NULL;
FurnitureTile* FurnitureTile::tileCoffeeTableStone = NULL;
FurnitureTile* FurnitureTile::tileChairWood = NULL;
FurnitureTile* FurnitureTile::tileChairStone = NULL;
FurnitureTile* FurnitureTile::tileToilet = NULL;
FurnitureTile* FurnitureTile::tileCabinet = NULL;
FurnitureTile* FurnitureTile::tileKitchenCabinet = NULL;
FurnitureTile* FurnitureTile::tileDoorbell = NULL;
FurnitureTile* FurnitureTile::tileBin = NULL;
FurnitureTile* FurnitureTile::tileLamp = NULL;
FurnitureTile* FurnitureTile::tileChoppingBoard = NULL;
FurnitureTile* FurnitureTile::tileToaster = NULL;
FurnitureTile* FurnitureTile::tileMicrowave = NULL;
FurnitureTile* FurnitureTile::tileBarStool = NULL;
FurnitureTile* FurnitureTile::tileCounter = NULL;
FurnitureTile* FurnitureTile::tileCookieJar = NULL;
FurnitureTile* FurnitureTile::tileOven = NULL;
FurnitureTile* FurnitureTile::tilePlate = NULL;
FurnitureTile* FurnitureTile::tileTv = NULL;

FurnitureTile::FurnitureTile(const std::string& name, int id, Material const& material) : Block(name, id, material) {
	ALOG("Loaded FurnitureTile");
	creativeCategory = 3;
}

void FurnitureTile::registerBlocks() {
	ALOG("Registering Blocks");
	registerBlock(tileTableWood);
	registerBlock(tileTableStone);
	registerBlock(tileCoffeeTableWood);
	registerBlock(tileCoffeeTableStone);
	registerBlock(tileChairWood);
	registerBlock(tileChairStone);
	registerBlock(tileToilet);
	registerBlock(tileCabinet);
	registerBlock(tileKitchenCabinet);
	registerBlock(tileDoorbell);
	registerBlock(tileBin);
	registerBlock(tileLamp);
	registerBlock(tileChoppingBoard);
	registerBlock(tileToaster);
	registerBlock(tileMicrowave);
	registerBlock(tileBarStool);
	registerBlock(tileCounter);
	registerBlock(tileCookieJar);
	registerBlock(tileOven);
	registerBlock(tilePlate);
     registerBlock(tileTv);
	ALOG("Finished Registering Blocks");
}

void FurnitureTile::registerBlock(Block* block) {
	ALOG("Init");
	block->init();
	ALOG("Adding block to list");
	Block::mBlocks[block->id] = block;
	ALOG("Adding block item!");
	Item::mItems[block->id] = new BlockItem(block->getDescriptionId(), block->id - 256);
}
