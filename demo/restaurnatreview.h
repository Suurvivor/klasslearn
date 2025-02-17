#ifndef RESTAURANT_REVIEW_H
#define RESTAURNAT_REVIEW_H

#include "review.h"

class RestaurantReview : public Review{
    public:
        RestaurantReview(unsigned int r, const string &t, const string &txt, const string &ty, bool deliv);
        ~RestaurantReview();
        void displayDetails();
        void setType(const string &ty);
        void setDelivery(bool deliv);
    private:
        static const unsigned int MAX_TYPE_LEN = 64;
        string type;
        bool delivery;
};

#endif