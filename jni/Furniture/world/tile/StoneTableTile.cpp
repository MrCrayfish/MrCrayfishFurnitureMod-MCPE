#include "StoneTableTile.h"

StoneTableTile::StoneTableTile(int id) : TableTile(id, &Material::stone) {
    tex = getTextureUVCoordinateSet("stone", 0);
    secondary_tex = getTextureUVCoordinateSet("cobblestone", 0);
    
    setNameId("tileStoneTable");
    setSoundType(Tile::SOUND_STONE);
    setDestroyTime(1.5F);
}
