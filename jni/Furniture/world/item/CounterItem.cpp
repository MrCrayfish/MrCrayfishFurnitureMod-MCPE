#include "CounterItem.h"

int CounterItem::_id = 474;

CounterItem::CounterItem(int id) : PlaceableItem("itemCounter", id, CounterTile::_id) {
	setIcon("itemkitchencounter", 0);
}
