#pragma once

#include "Vec3.h"

class AABB {
public:
	int empty;
	Vec3 min;
	Vec3 max;

	AABB(Vec3 const&, Vec3 const&);
	AABB(float, float, float, float, float, float);
	void set(float, float, float, float, float, float);
};