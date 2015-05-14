#include "CollisionHelper.h"

AABB& CollisionHelper::getRotatedCollisionBox(int data, float x1, float y1, float z1, float x2, float y2, float z2) {
	AABB aabb;
	switch(data) {
	case 1:
	{
		float var_temp_1 = x1;
		x1 = 1.0F - x2;
		float var_temp_2 = z1;
		z1 = 1.0F - z2;
		x2 = 1.0F - var_temp_1;
		z2 = 1.0F - var_temp_2;
	}
		break;
	case 2:
	{
		float var_temp_3 = x1;
		x1 = z1;
		z1 = 1.0F - x2;
		x2 = z2;
		z2 = 1.0F - var_temp_3;
	}
		break;
	case 0:
	{
		float var_temp_4 = x1;
		x1 = 1.0F - z2;
		float var_temp_5 = z1;
		z1 = var_temp_4;
		float var_temp_6 = x2;
		x2 = 1.0F - var_temp_5;
		z2 = var_temp_6;
	}
		break;
	}

	aabb.set(x1, y1, z1, x2, y2, z2);
	return aabb;
}