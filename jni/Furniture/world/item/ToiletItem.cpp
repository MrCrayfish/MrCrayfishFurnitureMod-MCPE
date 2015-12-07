#include "ToiletItem.h"

int ToiletItem::_id = 470;

ToiletItem::ToiletItem(int id) : PlaceableItem("itemToilet", id, ToiletTile::_id) {
	setIcon("itemtoilet", 0);
}
