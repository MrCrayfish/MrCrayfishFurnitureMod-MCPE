#include "MicrowaveItem.h"

int MicrowaveItem::_id = 481;

MicrowaveItem::MicrowaveItem(int id) : PlaceableItem("itemMicrowave", id, MicrowaveBlock::_id) {
	setIcon("itemmicrowave", 0);
}
