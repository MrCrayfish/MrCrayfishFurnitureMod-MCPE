#include "CounterBlock.h"

int CounterBlock::_id = 213;

CounterBlock::CounterBlock(int id, Material const& material) : RotatableBlock("blockCounter", id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stained_clay", 9);

	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& CounterBlock::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

int CounterBlock::getResource(Random& rand, int data, int idk) {
	return CounterItem::_id;
}
