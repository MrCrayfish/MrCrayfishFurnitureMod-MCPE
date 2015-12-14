#include "ChoppingBoardBlock.h"

int ChoppingBoardBlock::_id = 208;

ChoppingBoardBlock::ChoppingBoardBlock(int id, Material const& material) : RotatableBlock("blockChoppingBoard", id, material) {
	tex = getTextureUVCoordinateSet("planks", 0);
	secondary_tex = getTextureUVCoordinateSet("log", 0);
	
	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& ChoppingBoardBlock::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

bool ChoppingBoardBlock::use(Player& player, const BlockPos& pos) {
	int data = player.region.getData(pos);
	int rot = data & 7;
	int hasBread = ((data & 8) >> 3) == 0;

	if(hasBread) {
		//Pickup bread
		return true;
	} else { //Ah whatever, get carried item not now
		//Put bread
		return true;
	}

	return true;
}

int ChoppingBoardBlock::getResource(Random& rand, int data, int idk) {
	return ChoppingBoardItem::_id;
}

bool ChoppingBoardBlock::addCollisionShapes(BlockSource& region, const BlockPos& pos, const AABB* posAABB, std::vector<AABB, std::allocator<AABB>>& pool, Entity* entity) {
	addAABB(CollisionHelper::getRotatedCollisionBox(region.getData(pos), 0.25F, 0.0F, 0.0625F, 0.8125F, 0.0625F, 0.9375F).move(pos.x, pos.y, pos.z), posAABB, pool);
	return true;
}
