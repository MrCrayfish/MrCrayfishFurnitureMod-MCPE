#include "BinItem.h"

int BinItem::_id = 476;

BinItem::BinItem(int id) : PlaceableItem("itemBin", id, BinBlock::_id) {
	setIcon("itembin", 0);
}
