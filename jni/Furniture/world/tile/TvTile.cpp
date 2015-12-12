#include "TvTile.h"

int TvTile::_id = 182;

TvTile::TvTile(int id, Material const& material) : FurnitureTile("blockTv", id, material) {
	tex = getTextureUVCoordinateSet("log", 0);
	secondary_tex = getTextureUVCoordinateSet("planks", 0);

	terciary_tex = getTextureUVCoordinateSet("wool", 15);
	
	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& TvTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : side == 1 ? secondary_tex : terciary_tex;
}

int TvTile::getResource(Random& rand, int data, int idk) {
	return TvItem::_id;
}
