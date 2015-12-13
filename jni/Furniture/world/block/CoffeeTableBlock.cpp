#include "CoffeeTableBlock.h"

int CoffeeTableBlock::_woodId = 204;
int CoffeeTableBlock::_stoneId = 205;

CoffeeTableBlock::CoffeeTableBlock(int id, std::string name, FurnitureBlockAttributes attributes, int item) : FurnitureBlock("blockCoffeeTable", id, attributes.realMaterial) {
	setSolid(false);

	setSoundType(attributes.sounds);
	setDestroyTime(attributes.hardness);
	tex = attributes.primary_tex;
	secondary_tex = attributes.secondary_tex;
	droppedItem = item;
}

const TextureUVCoordinateSet& CoffeeTableBlock::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool CoffeeTableBlock::use(Player&, const BlockPos&) {
	return false;
}

int CoffeeTableBlock::getResource(Random& rand, int data, int idk) {
	return droppedItem;
}
