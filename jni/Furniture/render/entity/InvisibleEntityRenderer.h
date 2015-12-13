#pragma once

#include "MCPE/client/renderer/entity/EntityRenderer.h"

class InvisibleEntityRenderer : public EntityRenderer {
public:
	InvisibleEntityRenderer(TextureGroup&);
	
	virtual void render(Entity&, const Vec3&, float, float);
};

