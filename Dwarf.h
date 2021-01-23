#pragma once
#include "Character.h"
#include "Utility.h"


struct Dwarf : Character
{
                  //name, hit points, armor. 
    //Dwarf dwarf { "Maldin the Dwarf", 3, 1 };
    //Character(int hp, int armor_, int attackDamage_ );
    //Dwarf's attackDamage is 4
    Dwarf(std::string n, int hp, int armor);
    
    ~Dwarf() override;

    
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};

