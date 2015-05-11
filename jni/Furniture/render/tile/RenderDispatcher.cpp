#include "RenderDispatcher.h"

#include "Furniture/world/tile/FurnitureTiles.h"

std::map<int, BlockRender*> RenderDispatcher::renderMap;

void RenderDispatcher::registerRender(int id, BlockRender* render)
{
	renderMap[id] = render;
}

bool RenderDispatcher::dispatch(int id, TileTessellator* tess, TileSource* region, Tile* tile, const TilePos& pos)
{
	if(renderMap.find(id) != renderMap.end()) {
		renderMap[id]->render(tess, region, (FurnitureTiles*)tile, pos);
		return true;
	}
	return false;
}