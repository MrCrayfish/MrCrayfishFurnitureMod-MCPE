#pragma once

#include "../BlockRenderer.h"

class PlateRenderer : public BlockRenderer {
public:
	virtual void render(const TilePos&, FurnitureTile*, BlockTessellator*);
};
