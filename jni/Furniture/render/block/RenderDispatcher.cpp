#include "RenderDispatcher.h"

#include "Furniture/world/block/FurnitureBlock.h"

std::map<int, BlockRenderer*> RenderDispatcher::rendererMap;

void RenderDispatcher::registerRenderer(int id, BlockRenderer* renderer) {
	rendererMap[id] = renderer;
}

bool RenderDispatcher::dispatch(int id, const BlockPos& pos, Block& tile, BlockTessellator* tess) {
	if(rendererMap.find(id) != rendererMap.end()) {
		rendererMap[id]->render(pos, (FurnitureBlock&)tile, tess);
		return true;
	}
	return false;
}
