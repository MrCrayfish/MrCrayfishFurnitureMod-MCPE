#pragma once

#include "PlaceableItem.h"
#include "../block/CabinetBlock.h"

class CabinetItem : public PlaceableItem {
public:
    static int _id;

    CabinetItem(int);
};
