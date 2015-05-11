#include "FurnitureTiles.h"

FurnitureTiles* FurnitureTiles::tileTableWood = NULL;
FurnitureTiles* FurnitureTiles::tileTableStone = NULL;
FurnitureTiles* FurnitureTiles::tileChairWood = NULL;
FurnitureTiles* FurnitureTiles::tileChairStone = NULL;
FurnitureTiles* FurnitureTiles::tileToilet = NULL;

FurnitureTiles::FurnitureTiles(int id, Material const* material) : Tile(id, material) {
	init();
	category = 1;
}

const TextureUVCoordinateSet& FurnitureTiles::getTexture(signed char side, int data) {
	return tex;
}