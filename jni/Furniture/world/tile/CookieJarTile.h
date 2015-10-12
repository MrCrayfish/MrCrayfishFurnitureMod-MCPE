#pragma once

#include "FurnitureTile.h"
#include "../item/CookieJarItem.h"

class CookieJarTile: public FurnitureTile {
public:
	static int _id;
	
	CookieJarTile(int, Material const*);
	virtual int getResource(int, Random*);	
};
