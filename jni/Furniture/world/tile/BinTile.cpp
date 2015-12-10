#include "BinTile.h"

int BinTile::_id = 206;

BinTile::BinTile(int id, Material const& material) : FurnitureTile("blockBin", id, material) {
	tex = getTextureUVCoordinateSet("iron_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stone", 0);
	
	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& BinTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

int BinTile::getResource(Random& rand, int data, int idk) {
	return BinItem::_id;
}
