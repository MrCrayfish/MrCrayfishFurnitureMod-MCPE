#include "ToiletTile.h"

int ToiletTile::_id = 210;

ToiletTile::ToiletTile(int id, Material const* material) : FurnitureTile(id, material) {
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;

	setNameId("toiletTile");
	setSoundType(Tile::SOUND_STONE);
	setDestroyTime(1.0F);
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stone", 0);
}

void ToiletTile::addAABBs(TileSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>& pool) {
	addAABB(AABB(0.0F, 0.0F, 0.0F, 1.0F, 0.6F, 1.0F), posAABB, pool);
	addAABB(AABB(0.6F, 0.6F, 0.0F, 1.0F, 1.1F, 1.0F), posAABB, pool); // TODO: Rotate back AABB
}

const TextureUVCoordinateSet& ToiletTile::getTexture(signed char side, int data) {
	return (side == 0)? tex : secondary_tex;
}

bool ToiletTile::use(Player* player, int x, int y, int z) {
	return false;
}

int ToiletTile::getResource(int data, Random* rand) {
	return ToiletItem::_id;
}
