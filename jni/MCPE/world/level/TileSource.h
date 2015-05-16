#pragma once

#include "MCPE/CommonTypes.h"
#include "TileTickingQueue.h"
class Tile;
class TileSource;

class TileSource {
public:
	FullTile getTile(int, int, int);
	Tile* getTilePtr(int, int, int);
	DataID getData(int, int, int);
	bool setTileAndData(int, int, int, FullTile, int);
	TileTickingQueue* getTickQueue(TilePos const&);
};