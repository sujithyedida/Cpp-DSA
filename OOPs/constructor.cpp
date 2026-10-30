//Understanding constructors in oops

#include<iostream>
#include<string>
using namespace std;

class Car{
    public:

        //this works when the constructor is created
        Car(){
            year = 2026;
        }

        string name;
        string colour;
        int price;
        int year;
};

int main(){

    //creating an object with Car class
    Car C1; //constructor's call 
    //now after the object is created the memory allocation happens
    C1.name="BMW";
    C1.colour="white";
    C1.price=100000;

    cout<<"The year of manufacturing is "<<C1.year<<endl;  //output is 2026 as it is mentioned in the constructor when it is called

    return 0;
}
