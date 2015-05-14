#include "DoorbellRenderer.h"

void DoorbellRenderer::render(const TilePos& pos, FurnitureTile* tile, TileTessellator* tess) {
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;

	//Base
	tess->forcedUV = tile->getTexture(0, 0);

	tess->setRenderBounds(0.375, 0.25, 0, 0.625, 0.75, 0.1);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	//Button
	tess->forcedUV = tile->getTexture(1, 0);

	tess->setRenderBounds(0.4375, 0.4375, 0.1, 0.5625, 0.5625, 0.15);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	tess->useForcedUV = false;
}