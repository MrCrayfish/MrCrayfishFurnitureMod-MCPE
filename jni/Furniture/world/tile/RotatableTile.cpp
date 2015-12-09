#include "RotatableTile.h"

RotatableTile::RotatableTile(const std::string& name, int id, const Material& material) : FurnitureTile(name, id, material) {
}

int RotatableTile::getPlayerFacing(Player& player) {
	return (int) floor(((player.yaw * 4.0F) / 360.0F) + 0.5F) & 3;
}