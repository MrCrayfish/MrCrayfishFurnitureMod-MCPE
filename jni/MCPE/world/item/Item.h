#pragma once
#include <string>
#include <memory>
#include "UseAnimation.h"
class TextureUVCoordinateSet;
struct FoodItemComponent;
struct SeedItemComponent;
class Block;
class CreativeItemCategory;
class ItemInstance;
#include "../entity/player/Player.h"
class Mob;
class Level;
class BlockID;
namespace RakNet {
	class BitStream;
};
namespace Json {
	class Value;
}
class Item {
public:
	unsigned char maxStackSize; // 4
	std::string atlas; // 8
	int idk; // 12
	short idk2; // 16
	short itemId; // 18
	std::string name; // 20
	short maxDamage; // 24
	short properties; // 26
	int maxUseDuration; // 28
	int useAnimation; // 32
	int creativeCategory; // 36
	int idk3; // 40
	int idk4; // 44
	TextureUVCoordinateSet& icon; // 48
	int idk5; // 52
	std::unique_ptr<FoodItemComponent> _foodDetails; // 56
	std::unique_ptr<SeedItemComponent> _seedDetails; // 60

	static Item* mItems[512];

	Item(const std::string&, short);

	virtual ~Item();
	virtual Item* setIcon(const std::string&, int);
	virtual Item* setIcon(const TextureUVCoordinateSet&);
	virtual void setMaxStackSize(unsigned char);
	virtual void setCategory(CreativeItemCategory);
	virtual void setStackedByData(bool);
	virtual void setMaxDamage(int);
	virtual void setHandEquipped();
	virtual void setUseAnimation(UseAnimation);
	virtual void setMaxUseDuration(int);
	virtual bool canBeDepleted();
	virtual bool canDestroySpecial(const Block*) const;
	virtual int getLevelDataForAuxValue(int) const;
	virtual bool isStackedByData() const;
	virtual int getMaxDamage();
	virtual int getAttackDamage();
	virtual bool isHandEquipped() const;
	virtual bool isArmor() const;
	virtual bool isDye() const;
	virtual bool isFoil(const ItemInstance*) const;
	virtual bool isThrowable() const;
	virtual bool canDestroyInCreative() const;
	virtual bool isLiquidClipItem(int) const;
	virtual bool requiresInteract() const;
	virtual const std::string& appendFormattedHovertext(std::string&, const ItemInstance&) const;
	virtual bool isValidRepairItem(const ItemInstance&, const ItemInstance&);
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual bool use(ItemInstance&, Player&);
	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);
	virtual void useTimeDepleted(ItemInstance*, Level*, Player*);
	virtual void releaseUsing(ItemInstance*, Player*, int);
	virtual float getDestroySpeed(ItemInstance*, Block*);
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
	virtual void interactEnemy(ItemInstance*, Mob*, Player*);
	virtual void mineBlock(ItemInstance*, BlockID, int, int, int, Mob*);
	virtual const std::string buildDescriptionName(const ItemInstance&) const;
	virtual const std::string buildEffectDescriptionName(const ItemInstance&) const;
	virtual void readUserData(ItemInstance*, RakNet::BitStream*) const;
	virtual void writeUserData(const ItemInstance*, RakNet::BitStream*, bool) const;
	virtual int getMaxStackSize(const ItemInstance*);
	virtual const std::string& getInteractText() const;
	virtual int getAnimationFrameFor(Mob&) const;
	virtual bool isEmissive(int) const;
	virtual const TextureUVCoordinateSet& getIcon(int, int, bool) const;
	virtual int getIconYOffset() const;
	virtual bool isMirroredArt() const;

	void init(Json::Value&);

	static TextureUVCoordinateSet getTextureUVCoordinateSet(const std::string&, int);
	static void initItems();
	static void addBlockItems();
	static void initCreativeItems();
	static void addCreativeItem(Block*, short);
	static void addCreativeItem(Item*, short);
	static void addCreativeItem(const ItemInstance&);
	static void addCreativeItem(short, short);
};