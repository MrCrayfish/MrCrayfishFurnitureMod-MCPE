#include "InvisibleEntityRenderer.h"

InvisibleEntityRenderer::InvisibleEntityRenderer(TextureGroup& group):
	EntityRenderer(group, true) {
}

void InvisibleEntityRenderer::render(Entity& entity, const Vec3& pos, float f1, float f2) {
	return;
}
