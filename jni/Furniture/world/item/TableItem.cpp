#include "TableItem.h"

int TableItem::_woodId = 460;
int TableItem::_stoneId = 461;

TableItem::TableItem(int id, std::string texture, ItemMaterial mat, int tileId) : PlaceableItem(id, tileId) {
	setNameID(texture);
	setIcon(texture, 0);
	this->material = mat;
}
