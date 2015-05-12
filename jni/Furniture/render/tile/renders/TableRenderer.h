#pragma once

#include "../BlockRenderer.h"

class TableRenderer : public BlockRenderer {
public:
	TableRenderer() : BlockRenderer() {};
	virtual void render(TileTessellator*, TileSource*, FurnitureTile*, const TilePos&);
};
