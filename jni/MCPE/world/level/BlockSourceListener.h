#pragma once

class BlockSource;
class TileEntity;
class BlockPos;
class FullBlock;

class BlockSourceListener {
public:
	virtual ~BlockSourceListener();
	virtual void onSourceCreated(BlockSource *);
	virtual void onSourceDestroyed(BlockSource *);
	virtual void onTilesDirty(BlockSource *, int, int, int, int, int, int);
	virtual void onAreaChanged(BlockSource &, const BlockPos &, const BlockPos &);
	virtual void onTileChanged(BlockSource *, const BlockPos &, FullBlock, FullBlock, int);
	virtual void onBrightnessChanged(BlockSource &, BlockPos const&);
	virtual void onTileEntityChanged(BlockSource &, TileEntity &);
	virtual void onTileEntityRemoved(BlockSource &, std::unique_ptr<TileEntity> &);
	virtual void onTileEvent(BlockSource *, int, int, int, int, int);
};
