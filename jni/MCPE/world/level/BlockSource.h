#pragma once

#include "MCPE/CommonTypes.h"
#include "BlockTickingQueue.h"
#include "BlockPos.h"
class Block;

class BlockSource {
public:
	FullTile getTile(int, int, int);
	Block* getTilePtr(int, int, int);
	DataID getData(int, int, int);
	bool setTileAndData(int, int, int, FullTile, int);
	BlockTickingQueue* getTickQueue(BlockPos const&);
};