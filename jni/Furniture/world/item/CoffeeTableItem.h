#pragma once

#include "PlaceableItem.h"
#include "material/ItemMaterial.h"

class CoffeeTableItem : public PlaceableItem {
public:
	static int _woodId;
	static int _stoneId;

	CoffeeTableItem(int, std::string, ItemMaterial, int);

	ItemMaterial material;
};