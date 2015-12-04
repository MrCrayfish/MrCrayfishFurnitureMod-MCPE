#include "RotatableTile.h"

RotatableTile::RotatableTile(const std::string& name, int id, const Material* material) : FurnitureTile(name, id, material) {
}

int RotatableTile::getPlacementDataValue(Mob* mob, int x, int y, int z, signed char side, float xx, float yy, float zz, int data) {
	return (int) floor(((mob->yaw * 4.0F) / 360.0F) + 0.5F) & 3;
}