// Program to demonstrate the use of a while loop to print numbers till n

#include<iostream>
using namespace std;

int main() {
    int n, i = 1; // Initialize i to 1

    cout << "Enter a positive integer: ";
    cin >> n;

    // Loop from 1 to n using while
    while (i <= n) {
        cout << i << " ";
        i++; 
    }

    cout << endl; // Print a newline for better readability

    // Output:
    // Enter a positive integer: 5
    // 1 2 3 4 5

    return 0;
}
