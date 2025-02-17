#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

using namespace std;

class Character{
    public:
        Character(const string &name, int health);
        void attack() const;
        void displayStatus() const;
    protected:
        string name;
        int health;
        static const int BASE_DAMAGE = 10;
};

#endif