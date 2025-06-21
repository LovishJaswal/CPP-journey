// This code demonstrates the use of comparison operators in C++.
// It compares two integers and prints the results of various comparisons.

#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Equality check
    cout << (a == b ? "a is equal to b" : "a is not equal to b") << endl;

    // Inequality check
    cout << (a != b ? "a is not equal to b" : "a is equal to b") << endl;

    // Less than check
    cout << (a < b ? "a is less than b" : "a is not less than b") << endl;

    // Greater than check
    cout << (a > b ? "a is greater than b" : "a is not greater than b") << endl;

    // Less than or equal to check
    cout << (a <= b ? "a is less than or equal to b" : "a is not less than or equal to b") << endl;

    // Greater than or equal to check
    cout << (a >= b ? "a is greater than or equal to b" : "a is not greater than or equal to b") << endl;

    // Output:
    // a is not equal to b
    // a is not equal to b
    // a is less than b
    // a is not greater than b
    // a is less than or equal to b
    // a is not greater than or equal to b

    return 0;
}
