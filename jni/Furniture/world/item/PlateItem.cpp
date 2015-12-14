#include "PlateItem.h"

int PlateItem::_id = 490;

PlateItem::PlateItem(int id) : PlaceableItem("itemPlate", id, PlateBlock::_id) {
	setIcon("itemplate", 0);
}
