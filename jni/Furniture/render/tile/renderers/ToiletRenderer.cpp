#include "ToiletRenderer.h"

void ToiletRenderer::render(const TilePos& pos, FurnitureTile* tile, TileTessellator* tess) {
	int x = pos.x, y = pos.y, z = pos.z;
	
	tess->useForcedUV = true;
	tess->forcedUV = tile->getTexture(0,0);

	// TODO: Rotate

	// bottom
	tess->setRenderBounds(0.2, 0.0, 0.25, 0.9, 0.3, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	// back
	tess->setRenderBounds(0.65, 0.3, 0.15, 1.0, 1.0, 0.85);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	// cap
	tess->setRenderBounds(0.6, 1.0, 0.1, 1.0, 1.1, 0.9);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	// seat pieces
	tess->setRenderBounds(0.1, 0.3, 0.15, 0.65, 0.6, 0.25);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.1, 0.3, 0.25, 0.2, 0.6, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.1, 0.3, 0.75, 0.65, 0.6, 0.85);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	// toilet bowl segments
	tess->setRenderBounds(0.4, 0.3, 0.25, 0.7, 0.35, 0.4);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.4, 0.3, 0.6, 0.7, 0.35, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.2, 0.3, 0.25, 0.7, 0.4, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	
	tess->forcedUV = tile->getTexture(1,0);
	
	// Buttons on top
	tess->setRenderBounds(0.7, 0.4, 0.39, 0.8, 1.15, 0.49);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.7, 0.4, 0.51, 0.8, 1.15, 0.61);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	tess->forcedUV = tile->getTexture(2, 0);
	// TODO: This toilet has no water

	tess->useForcedUV = false;
}