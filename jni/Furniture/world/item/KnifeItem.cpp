#include "KnifeItem.h"

int KnifeItem::_id = 472;

KnifeItem::KnifeItem(int id) : Item(id) {
	setNameID("choppingBoardItem");
	setIcon("choppingBoardItem", 0);
}