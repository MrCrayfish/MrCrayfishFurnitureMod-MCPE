#pragma once
#include <vector>
#include <memory>
#include "MaterialType.h"

class Material {
public:
	MaterialType type; // 0
	bool flammable; // 4
	bool neverBuildable; // 5
	bool alwaysBreakable; // 6
	bool replaceable; // 7
	bool liquid; // 8
	float translucency; // 12
	bool blocksMotion; // 16
	bool solid; // 17
	bool superHot; // 18
	
	enum Settings : int {
		Default
	};
	
	static std::vector<std::unique_ptr<Material>> mMaterials;
	
	Material(MaterialType, Material::Settings, float);
	
	bool isType(MaterialType) const;
	bool isFlammable();
	bool isNeverBuildable();
	bool isAlwaysDestroyable();
	bool isReplaceable();
	bool isLiquid();
	float getTranslucency();
	bool getBlocksMotion() const;
	bool isSolid();
	bool isSuperHot();
	
	void _setReplaceable();
	
	static void addMaterial(std::unique_ptr<Material>);
	static void _setupSurfaceMaterials();
	static Material& getMaterial(MaterialType);
};