#pragma once

class LiquidTileDynamic : public Tile {
public:
	bool _isWaterBlocking(TileSource*, const TilePos&);
};