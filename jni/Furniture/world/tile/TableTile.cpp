#include "TableTile.h"

int TableTile::_woodId = 200;
int TableTile::_stoneId = 201;

TableTile::TableTile(int id, std::string name, FurnitureTileAttributes attributes, int item) : FurnitureTile("blockTable", id, attributes.realMaterial) {
	Block::mSolid[id] = false;
	Block::mLightBlock[id] = 0;

	
	setSoundType(attributes.sounds);
	setDestroyTime(attributes.hardness);
	tex = attributes.primary_tex;
	secondary_tex = attributes.secondary_tex;
	droppedItem = item;
}

const TextureUVCoordinateSet& TableTile::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool TableTile::use(Player* player, int x, int y, int z) {
	return false;
}

int TableTile::getResource(int data, Random* rand) {
	return droppedItem;
}