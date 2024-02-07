#include <iostream>
#include "Punch.h"
#include "../../Character/Character.h"

using namespace std;

void Punch::useSkill(Character* target, Character* attacker)
{
    target -> setHealth(target->getHealth() - 10);
}