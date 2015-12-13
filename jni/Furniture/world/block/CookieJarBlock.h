#pragma once

#include "FurnitureBlock.h"
#include "../item/CookieJarItem.h"

class CookieJarBlock: public FurnitureBlock {
public:
	static int _id;
	
	CookieJarBlock(int, Material const&);
	virtual int getResource(Random&, int, int);	
};
