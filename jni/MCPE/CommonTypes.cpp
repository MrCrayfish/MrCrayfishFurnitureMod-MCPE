#include "CommonTypes.h"

// I made all this stuff 'cause MCPE BlockID is too hard D:

bool BlockID::operator==(unsigned char v) {
    return this->value == v;
}

bool BlockID::operator==(BlockID v) {
    return this->value == v.value;
}

BlockID& BlockID::operator=(const unsigned char& v) {
    this->value = v;
    return *this;
}

BlockID::operator unsigned char() {
    return this->value;
}

FullBlock::FullBlock(BlockID tile, DataID dat) {
	this->id = tile;
	this->data = dat;
}