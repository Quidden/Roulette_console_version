#ifndef CHARTER_H
#define CHARTER_H
#include <stdlib.h>
#include "iostream"
using namespace std;

class Charter
{
    private:
    short hp;
    short items;
    int score = 0;

    public:
    string name;
    int GetScore() {return score;}

    short GetHP() {return hp;}
    short SetHp(short damage)
    {
        hp -= damage;
        if (hp <= 0)
        {
            exit;
        }
    }
};



#endif //CHARTER_H
