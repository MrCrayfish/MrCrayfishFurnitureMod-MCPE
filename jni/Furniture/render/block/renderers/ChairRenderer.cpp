#include "ChairRenderer.h"

void ChairRenderer::render(const BlockPos& pos, FurnitureBlock& tile, BlockTessellator* tess) {
	int x = pos.x, y = pos.y, z = pos.z;
	int data = tess->region->getData({x, y, z});

	tess->useForcedUV = true;
	tess->forcedUV = tile.getTexture(0, 0);

	// Legs
	tess->setRenderBounds(0.1, 0.0, 0.1, 0.2, 0.5, 0.2);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.8, 0.0, 0.8, 0.9, 0.5, 0.9);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.8, 0.0, 0.1, 0.9, 0.5, 0.2);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.1, 0.0, 0.8, 0.2, 0.5, 0.9);
	tess->tessellateBlockInWorld(tile, pos);

	// Back Rest
	this->setRotatedBounds(tess, data, 0.8, 0.6, 0.1, 0.9, 1.2, 0.9);
	tess->tessellateBlockInWorld(tile, pos);

	tess->forcedUV = tile.getTexture(1, 0);

	// Seat
	tess->setRenderBounds(0.1, 0.5, 0.1, 0.9, 0.6, 0.9);
	tess->tessellateBlockInWorld(tile, pos);

	tess->useForcedUV = false;
}
