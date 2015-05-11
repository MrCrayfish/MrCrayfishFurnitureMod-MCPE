#include "RenderToilet.h"

RenderToilet::RenderToilet() : BlockRender() {}

void RenderToilet::render(TileTessellator* tess, TileSource* region, FurnitureTiles* tile, const TilePos& pos) {
	int x = pos.x, y = pos.y, z = pos.z;
	
	tess->useForcedUV = true;

	tess->forcedUV = tile->getTexture(0,0);

	tess->setRenderBounds(0.2, 0.0, 0.25, 0.9, 0.3, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.65, 0.3, 0.15, 1.0, 1.0, 0.85);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.6, 1.0, 0.1, 1.0, 1.1, 0.9);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.1, 0.3, 0.15, 0.65, 0.6, 0.25);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.1, 0.3, 0.25, 0.2, 0.6, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.1, 0.3, 0.75, 0.65, 0.6, 0.85);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.4, 0.3, 0.25, 0.7, 0.35, 0.4);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.4, 0.3, 0.6, 0.7, 0.35, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.2, 0.3, 0.25, 0.7, 0.4, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	
	tess->forcedUV = tile->getTexture(1,0);
	
	tess->setRenderBounds(0.7, 0.4, 0.39, 0.8, 1.15, 0.49);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.7, 0.4, 0.51, 0.8, 1.15, 0.61);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	tess->useForcedUV = false;
}