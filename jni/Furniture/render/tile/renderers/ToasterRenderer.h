#pragma once

#include "../BlockRenderer.h"

class ToastRenderer : public BlockRenderer {
public:
	virtual void render(const TilePos&, FurnitureTile*, TileTessellator*);
};