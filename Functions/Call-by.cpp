#include<iostream>
using namespace std;
float checkBalance(float balance){
    return balance;
}
float addInterest(float &balance){
    balance = balance + 0.05*(balance);
    return balance;
}

int main(){
    float balance = 10000;
    cout << "Current Balance: " << checkBalance(balance) << endl;
    cout << "Interest of 5 percent have been applied!" << endl;
    cout << "Updated Balance: " << addInterest(balance);
}