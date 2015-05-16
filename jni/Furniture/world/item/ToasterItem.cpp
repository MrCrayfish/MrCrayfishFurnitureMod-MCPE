#include "ToasterItem.h"

int ToasterItem::_id = 469;

ToasterItem::ToasterItem(int id) : PlaceableItem(id, ToasterTile::_id) {
	setNameID("choppingBoardItem");
	setIcon("choppingBoardItem", 0);
}