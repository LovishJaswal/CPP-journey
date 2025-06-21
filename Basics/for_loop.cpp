//For loop to print numbers till n
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}