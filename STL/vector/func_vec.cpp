//some functions in vectors 

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<string> cars = {"Volvo","Toyota","Nissan","BMW"};

    cout<<cars.front()<<endl; //gives the first element [0] --> Volvo
    cout<<cars.back()<<endl; //gives the last element [3] --> BMW
    cout<<cars.at(2); //gives the element at that index --> Nissan
    cout<<cars[5]; //does not give an error
    cout<<cars.at(5); //gives error --> std::out_of_range

    return 0;
}
