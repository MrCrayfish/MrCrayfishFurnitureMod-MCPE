#include "TableBlock.h"

int TableBlock::_woodId = 200;
int TableBlock::_stoneId = 201;

TableBlock::TableBlock(int id, std::string name, FurnitureBlockAttributes attributes, int item) : FurnitureBlock("blockTable", id, attributes.realMaterial) {
	setSolid(false);

	setSoundType(attributes.sounds);
	setDestroyTime(attributes.hardness);
	tex = attributes.primary_tex;
	secondary_tex = attributes.secondary_tex;
	droppedItem = item;
}

const TextureUVCoordinateSet& TableBlock::getTexture(signed char side, int data) {
	return (side == 0) ? tex : secondary_tex;
}

int TableBlock::getResource(Random& rand, int data, int idk) {
	return droppedItem;
}
