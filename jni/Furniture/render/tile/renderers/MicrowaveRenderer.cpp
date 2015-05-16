#include "MicrowaveRenderer.h"

void MicrowaveRenderer::render(const TilePos& pos, FurnitureTile* tile, TileTessellator* tess) {
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;
	int data = tess->region->getData(x, y, z);

	if(data == 11) data = 3;
	if(data == 9) data = 1;
	if(data == 10) data = 2;
	if(data == 8) data = 0;

	bool hasItem = data > 3;

	tess->forcedUV = tile->getTexture(0, 0);
	tess->setRotatedBounds(tess, data, 0.25F, 0.0F, 0.0625F, 0.8125F, 0.5F, 0.125F);
	tess->renderBlock(renderer, block, x, y, z);
	tess->setRotatedBounds(tess, data, 0.25F, 0.0F, 0.125F, 0.8125F, 0.0625F, 0.75F);
	tess->renderBlock(renderer, block, x, y, z);
	tess->setRotatedBounds(tess, data, 0.25F, 0.4375F, 0.125F, 0.8125F, 0.5F, 0.75F);
	tess->renderBlock(renderer, block, x, y, z);
	tess->setRotatedBounds(tess, data, 0.25F, 0.0F, 0.75F, 0.8125F, 0.5F, 0.9375F);
	tess->renderBlock(renderer, block, x, y, z);
	tess->setRotatedBounds(tess, data, 0.75F, 0.0F, 0.125F, 0.8125F, 0.5F, 0.75F);
	tess->renderBlock(renderer, block, x, y, z);

	tess->forcedUV = tile->getTexture(1, 0);
	tess->setRotatedBounds(tess, data, 0.1875F, 0.0625F, 0.125F, 0.25F, 0.125F, 0.6875F);
	tess->renderBlock(renderer, block, x, y, z);
	tess->setRotatedBounds(tess, data, 0.1875F, 0.375F, 0.125F, 0.25F, 0.4375F, 0.6875F);
	tess->renderBlock(renderer, block, x, y, z);
	tess->setRotatedBounds(tess, data, 0.1875F, 0.125F, 0.125F, 0.25F, 0.375F, 0.1875F);
	tess->renderBlock(renderer, block, x, y, z);
	tess->setRotatedBounds(tess, data, 0.1875F, 0.125F, 0.625F, 0.25F, 0.375F, 0.6875F);
	tess->renderBlock(renderer, block, x, y, z);

	tess->forcedUV = tile->getTexture(2, 0);
	RenderHelper.setRenderBounds(renderer, metadata, 0.1875D, 0.0D, 0.0625D, 0.25D, 0.0625D, 0.75D);
	RenderHelper.renderBlock(renderer, block, x, y, z);
	RenderHelper.setRenderBounds(renderer, metadata, 0.1875D, 0.4375D, 0.0625D, 0.25D, 0.5D, 0.75D);
	RenderHelper.renderBlock(renderer, block, x, y, z);
	RenderHelper.setRenderBounds(renderer, metadata, 0.1875D, 0.0625D, 0.0625D, 0.25D, 0.4375D, 0.125D);
	RenderHelper.renderBlock(renderer, block, x, y, z);
	RenderHelper.setRenderBounds(renderer, metadata, 0.1875D, 0.0625D, 0.6875D, 0.25D, 0.4375D, 0.75D);
	RenderHelper.renderBlock(renderer, block, x, y, z);

	tess->forcedUV = tile->getTexture(2, 0);
	RenderHelper.setRenderBounds(renderer, metadata, 0.1875D, 0.0D, 0.78125D, 0.25D, 0.5D, 0.9375D);
	RenderHelper.renderBlock(renderer, block, x, y, z);

	if (hasItem) {
	  //render an item. (How?)
	}

	tess->forcedUV = tile->getTexture(3, 0);
	RenderHelper.setRenderBounds(renderer, metadata, 0.265625D, 0.0625D, 0.1875D, 0.625D, 0.125D, 0.640625D);
	RenderHelper.renderBlock(renderer, block, x, y, z);
}