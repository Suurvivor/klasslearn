#include "sociable.h"

void Sociable::addComment(const string &comment){
    comments.push_back(comment);
}

void Sociable::displaySocialStats() const {
    cout << "Likes: " << likes << " Shares: " << shares << " comments: " << comments.size() << endl;
}