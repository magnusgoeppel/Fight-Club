#ifndef FIGHT_CLUB_BLOCK_H
#define FIGHT_CLUB_BLOCK_H

#include "../Skill.h"

class Character;

class Block : public Skill
{
    public:
        Block() {};
        virtual ~Block() {};

    void useSkill(Character* target, Character* attacker);
};


#endif //FIGHT_CLUB_BLOCK_H
