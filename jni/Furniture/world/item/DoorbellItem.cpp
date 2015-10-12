#include "DoorbellItem.h"

int DoorbellItem::_id = 475;

DoorbellItem::DoorbellItem(int id) : PlaceableItem(id, DoorbellTile::_id) {
	setNameID("doorbellItem");
	setIcon("itemdoorbell", 0);
}
