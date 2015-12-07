#include "CabinetRenderer.h"

void CabinetRenderer::render(const BlockPos& pos, FurnitureTile* tile, BlockTessellator* tess) {
	tess->useForcedUV = true;
	tess->forcedUV = tile->getTexture(0, 0);
	int x = pos.x, y = pos.y, z = pos.z;
	int data = tess->region->getData(*new BlockPos(x, y, z));

	//Block
	tess->setRenderBounds(0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F);
	tess->tessellateBlockInWorld(*tile, {x, y, z});

	//Door
	tess->forcedUV = tile->getTexture(1, 0);
	this->setRotatedBounds(tess, data, -0.05F, 0.0625F, 0.0625F, 0.0F, 0.9375F, 0.9375F);
	tess->tessellateBlockInWorld(*tile, {x, y, z});

	//Knob
	tess->forcedUV = tile->getTexture(2, 0);
	this->setRotatedBounds(tess, data, -0.1F, 0.375F, 0.125F, -0.05F, 0.75F, 0.1875F);
	tess->tessellateBlockInWorld(*tile, {x, y, z});
	this->setRotatedBounds(tess, data, -0.1F, 0.375F, 0.1875F, -0.05F, 0.4375F, 0.25F);
	tess->tessellateBlockInWorld(*tile, {x, y, z});
	this->setRotatedBounds(tess, data, -0.1F, 0.6875F, 0.1875F, -0.05F, 0.75F, 0.25F);
	tess->tessellateBlockInWorld(*tile, {x, y, z});
	
	tess->useForcedUV = false;
}
