#include "PlaceableItem.h"

PlaceableItem::PlaceableItem(int id, int placed) : FurnitureItem(id) {
	this->placed = placed;
}

bool PlaceableItem::useOn(ItemInstance* item, Player* player, int x, int y, int z, signed char side, float xx, float yy, float zz) {
	if(player->region.getTile(x + Facing::STEP_X[side], y + Facing::STEP_Y[side], z + Facing::STEP_Z[side]).id != 0) return false;
	player->region.setTileAndData(x + Facing::STEP_X[side], y + Facing::STEP_Y[side], z + Facing::STEP_Z[side], {placed, 0}, 3);
	item->count--;
	return true; // return true so that the player swings his arm
}