#include "BinRenderer.h"

void BinRenderer::render(const BlockPos& pos, FurnitureBlock& tile, BlockTessellator* tess) {
	ALOG("Rendering BIN");
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;

	ALOG("Forcing UV");
	tess->forcedUV = tile.getTexture(0, 0);
	
	ALOG("Setting Render Bounds");
	tess->setRenderBounds(0.2, 0.0, 0.2, 0.8, 0.8, 0.8);
	ALOG("Tessellating in world");
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.1, 0.8, 0.1, 0.9, 0.9, 0.9);
	tess->tessellateBlockInWorld(tile, pos);
	
	ALOG("Setting Render Bounds 2");
	tess->forcedUV = tile.getTexture(1, 0);
	tess->setRenderBounds(0.1, 0.76, 0.1, 0.9, 0.8, 0.9);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.45, 0.9, 0.25, 0.55, 1.0, 0.35);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.45, 0.9, 0.65, 0.55, 1.0, 0.75);
	tess->tessellateBlockInWorld(tile, pos);
	tess->setRenderBounds(0.45, 0.95, 0.35, 0.55, 1.0, 0.65);
	tess->tessellateBlockInWorld(tile, pos);
	
	ALOG("Unforcing UV");
	tess->useForcedUV = false;
	ALOG("Finished Rendering BIN");
}
