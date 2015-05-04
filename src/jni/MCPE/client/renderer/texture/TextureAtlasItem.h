#pragma once

#include <string>
#include <vector>
#include "TextureUVCoordinateSet.h"
#include <iterator>

class TextureAtlasTextureItem {

	typedef std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet>> SetList;

protected:
	std::string _name;
	TextureAtlasTextureItem::SetList _textureUVs;
	int _uvCount;
};
