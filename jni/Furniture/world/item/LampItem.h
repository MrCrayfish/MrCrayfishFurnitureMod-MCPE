#pragma once

#include "PlaceableItem.h"
#include "../block/LampBlock.h"

class LampItem: public PlaceableItem {
public:
    static int _id;

    LampItem(int);
};