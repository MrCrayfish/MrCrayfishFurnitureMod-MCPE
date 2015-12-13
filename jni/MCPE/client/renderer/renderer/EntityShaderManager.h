#pragma once
class Entity;

class EntityShaderManager {
protected:
	char filler[40];

public:
	EntityShaderManager();
	
	virtual ~EntityShaderManager();
	virtual int _getOverlayColor(Entity&, float) const;
};

