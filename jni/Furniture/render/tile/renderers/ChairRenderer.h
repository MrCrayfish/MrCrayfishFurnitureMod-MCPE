#pragma once

#include "../BlockRenderer.h"

class ChairRenderer : public BlockRenderer {
public:
	ChairRenderer() : BlockRenderer() {};
	virtual void render(TileTessellator*, TileSource*, FurnitureTile*, const TilePos&);
};
