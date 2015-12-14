#include "../world/entity/SittableEntity.h"
#include "MCPE/world/entity/player/Player.h"
#include "MCPE/world/level/BlockSource.h"
#include "MCPE/world/level/Level.h"
#include "MCPE/world/phys/AABB.h"

#include "SitOnBlockUtil.h"

bool SitOnBlockUtil::sit(BlockSource& region, const BlockPos& pos, Player& player, float height) {
	if(canSit(region, pos, player)) {
		SittableEntity* sittable = new SittableEntity(region, pos.x, pos.y, pos.z, height);
		region.getLevel()->addGlobalEntity(std::unique_ptr<Entity>(sittable));
		player.startRiding(*sittable);
		return true;
	}

	return false;
}

bool SitOnBlockUtil::canSit(BlockSource& region, const BlockPos& pos, Player& player) {
	EntityList& list = region.getEntities(NULL, AABB(0, 0, 0, 1, 1, 1).move(pos.x, pos.y, pos.z));
	for(Entity* e : list) {
		if(e->getEntityTypeId() == EntityType::SITTABLE)
			return false;
	}
	
	return true;
}

