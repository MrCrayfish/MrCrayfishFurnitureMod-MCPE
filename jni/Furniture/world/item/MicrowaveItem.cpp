#include "MicrowaveItem.h"

int MicrowaveItem::_id = 471;

MicrowaveItem::MicrowaveItem(int id) : PlaceableItem("itemMicrowave", id, MicrowaveTile::_id) {
	setIcon("itemmicrowave", 0);
}
