//accessing elements of the cars vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<string> cars={"Volvo","Toyota","Nissan"};
    
    cout<<cars[1]; //--> output : Toyota
    cout<<cars[2]; //--> output : Nissan

    return 0;
}