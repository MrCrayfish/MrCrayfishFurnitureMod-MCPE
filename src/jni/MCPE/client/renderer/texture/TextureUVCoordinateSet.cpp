#include "TextureUVCoordinateSet.h"

// Make my own TextureUVCoordinateSet fuctions 4 eezy rendering abilities :D

TextureUVCoordinateSet::TextureUVCoordinateSet() {
}

TextureUVCoordinateSet::TextureUVCoordinateSet(float minU, float maxU, float minV, float maxV, int width, int height) {
	setUV(minU, maxU, minV, maxV);
	this->width = width;
	this->height = height;
}

void TextureUVCoordinateSet::setUV(float minU, float maxU, float minV, float maxV) {
	this->minU = minU;
	this->maxU = maxU;
	this->minV = minV;
	this->maxV = maxV;
}

float TextureUVCoordinateSet::getInterpolatedU(float par1) {
	float var3 = maxU - minU;
	return minU + var3 * par1 / width;
}

float TextureUVCoordinateSet::getInterpolatedV(float par1) {
	float var3 = maxV - minV;
	return minV + var3 * par1 / height;
}