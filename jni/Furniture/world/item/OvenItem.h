#pragma once

#include "PlaceableItem.h"
#include "../block/OvenBlock.h"

class OvenItem: public PlaceableItem {
public:
        static int _id;

        OvenItem(int);
};
