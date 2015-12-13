#include "RotatableBlock.h"

RotatableBlock::RotatableBlock(const std::string& name, int id, const Material& material) : FurnitureBlock(name, id, material) {
}

int RotatableBlock::getPlayerFacing(Player& player) {
	return (int) floor(((player.yaw * 4.0F) / 360.0F) + 0.5F) & 3;
}