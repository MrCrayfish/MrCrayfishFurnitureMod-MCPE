#pragma once

#include "MCPE/CommonTypes.h"
#include "BlockTickingQueue.h"
#include "BlockPos.h"
class Block;
class BlockEntity;
class Level;
class Material;

class BlockSource {
public:
	Level* getLevel() const;
	Block* getBlock(const BlockPos&);
	FullBlock getBlockID(const BlockPos&);
	DataID getData(const BlockPos&);
	Material& getMaterial(const BlockPos&);
	bool setBlockAndData(const BlockPos&, FullBlock, int);
	void removeBlock(const BlockPos&);
	BlockEntity* getBlockEntity(const BlockPos&);
	BlockTickingQueue* getTickQueue(BlockPos const&);
};