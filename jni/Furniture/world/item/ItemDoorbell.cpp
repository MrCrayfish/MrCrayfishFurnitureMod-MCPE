#include "DoorbellItem.h"

int DoorbellItem::_id = 465;

DoorbellItem::DoorbellItem(int id, std::string tex) : PlaceableItem(id, DoorbellTile::_id) {
	setNameID(tex);
	setIcon(tex, 3);
}