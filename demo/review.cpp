#include "review.h"

using namespace std;

Review::Review(unsigned int r, const string& t, const string& txt){
    setRating(r);
    setTtitle(t);
    setText(txt);
}

Review::~Review(){
    cout << "Review object is being deleted" << endl;
}


void Review::displayDetails() const{
    ++accViews;
    cout << "Rating" << rating << "/5\nTitle: " << title << "\nText: " << text << "Vieved: " << accViews << " times" << endl;
}

void Review::setRating(unsigned int r){
    if (r < MIN_RATING || r > MAX_RATING){
        throw invalid_argument("Rating must be beetween 1 and 5");
    }
    rating = r;
}

void Review::setTtitle(const string& t){
    title = validateAndTrim(t, MAX_TITLE_LENGTH, "Title");
}

void Review::setText(const string& txt){
    text = validateAndTrim(txt, MAX_TEXT_LENGTH, "Text");
}

string Review::validateAndTrim(const string& str, unsigned int maxlength, const string& fieldName) const{
    if (str.empty()){
        throw invalid_argument(fieldName + " cannot be empty");
    }

    return str.length() > maxlength ? str.substr(0, maxlength) : str;
}