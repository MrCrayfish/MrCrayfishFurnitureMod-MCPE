#include "DoorbellTile.h"
#include "../../../MCPE/world/level/Level.h"

int DoorbellTile::_id = 205;

DoorbellTile::DoorbellTile(int id, Material const* material) : FurnitureTile(id, material) {
	tex = getTextureUVCoordinateSet("log", 0);
	secondary_tex = getTextureUVCoordinateSet("iron_block", 0);
	
	setNameId("tileDoorbell");
	setSoundType(Tile::SOUND_WOOD);
	hitbox = AABB({0.375, 0.25, 0}, {0.625, 0.75, 0.1});
	Tile::solid[id] = false;
	Tile::lightBlock[id] = 0;
}

const TextureUVCoordinateSet& DoorbellTile::getTexture(signed char side, int data) {
	return side == 0 ? tex : secondary_tex;
}

bool DoorbellTile::use(Player* player, int x, int y, int z) {
	Level::level->playSound(x, y, z, "fire.fire", 100, 100); //Cant add its own sounds!
	return true;
}

int DoorbellTile::getResource(int data, Random* rand) {
	return DoorbellItem::_id;
}