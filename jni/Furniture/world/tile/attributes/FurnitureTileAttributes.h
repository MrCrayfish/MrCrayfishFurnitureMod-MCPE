#pragma once

#include "MCPE/world/level/block/Block.h"

struct FurnitureTileAttributes {
	FurnitureTileAttributes(const Material&, std::string, std::string, const Block::SoundType&, float);

	const Material& realMaterial;
	TextureUVCoordinateSet primary_tex;
	TextureUVCoordinateSet secondary_tex;
	Block::SoundType sounds;
	float hardness;
};
