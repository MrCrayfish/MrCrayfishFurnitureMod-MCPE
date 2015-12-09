#include "BinItem.h"

int BinItem::_id = 476;

BinItem::BinItem(int id) : PlaceableItem("itemBin", id, BinTile::_id) {
	setIcon("itembin", 0);
}
