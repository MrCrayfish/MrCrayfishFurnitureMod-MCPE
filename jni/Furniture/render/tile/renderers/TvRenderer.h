#pragma once

#include "../BlockRenderer.h"

class TvRenderer : public BlockRenderer {
public:
	  virtual void render(const BlockPos&, FurnitureTile&, BlockTessellator*);
};