#include "CookieJarRenderer.h"

void CookieJarRenderer::render(const TilePos& pos, FurnitureTile* tile, TileTessellator* tess) {
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;
	int data = tess->region->getData(x, y, z);
	
	tess->forcedUV = tile->getTextureUVCoordinateSet("wool", 15); //wool
    tess->setRenderBounds(0.25,0.85,0.25,0.75,1,0.75);
    tess->tessellateBlockInWorld(tile, {x, y, z});
	
	tess->forcedUV = tile->getTextureUVCoordinateSet("glass", 0); //wool
    tess->setRenderBounds(0.15,0,0.15,0.85,0.85,0.85);
    tess->tessellateBlockInWorld(tile, {x, y, z});
	
	tess->useForcedUV = false;
}
/*
Origonal
{
"textures":{
"particle":"blocks/torch"
},
"elements":[
{"from": [5.5,9.0,5.5],
"to": [10.5,10.0,10.5],
"shade": true,
"faces": {
"up": {"uv": [ 5.5, 5.5, 10.5, 10.5 ],"texture":"#1"},
"down": {"uv": [ 5.5, 5.5, 10.5, 10.5 ],"texture":"#1"},
"north": {"uv": [ 5.5, 9.0, 10.5, 10.0 ],"texture":"#1"},
"south": {"uv": [ 5.5, 9.0, 10.5, 10.0 ],"texture":"#1"},
"west": {"uv": [ 5.5, 9.0, 10.5, 10.0 ],"texture":"#1"},
"east": {"uv": [ 5.5, 9.0, 10.5, 10.0 ],"texture":"#1"}
}
}
,
{"from": [4.5,0.01,4.5],
"to": [11.5,9.0,11.5],
"shade": true,
"faces": {
"up": {"uv": [ 4.5, 4.5, 11.5, 11.5 ],"texture":"#2"},
"down": {"uv": [ 4.5, 4.5, 11.5, 11.5 ],"texture":"#2"},
"north": {"uv": [ 4.5, 0.0, 11.5, 9.0 ],"texture":"#2"},
"south": {"uv": [ 4.5, 0.0, 11.5, 9.0 ],"texture":"#2"},
"west": {"uv": [ 4.5, 0.0, 11.5, 9.0 ],"texture":"#2"},
"east": {"uv": [ 4.5, 0.0, 11.5, 9.0 ],"texture":"#2"}
}
}
]
}
*/
