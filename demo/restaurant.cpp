#include "restaurnatreview.h"

RestaurantReview::RestaurantReview(unsigned int r, const string &t, const string &txt, const string &ty, bool deliv) : Review(r, t, txt){
    setType(ty);
    setDelivery(deliv);
}

RestaurantReview::~RestaurantReview(){
    cout << "Restaurant object has been deleted" << endl;
}

void RestaurantReview::displayDetails(){
    Review::displayDetails();
    cout << "Cousine: " << type << endl; 
    cout << "Delivery: " << delivery<< endl; 
}

void RestaurantReview::setType(const string &ty){
    type = Review::validateAndTrim(ty, MAX_TYPE_LEN, "Cousine type");
}

void RestaurantReview::setDelivery(bool deliv){
    delivery = deliv;
}


