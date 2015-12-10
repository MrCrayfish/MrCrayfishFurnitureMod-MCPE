#include "ToiletTile.h"

int ToiletTile::_id = 210;

ToiletTile::ToiletTile(int id, Material const& material) : RotatableTile("blockToilet", id, material) {
	setSolid(false);
	
	setSoundType(Block::SOUND_STONE);
	setDestroyTime(1.0F);
	tex = getTextureUVCoordinateSet("quartz_block", 0);
}

bool ToiletTile::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(AABB(0.0F, 0.0F, 0.0F, 1.0F, 0.5F, 1.0F).move(pos.x, pos.y, pos.z), posAABB, pool);
	addAABB(CollisionHelper::getRotatedCollisionBox(region.getData(pos), 0.65F, 0.5F, 0.0F, 1.0F, 1.1F, 1.0F).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}

bool ToiletTile::use(Player& player, const BlockPos& pos) {
	return false;
}

int ToiletTile::getResource(Random& rand, int data, int idk) {
	return ToiletItem::_id;
}
