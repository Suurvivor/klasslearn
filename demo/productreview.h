#ifndef PRODUCT_REVIEW_H
#define PRODUCT_REVIEW_H
#include <iostream>
#include "review.h"

using namespace std;
class ProductReview : public Review{
    public:
        ProductReview(unsigned int r, const string &t, const string &txt, const string &id, const string &cat);
        ~ProductReview();
        void displayDetails() const;
        string getProductId() const { return productId; }
        string getCategory() const {return category;}
        void setProductId(const string &id);
        void setCategory(const string &cat);

    private:
    static const unsigned int MAX_PRODUCTID_LENGTH = 64;
    static const unsigned int MAX_CATEGORY_LENGTH = 512;

    string productId;
    string category;
};

#endif