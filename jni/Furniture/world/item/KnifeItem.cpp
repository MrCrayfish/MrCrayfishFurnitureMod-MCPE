#include "KnifeItem.h"

int KnifeItem::_id = 472;

KnifeItem::KnifeItem(int id) : FurnitureItem("itemKnife", id) {
	setIcon("itemknife", 0);
}
