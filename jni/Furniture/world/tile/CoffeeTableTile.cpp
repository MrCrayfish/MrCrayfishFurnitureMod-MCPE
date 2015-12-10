#include "CoffeeTableTile.h"

int CoffeeTableTile::_woodId = 204;
int CoffeeTableTile::_stoneId = 205;

CoffeeTableTile::CoffeeTableTile(int id, std::string name, FurnitureTileAttributes attributes, int item) : FurnitureTile("blockCoffeeTable", id, attributes.realMaterial) {
	setSolid(false);

	setSoundType(attributes.sounds);
	setDestroyTime(attributes.hardness);
	tex = attributes.primary_tex;
	secondary_tex = attributes.secondary_tex;
	droppedItem = item;
}

const TextureUVCoordinateSet& CoffeeTableTile::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool CoffeeTableTile::use(Player&, const BlockPos&) {
	return false;
}

int CoffeeTableTile::getResource(Random& rand, int data, int idk) {
	return droppedItem;
}
