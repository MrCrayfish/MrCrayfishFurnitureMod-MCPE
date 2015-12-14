#include "CounterItem.h"

int CounterItem::_id = 484;

CounterItem::CounterItem(int id) : PlaceableItem("itemCounter", id, CounterBlock::_id) {
	setIcon("itemkitchencounter", 0);
}
