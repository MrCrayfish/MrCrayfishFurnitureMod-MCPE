#pragma once

#include "MCPE/world/phys/AABB.h"

class CollisionHelper {
public:
	static AABB& getRotatedCollisionBox(int, float, float, float, float, float, float);
};