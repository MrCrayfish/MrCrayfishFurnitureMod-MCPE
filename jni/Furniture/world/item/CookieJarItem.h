#pragma once

#include "PlaceableItem.h"
#include "../block/CookieJarBlock.h"

class CookieJarItem: public PlaceableItem {
public:
	static int _id;

	CookieJarItem(int);
};
