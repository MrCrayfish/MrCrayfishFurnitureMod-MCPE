#pragma once

#include "PlaceableItem.h"
#include "../block/CounterBlock.h"

class CounterItem : public PlaceableItem {
public:
    static int _id;

    CounterItem(int);
};
