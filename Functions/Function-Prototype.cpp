#include<iostream>
using namespace std;

// Function prototype
void greetUser(string name);

int main() {
    greetUser("Lovish");
    return 0;
}

// Function defined after main
void greetUser(string name) {
    cout << "Hello, " << name << "!" << endl;
}
