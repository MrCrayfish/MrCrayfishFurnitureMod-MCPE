#pragma once

#include "../BlockRender.h"

class RenderTable : public BlockRender {
public:
	RenderTable();
	virtual void render(TileTessellator*, TileSource*, FurnitureTiles*, const TilePos&);
};
