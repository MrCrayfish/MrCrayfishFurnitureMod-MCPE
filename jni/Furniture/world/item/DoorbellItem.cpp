#include "DoorbellItem.h"

int DoorbellItem::_id = 475;

DoorbellItem::DoorbellItem(int id) : PlaceableItem("itemDoorbell", id, DoorbellTile::_id) {
	setIcon("itemdoorbell", 0);
}
