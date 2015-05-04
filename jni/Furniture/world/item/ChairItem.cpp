#include "ChairItem.h"

int ChairItem::_woodId = 359;
int ChairItem::_stoneId = 360;

ChairItem::ChairItem(int id, std::string tex, bool isWood) : PlaceableItem(id, isWood? ChairTile::_woodId : ChairTile::_stoneId) {
	setNameID(tex);
	setIcon(tex, 0);
}