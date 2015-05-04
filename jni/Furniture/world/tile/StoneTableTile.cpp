#include "StoneTableTile.h"

StoneTableTile::StoneTableTile(int id) : TableTile(id, &Material::stone) {
    primary_texture = getTextureUVCoordinateSet("stone", 0);
    secondary_texture = getTextureUVCoordinateSet("cobblestone", 0);
}
