#include <cmath>

#include "Battle.hpp"

Battle::Battle(/* args */)
{
}

Battle::~Battle()
{
}

void Battle::StartBattle(Fighter &fighter1, Fighter &fighter2) {
    while(true) {
        if(!Battle::GetAttackResult(fighter1, fighter2).compare("Game Over")) {
            std::cout << "Game over..." << std::endl;
            break;
        }

        if(!Battle::GetAttackResult(fighter2, fighter1).compare("Game Over")) {
            std::cout << "Game over..." << std::endl;
            break;
        }
        
    }
    
}

std::string Battle::GetAttackResult(Fighter &fighter1, Fighter &fighter2) {
    int fighter1AtkAmt = fighter1.Attack();
    int fighter2BlkAmt = fighter2.Block();
    int dmg2Fighter2 = ceil(fighter1AtkAmt - fighter2BlkAmt);

    dmg2Fighter2 = (dmg2Fighter2 <= 0) ? 0 : dmg2Fighter2;
    fighter2.health = fighter2.health - dmg2Fighter2;

    std::cout << fighter1.name << " attacks " << fighter2.name << " and deals " <<
        dmg2Fighter2 << " damage. " << std::endl;

    std::cout << fighter2.name << " is down to " << fighter2.health << std::endl;

    if(fighter2.health <= 0) {
        std::cout << fighter2.name << " has Died and " << fighter1.name <<
            " is Victorious." << std::endl;
        return "Game Over";
    }

    return "Fight Again..";
}