#pragma once
#include <string>
#include <memory>
#include <vector>
class BlockSource;
class Level;
class Material;
class Player;
class EntityPos;
struct BlockPos;
struct Vec2;
class CompoundTag;
class ArmorSlot;
class EntityLink;
class EntityDamageSource;
class EntityEvent;
class ItemInstance;
class DimensionId;
class ChangeDimensionPacket;
struct AABB;
#include "type.h"
#include "../material/Material.h"
#include "../phys/Vec3.h"

class Entity {
public:
	void* synchedData; // 4
	Vec3 pos; // 8
	Vec3 oldPos; // 20
	Vec3 chunkPos; // 32
	Vec3 velocity; // 44
	float pitch; // 56
	float yaw; // 60
	float lastPitch; // 64
	float lastYaw; // 68
	char filler[44]; // 72
	Level& level; // 116
	char filler2[68]; // 120
	float heightOffset; // 188
	char filler3[52]; // 192
	int rendererId; // 244
	std::vector<Entity*> riders; // 248
	char filler4[70]; // 260
	bool wasInWater; // 330
	char dud[5]; // 331
	BlockSource& region; // 336

	Entity(BlockSource&);
	
	virtual ~Entity();
	virtual void _postInit();
	virtual void reset();
	virtual int getOwnerEntityType();
	virtual void remove();
	virtual void setPos(const Vec3&);
	virtual Vec3& getPos() const;
	virtual Vec3& getPosOld() const;
	virtual Vec3& getPosExtrapolated(float) const;
	virtual Vec3& getVelocity() const;
	virtual void move(const Vec3&);
	virtual void checkBlockCollisions(const AABB&);
	virtual void checkBlockCollisions();
	virtual void moveRelative(float, float, float);
	virtual void lerpTo(const Vec3&, const Vec2&, int);
	virtual void lerpMotion(const Vec3&);
	virtual void turn(const Vec2&);
	virtual void interpolateTurn(const Vec2&);
	virtual void* getAddPacket();
	virtual void normalTick();
	virtual void baseTick();
	virtual void rideTick();
	virtual void* positionRider(Entity&) const;
	virtual float getRidingHeight();
	virtual float getRideHeight() const;
	virtual void startRiding(Entity&);
	virtual void addRider(Entity&);
	virtual void removeRider(Entity&);
	virtual bool intersects(const Vec3&, const Vec3&);
	virtual bool isFree(const Vec3&, float);
	virtual bool isFree(const Vec3&);
	virtual bool isInWall();
	virtual bool isInvisible();
	virtual bool canShowNameTag();
	virtual void setNameTagVisible(bool);
	virtual const std::string& getNameTag() const;
	virtual void setNameTag(const std::string&);
	virtual bool isInWater() const;
	virtual bool isInWaterOrRain();
	virtual bool isInLava();
	virtual bool isUnderLiquid(MaterialType) const;
	virtual void makeStuckInWeb();
	virtual float getHeadHeight() const;
	virtual float getShadowHeightOffs();
	virtual float getShadowRadius() const;
	virtual bool isSkyLit(float);
	virtual float getBrightness(float);
	virtual bool interactPreventDefault();
	virtual void interactWithPlayer(Player&);
	virtual bool canInteractWith(Player&);
	virtual std::string getInteractText(Player&);
	virtual void playerTouch(Player&);
	virtual void push(Entity&, bool);
	virtual void push(const Vec3&);
	virtual bool isImmobile() const;
	virtual bool isSilent();
	virtual bool isPickable();
	virtual bool isPushable() const;
	virtual bool isShootable();
	virtual bool isSneaking() const;
	virtual bool isAlive();
	virtual bool isOnFire() const;
	virtual bool isCreativeModeAllowed();
	virtual bool isSurfaceMob() const;
	virtual bool shouldRenderAtSqrDistance(float);
	virtual void hurt(const EntityDamageSource&, int);
	virtual void animateHurt();
	virtual void doFireHurt(int);
	virtual void onLightningHit();
	virtual void handleEntityEvent(EntityEvent);
	virtual int getPickRadius();
	virtual void spawnAtLocation(int, int);
	virtual void spawnAtLocation(int, int, float);
	virtual void spawnAtLocation(const ItemInstance&, float);
	virtual void awardKillScore(Entity&, int);
	virtual void setEquippedSlot(ArmorSlot, int, int);
	virtual void setEquippedSlot(ArmorSlot, const ItemInstance&);
	virtual void save(CompoundTag&);
	virtual void saveWithoutId(CompoundTag&);
	virtual void load(const CompoundTag&);
	virtual void loadLinks(const CompoundTag&, std::vector<EntityLink, std::allocator<EntityLink>>&);
	virtual EntityType getEntityTypeId() const = 0;
	virtual void queryEntityRenderer();
	virtual void getSourceUniqueID();
	virtual void setOnFire(int);
	virtual AABB getHandleWaterAABB() const;
	virtual void handleInsidePortal();
	virtual int getPortalCooldown() const;
	virtual int getPortalWaitTime() const;
	virtual DimensionId getDimensionId() const;
	virtual void changeDimension(DimensionId);
	virtual void changeDimension(ChangeDimensionPacket&);
	virtual Player* getControllingPlayer() const;
	virtual void checkFallDamage(float, bool);
	virtual void causeFallDamage(float);
	virtual void playSound(const std::string&, float, float);
	virtual void onSynchedDataUpdate(int);
	virtual bool canAddRider(Entity&) const;
	virtual void sendMotionPacketIfNeeded();
	virtual void stopRiding(bool);
	virtual void buildDebugInfo(std::string&) const;
	virtual void setSize(float, float);
	virtual void setPos(const EntityPos&);
	virtual void outOfWorld();
	virtual void markHurt();
	virtual void burn(int);
	virtual void lavaHurt();
	virtual void readAdditionalSaveData(const CompoundTag*) = 0;
	virtual void addAdditionalSaveData(CompoundTag*) = 0;
	virtual void _playStepSound(const BlockPos&, int);
	virtual void checkInsideBlocks(float);
	virtual void pushOutOfBlocks(const Vec3&);
	virtual void updateWaterState();
	virtual void doWaterSplashEffect();
	virtual void updateInsideBlock();
	virtual void onBlockCollision(int);
	
	void _init();
};

typedef std::vector<Entity*> EntityList;

