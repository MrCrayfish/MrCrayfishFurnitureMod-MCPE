#pragma once

#include "PlaceableItem.h"
#include "../tile/KitchenCabinetTile.h"

class KitchenCabinetItem : public PlaceableItem {
public:
    static int _id;

    KitchenCabinetItem(int);
};
