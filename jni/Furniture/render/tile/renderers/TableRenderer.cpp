#include "TableRenderer.h"

#include "../../../world/tile/TableTile.h"


void TableRenderer::render(const BlockPos& pos, FurnitureTile* tile, BlockTessellator* tess) {
	int x = pos.x, y = pos.y, z = pos.z;

	int forwardId = tess->region->getTile(x + 1, y, z).id;
	int backId = tess->region->getTile(x - 1, y, z).id;
	int leftId = tess->region->getTile(x, y, z - 1).id;
	int rightId = tess->region->getTile(x, y, z + 1).id;
	bool forward = forwardId == TableTile::_woodId || forwardId == TableTile::_stoneId;
	bool back = backId == TableTile::_woodId || backId == TableTile::_stoneId;
	bool left = leftId == TableTile::_woodId || leftId == TableTile::_stoneId;
	bool right = rightId == TableTile::_woodId || rightId == TableTile::_stoneId;
		
	tess->useForcedUV = true;

	tess->forcedUV = tile->getTexture(0,0);

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

	tess->forcedUV = tile->getTexture(1,0);

	tess->setRenderBounds(0.0, 0.9, 0.0, 1.0, 1.0, 1.0);
	tess->tessellateBlockInWorld(tile, pos);

	tess->useForcedUV = false;
}
