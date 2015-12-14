#include "FurnitureBlockAttributes.h"

FurnitureBlockAttributes::FurnitureBlockAttributes(const Material& realMaterial, std::string ptexture, std::string stexture, const Block::SoundType& sounds, float hardness):
	realMaterial(realMaterial) {
	this->primary_tex = Block::mBlocks[1]->getTextureUVCoordinateSet(ptexture, 0);
	this->secondary_tex = Block::mBlocks[1]->getTextureUVCoordinateSet(stexture, 0);
	this->sounds = sounds;
	this->hardness = hardness;
}
