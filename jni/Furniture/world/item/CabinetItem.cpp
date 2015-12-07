#include "CabinetItem.h"

int CabinetItem::_id = 476;

CabinetItem::CabinetItem(int id) : PlaceableItem("itemCabinet", id, CabinetTile::_id) {
	setIcon("itemcabinet", 0);
}
