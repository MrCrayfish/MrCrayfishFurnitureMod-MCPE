#include "PlateTile.h"

int PlateTile::_id = 223;

PlateTile::PlateTile(int id, Material const& material) : FurnitureTile("blockPlate", id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	
	
	setSoundType(Block::SOUND_GLASS);
	Block::mSolid[id] = false;
	Block::mLightBlock[id] = 0;
}

bool PlateTile::use(Player* player, int x, int y, int z) {
	return true;
}

int PlateTile::getResource(int data, Random* rand) {
	return PlateItem::_id;
}
