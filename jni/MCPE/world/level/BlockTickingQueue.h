#pragma once

#include "MCPE/CommonTypes.h"
class BlockSource;
class BlockPos;

class BlockTickingQueue {
public:
	void add(BlockSource&, const BlockPos&, BlockID, int);
};