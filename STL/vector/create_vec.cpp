// create a vector and print them using for loop 

#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector<string> cars = {"Volvo","Toyota","Nissan"};

    for (string car : cars){
        cout<<car<<endl;
    }

    return 0;
}