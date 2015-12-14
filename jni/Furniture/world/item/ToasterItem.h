#pragma once

#include "PlaceableItem.h"
#include "../block/ToasterBlock.h"

class ToasterItem : public PlaceableItem {
public:
    static int _id;

    ToasterItem(int);
};