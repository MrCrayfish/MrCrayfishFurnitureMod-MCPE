#include "PlaceableItem.h"

PlaceableItem::PlaceableItem(const std::string& name, int id, int placed) : FurnitureItem(name, id) {
	this->placed = placed;
}

bool PlaceableItem::useOn(ItemInstance* item, Player* player, int x, int y, int z, signed char side, float xx, float yy, float zz) {
	x += Facing::STEP_X[side];
	y += Facing::STEP_Y[side];
	z += Facing::STEP_Z[side];

	if(player->region.getBlock(*new BlockPos(x, y, z)).id != 0) return false;
	player->region.setBlockAndData(*new BlockPos(x, y, z), {placed, 0}, 3);
	//player->region.setTileAndData(x, y, z, {placed, Block::mOwnedBlocks[placed]->getPlacementDataValue(player, x, y, z, side, xx, yy, zz, 0)}, 3);
	item->count--;
	return true; // return true so that the player swings his arm
}
