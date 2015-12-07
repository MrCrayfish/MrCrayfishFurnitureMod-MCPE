#pragma once

#include "Item.h"

class BlockItem : public Item {
public:
	char filler_tileitem[12];

	BlockItem(std::string const&, int);
};