// Program to demonstrate the use case of a for loop to print numbers till n
// This program uses a for loop to print numbers from 1 to n

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";  // Prompt user for input
    cin >> n;  // Read the input value into n

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl; // Print a newline for better readability

    // Output:
    // Enter a positive integer: 5
    // 1 2 3 4 5

    return 0;
}
