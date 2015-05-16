#include "ToasterItem.h"

int ToasterItem::_id = 465;

ToasterItem::ToasterItem(int id) : PlaceableItem(id, ToasterTile::_id) {
	setNameID("choppingBoardItem");
	setIcon("choppingBoardItem", 0);
}