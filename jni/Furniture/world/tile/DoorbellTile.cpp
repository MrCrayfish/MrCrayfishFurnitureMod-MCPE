#include "DoorbellTile.h"

int DoorbellTile::_id = 205;

DoorbellTile::DoorbellTile(int id, Material const* material) : FurnitureTile(id, material) {
	tex = getTextureUVCoordinateSet("log", 0);
	secondary_tex = getTextureUVCoordinateSet("iron_block", 0);
	
	setNameId("tileDoorbell");
	setSoundType(Tile::SOUND_WOOD);
	//setShape(0.375F, 0.25F, 0.0F, 0.625F, 0.75F, 0.1F);
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;
}

const TextureUVCoordinateSet& DoorbellTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

bool DoorbellTile::use(Player* player, int x, int y, int z) {
	int data = player->region.getData(x, y, z);
	int rot = data & 7;
	int out = (data & 8) >> 3;
	bool isClicked = out == 0;

	if(isClicked) return true;
	//player->level->playSound("fire.fire", x, y, z, 100, 100); //Cant add its own sounds!
	player->region.setTileAndData(x, y, z, {this->id, rot + out}, 2);
	player->region.getTickQueue({x, y, z})->add(&player->region, {x, y, z}, this->id, 0);
	return true;
}

int DoorbellTile::getTickDelay() {
	return 20;
}

void DoorbellTile::tick(TileSource* region, int x, int y, int z, Random* rand) {
	int data = region->getData(x, y, z);
	if((data & 8) == 0) return;
	region->setTileAndData(x, y, z, {this->id, data & 7}, 2);
}

int DoorbellTile::getResource(int data, Random* rand) {
	return DoorbellItem::_id;
}
