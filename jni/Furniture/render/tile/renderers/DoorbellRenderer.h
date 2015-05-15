#pragma once

#include "../BlockRenderer.h"

class DoorbellRenderer : public BlockRenderer {
public:
	virtual void render(const TilePos&, FurnitureTile*, TileTessellator*);
};
