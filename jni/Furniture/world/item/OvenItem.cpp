#include "OvenItem.h"

int OvenItem::_id = 479;

OvenItem::OvenItem(int id) : PlaceableItem(id, OvenTile::_id) {
	setNameID("ovenItem");
	setIcon("itemoven", 0); 
}
