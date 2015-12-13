#pragma once

#include "PlaceableItem.h"
#include "../block/PlateBlock.h"

class PlateItem: public PlaceableItem {
public:
    static int _id;
	
    PlateItem(int);
};
