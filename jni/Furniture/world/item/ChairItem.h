#pragma once

#include "PlaceableItem.h"
#include "material/ItemMaterial.h"

class ChairItem : public PlaceableItem {
public:
	static int _woodId;
	static int _stoneId;

	ChairItem(int, std::string, std::string, ItemMaterial, int);

	ItemMaterial material;
};