#include "Fighter.hpp"

Fighter::Fighter(std::string name, int health, int atk_max, int blk_max) {
    this->name = name;
    this->health = health;
    this->atk_max = atk_max;
    this->blk_max = blk_max;
}

Fighter::~Fighter()
{
}

int Fighter::Attack() {
    return std::rand() % this->atk_max;
}

int Fighter::Block() {
    return std::rand() % this->blk_max;
}