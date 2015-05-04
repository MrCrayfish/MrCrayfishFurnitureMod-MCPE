#include "ItemInstance.h"

ItemInstance::ItemInstance(int id, int count, int damage) {
	this->count = count;
	this->damage = damage;
	this->_setItem(id);
}
