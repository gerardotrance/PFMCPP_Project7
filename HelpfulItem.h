#include "Dwarf.h"
#include "Dragon.h"
#include "Paladin.h"
#include "DragonSlayer.h"


struct HelpfulItem : Item
{
    HelpfulItem() : Item("helpful item", 2) { }
    void use(Character* character) override;
};

