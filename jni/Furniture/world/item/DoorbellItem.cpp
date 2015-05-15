#include "DoorbellItem.h"

int DoorbellItem::_id = 465;

DoorbellItem::DoorbellItem(int id) : PlaceableItem(id, DoorbellTile::_id) {
	setNameID("doorbellItem");
	setIcon("doorbellItem", 0);
}