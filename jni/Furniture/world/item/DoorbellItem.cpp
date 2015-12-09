#include "DoorbellItem.h"

int DoorbellItem::_id = 485;

DoorbellItem::DoorbellItem(int id) : PlaceableItem("itemDoorbell", id, DoorbellTile::_id) {
	setIcon("itemdoorbell", 0);
}
