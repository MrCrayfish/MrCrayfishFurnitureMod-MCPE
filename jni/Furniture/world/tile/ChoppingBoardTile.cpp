#include "ChoppingBoardTile.h"

int ChoppingBoardTile::_id = 208;

ChoppingBoardTile::ChoppingBoardTile(int id, Material const* material) : RotatableTile(id, material) {
	tex = getTextureUVCoordinateSet("planks", 0);
	secondary_tex = getTextureUVCoordinateSet("log", 0);
	
	setNameId("tileChoppingBoard");
	setSoundType(Tile::SOUND_WOOD);
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;
}

const TextureUVCoordinateSet& ChoppingBoardTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

bool ChoppingBoardTile::use(Player* player, int x, int y, int z) {
	int data = player->region.getData(x, y, z);
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

int ChoppingBoardTile::getResource(int data, Random* rand) {
	return ChoppingBoardItem::_id;
}