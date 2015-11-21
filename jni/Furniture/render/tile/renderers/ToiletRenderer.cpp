#include "ToiletRenderer.h"

void ToiletRenderer::render(const TilePos& pos, FurnitureTile* tile, BlockTessellator* tess) {
	int x = pos.x, y = pos.y, z = pos.z;
	int data = tess->region->getData(x, y, z);
	
	tess->useForcedUV = true;

	tess->tex1(tess->getLightColor(pos));

	tess->forcedUV = tile->getTextureUVCoordinateSet("quartz_block", 0);
	// bottom
	this->setRotatedBounds(tess, data, 0.2, 0.0, 0.25, 0.9, 0.3, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	// back
	this->setRotatedBounds(tess, data, 0.65, 0.3, 0.15, 1.0, 1.0, 0.85);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	// cap
	this->setRotatedBounds(tess, data, 0.6, 1.0, 0.1, 1.0, 1.1, 0.9);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	// seat pieces
	this->setRotatedBounds(tess, data, 0.1, 0.3, 0.15, 0.65, 0.6, 0.25);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	this->setRotatedBounds(tess, data, 0.1, 0.3, 0.25, 0.2, 0.6, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	this->setRotatedBounds(tess, data, 0.1, 0.3, 0.75, 0.65, 0.6, 0.85);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	// toilet bowl segments
	this->setRotatedBounds(tess, data, 0.4, 0.3, 0.25, 0.7, 0.35, 0.4);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	this->setRotatedBounds(tess, data, 0.4, 0.3, 0.6, 0.7, 0.35, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	this->setRotatedBounds(tess, data, 0.2, 0.3, 0.25, 0.7, 0.4, 0.75);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	
	tess->forcedUV = tile->getTextureUVCoordinateSet("stained_clay", 9);
	// Buttons on top
	this->setRotatedBounds(tess, data, 0.7, 0.4, 0.39, 0.8, 1.15, 0.49);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	this->setRotatedBounds(tess, data, 0.7, 0.4, 0.51, 0.8, 1.15, 0.61);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	tess->forcedUV = tile->getTextureUVCoordinateSet("still_water", 0);
	// Toilet water
	this->setRotatedBounds(tess, data, 0.4F, 0.4F, 0.4F, 0.7F, 0.401F, 0.6F);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	tess->useForcedUV = false;
}
