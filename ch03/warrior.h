#ifndef WARRIOR_H
#define WARRIOR_H

#include "character.h"
#include "eq.h"

using namespace std;


//todo inherit from character, use composition to integrate eq behavior
class Warrior: public Character{
    public:
        Warrior(const string &name, int health, int strength);
        void attack() const; // todo override to ioncluide str bonus
        void displayStatus() const; // todo override to show str and eq
        void addItem(const string &item);

    private:
        int strength;
        Eq equipment;
        //todo add eq member

};

#endif