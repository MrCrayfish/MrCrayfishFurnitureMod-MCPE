#pragma once

#include "../BlockRenderer.h"

class ChoppingBoardRenderer : public BlockRenderer {
public:
	virtual void render(const BlockPos&, FurnitureTile*, BlockTessellator*);
};
