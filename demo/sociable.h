#ifndef SOCIABLE_H
#define SOCIABLE_H

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Sociable{
    public:
        Sociable() : timestamp(time(nullptr)){}
        void like() {++likes;}
        void share() {++shares;}

        void addComment(const string &comment);
        void displaySocialStats() const;
        time_t getTimeStamp()const {return timestamp;}
    protected:
        unsigned int likes = 0;
        unsigned int shares = 0;
        vector<string> comments;
        time_t timestamp;
};

#endif