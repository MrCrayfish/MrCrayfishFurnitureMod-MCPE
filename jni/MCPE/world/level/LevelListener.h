#pragma once
#include "BlockSourceListener.h"
#include <string>
class Vec3;
class LevelChunk;
class LevelEvent;
class Entity;
class Player;
class ParticleType;

class LevelListener : public BlockSourceListener {
public:
	virtual ~LevelListener();
	virtual void allChanged();
	virtual void addParticle(ParticleType, const Vec3&, const Vec3&, int);
	virtual void playSound(const std::string&, const Vec3&, float, float);
	virtual void playMusic(const std::string&, const Vec3&, float);
	virtual void playStreamingMusic(const std::string&, int, int, int);
	virtual void onEntityAdded(Entity&);
	virtual void onEntityRemoved(Entity&);
	virtual void onNewChunkFor(Player&, LevelChunk&);
	virtual void levelEvent(LevelEvent, const Vec3&, int);
};
