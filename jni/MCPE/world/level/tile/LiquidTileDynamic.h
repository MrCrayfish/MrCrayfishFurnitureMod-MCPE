#pragma once

class LiquidTileDynamic : public Block {
public:
	bool _isWaterBlocking(BlockSource*, const BlockPos&);
};