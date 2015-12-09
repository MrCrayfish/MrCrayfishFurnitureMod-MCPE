#include "CounterTile.h"

int CounterTile::_id = 213;

CounterTile::CounterTile(int id, Material const& material) : RotatableTile("blockCounter", id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stained_clay", 9);

	
	setSoundType(Block::SOUND_WOOD);
	Block::mSolid[id] = false;
	Block::mLightBlock[id] = 0;
}

const TextureUVCoordinateSet& CounterTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

int CounterTile::getResource(Random& rand, int data, int idk) {
	return CounterItem::_id;
}
