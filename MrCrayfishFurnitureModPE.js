 /**
  * MrCrayfish’s Furniture Mod PE
  * Copyright (C) 2014 MrCrayfish
  *
  * This program is free software; you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation; either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along
  * with this program; if not, write to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
  */

var itemDataInfo = [];

var renderChairID = 200;
var renderTableID = 201;
var renderCoffeeTableID = 202;
var renderCabinetID = 203;
var renderCouchID = 204;
var renderLampID = 205;
var renderOvenID = 206;
var renderOvenTopID = 207;
var renderHedgeID = 208;

var woodenChairID = 243;
var woodenTableID = 242;
var woodenCoffeeTableID = 241;
var stoneChairID = 240;
var stoneTableID = 239;
var stoneCoffeeTableID = 238;
var cabinetID = 237;
var bedsideCabinetID = 236;
var whiteCouchID = 235;
var greenCouchID = 234;
var brownCouchID = 233;
var redCouchID = 232;
var blackCouchID = 231;
var lampID = 230;
var ovenID = 229;
var ovenRangehoodID = 228;
var oakHedgeID = 227;
var spruceHedgeID = 226;
var birchHedgeID = 225;
var jungleHedgeID = 224;
var whiteFenceID = 223;
var tvID = 222;
var computerID = 221;
var printerID = 220;
var stereoID = 219;
var ceilingLightID = 218;
var toiletID = 217;
var basinID = 216;
var wallCabinetID = 215;

/** Textures */

var oak = ["planks", 0], spruce = ["planks", 1], birch = ["planks", 2], jungle = ["planks", 3];
var white = ["wool", 0], green = ["wool", 13], brown = ["wool", 12], red = ["wool", 14], black = ["wool", 15];
var cob = ["cobblestone", 0], stone = ["stone", 0], stoneslab = ["stone_slab", 0], glowstone = ["glowstone", 0];
var ironb = ["iron_block", 0], obsid = ["obsidian", 0], quartz = ["quartz_block", 1];
var leaves_1 = ["leaves", 4], leaves_2 = ["leaves", 5], leaves_3 = ["leaves", 6], leaves_4 = ["leaves", 7];

/** Blocks */

Block.defineBlock(woodenChairID, "Wooden Chair", [oak, oak, oak, oak, oak, oak], 0, false, renderChairID);
Block.defineBlock(woodenTableID, "Wooden Table", [oak, oak, oak, oak, oak, oak], 0, false, renderTableID);
Block.defineBlock(woodenCoffeeTableID, "Wooden Coffee Table", [oak, oak, oak, oak, oak, oak], 0, false, renderCoffeeTableID);
Block.defineBlock(stoneChairID, "Stone Chair", [cob, cob, cob, cob, cob, cob], 1, false, renderChairID);
Block.defineBlock(stoneTableID, "Stone Table", [cob, cob, cob, cob, cob, cob], 1, false, renderTableID);
Block.defineBlock(stoneCoffeeTableID, "Stone Coffee Table", [cob, cob, cob, cob, cob, cob], 1, false, renderCoffeeTableID);
Block.defineBlock(cabinetID, "Cabinet", [birch, birch, birch, birch, birch, birch], 0, false, renderCabinetID);
Block.defineBlock(bedsideCabinetID, "Bedside Cabinet", [birch, birch, birch, birch, birch, birch], 0, false, renderCabinetID);
Block.defineBlock(greenCouchID, "Green Couch", [green, green, green, green, green, green], 0, false, renderCouchID);
Block.defineBlock(whiteCouchID, "White Couch", [white, white, white, white, white, white], 0, false, renderCouchID);
Block.defineBlock(brownCouchID, "Brown Couch", [brown, brown, brown, brown, brown, brown], 0, false, renderCouchID);
Block.defineBlock(redCouchID, "Red Couch", [red, red, red, red, red, red], 0, false, renderCouchID);
Block.defineBlock(blackCouchID, "Black Couch", [black, black, black, black, black, black], 0, false, renderCouchID);
Block.defineBlock(lampID, "Lamp", [white, white, white, white, white, white], 0, false, renderLampID);
Block.defineBlock(ovenID, "Oven", [ironb, ironb, ironb, ironb, ironb, ironb], 0, false, renderOvenID);
Block.defineBlock(ovenRangehoodID, "Oven Rangehood", [ironb, ironb, ironb, ironb, ironb, ironb], 0, false, renderOvenTopID);
Block.defineBlock(oakHedgeID, "Oak Hedge", [leaves_1, leaves_1, leaves_1, leaves_1, leaves_1, leaves_1], 0, false, renderHedgeID);
Block.defineBlock(spruceHedgeID, "Spruce Hedge", [leaves_2, leaves_2, leaves_2, leaves_2, leaves_2, leaves_2], 0, false, renderHedgeID);
Block.defineBlock(birchHedgeID, "Birch Hedge", [leaves_3, leaves_3, leaves_3, leaves_3, leaves_3, leaves_3], 0, false, renderHedgeID);
Block.defineBlock(jungleHedgeID, "Jungle Hedge", [leaves_4, leaves_4, leaves_4, leaves_4, leaves_4, leaves_4], 0, false, renderHedgeID);
/*Block.defineBlock(whiteFenceID, "White Fence", [["quartz_block_side", 0]], 0, true, 209);
Block.defineBlock(tvID, "TV", [["planks_oak", 0]], 0, true, 210);
Block.defineBlock(computerID, "Computer", [["iron_block", 0]], 0, true, 211);
Block.defineBlock(printerID, "Printer", [["iron_block", 0]], 0, true, 212);
Block.defineBlock(stereoID, "Stereo", [["planks_oak", 0]], 0, true, 213);
Block.defineBlock(ceilingLightID, "Ceiling Light", [["leaves_7", 0]], 0, true, 214);
Block.defineBlock(toiletID, "Toilet", [["quartz_block_side", 0]], 0, true, 215);
Block.defineBlock(basinID, "Basin", [["quartz_block_side", 0]], 0, true, 216);
Block.defineBlock(wallCabinetID, "Wall Cabinet", [["quartz_block_side", 0]], 0, true, 217);

Block.setLightLevel(511, 1.0F);
Block.setLightLevel(513, 1.0F);
Block.setLightLevel(523, 1.0F);*/

/** Dummy Blocks */

Block.defineBlock(100, "DummyBlock1", [cob, cob, cob, cob, cob, cob], 0, false, 0);
Block.defineBlock(101, "DummyBlock2", [oak, oak, oak, oak, oak, oak], 0, false, 0);
Block.defineBlock(102, "DummyBlock3", [spruce, spruce, spruce, spruce, spruce, spruce], 0, false, 0);
Block.defineBlock(103, "DummyBlock4", [ironb, ironb, ironb, ironb, ironb, ironb], 0, false, 0);
Block.defineBlock(104, "DummyBlock5", [obsid, obsid, obsid, obsid, obsid, obsid], 0, false, 0);
Block.defineBlock(105, "DummyBlock6", [white, white, white, white, white, white], 0, false, 0);
Block.defineBlock(106, "DummyBlock7", [quartz, quartz, quartz, quartz, quartz, quartz], 0, false, 0);
Block.defineBlock(107, "DummyBlock8", [stone, stone, stone, stone, stone, stone], 0, false, 0);
Block.defineBlock(108, "DummyBlock9", [stoneslab, stoneslab, stoneslab, stoneslab, stoneslab, stoneslab], 0, false, 0);
Block.defineBlock(109, "DummyBlock10", [glowstone, glowstone, glowstone, glowstone, glowstone, glowstone], 0, false, 0);
Block.defineBlock(110, "DummyBlock11", [leaves_1, leaves_1, leaves_1, leaves_1, leaves_1, leaves_1], 0, false, 0);
Block.defineBlock(111, "DummyBlock12", [leaves_2, leaves_2, leaves_2, leaves_2, leaves_2, leaves_2], 0, false, 0);
Block.defineBlock(112, "DummyBlock13", [leaves_3, leaves_3, leaves_3, leaves_3, leaves_3, leaves_3], 0, false, 0);
Block.defineBlock(113, "DummyBlock14", [leaves_4, leaves_4, leaves_4, leaves_4, leaves_4, leaves_4], 0, false, 0);

/** Furniture Register */

function itemData(itemId, blockId)
{
	this.itemId = itemId;
	this.blockId = blockId;
}

function registerFurniture(itemId, itemName, itemTexture, blockId)
{
	ModPE.setItem(itemId, itemTexture, 5, itemName, 0);
	itemDataInfo.push(new itemData(itemId, blockId));
}

registerFurniture(511, "Wooden Chair", "record_11", woodenChairID);
registerFurniture(510, "Wooden Table", "record_blocks", woodenTableID);
registerFurniture(509, "Wooden Coffee Table", "record_13", woodenCoffeeTableID);
registerFurniture(508, "Stone Chair", "record_cat", stoneChairID);
registerFurniture(507, "Stone Table", "record_far", stoneTableID);
registerFurniture(506, "Stone Coffee Table", "record_chirp", stoneCoffeeTableID);
registerFurniture(505, "Cabinet", "record_mall", cabinetID);
registerFurniture(504, "Bedside Cabinet", "record_mall", bedsideCabinetID);
registerFurniture(503, "White Couch", "record_mellohi", whiteCouchID);
registerFurniture(502, "Green Couch", "record_stal", greenCouchID);
registerFurniture(501, "Brown Couch", "record_strad", brownCouchID);
registerFurniture(500, "Red Couch", "record_wait", redCouchID);
registerFurniture(499, "Black Couch", "record_ward", blackCouchID);
registerFurniture(498, "Lamp", "record_ward", lampID);
registerFurniture(497, "Oven", "record_ward", ovenID);
registerFurniture(496, "Oven Rangehood", "record_ward", ovenRangehoodID);
registerFurniture(495, "Oak Hedge", "record_ward", oakHedgeID);
registerFurniture(494, "Spruce Hedge", "record_ward", spruceHedgeID);
registerFurniture(493, "Birch Hedge", "record_ward", birchHedgeID);
registerFurniture(492, "Jungle Hedge", "record_ward", jungleHedgeID);

//ModPE.addCraftRecipe(1000, 1, 0, 280);
Item.addCraftRecipe(509, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(510, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(511, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(508, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(507, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(506, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(505, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(504, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(503, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(502, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(501, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(500, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(499, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(498, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(497, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(496, 1, 0, [3, 1, 0]);  
Item.addCraftRecipe(495, 1, 0, [3, 1, 0]);  
Item.addCraftRecipe(494, 1, 0, [3, 1, 0]);  
Item.addCraftRecipe(493, 1, 0, [3, 1, 0]);  

/** Handles Furniture Placing */

function useItem(x, y, z, itemId, blockId, side)
{
	var player = getPlayerEnt();
	var rotation = (((getYaw(player) * 4) / 360) + 0.5) & 3;	
    var yOffset = 1;
    
    if(getTile(x, y, z) == 78)
    {
		yOffset = 0;
    }
    
	for (var i = 0; i < itemDataInfo.length; i++)
	{
		var data = itemDataInfo[i];
		if(data.itemId == itemId)
		{
			Level.setTile(x, y + yOffset, z, data.blockId, rotation);
			break;
		}
	}
}

/** Render Handler */

function renderBlockHook(blockId, x, y, z)
{
	switch(Block.getRenderType(blockId))
	{
	case renderChairID:
		renderChair(blockId, x, y, z);
		break;
	case renderTableID:
		renderTable(blockId, x, y, z);
		break;
	case renderCoffeeTableID:
		renderCoffeeTable(blockId, x, y, z);
		break;
	case renderCabinetID:
		renderCabinet(blockId, x, y, z);
		break;
	case renderCouchID:
		renderCouch(blockId, x, y, z);
		break;
	case renderLampID:
		renderLamp(blockId, x, y, z);
		break;
	case renderOvenID:
		renderOven(blockId, x, y, z);
		break;
	case renderOvenTopID:
		renderOvenTop(blockId, x, y, z);
		break;
	case renderHedgeID:
		renderHedge(blockId, x, y, z);
	}
}

/** Rotation Helper */

function renderComponent(block, x, y, z, var1, minY, var2, var3, maxY, var4, useMetadata)
{
	var metadata = 3;
	if(useMetadata)
	{
		metadata = Level.getData(x, y, z);
	}
	
	switch (metadata) 
	{
	case 1:
		var var_temp_1 = var1;
		var1 = 1.0 - var3;
		var var_temp_2 = var2;
		var2 = 1.0 - var4;
		var3 = 1.0 - var_temp_1;
		var4 = 1.0 - var_temp_2;
		break;
	case 2:
		var var_temp_3 = var1;
		var1 = var2;
		var2 = 1.0 - var3;
		var3 = var4;
		var4 = 1.0 - var_temp_3;
		break;
	case 0:
		var var_temp_4 = var1;
		var1 = 1.0 - var4;
		var var_temp_5 = var2;
		var2 = var_temp_4;
		var var_temp_6 = var3;
		var3 = 1.0 - var_temp_5;
		var4 = var_temp_6;
		break;
	}
	Block.setShape(block, var1, minY, var2, var3, maxY, var4);
	BlockRenderer.renderBlock(block, x, y, z);
}

/** Block Renders */

function renderChair(blockId, x, y, z)
{
	var block = 101;
	if(blockId == stoneChairID) 
	{
		block = 100;
	}

	//Legs
	renderComponent(block, x, y, z, 0.1, 0.0, 0.1, 0.2, 0.5, 0.2, false);
	renderComponent(block, x, y, z, 0.8, 0.0, 0.8, 0.9, 0.5, 0.9, false);
	renderComponent(block, x, y, z, 0.8, 0.0, 0.1, 0.9, 0.5, 0.2, false);
	renderComponent(block, x, y, z, 0.1, 0.0, 0.8, 0.2, 0.5, 0.9, false);
	
	//Seat Base
	renderComponent(block, x, y, z, 0.1, 0.5, 0.1, 0.9, 0.6, 0.9, false);
	
	//Back Rest
	renderComponent(block, x, y, z, 0.8, 0.6, 0.1, 0.9, 1.2, 0.9, true);
}

function renderTable(blockId, x, y, z)
{
	var forward = (getTile(x + 1, y, z) == woodenTableID) | (getTile(x + 1, y, z) == stoneTableID);
	var back = (getTile(x - 1, y, z) == woodenTableID) | (getTile(x - 1, y, z) == stoneTableID);
	var left = (getTile(x, y, z - 1) == woodenTableID) | (getTile(x, y, z - 1) == stoneTableID);
	var right = (getTile(x, y, z + 1) == woodenTableID) | (getTile(x, y, z + 1) == stoneTableID);

	var block = 101;
	if(blockId == stoneTableID) {
		block = 100;
	}
	
	if (forward && right && !left && !back) {
		renderComponent(block, x, y, z, 0.175, 0.0, 0.175, 0.425, 0.9, 0.425, false);
	}
	if (forward && !right && left && !back) {
		renderComponent(block, x, y, z, 0.175, 0.0, 0.575, 0.425, 0.9, 0.825, false);
	}
	if (!forward && right && !left && back) {
		renderComponent(block, x, y, z, 0.575, 0.0, 0.175, 0.825, 0.9, 0.425, false);		
	}
	if (!forward && !right && left && back) {
		renderComponent(block, x, y, z, 0.575, 0.0, 0.575, 0.825, 0.9, 0.825, false);
	}
	if (forward && !right && !left && !back) {
		renderComponent(block, x, y, z, 0.175, 0.0, 0.375, 0.425, 0.9, 0.625, false);
	}
	if (!forward && right && !left && !back) {
		renderComponent(block, x, y, z, 0.375, 0.0, 0.175, 0.625, 0.9, 0.425, false);
	}
	if (!forward && !right && left && !back) {
		renderComponent(block, x, y, z, 0.375, 0.0, 0.575, 0.625, 0.9, 0.825, false);
	}
	if (!forward && !right && !left && back) {
		renderComponent(block, x, y, z, 0.575, 0.0, 0.375, 0.825, 0.9, 0.625, false);
	}
	if (!forward && !right && !left && !back) {
		renderComponent(block, x, y, z, 0.375, 0.0, 0.375, 0.625, 0.9, 0.625, false);
	}
	
	//Table Top
	renderComponent(block, x, y, z, 0.0, 0.9, 0.0, 1.0, 1.0, 1.0, false);
}

function renderCoffeeTable(blockId, x, y, z)
{
	var forward = (getTile(x + 1, y, z) == woodenCoffeeTableID) | (getTile(x + 1, y, z) == stoneCoffeeTableID);
	var back = (getTile(x - 1, y, z) == woodenCoffeeTableID) | (getTile(x - 1, y, z) == stoneCoffeeTableID);
	var left = (getTile(x, y, z - 1) == woodenCoffeeTableID) | (getTile(x, y, z - 1) == stoneCoffeeTableID);
	var right = (getTile(x, y, z + 1) == woodenCoffeeTableID) | (getTile(x, y, z + 1) == stoneCoffeeTableID);
	
	var block = blockId;
	
	//Table Top
	renderComponent(block, x, y, z, 0.0, 0.4, 0.0, 1.0, 0.5, 1.0, false);

	//Legs
	if (!back) {
		if (!left) {
			renderComponent(block, x, y, z, 0.0, 0.0, 0.0, 0.1, 0.4, 0.1, false);
		}
		if (!right) {
			renderComponent(block, x, y, z, 0.0, 0.0, 0.9, 0.1, 0.4, 1.0, false);
		}
	}
	if (!forward) {
		if (!left) {
			renderComponent(block, x, y, z, 0.9, 0.0, 0.0, 1.0, 0.4, 0.1, false);
		}
		if (!right) {
			renderComponent(block, x, y, z, 0.9, 0.0, 0.9, 1.0, 0.4, 1.0, false);
		}
	}
	if (!left) {
		if (!forward) {
			renderComponent(block, x, y, z, 0.9, 0.0, 0.0, 1.0, 0.4, 0.1, false);
		}
		if (!back) {
			renderComponent(block, x, y, z, 0.0, 0.0, 0.0, 0.1, 0.4, 0.1, false);
		}
	}
	if (!right) {
		if (!forward) {
			renderComponent(block, x, y, z, 0.9, 0.0, 0.9, 1.0, 0.4, 1.0, false);
		}
		if (!back) {
			renderComponent(block, x, y, z, 0.0, 0.0, 0.9, 0.1, 0.4, 1.0, false);
		}
	}
}

function renderCabinet(blockId, x, y, z)
{
	//Door
	renderComponent(102, x, y, z, -0.0625, 0.0625, 0.0625, 0.5, 0.9375, 0.9375, true);
	
	//Handle
	renderComponent(103, x, y, z, -0.1, 0.375, 0.125, 0.0, 0.75, 0.1875, true);
	renderComponent(103, x, y, z, -0.1, 0.6875, 0.1875, 0.0, 0.75, 0.25, true);
	renderComponent(103, x, y, z, -0.1, 0.375, 0.1875, 0.0, 0.4375, 0.25, true);
	
	//Base	
	renderComponent(cabinetID, x, y, z, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, false);
}

function renderBedsideCabinet(blockId, x, y, z)
{
	
}

var UP = 0;
var DOWN = 1;
var LEFT = 2;
var RIGHT = 3;

function renderCouch(blockId, x, y, z)
{
	var metadata = Level.getData(x, y, z);
	
	if(isCouch(x, y, z, metadata, DOWN))
	{
		if(getRotation(x, y, z, metadata, DOWN) == RIGHT)
		{
			renderComponent(blockId, x, y, z, 0.0, 0.6, 0.0, 0.75, 1.2, 0.25, true);
		}
		else if(getRotation(x, y, z, metadata, DOWN) == LEFT)
		{
			renderComponent(blockId, x, y, z, 0.0, 0.6, 0.75, 0.75, 1.2, 1.0, true);
		}
		else
		{
			if(isAirBlock(x, y, z, metadata, LEFT))
			{
				renderComponent(blockId, x, y, z, -0.001, 0.5, -0.2, 1.001, 0.9, 0.05, true);
			}
			if(isAirBlock(x, y, z, metadata, RIGHT))
			{
				renderComponent(blockId, x, y, z, -0.001, 0.5, 0.95, 1.001, 0.9, 1.2, true);
			}
		}
	}
	else
	{
		if(isAirBlock(x, y, z, metadata, LEFT))
		{
			renderComponent(blockId, x, y, z, -0.001, 0.5, -0.2, 1.001, 0.9, 0.05, true);
		}
		if(isAirBlock(x, y, z, metadata, RIGHT))
		{
			renderComponent(blockId, x, y, z, -0.001, 0.5, 0.95, 1.001, 0.9, 1.2, true);
		}
	}
	
	renderComponent(blockId, x, y, z, 0.75, 0.6, 0.0, 1.0, 1.2, 1.0, true);
	renderComponent(blockId, x, y, z, 0.0, 0.0, 0.0, 1.0, 0.6, 1.0, false);
}

function isCouch(x, y, z, metadata, rotation) 
{
	var block = 0;

	switch (rotation) {
	case UP:
		if (metadata == 3)
			block = getTile(x + 1, y, z);
		if (metadata == 1)
			block = getTile(x - 1, y, z);
		if (metadata == 2)
			block = getTile(x, y, z - 1);
		if (metadata == 0)
			block = getTile(x, y, z + 1);
		break;
	case DOWN:
		if (metadata == 3)
			block = getTile(x - 1, y, z);
		if (metadata == 1)
			block = getTile(x + 1, y, z);
		if (metadata == 2)
			block = getTile(x, y, z + 1);
		if (metadata == 0)
			block = getTile(x, y, z - 1);
		break;
	case LEFT:
		if (metadata == 2)
			block = getTile(x - 1, y, z);
		if (metadata == 0)
			block = getTile(x + 1, y, z);
		if (metadata == 3)
			block = getTile(x, y, z - 1);
		if (metadata == 1)
			block = getTile(x, y, z + 1);
		break;
	case RIGHT:
		if (metadata == 2)
			block = getTile(x + 1, y, z);
		if (metadata == 0)
				block = getTile(x - 1, y, z);
		if (metadata == 3)
			block = getTile(x, y, z + 1);
		if (metadata == 1)
			block = getTile(x, y, z - 1);
		break;
	}
	
	if(block == whiteCouchID | block == greenCouchID | block == brownCouchID | block == redCouchID | block == blackCouchID)
	{
		return true;
	}
	return false;
}

function isAirBlock(x, y, z, metadata, rotation) 
{
	switch (rotation) 
	{
	case UP:
		if (metadata == 3)
			return getTile(x + 1, y, z) == 0;
		if (metadata == 1)
			return getTile(x - 1, y, z) == 0;
		if (metadata == 2)
			return getTile(x, y, z - 1) == 0;
		if (metadata == 0)
			return getTile(x, y, z + 1) == 0;
	case DOWN:
		if (metadata == 3)
			return getTile(x - 1, y, z) == 0;
		if (metadata == 1)
			return getTile(x + 1, y, z) == 0;
		if (metadata == 2)
			return getTile(x, y, z + 1) == 0;
		if (metadata == 0)
			return getTile(x, y, z - 1) == 0;
	case LEFT:
		if (metadata == 2)
			return getTile(x - 1, y, z) == 0;
		if (metadata == 0)
			return getTile(x + 1, y, z) == 0;
		if (metadata == 3)
			return getTile(x, y, z - 1) == 0;
		if (metadata == 1)
			return getTile(x, y, z + 1) == 0;
	case RIGHT:
		if (metadata == 2)
			return getTile(x + 1, y, z) == 0;
		if (metadata == 0)
			return getTile(x - 1, y, z) == 0;
		if (metadata == 3)
			return getTile(x, y, z + 1) == 0;
		if (metadata == 1)
			return getTile(x, y, z - 1) == 0;
	}
	return false;
}

function getRotation(x, y, z, metadata, rotation) 
{
	var blockMetadata = getMetadata(x, y, z, metadata, rotation);
	if (metadata == 3) {
		if (blockMetadata == 3)
			return DOWN;
		if (blockMetadata == 1)
			return UP;
		if (blockMetadata == 2)
			return RIGHT;
		if (blockMetadata == 0)
			return LEFT;
	}
	if (metadata == 1) {
		if (blockMetadata == 3)
			return UP;
		if (blockMetadata == 1)
			return DOWN;
		if (blockMetadata == 2)
			return LEFT;
		if (blockMetadata == 0)
			return RIGHT;
	}
	if (metadata == 2) {
		if (blockMetadata == 3)
			return LEFT;
		if (blockMetadata == 1)
			return RIGHT;
		if (blockMetadata == 2)
			return DOWN;
		if (blockMetadata == 0)
			return UP;
	}
	if (metadata == 0) {
		if (blockMetadata == 3)
			return RIGHT;
		if (blockMetadata == 1)
			return LEFT;
		if (blockMetadata == 2)
			return UP;
		if (blockMetadata == 0)
			return DOWN;
	}
	return 0;
}

function getMetadata(x, y, z, metadata, rotation) 
{
	switch (rotation) 
	{
	case UP:
		if (metadata == 3)
			return Level.getData(x + 1, y, z);
		if (metadata == 1)
			return Level.getData(x - 1, y, z);
		if (metadata == 2)
			return Level.getData(x, y, z - 1);
		if (metadata == 0)
			return Level.getData(x, y, z + 1);
	case DOWN:
		if (metadata == 3)
			return Level.getData(x - 1, y, z);
		if (metadata == 1)
			return Level.getData(x + 1, y, z);
		if (metadata == 2)
			return Level.getData(x, y, z + 1);
		if (metadata == 0)
			return Level.getData(x, y, z - 1);
	case LEFT:
		if (metadata == 2)
			return Level.getData(x - 1, y, z);
		if (metadata == 0)
			return Level.getData(x + 1, y, z);
		if (metadata == 3)
			return Level.getData(x, y, z - 1);
		if (metadata == 1)
			return Level.getData(x, y, z + 1);
	case RIGHT:
		if (metadata == 2)
			return Level.getData(x + 1, y, z);
		if (metadata == 0)
			return Level.getData(x - 1, y, z);
		if (metadata == 3)
			return Level.getData(x, y, z + 1);
		if (metadata == 1)
			return Level.getData(x, y, z - 1);
	}
	return 0;
}

function renderLamp(blockId, x, y, z)
{
	//Shade
	renderComponent(106, x, y, z, 0.3, 0.85, 0.3, 0.7, 0.90, 0.7, false);
	renderComponent(106, x, y, z, 0.2, 0.8, 0.2, 0.8, 0.85, 0.8, false);
	renderComponent(106, x, y, z, 0.15, 0.7, 0.15, 0.85, 0.80, 0.85, false);
	renderComponent(106, x, y, z, 0.1, 0.5, 0.1, 0.9, 0.7, 0.9, false);
	
	//Base	
	renderComponent(105, x, y, z, 0.45, 0.0, 0.45, 0.55, 0.6, 0.55, false);
	renderComponent(105, x, y, z, 0.25, 0.0, 0.25, 0.75, 0.3125, 0.75, false);	
}

function renderOven(blockId, x, y, z)
{
	//Base
	renderComponent(106, x, y, z, 0.0625, 0.0, 0.0625, 0.9375, 1.0, 0.9375, false);
	
	//Stove Top		
	renderComponent(104, x, y, z, 0.1875, 0.5, 0.1875, 0.4325, 1.0625, 0.4375, false);
	renderComponent(104, x, y, z, 0.1875, 0.5, 0.5625, 0.4325, 1.0625, 0.8125, false);
	renderComponent(104, x, y, z, 0.5625, 0.5, 0.1875, 0.8125, 1.0625, 0.4375, false);
	renderComponent(104, x, y, z, 0.5625, 0.5, 0.5625, 0.8125, 1.0625, 0.8125, false);
	
	//Back Piece	
	renderComponent(106, x, y, z, 0.875, 0.0, 0.0624, 1.0, 1.1875, 0.9376, true);
		
	//Door
	renderComponent(107, x, y, z, 0.0, 0.2, 0.2, 0.0625, 0.8125, 0.8, true);

}

function renderOvenTop(blockId, x, y, z)
{
	//Vent Base
	renderComponent(108, x, y, z, 0.0, 0.025, 0.0, 1.0, 0.2, 1.0, false);
	
	//Vent Top	
	renderComponent(107, x, y, z, 0.0, 0.2, 0.0, 1.0, 0.25, 1.0, false);
		
	//Tunnel
	renderComponent(109, x, y, z, 0.5, 0.2, 0.2, 1.0, 1.0, 0.8, true);
		
	//Light
	renderComponent(104, x, y, z, 0.1, 0.0, 0.1, 0.9, 0.05, 0.9, false);
}
	
function renderHedge(blockId, x, y, z)
{
	//Base
	renderComponent(blockId, x, y, z, 0.1875, 0.0, 0.1875, 0.8125, 1.0, 0.8125, false);
	
	//Sides
	if (isHedge(x + 1, y, z) | getTile(x + 1, y, z) == 107) {
		renderComponent(blockId, x, y, z, 0.8125, 0.0, 0.1875, 1.0, 1.0, 0.8125, false);
	}
	if (isHedge(x - 1, y, z) | getTile(x - 1, y, z) == 107) {
		renderComponent(blockId, x, y, z, 0.0, 0.0, 0.1875, 0.1875, 1.0, 0.8125, false);
	}
	if (isHedge(x, y, z + 1) | getTile(x, y, z + 1) == 107) {
		renderComponent(blockId, x, y, z, 0.1875, 0.0, 0.8125, 0.8125, 1.0, 1.0, false);
	}
	if (isHedge(x, y, z - 1) | getTile(x, y, z - 1) == 107) {
		renderComponent(blockId, x, y, z, 0.1875, 0.0, 0.0, 0.8125, 1.0, 0.1875, false);
	}
	
	/*if (isHedge(x + 1, y, z) | getTile(x + 1, y, z) == 107 | world.isBlockNormalCube(x + 1, y, z)) {
		renderComponent(blockId, x, y, z, 3, 0.8125, 0.0, 0.1875, 1.0, 1.0, 0.8125);
	}
	if (isHedge(x - 1, y, z) | getTile(x - 1, y, z) == 107 | world.isBlockNormalCube(x - 1, y, z)) {
		renderComponent(blockId, x, y, z, 3, 0.0, 0.0, 0.1875, 0.1875, 1.0, 0.8125);
	}
	if (isHedge(x, y, z + 1) | getTile(x, y, z + 1) == 107 | world.isBlockNormalCube(x, y, z + 1)) {
		renderComponent(blockId, x, y, z, 3, 0.1875, 0.0, 0.8125, 0.8125, 1.0, 1.0);
	}
	if (isHedge(x, y, z - 1) | getTile(x, y, z - 1) == 107 | world.isBlockNormalCube(x, y, z - 1)) {
		renderComponent(blockId, x, y, z, 3, 0.1875, 0.0, 0.0, 0.8125, 1.0, 0.1875);
	}*/
}

function isHedge(x, y, z)
{
	var hedges = [oakHedgeID, spruceHedgeID, birchHedgeID, jungleHedgeID];
	for (var i = 0; i < hedges.length; i++)
	{
		if(getTile(x, y, z) == hedges[i])
		{
			return true;
		}
	}
	return false;
}		