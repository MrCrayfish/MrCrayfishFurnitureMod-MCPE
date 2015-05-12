#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <substrate.h>

#include "MCPE/world/level/tile/Tile.h"
#include "MCPE/world/material/Material.h"
#include "MCPE/world/item/Item.h"
#include "MCPE/client/renderer/tile/TileTessellator.h"
#include "MCPE/locale/I18n.h"

#include "Furniture/render/tile/RenderDispatcher.h"
#include "Furniture/render/tile/renderers/ChairRenderer.h"
#include "Furniture/render/tile/renderers/TableRenderer.h"
#include "Furniture/render/tile/renderers/ToiletRenderer.h"
#include "Furniture/world/tile/FurnitureTile.h"
#include "Furniture/world/tile/TableTile.h"
#include "Furniture/world/tile/ChairTile.h"
#include "Furniture/world/tile/ToiletTile.h"
#include "Furniture/world/item/FurnitureItem.h"
#include "Furniture/world/item/TableItem.h"
#include "Furniture/world/item/ChairItem.h"
#include "Furniture/world/item/ToiletItem.h"
#include "Furniture/world/item/material/ItemMaterial.h"
#include "Furniture/world/tile/attributes/FurnitureTileAttributes.h"


static void (*_TileTessellator$tessellateInWorld)(TileTessellator*, Tile*, const TilePos&, bool);
static void TileTessellator$tessellateInWorld(TileTessellator* self, Tile* tile, const TilePos& pos, bool b) {
	if(!RenderDispatcher::dispatch(tile->id, self, self->region, tile, pos))
		_TileTessellator$tessellateInWorld(self, tile, pos, b);
}

void initRenderers() {
	RenderDispatcher::registerRenderer(TableTile::_woodId, new TableRenderer());
	RenderDispatcher::registerRenderer(TableTile::_stoneId, new TableRenderer());
	RenderDispatcher::registerRenderer(ChairTile::_woodId, new ChairRenderer());
	RenderDispatcher::registerRenderer(ChairTile::_stoneId, new ChairRenderer());
	RenderDispatcher::registerRenderer(ToiletTile::_id, new ToiletRenderer());
}

static void (*_Tile$initTiles)();
static void Tile$initTiles() {
	_Tile$initTiles();

	FurnitureTileAttributes woodAttributes(&Material::wood, "planks", "log", Tile::SOUND_WOOD, 1.0F);
	FurnitureTileAttributes stoneAttributes(&Material::stone, "stone", "cobblestone", Tile::SOUND_STONE, 1.5F);

	FurnitureTile::tileTableWood = new TableTile(TableTile::_woodId, "woodTableTile", woodAttributes, TableItem::_woodId);
	FurnitureTile::tileTableStone = new TableTile(TableTile::_stoneId, "stoneTableTile", stoneAttributes, TableItem::_stoneId);
	FurnitureTile::tileChairWood = new ChairTile(ChairTile::_woodId, "woodChairTile", woodAttributes, ChairItem::_woodId);
	FurnitureTile::tileChairStone = new ChairTile(ChairTile::_stoneId, "stoneChairTile", stoneAttributes, ChairItem::_stoneId);
	FurnitureTile::tileToilet = new ToiletTile(ToiletTile::_id, &Material::stone);

	initRenderers();
}

static void (*_Item$initItems)();
static void Item$initItems() {
	FurnitureItem::itemTableWood = new TableItem(TableItem::_woodId, "woodTableItem", "apple", ItemMaterial::WOOD, TableTile::_woodId);
	FurnitureItem::itemTableStone = new TableItem(TableItem::_stoneId, "stoneTableItem", "arrow", ItemMaterial::STONE, TableTile::_stoneId);
	FurnitureItem::itemChairWood = new ChairItem(ChairItem::_woodId, "woodChairItem", "axe", ItemMaterial::WOOD, ChairTile::_woodId);
	FurnitureItem::itemChairStone = new ChairItem(ChairItem::_stoneId, "stoneChairItem", "emerald", ItemMaterial::STONE, ChairTile::_stoneId);
	FurnitureItem::itemToilet = new ToiletItem(ToiletItem::_id);

	_Item$initItems();
}

static void (*_Item$initCreativeItems)();
static void Item$initCreativeItems() {
	_Item$initCreativeItems();

	Item::addCreativeItem(FurnitureItem::itemTableWood, 0);
	Item::addCreativeItem(FurnitureItem::itemTableStone, 0);
	Item::addCreativeItem(FurnitureItem::itemChairWood, 0);
	Item::addCreativeItem(FurnitureItem::itemChairStone, 0);
	Item::addCreativeItem(FurnitureItem::itemToilet, 0);
}

static std::string (*_I18n$get)(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
static std::string I18n$get(std::string const& key, std::vector<std::string, std::allocator<std::string>> const& a) {
	if(key == "item.woodTableItem.name") return "Wooden Table";
	if(key == "item.stoneTableItem.name") return "Stone Table";
	if(key == "item.woodChairItem.name") return "Wooden Chair";
	if(key == "item.stoneChairItem.name") return "Stone Chair";
	if(key == "item.toiletItem.name") return "Toilet";
	if(key == "item.cabinetItem.name") return "Cabinet";
	
	return _I18n$get(key, a);
};


JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	
	MSHookFunction((void*) &TileTessellator::tessellateInWorld, (void*) &TileTessellator$tessellateInWorld, (void**) &_TileTessellator$tessellateInWorld);
	MSHookFunction((void*) &Item::initItems, (void*) &Item$initItems, (void**) &_Item$initItems);
	MSHookFunction((void*) &Tile::initTiles, (void*) &Tile$initTiles, (void**) &_Tile$initTiles);
	MSHookFunction((void*) &Item::initCreativeItems, (void*) &Item$initCreativeItems, (void**) &_Item$initCreativeItems);
	MSHookFunction((void*) &I18n::get, (void*) &I18n$get, (void**) &_I18n$get);


	return JNI_VERSION_1_2;
}
