#include "LampBlock.h"

int LampBlock::_id = 207;

LampBlock::LampBlock(int id, Material const& material) : FurnitureBlock("blockLamp", id, material) {
	tex = getTextureUVCoordinateSet("obsidian", 0);
	secondary_tex = getTextureUVCoordinateSet("wool", 0);
	
	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& LampBlock::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

int LampBlock::getResource(Random& rand, int data, int idk) {
	return LampItem::_id;
}
