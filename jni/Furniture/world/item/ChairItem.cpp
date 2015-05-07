#include "ChairItem.h"

int ChairItem::_woodId = 462;
int ChairItem::_stoneId = 463;

ChairItem::ChairItem(int id, std::string tex, bool isWood) : PlaceableItem(id, isWood? TileChair::_woodId : TileChair::_stoneId) {
	setNameID(tex);
	setIcon(tex, 0);
}
