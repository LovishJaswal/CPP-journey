//This code demonstrates the use of a do-while loop in C++ to print numbers from a given positive integer down to 1.
// The do-while loop ensures that the body of the loop is executed at least once, even if the condition is false initially.

#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a positive integer: ";
    cin >> a; // Read input from the user

    // Do-while loop to print numbers from a down to 1

   if (a <= 0) {
    cout << "Please enter a number greater than 0." << endl;
} else {
    do {
        cout << a << " ";
        a--;
    } while (a > 0);
}

    // Output:
    // Enter a positive integer: 5
    // 5 4 3 2 1
    return 0;
}