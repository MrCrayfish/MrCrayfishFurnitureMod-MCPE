#pragma once

#include "../CommonTypes.h"

class Facing {

enum class Name : FacingID { DOWN, UP, NORTH, SOUTH, WEST, EAST };

public:
	static const Facing::Name DIRECTIONS[];
	static const int FACING2D[];
	static const Facing::Name BY2DDATA[];
	static const FacingID OPPOSITE_FACING[];
	static const int STEP_X[];
	static const int STEP_Y[];
	static const int STEP_Z[];
};
