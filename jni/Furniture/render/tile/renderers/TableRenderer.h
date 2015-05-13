#pragma once

#include "../BlockRenderer.h"

class TableRenderer : public BlockRenderer {
public:
	virtual void render(const TilePos&, FurnitureTile*, TileTessellator*);
};
