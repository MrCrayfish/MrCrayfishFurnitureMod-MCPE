#include "TvItem.h"

int TvItem::_id = 478;

TvItem::TvItem(int id) : PlaceableItem("itemTv", id, TvBlock::_id) {
	setIcon("itemtv", 0);
}
