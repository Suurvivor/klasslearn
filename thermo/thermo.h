#ifndef THERMO_H
#define THERMO_H

#include <iostream>

using namespace std;

class Thermo{
    public: 
        Thermo(float t, unsigned int m, const string& l);
        ~Thermo();
        void displayStatus() const;
    
    private:
        float temp;
        unsigned int mode;
        string location;
};

#endif