#include "CookieJarTile.h"

int CookieJarTile::_id = 222;

CookieJarTile::CookieJarTile(int id, Material const& material) : FurnitureTile("blockCookieJar", id, material) {
	setSoundType(Block::SOUND_GLASS);
	setSolid(false);
	renderPass = mGlass->renderPass;
}

int CookieJarTile::getResource(Random& rand, int data, int idk) {
	return CookieJarItem::_id;
}
