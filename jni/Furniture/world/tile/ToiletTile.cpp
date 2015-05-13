#include "ToiletTile.h"

int ToiletTile::_id = 210;

ToiletTile::ToiletTile(int id, Material const* material) : FurnitureTile(id, material) {
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;

	setNameId("toiletTile");
	setSoundType(Tile::SOUND_STONE);
	setDestroyTime(1.0F);
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	stone_tex = getTextureUVCoordinateSet("stone", 0);
	water_tex = getTextureUVCoordinateSet("still_water", 0);
}

void ToiletTile::addAABBs(TileSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>& pool) {
	addAABB(AABB(0.0F, 0.0F, 0.0F, 1.0F, 0.6F, 1.0F).move(x, y, z), posAABB, pool);
	addAABB(AABB(0.6F, 0.6F, 0.0F, 1.0F, 1.1F, 1.0F).move(x, y, z), posAABB, pool); // TODO: Rotate back AABB
}

const TextureUVCoordinateSet& ToiletTile::getTexture(signed char side, int data) {
	switch(side) {
	case 0:
		return tex;
	case 1:
		return stone_tex;
	case 2:
		return water_tex;
	}
}

bool ToiletTile::use(Player* player, int x, int y, int z) {
	return false;
}

int ToiletTile::getResource(int data, Random* rand) {
	return ToiletItem::_id;
}
