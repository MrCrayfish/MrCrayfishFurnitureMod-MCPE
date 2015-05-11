#pragma once

#include "PlaceableItem.h"
#include "../tile/TileToilet.h"

class ToiletItem : public PlaceableItem {
public:
    static int _id;

    ToiletItem(int, std::string);
};