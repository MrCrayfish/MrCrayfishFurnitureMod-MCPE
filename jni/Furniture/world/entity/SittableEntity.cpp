#include "SittableEntity.h"

SittableEntity::SittableEntity(BlockSource& region):
	Entity(region) {
	setSize(0.01F, 0.01F);
	rendererId = 100;
	_init();
}

SittableEntity::SittableEntity(BlockSource& region, float x, float y, float z, float height):
	Entity(region),
	blockPosition({(int) x, (int) y, (int) z}) {
	setSize(0.01F, 0.01F);
	rendererId = 100;
	setPos({x + 0.5F, y + height, z + 0.5F});
	_init();
}

SittableEntity::SittableEntity(BlockSource& region, float x, float y, float z, float height, int rotation, float rotationOffs):
	Entity(region),
	blockPosition({(int) x, (int) y, (int) z}) {
	setSize(0.01F, 0.01F);
	rendererId = 100;
	setPositionByRotation(x + 0.5F, y + height, z + 0.5F, rotation, rotationOffs);
	_init();
}

void SittableEntity::setPositionByRotation(float x, float y, float z, int rotation, float rotationOffs) {
	switch(rotation) {
	case 2:
		z += rotationOffs;
		break;
	case 0:
		z -= rotationOffs;
		break;
	case 3:
		x -= rotationOffs;
		break;
	case 1:
		x += rotationOffs;
		break;
	}
	setPos({x, y, z});
}
	
float SittableEntity::getRideHeight() const {
	return 0.0F;
}

void SittableEntity::rideTick() {
	
}

EntityType SittableEntity::getEntityTypeId() const {
	return EntityType::SITTABLE;
}

void SittableEntity::readAdditionalSaveData(const CompoundTag*) {
	
}

void SittableEntity::addAdditionalSaveData(CompoundTag*) {
	
}

