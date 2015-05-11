#include "TileToilet.h"

int TileToilet::_id = 210;

TileToilet::TileToilet(int id, Material const* material) : FurnitureTiles(id, material) {
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;
	setNameId("TileToilet");
	setSoundType(Tile::SOUND_STONE);
	setDestroyTime(1.0F);
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stone", 0);
}

const TextureUVCoordinateSet& TileToilet::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool TileToilet::use(Player* player, int x, int y, int z) {
	return false;
}

int TileToilet::getResource(int data, Random* rand) {
	return ToiletItem::_id;
}
