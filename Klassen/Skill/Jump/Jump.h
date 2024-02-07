#ifndef FIGHT_CLUB_JUMP_H
#define FIGHT_CLUB_JUMP_H

#include "../Skill.h"

class Character;

class Jump : public Skill
{
    public:
        Jump() {};
        virtual ~Jump() {};

        void useSkill(Character* target, Character* attacker);
};


#endif //FIGHT_CLUB_JUMP_H
