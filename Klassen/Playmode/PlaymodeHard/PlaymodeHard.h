#ifndef FIGHT_CLUB_PLAYMODEHARD_H
#define FIGHT_CLUB_PLAYMODEHARD_H

#include "../Playmode.h"

class Character;

class PlaymodeHard : public Playmode
{
    public:
        PlaymodeHard() {};
        virtual ~PlaymodeHard() {};

    void DesicionTree(Character* target, Character* attacker);
};

#endif FIGHT_CLUB_PLAYMODEHARD_H
