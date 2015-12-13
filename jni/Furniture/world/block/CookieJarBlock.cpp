#include "CookieJarBlock.h"

int CookieJarBlock::_id = 222;

CookieJarBlock::CookieJarBlock(int id, Material const& material) : FurnitureBlock("blockCookieJar", id, material) {
	setSoundType(Block::SOUND_GLASS);
	setSolid(false);
	renderPass = mGlass->renderPass;
}

int CookieJarBlock::getResource(Random& rand, int data, int idk) {
	return CookieJarItem::_id;
}
