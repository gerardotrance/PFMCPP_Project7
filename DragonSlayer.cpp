#include "DragonSlayer.h"
#include "Dragon.h"

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(std::string n, int hp, int armor) : Character(hp, armor, 57), name(n)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
}
//DragonSlayer::getName
const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        attackItem->use(this); FIXME: make sure your attack item is valid before trying to use it.  hint: project 6 part 1
        attackItem.reset();
        //assert(false);
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //
        while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

//DragonSlayer::getStats
std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}

DragonSlayer::~DragonSlayer(){}
