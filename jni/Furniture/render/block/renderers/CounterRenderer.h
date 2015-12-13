#pragma once

#include "../BlockRenderer.h"
#include "Furniture/world/block/CounterBlock.h"

class CounterRenderer : public BlockRenderer {
public:
	virtual void render(const BlockPos&, FurnitureBlock&, BlockTessellator*);
};
