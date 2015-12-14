#pragma once

#include "Furniture/world/block/FurnitureBlock.h"
#include "MCPE/world/level/BlockSource.h"
#include "MCPE/client/renderer/block/BlockTessellator.h"
#include "MCPE/world/level/BlockPos.h"

#include <android/log.h>
#define  LOG_TAG    "FurnitureMod-MCPE" 
#define  ALOG(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)

class BlockRenderer {
public:
	static int const UP;
	static int const DOWN;
	static int const LEFT;
	static int const RIGHT;

	virtual void render(const BlockPos&, FurnitureBlock&, BlockTessellator*) = 0;

	void setRotatedBounds(BlockTessellator*, int, float, float, float, float, float, float);
	int getRelativeTileId(BlockSource*, int, int, int, int, int);
	int getRelativeRotation(BlockSource*, int, int, int, int, int);
	int getRelativeMetadata(BlockSource*, int, int, int, int, int);
};
