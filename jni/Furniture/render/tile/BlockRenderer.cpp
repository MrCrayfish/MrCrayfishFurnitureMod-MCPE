#include "BlockRenderer.h"

void BlockRenderer::setRotatedBounds(TileTessellator* tess, int data, float x1, float y1, float z1, float x2, float y2, float z2) {
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