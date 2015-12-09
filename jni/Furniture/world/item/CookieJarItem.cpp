#include "CookieJarItem.h"

int CookieJarItem::_id = 488;

CookieJarItem::CookieJarItem(int id) : PlaceableItem("itemCookieJar", id, CookieJarTile::_id) {
	setIcon("itemcookiejar", 0);
}
