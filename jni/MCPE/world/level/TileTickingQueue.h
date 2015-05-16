#pragma once

#include "MCPE/CommonTypes.h"
class TileSource;
class TilePos;

class TileTickingQueue {
	void add(TileSource*, const TilePos&, TileID, int);
};