#include "PlaceableItem.h"

PlaceableItem::PlaceableItem(const std::string& name, int id, int placed) : FurnitureItem(name, id) {
	this->placed = placed;
}

bool PlaceableItem::useOn(ItemInstance* item, Player* player, int x, int y, int z, signed char side, float xx, float yy, float zz) {
	x += Facing::STEP_X[side];
	y += Facing::STEP_Y[side];
	z += Facing::STEP_Z[side];

	int data = 0;

	if((RotatableTile*)Block::mBlocks[placed])
	{	
		data = RotatableTile::getPlayerFacing(*player);
	}

	if(player->region.getBlockID({x, y, z}).id != 0) 
	{
		return false;
	}

	if(player->region.setBlockAndData({x, y, z}, {placed, data}, 2))
	{
		item->count--;
	}
	return true;
}
