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

var woodenChairID = 255;
var woodenTableID = 254;
var woodenCoffeeTableID = 253;
var stoneChairID = 252;
var stoneTableID = 251;
var stoneCoffeeTableID = 250;
/*case cabinetID = 506;
case whiteCouchID = 507;
case greenCouchID = 508;
case brownCouchID = 509;
case redCouchID = 510;
case blackCouchID = 511;
case lampID = 512;
case ovenID = 513;
case ovenRangehoodID = 514;
case oakHedgeID = 515;
case spruceHedgeID = 516;
case birchHedgeID = 517;
case jungleHedgeID = 518;
case whiteFenceID = 519;
case tvID = 520;
case computerID = 521;
case printerID = 522;
case stereoID = 523;
case ceilingLightID = 524;
case toiletID = 525;
case basinID = 526;
case wallCabinetID = 527;*/

var oak = ["planks", 0]
var cob = ["cobblestone", 0]

Block.defineBlock(woodenChairID, "Wooden Chair", [oak, oak, oak, oak, oak, oak], 0, false, renderChairID);
Block.defineBlock(woodenTableID, "Wooden Table", [oak, oak, oak, oak, oak, oak], 0, false, renderTableID);
Block.defineBlock(woodenCoffeeTableID, "Wooden Coffee Table", [oak, oak, oak, oak, oak, oak], 0, false, renderCoffeeTableID);
Block.defineBlock(stoneChairID, "Stone Chair", [cob, cob, cob, cob, cob, cob], 1, false, renderChairID);
Block.defineBlock(stoneTableID, "Stone Table", [cob, cob, cob, cob, cob, cob], 1, false, renderTableID);
Block.defineBlock(stoneCoffeeTableID, "Stone Coffee Table", [cob, cob, cob, cob, cob, cob], 1, false, renderCoffeeTableID);
/*Block.defineBlock(cabinetID, "Cabinet", [["planks_oak", 0]], 0, true, 203);
Block.defineBlock(whiteCouchID, "White Couch", [["wool_colored_white", 0]], 0, true, 204);
Block.defineBlock(greenCouchID, "Green Couch", [["wool_colored_green", 0]], 0, true, 204);
Block.defineBlock(brownCouchID "Brown Couch", [["wool_colored_brown", 0]], 0, true, 204);
Block.defineBlock(redCouchID, "Red Couch", [["wool_colored_red", 0]], 0, true, 204);
Block.defineBlock(blackCouchID, "Black Couch", [["wool_colored_black", 0]], 0, true, 204);
Block.defineBlock(lampID, "Lamp", [["wool_colored_red", 0]], 0, true, 205);
Block.defineBlock(ovenID, "Oven", [["wool_colored_red", 0]], 0, true, 206);
Block.defineBlock(ovenRangehoodID, "Oven Rangehood", [["wool_colored_red", 0]], 0, true, 207);
Block.defineBlock(oakHedgeID, "Oak Hedge", [["leaves_4", 0]], 0, true, 208);
Block.defineBlock(spruceHedgeID, "Spruce Hedge", [["leaves_5", 0]], 0, true, 208);
Block.defineBlock(birchHedgeID, "Birch Hedge", [["leaves_6", 0]], 0, true, 208);
Block.defineBlock(jungleHedgeID, "Jungle Hedge", [["leaves_7", 0]], 0, true, 208);
Block.defineBlock(whiteFenceID, "White Fence", [["quartz_block_side", 0]], 0, true, 209);
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

var cob = ["cobblestone", 0]
Block.defineBlock(100, "DummyBlock1", [cob, cob, cob, cob, cob, cob], 0, false, 0);

var oak = ["planks", 0]
Block.defineBlock(101, "DummyBlock2", [oak, oak, oak, oak, oak, oak], 0, true, 0);

/** Furniture Register */

registerFurniture(511, "Wooden Chair", "record_11", woodenChairID);
registerFurniture(510, "Wooden Table", "record_blocks", woodenTableID);
registerFurniture(509, "Wooden Coffee Table", "record_13", woodenCoffeeTableID);
registerFurniture(508, "Stone Chair", "record_cat", stoneChairID);
registerFurniture(507, "Stone Table", "record_far", stoneTableID);
registerFurniture(506, "Stone Coffee Table", "record_chirp", stoneCoffeeTableID);

//ModPE.addCraftRecipe(1000, 1, 0, 280);
Item.addCraftRecipe(509, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(510, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(511, 1, 0, [3, 1, 0]); 
Item.addCraftRecipe(508, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(507, 1, 0, [3, 1, 0]);
Item.addCraftRecipe(506, 1, 0, [3, 1, 0]); 

/** Handles Furniture Placing */

function useItem(x, y, z, itemId, blockId, side)
{
    var yOffset = 1;
    if(getTile(x, y, z) == 78)
    {
		yOffset = 0;
    }
	var player = getPlayerEnt();
	var rotation = (((getYaw(player) * 4) / 360) + 0.5) & 3;
	clientMessage(rotation);
	
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

/** Furniture Register */

function registerFurniture(itemId, itemName, itemTexture, blockId)
{
	ModPE.setItem(itemId, itemTexture, 5, itemName, 0);
	itemDataInfo.push(new itemData(itemId, blockId));
}

function itemData(itemId, blockId)
{
	this.itemId = itemId;
	this.blockId = blockId;
}

/** Render Handler */

var renderId = 200;

function getNextAvaliableRenderId()
{
	return renderId++;
}

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
	}
}

/** Rotation Helper */

function renderComponent(block, x, y, z, metadata, var1, minY, var2, var3, maxY, var4)
{
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
    var metadata = Level.getData(x, y, z);
	var block = 101;
	if(blockId == stoneChairID) {
		block = 100;
	}

	renderComponent(block, x, y, z, metadata, 0.1, 0.0, 0.1, 0.2, 0.5, 0.2);
	renderComponent(block, x, y, z, metadata, 0.8, 0.0, 0.8, 0.9, 0.5, 0.9);
	renderComponent(block, x, y, z, metadata, 0.8, 0.0, 0.1, 0.9, 0.5, 0.2);
	renderComponent(block, x, y, z, metadata, 0.1, 0.0, 0.8, 0.2, 0.5, 0.9);
	renderComponent(block, x, y, z, metadata, 0.1, 0.5, 0.1, 0.9, 0.6, 0.9);
	renderComponent(block, x, y, z, metadata, 0.8, 0.6, 0.1, 0.9, 1.2, 0.9);
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
		renderComponent(block, x, y, z, 3, 0.175, 0.0, 0.175, 0.425, 0.9, 0.425);
	}
	if (forward && !right && left && !back) {
		renderComponent(block, x, y, z, 3, 0.175, 0.0, 0.575, 0.425, 0.9, 0.825);
	}
	if (!forward && right && !left && back) {
		renderComponent(block, x, y, z, 3, 0.575, 0.0, 0.175, 0.825, 0.9, 0.425);		
	}
	if (!forward && !right && left && back) {
		renderComponent(block, x, y, z, 3, 0.575, 0.0, 0.575, 0.825, 0.9, 0.825);
	}
	if (forward && !right && !left && !back) {
		renderComponent(block, x, y, z, 3, 0.175, 0.0, 0.375, 0.425, 0.9, 0.625);
	}
	if (!forward && right && !left && !back) {
		renderComponent(block, x, y, z, 3, 0.375, 0.0, 0.175, 0.625, 0.9, 0.425);
	}
	if (!forward && !right && left && !back) {
		renderComponent(block, x, y, z, 3, 0.375, 0.0, 0.575, 0.625, 0.9, 0.825);
	}
	if (!forward && !right && !left && back) {
		renderComponent(block, x, y, z, 3, 0.575, 0.0, 0.375, 0.825, 0.9, 0.625);
	}
	if (!forward && !right && !left && !back) {
		renderComponent(block, x, y, z, 3, 0.375, 0.0, 0.375, 0.625, 0.9, 0.625);
	}
	
	renderComponent(block, x, y, z, 3, 0.0, 0.9, 0.0, 1.0, 1.0, 1.0);
}

function renderCoffeeTable(blockId, x, y, z)
{
	var forward = (getTile(x + 1, y, z) == woodenCoffeeTableID) | (getTile(x + 1, y, z) == stoneCoffeeTableID);
	var back = (getTile(x - 1, y, z) == woodenCoffeeTableID) | (getTile(x - 1, y, z) == stoneCoffeeTableID);
	var left = (getTile(x, y, z - 1) == woodenCoffeeTableID) | (getTile(x, y, z - 1) == stoneCoffeeTableID);
	var right = (getTile(x, y, z + 1) == woodenCoffeeTableID) | (getTile(x, y, z + 1) == stoneCoffeeTableID);
	
	var block = 101;
	
	renderComponent(block, x, y, z, 3, 0.0, 0.4, 0.0, 1.0, 0.5, 1.0);
	
	if (!back) {
		if (!left) {
			renderComponent(block, x, y, z, 3, 0.0, 0.0, 0.0, 0.1, 0.4, 0.1);
		}
		if (!right) {
			renderComponent(block, x, y, z, 3, 0.0, 0.0, 0.9, 0.1, 0.4, 1.0);
		}
	}
	if (!forward) {
		if (!left) {
			renderComponent(block, x, y, z, 3, 0.9, 0.0, 0.0, 1.0, 0.4, 0.1);
		}
		if (!right) {
			renderComponent(block, x, y, z, 3, 0.9, 0.0, 0.9, 1.0, 0.4, 1.0);
		}
	}
	if (!left) {
		if (!forward) {
			renderComponent(block, x, y, z, 3, 0.9, 0.0, 0.0, 1.0, 0.4, 0.1);
		}
		if (!back) {
			renderComponent(block, x, y, z, 3, 0.0, 0.0, 0.0, 0.1, 0.4, 0.1);
		}
	}
	if (!right) {
		if (!forward) {
			renderComponent(block, x, y, z, 3, 0.9, 0.0, 0.9, 1.0, 0.4, 1.0);
		}
		if (!back) {
			renderComponent(block, x, y, z, 3, 0.0, 0.0, 0.9, 0.1, 0.4, 1.0);
		}
	}
}