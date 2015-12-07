#pragma once

#include "MCPE/world/level/tile/Block.h"

struct FurnitureTileAttributes {
	FurnitureTileAttributes(Material const&, std::string, std::string, const Block::SoundType&, float);

	Material* realMaterial;
	TextureUVCoordinateSet primary_tex;
	TextureUVCoordinateSet secondary_tex;
	Block::SoundType sounds;
	float hardness;
};