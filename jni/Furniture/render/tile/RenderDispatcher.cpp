#include "RenderDispatcher.h"

#include "Furniture/world/tile/FurnitureTile.h"

std::map<int, BlockRenderer*> RenderDispatcher::rendererMap;

void RenderDispatcher::registerRenderer(int id, BlockRenderer* renderer) {
	rendererMap[id] = renderer;
}

bool RenderDispatcher::dispatch(int id, const TilePos& pos, Tile* tile, TileTessellator* tess) {
	if(rendererMap.find(id) != rendererMap.end()) {
		rendererMap[id]->render(pos, (FurnitureTile*)tile, tess);
		return true;
	}
	return false;
}