#include "Paladin.h"
#include "Utility.h"

//Paladin::Paladin
Paladin::Paladin(std::string n, int hp, int armor) : Character(hp, armor, 10), name(n)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
}
// Paladin::getName

// Paladin::getStats
const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}

Paladin::~Paladin(){}
