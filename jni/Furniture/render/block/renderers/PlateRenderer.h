#pragma once

#include "../BlockRenderer.h"

class PlateRenderer : public BlockRenderer {
public:
	virtual void render(const BlockPos&, FurnitureBlock&, BlockTessellator*);
};
