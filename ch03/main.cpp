#include "warrior.h"

int main(){
    Warrior kev = Warrior("Kevin", 100, 15);
    kev.addItem("Sword"); 
    kev.addItem("Shield");
    kev.displayStatus();
    kev.attack(); 

    return 0;
}