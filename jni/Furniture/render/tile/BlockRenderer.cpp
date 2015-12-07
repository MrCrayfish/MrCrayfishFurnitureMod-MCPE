#include "BlockRenderer.h"

int const BlockRenderer::UP = 0;
int const BlockRenderer::DOWN = 1;
int const BlockRenderer::LEFT = 2;
int const BlockRenderer::RIGHT = 3;

void BlockRenderer::setRotatedBounds(BlockTessellator* tess, int data, float x1, float y1, float z1, float x2, float y2, float z2) {
	switch (data) {
	case 1:
	{
		float temp1 = x1;
		x1 = 1.0F - x2;
		float temp2 = z1;
		z1 = 1.0F - z2;
		x2 = 1.0F - temp1;
		z2 = 1.0F - temp2;
	}
		break;
	case 2:
	{
		float temp3 = x1;
		x1 = z1;
		z1 = 1.0F - x2;
		x2 = z2;
		z2 = 1.0F - temp3;
	}
		break;
	case 0:
	{
		float temp4 = x1;
		x1 = 1.0F - z2;
		float temp5 = z1;
		z1 = temp4;
		float temp6 = x2;
		x2 = 1.0F - temp5;
		z2 = temp6;
	}
		break;
	}

	tess->setRenderBounds(x1, y1, z1, x2, y2, z2);
}

int BlockRenderer::getRelativeTileId(BlockSource* region, int x, int y, int z, int metadata, int rotation)
{
	switch(rotation)
	{
		case UP:
			if(metadata == 3)
				return region->getBlock(*new BlockPos(x + 1, y, z)).id;
			if(metadata == 1)
				return region->getBlock(*new BlockPos(x - 1, y, z)).id;
			if(metadata == 2)
				return region->getBlock(*new BlockPos(x, y, z - 1)).id;
			if(metadata == 0)
				return region->getBlock(*new BlockPos(x, y, z + 1)).id;
			break;
		case DOWN:
			if(metadata == 3)
				return region->getBlock(*new BlockPos(x - 1, y, z)).id;
			if(metadata == 1)
				return region->getBlock(*new BlockPos(x + 1, y, z)).id;
			if(metadata == 2)
				return region->getBlock(*new BlockPos(x, y, z + 1)).id;
			if(metadata == 0)
				return region->getBlock(*new BlockPos(x, y, z - 1)).id;
			break;
		case LEFT:
			if(metadata == 3)
				return region->getBlock(*new BlockPos(x, y, z - 1)).id;
			if(metadata == 1)
				return region->getBlock(*new BlockPos(x, y, z + 1)).id;
			if(metadata == 2)
				return region->getBlock(*new BlockPos(x - 1, y, z)).id;
			if(metadata == 0)
				return region->getBlock(*new BlockPos(x + 1, y, z)).id;
			break;
		case RIGHT:
			if(metadata == 3)
				return region->getBlock(*new BlockPos(x, y, z + 1)).id;
			if(metadata == 1)
				return region->getBlock(*new BlockPos(x, y, z - 1)).id;
			if(metadata == 2)
				return region->getBlock(*new BlockPos(x + 1, y, z)).id;
			if(metadata == 0)
				return region->getBlock(*new BlockPos(x - 1, y, z)).id;
			break;		
	}
	return region->getBlock(*new BlockPos(x, y, z)).id;
}

int BlockRenderer::getRelativeRotation(BlockSource* region, int x, int y, int z, int metadata, int rotation)
{
	int blockMetadata = getRelativeMetadata(region, x, y, z, metadata, rotation);
	if (metadata == 3)
	{
		if (blockMetadata == 3)
			return DOWN;
		if (blockMetadata == 1)
			return UP;
		if (blockMetadata == 2)
			return RIGHT;
		if (blockMetadata == 0)
			return LEFT;
	}
	if (metadata == 1)
	{
		if (blockMetadata == 3)
			return UP;
		if (blockMetadata == 1)
			return DOWN;
		if (blockMetadata == 2)
			return LEFT;
		if (blockMetadata == 0)
			return RIGHT;
	}
	if (metadata == 2)
	{
		if (blockMetadata == 3)
			return LEFT;
		if (blockMetadata == 1)
			return RIGHT;
		if (blockMetadata == 2)
			return DOWN;
		if (blockMetadata == 0)
			return UP;
	}
	if (metadata == 0)
	{
		if (blockMetadata == 3)
			return RIGHT;
		if (blockMetadata == 1)
			return LEFT;
		if (blockMetadata == 2)
			return UP;
		if (blockMetadata == 0)
			return DOWN;
	}
	return 0;
}
int BlockRenderer::getRelativeMetadata(BlockSource* region, int x, int y, int z, int metadata, int rotation)
{
	switch (rotation)
	{
	case UP:
		if (metadata == 3)
			return region->getData(*new BlockPos(x + 1, y, z));
		if (metadata == 1)
			return region->getData(*new BlockPos(x - 1, y, z));
		if (metadata == 2)
			return region->getData(*new BlockPos(x, y, z - 1));
		if (metadata == 0)
			return region->getData(*new BlockPos(x, y, z + 1));
		break;
	case DOWN:
		if (metadata == 3)
			return region->getData(*new BlockPos(x - 1, y, z));
		if (metadata == 1)
			return region->getData(*new BlockPos(x + 1, y, z));
		if (metadata == 2)
			return region->getData(*new BlockPos(x, y, z + 1));
		if (metadata == 0)
			return region->getData(*new BlockPos(x, y, z - 1));
		break;
	case LEFT:
		if (metadata == 2)
			return region->getData(*new BlockPos(x - 1, y, z));
		if (metadata == 0)
			return region->getData(*new BlockPos(x + 1, y, z));
		if (metadata == 3)
			return region->getData(*new BlockPos(x, y, z - 1));
		if (metadata == 1)
			return region->getData(*new BlockPos(x, y, z + 1));
		break;
	case RIGHT:
		if (metadata == 2)
			return region->getData(*new BlockPos(x + 1, y, z));
		if (metadata == 0)
			return region->getData(*new BlockPos(x - 1, y, z));
		if (metadata == 3)
			return region->getData(*new BlockPos(x, y, z + 1));
		if (metadata == 1)
			return region->getData(*new BlockPos(x, y, z - 1));
		break;
	}
	return 0;
}
