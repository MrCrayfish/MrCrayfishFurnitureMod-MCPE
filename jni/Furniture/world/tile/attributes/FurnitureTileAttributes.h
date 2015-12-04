#pragma once

#include "MCPE/world/level/tile/Block.h"

struct FurnitureTileAttributes {
	FurnitureTileAttributes(Material*, std::string, std::string, Block::SoundType, float);

	Material* realMaterial;
	TextureUVCoordinateSet primary_tex;
	TextureUVCoordinateSet secondary_tex;
	Block::SoundType sounds;
	float hardness;
};