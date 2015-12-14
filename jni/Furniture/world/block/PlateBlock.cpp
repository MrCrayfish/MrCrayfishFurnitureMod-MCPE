#include "PlateBlock.h"

int PlateBlock::_id = 223;

PlateBlock::PlateBlock(int id, Material const& material) : FurnitureBlock("blockPlate", id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	
	setSoundType(Block::SOUND_GLASS);
	setSolid(false);
}

bool PlateBlock::use(Player& player, const BlockPos& pos) {
	return true;
}

int PlateBlock::getResource(Random& rand, int data, int idk) {
	return PlateItem::_id;
}
