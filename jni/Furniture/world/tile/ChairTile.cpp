#include "ChairTile.h"

int ChairTile::_woodId = 202;
int ChairTile::_stoneId = 203;

ChairTile::ChairTile(int id, std::string name, FurnitureTileAttributes attributes, int item) : RotatableTile("blockChair", id, attributes.realMaterial) {
	setSolid(false);

	setSoundType(attributes.sounds);
	setDestroyTime(attributes.hardness);
	tex = attributes.primary_tex;
	secondary_tex = attributes.secondary_tex;
	this->droppedItem = item;
}

bool ChairTile::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(AABB(0.1F, 0.0F, 0.1F, 0.9F, 0.6F, 0.9F).move(pos.x, pos.y, pos.z), posAABB, pool);
	addAABB(CollisionHelper::getRotatedCollisionBox(region.getData(pos), 0.825F, 0.6F, 0.1F, 0.9F, 1.2F, 0.9F).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}

const TextureUVCoordinateSet& ChairTile::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool ChairTile::use(Player& player, const BlockPos& pos) {
	return false;
}

int ChairTile::getResource(Random& rand, int data, int idk) {
	return droppedItem;
}
