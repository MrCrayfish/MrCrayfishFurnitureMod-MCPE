#pragma once

#include "../BlockRender.h"

class RenderChair : public BlockRender {
public:
	RenderChair();
	void render(TileTessellator*, TileSource*, FurnitureTiles*, const TilePos&);
};