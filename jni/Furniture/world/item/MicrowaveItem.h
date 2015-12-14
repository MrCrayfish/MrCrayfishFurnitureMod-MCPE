#pragma once

#include "PlaceableItem.h"
#include "../block/MicrowaveBlock.h"

class MicrowaveItem : public PlaceableItem {
public:
    static int _id;

    MicrowaveItem(int);
};