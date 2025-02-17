#ifndef EQ_H
#define EQ_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Eq{
    public:
        void addItem(const string &item);
        void displayInventory() const;
    private:
    vector<string> invetory;
};

#endif