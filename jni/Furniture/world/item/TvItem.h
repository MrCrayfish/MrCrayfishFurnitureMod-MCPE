#pragma once

#include "PlaceableItem.h"
#include "../block/TvBlock.h"

class TvItem : public PlaceableItem {
public:
    static int _id;

    TvItem(int);
};