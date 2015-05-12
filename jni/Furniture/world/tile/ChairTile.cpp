#include "ChairTile.h"

int ChairTile::_woodId = 202;
int ChairTile::_stoneId = 203;

ChairTile::ChairTile(int id, std::string name, FurnitureTileAttributes attributes, int item) : FurnitureTile(id, attributes.realMaterial) {
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;

	setNameId(name);
	setSoundType(attributes.sounds);
	setDestroyTime(attributes.hardness);
	tex = attributes.primary_tex;
	secondary_tex = attributes.secondary_tex;
	this->droppedItem = item;
}

const TextureUVCoordinateSet& ChairTile::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool ChairTile::use(Player* player, int x, int y, int z) {
	return false;
}

int ChairTile::getResource(int data, Random* rand) {
	return droppedItem;
}