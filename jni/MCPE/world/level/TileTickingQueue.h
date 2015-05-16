#pragma once

#include "MCPE/CommonTypes.h"
class TileSource;
class TilePos;

class TileTickingQueue {
public:
	void add(TileSource*, const TilePos&, TileID, int);
};