#pragma once

#include "../BlockRenderer.h"

class ToiletRenderer : public BlockRenderer {
public:
	ToiletRenderer() : BlockRenderer() {};
	virtual void render(TileTessellator*, TileSource*, FurnitureTile*, const TilePos&);
};
