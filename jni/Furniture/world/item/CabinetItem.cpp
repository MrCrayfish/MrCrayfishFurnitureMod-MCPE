#include "CabinetItem.h"

int CabinetItem::_id = 464;

CabinetItem::CabinetItem(int id) : PlaceableItem(id, CabinetTile::_id) {
	setNameID("cabinetItem");
	setIcon("cabinetItem", 0);
}
