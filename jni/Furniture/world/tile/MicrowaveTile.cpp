#include "MicrowaveTile.h"

int MicrowaveTile::_id = 211;

MicrowaveTile::MicrowaveTile(int id, Material const& material) : RotatableTile("blockMicrowave", id, material) {
	tex = getTextureUVCoordinateSet("quartz_block", 0);
	secondary_tex = getTextureUVCoordinateSet("stone", 0);
	terciary_tex = getTextureUVCoordinateSet("wool", 15);

	setSoundType(Block::SOUND_WOOD);
	setSolid(false);
}

const TextureUVCoordinateSet& MicrowaveTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : side == 1 ? secondary_tex : terciary_tex;
}

bool MicrowaveTile::use(Player& player, const BlockPos& pos) {
	int data = player.region.getData(pos);
	int rot = data & 7;
	int hasBread = ((data & 8) >> 3) == 0;

	if(hasBread) {
		//Pickup bread
		return true;
	} else {
		//Put bread
		return true;
	}

	return true;
}

int MicrowaveTile::getResource(Random& rand, int data, int idk) {
	return MicrowaveItem::_id;
}
