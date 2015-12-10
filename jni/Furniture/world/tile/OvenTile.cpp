#include "OvenTile.h"

int OvenTile::_id = 221;

OvenTile::OvenTile(int id, Material const& material) : RotatableTile("blockOven", id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	
	setSoundType(Block::SOUND_STONE);
	setDestroyTime(1.0F);
	
	setSolid(false);
}

bool OvenTile::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(AABB(0, 0, 0, 1, 0.875, 1).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}

bool OvenTile::use(Player& player, const BlockPos& pos) {
	return true;
}

int OvenTile::getResource(Random& rand, int data, int idk) {
	return OvenItem::_id;
}
