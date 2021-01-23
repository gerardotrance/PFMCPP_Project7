#pragma once

#include "Character.h"
#include "Utility.h"
#include "AttackItem.h"

struct Dragon : Character
{
    
    Dragon(std::string n, int hp, int armor) : Character(hp, armor, 96), name(n)
    {
        
    }

    
    ~Dragon() override;

    void attack(Character& other) override;

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};

