#include "KitchenCabinetItem.h"

int KitchenCabinetItem::_id = 490;

KitchenCabinetItem::KitchenCabinetItem(int id) : PlaceableItem(id, KitchenCabinetTile::_id) {
	setNameID("kitchenCabinetItem");
	setIcon("apple", 0);
}