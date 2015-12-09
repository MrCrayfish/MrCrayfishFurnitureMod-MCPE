#include "CoffeeTableItem.h"

int CoffeeTableItem::_woodId = 474;
int CoffeeTableItem::_stoneId = 475;

CoffeeTableItem::CoffeeTableItem(int id, std::string texture, ItemMaterial mat, int tileId) : PlaceableItem(texture, id, tileId) {
	setIcon(texture, 0);
	this->material = mat;
}
