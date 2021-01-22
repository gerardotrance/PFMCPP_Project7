#pragma once
#include "Character.h"

struct Paladin : Character
{
    Paladin(std::string n, int hp, int armor) : Character(hp, armor, 10), name(n){}

    ~Paladin() override;

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
