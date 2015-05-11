#pragma once

#include "../BlockRender.h"

class RenderToilet : public BlockRender {
public:
	RenderToilet();
	void render(TileTessellator*, TileSource*, FurnitureTiles*, const TilePos&);
};