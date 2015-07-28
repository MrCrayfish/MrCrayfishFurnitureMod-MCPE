#pragma once

#include "FurnitureTile.h"
#include "../item/CookieJarItem.h"

class CookieJarTile: public FurnitureTile {
public:
	static int _id;
	static float _destroyTime;
	
	CookieJarTile(int, Material const*);
	virtual int getResource(int, Random*);
};
