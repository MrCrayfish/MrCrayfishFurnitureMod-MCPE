#pragma once

#include "../BlockRenderer.h"

class ToiletRenderer : public BlockRenderer {
public:
	virtual void render(const BlockPos&, FurnitureTile&, BlockTessellator*);
};
