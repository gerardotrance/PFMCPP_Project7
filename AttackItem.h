#pragma once

#include "Item.h"

struct AttackItem : Item
{
    AttackItem() : Item("AttackItem", 10){}
    void use(Character* character) override;
};
