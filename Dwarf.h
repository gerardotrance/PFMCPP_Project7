#pragma once
#include "Character.h"
#include "Utility.h"


struct Dwarf : Character
{
                  //name, hit points, armor. 
    //Dwarf dwarf { "Maldin the Dwarf", 3, 1 };
    //Character(int hp, int armor_, int attackDamage_ );
    //Dwarf's attackDamage is 4
    Dwarf(std::string n, int hp, int armor) : Character(hp, armor, 4), name(n)
    {
        
    }

    
    const std::string& getName() override
    {
        return name;
    }
    std::string getStats() override
    {
        return getCharacterStats(this);
    }

private:
    const std::string name;
};

