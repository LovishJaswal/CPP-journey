#include<iostream>
using namespace std;

void greetUser(string a, string b = "🙂"){
    cout << "Hello, " << a << b << endl;
}

int main(){
string name;
string emoji;

    greetUser("Manan");
    greetUser("Neha","✅");
}