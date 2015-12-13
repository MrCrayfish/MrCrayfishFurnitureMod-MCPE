#include "CoffeeTableRenderer.h"

#include "Furniture/world/block/CoffeeTableBlock.h"

void CoffeeTableRenderer::render(const BlockPos& pos, FurnitureBlock& tile, BlockTessellator* tess) {
	int x = pos.x, y = pos.y, z = pos.z;

	int forwardId = tess->region->getBlockID({x + 1, y, z}).id;
	int backId = tess->region->getBlockID({x - 1, y, z}).id;
	int leftId = tess->region->getBlockID({x, y, z - 1}).id;
	int rightId = tess->region->getBlockID({x, y, z + 1}).id;
	bool forward = forwardId == CoffeeTableBlock::_woodId || forwardId == CoffeeTableBlock::_stoneId;
	bool back = backId == CoffeeTableBlock::_woodId || backId == CoffeeTableBlock::_stoneId;
	bool left = leftId == CoffeeTableBlock::_woodId || leftId == CoffeeTableBlock::_stoneId;
	bool right = rightId == CoffeeTableBlock::_woodId || rightId == CoffeeTableBlock::_stoneId;
		
	tess->useForcedUV = true;

	tess->forcedUV = tile.getTexture(0,0);

	if(!forward)
	{
		if(!left)
		{
			tess->setRenderBounds(0.9, 0.0, 0.0, 1, 0.4, 0.1);
			tess->tessellateBlockInWorld(tile, pos);
		}
		if(!right)
		{
			tess->setRenderBounds(0.9, 0.0, 0.9, 1, 0.4, 1);
			tess->tessellateBlockInWorld(tile, pos);
		}
	}
	if(!back)
	{
		if(!left)
		{
			tess->setRenderBounds(0.0, 0.0, 0.0, 0.1, 0.4, 0.1);
			tess->tessellateBlockInWorld(tile, pos);
		}
		if(!right)
		{
			tess->setRenderBounds(0.0, 0.0, 0.9, 0.1, 0.4, 1);
			tess->tessellateBlockInWorld(tile, pos);
		}
	}
	if(!left)
	{
		if(!forward)
		{
			tess->setRenderBounds(0.9, 0.0, 0.0, 1, 0.4, 0.1);
			tess->tessellateBlockInWorld(tile, pos);
		}
		if(!back)
		{
			tess->setRenderBounds(0.0, 0.0, 0.0, 0.1, 0.4, 0.1);
			tess->tessellateBlockInWorld(tile, pos);	
		}
	}
	if(!right)
	{
		if(!forward)
		{
			tess->setRenderBounds(0.9, 0.0, 0.9, 1, 0.4, 1);
			tess->tessellateBlockInWorld(tile, pos);
		}
		if(!back)
		{
			tess->setRenderBounds(0.0, 0.0, 0.9, 0.1, 0.4, 1);
			tess->tessellateBlockInWorld(tile, pos);
		}
	}

	tess->forcedUV = tile.getTexture(1,0);

	tess->setRenderBounds(0.0, 0.4, 0.0, 1, 0.5, 1);
	tess->tessellateBlockInWorld(tile, pos);

	tess->useForcedUV = false;
}
