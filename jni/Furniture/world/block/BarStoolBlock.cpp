#include "BarStoolBlock.h"

int BarStoolBlock::_id = 212;

BarStoolBlock::BarStoolBlock(int id, Material const& material) : FurnitureBlock("blockBarStool", id, material) {
	tex = getTextureUVCoordinateSet("wool", 0);
	secondary_tex = getTextureUVCoordinateSet("stained_clay", 9);
	terciary_tex = getTextureUVCoordinateSet("quartz_block", 0);
	quartenary_tex = getTextureUVCoordinateSet("stone", 0);
	
	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& BarStoolBlock::getTexture(signed char side, int data) {
	return side == 0 ? tex : side == 1 ? secondary_tex : side == 2 ? terciary_tex : quartenary_tex;
}

bool BarStoolBlock::use(Player& player, const BlockPos& pos) {
	return true;
}

int BarStoolBlock::getResource(Random& rand, int data, int idk) {
	return BarStoolItem::_id;
}
