#include "FurnitureTileAttributes.h"

FurnitureTileAttributes::FurnitureTileAttributes(Material* realMaterial, std::string ptexture, std::string stexture, Tile::SoundType sounds, float hardness) {
	this->realMaterial = realMaterial;
	this->primary_tex = Tile::tiles[1]->getTextureUVCoordinateSet(ptexture, 0);
	this->secondary_tex = Tile::tiles[1]->getTextureUVCoordinateSet(stexture, 0);
	this->sounds = sounds;
	this->hardness = hardness;
}