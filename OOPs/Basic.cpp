#include<iostream>
using namespace std;
class Dog{
    public:
    string name;
    string breed;
    void details(){
        cout << "My dog's name is " << name << " and it's a " << breed << endl;
    }
};

int main(){

    Dog dog1;
    dog1.name = "Bruno";
    dog1.breed = "Pitbull";
    dog1.details();

    Dog dog2;
    dog2.name = "Rocky";
    dog2.breed = "Husky";
    dog2.details();

    Dog dog3;
    dog3.name = "Charlie";
    dog3.breed = "Labrador";
    dog3.details();

    Dog dog4;
    dog4.name = "jabru";
    dog4.breed = "desi";
    dog4.details();

    return 0;
}