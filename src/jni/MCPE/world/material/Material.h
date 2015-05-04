#pragma once

class Material {
public:
	enum Type {
		NORMAL,
		AIR,
		LIQUID,
		DECORATION,
		PORTAL
	};
	
	static Material water;
	static Material air;
	static Material leaves;
	static Material vegetable;
	static Material dirt;
	static Material lava;
	static Material replaceable_plant;
	static Material wood;
	static Material stone;
	static Material sand;
	static Material plant;
	static Material cake;
	static Material decoration;
	static Material topSnow;
	static Material cloth;
	static Material glass;
	static Material web;
	static Material metal;
	static Material ice;
	static Material snow;
	static Material clay;
	static Material fire;
	static Material sponge;
	static Material explosive;
	static Material coral;
	static Material cactus;
	static Material portal;
	static Material bed;
	static Material* logic;

	bool flammable;
	bool neverBuildable;
	bool alwaysBreakable;
	bool replaceable;
	bool liquid;
	char filler[3];
	float translucency;
	bool blocksMotion;
	bool isSolid;

	Material(Material::Type, float);
};