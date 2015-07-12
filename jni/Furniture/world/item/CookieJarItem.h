#pragma once

#include "PlaceableItem.h"
#include "../tile/CookieJarTile.h"

class CookieJarItem: public PlaceableItem {
public:
	static int _id;

	CookieJarItem(int);
};
