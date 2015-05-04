#pragma once

#include <stdint.h>

typedef uint_fast8_t DataID;
typedef int_fast8_t FacingID;

struct TileID {
    unsigned char value;

    TileID() {
        this->value = 1;
    }

    TileID(unsigned char val) {
        this->value = val;
    }

    TileID(TileID const& other) {
		this->value = other.value;
	}

    static const TileID AIR;

    bool operator==(unsigned char);
    bool operator==(TileID);
    TileID& operator=(const unsigned char&);
    operator unsigned char();
};

class FullTile {
public:
	static const FullTile AIR;

	TileID id;
	DataID data;

	FullTile(TileID, DataID);
};

struct Brightness {
    static uint_fast8_t MIN;
    static uint_fast8_t MAX;
};