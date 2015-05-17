#include "CounterRenderer.h"

void CounterRenderer::render(const TilePos& pos, FurnitureTile* tile, TileTessellator* tess) {
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;
	TileSource* ts = tess->region;
	int data = ts->getData(x, y, z);

	if(data == 11) data = 3;
	if(data == 9) data = 1;
	if(data == 10) data = 2;
	if(data == 8) data = 0;
	
	tess->forcedUV = tile->getTexture(0, data);

    if ((ts->getTilePtr(x, y, z + 1) == tile))
    {
      if (data == 2)
      {
        this->setRotatedBounds(tess, data, 0.0F, 0.0F, 0.125F, 1.0F, 0.875F, 1.0F);
        tess->tessellateBlockInWorld(tile, {x, y, z});
      }
      else if (data == 3)
      {
        this->setRotatedBounds(tess, data, 0.0F, 0.0F, 0.0F, 1.0F, 0.875F, 0.875F);
        tess->tessellateBlockInWorld(tile, {x, y, z});
      }
    }
    if ((this->getTilePtr(x, y, z - 1) == tile))
    {
      if (data == 2 && (!(ts->getTilePtr(ts, x + 1, y, z) == tile)))
      {
        this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.125F, 1.0F, 0.875F, 1.0F);
        tess->tessellateBlockInWorld(tile, {x, y, z});
      }
      else if ((data == 3) && (!(ts->getTilePtr(ts, x - 1, y, z) == tile)))
      {
        this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.0F, 1.0F, 0.875F, 0.875F);
        tess->tessellateBlockInWorld(tile, {x, y, z});
      }
      else
      {
        this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.0F, 1.0F, 0.875F, 1.0F);
        tess->tessellateBlockInWorld(tile, {x, y, z});
      }
    }
    else
    {
      this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.0F, 1.0F, 0.875F, 1.0F);
      tess->tessellateBlockInWorld(tile, {x, y, z});
    }

    tess->forcedUV = tile->getTexture(1, 0);
    this->setRotatedBounds(0.0F, 0.875F, 0.0F, 1.0F, 1.0F, 1.0F);
    tess->tessellateBlockInWorld(tile, {x, y, z});
	
	tess->useForcedUV = false;
}