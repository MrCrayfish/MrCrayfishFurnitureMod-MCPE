#pragma once

#include <string>
#include <memory>
#include <vector>

class BlockSource;
class Level;
class Entity;
class Material;
class Player;
class EntityPos;
class Vec2;
class CompoundTag;
class EntityLink;
class EntityDamageSource;
class ItemInstance;
#include "../phys/AABB.h"
#include "../phys/Vec3.h"


class Entity {
public:
	//void** vtable; // 0
	char synchedData[20]; // 4
	float x; // 24
	float y; // 28
	float z; // 32
	float chunkPos[3]; // 36
	BlockSource& region; // 48
	int added; // 52
	Level* level; // 56
	float oldX; // 60
	float oldY; // 64
	float oldZ; // 68
	float velX; // 72
	float velY; // 76
	float velZ; // 80
	float yaw; // 84
	float pitch; // 88
	float oldYaw; // 92
	float oldPitch; // 96
	float rideYaw; // 100
	float ridePitch; // 104
	float terrainOffset; // 108
	Vec3 lightDirection; // 112
	float color_lastLightColor[4]; // 124
	AABB bb; // 140
	char filler[48]; // 164
	int ticks; // 212
	int invulnerableTime; // 216
	int oxygen; // 220
	int fireTicks; // 224
	int flameTime; // 228
	int renderer; // 232
	Entity* rider; // 236
	Entity* riding; // 240
	float fallDistance; // 244
	char finish[76]; // 248

	virtual ~Entity();
	virtual void reset();
	virtual void remove();
	virtual void setPos(float, float, float);
	virtual void setPos(Vec3 const&);
	virtual Vec3& getPos() const;
	virtual Vec3& getPosOld() const;
	virtual Vec3& getPosExtrapolated(float) const;
	virtual Vec3& getVelocity() const;
	virtual void setRot(float, float);
	virtual void move(float, float, float);
	virtual void moveTo(float, float, float, float, float);
	virtual void moveRelative(float, float, float);
	virtual void lerpTo(Vec3 const&, Vec2 const&, int);
	virtual void lerpMotion(float, float, float);
	virtual void turn(float, float);
	virtual void interpolateTurn(float, float);
	virtual void normalTick();
	virtual void baseTick();
	virtual void rideTick();
	virtual void* positionRider(Entity&) const;
	virtual float getRidingHeight();
	virtual float getRideHeight() const;
	virtual int getRideUseAnimation() const;
	virtual void startRiding(Entity&);
	virtual void addRider(Entity&);
	virtual void removeRider(Entity&);
	virtual bool intersects(float, float, float, float, float, float);
	virtual bool isFree(float, float, float, float);
	virtual bool isFree(float, float, float);
	virtual bool isInWall();
	virtual bool isInWater() const;
	virtual bool isInWaterOrRain();
	virtual bool isInLava();
	virtual bool isUnderLiquid(Material const*) const;
	virtual float getShadowRadius() const;
	virtual void makeStuckInWeb();
	virtual float getHeadHeight() const;
	virtual float getShadowHeightOffs();
	virtual bool isSkyLit(float);
	virtual float getBrightness(float);
	virtual bool interactPreventDefault();
	virtual void interactWithPlayer(Player*);
	virtual bool canInteractWith(Player*);
	virtual std::string getInteractText(Player*);
	virtual void playerTouch(Player*);
	virtual void push(Entity&);
	virtual void push(float, float, float);
	virtual bool isPickable();
	virtual bool isPushable();
	virtual bool isShootable();
	virtual bool isSneaking();
	virtual bool isAlive();
	virtual bool isOnFire() const;
	virtual bool isCreativeModeAllowed();
	virtual bool isSurfaceMob() const;
	virtual bool shouldRenderAtSqrDistance(float);
	virtual void hurt(EntityDamageSource&, int);
	virtual void animateHurt();
	virtual void doFireHurt(int);
	virtual void handleEntityEvent(char);
	virtual int getPickRadius();
	virtual void spawnAtLocation(int, int);
	virtual void spawnAtLocation(int, int, float);
	virtual void spawnAtLocation(ItemInstance const&, float);
	virtual void awardKillScore(Entity*, int);
	virtual void setEquippedSlot(int, int, int);
	virtual void save(CompoundTag&);
	virtual void saveWithoutId(CompoundTag&);
	virtual void load(CompoundTag const&);
	virtual void loadLinks(CompoundTag const&, std::vector<EntityLink, std::allocator<EntityLink>>&);
	virtual int getEntityTypeId() const;
	virtual void queryEntityRenderer();
	virtual bool isItemEntity();
	virtual bool isHangingEntity();
	virtual int getOwnerID();
	virtual AABB getHandleWaterAABB() const;
	virtual Player* getControllingPlayer() const;
	virtual void checkFallDamage(float, bool);
	virtual void causeFallDamage(float);
	virtual void setSize(float, float);
	virtual void setPos(EntityPos*);
	virtual void outOfWorld();
	virtual void markHurt();
	virtual void burn(int);
	virtual void lavaHurt();
	virtual void readAdditionalSaveData(CompoundTag const*) = 0; // The = 0 means that this is an abstract function
	virtual void addAdditionalSaveData(CompoundTag*) = 0; // it must be overridden by a subclass
	virtual void playStepSound(int, int, int, int);
	virtual void checkInsideTiles(float);
	virtual void onTileCollision(int);
	virtual void playSound(std::string const&, float, float);
	virtual void onSynchedDataUpdate(int);
	virtual bool canAddRider(Entity&) const;
	virtual void stopRiding(bool);
};