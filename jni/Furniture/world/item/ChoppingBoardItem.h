#pragma once

#include "PlaceableItem.h"
#include "../block/ChoppingBoardBlock.h"

class ChoppingBoardItem : public PlaceableItem {
public:
    static int _id;

    ChoppingBoardItem(int);
};