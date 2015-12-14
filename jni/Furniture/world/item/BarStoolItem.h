#pragma once

#include "PlaceableItem.h"
#include "../block/BarStoolBlock.h"

class BarStoolItem : public PlaceableItem {
public:
    static int _id;

    BarStoolItem(int);
};
