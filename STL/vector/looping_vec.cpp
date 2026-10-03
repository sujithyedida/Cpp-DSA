//looping a vector 

#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<string> cars={"BMW","Volvo","Nissan"};

    // first way of looping - more readable
    for (string car : cars){
        cout<<car<<endl;
    }

    //second way of looping - using size of the vector 
    for (int i=0; i<cars.size();i++){
        cout<<cars[i]<<endl;
    }
    

    return 0;
}