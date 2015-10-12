#pragma once

#include "PlaceableItem.h"
#include "../tile/PlateTile.h"

class PlateItem: public PlaceableItem {
public:
    static int _id;
	
    PlateItem(int);
};
