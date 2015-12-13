#include "DoorbellItem.h"

int DoorbellItem::_id = 485;

DoorbellItem::DoorbellItem(int id) : PlaceableItem("itemDoorbell", id, DoorbellBlock::_id) {
	setIcon("itemdoorbell", 0);
}
