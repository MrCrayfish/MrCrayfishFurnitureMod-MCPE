#include "PlateItem.h"

int PlateItem::_id = 480;

PlateItem::PlateItem(int id) : PlaceableItem("itemPlate", id, PlateTile::_id) {
	setIcon("itemplate", 0);
}
