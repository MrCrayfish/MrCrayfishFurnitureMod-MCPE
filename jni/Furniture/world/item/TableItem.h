#pragma once

#include "PlaceableItem.h"
#include "material/ItemMaterial.h"

class TableItem : public PlaceableItem {
public:
	static int _woodId;
	static int _stoneId;

	TableItem(int, std::string, std::string, ItemMaterial, int);

	ItemMaterial material;
};