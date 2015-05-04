#pragma once

enum TextureFile {
	Tiles,
	Items
};

class TextureUVCoordinateSet {
public:
	float minU;
	float minV;
	float maxU;
	float maxV;
	int width;
	int height;
	int index;
	int file;

	TextureUVCoordinateSet();
	TextureUVCoordinateSet(float, float, float, float, int, int);

	void setUV(float, float, float, float);
	float getInterpolatedU(float);
	float getInterpolatedV(float);
};