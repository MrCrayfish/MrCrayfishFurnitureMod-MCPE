#include "RenderDispatcher.h"

#include "Furniture/world/tile/FurnitureTile.h"

std::map<int, BlockRenderer*> RenderDispatcher::rendererMap;

void RenderDispatcher::registerRenderer(int id, BlockRenderer* renderer) {
	rendererMap[id] = renderer;
}

bool RenderDispatcher::dispatch(int id, TileTessellator* tess, TileSource* region, Tile* tile, const TilePos& pos) {
	if(rendererMap.find(id) != rendererMap.end()) {
		rendererMap[id]->render(tess, region, (FurnitureTile*)tile, pos);
		return true;
	}
	return false;
}