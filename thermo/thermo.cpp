#include "thermo.h"

using namespace std;

Thermo::Thermo(float t, unsigned int m, const string& l){
    temp = t;
    mode = m;
    location = l;
}

Thermo::~Thermo(){
    cout << "Thermo object is being deleted" << endl;
}


void Thermo::displayStatus() const{
    cout << "Temperature:" << temp << "/5\nMode: " << mode << "\nLocation: " << location << endl;
}