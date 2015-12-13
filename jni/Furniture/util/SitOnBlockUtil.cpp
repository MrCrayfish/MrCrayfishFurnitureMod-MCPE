#include "../world/entity/SittableEntity.h"
#include "MCPE/world/entity/player/Player.h"
#include "MCPE/world/level/BlockSource.h"
#include "MCPE/world/level/Level.h"

#include "SitOnBlockUtil.h"

bool SitOnBlockUtil::sit(BlockSource& region, const BlockPos& pos, Player& player, float height) {
	SittableEntity* sittable = new SittableEntity(region, pos.x, pos.y, pos.z, height);
	region.getLevel()->addGlobalEntity(std::unique_ptr<Entity>(sittable));
	player.startRiding(*sittable);
}

