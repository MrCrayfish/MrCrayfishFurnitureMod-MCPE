#pragma once

#include "../BlockRenderer.h"
#include "Furniture/world/tile/CounterTile.h"

class CounterRenderer : public BlockRenderer {
public:
	virtual void render(const BlockPos&, FurnitureTile&, BlockTessellator*);
};
