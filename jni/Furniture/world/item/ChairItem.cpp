#include "ChairItem.h"

int ChairItem::_woodId = 462;
int ChairItem::_stoneId = 463;

ChairItem::ChairItem(int id, std::string name, std::string texture, ItemMaterial mat, int tileId) : PlaceableItem(id, tileId) {
	setNameID(name);
	setIcon(texture, 0);
	this->material = mat;
}
