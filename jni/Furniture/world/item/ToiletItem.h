#pragma once

#include "PlaceableItem.h"
#include "../tile/ToiletTile.h"

class ToiletItem : public PlaceableItem {
public:
    static int _id;

    ToiletItem(int);
};