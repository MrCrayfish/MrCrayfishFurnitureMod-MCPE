#pragma once

#include "PlaceableItem.h"
#include "../block/KitchenCabinetBlock.h"

class KitchenCabinetItem : public PlaceableItem {
public:
    static int _id;

    KitchenCabinetItem(int);
};
