#include "Vec3.h"


void Vec3::setComponents(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Vec3::rotateAroundX(double val) {
    float var2 = cos(val);
    float var3 = sin(val);
    float var4 = this->x;
    float var6 = this->y * var2 + this->z * var3;
    float var8 = this->z * var2 - this->y * var3;
    this->setComponents(var4, var6, var8);
}

void Vec3::rotateAroundY(double val) {
    float var2 = cos(val);
    float var3 = sin(val);
    float var4 = this->x * var2 + this->z * var3;
    float var6 = this->y;
    float var8 = this->z * var2 - this->x * var3;
    this->setComponents(var4, var6, var8);
}

void Vec3::rotateAroundZ(double val) {
    float var2 = cos(val);
    float var3 = sin(val);
    float var4 = this->x * var2 + this->y * var3;
    float var6 = this->y * var2 - this->x * var3;
    float var8 = this->z;
    this->setComponents(var4, var6, var8);
}