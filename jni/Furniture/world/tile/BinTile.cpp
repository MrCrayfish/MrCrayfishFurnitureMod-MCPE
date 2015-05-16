#include "BinTile.h"

int BinTile::_id = 206;

BinTile::BinTile(int id, Material const* material) : FurnitureTile(id, material) {
	tex = getTextureUVCoordinateSet("iron_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stone", 0);
	
	setNameId("tileBin");
	setSoundType(Tile::SOUND_WOOD);
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;
}

const TextureUVCoordinateSet& BinTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

int BinTile::getResource(int data, Random* rand) {
	return BinItem::_id;
}