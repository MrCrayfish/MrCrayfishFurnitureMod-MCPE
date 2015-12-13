#include "FurnitureEntityRenderDispatcher.h"
#include "MCPE/client/MinecraftClient.h"
#include "MCPE/client/renderer/entity/EntityRenderDispatcher.h"

#include "InvisibleEntityRenderer.h"

bool FurnitureEntityRenderDispatcher::_Initialized = false;

EntityRenderer* FurnitureEntityRenderDispatcher::_Invisible;

void FurnitureEntityRenderDispatcher::initRenderers(EntityRenderDispatcher* dispatcher) {
	_Invisible = new InvisibleEntityRenderer(dispatcher->client.getTextures());
	
	_Initialized = true;
}

EntityRenderer* FurnitureEntityRenderDispatcher::getRenderer(EntityRenderDispatcher* dispatcher, int rendererId) {
	if(!_Initialized)
		initRenderers(dispatcher);

	switch(rendererId) {
	case 100:
		return _Invisible;
		
	default:
		return NULL;
	}
}

