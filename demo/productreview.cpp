#include "productreview.h"

using namespace std;

ProductReview::ProductReview(unsigned int r, const string &t, const string &txt, const string &id, const string &cat) : Review(r, t, txt){
    setProductId(id);
    setCategory(cat);
}

ProductReview::~ProductReview(){
    cout << "Project review object deleted" << endl;
}

void ProductReview::displayDetails() const {
    Review::displayDetails();
    cout << "Product: " << productId << endl;
    cout << "Category: " << category << endl; 
}

void ProductReview::setProductId(const string &id){
    productId = Review::validateAndTrim(id, MAX_PRODUCTID_LENGTH, "Product id");
}
void ProductReview::setCategory(const string &cat){
    productId = Review::validateAndTrim(cat, MAX_CATEGORY_LENGTH, "Product category");
}