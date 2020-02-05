#include <ctime>

#include "Fighter.hpp"
#include "Battle.hpp"

int main() {
    srand(time(NULL));

    Fighter Tom("Tom", 150, 8, 2);
    Fighter Jer("Jerry", 120, 5, 9);

    Battle::StartBattle(Tom, Jer);

    return 0;
}