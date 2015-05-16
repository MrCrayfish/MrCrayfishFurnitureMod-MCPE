#include "MicrowaveItem.h"

int MicrowaveItem::_id = 465;

MicrowaveItem::MicrowaveItem(int id) : PlaceableItem(id, MicrowaveTile::_id) {
	setNameID("choppingBoardItem");
	setIcon("choppingBoardItem", 0);
}