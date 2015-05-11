#pragma once

#include "Furniture/world/tile/FurnitureTiles.h"
#include "MCPE/world/level/TileSource.h"
#include "MCPE/client/renderer/tile/TileTessellator.h"
#include "MCPE/world/level/TilePos.h"

class BlockRender {
public:
	BlockRender();
	virtual void render(TileTessellator*, TileSource*, FurnitureTiles*, const TilePos&) = 0;
};