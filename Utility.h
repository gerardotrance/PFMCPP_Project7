#pragma once

#include <vector>
#include <memory>
#include "Item.h" //hint sometimes you have to include and you won't know until you try to compile. 
std::vector<std::unique_ptr<Item>> makeHelpfulItems(int num);

std::vector<std::unique_ptr<Item>> makeDefensiveItems(int num);


struct Character; //hint
std::string getCharacterStats(Character* ch);

void useDefensiveItem(Character*, Item&);
void useHelpfulItem(Character*, Item*);
void useAttackItem(Character*, Item*);

