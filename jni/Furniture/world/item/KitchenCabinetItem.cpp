#include "KitchenCabinetItem.h"

int KitchenCabinetItem::_id = 487;

KitchenCabinetItem::KitchenCabinetItem(int id) : PlaceableItem("itemKitchenCabinet", id, KitchenCabinetTile::_id) {
	setIcon("itemkitchencabinet", 0);
}
