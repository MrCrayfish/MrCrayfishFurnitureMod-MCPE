#pragma once

#include "PlaceableItem.h"
#include "../block/DoorbellBlock.h"

class DoorbellItem : public PlaceableItem {
public:
    static int _id;

    DoorbellItem(int);
};