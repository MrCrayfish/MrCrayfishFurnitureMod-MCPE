#include "CookieJarTile.h"

int CookieJarTile::_id = 222;

CookieJarTile::CookieJarTile(int id, Material const& material) : FurnitureTile("blockCookieJar", id, material) {
	init();
	
	setSoundType(Block::SOUND_GLASS);
	Block::mSolid[id] = false;
	Block::mLightBlock[id] = 0;
	renderPass = Block::mGlass->renderPass;
}

int CookieJarTile::getResource(Random& rand, int data, int idk) {
	return CookieJarItem::_id;
}
