#include "FurnitureRenderer.h"

TileSource* FurnitureRenderer::region;

void FurnitureRenderer::render(TileTessellator* tess, TileSource* region, Tile* tile, const TilePos& pos) {
	FurnitureRenderer::region = region;

	switch(tile->renderType) {
	case FurnitureShape::TABLE:
		renderTable(tess, tile, pos);
		break;
	case FurnitureShape::CHAIR:
		renderChair(tess, tile, pos);
		break;
	default:
		tess->tessellateBlockInWorld(tile, pos);
	}
}

void FurnitureRenderer::renderTable(TileTessellator* tess, Tile* tile, const TilePos& pos) {
	int x = pos.x, y = pos.y, z = pos.z;

	int forwardId = region->getTile(x + 1, y, z).id;
	int backId = region->getTile(x - 1, y, z).id;
	int leftId = region->getTile(x, y, z - 1).id;
	int rightId = region->getTile(x, y, z + 1).id;
    bool forward = forwardId == TableTile::_woodId || forwardId == TableTile::_stoneId;
    bool back = backId == TableTile::_woodId || backId == TableTile::_stoneId;
    bool left = leftId == TableTile::_woodId || leftId == TableTile::_stoneId;
    bool right = rightId == TableTile::_woodId || rightId == TableTile::_stoneId;

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

	tess->useForcedUV = true;

	if(tile == FurnitureTiles::tileTableWood) {
		tess->forcedUV = tile->getTextureUVCoordinateSet("log", 0);
	} else {
		tess->forcedUV = tile->getTextureUVCoordinateSet("cobblestone", 0);
	}

	tess->setRenderBounds(0.0, 0.9, 0.0, 1.0, 1.0, 1.0);
	tess->tessellateBlockInWorld(tile, pos);

	tess->useForcedUV = false;
}

void FurnitureRenderer::renderChair(TileTessellator* tess, Tile* tile, const TilePos& pos) {
    int x = pos.x, y = pos.y, z = pos.z;
	int data = region->getData(x, y, z);

    tess->useForcedUV = true;

	if(tile == FurnitureTiles::tileChairWood) {
		tess->forcedUV = tile->getTextureUVCoordinateSet("planks", 0);
	} else {
		tess->forcedUV = tile->getTextureUVCoordinateSet("cobblestone", 0);
	}

	// Legs
	tess->setRenderBounds(0.1, 0.0, 0.1, 0.2, 0.5, 0.2);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.8, 0.0, 0.8, 0.9, 0.5, 0.9);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.8, 0.0, 0.1, 0.9, 0.5, 0.2);
	tess->tessellateBlockInWorld(tile, {x, y, z});
	tess->setRenderBounds(0.1, 0.0, 0.8, 0.2, 0.5, 0.9);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	// Back Rest
	// TODO: Make a RenderHelper to auto rotate block bounds
	tess->setRenderBounds(0.8, 0.6, 0.1, 0.9, 1.2, 0.9);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	if(tile == FurnitureTiles::tileChairWood) {
		tess->forcedUV = tile->getTextureUVCoordinateSet("log", 0);
	} else {
		tess->forcedUV = tile->getTextureUVCoordinateSet("stone", 0);
	}

	// Base
	tess->setRenderBounds(0.1, 0.5, 0.1, 0.9, 0.6, 0.9);
	tess->tessellateBlockInWorld(tile, {x, y, z});

	tess->useForcedUV = false;
}