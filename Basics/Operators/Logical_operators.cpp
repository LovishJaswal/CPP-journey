// This code snippet demonstrates the use of logical operators in C++.
// It checks conditions using logical AND, OR, and NOT operators and prints the results.

#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Logical AND
    cout << (a > 0 && b > 0 ? "Both a and b are positive" : "At least one of a or b is not positive") << endl;

    // Logical OR
    cout << (a < 0 || b < 0 ? "At least one of a or b is negative" : "Both a and b are non-negative") << endl;

    // Logical NOT
    cout << (!(a == b) ? "a is not equal to b" : "a is equal to b") << endl;

    // Output:
    // Both a and b are positive
    // Both a and b are non-negative
    // a is not equal to b

    return 0;
}
