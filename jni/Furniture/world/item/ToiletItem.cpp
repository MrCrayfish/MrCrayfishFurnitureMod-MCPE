#include "ToiletItem.h"

int ToiletItem::_id = 480;

ToiletItem::ToiletItem(int id) : PlaceableItem("itemToilet", id, ToiletBlock::_id) {
	setIcon("itemtoilet", 0);
}
