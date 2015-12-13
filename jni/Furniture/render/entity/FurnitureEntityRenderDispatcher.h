#pragma once
class EntityRenderer;
class EntityRenderDispatcher;

struct FurnitureEntityRenderDispatcher {
	static bool _Initialized;
	static EntityRenderer* _Invisible;
	
	static void initRenderers(EntityRenderDispatcher*);
	static EntityRenderer* getRenderer(EntityRenderDispatcher*, int);
};

