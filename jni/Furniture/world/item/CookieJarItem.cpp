#include "CookieJarItem.h"

int CookieJarItem::_id = 500;

CookieJarItem::CookieJarItem(int id) : PlaceableItem(id, CookieJarTile::_id) {
	setNameID("cookieJarItem");
	setIcon("cookieJarItem", 0);
}
