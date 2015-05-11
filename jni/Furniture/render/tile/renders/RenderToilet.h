#pragma once

#include "../BlockRender.h"

class RenderToilet : public BlockRender {
public:
	RenderToilet();
	virtual void render(TileTessellator*, TileSource*, FurnitureTiles*, const TilePos&);
};
