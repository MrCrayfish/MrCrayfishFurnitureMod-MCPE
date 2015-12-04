#include "CounterRenderer.h"

void CounterRenderer::render(const BlockPos& pos, FurnitureTile* tile, BlockTessellator* tess) {
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;
	
	BlockSource* ts = tess->region;
	int data = ts->getData(x, y, z);

	tess->forcedUV = tile->getTexture(0, 0);
	
	if(this->getRelativeTileId(ts, x, y, z, data, DOWN) == CounterTile::_id)
	{
		if(this->getRelativeRotation(ts, x, y, z, data, DOWN) == LEFT)
		{
			this->setRotatedBounds(tess, data, 0.0F, 0.0F, 0.125F, 1.0F, 0.875F, 1.0F);
			tess->tessellateBlockInWorld(tile, {x, y, z});
		}
		else if (this->getRelativeRotation(ts, x, y, z, data, DOWN) == RIGHT)
		{
			this->setRotatedBounds(tess, data, 0.0F, 0.0F, 0.0F, 1.0F, 0.875F, 0.875F);
			tess->tessellateBlockInWorld(tile, {x, y, z});
		}
	}
	if(this->getRelativeTileId(ts, x, y, z, data, this->UP) == CounterTile::_id)
	{
		if(this->getRelativeRotation(ts, x, y, z, data, UP) == LEFT 
		&& this->getRelativeTileId(ts, x, y, z, data, LEFT) != CounterTile::_id)
		{
			this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.125F, 1.0F, 0.875F, 1.0F);
			tess->tessellateBlockInWorld(tile, {x, y, z});
		}
		else if(this->getRelativeRotation(ts, x, y, z, data, UP) == RIGHT 
		&& this->getRelativeTileId(ts, x, y, z, data, RIGHT) != CounterTile::_id)
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
    this->setRotatedBounds(tess, data, 0.0F, 0.875F, 0.0F, 1.0F, 1.0F, 1.0F);
    tess->tessellateBlockInWorld(tile, {x, y, z});
	
	tess->useForcedUV = false;
}
