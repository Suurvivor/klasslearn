#ifndef REVIEW_H
#define REVIEW_H

#include <iostream>

using namespace std;

class Review{
    public: 
        Review(unsigned int r, const string& t, const string& txt);
        ~Review();
        void displayDetails() const;
        unsigned int getRating() const {return rating;}
        string getTitle() const {return title;}
        string getText() const {return text;}

        void setRating(unsigned int r);
        void setTtitle(const string& t);
        void setText(const string& txt);


    private:
        friend class Reviewbot;
        static const unsigned int MIN_RATING = 1;
        static const unsigned int MAX_RATING = 5;
        static const unsigned int MAX_TITLE_LENGTH = 128;
        static const unsigned int MAX_TEXT_LENGTH = 1024;

        string validateAndTrim(const string& str, unsigned int maxlength, const string& fieldName) const;
        unsigned int rating;
        string title;
        string text;
        mutable unsigned int accViews = 0;
};

#endif