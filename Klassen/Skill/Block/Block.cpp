#include <iostream>
#include "Block.h"
#include "../../Character/Character.h"

using namespace std;

void Block::useSkill(Character* target, Character* attacker)
{
    if (target -> getLastUsedSkill() == "Punch" || target -> getLastUsedSkill() == "Kick" || target -> getLastUsedSkill() == "Jump")
    {
        attacker -> setHealth(attacker->getHealth() + 5);
        target -> setHealth(target->getHealth() - 5);
    }

}
