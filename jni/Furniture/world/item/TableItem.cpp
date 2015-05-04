#include "TableItem.h"

int TableItem::_woodId = 356;
int TableItem::_stoneId = 358;

TableItem::TableItem(int id, std::string tex, bool isWood) : PlaceableItem(id, isWood? TableTile::_woodId : TableTile::_stoneId) {
	setNameID(tex);
	setIcon(tex, 0);
}