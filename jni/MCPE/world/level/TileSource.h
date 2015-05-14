#pragma once

#include "MCPE/CommonTypes.h"
class Tile;

class TileSource {
public:
	FullTile getTile(int, int, int);
     Tile* getTilePtr(int, int, int);
	DataID getData(int, int, int);
	bool setTileAndData(int, int, int, FullTile, int);
};