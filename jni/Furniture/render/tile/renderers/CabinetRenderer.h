#pragma once

#include "../BlockRenderer.h"

class CabinetRenderer : public BlockRenderer {
public:
	virtual void render(const TilePos&, FurnitureTile*, TileTessellator*);
};