#include "DoorbellTile.h"

int DoorbellTile::_id = 219;

DoorbellTile::DoorbellTile(int id, Material const& material) : RotatableTile("blockDoorbell", id, material) {
	tex = getTextureUVCoordinateSet("log", 0);
	secondary_tex = getTextureUVCoordinateSet("iron_block", 0);
	
	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& DoorbellTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

bool DoorbellTile::use(Player& player, const BlockPos& pos) {
	int data = player.region.getData(pos);
	int rot = data & 7;
	int out = (data & 8) >> 3;
	bool isClicked = out == 0;

	if(isClicked) return true;
	//player.level->playSound("fire.fire", x, y, z, 100, 100); //Cant add its own sounds!
	//player.region.setBlockAndData(pos, {this->id, rot + out}, 2);
	player.region.getTickQueue(pos)->add(player.region, pos, this->id, 0);
	return true;
}

int DoorbellTile::getTickDelay() {
	return 20;
}

void DoorbellTile::tick(BlockSource& region, const BlockPos& pos, Random& rand) {
	int data = region.getData(pos);
	if((data & 8) == 0) return;
	//region.setBlockAndData(pos, {this->id, data & 7}, 2);
}

int DoorbellTile::getResource(Random& rand, int data, int idk) {
	return DoorbellItem::_id;
}

bool DoorbellTile::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	return true;
}
