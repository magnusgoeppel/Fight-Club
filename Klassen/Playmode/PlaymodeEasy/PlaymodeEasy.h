#ifndef FIGHT_CLUB_PLAYMODEEASY_H
#define FIGHT_CLUB_PLAYMODEEASY_H

#include "../Playmode.h"

class Character;

class PlaymodeEasy: public Playmode
{
 public:
    PlaymodeEasy() {};
    virtual ~PlaymodeEasy() {};

    void DesicionTree(Character* target, Character* attacker);

  private:

};

#endif //FIGHT_CLUB_PLAYMODEEASY_H
