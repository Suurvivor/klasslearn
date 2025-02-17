#include <iostream>

using namespace std;

class Thermo{
    public:
        Thermo(float t, unsigned int m, const string &l){
            temp = t;
            mode = m;
            location = l;
        }
        ~Thermo(){
            cout << "Thermostat in " << location << "has been destroed"<< endl;
        }

        void displayStatus(){
            cout << "Temperature:" << temp << "/5\nMode: " << (mode == 0 ? "OFF" : (mode == 1 ? "COOLING" : "HEATING")) << "\nLocation: " << location << endl;
        }

    private:
        float temp;
        unsigned int mode;
        string location;

};


int main(){
    Thermo livingRoom(22.5, 1, "Living Room");
    livingRoom.displayStatus();
    return 0;
}