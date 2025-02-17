#include "productreview.h"
#include "restaurnatreview.h"
using namespace std;

int main() {
    ProductReview book = ProductReview(3, "Excelence", "almost perfect", "10101", "dramat");
    book.displayDetails();
    cout << endl;
    //Social interactions
    book.like();
    book.like();
    book.share();
    book.addComment("i bought this book");
    cout << "after sociaable" << endl;
    book.displayDetails();
    RestaurantReview gospoda = RestaurantReview(1, "jakis", "takis", "Kuchnia Polska", true);
    gospoda.setTtitle("schabowy");
    gospoda.setDelivery(false);
    gospoda.displayDetails();

    return 0;
}
