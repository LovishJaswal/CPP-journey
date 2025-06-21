// This program demonstrates the use of if-else-if statements in C++
// It checks a student's marks and prints the corresponding grade

#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 50) {
        cout << "Grade: D" << endl;
    } else if (marks >= 0) {
        cout << "Grade: Fail" << endl;
    } else {
        cout << "Invalid input. Marks should be between 0 and 100." << endl;
    }

    // Example Output:
    // Enter your marks (0-100): 82
    // Grade: A

    return 0;
}
