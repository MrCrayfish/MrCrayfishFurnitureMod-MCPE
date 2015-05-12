#pragma once

#include "BlockRenderer.h"

#include "MCPE/world/level/tile/Tile.h"
#include "MCPE/world/level/TileSource.h"
#include "MCPE/client/renderer/tile/TileTessellator.h"
#include "MCPE/world/level/TilePos.h"

#include <map>

class RenderDispatcher {
public:
	static std::map<int, BlockRenderer*> rendererMap;
	static void registerRenderer(int, BlockRenderer*);
	static bool dispatch(int, TileTessellator*, TileSource*, Tile*, const TilePos&);
};