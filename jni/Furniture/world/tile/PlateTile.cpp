#include "PlateTile.h"

int PlateTile::_id = 223;

PlateTile::PlateTile(int id, Material const& material) : FurnitureTile("blockPlate", id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	
	setSoundType(Block::SOUND_GLASS);
	setSolid(false);
}

bool PlateTile::use(Player& player, const BlockPos& pos) {
	return true;
}

int PlateTile::getResource(Random& rand, int data, int idk) {
	return PlateItem::_id;
}
