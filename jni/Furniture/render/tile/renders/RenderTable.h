#pragma once

#include "../BlockRender.h"

class RenderTable : public BlockRender {
public:
	RenderTable();
	void render(TileTessellator*, TileSource*, FurnitureTiles*, const TilePos&);
};