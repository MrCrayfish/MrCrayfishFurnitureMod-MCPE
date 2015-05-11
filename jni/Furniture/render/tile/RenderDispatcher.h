#pragma once

#include "BlockRender.h"

#include "MCPE/world/level/tile/Tile.h"
#include "MCPE/world/level/TileSource.h"
#include "MCPE/client/renderer/tile/TileTessellator.h"
#include "MCPE/world/level/TilePos.h"

#include <map>

class RenderDispatcher {
public:
	static std::map<int, BlockRender*> renderMap;
	static void registerRender(int id, BlockRender* render);
	static bool dispatch(int id, TileTessellator*, TileSource*, Tile*, const TilePos&);
};