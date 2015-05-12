#pragma once

#include "MCPE/world/level/tile/Tile.h"

struct FurnitureTileAttributes {
	FurnitureTileAttributes(Material*, std::string, std::string, Tile::SoundType, float);

	Material* realMaterial;
	TextureUVCoordinateSet primary_tex;
	TextureUVCoordinateSet secondary_tex;
	Tile::SoundType sounds;
	float hardness;
};