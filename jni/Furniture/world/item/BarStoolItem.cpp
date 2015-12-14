#include "BarStoolItem.h"

int BarStoolItem::_id = 483;

BarStoolItem::BarStoolItem(int id) : PlaceableItem("itemBarStool", id, BarStoolBlock::_id) {
	setIcon("itembarstool", 0);
}
