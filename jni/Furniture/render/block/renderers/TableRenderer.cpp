#include "TableRenderer.h"

#include "../../../world/block/TableBlock.h"


void TableRenderer::render(const BlockPos& pos, FurnitureBlock& tile, BlockTessellator* tess) {
	int x = pos.x, y = pos.y, z = pos.z;

	int forwardId = tess->region->getBlockID({x + 1, y, z}).id;
	int backId = tess->region->getBlockID({x - 1, y, z}).id;
	int leftId = tess->region->getBlockID({x, y, z - 1}).id;
	int rightId = tess->region->getBlockID({x, y, z + 1}).id;
	bool forward = forwardId == TableBlock::_woodId || forwardId == TableBlock::_stoneId;
	bool back = backId == TableBlock::_woodId || backId == TableBlock::_stoneId;
	bool left = leftId == TableBlock::_woodId || leftId == TableBlock::_stoneId;
	bool right = rightId == TableBlock::_woodId || rightId == TableBlock::_stoneId;
		
	tess->useForcedUV = true;

	tess->forcedUV = tile.getTexture(0,0);

	if(forward && right && !left && !back) {
		tess->setRenderBounds(0.175, 0.0, 0.175, 0.425, 0.9, 0.425);
		tess->tessellateBlockInWorld(tile, pos);
	}
	if(forward && !right && left && !back) {
		tess->setRenderBounds(0.175, 0.0, 0.575, 0.425, 0.9, 0.825);
		tess->tessellateBlockInWorld(tile, pos);
	}
	if(!forward && right && !left && back) {
		tess->setRenderBounds(0.575, 0.0, 0.175, 0.825, 0.9, 0.425);
		tess->tessellateBlockInWorld(tile, pos);
	}
	if(!forward && !right && left && back) {
		tess->setRenderBounds(0.575, 0.0, 0.575, 0.825, 0.9, 0.825);
		tess->tessellateBlockInWorld(tile, pos);
	}
	if(forward && !right && !left && !back) {
		tess->setRenderBounds(0.175, 0.0, 0.375, 0.425, 0.9, 0.625);
		tess->tessellateBlockInWorld(tile, pos);
	}
	if(!forward && right && !left && !back) {
		tess->setRenderBounds(0.375, 0.0, 0.175, 0.625, 0.9, 0.425);
		tess->tessellateBlockInWorld(tile, pos);
	}	
	if(!forward && !right && left && !back) {
		tess->setRenderBounds(0.375, 0.0, 0.575, 0.625, 0.9, 0.825);
		tess->tessellateBlockInWorld(tile, pos);
	}
	if(!forward && !right && !left && back) {
		tess->setRenderBounds(0.575, 0.0, 0.375, 0.825, 0.9, 0.625);	
		tess->tessellateBlockInWorld(tile, pos);
	}
	if(!forward && !right && !left && !back) {
		tess->setRenderBounds(0.375, 0.0, 0.375, 0.625, 0.9, 0.625);
		tess->tessellateBlockInWorld(tile, pos);
	}

	tess->forcedUV = tile.getTexture(1,0);

	tess->setRenderBounds(0.0, 0.9, 0.0, 1.0, 1.0, 1.0);
	tess->tessellateBlockInWorld(tile, pos);

	tess->useForcedUV = false;
}
