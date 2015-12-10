#pragma once

class LiquidBlockDynamic : public Block {
public:
	bool _isWaterBlocking(BlockSource&, const BlockPos&);
};