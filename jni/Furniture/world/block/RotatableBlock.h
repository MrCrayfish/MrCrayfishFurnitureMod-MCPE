#pragma once

#include <cmath>

#include "FurnitureBlock.h"

#include "MCPE/world/entity/Mob.h"

class RotatableBlock : public FurnitureBlock {
public:
	RotatableBlock(const std::string&, int, const Material&);
	
	static int getPlayerFacing(Player&);
};