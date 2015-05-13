#pragma once

#include "../BlockRenderer.h"

class ChairRenderer : public BlockRenderer {
public:
	ChairRenderer() : BlockRenderer() {};
	virtual void render(const TilePos&, FurnitureTile*, TileTessellator*);
};
