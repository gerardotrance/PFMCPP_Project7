#include "Dwarf.h"

// Dwarf::Dwarf
Dwarf::Dwarf(std::string n, int hp, int armor) : Character(hp, armor, 4), name(n)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

Dwarf::~Dwarf(){}

//Dwarf::getName

//Dwarf::getStats
