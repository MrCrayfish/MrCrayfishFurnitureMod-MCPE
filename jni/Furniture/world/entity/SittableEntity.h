#pragma once
#include "MCPE/world/entity/Entity.h"
#include "MCPE/world/level/BlockPos.h"

class SittableEntity : public Entity {
	BlockPos blockPosition;
	
	void setPositionByRotation(float, float, float, int, float);

public:
	SittableEntity(BlockSource&);
	SittableEntity(BlockSource&, float, float, float, float);
	SittableEntity(BlockSource&, float, float, float, float, int, float);
	
	virtual float getRideHeight() const;
	virtual void rideTick();
	virtual EntityType getEntityTypeId() const;
	virtual void readAdditionalSaveData(const CompoundTag*);
	virtual void addAdditionalSaveData(CompoundTag*);
};

