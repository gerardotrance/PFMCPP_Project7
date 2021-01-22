#include "Dwarf.h"

// Dwarf::Dwarf
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
