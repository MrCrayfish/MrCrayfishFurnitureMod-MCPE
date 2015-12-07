#include "OvenItem.h"

int OvenItem::_id = 479;

OvenItem::OvenItem(int id) : PlaceableItem("itemOven", id, OvenTile::_id) {
	setIcon("itemoven", 0); 
}
