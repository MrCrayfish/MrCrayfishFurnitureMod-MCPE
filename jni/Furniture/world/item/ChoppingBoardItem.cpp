#include "ChoppingBoardItem.h"

int ChoppingBoardItem::_id = 468;

ChoppingBoardItem::ChoppingBoardItem(int id) : PlaceableItem(id, ChoppingBoardTile::_id) {
	setNameID("choppingBoardItem");
	setIcon("itemchoppingboard", 0);
}
