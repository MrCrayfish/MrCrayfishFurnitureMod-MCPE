#pragma once

#include <string>
#include <map>
#include "TextureUVCoordinateSet.h"
#include "TextureAtlasItem.h"
class MinecraftClient;

class TextureAtlas {
public:
	TextureAtlas(const std::string&, TextureFile);
	const TextureAtlasTextureItem& getTextureItem(const std::string&) const;

	std::string _metaFile;
	std::map<std::string, TextureAtlasTextureItem> _textureItems;
	TextureFile _textureFile;
	int _curIndex;
};
