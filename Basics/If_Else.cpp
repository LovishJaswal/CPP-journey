// Program to demonstrate the use case of if-else statements in C++
// This program checks if a person is eligible to vote based on their age (input by user)

#include<iostream>
using namespace std;

int main() {
    int age;

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Check if the age is greater than or equal to 18
    if (age >= 18) {
        cout << "You are eligible to vote" << endl;
    } else {
        cout << "You are not eligible to vote" << endl;
    }

    // Output:
    // Enter your age: 20
    // You are eligible to vote

    return 0;
}
