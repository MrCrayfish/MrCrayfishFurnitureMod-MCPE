#pragma once
#include <memory>
#include "../../../AppPlatformListener.h"
class MinecraftClient;
class BlockTessellator;
class ItemInHandRenderer;
class Level;
class Entity;
class Mob;
class Options;
class Font;
class EntityRendererId;
class EntityRenderer;
class Vec3;

class EntityRenderDispatcher : public AppPlatformListener {
public:
	EntityRenderDispatcher(MinecraftClient&);
	
	virtual ~EntityRenderDispatcher();
	virtual void onAppSuspended();
	
	void render(Entity&, const Vec3&, float, float);
	EntityRenderer* getRenderer(EntityRendererId);
	
	MinecraftClient& client; // 8
	BlockTessellator& blockRenderer; // 12
	ItemInHandRenderer& itemRenderer; // 16
	Level* level; // 20
	Mob* cameraEntity; // 24
	float playerYaw, playerPitch; // 28, 32
	Options* options; // 36
	Font* font; // 40
	std::unique_ptr<EntityRenderer> renderers[47]; // 44
};

