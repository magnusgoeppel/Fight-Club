#include <iostream>
#include "GameManager.h"
#include <string>
#include <cstdlib>

using namespace std;

GameManager::GameManager()
{
    fighter1 = new Character();
    fighter2 = new Character();

    PlaymodeEasy* easy = nullptr;
    PlaymodeHard* hard = nullptr;

    startGame();
}

GameManager::~GameManager()
{
    fighter1->delete_Skills(1);
    delete fighter1;
    fighter2->delete_Skills(2);
    delete fighter2;

}
void GameManager::startGame()
{
    cout << "-----------------------------------------------" << endl;
    cout << "Willkommen im Fight Club" << endl;
    cout << "-----------------------------------------------" << endl;
    cin.get();
    system("cls");

    chooseSkills(1);
    playmode();
    fight();
    startGame();
}

void GameManager::chooseSkills(int choosePlayer)
{
    chooseSkillCounter = 0;
    string skill1 = "";
    string skill2 = "";
    bool punchChosen = false;
    bool kickChosen = false;
    bool blockChosen = false;
    bool jumpChosen = false;

    cout << "-----------------------------------------------" << endl;
    cout << "Dein Charakter besitze insgesamt 2 Faehigkeiten" << endl;
    cout << "-----------------------------------------------" << endl;

    while (chooseSkillCounter < 2)
    {
        cout << "Waehle eine Faehigkeit: (Punch, Kick, Block, Jump): " << endl;
        cin >> chooseSkill;

        if (chooseSkill == "Punch" && !punchChosen)
        {
            punchChosen = true;
        }
        else if (chooseSkill == "Kick" && !kickChosen)
        {
            kickChosen = true;
        }
        else if (chooseSkill == "Block" && !blockChosen)
        {
            blockChosen = true;
        }
        else if (chooseSkill == "Jump" && !jumpChosen)
        {
            jumpChosen = true;
        }
        else if ((chooseSkill == "Punch" && punchChosen) ||
                 (chooseSkill == "Kick" && kickChosen) ||
                 (chooseSkill == "Block" && blockChosen) ||
                 (chooseSkill == "Jump" && jumpChosen))
        {
            cout << "Die Faehigkeit wurde bereits gewaehlt" << endl;
            continue;
        }
        else
        {
            cout << "Ungueltige Eingabe" << endl;
            continue;
        }

        if (chooseSkillCounter == 0)
        {
            if (choosePlayer == 1)
            {
                fighter1->setSkill1(chooseSkill);
            }
            else
            {
                fighter2->setSkill1(chooseSkill);

            }
        }
        else
        {
            if (choosePlayer == 1)
            {
                fighter1 -> setSkill2(chooseSkill);
                fighter1 -> createSkills(fighter1 -> getSkill1(), fighter1 -> getSkill2(), 1);
            }
            else
            {
                fighter2 -> setSkill2(chooseSkill);
                fighter2 -> createSkills(fighter2 -> getSkill1(), fighter2 -> getSkill2(), 2);
            }
        }
        ++chooseSkillCounter;
    }
    system("cls");
}

void GameManager::playmode()
{
    while(true)
    {
        cout << "Moechtest du gegen einen anderen Spieler oder gegen den Computer kaempfen? (Spieler, Computer)" << endl;
        cin >> chooseEnemy;

        if (chooseEnemy == "Spieler")
        {
            system("cls");
            chooseSkills(2);
            break;
        }
        else if (chooseEnemy == "Computer")
        {
            system("cls");
            createEnemySkills();
            break;
        }
        else
        {
            cout << "Ungueltige Eingabe" << endl;
        }
    }
}

void GameManager::createEnemySkills()
{
    srand (time(NULL));

    chooseSkillCounter = 0;

    while (chooseSkillCounter < 2)
    {
        int randomSkill = rand() % 4;

        if (randomSkill == 0)
        {
            chooseSkill = "Punch";

        }
        else if (randomSkill == 1)
        {
            chooseSkill = "Kick";
        }
        else if (randomSkill == 2)
        {
            chooseSkill = "Block";
        }
        else
        {
            chooseSkill = "Jump";
        }

        if(chooseSkillCounter == 0)
        {
            fighter2 -> setSkill1(chooseSkill);
        }
        else
        {
            fighter2 -> setSkill2(chooseSkill);
            fighter2 -> createSkills(fighter2 -> getSkill1(), fighter2 -> getSkill2(), 2);
        }
        if (fighter2 -> getSkill1() != fighter2 -> getSkill2())
        {
            ++chooseSkillCounter;
        }
    }
}

void GameManager::fight()
{
    round = 1;

    if (chooseEnemy == "Spieler")
    {
        fight_player();
    }
    else
    {
        fight_computer();
    }
}

void GameManager::fight_player()
{
    cout << "Runde " << round  << endl << endl;
    cout << "Spieler 1 (Lebenspunkte: " << fighter1 -> getHealth()
         << ", Faehigkeit 1: " << fighter1 -> getSkill1()
         << ", Faehigkeit 2: " << fighter1 -> getSkill2() << ")" << endl;

    cout << "Spieler 2 (Lebenspunkte: " << fighter2 -> getHealth()
            << ", Faehigkeit 1: " << fighter2 -> getSkill1()
            << ", Faehigkeit 2: " << fighter2 -> getSkill2() << ")" << endl << endl;


    while (true)
    {
        cout << "Spieler 1 welche Faehigkeit möchtest du einsetzen" << endl;
        cin >> chooseSkill;
        fighter1 ->setLastUsedSkill(chooseSkill);

        if (chooseSkill == fighter1 -> getSkill1())
        {
            fighter1 -> useSkill(fighter2, 1,1);
            break;
        }
        else if (chooseSkill == fighter1 -> getSkill2())
        {
            fighter1 -> useSkill(fighter2, 1,2);
            break;
        }
        else
        {
            cout << "Ungueltige Eingabe" << endl;

        }
    }

    while (true)
    {
        cout << "Spieler 2 welche Faehigkeit moechtest du einsetzen" << endl;
        cin >> chooseSkill;
        fighter2 ->setLastUsedSkill(chooseSkill);

        if(chooseSkill == fighter2 -> getSkill1())
        {
            fighter2 -> useSkill(fighter1,2,1);
            break;
        }
        else if (chooseSkill == fighter2 -> getSkill2())
        {
            fighter2 -> useSkill(fighter1,2,2);
            break;
        }
        else
        {
            cout << "Ungueltige Eingabe" << endl;
        }
    }
    cin.get();
    system("cls");
    ++round;
    if(!checkifWon())
    {
        fight_player();
    }
}

void GameManager::statistics()
{
    cout << "Statistiken" << endl << endl;
    cout << "Spieler 1" << endl;
    cout << "Wins: " << fighter1 -> getWins() << endl;
    cout << "Losses: " << fighter1 -> getLosses() << endl << endl;

    cout << "Spieler 2" << endl;
    cout << "Wins: " << fighter2 -> getWins() << endl;
    cout << "Losses: " << fighter2 -> getLosses() << endl << endl;

    cout << "Unentschieden: " << fighter1 -> getDraws() << endl << endl;

    cin.get();
    system("cls");
}

void GameManager::fight_computer()
{
    string chooseDifficulty;
    cout << "Welchen Schwierigkeitsgrad moechtest du waehlen? (Easy, Hard)" << endl;
    cin >> chooseDifficulty;

    if (chooseDifficulty == "Easy" || chooseDifficulty == "easy")
    {
        Easy = new PlaymodeEasy();
    }
    else if (chooseDifficulty == "Hard" || chooseDifficulty == "hard")
    {
        Hard = new PlaymodeHard();
    }
    else
    {
        cout << "Ungueltige Eingabe" << endl;
        fight_computer();
    }
    system("cls");

    while (true)
    {
        cout << "Runde " << round  << endl << endl;

        cout << "Spieler 1 (Lebenspunkte: " << fighter1 -> getHealth()
             << ", Faehigkeit 1: " << fighter1 -> getSkill1()
             << ", Faehigkeit 2: " << fighter1 -> getSkill2() << ")" << endl;

        cout << "Spieler 2 (Computer) (Lebenspunkte: " << fighter2 -> getHealth()
             << ", Faehigkeit 1: " << fighter2 -> getSkill1()
             << ", Faehigkeit 2: " << fighter2 -> getSkill2() << ")" << endl << endl;


        while (true)
        {
            cout << "Spieler 1 welche Faehigkeit moechtest du einsetzen" << endl;
            cin >> chooseSkill;
            fighter1 ->setLastUsedSkill(chooseSkill);

            if (chooseSkill == fighter1 -> getSkill1())
            {
                fighter1 -> useSkill(fighter2, 1,1);
                break;
            }
            else if (chooseSkill == fighter1 -> getSkill2())
            {
                fighter1 -> useSkill(fighter2, 1,2);
                break;
            }
            else
            {
                cout << "Ungueltige Eingabe" << endl;
            }
        }

        if (chooseDifficulty == "Easy" || chooseDifficulty == "easy")
        {
            Easy -> DesicionTree(fighter1, fighter2);
        }
        else if (chooseDifficulty == "Hard" || chooseDifficulty == "hard")
        {
            Hard -> DesicionTree(fighter1, fighter2);
        }
        cout << "Computer wählt die Fähigkeit" << fighter2 -> getLastUsedSkill() << endl << endl;
        cin.get();
        system("cls");
        ++round;
        if(checkifWon())
        {
            if (chooseDifficulty == "Easy" || chooseDifficulty == "easy")
            {
                delete Easy;
            }
            else if (chooseDifficulty == "Hard" || chooseDifficulty == "hard")
            {
                delete Hard;
            }
            break;
        }
    }

}

int GameManager::checkifWon()
{
    if(fighter1 -> getHealth() <= 0 || fighter2 -> getHealth() <= 0)
    {
        if (fighter1 -> getHealth() <= 0 && fighter2 -> getHealth() <= 0)
        {
            cout << "Unentschieden" << endl << endl;
            fighter1 -> setDraws(fighter1 -> getDraws() + 1);
            fighter2 -> setDraws(fighter2 -> getDraws() + 1);
        }
        else if(fighter1 -> getHealth() <= 0)
        {
            cout << "Spieler 2 hat gewonnen" << endl << endl;
            fighter2 -> setWins(fighter2 -> getWins() + 1);
            fighter1 -> setLosses(fighter1 -> getLosses() + 1);
        }
        else
        {
            cout << "Spieler 1 hat gewonnen" << endl << endl;
            fighter1 -> setWins(fighter1 -> getWins() + 1);
            fighter2 -> setLosses(fighter2 -> getLosses() + 1);
        }
        fighter1 -> setHealth(100);
        fighter2 -> setHealth(100);
        cin.get();
        system("cls");
        statistics();
        return 1;
    }
    return 0;
}

