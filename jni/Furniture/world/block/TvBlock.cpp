#include "TvBlock.h"

int TvBlock::_id = 182;

TvBlock::TvBlock(int id, Material const& material) : FurnitureBlock("blockTv", id, material) {
	tex = getTextureUVCoordinateSet("log", 0);
	secondary_tex = getTextureUVCoordinateSet("planks", 0);

	terciary_tex = getTextureUVCoordinateSet("wool", 15);
	
	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& TvBlock::getTexture(signed char side, int data) {
	return side == 0 ? tex : side == 1 ? secondary_tex : terciary_tex;
}

int TvBlock::getResource(Random& rand, int data, int idk) {
	return TvItem::_id;
}
