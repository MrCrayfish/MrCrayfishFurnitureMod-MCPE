#pragma once

#include "PlaceableItem.h"
#include "../block/ToiletBlock.h"

class ToiletItem : public PlaceableItem {
public:
    static int _id;

    ToiletItem(int);
};