#include "BarStoolRenderer.h"

void BarStoolRenderer::render(const BlockPos& pos, FurnitureTile& tile, BlockTessellator* tess) {
	ALOG("Rendering BAR STOOL");
    tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;
	int data = tess->region->getData({x, y, z});
	
    ALOG("Forcing UV");
	tess->forcedUV = tile.getTexture(0, data); //wool

    ALOG("Setting Render Bounds");
    tess->setRenderBounds(0.21875, 0.75, 0.21875, 0.78125, 0.78125, 0.78125);
    ALOG("Tessellating in world");
    tess->tessellateBlockInWorld(tile, pos);

    tess->forcedUV = tile.getTexture(1, 0); //stained clay
    tess->setRenderBounds(0.1875, 0.5625, 0.1875, 0.8125, 0.75, 0.8125);
    tess->tessellateBlockInWorld(tile, pos);

    tess->forcedUV = tile.getTexture(2, data); //quartz
    tess->setRenderBounds(0.25D, 0.0D, 0.25D, 0.375D, 0.5625D, 0.375D);
    tess->tessellateBlockInWorld(tile, pos);
    tess->setRenderBounds(0.625D, 0.0D, 0.25D, 0.75D, 0.5625D, 0.375D);
    tess->tessellateBlockInWorld(tile, pos);
    tess->setRenderBounds(0.25D, 0.0D, 0.625D, 0.375D, 0.5625D, 0.75D);
    tess->tessellateBlockInWorld(tile, pos);
    tess->setRenderBounds(0.625D, 0.0D, 0.625D, 0.75D, 0.5625D, 0.75D);
    tess->tessellateBlockInWorld(tile, pos);

    tess->forcedUV = tile.getTexture(3, data); //stone
    tess->setRenderBounds(0.28125D, 0.25D, 0.375D, 0.34375D, 0.3125D, 0.625D);
    tess->tessellateBlockInWorld(tile, pos);
    tess->setRenderBounds(0.65625D, 0.25D, 0.375D, 0.71875D, 0.3125D, 0.625D);
    tess->tessellateBlockInWorld(tile, pos);
    tess->setRenderBounds(0.375D, 0.25D, 0.65625D, 0.625D, 0.3125D, 0.71875D);
    tess->tessellateBlockInWorld(tile, pos);
    tess->setRenderBounds(0.375D, 0.25D, 0.28125D, 0.625D, 0.3125D, 0.34375D);
    tess->tessellateBlockInWorld(tile, pos);
	
	tess->useForcedUV = false;
}
