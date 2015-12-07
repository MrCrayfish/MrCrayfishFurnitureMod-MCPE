#pragma once

#include "MCPE/CommonTypes.h"
#include "BlockTickingQueue.h"
#include "BlockPos.h"
class Block;

class BlockSource {
public:
	Block* getBlock(const BlockPos&);
	Block* getBlock(int,int,int);
	FullBlock getBlockID(const BlockPos&);
	DataID getData(const BlockPos&);
	bool setBlockAndData(const BlockPos&, FullBlock, int);
	BlockTickingQueue* getTickQueue(BlockPos const&);
};
