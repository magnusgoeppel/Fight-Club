#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "../Skill/Skill.h"

using namespace std;

class Character
{
    public:
        Character();
        //Character(string skill1, string skill2);
        virtual ~Character();

        int getHealth();
        void setHealth(int health);
        void setSkill1(string skill1);
        void setSkill2(string skill2);
        string getSkill1() const;
        string getSkill2() const;
        void createSkills(string skill1, string skill2, int player);
        void useSkill(Character* target, int player, int skill);
        void delete_Skills(int player);
        string getLastUsedSkill() const;
        void setLastUsedSkill(string lastUsedSkill);
        void setWins(int wins);
        void setLosses(int losses);
        int getWins() const;
        int getLosses() const;
        void setDraws(int draws);
        int getDraws() const;
        
    private:
        int health;
        int wins;
        int losses;
        int draws;
        string lastUsedSkill;

        string skill1;
        string skill2;

        Skill* skill1_player1;
        Skill* skill2_player1;

        Skill* skill1_player2;
        Skill* skill2_player2;
};

#endif //FIGHT_CLUB_CHARACTER_H
