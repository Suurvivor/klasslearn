#include "character.h"

Character::Character(const string &name, int health) : name(name), health(health){}

void Character::attack() const{
    cout << name << "attacks for " << BASE_DAMAGE << " damage!" << endl;
}

void Character::displayStatus() const{
    cout << "character Stats:\n"
         << "Name: " << name << "\n"
         << "Health: " << health << endl;
}