#include "CabinetRenderer.h"

void CabinetRenderer::render(const TilePos& pos, FurnitureTile* tile, TileTessellator* tess) {
	tess->useForcedUV = true;
	tess->forcedUV = tile->getTexture(0, 0);
	int x = pos.x, y = pos.y, z = pos.z;

	//Block
	tess->setRenderBounds(0, 0, 0, 1, 1, 1);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	//Door
	tess->forcedUV = tile->getTexture(1, 0);
	tess->setRenderBounds(0.0625, 0.0625, 1, 0.9375, 0.9375, 1.05);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	//Knob
	tess->forcedUV = tile->getTexture(2, 0);
	tess->setRenderBounds(0.125, 0.375, 1.05, 0.1875, 0.75, 1.1);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.1875, 0.375, 1.05, 0.25, 0.4375, 1.1);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.1875, 0.6875, 1.05, 0.25, 0.75, 1.1);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	
	tess->useForcedUV = false;
}