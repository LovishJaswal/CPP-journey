#include<iostream>
using namespace std;

//----------------------------------------------------------------------Normal Variable

void hello1() {
    int x = 0;
    x++;
    cout << x << endl;
}
//Call hello() 3 times, you’ll get:
//1
//1
//1

//----------------------------------------------------------------------Static Variable

void hello2() {
    static int x = 0;
    x++;
    cout << x << endl;
}
//Call hello() 3 times, and you'll get:
//1
//2
//3

//----------------------------------------------------------------------

int main(){
    cout << "Normal variable output:\n";
    hello1();
    hello1();
    hello1();

    cout << "\nStatic variable output:\n";
    hello2();
    hello2();
    hello2();
}
