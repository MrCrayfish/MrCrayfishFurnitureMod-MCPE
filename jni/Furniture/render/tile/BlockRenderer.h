#pragma once

#include "Furniture/world/tile/FurnitureTile.h"
#include "MCPE/world/level/TileSource.h"
#include "MCPE/client/renderer/tile/TileTessellator.h"
#include "MCPE/world/level/TilePos.h"

class BlockRenderer {
public:
	BlockRenderer();
	virtual void render(TileTessellator*, TileSource*, FurnitureTile*, const TilePos&) = 0 {};
};