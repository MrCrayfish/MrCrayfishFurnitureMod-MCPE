#include "BinItem.h"

int BinItem::_id = 466;

BinItem::BinItem(int id) : PlaceableItem("itemBin", id, BinTile::_id) {
	setIcon("itembin", 0);
}
