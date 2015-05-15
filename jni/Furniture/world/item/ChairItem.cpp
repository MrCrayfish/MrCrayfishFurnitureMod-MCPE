#include "ChairItem.h"

int ChairItem::_woodId = 462;
int ChairItem::_stoneId = 463;

ChairItem::ChairItem(int id, std::string texture, ItemMaterial mat, int tileId) : PlaceableItem(id, tileId) {
	setNameID(texture);
	setIcon(texture, 0);
	this->material = mat;
}
