#include "ToiletItem.h"

int ToiletItem::_id = 470;

ToiletItem::ToiletItem(int id, std::string tex) : PlaceableItem(id, TileToilet::_id) {
	setNameID(tex);
	setIcon(tex, 0);
}
