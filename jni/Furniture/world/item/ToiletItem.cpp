#include "ToiletItem.h"

int ToiletItem::_id = 470;

ToiletItem::ToiletItem(int id) : PlaceableItem(id, ToiletTile::_id) {
	setNameID("toiletItem");
	setIcon("itemtoilet", 0);
}
