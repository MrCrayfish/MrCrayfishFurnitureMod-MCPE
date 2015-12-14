#pragma once

#include "PlaceableItem.h"
#include "../tile/TvTile.h"

class TvItem : public PlaceableItem {
public:
    static int _id;

    TvItem(int);
};