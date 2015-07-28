#include "OvenTile.h"

int OvenTile::_id = 221;

OvenTile::OvenTile(int id, Material const* material) : RotatableTile(id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	
	init();
	setNameId("tileOven");
	setSoundType(Tile::SOUND_STONE);
	setDestroyTime(1.0F);
	
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;
}

void OvenTile::addAABBs(TileSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>& pool) {
	addAABB(AABB(0, 0, 0, 1, 0.875, 1).move(x, y, z), posAABB, pool);
}

bool OvenTile::use(Player* player, int x, int y, int z) {
	return true;
}

int OvenTile::getResource(int data, Random* rand) {
	return OvenItem::_id;
}
