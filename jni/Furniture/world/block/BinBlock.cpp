#include "BinBlock.h"

int BinBlock::_id = 206;

BinBlock::BinBlock(int id, Material const& material) : FurnitureBlock("blockBin", id, material) {
	tex = getTextureUVCoordinateSet("iron_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stone", 0);
	
	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& BinBlock::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

int BinBlock::getResource(Random& rand, int data, int idk) {
	return BinItem::_id;
}
