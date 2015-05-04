#pragma once

#include "TableTile.h"

class WoodenTableTile : public TableTile {
public:
    WoodenTableTile(int);

    virtual bool isWood();
};
