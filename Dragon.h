#pragma once

#include "Character.h"


struct Dragon : Character
{
    
    Dragon(std::string n, int hp, int armor) : Character(hp, armor, 80), name(n)
    {
        
    }

    
    ~Dragon() override;

    void attack(Character& other) override;

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};

