#ifndef FIGHT_CLUB_SKILL_H
#define FIGHT_CLUB_SKILL_H

class Character;

class Skill
{
    public:
        Skill() {};
        virtual ~Skill() {};

        virtual void useSkill(Character* target, Character* attacker) = 0;


    protected:
        int damage;
        int block;

};

#endif //FIGHT_CLUB_SKILL_H
