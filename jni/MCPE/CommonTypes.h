#pragma once

#include <stdint.h>

typedef uint_fast8_t DataID;
typedef int_fast8_t FacingID;

struct BlockID {
    unsigned char value;

    BlockID() {
        this->value = 1;
    }

    BlockID(unsigned char val) {
        this->value = val;
    }

    BlockID(BlockID const& other) {
		this->value = other.value;
	}

    static const BlockID AIR;

    bool operator==(unsigned char);
    bool operator==(BlockID);
    BlockID& operator=(const unsigned char&);
    operator unsigned char();
};

class FullBlock {
public:
	static const FullBlock AIR;

	BlockID id;
	DataID data;

	FullBlock(BlockID, DataID);
};

struct Brightness {
    static uint_fast8_t MIN;
    static uint_fast8_t MAX;
};