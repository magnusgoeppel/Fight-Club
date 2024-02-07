#include "PlaymodeHard.h"
#include "../../Character/Character.h"

void PlaymodeHard::DesicionTree(Character* target, Character* attacker)
{
    if ((attacker -> getSkill1() == "Block" && attacker->getSkill2() == "Jump") || (attacker -> getSkill1() == "Jump" && attacker -> getSkill2() == "Block"))
    {
        if(target -> getLastUsedSkill() == "Block")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Jump") ? 1 : 2);
            attacker -> setLastUsedSkill("Jump");
        }
        else if(target -> getLastUsedSkill() == "Punch")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Jump") ? 1 : 2);
            attacker -> setLastUsedSkill("Jump");
        }
        else if(target -> getLastUsedSkill() == "Kick")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Jump") ? 1 : 2);
            attacker -> setLastUsedSkill("Jump");
        }
        else if(target -> getLastUsedSkill() == "Jump")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Jump") ? 1 : 2);
            attacker -> setLastUsedSkill("Jump");
        }

    }
    else if ((attacker -> getSkill1() == "Block" && attacker -> getSkill2() == "Punch") || (attacker -> getSkill1() == "Punch" && attacker -> getSkill2() == "Block"))
    {
        if(target -> getLastUsedSkill() == "Block")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Block") ? 1 : 2);
            attacker -> setLastUsedSkill("Block");
        }
        else if(target -> getLastUsedSkill() == "Punch")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Punch") ? 1 : 2);
            attacker -> setLastUsedSkill("Punch");
        }
        else if(target -> getLastUsedSkill() == "Kick")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Punch") ? 1 : 2);
            attacker -> setLastUsedSkill("Punch");
        }
        else if(target -> getLastUsedSkill() == "Jump")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Punch") ? 1 : 2);
            attacker -> setLastUsedSkill("Punch");
        }
    }
    else if ((attacker->getSkill1() == "Block" && attacker->getSkill2() == "Kick") || (attacker->getSkill1() == "Kick" && attacker->getSkill2() == "Block"))
    {
        if(target -> getLastUsedSkill() == "Block")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Punch")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Kick")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Jump")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Jump");
        }
    }
    else if ((attacker->getSkill1() == "Jump" && attacker->getSkill2() == "Punch") || (attacker->getSkill1() == "Punch" && attacker->getSkill2() == "Jump"))
    {
        if(target -> getLastUsedSkill() == "Block")
        {
            attacker -> useSkill(target,2,  (attacker -> getSkill1() == "Punch") ? 1 : 2);
            attacker -> setLastUsedSkill("Punch");
        }
        else if(target -> getLastUsedSkill() == "Punch")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Punch") ? 1 : 2);
            attacker -> setLastUsedSkill("Punch");
        }
        else if(target -> getLastUsedSkill() == "Kick")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Punch") ? 1 : 2);
            attacker -> setLastUsedSkill("Punch");
        }
        else if(target->getLastUsedSkill() == "Jump")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Punch") ? 1 : 2);
            attacker -> setLastUsedSkill("Punch");
        }
    }
    else if ((attacker->getSkill1() == "Jump" && attacker->getSkill2() == "Kick") || (attacker->getSkill1() == "Kick" && attacker->getSkill2() == "Jump"))
    {
        if(target -> getLastUsedSkill() == "Block")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Punch")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Kick")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Jump")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
    }
    else if ((attacker->getSkill1() == "Punch" && attacker->getSkill2() == "Kick") || (attacker->getSkill1() == "Kick" && attacker->getSkill2() == "Punch"))
    {
        if(target -> getLastUsedSkill() == "Block")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Punch")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Kick")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
        else if(target -> getLastUsedSkill() == "Jump")
        {
            attacker -> useSkill(target,2,  (attacker->getSkill1() == "Kick") ? 1 : 2);
            attacker -> setLastUsedSkill("Kick");
        }
    }
}