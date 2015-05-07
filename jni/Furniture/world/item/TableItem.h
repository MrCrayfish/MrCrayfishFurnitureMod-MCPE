#pragma once

#include "PlaceableItem.h"
#include "../tile/TileTable.h"

class TableItem : public PlaceableItem {
public:
	static int _woodId;
	static int _stoneId;

	TableItem(int, std::string, bool);
};