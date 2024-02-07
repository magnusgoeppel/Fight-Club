#include <iostream>
#include "Character.h"
#include "../Skill/Skill.h"
#include "../Skill/Punch/Punch.h"
#include "../Skill/Kick/Kick.h"
#include "../Skill/Block/Block.h"
#include "../Skill/Jump/Jump.h"

using namespace std;

Character::Character()
{
    this -> health = 100;

    this -> wins = 0;
    this -> losses = 0;
    this -> draws = 0;

    this -> skill1 = "";
    this -> skill2 = "";

    this -> skill1_player1 = nullptr;
    this -> skill2_player1 = nullptr;
    this -> skill1_player2 = nullptr;
    this -> skill2_player2 = nullptr;
}

Character::~Character()
{

}

void Character::delete_Skills(int player)
{
    if (player == 1)
    {
        delete skill1_player1;
        delete skill2_player1;
    }
    else
    {
        delete skill1_player2;
        delete skill2_player2;
    }
}


int Character::getHealth()
{
    return health;
}


void Character::setSkill1(string skill1)
{
    this -> skill1 = skill1;
}

void Character::setSkill2(string skill2)
{
    this -> skill2 = skill2;
}

string Character::getSkill1() const
{
    return skill1;
}

string Character::getSkill2() const
{
    return skill2;
}

void Character::setHealth(int health)
{
    this -> health = health;
}


void Character::createSkills(string skill1, string skill2, int player)
{
    if (player == 1)
    {
        if (skill1 == "Punch")
        {
            this -> skill1_player1 = new Punch();
        }
        else if (skill1 == "Kick")
        {
            this -> skill1_player1 = new Kick();
        }
        else if (skill1 == "Block")
        {
            this -> skill1_player1 = new Block();
        }
        else
        {
            this -> skill1_player1 = new Jump();
        }

        if (skill2 == "")
        {
            this -> skill2_player1 = new Punch();
        }
        else if (skill2 == "Kick")
        {
            this -> skill2_player1 = new Kick();
        }
        else if (skill2 == "Block")
        {
            this -> skill2_player1 = new Block();
        }
        else
        {
            this -> skill2_player1 = new Jump();
        }
    }
    else
    {
        if(skill1 == "Punch")
        {
            this -> skill1_player2 = new Punch();
        }
        else if(skill1 == "Kick")
        {
            this -> skill1_player2 = new Kick();
        }
        else if(skill1 == "Block")
        {
            this -> skill1_player2 = new Block();
        }
        else
        {
            this -> skill1_player2 = new Jump();
        }

        if(skill2 == "Punch")
        {
            this -> skill2_player2 = new Punch();
        }
        else if(skill2 == "Kick")
        {
            this -> skill2_player2 = new Kick();
        }
        else if(skill2 == "Block")
        {
            this -> skill2_player2 = new Block();
        }
        else
        {
            this -> skill2_player2 = new Jump();
        }
    }
}

void Character::useSkill(Character* target, int player, int skill)
{
    if (player == 1)
    {
        if (skill == 1)
        {
            skill1_player1 -> useSkill(target, this);
        }
        else
        {
            skill2_player1 -> useSkill(target, this);
        }
    }
    else
    {
        if (skill == 1)
        {
            skill1_player2 -> useSkill(target, this);
        }
        else
        {
            skill2_player2 -> useSkill(target, this);
        }
    }
}

string Character::getLastUsedSkill() const
{
   return lastUsedSkill;
}

void::Character::setLastUsedSkill(string lastUsedSkill)
{
    this -> lastUsedSkill = lastUsedSkill;
}

void Character::setWins(int wins)
{
    this -> wins = wins;
}

void Character::setLosses(int losses)
{
    this -> losses = losses;
}

int Character::getWins() const
{
    return wins;
}

int Character::getLosses() const
{
    return losses;
}

void Character::setDraws(int draws)
{
    this->draws = draws;
}

int Character::getDraws() const
{
    return draws;
}



