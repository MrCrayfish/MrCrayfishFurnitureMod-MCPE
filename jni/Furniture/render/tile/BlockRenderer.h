#pragma once

#include "Furniture/world/tile/FurnitureTile.h"
#include "MCPE/world/level/BlockSource.h"
#include "MCPE/client/renderer/block/BlockTessellator.h"
#include "MCPE/world/level/BlockPos.h"

class BlockRenderer {
public:
	static int const UP;
	static int const DOWN;
	static int const LEFT;
	static int const RIGHT;

	virtual void render(const BlockPos&, FurnitureTile*, BlockTessellator*) = 0;

	void setRotatedBounds(BlockTessellator*, int, float, float, float, float, float, float);
	int getRelativeTileId(BlockSource*, int, int, int, int, int);
	int getRelativeRotation(BlockSource*, int, int, int, int, int);
	int getRelativeMetadata(BlockSource*, int, int, int, int, int);
};
