#include "ChairTile.h"

int ChairTile::_woodId = 202;
int ChairTile::_stoneId = 203;

ChairTile::ChairTile(int id, std::string name, FurnitureTileAttributes attributes, int item) : RotatableTile(id, attributes.realMaterial) {
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;

	setNameId(name);
	setSoundType(attributes.sounds);
	setDestroyTime(attributes.hardness);
	tex = attributes.primary_tex;
	secondary_tex = attributes.secondary_tex;
	this->droppedItem = item;
}

void ChairTile::addAABBs(TileSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>& pool) {
	addAABB(AABB(0.1F, 0.0F, 0.1F, 0.9F, 0.6F, 0.9F).move(x, y, z), posAABB, pool);
	addAABB(CollisionHelper::getRotatedCollisionBox(region->getData(x, y, z), 0.825F, 0.6F, 0.1F, 0.9F, 1.2F, 0.9F).move(x, y, z), posAABB, pool);
}

const TextureUVCoordinateSet& ChairTile::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool ChairTile::use(Player* player, int x, int y, int z) {
	return false;
}

int ChairTile::getResource(int data, Random* rand) {
	return droppedItem;
}