#include "../../util/SitOnBlockUtil.h"

#include "ChairBlock.h"

int ChairBlock::_woodId = 202;
int ChairBlock::_stoneId = 203;

ChairBlock::ChairBlock(int id, std::string name, FurnitureBlockAttributes attributes, int item) : RotatableBlock("blockChair", id, attributes.realMaterial) {
	setSolid(false);

	setSoundType(attributes.sounds);
	setDestroyTime(attributes.hardness);
	tex = attributes.primary_tex;
	secondary_tex = attributes.secondary_tex;
	this->droppedItem = item;
}

bool ChairBlock::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(AABB(0.1F, 0.0F, 0.1F, 0.9F, 0.6F, 0.9F).move(pos.x, pos.y, pos.z), posAABB, pool);
	addAABB(CollisionHelper::getRotatedCollisionBox(region.getData(pos), 0.825F, 0.6F, 0.1F, 0.9F, 1.2F, 0.9F).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}

const TextureUVCoordinateSet& ChairBlock::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool ChairBlock::use(Player& player, const BlockPos& pos) {
	return SitOnBlockUtil::sit(player.region, pos, player, 7 * 0.0625);
}

int ChairBlock::getResource(Random& rand, int data, int idk) {
	return droppedItem;
}
