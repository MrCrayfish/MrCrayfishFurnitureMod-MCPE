#pragma once

#include "PlaceableItem.h"
#include "../tile/ChairTile.h"

class ChairItem : public PlaceableItem {
public:
    static int _woodId;
    static int _stoneId;

    ChairItem(int, std::string, bool);
};