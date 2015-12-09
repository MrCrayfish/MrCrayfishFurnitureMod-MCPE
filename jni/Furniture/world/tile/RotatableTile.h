#pragma once

#include <cmath>

#include "FurnitureTile.h"

#include "MCPE/world/entity/Mob.h"

class RotatableTile : public FurnitureTile {
public:
	RotatableTile(const std::string&, int, const Material&);
	
	static int getPlayerFacing(Player&);
};