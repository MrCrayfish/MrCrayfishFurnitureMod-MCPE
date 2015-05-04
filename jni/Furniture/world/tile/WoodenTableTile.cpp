#include "WoodenTableTile.h"

WoodenTableTile::WoodenTableTile(int id) : TableTile(id, &Material::wood) {
    primary_texture = getTextureUVCoordinateSet("planks", 0);
    secondary_texture = getTextureUVCoordinateSet("log", 0);
}
