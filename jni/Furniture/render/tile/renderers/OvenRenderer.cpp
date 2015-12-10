#include "OvenRenderer.h"

void OvenRenderer::render(const BlockPos& pos, FurnitureTile& tile, BlockTessellator* tess) {
	int x = pos.x, y = pos.y, z = pos.z;
	int data = tess->region->getData({x, y, z});
	tess->forcedUV = tile.getTextureUVCoordinateSet("obsidian", 0);

	this->setRotatedBounds(tess, data, 0.0625, 0.0, 0.0625, 0.9375, 1.0, 0.9375);
	tess->tessellateBlockInWorld(tile, pos);
	tess->useForcedUV = true;
	this->setRotatedBounds(tess, data, 0.1875, 0.5, 0.1875, 0.4325, 1.0625, 0.4375);
	tess->tessellateBlockInWorld(tile, pos);
	this->setRotatedBounds(tess, data, 0.1875, 0.5, 0.5625, 0.4325, 1.0625, 0.8125);
	tess->tessellateBlockInWorld(tile, pos);
	this->setRotatedBounds(tess, data, 0.5625, 0.5, 0.1875, 0.8125, 1.0625, 0.4375);
	tess->tessellateBlockInWorld(tile, pos);
	this->setRotatedBounds(tess, data, 0.5625, 0.5, 0.5625, 0.8125, 1.0625, 0.8125);
	tess->tessellateBlockInWorld(tile, pos);
	this->setRotatedBounds(tess, data, 0.875, 1.0, 0.0624, 1.0, 1.1875, 0.9376);
	tess->tessellateBlockInWorld(tile, pos);
	this->setRotatedBounds(tess, data, 0.0, 0.2, 0.2, 0.0625, 0.8125, 0.8);
	tess->tessellateBlockInWorld(tile, pos);
	tess->useForcedUV = false;
}
