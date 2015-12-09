#include "ToiletItem.h"

int ToiletItem::_id = 480;

ToiletItem::ToiletItem(int id) : PlaceableItem("itemToilet", id, 1) {
	setIcon("itemtoilet", 0);
}
