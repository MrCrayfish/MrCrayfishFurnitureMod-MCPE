#include "OvenBlock.h"

int OvenBlock::_id = 221;

OvenBlock::OvenBlock(int id, Material const& material) : RotatableBlock("blockOven", id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	
	setSoundType(Block::SOUND_STONE);
	setDestroyTime(1.0F);
	
	setSolid(false);
}

bool OvenBlock::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(AABB(0, 0, 0, 1, 0.875, 1).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}

bool OvenBlock::use(Player& player, const BlockPos& pos) {
	return true;
}

int OvenBlock::getResource(Random& rand, int data, int idk) {
	return OvenItem::_id;
}
