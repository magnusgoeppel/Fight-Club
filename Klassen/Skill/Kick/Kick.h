#ifndef FIGHT_CLUB_KICK_H
#define FIGHT_CLUB_KICK_H

#include "../Skill.h"

class Character;

class Kick : public Skill
{
    public:
        Kick() {};
        virtual ~Kick() {};

        void useSkill(Character* target, Character* attacker);
};


#endif //FIGHT_CLUB_KICK_H
