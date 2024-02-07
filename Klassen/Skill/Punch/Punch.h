#ifndef FIGHT_CLUB_PUNCH_H
#define FIGHT_CLUB_PUNCH_H

#include "../Skill.h"

class Character;

class Punch : public Skill
{
    public:
        Punch() {};
        virtual ~Punch() {};

        void useSkill(Character* target, Character* attacker);


    private:

};

#endif //FIGHT_CLUB_PUNCH_H
