#include "CounterItem.h"

int CounterItem::_id = 473;

CounterItem::CounterItem(int id) : PlaceableItem(id, CounterTile::_id) {
	setNameID("counterItem");
	setIcon("choppingBoardItem", 0);
}