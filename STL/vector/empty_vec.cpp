//clearing the entire vector and also checking whether it is empty or not

#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<string> cars={"BMW","Volvo","Nissan"};
    //empty used to check whether the function is empty or not
    cout<<cars.empty()<<endl; // not empty --> 0
    cars.clear(); //clears the entire vector 
    cout<<cars.empty(); // empty --> 1

    return 0;
}