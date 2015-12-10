#include "KitchenCabinetTile.h"

int KitchenCabinetTile::_id = 180;

KitchenCabinetTile::KitchenCabinetTile(int id, Material const& material) : RotatableTile("blockKitchenCabinet", id, material) {
	Block::mLightBlock[id] = 0;
	
	setSoundType(Block::SOUND_WOOD);
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stained_clay", 9);
	terciary_tex = getTextureUVCoordinateSet("stained_clay", 7);
}

const TextureUVCoordinateSet& KitchenCabinetTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : (side == 1 ? secondary_tex : terciary_tex);
}

bool KitchenCabinetTile::use(Player& player, const BlockPos& pos) {
	return true;
}

int KitchenCabinetTile::getResource(Random& rand, int data, int idk) {
	return KitchenCabinetItem::_id;
}

bool KitchenCabinetTile::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(AABB(0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}
