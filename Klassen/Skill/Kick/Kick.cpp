#include "Kick.h"
#include "../../Character/Character.h"
#include <iostream>

using namespace std;

void Kick::useSkill(Character* target, Character* attacker)
{
    target -> setHealth(target->getHealth() - 15);
}
