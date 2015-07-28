#include "PlateItem.h"

int PlateItem::_id = 480;

PlateItem::PlateItem(int id) : PlaceableItem(id, PlateTile::_id) {
	setNameID("plateItem");
	setIcon("itemplate", 0);
}
