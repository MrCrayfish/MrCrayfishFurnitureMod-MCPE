#include "OvenItem.h"

int OvenItem::_id = 489;

OvenItem::OvenItem(int id) : PlaceableItem("itemOven", id, OvenTile::_id) {
	setIcon("itemoven", 0); 
}
