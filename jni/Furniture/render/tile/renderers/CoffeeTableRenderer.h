#pragma once

#include "../BlockRenderer.h"

class CoffeeTableRenderer : public BlockRenderer {
public:
	virtual void render(const BlockPos&, FurnitureTile&, BlockTessellator*);
};
