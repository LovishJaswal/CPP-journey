#include<iostream>
using namespace std;

// Recursive Fibonacci function
int Fib(int a) {
    if (a < 0) {
        cout << "Error: Please enter a positive value.\n";
        return -1;  // Signal invalid input
    }
    if (a == 0 || a == 1)
        return a;

    return Fib(a - 1) + Fib(a - 2);
}

int main() {
    int num;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: Negative numbers are not allowed.\n";
        return 1;
    }

    cout << "The Fibonacci series of " << num << " terms is: ";
    for (int i = 0; i < num; i++) {
        cout << Fib(i) << " ";
    }

    cout << endl;
    return 0;
}
