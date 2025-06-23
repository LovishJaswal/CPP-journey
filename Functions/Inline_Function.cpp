#include <iostream>
#include <iomanip>  // for setprecision and fixed
using namespace std;

// ==========================================
// Inline Function: Calculates discounted price
// - Takes original price and discount %
// - Returns final price after discount
// - Marked as 'inline' for performance on short logic
// ==========================================
inline float getDiscountPrice(float a, float b){
    return a - (a * (b / 100));
}

int main(){
    // Set output to 2 decimal places for dollar formatting
    cout << fixed << setprecision(2);

    cout << "User 1: Thanks for shopping with xyz \nTotal bill: $10000\n";
    cout << "Your final price after adding a 5 percent discount: $" << getDiscountPrice(10000.00, 5) << endl;
    cout << "You saved: $" << 10000 - getDiscountPrice(10000.00, 5);

    cout << "\n\nUser 2: Thanks for shopping with xyz \nTotal bill: $3000.20\n";
    cout << "Your final price after adding a 10 percent discount: $" << getDiscountPrice(3000.20, 10) << endl;
    cout << "You saved: $" << 3000.20 - getDiscountPrice(3000.20, 10);

    cout << "\n\nUser 3: Thanks for shopping with xyz \nTotal bill: $1028.23\n";
    cout << "Your final price after adding a 15 percent discount: $" << getDiscountPrice(1028.23, 15) << endl;
    cout << "You saved: $" << 1028.23 - getDiscountPrice(1028.23, 15);
}
