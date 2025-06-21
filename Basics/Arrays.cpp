// Program to demonstrate the use of arrays in C++
// This program initializes a character array and prints its elements

#include<iostream>
using namespace std;

int main() {

    char arr[11] = "HelloWorld"; // Declare and initialize a character array

    // Note: The array size is larger than the string to accommodate the null terminator

    for(int i = 0; i < 10; i++) { // Loop through the array
        cout << arr[i]; // Print each character
    }

    //output : HelloWorld
    cout << endl; // Print a newline for better readability
    return 0;
}