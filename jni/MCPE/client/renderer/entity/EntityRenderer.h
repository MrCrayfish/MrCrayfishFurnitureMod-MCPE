#pragma once
#include "../renderer/EntityShaderManager.h"
class TextureGroup;
class Vec3;
class Vec2;
class Options;

class EntityRenderer : public EntityShaderManager {
protected:
	char stuff[88];

public:
	EntityRenderer(TextureGroup&, bool);
	
	virtual ~EntityRenderer();
	virtual void render(Entity&, const Vec3&, float, float) = 0;
	virtual void postRender(Entity&, const Vec3&, float, float);
	virtual void renderDebug(Entity&, Options&);
	virtual void renderWaterHole(Entity&, const Vec3&, const Vec2&, float);
};

