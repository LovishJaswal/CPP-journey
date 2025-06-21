// This code demonstrates the use of basic arithmetic operators in C++.
// It performs addition, subtraction, multiplication, division, and modulus operations on two integers.

#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Perform basic arithmetic operations
    int sum = a + b;           // Addition
    int difference = a - b;    // Subtraction
    int product = a * b;       // Multiplication
    int quotient = b / a;      // Division
    int remainder = b % a;     // Modulus

    // Display the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // Output:
    // Sum: 30  
    // Difference: -10
    // Product: 200
    // Quotient: 2
    // Remainder: 0

    return 0; 
}
