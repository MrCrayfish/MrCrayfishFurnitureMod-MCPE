#include "CabinetItem.h"

int CabinetItem::_id = 486;

CabinetItem::CabinetItem(int id) : PlaceableItem("itemCabinet", id, CabinetBlock::_id) {
	setIcon("itemcabinet", 0);
}
