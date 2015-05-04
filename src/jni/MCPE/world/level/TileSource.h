#pragma once

#include "MCPE/CommonTypes.h"

class TileSource {
public:
	FullTile getTile(int, int, int);
	DataID getData(int, int, int);
	bool setTileAndData(int, int, int, FullTile, int);
};