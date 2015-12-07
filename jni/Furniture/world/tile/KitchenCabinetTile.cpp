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

bool KitchenCabinetTile::use(Player* player, int x, int y, int z) {
	return true;
}

int KitchenCabinetTile::getResource(int data, Random* rand) {
	return KitchenCabinetItem::_id;
}

void KitchenCabinetTile::addAABBs(BlockSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>& pool) {
	addAABB(AABB(0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F).move(x, y, z), posAABB, pool);
}
