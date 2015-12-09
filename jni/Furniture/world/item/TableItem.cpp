#include "TableItem.h"

int TableItem::_woodId = 470;
int TableItem::_stoneId = 471;

TableItem::TableItem(int id, std::string texture, ItemMaterial mat, int tileId) : PlaceableItem(texture, id, tileId) {
	setIcon(texture, 0);
	this->material = mat;
}
