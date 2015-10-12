#include "KitchenCabinetItem.h"

int KitchenCabinetItem::_id = 477;

KitchenCabinetItem::KitchenCabinetItem(int id) : PlaceableItem(id, KitchenCabinetTile::_id) {
	setNameID("kitchenCabinetItem");
	setIcon("itemkitchencabinet", 0);
}
