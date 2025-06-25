#include<iostream>
using namespace std;

void printBill(const string itemName, const float price){
    cout << "The price of " << itemName << " is " << price << " Rs." << endl;
}


int main(){
    printBill("Laptop", 100000);
    printBill("Pen", 10);
    printBill("Pencil", 5);
return 0;
}