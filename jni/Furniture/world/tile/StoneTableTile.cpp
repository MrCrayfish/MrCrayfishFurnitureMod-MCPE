#include "StoneTableTile.h"

StoneTableTile::StoneTableTile(int id) : TableTile(id, &Material::stone) {
    primary_tex = getTextureUVCoordinateSet("stone", 0);
    secondary_tex = getTextureUVCoordinateSet("cobblestone", 0);
}
