// This program checks if a person is eligible to vote and/or stand in elections based on age.

#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18) {
        cout << "You are eligible to vote." << endl;

        if(age >= 25) {
            cout << "You are also eligible to stand in elections." << endl;
        }
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    // Example Output:
    // Enter your age: 26
    // You are eligible to vote.
    // You are also eligible to stand in elections.

    return 0;
}
