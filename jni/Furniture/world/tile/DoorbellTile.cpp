#include "DoorbellTile.h"

int DoorbellTile::_id = 219;

DoorbellTile::DoorbellTile(int id, Material const& material) : RotatableTile("blockDoorbell", id, material) {
	tex = getTextureUVCoordinateSet("log", 0);
	secondary_tex = getTextureUVCoordinateSet("iron_block", 0);
	
	
	setSoundType(Block::SOUND_WOOD);
	Block::mSolid[id] = false;
	Block::mLightBlock[id] = 0;
}

const TextureUVCoordinateSet& DoorbellTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

bool DoorbellTile::use(Player* player, int x, int y, int z) {
	int data = player->region.getData(*new BlockPos(x, y, z));
	int rot = data & 7;
	int out = (data & 8) >> 3;
	bool isClicked = out == 0;

	if(isClicked) return true;
	//player->level->playSound("fire.fire", x, y, z, 100, 100); //Cant add its own sounds!
	player->region.setBlockAndData(*new BlockPos(x, y, z), {this->id, rot + out}, 2);
	player->region.getTickQueue({x, y, z})->add(player->region, {x, y, z}, this->id, 0);
	return true;
}

int DoorbellTile::getTickDelay() {
	return 20;
}

void DoorbellTile::tick(BlockSource* region, int x, int y, int z, Random* rand) {
	int data = region->getData(*new BlockPos(x, y, z));
	if((data & 8) == 0) return;
	region->setBlockAndData({x, y, z}, {this->id, data & 7}, 2);
}

int DoorbellTile::getResource(int data, Random* rand) {
	return DoorbellItem::_id;
}

void DoorbellTile::addAABBs(BlockSource* region, int x, int y, int z, AABB const* posAABB, std::vector<AABB, std::allocator<AABB>>& pool) {}
