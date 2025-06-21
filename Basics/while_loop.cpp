//While loop to print numbers till namespace name
#include<iostream>
using namespace std;
int main() {
    int n, i = 1; // Initialize i to 1
    cout << "Enter a positive integer: ";
    cin >> n;
    while ( i <= n) {
        cout << i << " ";
        i++; 
    }
    return 0;
}