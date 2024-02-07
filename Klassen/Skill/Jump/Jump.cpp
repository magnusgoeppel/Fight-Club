#include <iostream>
#include "Jump.h"
#include "../../Character/Character.h"

using namespace std;

void Jump::useSkill(Character* target, Character* attacker)
{
    target -> setHealth(target->getHealth() - 5);
}