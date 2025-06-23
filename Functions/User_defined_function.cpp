#include<iostream>
#include <cmath>
using namespace std;

// User Defined Function named as Factorial
long long Factorial(float a){
    
    if (floor(a) != a) {
        cout << "Error: Factorial only supports integers.\n";
        return -1;
    }
    
    if(a > 20){                                                // Factorials above 20 can't be stored in long long safely.
        cout << "Error: Number too large to calculate\n";
        return -1;
    }

    if(a < 0){
        cout << "Error: Enter a positive number only\n";
        return -1;
    }

    if(a == 0 || a == 1)
        return 1;
    
    return a * Factorial(a - 1);
}

// Main Function
int main(){
    float num;
    cout << "Welcome to the Factorial Calculator\n\n";
    cout << "Enter your number: ";
    cin >> num;

    // Calling the function
    cout << "The Factorial of " << num << " is " << Factorial(num) << endl;
}
