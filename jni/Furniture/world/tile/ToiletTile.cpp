#include "ToiletTile.h"

int ToiletTile::_id = 210;

ToiletTile::ToiletTile(int id, Material const& material) : RotatableTile("blockToilet", id, material) {
	Block::mSolid[id] = false;
	Block::mLightBlock[id] = 0;

	
	setSoundType(Block::SOUND_STONE);
	setDestroyTime(1.0F);
	tex = getTextureUVCoordinateSet("quartz_block", 0);
}

void ToiletTile::addAABBs(BlockSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>& pool) {
	addAABB(AABB(0.0F, 0.0F, 0.0F, 1.0F, 0.5F, 1.0F).move(x, y, z), posAABB, pool);
	addAABB(CollisionHelper::getRotatedCollisionBox(region->getData(*new BlockPos(x, y, z)), 0.65F, 0.5F, 0.0F, 1.0F, 1.1F, 1.0F).move(x, y, z), posAABB, pool);
}

bool ToiletTile::use(Player* player, int x, int y, int z) {
	return false;
}

int ToiletTile::getResource(int data, Random* rand) {
	return ToiletItem::_id;
}
