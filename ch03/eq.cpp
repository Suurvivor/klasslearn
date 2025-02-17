#include "eq.h"

using namespace std;

void Eq::addItem(const string &item){
    invetory.push_back(item);
}

void Eq::displayInventory() const {
    cout << "Equipment:" << endl;
    for (const auto &item : invetory){
        cout <<"- " << item << endl;
    }
}