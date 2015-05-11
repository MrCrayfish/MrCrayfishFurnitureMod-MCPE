#include "RenderManager.h"

#include "Furniture/world/tile/FurnitureTiles.h"

std::map<int, BlockRender*> RenderManager::renderMap;

void RenderManager::registerRender(int id, BlockRender* render)
{
	renderMap[id] = render;
}

void RenderManager::render(int id, TileTessellator* tess, TileSource* region, Tile* tile, const TilePos& pos)
{
	if(renderMap.find(id) != renderMap.end()) {
		renderMap[id]->render(tess, region, (FurnitureTiles*)tile, pos);
	}
}