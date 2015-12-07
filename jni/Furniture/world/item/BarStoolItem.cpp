#include "BarStoolItem.h"

int BarStoolItem::_id = 473;

BarStoolItem::BarStoolItem(int id) : PlaceableItem("itemBarStool", id, BarStoolTile::_id) {
	setIcon("itembarstool", 0);
}
