#include "warrior.h"

using namespace std;

Warrior::Warrior(const string &name, int health, int strength) : Character(name, health), strength(strength){}

void Warrior::attack() const{
    //todo implement attack including strength bonus
    cout << name << " attacks for " << BASE_DAMAGE + strength << " damage! " << "(" << BASE_DAMAGE << " + " << strength << " strength)" << endl;
}

void Warrior::displayStatus() const{
    // todo implement stats dipslay including streng and eq
    Character::displayStatus();
    cout << "Strength: " << strength <<endl;
    equipment.displayInventory();
}

void Warrior::addItem(const string &item){
    //todo use eq member to add item
    equipment.addItem(item);
}