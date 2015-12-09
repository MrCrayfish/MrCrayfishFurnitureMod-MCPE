#pragma once

#include "../BlockRenderer.h"

class CookieJarRenderer: public BlockRenderer {
public:
	virtual void render(const BlockPos&, FurnitureTile&, BlockTessellator*);
};
