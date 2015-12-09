#pragma once

#include "../BlockRenderer.h"

class OvenRenderer : public BlockRenderer {
public:
	virtual void render(const BlockPos&, FurnitureTile&, BlockTessellator*);
};
