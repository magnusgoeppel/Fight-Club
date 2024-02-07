#ifndef FIGHT_CLUB_PLAYMODE_H
#define FIGHT_CLUB_PLAYMODE_H

class Character;

class Playmode
{
    public :
        Playmode() {};
        virtual ~Playmode() {};

        virtual void DesicionTree(Character* target, Character* attacker) = 0;

    private:
};

#endif //FIGHT_CLUB_PLAYMODE_H
