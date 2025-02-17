#include "warrior.h"

using namespace std;

Warrior::Warrior(const string &name, int health, int strength) : Character(name, health), strength(strength){}

void Warrior::attack() const{
    //todo implement attack including strength bonus
}

void Warrior::displayStatus() const{
    // todo implement stats dipslay including streng and eq
}

void Warrior::addItem(const string &item){
    //todo use eq member to add item
}