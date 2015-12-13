#pragma once

#include "PlaceableItem.h"
#include "../block/BinBlock.h"

class BinItem: public PlaceableItem {
public:
	static int _id;

	BinItem(int);
};