#include "PlaceableItem.h"

#include "../block/RotatableBlock.h";
#include "MCPE/world/level/block/Block.h"
#include "MCPE/world/Facing.h"
#include "MCPE/world/entity/player/Player.h"
#include "MCPE/world/level/BlockSource.h"
#include "MCPE/world/item/ItemInstance.h"

PlaceableItem::PlaceableItem(const std::string& name, int id, int placed) : FurnitureItem(name, id) {
	this->placed = placed;
}

bool PlaceableItem::useOn(ItemInstance* item, Player* player, int x, int y, int z, signed char side, float xx, float yy, float zz) {
	x += Facing::STEP_X[side];
	y += Facing::STEP_Y[side];
	z += Facing::STEP_Z[side];

	int data = 0;
	
	EntityList& entities = player->region.getEntities(NULL, AABB(0, 0, 0, 1, 1, 1).move(x, y, z));
	for(Entity* e : entities) {
		EntityType type = e->getEntityTypeId();
		if(type != EntityType::ARROW && type != EntityType::ITEM)
			return false;
	}

	if((RotatableBlock*)Block::mBlocks[placed])
	{	
		data = RotatableBlock::getPlayerFacing(*player);
	}
	
	if(player->region.getBlockID({x, y, z}).id != 0) 
	{
		return false;
	}

	if(player->region.setBlockAndData({x, y, z}, {placed, data}, 2))
	{
		item--;
	}
	return true;
}
