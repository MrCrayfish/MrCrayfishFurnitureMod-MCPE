#pragma once
#include "FurnitureItem.h"

class PlaceableItem : public FurnitureItem {
public:
	PlaceableItem(const std::string&, int, int);

	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);

private:
	int placed;
};
