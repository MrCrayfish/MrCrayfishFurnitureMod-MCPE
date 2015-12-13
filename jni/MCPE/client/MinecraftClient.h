#pragma once
#include <string>
class TextureGroup;

class MinecraftClient /*: public Minecraft */{
public:
	char filler[104];
	TextureGroup& textures;

	void init();
	
	TextureGroup& getTextures() const;
};
