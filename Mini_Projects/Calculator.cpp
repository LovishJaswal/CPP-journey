// Mini Project: Functional C++ Calculator  
// Implements arithmetic operations using separate reusable functions  
// Designed for modularity, clarity, and future extensibility

#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

// ==================== Function Declarations ====================

// Addition
float Addition(float a, float b) {
    return a + b;
}

// Subtraction
float Subtraction(float a, float b) {
    return a - b;
}

// Multiplication
float Multiplication(float a, float b) {
    return a * b;
}

// Division
float Division(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero is not allowed.\n";
        return -1;
    }
}

// Modulus
float Modulus(float a, float b) {
    if (b != 0)
        return fmod(a, b);
    else {
        cout << "Error: Modulus by zero is not allowed.\n";
        return -1;
    }
}

// Power
float Power(float a, float b) {
    return pow(a, b);
}

// Square Root
float Square_Root(float a) {
    if (a < 0) {
        cout << "Error: Cannot take square root of negative number.\n";
        return -1;
    } else {
        return sqrt(a);
    }
}

// Factorial
unsigned long long Factorial(int a) {
    if (a > 20) {
        cout << "Error: Number too large for factorial.\n";
        return 0;
    }

    if (floor(a) != a) {
        cout << "Error: Factorial only supports integers.\n";
        return 0;
    }

    if (a < 1) {
        cout << "Error: Input should be positive only!\n";
        return 0;
    } else if (a == 1) {
        return 1;
    } else {
        return a * Factorial(a - 1);
    }
}

// ==================== Core Logic ====================

void Choice(float num1, float num2) {
    int operation_num;

    do {
        cout << "Enter a number between 1 and 8 to perform an operation: \n";
        cin >> operation_num;
        if (operation_num >= 1 && operation_num <= 8)
            break;
        else {
            cout << "Invalid input! Try again\n";
        }
    } while (operation_num < 1 || operation_num > 8);

    switch (operation_num) {
        case 1:
            cout << num1 << " + " << num2 << " = " << Addition(num1, num2) << endl;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << Subtraction(num1, num2) << endl;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << Multiplication(num1, num2) << endl;
            break;
        case 4:
            cout << num1 << " / " << num2 << " = " << Division(num1, num2) << endl;
            break;
        case 5:
            cout << num1 << " % " << num2 << " = " << Modulus(num1, num2) << endl;
            break;
        case 6:
            cout << num1 << " ^ " << num2 << " = " << Power(num1, num2) << endl;
            break;
        case 7:
            cout << "√" << num1 << " = " << Square_Root(num1) << endl;
            break;
        case 8:
            cout << "The factorial of " << num1 << " is " << Factorial(static_cast<int>(num1)) << endl;
            break;
        default:
            cout << "Unexpected error in operation number.\n";
            break;
    }
}

void Calculator(float num1, float num2) {
    char option;

    do {
        cout << "Please enter your first number: ";
        cin >> num1;
        cout << "Please enter your second number: ";
        cin >> num2;

        cout << "Choose an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Power (a^b) — First number will be the base, second will be the exponent\n";
        cout << "7. Square Root (√n): Only first number will be considered, second will be ignored\n";
        cout << "8. Factorial (n!): Only first number will be considered, second will be ignored\n";

        Choice(num1, num2);

        cout << "\nShall we continue or terminate the program?" << endl;
        cout << "Press 'y' to continue or any other key to terminate the program\n";
        cin >> option;
        option = tolower(option);

    } while (option == 'y');
}

// ==================== Main Function ====================

int main() {
    cout << "Welcome to the Calculator project\n\n";
    float a, b;
    Calculator(a, b);
    cout << "\nThanks for using the calculator\n\n";
    return 0;
}
