#include "ToiletBlock.h"

int ToiletBlock::_id = 210;

ToiletBlock::ToiletBlock(int id, Material const& material) : RotatableBlock("blockToilet", id, material) {
	setSolid(false);
	
	setSoundType(Block::SOUND_STONE);
	setDestroyTime(1.0F);
	tex = getTextureUVCoordinateSet("quartz_block", 0);
}

bool ToiletBlock::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(AABB(0.0F, 0.0F, 0.0F, 1.0F, 0.5F, 1.0F).move(pos.x, pos.y, pos.z), posAABB, pool);
	addAABB(CollisionHelper::getRotatedCollisionBox(region.getData(pos), 0.65F, 0.5F, 0.0F, 1.0F, 1.1F, 1.0F).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}

bool ToiletBlock::use(Player& player, const BlockPos& pos) {
	return false;
}

int ToiletBlock::getResource(Random& rand, int data, int idk) {
	return ToiletItem::_id;
}
