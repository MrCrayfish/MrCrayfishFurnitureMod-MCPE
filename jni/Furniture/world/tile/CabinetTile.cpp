#include "CabinetTile.h"

int CabinetTile::_id = 220;

CabinetTile::CabinetTile(int id, Material const& material) : RotatableTile("blockCabinet", id, material) {
	Block::mLightBlock[id] = 0;
	
	setSoundType(Block::SOUND_WOOD);
	tex = getTextureUVCoordinateSet("planks", 2);
	secondary_tex = getTextureUVCoordinateSet("planks", 1);
	terciary_tex = getTextureUVCoordinateSet("iron_block", 0);
}

const TextureUVCoordinateSet& CabinetTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : (side == 1 ? secondary_tex : terciary_tex);
}

bool CabinetTile::use(Player& player, const BlockPos& pos) {
	return true;
}

int CabinetTile::getResource(Random& rand, int data, int idk) {
	return CabinetItem::_id;
}

bool CabinetTile::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(AABB(0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}
