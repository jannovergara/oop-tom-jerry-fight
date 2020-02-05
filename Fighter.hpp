#ifndef FIGHTER_H
#define FIGHTER_H

#include <iostream>

class Fighter
{
private:
    int atk_max, blk_max;
public:
    std::string name;
    int health;
    int Attack();
    int Block();

    Fighter(std::string, int, int, int);
    ~Fighter();
};

#endif