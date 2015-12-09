#include "ChairItem.h"

int ChairItem::_woodId = 472;
int ChairItem::_stoneId = 473;

ChairItem::ChairItem(int id, std::string texture, ItemMaterial mat, int tileId) : PlaceableItem(texture, id, tileId) {
	setIcon(texture, 0);
	this->material = mat;
}
