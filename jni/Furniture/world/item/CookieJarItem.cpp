#include "CookieJarItem.h"

int CookieJarItem::_id = 478;

CookieJarItem::CookieJarItem(int id) : PlaceableItem(id, CookieJarTile::_id) {
	setNameID("cookieJarItem");
	setIcon("itemcookiejar", 0);
}
