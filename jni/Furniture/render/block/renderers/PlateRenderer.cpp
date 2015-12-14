#include "PlateRenderer.h"

void PlateRenderer::render(const BlockPos& pos, FurnitureBlock& tile, BlockTessellator* tess) {
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;
	
	tess->forcedUV = tile.getTexture(0, 0);
	tess->setRenderBounds(0.34375, 0.0, 0.34375, 0.65625, 0.0625, 0.65625);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.28125, 0.03125, 0.21875, 0.34375, 0.09375, 0.78125);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.65625, 0.03125, 0.21875, 0.71875, 0.09375, 0.78125);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.71875, 0.03125, 0.28125, 0.78125, 0.09375, 0.71875);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.21875, 0.03125, 0.28125, 0.28125, 0.09375, 0.71875);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.34375, 0.03125, 0.21875, 0.65625, 0.09375, 0.34375);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.34375, 0.03125, 0.65625, 0.65625, 0.09375, 0.78125);
	tess->tessellateBlockInWorld(tile, pos);
	tess->useForcedUV = false;
}
