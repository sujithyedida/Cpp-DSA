//Understanding constructors in oops

#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string colour;
        int price;
};

int main(){

    //creating an object with Car class
    Car C1; //constructor's call 
    //now after the object is created the memory allocation happens
    C1.name="BMW";
    C1.colour="white";
    C1.price=100000;

    return 0;
}