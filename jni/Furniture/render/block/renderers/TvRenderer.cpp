#include "TvRenderer.h"

void TvRenderer::render(const BlockPos& pos, FurnitureBlock& tile, BlockTessellator* tess) {
	int x = pos.x, y = pos.y, z = pos.z;
	int data = tess->region->getData({x, y, z});
	
	tess->useForcedUV = true;

	tess->forcedUV = tile.getTextureUVCoordinateSet("log", 0);

	tess->setRenderBounds(0.1, 0.0, 0.1, 0.6, 0.1, 0.9);
     tess->tessellateBlockInWorld(tile, pos);

     tess->setRenderBounds(0.1, 0.7, 0.1, 0.6, 0.8, 0.9);
     tess->tessellateBlockInWorld(tile, pos);

     tess->setRenderBounds(0.1, 0.1, 0.1, 0.6, 0.7, 0.2);
     tess->tessellateBlockInWorld(tile, pos);

     tess->setRenderBounds(0.1, 0.1, 0.8, 0.6, 0.7, 0.9);
     tess->tessellateBlockInWorld(tile, pos);

     tess->forcedUV = tile.getTextureUVCoordinateSet("wool", 7);

     tess->setRenderBounds(0.2, 0.1, 0.2, 0.5, 0.7, 0.8);
     tess->tessellateBlockInWorld(tile, pos);

     tess->forcedUV = tile.getTextureUVCoordinateSet("planks", 0);

	tess->setRenderBounds(0.5, 0.07, 0.2, 0.9, 0.7, 0.8);
     tess->tessellateBlockInWorld(tile, pos);

	tess->useForcedUV = false;
}
