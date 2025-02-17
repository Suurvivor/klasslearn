#include "review.h"
#include "reviewbot.h"
using namespace std;

int main() {
    Review review = Review(5, "cos", "i cos");
    review.setRating(5);
    review.setTtitle("good");
    review.setText("almost perfect");
    Reviewbot bot;
    bot.fixFormatting(review);
    review.displayDetails();
    return 0;
}
