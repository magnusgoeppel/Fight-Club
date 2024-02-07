#ifndef FIGHT_CLUB_GAMEMANAGER_H
#define FIGHT_CLUB_GAMEMANAGER_H
#include <string>
#include "../Character/Character.h"
#include "../Skill/Skill.h"
#include "../Skill/Kick/Kick.h"
#include "../Skill/Punch/Punch.h"
#include "../Skill/Block/Block.h"
#include "../Skill/Jump/Jump.h"
#include "../Playmode/PlaymodeEasy/PlaymodeEasy.h"
#include "../Playmode/PlaymodeHard/PlaymodeHard.h"

using namespace std;

class GameManager
{
    public:
        GameManager();
        virtual ~GameManager();

        void startGame();
        void chooseSkills(int choosePlayer);
        void playmode();
        void createEnemySkills();
        void fight();
        void fight_player();
        void fight_computer();
        void statistics();
        int checkifWon();

    private:
        int round;
        string chooseEnemy;
        int chooseSkillCounter;
        string chooseSkill;
        Character* fighter1;
        Character* fighter2;

        PlaymodeEasy* Easy;
        PlaymodeHard* Hard;

};

#endif //FIGHT_CLUB_GAMEMANAGER_H
