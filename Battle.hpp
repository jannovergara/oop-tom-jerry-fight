#ifndef BATTLE_H
#define BATTLE_H

#include "Fighter.hpp"

class Battle {
public:
    static void StartBattle(Fighter&, Fighter&);
    static std::string GetAttackResult(Fighter&, Fighter&);
    Battle(/* args */);
    ~Battle();
};

#endif