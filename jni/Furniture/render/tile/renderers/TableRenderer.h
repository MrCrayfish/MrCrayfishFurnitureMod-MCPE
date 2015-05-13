#pragma once

#include "../BlockRenderer.h"

class TableRenderer : public BlockRenderer {
public:
	TableRenderer() : BlockRenderer() {};
	virtual void render(const TilePos&, FurnitureTile*, TileTessellator*);
};
