#include "CommonTypes.h"

// I made all this stuff 'cause MCPE TileID is too hard D:

bool TileID::operator==(unsigned char v) {
    return this->value == v;
}

bool TileID::operator==(TileID v) {
    return this->value == v.value;
}

TileID& TileID::operator=(const unsigned char& v) {
    this->value = v;
    return *this;
}

TileID::operator unsigned char() {
    return this->value;
}

FullTile::FullTile(TileID tile, DataID dat) {
	this->id = tile;
	this->data = dat;
}