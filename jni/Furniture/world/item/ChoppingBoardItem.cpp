#include "ChoppingBoardItem.h"

int ChoppingBoardItem::_id = 478;

ChoppingBoardItem::ChoppingBoardItem(int id) : PlaceableItem("itemChoppingBoard", id, ChoppingBoardBlock::_id) {
	setIcon("itemchoppingboard", 0);
}
