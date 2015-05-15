#pragma once

#include "PlaceableItem.h"
#include "../tile/DoorbellTile.h"

class DoorbellItem : public PlaceableItem {
public:
    static int _id;

    DoorbellItem(int);
};