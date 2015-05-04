#include "WoodenTableTile.h"

WoodenTableTile::WoodenTableTile(int id) : TableTile(id, &Material::wood) {
    tex = getTextureUVCoordinateSet("planks", 0);
    secondary_tex = getTextureUVCoordinateSet("log", 0);
}
