#pragma once

#include <cmath>

const float PI = 3.14159265;

class Vec3 {
public:
	float x;
	float y;
	float z;

	void setComponents(float, float, float);
	void rotateAroundX(double);
	void rotateAroundY(double);
	void rotateAroundZ(double);
};