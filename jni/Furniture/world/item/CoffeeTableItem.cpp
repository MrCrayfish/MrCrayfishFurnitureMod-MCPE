#include "CoffeeTableItem.h"

int CoffeeTableItem::_woodId = 464;
int CoffeeTableItem::_stoneId = 465;

CoffeeTableItem::CoffeeTableItem(int id, std::string texture, ItemMaterial mat, int tileId) : PlaceableItem(id, tileId) {
	setNameID(texture);
	setIcon(texture, 0);
	this->material = mat;
}
