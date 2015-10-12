#include "PlateTile.h"

int PlateTile::_id = 223;

PlateTile::PlateTile(int id, Material const* material) : FurnitureTile(id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	
	setNameId("tilePlate");
	setSoundType(Tile::SOUND_GLASS);
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;
}

bool PlateTile::use(Player* player, int x, int y, int z) {
	return true;
}

int PlateTile::getResource(int data, Random* rand) {
	return PlateItem::_id;
}
