// This code demonstrates the use of assignment operators in C++.
// It performs various operations such as addition, subtraction, multiplication, division, modulus,
// left shift, right shift, bitwise AND, bitwise OR, and bitwise XOR using assignment operators.
// The code initializes a variable and applies different assignment operations to it, printing the results.

#include<iostream>
using namespace std;

int main() {
    int a = 10; // Initialize a variable a with value 10

    // Arithmetic assignment operators
    cout << "Addition of 5 to a: " << (a += 5) << endl;       // a = a + 5 → 15
    cout << "Subtraction of 3 from a: " << (a -= 3) << endl;  // a = a - 3 → 12
    cout << "Multiplication of a by 2: " << (a *= 2) << endl; // a = a * 2 → 24
    cout << "Division of a by 4: " << (a /= 4) << endl;       // a = a / 4 → 6
    cout << "Modulus of a by 3: " << (a %= 3) << endl;        // a = a % 3 → 0

    // Bitwise and shift assignment operators
    cout << "Left shift of a by 1: " << (a <<= 1) << endl;    // a = a << 1 → 0  //Every left shift of 1 doubles the value, but since a is 0, it remains 0
    cout << "Right shift of a by 1: " << (a >>= 1) << endl;   // a = a >> 1 → 0  //Every right shift of 1 halves the value, but since a is 0, it remains 0
    cout << "Bitwise AND of a with 2: " << (a &= 2) << endl;  // a = a & 2 → 0
    cout << "Bitwise OR of a with 1: " << (a |= 1) << endl;   // a = a | 1 → 1
    cout << "Bitwise XOR of a with 3: " << (a ^= 3) << endl;  // a = a ^ 3 → 2

    // Output:
    // Addition of 5 to a: 15   
    // Subtraction of 3 from a: 12
    // Multiplication of a by 2: 24
    // Division of a by 4: 6
    // Modulus of a by 3: 0
    // Left shift of a by 1: 0
    // Right shift of a by 1: 0
    // Bitwise AND of a with 2: 0
    // Bitwise OR of a with 1: 1
    // Bitwise XOR of a with 3: 2

    return 0;
}
