#pragma once

#include <cmath>

#include "FurnitureTile.h"

class RotatableTile : public FurnitureTile {
public:
	RotatableTile(int, const Material*);
	
	virtual int getPlacementDataValue(Mob*, int, int, int, signed char, float, float, float, int);
};